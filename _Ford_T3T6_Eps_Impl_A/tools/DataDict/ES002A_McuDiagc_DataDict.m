%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 28-Jun-2016 18:39:17       %
%                                  Created with tool release: 2.43.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES002A = DataDict.FDD;
ES002A.Version = '2.4.X';
ES002A.LongName = 'MCU Diagnostic';
ES002A.ShoName  = 'McuDiagc';
ES002A.DesignASIL = 'D';
ES002A.Description = [...
  'This FDD contains uCDiagnostics that are implemented purely with softw' ...
  'are and are not dependent upon electrical architecture.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
McuDiagcInit1 = DataDict.Runnable;
McuDiagcInit1.Context = 'Rte';
McuDiagcInit1.TimeStep = 0;
McuDiagcInit1.Description = 'Init runnable';

McuDiagcPer1 = DataDict.Runnable;
McuDiagcPer1.Context = 'NonRte';
McuDiagcPer1.TimeStep = 'MotorControlx2';
McuDiagcPer1.Description = 'Motor control loop Rolling counter';

McuDiagcPer2 = DataDict.Runnable;
McuDiagcPer2.Context = 'Rte';
McuDiagcPer2.TimeStep = 0.002;
McuDiagcPer2.Description = 'Fault determination';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
StrtErrInjCntr = DataDict.Client;
StrtErrInjCntr.CallLocation = {'McuDiagcPer2'};
StrtErrInjCntr.Description = 'Flag to indicate Error Injection';
StrtErrInjCntr.Return = DataDict.CSReturn;
StrtErrInjCntr.Return.Type = 'None';
StrtErrInjCntr.Return.Min = [];
StrtErrInjCntr.Return.Max = [];
StrtErrInjCntr.Return.TestTolerance = [];

ReadErrInjReg = DataDict.Client;
ReadErrInjReg.CallLocation = {'McuDiagcPer2'};
ReadErrInjReg.Description = 'Read BRAMDAT2';
ReadErrInjReg.Return = DataDict.CSReturn;
ReadErrInjReg.Return.Type = 'None';
ReadErrInjReg.Return.Min = [];
ReadErrInjReg.Return.Max = [];
ReadErrInjReg.Return.TestTolerance = [];
ReadErrInjReg.Arguments(1) = DataDict.CSArguments;
ReadErrInjReg.Arguments(1).Name = 'ErrId';
ReadErrInjReg.Arguments(1).EngDT = dt.u32;
ReadErrInjReg.Arguments(1).EngMin = 0;
ReadErrInjReg.Arguments(1).EngMax = 4294967295;
ReadErrInjReg.Arguments(1).TestTolerance = 999;
ReadErrInjReg.Arguments(1).Units = 'Cnt';
ReadErrInjReg.Arguments(1).Direction = 'Out';
ReadErrInjReg.Arguments(1).InitRowCol = [1  1];
ReadErrInjReg.Arguments(1).Description = 'None';

SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'McuDiagcPer2'};
SetNtcSts.Description = 'Set NTC Status';
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
FastLoopCntr = DataDict.IpSignal;
FastLoopCntr.LongName = 'Fast Loop Counter';
FastLoopCntr.Description = 'Fast Loop Counter';
FastLoopCntr.DocUnits = 'Cnt';
FastLoopCntr.EngDT = dt.u16;
FastLoopCntr.EngInit = 0;
FastLoopCntr.EngMin = 0;
FastLoopCntr.EngMax = 65535;
FastLoopCntr.ReadIn = {'McuDiagcPer2'};
FastLoopCntr.ReadType = 'Rte';


MotCtrlLoopCntr2MilliSec = DataDict.IpSignal;
MotCtrlLoopCntr2MilliSec.LongName = 'Motor Control Loop Counter 2 Millisecond';
MotCtrlLoopCntr2MilliSec.Description = [...
  '2ms loop counter input to MotCtrl ISR'];
MotCtrlLoopCntr2MilliSec.DocUnits = 'Cnt';
MotCtrlLoopCntr2MilliSec.EngDT = dt.u16;
MotCtrlLoopCntr2MilliSec.EngInit = 0;
MotCtrlLoopCntr2MilliSec.EngMin = 0;
MotCtrlLoopCntr2MilliSec.EngMax = 65535;
MotCtrlLoopCntr2MilliSec.ReadIn = {'McuDiagcPer1'};
MotCtrlLoopCntr2MilliSec.ReadType = 'NonRte';


