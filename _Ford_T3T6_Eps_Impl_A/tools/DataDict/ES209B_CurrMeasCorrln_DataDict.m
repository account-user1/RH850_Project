%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 26-Sep-2017 15:34:33       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES209B = DataDict.FDD;
ES209B.Version = '2.1.X';
ES209B.LongName = 'Current Measurement Correlation';
ES209B.ShoName  = 'CurrMeasCorrln';
ES209B.DesignASIL = 'D';
ES209B.Description = [...
  'The Current Measurement Correlation function is responsible to determi' ...
  'ne any correlation fault between signals or channels and to determine ' ...
  'the number of independent signals available to use'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
CurrMeasCorrlnInit1 = DataDict.Runnable;
CurrMeasCorrlnInit1.Context = 'Rte';
CurrMeasCorrlnInit1.TimeStep = 0;
CurrMeasCorrlnInit1.Description = 'Initialization runnable';

CurrMeasCorrlnPer1 = DataDict.Runnable;
CurrMeasCorrlnPer1.Context = 'Rte';
CurrMeasCorrlnPer1.TimeStep = 0.002;
CurrMeasCorrlnPer1.Description = [...
  'Current Measurement Correlation Periodic'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'CurrMeasCorrlnPer1'};
FltInj_u08.Description = [...
  'FltInj_u08 runnable determines whether to overwrite the SigPah signal ' ...
  'with a new value calculated from path gain and path offset calculation' ...
  '.'];
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
FltInj_u08.Arguments(1).TestTolerance = 0;
FltInj_u08.Arguments(1).Units = 'Uls';
FltInj_u08.Arguments(1).Direction = 'InOut';
FltInj_u08.Arguments(1).InitRowCol = [1  1];
FltInj_u08.Arguments(1).Description = [...
  'It is the actual value to be written if FltInj_u08 runnable is trigger' ...
  'ed.'];
FltInj_u08.Arguments(2) = DataDict.CSArguments;
FltInj_u08.Arguments(2).Name = 'LocnKey';
FltInj_u08.Arguments(2).EngDT = dt.u16;
FltInj_u08.Arguments(2).EngMin = 0;
FltInj_u08.Arguments(2).EngMax = 65535;
FltInj_u08.Arguments(2).Units = 'Cnt';
FltInj_u08.Arguments(2).Direction = 'In';
FltInj_u08.Arguments(2).InitRowCol = [1  1];
FltInj_u08.Arguments(2).Description = [...
  'It determines whether FltInj_u08 runnable is triggered.'];


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'CurrMeasCorrlnPer1'};
GetNtcQlfrSts.Description = 'Get NTC Qualifier Status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = 'Standard';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = 'NTC Number';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 999;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'NTC Qualifier';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'CurrMeasCorrlnPer1'};
SetNtcSts.Description = 'Set NTC Status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'Standard';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NTC Number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'NTC Status Info';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'NTC Status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Debounce Step';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DiagcStsIvtr1Inactv = DataDict.IpSignal;
DiagcStsIvtr1Inactv.LongName = 'Diagnostic Status Inverter 1 Inactive';
DiagcStsIvtr1Inactv.Description = [...
  'Diagnostic Status Inverter 1 Inactive'];
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.ReadIn = {'CurrMeasCorrlnPer1'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';


MotCurrCorrdA = DataDict.IpSignal;
MotCurrCorrdA.LongName = 'Current Measurement Motor Current Corrected A';
MotCurrCorrdA.Description = [...
  'Current Measurement Motor Current Corrected A'];
MotCurrCorrdA.DocUnits = 'Ampr';
MotCurrCorrdA.EngDT = dt.float32;
MotCurrCorrdA.EngInit = 0;
MotCurrCorrdA.EngMin = -200;
MotCurrCorrdA.EngMax = 200;
MotCurrCorrdA.ReadIn = {'CurrMeasCorrlnPer1'};
MotCurrCorrdA.ReadType = 'Rte';


MotCurrCorrdB = DataDict.IpSignal;
MotCurrCorrdB.LongName = 'Current Measurement Motor Current Corrected B';
MotCurrCorrdB.Description = [...
  'Current Measurement Motor Current Corrected B'];
MotCurrCorrdB.DocUnits = 'Ampr';
MotCurrCorrdB.EngDT = dt.float32;
MotCurrCorrdB.EngInit = 0;
MotCurrCorrdB.EngMin = -200;
MotCurrCorrdB.EngMax = 200;
MotCurrCorrdB.ReadIn = {'CurrMeasCorrlnPer1'};
MotCurrCorrdB.ReadType = 'Rte';


MotCurrCorrdC = DataDict.IpSignal;
MotCurrCorrdC.LongName = 'Current Measurement Motor Current Corrected C';
MotCurrCorrdC.Description = [...
  'Current Measurement Motor Current Corrected C'];
MotCurrCorrdC.DocUnits = 'Ampr';
MotCurrCorrdC.EngDT = dt.float32;
MotCurrCorrdC.EngInit = 0;
MotCurrCorrdC.EngMin = -200;
MotCurrCorrdC.EngMax = 200;
MotCurrCorrdC.ReadIn = {'CurrMeasCorrlnPer1'};
MotCurrCorrdC.ReadType = 'Rte';


MotCurrEolCalSt = DataDict.IpSignal;
MotCurrEolCalSt.LongName = 'Motor Current EOL Calibration State';
MotCurrEolCalSt.Description = [...
  'Motor Current EOL Calibration State'];
MotCurrEolCalSt.DocUnits = 'Cnt';
MotCurrEolCalSt.EngDT = enum.MotCurrEolCalSt2;
MotCurrEolCalSt.EngInit = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMin = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMax = MotCurrEolCalSt2.MCECS_CMDSAFEST;
MotCurrEolCalSt.ReadIn = {'CurrMeasCorrlnPer1'};
MotCurrEolCalSt.ReadType = 'Rte';

MotCurrRollgCntr1 = DataDict.IpSignal;
MotCurrRollgCntr1.LongName = 'Motor Current Rolling Counter 1';
MotCurrRollgCntr1.Description = 'Motor Current Rolling Counter 1';
MotCurrRollgCntr1.DocUnits = 'Cnt';
MotCurrRollgCntr1.EngDT = dt.u08;
MotCurrRollgCntr1.EngInit = 0;
MotCurrRollgCntr1.EngMin = 0;
MotCurrRollgCntr1.EngMax = 255;
MotCurrRollgCntr1.ReadIn = {'CurrMeasCorrlnPer1'};
MotCurrRollgCntr1.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'CurrMeasCorrlnPer1'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
CurrMeasCorrlnSts = DataDict.OpSignal;
CurrMeasCorrlnSts.LongName = 'Current Measurement Correlation Status';
CurrMeasCorrlnSts.Description = [...
  'Current Measurement Correlation Status'];
CurrMeasCorrlnSts.DocUnits = 'Cnt';
CurrMeasCorrlnSts.SwcShoName = 'CurrMeasCorrln';
CurrMeasCorrlnSts.EngDT = dt.u08;
CurrMeasCorrlnSts.EngInit = 63;
CurrMeasCorrlnSts.EngMin = 0;
CurrMeasCorrlnSts.EngMax = 63;
CurrMeasCorrlnSts.TestTolerance = 1;
CurrMeasCorrlnSts.WrittenIn = {'CurrMeasCorrlnPer1'};
CurrMeasCorrlnSts.WriteType = 'Rte';


CurrMeasIdptSig = DataDict.OpSignal;
CurrMeasIdptSig.LongName = 'Current Measurement Independent Signal';
CurrMeasIdptSig.Description = [...
  'Current Measurement Independent Signal'];
CurrMeasIdptSig.DocUnits = 'Cnt';
CurrMeasIdptSig.SwcShoName = 'CurrMeasCorrln';
CurrMeasIdptSig.EngDT = dt.u08;
CurrMeasIdptSig.EngInit = 2;
CurrMeasIdptSig.EngMin = 0;
CurrMeasIdptSig.EngMax = 255;
CurrMeasIdptSig.TestTolerance = 1;
CurrMeasIdptSig.WrittenIn = {'CurrMeasCorrlnPer1'};
CurrMeasIdptSig.WriteType = 'Rte';


CurrMotSumABC = DataDict.OpSignal;
CurrMotSumABC.LongName = 'Current Motor Sum ABC';
CurrMotSumABC.Description = 'Summation of Motor current A,B,C';
CurrMotSumABC.DocUnits = 'Ampr';
CurrMotSumABC.SwcShoName = 'CurrMeasCorrln';
CurrMotSumABC.EngDT = dt.float32;
CurrMotSumABC.EngInit = 0;
CurrMotSumABC.EngMin = 0;
CurrMotSumABC.EngMax = 600;
CurrMotSumABC.TestTolerance = 0.01;
CurrMotSumABC.WrittenIn = {'CurrMeasCorrlnPer1'};
CurrMotSumABC.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
CurrMeasCorrlnMaxErrCurr = DataDict.Calibration;
CurrMeasCorrlnMaxErrCurr.LongName = 'Current Measurement Correlation Max Error Current';
CurrMeasCorrlnMaxErrCurr.Description = [...
  'Current Measurement Correlation Max Error Current'];
CurrMeasCorrlnMaxErrCurr.DocUnits = 'Ampr';
CurrMeasCorrlnMaxErrCurr.EngDT = dt.float32;
CurrMeasCorrlnMaxErrCurr.EngVal = 12;
CurrMeasCorrlnMaxErrCurr.EngMin = 0;
CurrMeasCorrlnMaxErrCurr.EngMax = 50;
CurrMeasCorrlnMaxErrCurr.Cardinality = 'Cmn';
CurrMeasCorrlnMaxErrCurr.CustomerVisible = false;
CurrMeasCorrlnMaxErrCurr.Online = false;
CurrMeasCorrlnMaxErrCurr.Impact = 'H';
CurrMeasCorrlnMaxErrCurr.TuningOwner = 'FDD';
CurrMeasCorrlnMaxErrCurr.GraphLink = {''};
CurrMeasCorrlnMaxErrCurr.Monotony = 'None';
CurrMeasCorrlnMaxErrCurr.MaxGrad = 999;
CurrMeasCorrlnMaxErrCurr.PortName = 'CurrMeasCorrlnMaxErrCurr';


CurrMeasCorrlnMaxStallCntr = DataDict.Calibration;
CurrMeasCorrlnMaxStallCntr.LongName = 'Current Measurement Correlation Maximum Stall Counter';
CurrMeasCorrlnMaxStallCntr.Description = [...
  'Current Measurement Arbitration Maximum Stall Counter'];
CurrMeasCorrlnMaxStallCntr.DocUnits = 'Cnt';
CurrMeasCorrlnMaxStallCntr.EngDT = dt.u08;
CurrMeasCorrlnMaxStallCntr.EngVal = 200;
CurrMeasCorrlnMaxStallCntr.EngMin = 0;
CurrMeasCorrlnMaxStallCntr.EngMax = 255;
CurrMeasCorrlnMaxStallCntr.Cardinality = 'Cmn';
CurrMeasCorrlnMaxStallCntr.CustomerVisible = false;
CurrMeasCorrlnMaxStallCntr.Online = false;
CurrMeasCorrlnMaxStallCntr.Impact = 'M';
CurrMeasCorrlnMaxStallCntr.TuningOwner = 'FDD';
CurrMeasCorrlnMaxStallCntr.GraphLink = {''};
CurrMeasCorrlnMaxStallCntr.Monotony = 'None';
CurrMeasCorrlnMaxStallCntr.MaxGrad = 999;
CurrMeasCorrlnMaxStallCntr.PortName = 'CurrMeasCorrlnMaxStallCntr';


CurrMeasCorrlnNtc0x04DFailStep = DataDict.Calibration;
CurrMeasCorrlnNtc0x04DFailStep.LongName = 'Current Measurement Correlation Error Pstep';
CurrMeasCorrlnNtc0x04DFailStep.Description = [...
  'Current Measurement Correlation Error Pstep'];
CurrMeasCorrlnNtc0x04DFailStep.DocUnits = 'Cnt';
CurrMeasCorrlnNtc0x04DFailStep.EngDT = dt.u16;
CurrMeasCorrlnNtc0x04DFailStep.EngVal = 512;
CurrMeasCorrlnNtc0x04DFailStep.EngMin = 0;
CurrMeasCorrlnNtc0x04DFailStep.EngMax = 65535;
CurrMeasCorrlnNtc0x04DFailStep.Cardinality = 'Cmn';
CurrMeasCorrlnNtc0x04DFailStep.CustomerVisible = false;
CurrMeasCorrlnNtc0x04DFailStep.Online = false;
CurrMeasCorrlnNtc0x04DFailStep.Impact = 'M';
CurrMeasCorrlnNtc0x04DFailStep.TuningOwner = 'FDD';
CurrMeasCorrlnNtc0x04DFailStep.GraphLink = {''};
CurrMeasCorrlnNtc0x04DFailStep.Monotony = 'None';
CurrMeasCorrlnNtc0x04DFailStep.MaxGrad = 0;
CurrMeasCorrlnNtc0x04DFailStep.PortName = 'CurrMeasCorrlnNtc0x04DFailStep';


CurrMeasCorrlnNtc0x04DPassStep = DataDict.Calibration;
CurrMeasCorrlnNtc0x04DPassStep.LongName = 'Current Measurement Correlation Error Nstep';
CurrMeasCorrlnNtc0x04DPassStep.Description = [...
  'Current Measurement Correlation Error Nstep'];
CurrMeasCorrlnNtc0x04DPassStep.DocUnits = 'Cnt';
CurrMeasCorrlnNtc0x04DPassStep.EngDT = dt.u16;
CurrMeasCorrlnNtc0x04DPassStep.EngVal = 512;
CurrMeasCorrlnNtc0x04DPassStep.EngMin = 0;
CurrMeasCorrlnNtc0x04DPassStep.EngMax = 65535;
CurrMeasCorrlnNtc0x04DPassStep.Cardinality = 'Cmn';
CurrMeasCorrlnNtc0x04DPassStep.CustomerVisible = false;
CurrMeasCorrlnNtc0x04DPassStep.Online = false;
CurrMeasCorrlnNtc0x04DPassStep.Impact = 'M';
CurrMeasCorrlnNtc0x04DPassStep.TuningOwner = 'FDD';
CurrMeasCorrlnNtc0x04DPassStep.GraphLink = {''};
CurrMeasCorrlnNtc0x04DPassStep.Monotony = 'None';
CurrMeasCorrlnNtc0x04DPassStep.MaxGrad = 0;
CurrMeasCorrlnNtc0x04DPassStep.PortName = 'CurrMeasCorrlnNtc0x04DPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
LongTermCorrlnStsABC = DataDict.PIM;
LongTermCorrlnStsABC.LongName = 'Long term correlation status ABC';
LongTermCorrlnStsABC.Description = [...
  'Used to latch the correlation status and independent signals outputs w' ...
  'hen they are reduced due to CorrlnFltPhaABC NTC or SigAvlABC'];
LongTermCorrlnStsABC.DocUnits = 'Cnt';
LongTermCorrlnStsABC.EngDT = dt.lgc;
LongTermCorrlnStsABC.EngMin = 0;
LongTermCorrlnStsABC.EngMax = 1;
LongTermCorrlnStsABC.InitRowCol = [1  1];


Snsr0RollgCntPrev = DataDict.PIM;
Snsr0RollgCntPrev.LongName = 'Sensor 0 Rolling Count Previous';
Snsr0RollgCntPrev.Description = [...
  'Current Measurement Correlation Sensor 0 Rolling Count Previous'];
Snsr0RollgCntPrev.DocUnits = 'Cnt';
Snsr0RollgCntPrev.EngDT = dt.u08;
Snsr0RollgCntPrev.EngMin = 0;
Snsr0RollgCntPrev.EngMax = 255;
Snsr0RollgCntPrev.InitRowCol = [1  1];


Snsr0StallCntPrev = DataDict.PIM;
Snsr0StallCntPrev.LongName = 'Sensor 0 Stall Count Previous';
Snsr0StallCntPrev.Description = [...
  'Current Measurement Correlation Sensor 0 Stall Count Previous'];
Snsr0StallCntPrev.DocUnits = 'Cnt';
Snsr0StallCntPrev.EngDT = dt.u08;
Snsr0StallCntPrev.EngMin = 0;
Snsr0StallCntPrev.EngMax = 255;
Snsr0StallCntPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CORRLNSTSABC_CNT_U08 = DataDict.Constant;
CORRLNSTSABC_CNT_U08.LongName = 'Correlation ABC constant';
CORRLNSTSABC_CNT_U08.Description = [...
  'Used to set the value of correlation status when phases ABC are correl' ...
  'ated'];
CORRLNSTSABC_CNT_U08.DocUnits = 'Cnt';
CORRLNSTSABC_CNT_U08.EngDT = dt.u08;
CORRLNSTSABC_CNT_U08.EngVal = 7;
CORRLNSTSABC_CNT_U08.Define = 'Local';


FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG = DataDict.Constant;
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.LongName = 'Fault Injection Current Measure Correlation Current Measure Independent Signal';
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.Description = [...
  'Output signal of Current Measure Correlation function.'];
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.DocUnits = 'Cnt';
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.EngDT = dt.u16;
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.EngVal = 42;
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
CorrlnFltPhaABC = DataDict.NTC;
CorrlnFltPhaABC.NtcNr = NtcNr1.NTCNR_0X04D;
CorrlnFltPhaABC.NtcTyp = 'Deb';
CorrlnFltPhaABC.LongName = 'Correlation Fault Phase A B C';
CorrlnFltPhaABC.Description = 'Correlation Fault Phase A B C';
CorrlnFltPhaABC.NtcStInfo = DataDict.NtcStInfoBitPacked;
CorrlnFltPhaABC.NtcStInfo.Bit0Descr = 'Correlation Fault Phase A B C';
CorrlnFltPhaABC.NtcStInfo.Bit1Descr = 'Unused';
CorrlnFltPhaABC.NtcStInfo.Bit2Descr = 'Unused';
CorrlnFltPhaABC.NtcStInfo.Bit3Descr = 'Unused';
CorrlnFltPhaABC.NtcStInfo.Bit4Descr = 'Unused';
CorrlnFltPhaABC.NtcStInfo.Bit5Descr = 'Unused';
CorrlnFltPhaABC.NtcStInfo.Bit6Descr = 'Unused';
CorrlnFltPhaABC.NtcStInfo.Bit7Descr = 'Unused';
CorrlnFltPhaABC.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