SlowLoopCntr = DataDict.IpSignal;
SlowLoopCntr.LongName = 'Slow Loop Counter';
SlowLoopCntr.Description = [...
  'A copy of the 2ms loop counter that comes from the MotCtrl ISR and use' ...
  'd as an input for diagnostic comparison'];
SlowLoopCntr.DocUnits = 'Cnt';
SlowLoopCntr.EngDT = dt.u16;
SlowLoopCntr.EngInit = 0;
SlowLoopCntr.EngMin = 0;
SlowLoopCntr.EngMax = 65535;
SlowLoopCntr.ReadIn = {'McuDiagcPer2'};
SlowLoopCntr.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
LoopCntr2MilliSec = DataDict.OpSignal;
LoopCntr2MilliSec.LongName = 'Motor Control Slow Loop Counter';
LoopCntr2MilliSec.Description = [...
  'Output that represents a counter incremented in the 2ms loop'];
LoopCntr2MilliSec.DocUnits = 'Cnt';
LoopCntr2MilliSec.SwcShoName = 'McuDiagc';
LoopCntr2MilliSec.EngDT = dt.u16;
LoopCntr2MilliSec.EngInit = 0;
LoopCntr2MilliSec.EngMin = 0;
LoopCntr2MilliSec.EngMax = 65535;
LoopCntr2MilliSec.TestTolerance = 0;
LoopCntr2MilliSec.WrittenIn = {'McuDiagcPer2'};
LoopCntr2MilliSec.WriteType = 'Rte';


MotCtrlFastLoopCntr = DataDict.OpSignal;
MotCtrlFastLoopCntr.LongName = 'Motor Control Fast Loop Counter';
MotCtrlFastLoopCntr.Description = [...
  'Output that represents a counter incremented in the MotCtrl ISR and ve' ...
  'rified in the 2mSec loop for proper number of iterations.'];
MotCtrlFastLoopCntr.DocUnits = 'Cnt';
MotCtrlFastLoopCntr.SwcShoName = 'McuDiagc';
MotCtrlFastLoopCntr.EngDT = dt.u16;
MotCtrlFastLoopCntr.EngInit = 0;
MotCtrlFastLoopCntr.EngMin = 0;
MotCtrlFastLoopCntr.EngMax = 65535;
MotCtrlFastLoopCntr.TestTolerance = 0;
MotCtrlFastLoopCntr.WrittenIn = {'McuDiagcPer1'};
MotCtrlFastLoopCntr.WriteType = 'NonRte';


MotCtrlSlowLoopCntr = DataDict.OpSignal;
MotCtrlSlowLoopCntr.LongName = 'Motor Control Slow Loop Counter';
MotCtrlSlowLoopCntr.Description = [...
  'Output that represents a counter incremented in the 2ms loop'];
MotCtrlSlowLoopCntr.DocUnits = 'Cnt';
MotCtrlSlowLoopCntr.SwcShoName = 'McuDiagc';
MotCtrlSlowLoopCntr.EngDT = dt.u16;
MotCtrlSlowLoopCntr.EngInit = 0;
MotCtrlSlowLoopCntr.EngMin = 0;
MotCtrlSlowLoopCntr.EngMax = 65535;
MotCtrlSlowLoopCntr.TestTolerance = 0;
MotCtrlSlowLoopCntr.WrittenIn = {'McuDiagcPer1'};
MotCtrlSlowLoopCntr.WriteType = 'NonRte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------




%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
McuDiagc2MilliSecCntrCompThd = DataDict.Calibration;
McuDiagc2MilliSecCntrCompThd.LongName = 'MCU Diagnostic 2 Milli Second/Second Counter Comparison Threshold';
McuDiagc2MilliSecCntrCompThd.Description = [...
  'Threshold for the difference between the loop counter in the 2ms loop ' ...
  'and the loop counter in the MotCtrlISR.'];
McuDiagc2MilliSecCntrCompThd.DocUnits = 'Cnt';
McuDiagc2MilliSecCntrCompThd.EngDT = dt.u16;
McuDiagc2MilliSecCntrCompThd.EngVal = 5;
McuDiagc2MilliSecCntrCompThd.EngMin = 0;
McuDiagc2MilliSecCntrCompThd.EngMax = 6;
McuDiagc2MilliSecCntrCompThd.Cardinality = 'Inin';
McuDiagc2MilliSecCntrCompThd.CustomerVisible = false;
McuDiagc2MilliSecCntrCompThd.Online = false;
McuDiagc2MilliSecCntrCompThd.Impact = 'H';
McuDiagc2MilliSecCntrCompThd.TuningOwner = 'FDD';
McuDiagc2MilliSecCntrCompThd.GraphLink = {''};
McuDiagc2MilliSecCntrCompThd.Monotony = 'None';
McuDiagc2MilliSecCntrCompThd.MaxGrad = 0;
McuDiagc2MilliSecCntrCompThd.PortName = 'McuDiagc2MilliSecCntrCompThd';


McuDiagcFltFailStep = DataDict.Calibration;
McuDiagcFltFailStep.LongName = 'MCU Diagnostic Fault Fail Step';
McuDiagcFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
McuDiagcFltFailStep.DocUnits = 'Cnt';
McuDiagcFltFailStep.EngDT = dt.u16;
McuDiagcFltFailStep.EngVal = 16385;
McuDiagcFltFailStep.EngMin = 0;
McuDiagcFltFailStep.EngMax = 65535;
McuDiagcFltFailStep.Cardinality = 'Inin';
McuDiagcFltFailStep.CustomerVisible = false;
McuDiagcFltFailStep.Online = false;
McuDiagcFltFailStep.Impact = 'H';
McuDiagcFltFailStep.TuningOwner = 'FDD';
McuDiagcFltFailStep.GraphLink = {''};
McuDiagcFltFailStep.Monotony = 'None';
McuDiagcFltFailStep.MaxGrad = 0;
McuDiagcFltFailStep.PortName = 'McuDiagcFltFailStep';


McuDiagcFltPassStep = DataDict.Calibration;
McuDiagcFltPassStep.LongName = 'MCU Diagnostic Fault Pass Step';
McuDiagcFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
McuDiagcFltPassStep.DocUnits = 'Cnt';
McuDiagcFltPassStep.EngDT = dt.u16;
McuDiagcFltPassStep.EngVal = 160;
McuDiagcFltPassStep.EngMin = 0;
McuDiagcFltPassStep.EngMax = 65535;
McuDiagcFltPassStep.Cardinality = 'Inin';
McuDiagcFltPassStep.CustomerVisible = false;
McuDiagcFltPassStep.Online = false;
McuDiagcFltPassStep.Impact = 'H';
McuDiagcFltPassStep.TuningOwner = 'FDD';
McuDiagcFltPassStep.GraphLink = {''};
McuDiagcFltPassStep.Monotony = 'None';
McuDiagcFltPassStep.MaxGrad = 0;
McuDiagcFltPassStep.PortName = 'McuDiagcFltPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMcuDiagcFastLoopCntrMax = DataDict.Display;
dMcuDiagcFastLoopCntrMax.LongName = 'Fast Loop Counter Maximum Display';
dMcuDiagcFastLoopCntrMax.Description = [...
  'Display variable used to help understand the statistics of the diagnos' ...
  'tic'];
dMcuDiagcFastLoopCntrMax.DocUnits = 'Cnt';
dMcuDiagcFastLoopCntrMax.EngDT = dt.u16;
dMcuDiagcFastLoopCntrMax.EngMin = 0;
dMcuDiagcFastLoopCntrMax.EngMax = 65535;
dMcuDiagcFastLoopCntrMax.InitRowCol = [1  1];


dMcuDiagcFastLoopCntrMin = DataDict.Display;
dMcuDiagcFastLoopCntrMin.LongName = 'Fast Loop Counter Minimum Display';
dMcuDiagcFastLoopCntrMin.Description = [...
  'Display variable used to help understand the statistics of the diagnos' ...
  'tic'];
dMcuDiagcFastLoopCntrMin.DocUnits = 'Cnt';
dMcuDiagcFastLoopCntrMin.EngDT = dt.u16;
dMcuDiagcFastLoopCntrMin.EngMin = 0;
dMcuDiagcFastLoopCntrMin.EngMax = 65535;
dMcuDiagcFastLoopCntrMin.InitRowCol = [1  1];


dMcuDiagcLoopCntr2MilliSecMotCtrlDif = DataDict.Display;
dMcuDiagcLoopCntr2MilliSecMotCtrlDif.LongName = 'Loop Counter 2 Milli Second Motor Control Difference';
dMcuDiagcLoopCntr2MilliSecMotCtrlDif.Description = [...
  'Result of subtracting the 2ms counter as processed by the MotCtrl ISR ' ...
  'from the actual counter incremented in the 2ms loop'];
dMcuDiagcLoopCntr2MilliSecMotCtrlDif.DocUnits = 'Cnt';
dMcuDiagcLoopCntr2MilliSecMotCtrlDif.EngDT = dt.u16;
dMcuDiagcLoopCntr2MilliSecMotCtrlDif.EngMin = 0;
dMcuDiagcLoopCntr2MilliSecMotCtrlDif.EngMax = 65535;
dMcuDiagcLoopCntr2MilliSecMotCtrlDif.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
FastLoopCntrDiagcCfgd = DataDict.PIM;
FastLoopCntrDiagcCfgd.LongName = 'Fast Loop Counter Diagnostic Configured';
FastLoopCntrDiagcCfgd.Description = [...
  'Signal used to track the first execution of the diagnostic in the 2mSe' ...
  'c loop.  This is needed because it is indeterminate the number of time' ...
  's the MotCtrl ISR may have run when the 2mSec loop is first run.'];
FastLoopCntrDiagcCfgd.DocUnits = 'Cnt';
FastLoopCntrDiagcCfgd.EngDT = dt.u08;
FastLoopCntrDiagcCfgd.EngMin = 0;
FastLoopCntrDiagcCfgd.EngMax = 255;
FastLoopCntrDiagcCfgd.InitRowCol = [1  1];


FastLoopCntrPrev = DataDict.PIM;
FastLoopCntrPrev.LongName = 'Fast Loop Counter Previous';
FastLoopCntrPrev.Description = [...
  'Previous instance of fast loop counter in the MotCtrlISR'];
FastLoopCntrPrev.DocUnits = 'Cnt';
FastLoopCntrPrev.EngDT = dt.u16;
FastLoopCntrPrev.EngMin = 0;
FastLoopCntrPrev.EngMax = 65535;
FastLoopCntrPrev.InitRowCol = [1  1];


LoopCntr2MilliSecStore = DataDict.PIM;
LoopCntr2MilliSecStore.LongName = 'Loop Counter 2 Millisecond';
LoopCntr2MilliSecStore.Description = [...
  'Counter incremented in 2ms loop.  This counter is used to verify MotCt' ...
  'rl ISR is receiving data from the 2ms loop'];
LoopCntr2MilliSecStore.DocUnits = 'Cnt';
LoopCntr2MilliSecStore.EngDT = dt.u16;
LoopCntr2MilliSecStore.EngMin = 0;
LoopCntr2MilliSecStore.EngMax = 65535;
LoopCntr2MilliSecStore.InitRowCol = [1  1];


LoopCntrPrev = DataDict.PIM;
LoopCntrPrev.LongName = 'Loop Counter Previous';
LoopCntrPrev.Description = [...
  'Previous instance of loop counter in the 2mSec'];
LoopCntrPrev.DocUnits = 'Cnt';
LoopCntrPrev.EngDT = dt.u16;
LoopCntrPrev.EngMin = 0;
LoopCntrPrev.EngMax = 65535;
LoopCntrPrev.InitRowCol = [1  1];


%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
FASTLOOPCNTRMAX_CNT_U08 = DataDict.Constant;
FASTLOOPCNTRMAX_CNT_U08.LongName = 'Fast Loop Counter Max';
FASTLOOPCNTRMAX_CNT_U08.Description = [...
  'Maximum number of loops the MotCtrl ISR is allowed to run before setti' ...
  'ng a fault.'];
FASTLOOPCNTRMAX_CNT_U08.DocUnits = 'Cnt';
FASTLOOPCNTRMAX_CNT_U08.EngDT = dt.u08;
FASTLOOPCNTRMAX_CNT_U08.EngVal = 240;
FASTLOOPCNTRMAX_CNT_U08.Define = 'Local';


FASTLOOPCNTRMIN_CNT_U08 = DataDict.Constant;
FASTLOOPCNTRMIN_CNT_U08.LongName = 'Fast Loop Counter Min';
FASTLOOPCNTRMIN_CNT_U08.Description = [...
  'Minimum number of loops the MotCtrl ISR is allowed to run before setti' ...
  'ng a fault.'];
FASTLOOPCNTRMIN_CNT_U08.DocUnits = 'Cnt';
FASTLOOPCNTRMIN_CNT_U08.EngDT = dt.u08;
FASTLOOPCNTRMIN_CNT_U08.EngVal = 10;
FASTLOOPCNTRMIN_CNT_U08.Define = 'Local';


LOOPCNTR2MILLISECMOTCTRLCOMPPRM_CNT_U08 = DataDict.Constant;
LOOPCNTR2MILLISECMOTCTRLCOMPPRM_CNT_U08.LongName = 'Loop Counter 2 Millisecond Motor Control Comparison Parameter';
LOOPCNTR2MILLISECMOTCTRLCOMPPRM_CNT_U08.Description = [...
  'Parameter bit used to identify when the copy of the 2ms counter in the' ...
  ' MotCtrl ISR and the 2ms counter are no longer tracking together '];
LOOPCNTR2MILLISECMOTCTRLCOMPPRM_CNT_U08.DocUnits = 'Cnt';
LOOPCNTR2MILLISECMOTCTRLCOMPPRM_CNT_U08.EngDT = dt.u08;
LOOPCNTR2MILLISECMOTCTRLCOMPPRM_CNT_U08.EngVal = 2;
LOOPCNTR2MILLISECMOTCTRLCOMPPRM_CNT_U08.Define = 'Local';


LOSSMOTCTRLLOOPPRM_CNT_U08 = DataDict.Constant;
LOSSMOTCTRLLOOPPRM_CNT_U08.LongName = 'Loss Mot Ctrl Loop Parameter';
LOSSMOTCTRLLOOPPRM_CNT_U08.Description = 'Parameter for loss of MotCtrl ISR';
LOSSMOTCTRLLOOPPRM_CNT_U08.DocUnits = 'Cnt';
LOSSMOTCTRLLOOPPRM_CNT_U08.EngDT = dt.u08;
LOSSMOTCTRLLOOPPRM_CNT_U08.EngVal = 1;
LOSSMOTCTRLLOOPPRM_CNT_U08.Define = 'Local';


MCUERRINJ_NTC002BBIT01CASE02_CNT_U32 = DataDict.Constant;
MCUERRINJ_NTC002BBIT01CASE02_CNT_U32.LongName = 'MCU Error Injection NTC 0x02B Bit 01 Case 02';
MCUERRINJ_NTC002BBIT01CASE02_CNT_U32.Description = 'MCU Error Injection point for 0x002B0202';
MCUERRINJ_NTC002BBIT01CASE02_CNT_U32.DocUnits = 'Cnt';
MCUERRINJ_NTC002BBIT01CASE02_CNT_U32.EngDT = dt.u32;
MCUERRINJ_NTC002BBIT01CASE02_CNT_U32.EngVal = 2818562;
MCUERRINJ_NTC002BBIT01CASE02_CNT_U32.Define = 'Global';


MOTCTRLDIAGCINITDLY_CNT_U08 = DataDict.Constant;
MOTCTRLDIAGCINITDLY_CNT_U08.LongName = 'Motor Control Diagnostic Initialization Delay';
MOTCTRLDIAGCINITDLY_CNT_U08.Description = [...
  'Delay of motor control fault determination for a number of 2ms loops'];
MOTCTRLDIAGCINITDLY_CNT_U08.DocUnits = 'Cnt';
MOTCTRLDIAGCINITDLY_CNT_U08.EngDT = dt.u08;
MOTCTRLDIAGCINITDLY_CNT_U08.EngVal = 10;
MOTCTRLDIAGCINITDLY_CNT_U08.Define = 'Local';


STD_OFF = DataDict.Constant;
STD_OFF.LongName = 'Standard Off';
STD_OFF.Description = 'FALSE';
STD_OFF.DocUnits = 'Cnt';
STD_OFF.EngDT = dt.lgc;
STD_OFF.EngVal = 0;
STD_OFF.Define = 'Global'; 


STD_ON = DataDict.Constant;
STD_ON.LongName = 'Standard On';
STD_ON.Description = 'TRUE';
STD_ON.DocUnits = 'Cnt';
STD_ON.EngDT = dt.lgc;
STD_ON.EngVal = 1;
STD_ON.Define = 'Global'; 


%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
McuDiagcFlt = DataDict.NTC;
McuDiagcFlt.NtcNr = NtcNr1.NTCNR_0X02B;
McuDiagcFlt.NtcTyp = 'Deb';
McuDiagcFlt.LongName = 'MCU Diagnostic Fault';
McuDiagcFlt.Description = 'This fault captures issues with microcontroller diagnostics that can be detected with SW.';
McuDiagcFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
McuDiagcFlt.NtcStInfo.Bit0Descr = 'Loss of Motor Control ISR';
McuDiagcFlt.NtcStInfo.Bit1Descr = 'Motor Control ISR to 2ms periodic loss of correlation';
McuDiagcFlt.NtcStInfo.Bit2Descr = 'Unused';
McuDiagcFlt.NtcStInfo.Bit3Descr = 'Unused';
McuDiagcFlt.NtcStInfo.Bit4Descr = 'Unused';
McuDiagcFlt.NtcStInfo.Bit5Descr = 'Unused';
McuDiagcFlt.NtcStInfo.Bit6Descr = 'Unused';
McuDiagcFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
