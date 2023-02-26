%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 24-Jul-2017 14:28:03       %
%                                  Created with tool release: 3.0.0      %
%                                  Synergy file: %version: 4 %           %
%                                  Derived by: %derived_by: nz2654 %          %
%%-----------------------------------------------------------------------%

CM012A = DataDict.FDD;
CM012A.Version = '2.2.X';
CM012A.LongName = 'Ford T3 Mcu Configuration';
CM012A.ShoName  = 'FordT3McuCfg';
CM012A.DesignASIL = 'D';
CM012A.Description = [...
  'Program specific I/O and Constant settings for the Ford T3 Program'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordT3McuCfgInit1 = DataDict.Runnable;
FordT3McuCfgInit1.Context = 'NonRte';
FordT3McuCfgInit1.TimeStep = 0;
FordT3McuCfgInit1.Description = [...
  'Power Down Mode Register Initialization, Have to be part of Start-up sequence, Refer CM100B'];

FordT3McuCfgInit2 = DataDict.Runnable;
FordT3McuCfgInit2.Context = 'Rte';
FordT3McuCfgInit2.TimeStep = 0;
FordT3McuCfgInit2.Description = [...
  'This function initializes the applicable registers'];

FordT3McuCfgInit3 = DataDict.Runnable;
FordT3McuCfgInit3.Context = 'Rte';
FordT3McuCfgInit3.TimeStep = 0;
FordT3McuCfgInit3.Description = [...
  'Performs the Raw ADC to Volts conversion on Adc0'];

FordT3McuCfgInit4 = DataDict.Runnable;
FordT3McuCfgInit4.Context = 'Rte';
FordT3McuCfgInit4.TimeStep = 0;
FordT3McuCfgInit4.Description = [...
  'Performs the Raw ADC to Volts conversion on Adc1'];

FordT3McuCfgInit5 = DataDict.Runnable;
FordT3McuCfgInit5.Context = 'Rte';
FordT3McuCfgInit5.TimeStep = 0;
FordT3McuCfgInit5.Description = [...
  'Computes the Hand wheel angle sensor type and sensor number'];

FordT3McuCfgPer1 = DataDict.Runnable;
FordT3McuCfgPer1.Context = 'NonRte';
FordT3McuCfgPer1.TimeStep = 'MotorControl';
FordT3McuCfgPer1.Description = [...
  'Performs the Raw ADC to Volts conversion on Adc0'];

FordT3McuCfgPer2 = DataDict.Runnable;
FordT3McuCfgPer2.Context = 'Rte';
FordT3McuCfgPer2.TimeStep = 0.002;
FordT3McuCfgPer2.Description = [...
  'Performs the Raw ADC to Volts conversion on Adc1'];

FordT3McuCfgPer3 = DataDict.Runnable;
FordT3McuCfgPer3.Context = 'Rte';
FordT3McuCfgPer3.TimeStep = 0.002;
FordT3McuCfgPer3.Description = [...
  'Performs the Adc dynamic diagnostic'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'FordT3McuCfgInit3'};
GetRefTmr1MicroSec32bit.Description = [...
  'Generic timer function to get reference timer tick in 1 uSec resolutio' ...
  'n'];
GetRefTmr1MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr1MicroSec32bit.Return.Type = 'None';
GetRefTmr1MicroSec32bit.Return.Min = [];
GetRefTmr1MicroSec32bit.Return.Max = [];
GetRefTmr1MicroSec32bit.Return.TestTolerance = [];
GetRefTmr1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr1MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr1MicroSec32bit.Arguments(1).TestTolerance = 0;
GetRefTmr1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr1MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr1MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr1MicroSec32bit.Arguments(1).Description = [...
  'Reference time tick in 1 uSec resolution'];


GetTiSpan1MicroSec32bit = DataDict.Client;
GetTiSpan1MicroSec32bit.CallLocation = {'FordT3McuCfgInit3'};
GetTiSpan1MicroSec32bit.Description = [...
  'Generic timer function to get time span between input reference time a' ...
  'nd current time'];
GetTiSpan1MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan1MicroSec32bit.Return.Type = 'None';
GetTiSpan1MicroSec32bit.Return.Min = [];
GetTiSpan1MicroSec32bit.Return.Max = [];
GetTiSpan1MicroSec32bit.Return.TestTolerance = [];
GetTiSpan1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan1MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan1MicroSec32bit.Arguments(1).Description = [...
  'Reference time tick in 1 uSec resolution'];
GetTiSpan1MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan1MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan1MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan1MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan1MicroSec32bit.Arguments(2).Description = [...
  'Time span between input reference time and current time'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
Adc0Faild = DataDict.IpSignal;
Adc0Faild.LongName = 'ADC 0 Failed';
Adc0Faild.Description = [...
  'Indication that Adc0 has failed its diagnostic'];
Adc0Faild.DocUnits = 'Cnt';
Adc0Faild.EngDT = dt.lgc;
Adc0Faild.EngInit = 0;
Adc0Faild.EngMin = 0;
Adc0Faild.EngMax = 1;
Adc0Faild.ReadIn = {'FordT3McuCfgPer3'};
Adc0Faild.ReadType = 'Rte';


Adc1Faild = DataDict.IpSignal;
Adc1Faild.LongName = 'ADC 1 Failed';
Adc1Faild.Description = [...
  'Indication that Adc1 has failed its diagnostic'];
Adc1Faild.DocUnits = 'Cnt';
Adc1Faild.EngDT = dt.lgc;
Adc1Faild.EngInit = 0;
Adc1Faild.EngMin = 0;
Adc1Faild.EngMax = 1;
Adc1Faild.ReadIn = {'FordT3McuCfgPer3'};
Adc1Faild.ReadType = 'Rte';


Adc1RawRes = DataDict.IpSignal;
Adc1RawRes.LongName = 'Adc1 Raw Results';
Adc1RawRes.Description = 'Local RAM copy of all Adc1 results';
Adc1RawRes.DocUnits = 'Cnt';
Adc1RawRes.EngDT = dt.u16;
Adc1RawRes.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
Adc1RawRes.EngMin = 0;
Adc1RawRes.EngMax = 4095;
Adc1RawRes.ReadIn = {'FordT3McuCfgPer2'};
Adc1RawRes.ReadType = 'Rte';


EcuId = DataDict.IpSignal;
EcuId.LongName = 'ECU Identifier';
EcuId.Description = [...
  'ECU Identifier of the ECU as an output'];
EcuId.DocUnits = 'Cnt';
EcuId.EngDT = dt.u08;
EcuId.EngInit = 0;
EcuId.EngMin = 0;
EcuId.EngMax = 3;
EcuId.ReadIn = {'FordT3McuCfgInit5'};
EcuId.ReadType = 'Rte';


MotCtrlAdc0RawRes = DataDict.IpSignal;
MotCtrlAdc0RawRes.LongName = 'Adc0 Raw Results';
MotCtrlAdc0RawRes.Description = 'Local RAM copy of all Adc0 results';
MotCtrlAdc0RawRes.DocUnits = 'Cnt';
MotCtrlAdc0RawRes.EngDT = dt.u16;
MotCtrlAdc0RawRes.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
MotCtrlAdc0RawRes.EngMin = 0;
MotCtrlAdc0RawRes.EngMax = 4095;
MotCtrlAdc0RawRes.ReadIn = {'FordT3McuCfgPer1'};
MotCtrlAdc0RawRes.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
Adc1ScanGroup2Ref0 = DataDict.OpSignal;
Adc1ScanGroup2Ref0.LongName = 'Adc1 Scan Group 2 Ref 0';
Adc1ScanGroup2Ref0.Description = [...
  'Adc1ScanGroup2 internal reference results read at start of scan group ' ...
  'read'];
Adc1ScanGroup2Ref0.DocUnits = 'Volt';
Adc1ScanGroup2Ref0.SwcShoName = 'FordT3McuCfg';
Adc1ScanGroup2Ref0.EngDT = dt.float32;
Adc1ScanGroup2Ref0.EngInit = 0;
Adc1ScanGroup2Ref0.EngMin = 0;
Adc1ScanGroup2Ref0.EngMax = 5;
Adc1ScanGroup2Ref0.TestTolerance = 0.001221001221;
Adc1ScanGroup2Ref0.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
Adc1ScanGroup2Ref0.WriteType = 'Rte';


Adc1ScanGroup2Ref1 = DataDict.OpSignal;
Adc1ScanGroup2Ref1.LongName = 'Adc1 Scan Group 2 Ref 1';
Adc1ScanGroup2Ref1.Description = [...
  'Adc1ScanGroup2 internal reference results read at end of scan group re' ...
  'ad'];
Adc1ScanGroup2Ref1.DocUnits = 'Volt';
Adc1ScanGroup2Ref1.SwcShoName = 'FordT3McuCfg';
Adc1ScanGroup2Ref1.EngDT = dt.float32;
Adc1ScanGroup2Ref1.EngInit = 0;
Adc1ScanGroup2Ref1.EngMin = 0;
Adc1ScanGroup2Ref1.EngMax = 5;
Adc1ScanGroup2Ref1.TestTolerance = 0.001221001221;
Adc1ScanGroup2Ref1.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
Adc1ScanGroup2Ref1.WriteType = 'Rte';


Adc1ScanGroup3Ref0 = DataDict.OpSignal;
Adc1ScanGroup3Ref0.LongName = 'Adc1 Scan Group 3 Ref 0';
Adc1ScanGroup3Ref0.Description = [...
  'Adc1ScanGroup3 internal reference results read at start of scan group ' ...
  'read'];
Adc1ScanGroup3Ref0.DocUnits = 'Volt';
Adc1ScanGroup3Ref0.SwcShoName = 'FordT3McuCfg';
Adc1ScanGroup3Ref0.EngDT = dt.float32;
Adc1ScanGroup3Ref0.EngInit = 0;
Adc1ScanGroup3Ref0.EngMin = 0;
Adc1ScanGroup3Ref0.EngMax = 5;
Adc1ScanGroup3Ref0.TestTolerance = 0.001221001221;
Adc1ScanGroup3Ref0.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
Adc1ScanGroup3Ref0.WriteType = 'Rte';


Adc1ScanGroup3Ref1 = DataDict.OpSignal;
Adc1ScanGroup3Ref1.LongName = 'Adc1 Scan Group 3 Ref 1';
Adc1ScanGroup3Ref1.Description = [...
  'Adc1ScanGroup3 internal reference results read at end of scan group re' ...
  'ad'];
Adc1ScanGroup3Ref1.DocUnits = 'Volt';
Adc1ScanGroup3Ref1.SwcShoName = 'FordT3McuCfg';
Adc1ScanGroup3Ref1.EngDT = dt.float32;
Adc1ScanGroup3Ref1.EngInit = 0;
Adc1ScanGroup3Ref1.EngMin = 0;
Adc1ScanGroup3Ref1.EngMax = 5;
Adc1ScanGroup3Ref1.TestTolerance = 0.001221001221;
Adc1ScanGroup3Ref1.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
Adc1ScanGroup3Ref1.WriteType = 'Rte';


Adc1SelfDiag0 = DataDict.OpSignal;
Adc1SelfDiag0.LongName = 'Adc1 Self Diagnosis 0';
Adc1SelfDiag0.Description = [...
  'First of 3 dynamic Adc1 reads used for diagnostic purposes'];
Adc1SelfDiag0.DocUnits = 'Volt';
Adc1SelfDiag0.SwcShoName = 'FordT3McuCfg';
Adc1SelfDiag0.EngDT = dt.float32;
Adc1SelfDiag0.EngInit = 0;
Adc1SelfDiag0.EngMin = 0;
Adc1SelfDiag0.EngMax = 5;
Adc1SelfDiag0.TestTolerance = 0.001221001221;
Adc1SelfDiag0.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
Adc1SelfDiag0.WriteType = 'Rte';


Adc1SelfDiag2 = DataDict.OpSignal;
Adc1SelfDiag2.LongName = 'Adc1 Self Diagnosis 2';
Adc1SelfDiag2.Description = [...
  'Second of 3 dynamic Adc1 reads used for diagnostic purposes'];
Adc1SelfDiag2.DocUnits = 'Volt';
Adc1SelfDiag2.SwcShoName = 'FordT3McuCfg';
Adc1SelfDiag2.EngDT = dt.float32;
Adc1SelfDiag2.EngInit = 0;
Adc1SelfDiag2.EngMin = 0;
Adc1SelfDiag2.EngMax = 5;
Adc1SelfDiag2.TestTolerance = 0.001221001221;
Adc1SelfDiag2.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
Adc1SelfDiag2.WriteType = 'Rte';


Adc1SelfDiag4 = DataDict.OpSignal;
Adc1SelfDiag4.LongName = 'Adc1 Self Diagnosis 4';
Adc1SelfDiag4.Description = [...
  'Third of 3 dynamic Adc1 reads used for diagnostic purposes'];
Adc1SelfDiag4.DocUnits = 'Volt';
Adc1SelfDiag4.SwcShoName = 'FordT3McuCfg';
Adc1SelfDiag4.EngDT = dt.float32;
Adc1SelfDiag4.EngInit = 0;
Adc1SelfDiag4.EngMin = 0;
Adc1SelfDiag4.EngMax = 5;
Adc1SelfDiag4.TestTolerance = 0.001221001221;
Adc1SelfDiag4.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
Adc1SelfDiag4.WriteType = 'Rte';


BattRtnCurrAdc = DataDict.OpSignal;
BattRtnCurrAdc.LongName = 'Battery Return Current ADC';
BattRtnCurrAdc.Description = [...
  'ADC signal used for current mesaurement carried out inside 2ms periodi' ...
  'c'];
BattRtnCurrAdc.DocUnits = 'Cnt';
BattRtnCurrAdc.SwcShoName = 'FordT3McuCfg';
BattRtnCurrAdc.EngDT = dt.float32;
BattRtnCurrAdc.EngInit = 0;
BattRtnCurrAdc.EngMin = 0;
BattRtnCurrAdc.EngMax = 5;
BattRtnCurrAdc.TestTolerance = 0;
BattRtnCurrAdc.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
BattRtnCurrAdc.WriteType = 'Rte';


BattRtnCurrAdcFaild = DataDict.OpSignal;
BattRtnCurrAdcFaild.LongName = 'Battery Return Current ADC Failed';
BattRtnCurrAdcFaild.Description = [...
  'Flag indicating correct ADC sampling operation'];
BattRtnCurrAdcFaild.DocUnits = 'Cnt';
BattRtnCurrAdcFaild.SwcShoName = 'FordT3McuCfg';
BattRtnCurrAdcFaild.EngDT = dt.lgc;
BattRtnCurrAdcFaild.EngInit = 0;
BattRtnCurrAdcFaild.EngMin = 0;
BattRtnCurrAdcFaild.EngMax = 1;
BattRtnCurrAdcFaild.TestTolerance = 0;
BattRtnCurrAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
BattRtnCurrAdcFaild.WriteType = 'Rte';


BattVltg = DataDict.OpSignal;
BattVltg.LongName = 'Battery Voltage';
BattVltg.Description = 'Filtered Battery Voltage';
BattVltg.DocUnits = 'Volt';
BattVltg.SwcShoName = 'FordT3McuCfg';
BattVltg.EngDT = dt.float32;
BattVltg.EngInit = 0;
BattVltg.EngMin = 0;
BattVltg.EngMax = 40;
BattVltg.TestTolerance = 0.001221001221;
BattVltg.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
BattVltg.WriteType = 'Rte';


BattVltgAdcFaild = DataDict.OpSignal;
BattVltgAdcFaild.LongName = 'Battery Voltage  ADC Failed';
BattVltgAdcFaild.Description = [...
  'The Adc that converts BattVltg has failed'];
BattVltgAdcFaild.DocUnits = 'Cnt';
BattVltgAdcFaild.SwcShoName = 'FordT3McuCfg';
BattVltgAdcFaild.EngDT = dt.lgc;
BattVltgAdcFaild.EngInit = 0;
BattVltgAdcFaild.EngMin = 0;
BattVltgAdcFaild.EngMax = 1;
BattVltgAdcFaild.TestTolerance = 0;
BattVltgAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
BattVltgAdcFaild.WriteType = 'Rte';


BattVltgSwd1 = DataDict.OpSignal;
BattVltgSwd1.LongName = 'Switched Battery Voltage 1';
BattVltgSwd1.Description = 'Switched Battery Voltage 1';
BattVltgSwd1.DocUnits = 'Volt';
BattVltgSwd1.SwcShoName = 'FordT3McuCfg';
BattVltgSwd1.EngDT = dt.float32;
BattVltgSwd1.EngInit = 0;
BattVltgSwd1.EngMin = 0;
BattVltgSwd1.EngMax = 40;
BattVltgSwd1.TestTolerance = 0.001221001221;
BattVltgSwd1.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
BattVltgSwd1.WriteType = 'Rte';


BattVltgSwd1AdcFaild = DataDict.OpSignal;
BattVltgSwd1AdcFaild.LongName = 'Battery Voltage  Switched 1 ADC Failed';
BattVltgSwd1AdcFaild.Description = [...
  'The Adc that converts BattVltgSwd1 has failed'];
BattVltgSwd1AdcFaild.DocUnits = 'Cnt';
BattVltgSwd1AdcFaild.SwcShoName = 'FordT3McuCfg';
BattVltgSwd1AdcFaild.EngDT = dt.lgc;
BattVltgSwd1AdcFaild.EngInit = 0;
BattVltgSwd1AdcFaild.EngMin = 0;
BattVltgSwd1AdcFaild.EngMax = 1;
BattVltgSwd1AdcFaild.TestTolerance = 0;
BattVltgSwd1AdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
BattVltgSwd1AdcFaild.WriteType = 'Rte';


ChrgPmpDiag = DataDict.OpSignal;
ChrgPmpDiag.LongName = 'Charge Pump Diagnosis';
ChrgPmpDiag.Description = [...
  'ADC Converted representation of the Override signal diagnostic monitor' ...
  ' point'];
ChrgPmpDiag.DocUnits = 'Volt';
ChrgPmpDiag.SwcShoName = 'FordT3McuCfg';
ChrgPmpDiag.EngDT = dt.float32;
ChrgPmpDiag.EngInit = 0;
ChrgPmpDiag.EngMin = 0;
ChrgPmpDiag.EngMax = 40;
ChrgPmpDiag.TestTolerance = 0;
ChrgPmpDiag.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
ChrgPmpDiag.WriteType = 'Rte';


ChrgPmpDiagAdcFaild = DataDict.OpSignal;
ChrgPmpDiagAdcFaild.LongName = 'Charge Pump Diagnosis ADC Failed';
ChrgPmpDiagAdcFaild.Description = 'Charge Pump Diagnosis ADC Failed';
ChrgPmpDiagAdcFaild.DocUnits = 'Cnt';
ChrgPmpDiagAdcFaild.SwcShoName = 'FordT3McuCfg';
ChrgPmpDiagAdcFaild.EngDT = dt.lgc;
ChrgPmpDiagAdcFaild.EngInit = 0;
ChrgPmpDiagAdcFaild.EngMin = 0;
ChrgPmpDiagAdcFaild.EngMax = 1;
ChrgPmpDiagAdcFaild.TestTolerance = 0;
ChrgPmpDiagAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
ChrgPmpDiagAdcFaild.WriteType = 'Rte';


EcuT = DataDict.OpSignal;
EcuT.LongName = 'Ecu Temperature';
EcuT.Description = [...
  'Voltage representation of Ecu Temperature, convertered to degC in a di' ...
  'fferent module'];
EcuT.DocUnits = 'Volt';
EcuT.SwcShoName = 'FordT3McuCfg';
EcuT.EngDT = dt.float32;
EcuT.EngInit = 0;
EcuT.EngMin = 0;
EcuT.EngMax = 5;
EcuT.TestTolerance = 0.001221001221;
EcuT.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
EcuT.WriteType = 'Rte';


EcuTAdcFaild = DataDict.OpSignal;
EcuTAdcFaild.LongName = 'ECU Temperature ADC Failed';
EcuTAdcFaild.Description = [...
  'The Adc that converts EcuT has failed'];
EcuTAdcFaild.DocUnits = 'Cnt';
EcuTAdcFaild.SwcShoName = 'FordT3McuCfg';
EcuTAdcFaild.EngDT = dt.lgc;
EcuTAdcFaild.EngInit = 0;
EcuTAdcFaild.EngMin = 0;
EcuTAdcFaild.EngMax = 1;
EcuTAdcFaild.TestTolerance = 0;
EcuTAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
EcuTAdcFaild.WriteType = 'Rte';


HwAg1SnsrNr = DataDict.OpSignal;
HwAg1SnsrNr.LongName = 'Hand Wheel Angle 1 Sensor Number';
HwAg1SnsrNr.Description = 'Hand Wheel Angle 1 Sensor Number';
HwAg1SnsrNr.DocUnits = 'Cnt';
HwAg1SnsrNr.SwcShoName = 'FordT3McuCfg';
HwAg1SnsrNr.EngDT = dt.u08;
HwAg1SnsrNr.EngInit = 0;
HwAg1SnsrNr.EngMin = 0;
HwAg1SnsrNr.EngMax = 2;
HwAg1SnsrNr.TestTolerance = 0;
HwAg1SnsrNr.WrittenIn = {'FordT3McuCfgInit5'};
HwAg1SnsrNr.WriteType = 'Rte';


HwAg1SnsrTyp = DataDict.OpSignal;
HwAg1SnsrTyp.LongName = 'Hand Wheel Angle 1 Sensor Type';
HwAg1SnsrTyp.Description = 'Hand Wheel Angle 1 Sensor Type';
HwAg1SnsrTyp.DocUnits = 'Cnt';
HwAg1SnsrTyp.SwcShoName = 'FordT3McuCfg';
HwAg1SnsrTyp.EngDT = enum.HwAgSnsrTyp1;
HwAg1SnsrTyp.EngInit = HwAgSnsrTyp1.HWAGSNSRTYP_NOSNSR;
HwAg1SnsrTyp.EngMin = HwAgSnsrTyp1.HWAGSNSRTYP_NOSNSR;
HwAg1SnsrTyp.EngMax = HwAgSnsrTyp1.HWAGSNSRTYP_A1335;
HwAg1SnsrTyp.TestTolerance = 0;
HwAg1SnsrTyp.WrittenIn = {'FordT3McuCfgInit5'};
HwAg1SnsrTyp.WriteType = 'Rte';


MotAg2Cos = DataDict.OpSignal;
MotAg2Cos.LongName = 'Motor Control Motor Angle 2 Cos';
MotAg2Cos.Description = 'Motor Angle 2 Cosine';
MotAg2Cos.DocUnits = 'MotRev';
MotAg2Cos.SwcShoName = 'FordT3McuCfg';
MotAg2Cos.EngDT = dt.float32;
MotAg2Cos.EngInit = 0;
MotAg2Cos.EngMin = 0;
MotAg2Cos.EngMax = 5;
MotAg2Cos.TestTolerance = 0;
MotAg2Cos.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
MotAg2Cos.WriteType = 'Rte';


MotAg2CosAdcFaild = DataDict.OpSignal;
MotAg2CosAdcFaild.LongName = 'Motor Angle 2 Cosine ADC Failed';
MotAg2CosAdcFaild.Description = 'Motor Angle 2 Cosine ADC Failed';
MotAg2CosAdcFaild.DocUnits = 'Cnt';
MotAg2CosAdcFaild.SwcShoName = 'FordT3McuCfg';
MotAg2CosAdcFaild.EngDT = dt.lgc;
MotAg2CosAdcFaild.EngInit = 0;
MotAg2CosAdcFaild.EngMin = 0;
MotAg2CosAdcFaild.EngMax = 1;
MotAg2CosAdcFaild.TestTolerance = 0;
MotAg2CosAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotAg2CosAdcFaild.WriteType = 'Rte';


MotAg2Sin = DataDict.OpSignal;
MotAg2Sin.LongName = 'Motor Control Motor Angle 2 Sine';
MotAg2Sin.Description = 'Motor Angle 2 Sine';
MotAg2Sin.DocUnits = 'MotRev';
MotAg2Sin.SwcShoName = 'FordT3McuCfg';
MotAg2Sin.EngDT = dt.float32;
MotAg2Sin.EngInit = 0;
MotAg2Sin.EngMin = 0;
MotAg2Sin.EngMax = 5;
MotAg2Sin.TestTolerance = 0;
MotAg2Sin.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
MotAg2Sin.WriteType = 'Rte';


MotAg2SinAdcFaild = DataDict.OpSignal;
MotAg2SinAdcFaild.LongName = 'Motor Angle 2 Sine ADC Failed';
MotAg2SinAdcFaild.Description = 'Motor Angle 2 Sine ADC Failed';
MotAg2SinAdcFaild.DocUnits = 'Cnt';
MotAg2SinAdcFaild.SwcShoName = 'FordT3McuCfg';
MotAg2SinAdcFaild.EngDT = dt.lgc;
MotAg2SinAdcFaild.EngInit = 0;
MotAg2SinAdcFaild.EngMin = 0;
MotAg2SinAdcFaild.EngMax = 1;
MotAg2SinAdcFaild.TestTolerance = 0;
MotAg2SinAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotAg2SinAdcFaild.WriteType = 'Rte';


MotAg5CosAdcFaild = DataDict.OpSignal;
MotAg5CosAdcFaild.LongName = 'Motor Angle 5 Cosine ADC Failed';
MotAg5CosAdcFaild.Description = 'Motor Angle 5 Cosine ADC Failed';
MotAg5CosAdcFaild.DocUnits = 'Cnt';
MotAg5CosAdcFaild.SwcShoName = 'FordT3McuCfg';
MotAg5CosAdcFaild.EngDT = dt.lgc;
MotAg5CosAdcFaild.EngInit = 0;
MotAg5CosAdcFaild.EngMin = 0;
MotAg5CosAdcFaild.EngMax = 1;
MotAg5CosAdcFaild.TestTolerance = 0;
MotAg5CosAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotAg5CosAdcFaild.WriteType = 'Rte';


MotAg5SinAdcFaild = DataDict.OpSignal;
MotAg5SinAdcFaild.LongName = 'Motor Angle 5 Sine ADC Failed';
MotAg5SinAdcFaild.Description = 'Motor Angle 5 Sine ADC Failed';
MotAg5SinAdcFaild.DocUnits = 'Cnt';
MotAg5SinAdcFaild.SwcShoName = 'FordT3McuCfg';
MotAg5SinAdcFaild.EngDT = dt.lgc;
MotAg5SinAdcFaild.EngInit = 0;
MotAg5SinAdcFaild.EngMin = 0;
MotAg5SinAdcFaild.EngMax = 1;
MotAg5SinAdcFaild.TestTolerance = 0;
MotAg5SinAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotAg5SinAdcFaild.WriteType = 'Rte';


MotAg6CosAdcFaild = DataDict.OpSignal;
MotAg6CosAdcFaild.LongName = 'Motor Angle 6 Cosine ADC Failed';
MotAg6CosAdcFaild.Description = 'Motor Angle 6 Cosine ADC Failed';
MotAg6CosAdcFaild.DocUnits = 'Cnt';
MotAg6CosAdcFaild.SwcShoName = 'FordT3McuCfg';
MotAg6CosAdcFaild.EngDT = dt.lgc;
MotAg6CosAdcFaild.EngInit = 0;
MotAg6CosAdcFaild.EngMin = 0;
MotAg6CosAdcFaild.EngMax = 1;
MotAg6CosAdcFaild.TestTolerance = 0;
MotAg6CosAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotAg6CosAdcFaild.WriteType = 'Rte';


MotAg6SinAdcFaild = DataDict.OpSignal;
MotAg6SinAdcFaild.LongName = 'Motor Angle 6 Sine ADC Failed';
MotAg6SinAdcFaild.Description = 'Motor Angle 6 Sine ADC Failed';
MotAg6SinAdcFaild.DocUnits = 'Cnt';
MotAg6SinAdcFaild.SwcShoName = 'FordT3McuCfg';
MotAg6SinAdcFaild.EngDT = dt.lgc;
MotAg6SinAdcFaild.EngInit = 0;
MotAg6SinAdcFaild.EngMin = 0;
MotAg6SinAdcFaild.EngMax = 1;
MotAg6SinAdcFaild.TestTolerance = 0;
MotAg6SinAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotAg6SinAdcFaild.WriteType = 'Rte';


MotCtrlAdc0ScanGroup2Ref0 = DataDict.OpSignal;
MotCtrlAdc0ScanGroup2Ref0.LongName = 'MotCtrlAdc0ScanGroup2Ref0';
MotCtrlAdc0ScanGroup2Ref0.Description = [...
  'MotCtrlAdc0ScanGroup2Ref0 - reference read perfomed at start of scan g' ...
  'roup read'];
MotCtrlAdc0ScanGroup2Ref0.DocUnits = 'Volt';
MotCtrlAdc0ScanGroup2Ref0.SwcShoName = 'FordT3McuCfg';
MotCtrlAdc0ScanGroup2Ref0.EngDT = dt.float32;
MotCtrlAdc0ScanGroup2Ref0.EngInit = 0;
MotCtrlAdc0ScanGroup2Ref0.EngMin = 0;
MotCtrlAdc0ScanGroup2Ref0.EngMax = 5;
MotCtrlAdc0ScanGroup2Ref0.TestTolerance = 0.001221001221;
MotCtrlAdc0ScanGroup2Ref0.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlAdc0ScanGroup2Ref0.WriteType = 'NonRte';


MotCtrlAdc0ScanGroup2Ref1 = DataDict.OpSignal;
MotCtrlAdc0ScanGroup2Ref1.LongName = 'MotCtrlAdc0ScanGroup2Ref1';
MotCtrlAdc0ScanGroup2Ref1.Description = [...
  'MotCtrlAdc0ScanGroup2Ref1 - reference read perfomed at end of scan gro' ...
  'up read'];
MotCtrlAdc0ScanGroup2Ref1.DocUnits = 'Volt';
MotCtrlAdc0ScanGroup2Ref1.SwcShoName = 'FordT3McuCfg';
MotCtrlAdc0ScanGroup2Ref1.EngDT = dt.float32;
MotCtrlAdc0ScanGroup2Ref1.EngInit = 0;
MotCtrlAdc0ScanGroup2Ref1.EngMin = 0;
MotCtrlAdc0ScanGroup2Ref1.EngMax = 5;
MotCtrlAdc0ScanGroup2Ref1.TestTolerance = 0.001221001221;
MotCtrlAdc0ScanGroup2Ref1.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlAdc0ScanGroup2Ref1.WriteType = 'NonRte';


MotCtrlAdc0ScanGroup3Ref0 = DataDict.OpSignal;
MotCtrlAdc0ScanGroup3Ref0.LongName = 'MotCtrlAdc0ScanGroup3Ref0';
MotCtrlAdc0ScanGroup3Ref0.Description = [...
  'MotCtrlAdc0ScanGroup3Ref0 - reference read perfomed at start of scan g' ...
  'roup read'];
MotCtrlAdc0ScanGroup3Ref0.DocUnits = 'Volt';
MotCtrlAdc0ScanGroup3Ref0.SwcShoName = 'FordT3McuCfg';
MotCtrlAdc0ScanGroup3Ref0.EngDT = dt.float32;
MotCtrlAdc0ScanGroup3Ref0.EngInit = 0;
MotCtrlAdc0ScanGroup3Ref0.EngMin = 0;
MotCtrlAdc0ScanGroup3Ref0.EngMax = 5;
MotCtrlAdc0ScanGroup3Ref0.TestTolerance = 0.001221001221;
MotCtrlAdc0ScanGroup3Ref0.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlAdc0ScanGroup3Ref0.WriteType = 'NonRte';


MotCtrlAdc0ScanGroup3Ref1 = DataDict.OpSignal;
MotCtrlAdc0ScanGroup3Ref1.LongName = 'MotCtrlAdc0ScanGroup3Ref1';
MotCtrlAdc0ScanGroup3Ref1.Description = [...
  'MotCtrlAdc0ScanGroup3Ref1 - reference read perfomed at end of scan gro' ...
  'up read'];
MotCtrlAdc0ScanGroup3Ref1.DocUnits = 'Volt';
MotCtrlAdc0ScanGroup3Ref1.SwcShoName = 'FordT3McuCfg';
MotCtrlAdc0ScanGroup3Ref1.EngDT = dt.float32;
MotCtrlAdc0ScanGroup3Ref1.EngInit = 0;
MotCtrlAdc0ScanGroup3Ref1.EngMin = 0;
MotCtrlAdc0ScanGroup3Ref1.EngMax = 5;
MotCtrlAdc0ScanGroup3Ref1.TestTolerance = 0.001221001221;
MotCtrlAdc0ScanGroup3Ref1.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlAdc0ScanGroup3Ref1.WriteType = 'NonRte';


MotCtrlAdc0SelfDiag0 = DataDict.OpSignal;
MotCtrlAdc0SelfDiag0.LongName = 'Adc0 Self Diagnostic 0';
MotCtrlAdc0SelfDiag0.Description = [...
  'First of 3 dynamic Adc1 reads used for diagnostic purposes'];
MotCtrlAdc0SelfDiag0.DocUnits = 'Volt';
MotCtrlAdc0SelfDiag0.SwcShoName = 'FordT3McuCfg';
MotCtrlAdc0SelfDiag0.EngDT = dt.float32;
MotCtrlAdc0SelfDiag0.EngInit = 0;
MotCtrlAdc0SelfDiag0.EngMin = 0;
MotCtrlAdc0SelfDiag0.EngMax = 5;
MotCtrlAdc0SelfDiag0.TestTolerance = 0.001221001221;
MotCtrlAdc0SelfDiag0.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlAdc0SelfDiag0.WriteType = 'NonRte';


MotCtrlAdc0SelfDiag2 = DataDict.OpSignal;
MotCtrlAdc0SelfDiag2.LongName = 'Adc0 Self Diagnostic 2';
MotCtrlAdc0SelfDiag2.Description = [...
  'Second of 3 dynamic Adc1 reads used for diagnostic purposes'];
MotCtrlAdc0SelfDiag2.DocUnits = 'Volt';
MotCtrlAdc0SelfDiag2.SwcShoName = 'FordT3McuCfg';
MotCtrlAdc0SelfDiag2.EngDT = dt.float32;
MotCtrlAdc0SelfDiag2.EngInit = 0;
MotCtrlAdc0SelfDiag2.EngMin = 0;
MotCtrlAdc0SelfDiag2.EngMax = 5;
MotCtrlAdc0SelfDiag2.TestTolerance = 0.001221001221;
MotCtrlAdc0SelfDiag2.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlAdc0SelfDiag2.WriteType = 'NonRte';


MotCtrlAdc0SelfDiag4 = DataDict.OpSignal;
MotCtrlAdc0SelfDiag4.LongName = 'Adc0 Self Diagnostic 4';
MotCtrlAdc0SelfDiag4.Description = [...
  'Third of 3 dynamic Adc1 reads used for diagnostic purposes'];
MotCtrlAdc0SelfDiag4.DocUnits = 'Volt';
MotCtrlAdc0SelfDiag4.SwcShoName = 'FordT3McuCfg';
MotCtrlAdc0SelfDiag4.EngDT = dt.float32;
MotCtrlAdc0SelfDiag4.EngInit = 0;
MotCtrlAdc0SelfDiag4.EngMin = 0;
MotCtrlAdc0SelfDiag4.EngMax = 5;
MotCtrlAdc0SelfDiag4.TestTolerance = 0.001221001221;
MotCtrlAdc0SelfDiag4.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlAdc0SelfDiag4.WriteType = 'NonRte';


MotCtrlMotAg5Cos = DataDict.OpSignal;
MotCtrlMotAg5Cos.LongName = 'Motor Control Motor Angle 5 Cos';
MotCtrlMotAg5Cos.Description = 'Motor Angle 5 Cos';
MotCtrlMotAg5Cos.DocUnits = 'MotRev';
MotCtrlMotAg5Cos.SwcShoName = 'FordT3McuCfg';
MotCtrlMotAg5Cos.EngDT = dt.float32;
MotCtrlMotAg5Cos.EngInit = 0;
MotCtrlMotAg5Cos.EngMin = 0;
MotCtrlMotAg5Cos.EngMax = 5;
MotCtrlMotAg5Cos.TestTolerance = 0;
MotCtrlMotAg5Cos.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotAg5Cos.WriteType = 'NonRte';


MotCtrlMotAg5Sin = DataDict.OpSignal;
MotCtrlMotAg5Sin.LongName = 'Motor Control Motor Angle 5 Sine';
MotCtrlMotAg5Sin.Description = 'Motor Angle 5 Sine';
MotCtrlMotAg5Sin.DocUnits = 'MotRev';
MotCtrlMotAg5Sin.SwcShoName = 'FordT3McuCfg';
MotCtrlMotAg5Sin.EngDT = dt.float32;
MotCtrlMotAg5Sin.EngInit = 0;
MotCtrlMotAg5Sin.EngMin = 0;
MotCtrlMotAg5Sin.EngMax = 5;
MotCtrlMotAg5Sin.TestTolerance = 0;
MotCtrlMotAg5Sin.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotAg5Sin.WriteType = 'NonRte';


MotCtrlMotAg6Cos = DataDict.OpSignal;
MotCtrlMotAg6Cos.LongName = 'Motor Control Motor Angle 6 Cos';
MotCtrlMotAg6Cos.Description = 'Motor Angle 6 Cos';
MotCtrlMotAg6Cos.DocUnits = 'MotRev';
MotCtrlMotAg6Cos.SwcShoName = 'FordT3McuCfg';
MotCtrlMotAg6Cos.EngDT = dt.float32;
MotCtrlMotAg6Cos.EngInit = 0;
MotCtrlMotAg6Cos.EngMin = 0;
MotCtrlMotAg6Cos.EngMax = 5;
MotCtrlMotAg6Cos.TestTolerance = 0;
MotCtrlMotAg6Cos.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotAg6Cos.WriteType = 'NonRte';


MotCtrlMotAg6Sin = DataDict.OpSignal;
MotCtrlMotAg6Sin.LongName = 'Motor Control Motor Angle 6 Sine';
MotCtrlMotAg6Sin.Description = 'Motor Angle 6 Sine';
MotCtrlMotAg6Sin.DocUnits = 'MotRev';
MotCtrlMotAg6Sin.SwcShoName = 'FordT3McuCfg';
MotCtrlMotAg6Sin.EngDT = dt.float32;
MotCtrlMotAg6Sin.EngInit = 0;
MotCtrlMotAg6Sin.EngMin = 0;
MotCtrlMotAg6Sin.EngMax = 5;
MotCtrlMotAg6Sin.TestTolerance = 0;
MotCtrlMotAg6Sin.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotAg6Sin.WriteType = 'NonRte';


MotCtrlMotCurrAdcPeakA = DataDict.OpSignal;
MotCtrlMotCurrAdcPeakA.LongName = 'Motor Current A Sampled at Peak';
MotCtrlMotCurrAdcPeakA.Description = 'Motor Current A Sampled at Peak';
MotCtrlMotCurrAdcPeakA.DocUnits = 'Volt';
MotCtrlMotCurrAdcPeakA.SwcShoName = 'FordT3McuCfg';
MotCtrlMotCurrAdcPeakA.EngDT = dt.float32;
MotCtrlMotCurrAdcPeakA.EngInit = 0;
MotCtrlMotCurrAdcPeakA.EngMin = 0;
MotCtrlMotCurrAdcPeakA.EngMax = 5;
MotCtrlMotCurrAdcPeakA.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcPeakA.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotCurrAdcPeakA.WriteType = 'NonRte';


MotCtrlMotCurrAdcPeakB = DataDict.OpSignal;
MotCtrlMotCurrAdcPeakB.LongName = 'Motor Current B Sampled at Peak';
MotCtrlMotCurrAdcPeakB.Description = 'Motor Current B Sampled at Peak';
MotCtrlMotCurrAdcPeakB.DocUnits = 'Volt';
MotCtrlMotCurrAdcPeakB.SwcShoName = 'FordT3McuCfg';
MotCtrlMotCurrAdcPeakB.EngDT = dt.float32;
MotCtrlMotCurrAdcPeakB.EngInit = 0;
MotCtrlMotCurrAdcPeakB.EngMin = 0;
MotCtrlMotCurrAdcPeakB.EngMax = 5;
MotCtrlMotCurrAdcPeakB.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcPeakB.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotCurrAdcPeakB.WriteType = 'NonRte';


MotCtrlMotCurrAdcPeakC = DataDict.OpSignal;
MotCtrlMotCurrAdcPeakC.LongName = 'Motor Current C Sampled at Peak';
MotCtrlMotCurrAdcPeakC.Description = 'Motor Current C Sampled at Peak';
MotCtrlMotCurrAdcPeakC.DocUnits = 'Volt';
MotCtrlMotCurrAdcPeakC.SwcShoName = 'FordT3McuCfg';
MotCtrlMotCurrAdcPeakC.EngDT = dt.float32;
MotCtrlMotCurrAdcPeakC.EngInit = 0;
MotCtrlMotCurrAdcPeakC.EngMin = 0;
MotCtrlMotCurrAdcPeakC.EngMax = 5;
MotCtrlMotCurrAdcPeakC.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcPeakC.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotCurrAdcPeakC.WriteType = 'NonRte';


MotCtrlMotCurrAdcVlyA = DataDict.OpSignal;
MotCtrlMotCurrAdcVlyA.LongName = 'Motor Current A Sampled at Valley';
MotCtrlMotCurrAdcVlyA.Description = 'Motor Current A Sampled at Valley';
MotCtrlMotCurrAdcVlyA.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyA.SwcShoName = 'FordT3McuCfg';
MotCtrlMotCurrAdcVlyA.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyA.EngInit = 0;
MotCtrlMotCurrAdcVlyA.EngMin = 0;
MotCtrlMotCurrAdcVlyA.EngMax = 5;
MotCtrlMotCurrAdcVlyA.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcVlyA.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotCurrAdcVlyA.WriteType = 'NonRte';


MotCtrlMotCurrAdcVlyB = DataDict.OpSignal;
MotCtrlMotCurrAdcVlyB.LongName = 'Motor Current B Sampled at Valley';
MotCtrlMotCurrAdcVlyB.Description = 'Motor Current B Sampled at Valley';
MotCtrlMotCurrAdcVlyB.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyB.SwcShoName = 'FordT3McuCfg';
MotCtrlMotCurrAdcVlyB.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyB.EngInit = 0;
MotCtrlMotCurrAdcVlyB.EngMin = 0;
MotCtrlMotCurrAdcVlyB.EngMax = 5;
MotCtrlMotCurrAdcVlyB.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcVlyB.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotCurrAdcVlyB.WriteType = 'NonRte';


MotCtrlMotCurrAdcVlyC = DataDict.OpSignal;
MotCtrlMotCurrAdcVlyC.LongName = 'Motor Current C Sampled at Valley';
MotCtrlMotCurrAdcVlyC.Description = 'Motor Current C Sampled at Valley';
MotCtrlMotCurrAdcVlyC.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyC.SwcShoName = 'FordT3McuCfg';
MotCtrlMotCurrAdcVlyC.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyC.EngInit = 0;
MotCtrlMotCurrAdcVlyC.EngMin = 0;
MotCtrlMotCurrAdcVlyC.EngMax = 5;
MotCtrlMotCurrAdcVlyC.TestTolerance = 0.001221001221;
MotCtrlMotCurrAdcVlyC.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotCurrAdcVlyC.WriteType = 'NonRte';


MotCtrlMotCurrSnsrOffs1 = DataDict.OpSignal;
MotCtrlMotCurrSnsrOffs1.LongName = 'Motor Current 1 Offset';
MotCtrlMotCurrSnsrOffs1.Description = 'Motor Current 1 Offset';
MotCtrlMotCurrSnsrOffs1.DocUnits = 'Volt';
MotCtrlMotCurrSnsrOffs1.SwcShoName = 'FordT3McuCfg';
MotCtrlMotCurrSnsrOffs1.EngDT = dt.float32;
MotCtrlMotCurrSnsrOffs1.EngInit = 0;
MotCtrlMotCurrSnsrOffs1.EngMin = 0;
MotCtrlMotCurrSnsrOffs1.EngMax = 5;
MotCtrlMotCurrSnsrOffs1.TestTolerance = 0.001221001221;
MotCtrlMotCurrSnsrOffs1.WrittenIn = {'FordT3McuCfgInit3','FordT3McuCfgPer1'};
MotCtrlMotCurrSnsrOffs1.WriteType = 'NonRte';


MotCurrAdcPeakAAdcFaild = DataDict.OpSignal;
MotCurrAdcPeakAAdcFaild.LongName = 'Motor Control Motor Current/I ADC Peak A/Acceleration ADC Failed';
MotCurrAdcPeakAAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcPeakA has failed'];
MotCurrAdcPeakAAdcFaild.DocUnits = 'Cnt';
MotCurrAdcPeakAAdcFaild.SwcShoName = 'FordT3McuCfg';
MotCurrAdcPeakAAdcFaild.EngDT = dt.float32;
MotCurrAdcPeakAAdcFaild.EngInit = 0;
MotCurrAdcPeakAAdcFaild.EngMin = 0;
MotCurrAdcPeakAAdcFaild.EngMax = 5;
MotCurrAdcPeakAAdcFaild.TestTolerance = 0;
MotCurrAdcPeakAAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotCurrAdcPeakAAdcFaild.WriteType = 'Rte';


MotCurrAdcPeakBAdcFaild = DataDict.OpSignal;
MotCurrAdcPeakBAdcFaild.LongName = 'Motor Control Motor Current/I ADC Peak B ADC Failed';
MotCurrAdcPeakBAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcPeakB has failed'];
MotCurrAdcPeakBAdcFaild.DocUnits = 'Cnt';
MotCurrAdcPeakBAdcFaild.SwcShoName = 'FordT3McuCfg';
MotCurrAdcPeakBAdcFaild.EngDT = dt.lgc;
MotCurrAdcPeakBAdcFaild.EngInit = 0;
MotCurrAdcPeakBAdcFaild.EngMin = 0;
MotCurrAdcPeakBAdcFaild.EngMax = 1;
MotCurrAdcPeakBAdcFaild.TestTolerance = 0;
MotCurrAdcPeakBAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotCurrAdcPeakBAdcFaild.WriteType = 'Rte';


MotCurrAdcPeakCAdcFaild = DataDict.OpSignal;
MotCurrAdcPeakCAdcFaild.LongName = 'Motor Control Motor Current/I ADC Peak C ADC Failed';
MotCurrAdcPeakCAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcPeakC has failed'];
MotCurrAdcPeakCAdcFaild.DocUnits = 'Cnt';
MotCurrAdcPeakCAdcFaild.SwcShoName = 'FordT3McuCfg';
MotCurrAdcPeakCAdcFaild.EngDT = dt.lgc;
MotCurrAdcPeakCAdcFaild.EngInit = 0;
MotCurrAdcPeakCAdcFaild.EngMin = 0;
MotCurrAdcPeakCAdcFaild.EngMax = 1;
MotCurrAdcPeakCAdcFaild.TestTolerance = 0;
MotCurrAdcPeakCAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotCurrAdcPeakCAdcFaild.WriteType = 'Rte';


MotCurrAdcVlyAAdcFaild = DataDict.OpSignal;
MotCurrAdcVlyAAdcFaild.LongName = 'Motor Control Motor Current/I ADC Valley A/Acceleration ADC Failed';
MotCurrAdcVlyAAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcVlyA has failed'];
MotCurrAdcVlyAAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyAAdcFaild.SwcShoName = 'FordT3McuCfg';
MotCurrAdcVlyAAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyAAdcFaild.EngInit = 0;
MotCurrAdcVlyAAdcFaild.EngMin = 0;
MotCurrAdcVlyAAdcFaild.EngMax = 1;
MotCurrAdcVlyAAdcFaild.TestTolerance = 0;
MotCurrAdcVlyAAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotCurrAdcVlyAAdcFaild.WriteType = 'Rte';


MotCurrAdcVlyBAdcFaild = DataDict.OpSignal;
MotCurrAdcVlyBAdcFaild.LongName = 'Motor Control Motor Current/I ADC Valley B ADC Failed';
MotCurrAdcVlyBAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcVlyB has failed'];
MotCurrAdcVlyBAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyBAdcFaild.SwcShoName = 'FordT3McuCfg';
MotCurrAdcVlyBAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyBAdcFaild.EngInit = 0;
MotCurrAdcVlyBAdcFaild.EngMin = 0;
MotCurrAdcVlyBAdcFaild.EngMax = 1;
MotCurrAdcVlyBAdcFaild.TestTolerance = 0;
MotCurrAdcVlyBAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotCurrAdcVlyBAdcFaild.WriteType = 'Rte';


MotCurrAdcVlyCAdcFaild = DataDict.OpSignal;
MotCurrAdcVlyCAdcFaild.LongName = 'Motor Control Motor Current/I ADC Valley C ADC Failed';
MotCurrAdcVlyCAdcFaild.Description = [...
  'The Adc that converts MotCurrAdcVlyC has failed'];
MotCurrAdcVlyCAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyCAdcFaild.SwcShoName = 'FordT3McuCfg';
MotCurrAdcVlyCAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyCAdcFaild.EngInit = 0;
MotCurrAdcVlyCAdcFaild.EngMin = 0;
MotCurrAdcVlyCAdcFaild.EngMax = 1;
MotCurrAdcVlyCAdcFaild.TestTolerance = 0;
MotCurrAdcVlyCAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotCurrAdcVlyCAdcFaild.WriteType = 'Rte';


MotCurrSnsrOffs1AdcFaild = DataDict.OpSignal;
MotCurrSnsrOffs1AdcFaild.LongName = 'Motor Control Motor Current/I Sensor Offset 1 ADC Failed';
MotCurrSnsrOffs1AdcFaild.Description = [...
  'The Adc that converts MotCurrSnsrOffs1 has failed'];
MotCurrSnsrOffs1AdcFaild.DocUnits = 'Cnt';
MotCurrSnsrOffs1AdcFaild.SwcShoName = 'FordT3McuCfg';
MotCurrSnsrOffs1AdcFaild.EngDT = dt.lgc;
MotCurrSnsrOffs1AdcFaild.EngInit = 0;
MotCurrSnsrOffs1AdcFaild.EngMin = 0;
MotCurrSnsrOffs1AdcFaild.EngMax = 1;
MotCurrSnsrOffs1AdcFaild.TestTolerance = 0;
MotCurrSnsrOffs1AdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
MotCurrSnsrOffs1AdcFaild.WriteType = 'Rte';


PwrDiscnctSwtDiag = DataDict.OpSignal;
PwrDiscnctSwtDiag.LongName = 'Power Disconnect Switch Diagnosis';
PwrDiscnctSwtDiag.Description = [...
  'ADC Converted representation of the PMOS Diagnostic monitor point'];
PwrDiscnctSwtDiag.DocUnits = 'Volt';
PwrDiscnctSwtDiag.SwcShoName = 'FordT3McuCfg';
PwrDiscnctSwtDiag.EngDT = dt.float32;
PwrDiscnctSwtDiag.EngInit = 0;
PwrDiscnctSwtDiag.EngMin = 0;
PwrDiscnctSwtDiag.EngMax = 40;
PwrDiscnctSwtDiag.TestTolerance = 0;
PwrDiscnctSwtDiag.WrittenIn = {'FordT3McuCfgInit4','FordT3McuCfgPer2'};
PwrDiscnctSwtDiag.WriteType = 'Rte';


PwrDiscnctSwtDiagAdcFaild = DataDict.OpSignal;
PwrDiscnctSwtDiagAdcFaild.LongName = 'Power Disconnect Siwtch Diagnostics Adc Failed';
PwrDiscnctSwtDiagAdcFaild.Description = [...
  'Power Disconnect Siwtch Diagnostics Adc Failed'];
PwrDiscnctSwtDiagAdcFaild.DocUnits = 'Cnt';
PwrDiscnctSwtDiagAdcFaild.SwcShoName = 'FordT3McuCfg';
PwrDiscnctSwtDiagAdcFaild.EngDT = dt.lgc;
PwrDiscnctSwtDiagAdcFaild.EngInit = 0;
PwrDiscnctSwtDiagAdcFaild.EngMin = 0;
PwrDiscnctSwtDiagAdcFaild.EngMax = 1;
PwrDiscnctSwtDiagAdcFaild.TestTolerance = 0;
PwrDiscnctSwtDiagAdcFaild.WrittenIn = {'FordT3McuCfgPer3'};
PwrDiscnctSwtDiagAdcFaild.WriteType = 'Rte';


MotDrvr1IninTestCmpl = DataDict.OpSignal;
MotDrvr1IninTestCmpl.LongName = 'Motor Driver 1 Initialization Test Complete';
MotDrvr1IninTestCmpl.Description = [...
  'Motor Driver 1 Initialization Test Complete'];
MotDrvr1IninTestCmpl.DocUnits = 'Cnt';
MotDrvr1IninTestCmpl.SwcShoName = 'FordT3McuCfg';
MotDrvr1IninTestCmpl.EngDT = dt.lgc;
MotDrvr1IninTestCmpl.EngInit = 0;
MotDrvr1IninTestCmpl.EngMin = 0;
MotDrvr1IninTestCmpl.EngMax = 1;
MotDrvr1IninTestCmpl.TestTolerance = 0;
MotDrvr1IninTestCmpl.WrittenIn = {'FordT3McuCfgPer3'};
MotDrvr1IninTestCmpl.WriteType = 'Rte';

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

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16 = DataDict.Constant;
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.LongName = 'Dynamic Diagnostic Fail Step';
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.Description = 'Dynamic Diagnostic Fail Step';
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.DocUnits = 'Cnt';
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.EngDT = dt.u16;
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.EngVal = 3276;
ADCDIAGC_DYNDIAGFAILSTEP_CNT_U16.Define = 'Local';


ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16 = DataDict.Constant;
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.LongName = 'Dynamic Diagnostic Pass Step';
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.Description = 'Dynamic Diagnostic Pass Step';
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.DocUnits = 'Cnt';
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.EngDT = dt.u16;
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.EngVal = 327;
ADCDIAGC_DYNDIAGPASSSTEP_CNT_U16.Define = 'Local';


ADCF0CFGANDUSE_ADCF0SGVCEP2_CNT_U08 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0SGVCEP2_CNT_U08.LongName = 'ADCD0SGVCEP2 Register';
ADCF0CFGANDUSE_ADCF0SGVCEP2_CNT_U08.Description = 'ADC0 Scan Group 2 end pointer';
ADCF0CFGANDUSE_ADCF0SGVCEP2_CNT_U08.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0SGVCEP2_CNT_U08.EngDT = dt.u08;
ADCF0CFGANDUSE_ADCF0SGVCEP2_CNT_U08.EngVal = 14;
ADCF0CFGANDUSE_ADCF0SGVCEP2_CNT_U08.Define = 'Local';


ADCF0CFGANDUSE_ADCF0SGVCEP3_CNT_U08 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0SGVCEP3_CNT_U08.LongName = 'ADCD0SGVCEP3 Register';
ADCF0CFGANDUSE_ADCF0SGVCEP3_CNT_U08.Description = 'ADC0 Scan Group 3 end pointer';
ADCF0CFGANDUSE_ADCF0SGVCEP3_CNT_U08.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0SGVCEP3_CNT_U08.EngDT = dt.u08;
ADCF0CFGANDUSE_ADCF0SGVCEP3_CNT_U08.EngVal = 4;
ADCF0CFGANDUSE_ADCF0SGVCEP3_CNT_U08.Define = 'Local';


ADCF0CFGANDUSE_ADCF0SGVCSP2_CNT_U08 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0SGVCSP2_CNT_U08.LongName = 'ADCD0SGVCSP2 Register';
ADCF0CFGANDUSE_ADCF0SGVCSP2_CNT_U08.Description = 'ADC0 Scan Group 2 start pointer';
ADCF0CFGANDUSE_ADCF0SGVCSP2_CNT_U08.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0SGVCSP2_CNT_U08.EngDT = dt.u08;
ADCF0CFGANDUSE_ADCF0SGVCSP2_CNT_U08.EngVal = 5;
ADCF0CFGANDUSE_ADCF0SGVCSP2_CNT_U08.Define = 'Local';


ADCF0CFGANDUSE_ADCF0SGVCSP3_CNT_U08 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0SGVCSP3_CNT_U08.LongName = 'ADCD0SGVCSP3 Register';
ADCF0CFGANDUSE_ADCF0SGVCSP3_CNT_U08.Description = 'ADC0 Scan Group 3 start pointer';
ADCF0CFGANDUSE_ADCF0SGVCSP3_CNT_U08.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0SGVCSP3_CNT_U08.EngDT = dt.u08;
ADCF0CFGANDUSE_ADCF0SGVCSP3_CNT_U08.EngVal = 0;
ADCF0CFGANDUSE_ADCF0SGVCSP3_CNT_U08.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR00_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR00_CNT_U32.LongName = 'ADCD0VCR00 Register';
ADCF0CFGANDUSE_ADCF0VCR00_CNT_U32.Description = 'Value of the VCR00 Register';
ADCF0CFGANDUSE_ADCF0VCR00_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR00_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR00_CNT_U32.EngVal = 24580;
ADCF0CFGANDUSE_ADCF0VCR00_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR01_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR01_CNT_U32.LongName = 'ADCD0VCR01 Register';
ADCF0CFGANDUSE_ADCF0VCR01_CNT_U32.Description = 'Value of the VCR01 Register';
ADCF0CFGANDUSE_ADCF0VCR01_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR01_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR01_CNT_U32.EngVal = 0;
ADCF0CFGANDUSE_ADCF0VCR01_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR02_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR02_CNT_U32.LongName = 'ADCD0VCR02 Register';
ADCF0CFGANDUSE_ADCF0VCR02_CNT_U32.Description = 'Value of the VCR00 Register';
ADCF0CFGANDUSE_ADCF0VCR02_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR02_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR02_CNT_U32.EngVal = 1;
ADCF0CFGANDUSE_ADCF0VCR02_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR03_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR03_CNT_U32.LongName = 'ADCD0VCR03 Register';
ADCF0CFGANDUSE_ADCF0VCR03_CNT_U32.Description = 'Value of the VCR03 Register';
ADCF0CFGANDUSE_ADCF0VCR03_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR03_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR03_CNT_U32.EngVal = 2;
ADCF0CFGANDUSE_ADCF0VCR03_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR04_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR04_CNT_U32.LongName = 'ADCD0VCR04 Register';
ADCF0CFGANDUSE_ADCF0VCR04_CNT_U32.Description = 'Value of the VCR04 Register';
ADCF0CFGANDUSE_ADCF0VCR04_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR04_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR04_CNT_U32.EngVal = 24588;
ADCF0CFGANDUSE_ADCF0VCR04_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR05_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR05_CNT_U32.LongName = 'ADCD0VCR05 Register';
ADCF0CFGANDUSE_ADCF0VCR05_CNT_U32.Description = 'Value of the VCR05 Register';
ADCF0CFGANDUSE_ADCF0VCR05_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR05_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR05_CNT_U32.EngVal = 24580;
ADCF0CFGANDUSE_ADCF0VCR05_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR06_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR06_CNT_U32.LongName = 'ADCD0VCR06 Register';
ADCF0CFGANDUSE_ADCF0VCR06_CNT_U32.Description = 'Value of the VCR06 Register';
ADCF0CFGANDUSE_ADCF0VCR06_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR06_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR06_CNT_U32.EngVal = 0;
ADCF0CFGANDUSE_ADCF0VCR06_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR07_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR07_CNT_U32.LongName = 'ADCD0VCR07 Register';
ADCF0CFGANDUSE_ADCF0VCR07_CNT_U32.Description = 'Value of the VCR07 Register';
ADCF0CFGANDUSE_ADCF0VCR07_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR07_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR07_CNT_U32.EngVal = 1;
ADCF0CFGANDUSE_ADCF0VCR07_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR08_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR08_CNT_U32.LongName = 'ADCD0VCR08 Register';
ADCF0CFGANDUSE_ADCF0VCR08_CNT_U32.Description = 'Value of the VCR08 Register';
ADCF0CFGANDUSE_ADCF0VCR08_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR08_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR08_CNT_U32.EngVal = 2;
ADCF0CFGANDUSE_ADCF0VCR08_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR09_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR09_CNT_U32.LongName = 'ADCD0VCR09 Register';
ADCF0CFGANDUSE_ADCF0VCR09_CNT_U32.Description = 'Value of the VCR09 Register';
ADCF0CFGANDUSE_ADCF0VCR09_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR09_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR09_CNT_U32.EngVal = 10;
ADCF0CFGANDUSE_ADCF0VCR09_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR10_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR10_CNT_U32.LongName = 'ADCD0VCR10 Register';
ADCF0CFGANDUSE_ADCF0VCR10_CNT_U32.Description = 'Value of the VCR10 Register';
ADCF0CFGANDUSE_ADCF0VCR10_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR10_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR10_CNT_U32.EngVal = 4;
ADCF0CFGANDUSE_ADCF0VCR10_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR11_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR11_CNT_U32.LongName = 'ADCD0VCR11 Register';
ADCF0CFGANDUSE_ADCF0VCR11_CNT_U32.Description = 'Value of the VCR11 Register';
ADCF0CFGANDUSE_ADCF0VCR11_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR11_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR11_CNT_U32.EngVal = 6;
ADCF0CFGANDUSE_ADCF0VCR11_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR12_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR12_CNT_U32.LongName = 'ADCD0VCR12 Register';
ADCF0CFGANDUSE_ADCF0VCR12_CNT_U32.Description = 'Value of the VCR12 Register';
ADCF0CFGANDUSE_ADCF0VCR12_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR12_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR12_CNT_U32.EngVal = 5;
ADCF0CFGANDUSE_ADCF0VCR12_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR13_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR13_CNT_U32.LongName = 'ADCD0VCR13 Register';
ADCF0CFGANDUSE_ADCF0VCR13_CNT_U32.Description = 'Value of the VCR13 Register';
ADCF0CFGANDUSE_ADCF0VCR13_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR13_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR13_CNT_U32.EngVal = 8;
ADCF0CFGANDUSE_ADCF0VCR13_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR14_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR14_CNT_U32.LongName = 'ADCD0VCR14 Register';
ADCF0CFGANDUSE_ADCF0VCR14_CNT_U32.Description = 'Value of the VCR14 Register';
ADCF0CFGANDUSE_ADCF0VCR14_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR14_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR14_CNT_U32.EngVal = 24588;
ADCF0CFGANDUSE_ADCF0VCR14_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR15_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR15_CNT_U32.LongName = 'ADCD0VCR15 Register';
ADCF0CFGANDUSE_ADCF0VCR15_CNT_U32.Description = 'Value of the VCR15 Register';
ADCF0CFGANDUSE_ADCF0VCR15_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR15_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR15_CNT_U32.EngVal = 24584;
ADCF0CFGANDUSE_ADCF0VCR15_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR16_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR16_CNT_U32.LongName = 'ADCD0VCR16 Register';
ADCF0CFGANDUSE_ADCF0VCR16_CNT_U32.Description = 'Value of the VCR16 Register';
ADCF0CFGANDUSE_ADCF0VCR16_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR16_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR16_CNT_U32.EngVal = 24584;
ADCF0CFGANDUSE_ADCF0VCR16_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR17_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR17_CNT_U32.LongName = 'ADCD0VCR17 Register';
ADCF0CFGANDUSE_ADCF0VCR17_CNT_U32.Description = 'Value of the VCR17 Register';
ADCF0CFGANDUSE_ADCF0VCR17_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR17_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR17_CNT_U32.EngVal = 24584;
ADCF0CFGANDUSE_ADCF0VCR17_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR18_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR18_CNT_U32.LongName = 'ADCD0VCR18 Register';
ADCF0CFGANDUSE_ADCF0VCR18_CNT_U32.Description = 'Value of the VCR18 Register';
ADCF0CFGANDUSE_ADCF0VCR18_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR18_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR18_CNT_U32.EngVal = 24584;
ADCF0CFGANDUSE_ADCF0VCR18_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR19_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR19_CNT_U32.LongName = 'ADCD0VCR19 Register';
ADCF0CFGANDUSE_ADCF0VCR19_CNT_U32.Description = 'Value of the VCR19 Register';
ADCF0CFGANDUSE_ADCF0VCR19_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR19_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR19_CNT_U32.EngVal = 24584;
ADCF0CFGANDUSE_ADCF0VCR19_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCF0VCR20_CNT_U32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCF0VCR20_CNT_U32.LongName = 'ADCD0VCR20 Register';
ADCF0CFGANDUSE_ADCF0VCR20_CNT_U32.Description = 'Value of the VCR20 Register';
ADCF0CFGANDUSE_ADCF0VCR20_CNT_U32.DocUnits = 'Cnt';
ADCF0CFGANDUSE_ADCF0VCR20_CNT_U32.EngDT = dt.u32;
ADCF0CFGANDUSE_ADCF0VCR20_CNT_U32.EngVal = 24584;
ADCF0CFGANDUSE_ADCF0VCR20_CNT_U32.Define = 'Local';


ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32 = DataDict.Constant;
ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.LongName = 'ADC Scaling Factor';
ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.Description = [...
  'ADC scaling factor to convert converted counts to volts'];
ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.DocUnits = 'VoltPerCnt';
ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.EngDT = dt.float32;
ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.EngVal = 0.0008058608;
ADCF0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1SGVCEP2_CNT_U08 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1SGVCEP2_CNT_U08.LongName = 'ADCD1SGVCEP2 Register';
ADCF1CFGANDUSE_ADCF1SGVCEP2_CNT_U08.Description = 'ADC1 Scan Group 2 end pointer';
ADCF1CFGANDUSE_ADCF1SGVCEP2_CNT_U08.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1SGVCEP2_CNT_U08.EngDT = dt.u08;
ADCF1CFGANDUSE_ADCF1SGVCEP2_CNT_U08.EngVal = 11;
ADCF1CFGANDUSE_ADCF1SGVCEP2_CNT_U08.Define = 'Local';


ADCF1CFGANDUSE_ADCF1SGVCEP3_CNT_U08 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1SGVCEP3_CNT_U08.LongName = 'ADCD1SGVCEP3 Register';
ADCF1CFGANDUSE_ADCF1SGVCEP3_CNT_U08.Description = 'ADC1 Scan Group 3 end pointer';
ADCF1CFGANDUSE_ADCF1SGVCEP3_CNT_U08.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1SGVCEP3_CNT_U08.EngDT = dt.u08;
ADCF1CFGANDUSE_ADCF1SGVCEP3_CNT_U08.EngVal = 8;
ADCF1CFGANDUSE_ADCF1SGVCEP3_CNT_U08.Define = 'Local';


ADCF1CFGANDUSE_ADCF1SGVCSP2_CNT_U08 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1SGVCSP2_CNT_U08.LongName = 'ADCD1SGVCSP2 Register';
ADCF1CFGANDUSE_ADCF1SGVCSP2_CNT_U08.Description = 'ADC1 Scan Group 2 start pointer';
ADCF1CFGANDUSE_ADCF1SGVCSP2_CNT_U08.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1SGVCSP2_CNT_U08.EngDT = dt.u08;
ADCF1CFGANDUSE_ADCF1SGVCSP2_CNT_U08.EngVal = 9;
ADCF1CFGANDUSE_ADCF1SGVCSP2_CNT_U08.Define = 'Local';


ADCF1CFGANDUSE_ADCF1SGVCSP3_CNT_U08 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1SGVCSP3_CNT_U08.LongName = 'ADCD1SGVCSP3 Register';
ADCF1CFGANDUSE_ADCF1SGVCSP3_CNT_U08.Description = 'ADC1 Scan Group 3 start pointer';
ADCF1CFGANDUSE_ADCF1SGVCSP3_CNT_U08.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1SGVCSP3_CNT_U08.EngDT = dt.u08;
ADCF1CFGANDUSE_ADCF1SGVCSP3_CNT_U08.EngVal = 0;
ADCF1CFGANDUSE_ADCF1SGVCSP3_CNT_U08.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR00_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR00_CNT_U32.LongName = 'ADCD1VCR00 Register';
ADCF1CFGANDUSE_ADCF1VCR00_CNT_U32.Description = 'Value of the VCR00 Register';
ADCF1CFGANDUSE_ADCF1VCR00_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR00_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR00_CNT_U32.EngVal = 24580;
ADCF1CFGANDUSE_ADCF1VCR00_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR01_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR01_CNT_U32.LongName = 'ADCD1VCR01 Register';
ADCF1CFGANDUSE_ADCF1VCR01_CNT_U32.Description = 'Value of the VCR01 Register';
ADCF1CFGANDUSE_ADCF1VCR01_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR01_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR01_CNT_U32.EngVal = 1;
ADCF1CFGANDUSE_ADCF1VCR01_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR02_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR02_CNT_U32.LongName = 'ADCD1VCR02 Register';
ADCF1CFGANDUSE_ADCF1VCR02_CNT_U32.Description = 'Value of the VCR02 Register';
ADCF1CFGANDUSE_ADCF1VCR02_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR02_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR02_CNT_U32.EngVal = 2;
ADCF1CFGANDUSE_ADCF1VCR02_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR03_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR03_CNT_U32.LongName = 'ADCD1VCR03 Register';
ADCF1CFGANDUSE_ADCF1VCR03_CNT_U32.Description = 'Value of the VCR03 Register';
ADCF1CFGANDUSE_ADCF1VCR03_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR03_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR03_CNT_U32.EngVal = 3;
ADCF1CFGANDUSE_ADCF1VCR03_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR04_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR04_CNT_U32.LongName = 'ADCD1VCR04 Register';
ADCF1CFGANDUSE_ADCF1VCR04_CNT_U32.Description = 'Value of the VCR04 Register';
ADCF1CFGANDUSE_ADCF1VCR04_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR04_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR04_CNT_U32.EngVal = 4;
ADCF1CFGANDUSE_ADCF1VCR04_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR05_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR05_CNT_U32.LongName = 'ADCD1VCR05 Register';
ADCF1CFGANDUSE_ADCF1VCR05_CNT_U32.Description = 'Value of the VCR05 Register';
ADCF1CFGANDUSE_ADCF1VCR05_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR05_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR05_CNT_U32.EngVal = 5;
ADCF1CFGANDUSE_ADCF1VCR05_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR06_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR06_CNT_U32.LongName = 'ADCD1VCR06 Register';
ADCF1CFGANDUSE_ADCF1VCR06_CNT_U32.Description = 'Value of the VCR06 Register';
ADCF1CFGANDUSE_ADCF1VCR06_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR06_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR06_CNT_U32.EngVal = 7;
ADCF1CFGANDUSE_ADCF1VCR06_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR07_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR07_CNT_U32.LongName = 'ADCD1VCR07 Register';
ADCF1CFGANDUSE_ADCF1VCR07_CNT_U32.Description = 'Value of the VCR07 Register';
ADCF1CFGANDUSE_ADCF1VCR07_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR07_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR07_CNT_U32.EngVal = 9;
ADCF1CFGANDUSE_ADCF1VCR07_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR08_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR08_CNT_U32.LongName = 'ADCD1VCR08 Register';
ADCF1CFGANDUSE_ADCF1VCR08_CNT_U32.Description = 'Value of the VCR08 Register';
ADCF1CFGANDUSE_ADCF1VCR08_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR08_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR08_CNT_U32.EngVal = 24588;
ADCF1CFGANDUSE_ADCF1VCR08_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR09_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR09_CNT_U32.LongName = 'ADCD1VCR09 Register';
ADCF1CFGANDUSE_ADCF1VCR09_CNT_U32.Description = 'Value of the VCR09 Register';
ADCF1CFGANDUSE_ADCF1VCR09_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR09_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR09_CNT_U32.EngVal = 24580;
ADCF1CFGANDUSE_ADCF1VCR09_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR10_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR10_CNT_U32.LongName = 'ADCD1VCR10 Register';
ADCF1CFGANDUSE_ADCF1VCR10_CNT_U32.Description = 'Value of the VCR10 Register';
ADCF1CFGANDUSE_ADCF1VCR10_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR10_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR10_CNT_U32.EngVal = 0;
ADCF1CFGANDUSE_ADCF1VCR10_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR11_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR11_CNT_U32.LongName = 'ADCD1VCR11 Register';
ADCF1CFGANDUSE_ADCF1VCR11_CNT_U32.Description = 'Value of the VCR11 Register';
ADCF1CFGANDUSE_ADCF1VCR11_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR11_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR11_CNT_U32.EngVal = 24588;
ADCF1CFGANDUSE_ADCF1VCR11_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR12_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR12_CNT_U32.LongName = 'ADCD1VCR12 Register';
ADCF1CFGANDUSE_ADCF1VCR12_CNT_U32.Description = 'Value of the VCR12 Register';
ADCF1CFGANDUSE_ADCF1VCR12_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR12_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR12_CNT_U32.EngVal = 24584;
ADCF1CFGANDUSE_ADCF1VCR12_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR13_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR13_CNT_U32.LongName = 'ADCD1VCR13 Register';
ADCF1CFGANDUSE_ADCF1VCR13_CNT_U32.Description = 'Value of the VCR13 Register';
ADCF1CFGANDUSE_ADCF1VCR13_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR13_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR13_CNT_U32.EngVal = 24584;
ADCF1CFGANDUSE_ADCF1VCR13_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR14_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR14_CNT_U32.LongName = 'ADCD1VCR14 Register';
ADCF1CFGANDUSE_ADCF1VCR14_CNT_U32.Description = 'Value of the VCR14 Register';
ADCF1CFGANDUSE_ADCF1VCR14_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR14_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR14_CNT_U32.EngVal = 24584;
ADCF1CFGANDUSE_ADCF1VCR14_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR15_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR15_CNT_U32.LongName = 'ADCD1VCR15 Register';
ADCF1CFGANDUSE_ADCF1VCR15_CNT_U32.Description = 'Value of the VCR15 Register';
ADCF1CFGANDUSE_ADCF1VCR15_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR15_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR15_CNT_U32.EngVal = 24584;
ADCF1CFGANDUSE_ADCF1VCR15_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR16_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR16_CNT_U32.LongName = 'ADCD1VCR16 Register';
ADCF1CFGANDUSE_ADCF1VCR16_CNT_U32.Description = 'Value of the VCR16 Register';
ADCF1CFGANDUSE_ADCF1VCR16_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR16_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR16_CNT_U32.EngVal = 24584;
ADCF1CFGANDUSE_ADCF1VCR16_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR17_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR17_CNT_U32.LongName = 'ADCD1VCR17 Register';
ADCF1CFGANDUSE_ADCF1VCR17_CNT_U32.Description = 'Value of the VCR17 Register';
ADCF1CFGANDUSE_ADCF1VCR17_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR17_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR17_CNT_U32.EngVal = 24584;
ADCF1CFGANDUSE_ADCF1VCR17_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR18_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR18_CNT_U32.LongName = 'ADCD1VCR18 Register';
ADCF1CFGANDUSE_ADCF1VCR18_CNT_U32.Description = 'Value of the VCR18 Register';
ADCF1CFGANDUSE_ADCF1VCR18_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR18_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR18_CNT_U32.EngVal = 24584;
ADCF1CFGANDUSE_ADCF1VCR18_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR19_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR19_CNT_U32.LongName = 'ADCD1VCR19 Register';
ADCF1CFGANDUSE_ADCF1VCR19_CNT_U32.Description = 'Value of the VCR19 Register';
ADCF1CFGANDUSE_ADCF1VCR19_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR19_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR19_CNT_U32.EngVal = 24584;
ADCF1CFGANDUSE_ADCF1VCR19_CNT_U32.Define = 'Local';


ADCF1CFGANDUSE_ADCF1VCR20_CNT_U32 = DataDict.Constant;
ADCF1CFGANDUSE_ADCF1VCR20_CNT_U32.LongName = 'ADCD1VCR20 Register';
ADCF1CFGANDUSE_ADCF1VCR20_CNT_U32.Description = 'Value of the VCR20 Register';
ADCF1CFGANDUSE_ADCF1VCR20_CNT_U32.DocUnits = 'Cnt';
ADCF1CFGANDUSE_ADCF1VCR20_CNT_U32.EngDT = dt.u32;
ADCF1CFGANDUSE_ADCF1VCR20_CNT_U32.EngVal = 24584;
ADCF1CFGANDUSE_ADCF1VCR20_CNT_U32.Define = 'Local';


APPLCRCREGNNR_CNT_U08 = DataDict.Constant;
APPLCRCREGNNR_CNT_U08.LongName = 'Application CRC Region Number';
APPLCRCREGNNR_CNT_U08.Description = [...
  'The application region"s index might be changed in between programs. T' ...
  'his constant will define the application region for a specific build.'];
APPLCRCREGNNR_CNT_U08.DocUnits = 'Cnt';
APPLCRCREGNNR_CNT_U08.EngDT = dt.u08;
APPLCRCREGNNR_CNT_U08.EngVal = 0;
APPLCRCREGNNR_CNT_U08.Define = 'Local';


BATTRTCNCURR_FAILSTEP_CNT_U16 = DataDict.Constant;
BATTRTCNCURR_FAILSTEP_CNT_U16.LongName = 'Battery Return Current Fail Step';
BATTRTCNCURR_FAILSTEP_CNT_U16.Description = [...
  'Increments the error accumulator. Time to fail assert.'];
BATTRTCNCURR_FAILSTEP_CNT_U16.DocUnits = 'Cnt';
BATTRTCNCURR_FAILSTEP_CNT_U16.EngDT = dt.u16;
BATTRTCNCURR_FAILSTEP_CNT_U16.EngVal = 3276;
BATTRTCNCURR_FAILSTEP_CNT_U16.Define = 'Global';


BATTRTCNCURR_PASSSTEP_CNT_U16 = DataDict.Constant;
BATTRTCNCURR_PASSSTEP_CNT_U16.LongName = 'Battery Return Current Pass Step';
BATTRTCNCURR_PASSSTEP_CNT_U16.Description = [...
  'Decrements the error accumulator. Time to pass assert.'];
BATTRTCNCURR_PASSSTEP_CNT_U16.DocUnits = 'Cnt';
BATTRTCNCURR_PASSSTEP_CNT_U16.EngDT = dt.u16;
BATTRTCNCURR_PASSSTEP_CNT_U16.EngVal = 1638;
BATTRTCNCURR_PASSSTEP_CNT_U16.Define = 'Global';


BATTRTNCURR_FASTLOOPPROC_CNT_LOGL = DataDict.Constant;
BATTRTNCURR_FASTLOOPPROC_CNT_LOGL.LongName = 'Battery Return Current Fast Loop Process';
BATTRTNCURR_FASTLOOPPROC_CNT_LOGL.Description = [...
  'Controls the conditional code compilation according to the chosen exec' ...
  'ution case- inside motor ISR or inside 2ms periodic'];
BATTRTNCURR_FASTLOOPPROC_CNT_LOGL.DocUnits = 'Cnt';
BATTRTNCURR_FASTLOOPPROC_CNT_LOGL.EngDT = dt.lgc;
BATTRTNCURR_FASTLOOPPROC_CNT_LOGL.EngVal = 1;
BATTRTNCURR_FASTLOOPPROC_CNT_LOGL.Define = 'Global';


BATTRTNCURR_GAIN_AMPRPERVOLT_F32 = DataDict.Constant;
BATTRTNCURR_GAIN_AMPRPERVOLT_F32.LongName = 'Battery Return Current Gain';
BATTRTNCURR_GAIN_AMPRPERVOLT_F32.Description = 'Used during input conversion';
BATTRTNCURR_GAIN_AMPRPERVOLT_F32.DocUnits = 'AmprPerVolt';
BATTRTNCURR_GAIN_AMPRPERVOLT_F32.EngDT = dt.float32;
BATTRTNCURR_GAIN_AMPRPERVOLT_F32.EngVal = 100;
BATTRTNCURR_GAIN_AMPRPERVOLT_F32.Define = 'Global';


BATTRTNCURR_LOWRTHD_AMPR_F32 = DataDict.Constant;
BATTRTNCURR_LOWRTHD_AMPR_F32.LongName = 'Battery Return Current Lower Threshold';
BATTRTNCURR_LOWRTHD_AMPR_F32.Description = [...
  'Used after sample conversion to amps for range check'];
BATTRTNCURR_LOWRTHD_AMPR_F32.DocUnits = 'Ampr';
BATTRTNCURR_LOWRTHD_AMPR_F32.EngDT = dt.float32;
BATTRTNCURR_LOWRTHD_AMPR_F32.EngVal = -200;
BATTRTNCURR_LOWRTHD_AMPR_F32.Define = 'Global';


BATTRTNCURR_OFFSET_VOLT_F32 = DataDict.Constant;
BATTRTNCURR_OFFSET_VOLT_F32.LongName = 'Battery Return Current Offset';
BATTRTNCURR_OFFSET_VOLT_F32.Description = 'Used during input conversion';
BATTRTNCURR_OFFSET_VOLT_F32.DocUnits = 'Volt';
BATTRTNCURR_OFFSET_VOLT_F32.EngDT = dt.float32;
BATTRTNCURR_OFFSET_VOLT_F32.EngVal = 2.5;
BATTRTNCURR_OFFSET_VOLT_F32.Define = 'Global';


BATTRTNCURR_OUTPMAX_AMPR_F32 = DataDict.Constant;
BATTRTNCURR_OUTPMAX_AMPR_F32.LongName = 'Battery Return Current Output Max';
BATTRTNCURR_OUTPMAX_AMPR_F32.Description = 'Used for output signal saturation';
BATTRTNCURR_OUTPMAX_AMPR_F32.DocUnits = 'Ampr';
BATTRTNCURR_OUTPMAX_AMPR_F32.EngDT = dt.float32;
BATTRTNCURR_OUTPMAX_AMPR_F32.EngVal = 200;
BATTRTNCURR_OUTPMAX_AMPR_F32.Define = 'Global';


BATTRTNCURR_OUTPMIN_AMPR_F32 = DataDict.Constant;
BATTRTNCURR_OUTPMIN_AMPR_F32.LongName = 'Battery Return Current Output Min';
BATTRTNCURR_OUTPMIN_AMPR_F32.Description = 'Used for output signal saturation';
BATTRTNCURR_OUTPMIN_AMPR_F32.DocUnits = 'Ampr';
BATTRTNCURR_OUTPMIN_AMPR_F32.EngDT = dt.float32;
BATTRTNCURR_OUTPMIN_AMPR_F32.EngVal = -200;
BATTRTNCURR_OUTPMIN_AMPR_F32.Define = 'Global';


BATTRTNCURR_UPPRTHD_AMPR_F32 = DataDict.Constant;
BATTRTNCURR_UPPRTHD_AMPR_F32.LongName = 'Battery Return Current Upper Threshold';
BATTRTNCURR_UPPRTHD_AMPR_F32.Description = [...
  'Used after sample conversion to amps for range check'];
BATTRTNCURR_UPPRTHD_AMPR_F32.DocUnits = 'Ampr';
BATTRTNCURR_UPPRTHD_AMPR_F32.EngDT = dt.float32;
BATTRTNCURR_UPPRTHD_AMPR_F32.EngVal = 200;
BATTRTNCURR_UPPRTHD_AMPR_F32.Define = 'Global';


BATTVLTGSCAGFAC_ULS_F32 = DataDict.Constant;
BATTVLTGSCAGFAC_ULS_F32.LongName = 'Battery Voltage';
BATTVLTGSCAGFAC_ULS_F32.Description = [...
  'Inverse hardware scaling factor of battery voltage.  .EngVal = (20+2)/' ...
  '2'];
BATTVLTGSCAGFAC_ULS_F32.DocUnits = 'Uls';
BATTVLTGSCAGFAC_ULS_F32.EngDT = dt.float32;
BATTVLTGSCAGFAC_ULS_F32.EngVal = 11;
BATTVLTGSCAGFAC_ULS_F32.Define = 'Local';


BATTVLTGSWD1SCAGFAC_ULS_F32 = DataDict.Constant;
BATTVLTGSWD1SCAGFAC_ULS_F32.LongName = 'Battery Voltage Switched 1 Scaling Factor';
BATTVLTGSWD1SCAGFAC_ULS_F32.Description = [...
  'Inverse hardware scaling factor of battery voltage switched 1.  .EngVa' ...
  'l = (100+20)/20'];
BATTVLTGSWD1SCAGFAC_ULS_F32.DocUnits = 'Uls';
BATTVLTGSWD1SCAGFAC_ULS_F32.EngDT = dt.float32;
BATTVLTGSWD1SCAGFAC_ULS_F32.EngVal = 6;
BATTVLTGSWD1SCAGFAC_ULS_F32.Define = 'Local';


CHRGPMPDIAGSCAGFAC_ULS_F32 = DataDict.Constant;
CHRGPMPDIAGSCAGFAC_ULS_F32.LongName = 'Charge Pump Diagnostic Scaling Factor';
CHRGPMPDIAGSCAGFAC_ULS_F32.Description = [...
  'Inverse hardware scaling factor of Charge Pump Diagnostic.  .EngVal = ' ...
  '(200+34.8)/34.8'];
CHRGPMPDIAGSCAGFAC_ULS_F32.DocUnits = 'Uls';
CHRGPMPDIAGSCAGFAC_ULS_F32.EngDT = dt.float32;
CHRGPMPDIAGSCAGFAC_ULS_F32.EngVal = 6.747126437;
CHRGPMPDIAGSCAGFAC_ULS_F32.Define = 'Local';


ECUTMEAS_DFTT_DEGCGRD_F32 = DataDict.Constant;
ECUTMEAS_DFTT_DEGCGRD_F32.LongName = 'Default Temperature Used in Fault Cases';
ECUTMEAS_DFTT_DEGCGRD_F32.Description = 'Default Temp for fault conditions';
ECUTMEAS_DFTT_DEGCGRD_F32.DocUnits = 'DegCgrd';
ECUTMEAS_DFTT_DEGCGRD_F32.EngDT = dt.float32;
ECUTMEAS_DFTT_DEGCGRD_F32.EngVal = 60;
ECUTMEAS_DFTT_DEGCGRD_F32.Define = 'Global';


ECUTMEAS_ECUTX_VOLT_U3P13 = DataDict.Constant;
ECUTMEAS_ECUTX_VOLT_U3P13.LongName = 'Ecu Temperature X Table';
ECUTMEAS_ECUTX_VOLT_U3P13.Description = [...
  'This is the X table used as part of a linear interoplation to translat' ...
  'e input analog measurements in volts to temperature'];
ECUTMEAS_ECUTX_VOLT_U3P13.DocUnits = 'Volt';
ECUTMEAS_ECUTX_VOLT_U3P13.EngDT = dt.u3p13;
ECUTMEAS_ECUTX_VOLT_U3P13.EngVal =  ...
   [0.42       0.59580325       0.80377957       1.20174112       1.60220368       2.00441773       2.39713092            2.626];
ECUTMEAS_ECUTX_VOLT_U3P13.Define = 'Global';


ECUTMEAS_ECUTY_DEGCGRD_S8P7 = DataDict.Constant;
ECUTMEAS_ECUTY_DEGCGRD_S8P7.LongName = 'Ecu Temperature Y Table';
ECUTMEAS_ECUTY_DEGCGRD_S8P7.Description = [...
  'This is the Y table used as part of a linear interoplation to translat' ...
  'e input analog measurements in volts to temperature'];
ECUTMEAS_ECUTY_DEGCGRD_S8P7.DocUnits = 'DegCgrd';
ECUTMEAS_ECUTY_DEGCGRD_S8P7.EngDT = dt.s8p7;
ECUTMEAS_ECUTY_DEGCGRD_S8P7.EngVal =  ...
   [150              135              117               82               46                9              -28              -50];
ECUTMEAS_ECUTY_DEGCGRD_S8P7.Define = 'Global';


ECUTMEAS_FILTAU_HZ_F32 = DataDict.Constant;
ECUTMEAS_FILTAU_HZ_F32.LongName = 'Temperature Software Filter Time Constant';
ECUTMEAS_FILTAU_HZ_F32.Description = [...
  'Sets the time constant for filtering the temperature measurement'];
ECUTMEAS_FILTAU_HZ_F32.DocUnits = 'Hz';
ECUTMEAS_FILTAU_HZ_F32.EngDT = dt.float32;
ECUTMEAS_FILTAU_HZ_F32.EngVal = 2;
ECUTMEAS_FILTAU_HZ_F32.Define = 'Global';


ECUTMEAS_NTC0X045FAILSTEP_CNT_U16 = DataDict.Constant;
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.LongName = 'Error Accumulator Test Step Size for Failed Ecu Temperature Test';
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.Description = 'Increments the error accumulator';
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.DocUnits = 'Cnt';
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.EngDT = dt.u16;
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.EngVal = 3000;
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.Define = 'Global';


ECUTMEAS_NTC0X045PASSSTEP_CNT_U16 = DataDict.Constant;
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.LongName = 'Error Accumulator Test Step Size for Pass Ecu Temperature Test';
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.Description = 'Decrements the error accumulator';
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.DocUnits = 'Cnt';
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.EngDT = dt.u16;
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.EngVal = 3000;
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.Define = 'Global';


ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32 = DataDict.Constant;
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.LongName = 'Diagnostic Maximum Temperature Limit';
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.Description = [...
  'Identifies the max temperature allowed to accumulate a diagnostic erro' ...
  'r'];
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.DocUnits = 'DegCgrd';
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.EngDT = dt.float32;
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.EngVal = 125;
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.Define = 'Global';


ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32 = DataDict.Constant;
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.LongName = 'Diagnostic Minimum Temperature Limit';
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.Description = [...
  'Identifies the min temperature allowed to accumulate a diagnostic erro' ...
  'r'];
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.DocUnits = 'DegCgrd';
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.EngDT = dt.float32;
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.EngVal = -40;
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.Define = 'Global';


ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC = DataDict.Constant;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.LongName = 'Handwheel Angle Interface Latch Enable';
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.Description = [...
  'Handwheel Angle Interface Latch Enable'];
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.DocUnits = 'Cnt';
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.EngDT = dt.lgc;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.EngVal = 0;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.Define = 'Global';


ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.LongName = 'Handwheel Torque Sensor Tick Count';
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.Description = [...
  'Number of SENT ticks for the HwTq Sensor.  This value is used in the R' ...
  'SENTnSPCT register.  Note that the value here should be subtracted by ' ...
  '1 before being written to the register.'];
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.EngVal = 17;
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.Define = 'Global';


ELECGLBPRM_IVTRCNT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_IVTRCNT_CNT_U08.LongName = 'Inverter Count';
ELECGLBPRM_IVTRCNT_CNT_U08.Description = 'Number of Inverters';
ELECGLBPRM_IVTRCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_IVTRCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_IVTRCNT_CNT_U08.EngVal = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.Define = 'Global';


ELECGLBPRM_MISSUPDCNTRTHD_NANOSEC_U32 = DataDict.Constant;
ELECGLBPRM_MISSUPDCNTRTHD_NANOSEC_U32.LongName = 'Threshold to compute missed update(s)';
ELECGLBPRM_MISSUPDCNTRTHD_NANOSEC_U32.Description = [...
  'Threshold to compute missed update(s)'];
ELECGLBPRM_MISSUPDCNTRTHD_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_MISSUPDCNTRTHD_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_MISSUPDCNTRTHD_NANOSEC_U32.EngVal = 25000;
ELECGLBPRM_MISSUPDCNTRTHD_NANOSEC_U32.Define = 'Global';


ELECGLBPRM_PWMFRQMAX_HZ_U32 = DataDict.Constant;
ELECGLBPRM_PWMFRQMAX_HZ_U32.LongName = 'Maximum PWM Frequency';
ELECGLBPRM_PWMFRQMAX_HZ_U32.Description = [...
  'High end of PWM frequency dither range'];
ELECGLBPRM_PWMFRQMAX_HZ_U32.DocUnits = 'Hz';
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngDT = dt.u32;
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal = 18000;
ELECGLBPRM_PWMFRQMAX_HZ_U32.Define = 'Global';


ELECGLBPRM_PWMFRQMIN_HZ_U32 = DataDict.Constant;
ELECGLBPRM_PWMFRQMIN_HZ_U32.LongName = 'Minimum PWM Frequency';
ELECGLBPRM_PWMFRQMIN_HZ_U32.Description = [...
  'High end of PWM frequency dither range'];
ELECGLBPRM_PWMFRQMIN_HZ_U32.DocUnits = 'Hz';
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngDT = dt.u32;
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngVal = 14000;
ELECGLBPRM_PWMFRQMIN_HZ_U32.Define = 'Global';


ELECGLBPRM_PWMPERDMAX_NANOSEC_U32 = DataDict.Constant;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.LongName = 'Maximum PWM Period';
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.Description = [...
  'Maximum PWM period in units of NanoSec.  ELECGLBPRM_PWMPERDMAX_NANOSEC' ...
  '_U32.EngVal = 1e9/ELECGLBPRM_PWMFRQMIN_HZ_U32.EngVal.  EngMin = 1e9/22' ...
  'e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngVal = 71429;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.Define = 'Global';


ELECGLBPRM_PWMPERDMIN_NANOSEC_U32 = DataDict.Constant;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.LongName = 'Minimum PWM Period';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Description = [...
  'Minimum PWM period in units of NanoSec.  ELECGLBPRM_PWMPERDMIN_NANOSEC' ...
  '_U32.EngVal = 1e9/ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal.  EngMin = 1e9/22' ...
  'e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngVal = 55555;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Define = 'Global';


ELECGLBPRM_PWMPERDNOMX2_SEC_F32 = DataDict.Constant;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.LongName = 'PWM Period Nominal Times 2';
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.Description = [...
  'This constant is 2 times ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9 in second' ...
  's.'];
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.DocUnits = 'Sec';
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngDT = dt.float32;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngVal = 0.000125;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.Define = 'Global';


ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9 = DataDict.Constant;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.LongName = 'Nominal PWM Period';
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.Description = [...
  'Nominal PWM Period in units of MicroSec.  ELECGLBPRM_PWMPERDNOM_MICROS' ...
  'EC_U7P9 = (2 * 1e6)/(ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal + ELECGLBPRM_P' ...
  'WMFRQMIN_HZ_U32.EngVal).  EngMin = 1e6/22e3, EngMax = 1e6/14e3'];
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.DocUnits = 'MicroSec';
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.EngDT = dt.u7p9;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.EngVal = 62.5;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.Define = 'Global';


FLTINJENA = DataDict.Constant;
FLTINJENA.LongName = 'Fault Injection Enable';
FLTINJENA.Description = [...
  'This is false for production builds.  It is set to true at compile tim' ...
  'e only for s/w special builds with fault injection active.'];
FLTINJENA.DocUnits = 'Cnt';
FLTINJENA.EngDT = dt.lgc;
FLTINJENA.EngVal = 0;
FLTINJENA.Define = 'Global';


GATEDRV0FETFLTMTGTNENA_ULS_LOGL = DataDict.Constant;
GATEDRV0FETFLTMTGTNENA_ULS_LOGL.LongName = 'Field effect transistor fault mitigation enable';
GATEDRV0FETFLTMTGTNENA_ULS_LOGL.Description = [...
  'When this is enabled, the gate drive component will notify the system ' ...
  'when a FET fault is detected.'];
GATEDRV0FETFLTMTGTNENA_ULS_LOGL.DocUnits = 'Uls';
GATEDRV0FETFLTMTGTNENA_ULS_LOGL.EngDT = dt.lgc;
GATEDRV0FETFLTMTGTNENA_ULS_LOGL.EngVal = 0;
GATEDRV0FETFLTMTGTNENA_ULS_LOGL.Define = 'Local';


HWAG10THTOOTHTRIG_CNT_U08 = DataDict.Constant;
HWAG10THTOOTHTRIG_CNT_U08.LongName = 'Handwheel Angle 10th tooth Trigger';
HWAG10THTOOTHTRIG_CNT_U08.Description = '10th Tooth Trigger Id';
HWAG10THTOOTHTRIG_CNT_U08.DocUnits = 'Cnt';
HWAG10THTOOTHTRIG_CNT_U08.EngDT = dt.u08;
HWAG10THTOOTHTRIG_CNT_U08.EngVal = 1;
HWAG10THTOOTHTRIG_CNT_U08.Define = 'Local';


HWAG11THTOOTHTRIG_CNT_U08 = DataDict.Constant;
HWAG11THTOOTHTRIG_CNT_U08.LongName = 'Handwheel Angle 11th tooth Trigger';
HWAG11THTOOTHTRIG_CNT_U08.Description = '11th Tooth Trigger Id';
HWAG11THTOOTHTRIG_CNT_U08.DocUnits = 'Cnt';
HWAG11THTOOTHTRIG_CNT_U08.EngDT = dt.u08;
HWAG11THTOOTHTRIG_CNT_U08.EngVal = 2;
HWAG11THTOOTHTRIG_CNT_U08.Define = 'Local';


HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM = DataDict.Constant;
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.LongName = 'Handwheel Angle 1 Interface Ntc Number';
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.Description = 'HwAg1 Interface Ntc Number';
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X098;
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.Define = 'Global';


HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM = DataDict.Constant;
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.LongName = 'Handwheel Angle 1 Manufacturing Ntc Number';
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.Description = 'HwAg1 Manufacturing Ntc Number';
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X1FA;
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.Define = 'Global';


HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM = DataDict.Constant;
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.LongName = 'Handwheel Angle 1 Sensor 0 Ntc Number';
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.Description = 'HwAg1 Sensor 0 Ntc Number';
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X097;
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.Define = 'Global';


HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM = DataDict.Constant;
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.LongName = 'Handwheel Angle1 Sensor 1 Ntc Number';
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.Description = 'HwAg1 Sensor 1 Ntc Number';
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X099;
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.Define = 'Global';


HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16 = DataDict.Constant;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.LongName = 'Handwheel Torque 1 Manufacturing Ntc Number';
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.Description = 'HwTq1 Manufacturing Ntc Number';
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1E1;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.Define = 'Global';


HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16 = DataDict.Constant;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Torque 1 Ntc Number';
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.Description = 'HwTq1 Ntc Number';
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X075;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.Define = 'Global';


HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM = DataDict.Constant;
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 8 Manufacturing Ntc Number';
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.Description = 'HwTq8 Manufacturing Ntc Number';
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X1E0;
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.Define = 'Global';


HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM = DataDict.Constant;
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 8 Ntc Number';
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.Description = 'HwTq8 Ntc Number';
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X074;
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.Define = 'Global';


HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM = DataDict.Constant;
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 9 Manufacturing Ntc Number';
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.Description = 'HwTq9 Manufacturing Ntc Number';
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X1E2;
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.Define = 'Global';


HWTQ9MEAS_HWTQ9PRTCLNTCNR_CNT_ENUM = DataDict.Constant;
HWTQ9MEAS_HWTQ9PRTCLNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 9 Ntc Number';
HWTQ9MEAS_HWTQ9PRTCLNTCNR_CNT_ENUM.Description = 'HwTq9 Ntc Number';
HWTQ9MEAS_HWTQ9PRTCLNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ9MEAS_HWTQ9PRTCLNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ9MEAS_HWTQ9PRTCLNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X077;
HWTQ9MEAS_HWTQ9PRTCLNTCNR_CNT_ENUM.Define = 'Global';


HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM = DataDict.Constant;
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 10 Manufacturing Ntc Number';
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.Description = 'HwTq10 Manufacturing Ntc Number';
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X1E3;
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.Define = 'Global';


HWTQ10MEAS_HWTQ10PRTCLNTCNR_CNT_ENUM = DataDict.Constant;
HWTQ10MEAS_HWTQ10PRTCLNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 10 Ntc Number';
HWTQ10MEAS_HWTQ10PRTCLNTCNR_CNT_ENUM.Description = 'HwTq10 Ntc Number';
HWTQ10MEAS_HWTQ10PRTCLNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ10MEAS_HWTQ10PRTCLNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ10MEAS_HWTQ10PRTCLNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X079;
HWTQ10MEAS_HWTQ10PRTCLNTCNR_CNT_ENUM.Define = 'Global';


HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM = DataDict.Constant;
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.LongName = 'Handwheel Torque A Correlation Fault NTC Number';
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.Description = [...
  'NTC number allocated to HwTq A correlation'];
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X070;
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.Define = 'Global';


HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM = DataDict.Constant;
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.LongName = 'Handwheel Torque B Correlation Fault NTC Number';
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.Description = [...
  'NTC number allocated to HwTq B correlation'];
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X071;
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.Define = 'Global';


HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM = DataDict.Constant;
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.LongName = 'Handwheel Torque C Correlation Fault NTC Number';
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.Description = [...
  'NTC number allocated to HwTq C correlation'];
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X072;
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.Define = 'Global';


HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM = DataDict.Constant;
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.LongName = 'Handwheel Torque D Correlation Fault NTC Number';
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.Description = [...
  'NTC number allocated to HwTq D correlation'];
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X073;
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.Define = 'Global';


MCUDIAGCERRINJ = DataDict.Constant;
MCUDIAGCERRINJ.LongName = 'MCU Diagnostic Error Injection';
MCUDIAGCERRINJ.Description = [...
  'This is false for production builds.  It is set to true at compile tim' ...
  'e only for s/w special builds with MCU Error Injection active.'];
MCUDIAGCERRINJ.DocUnits = 'Cnt';
MCUDIAGCERRINJ.EngDT = dt.lgc;
MCUDIAGCERRINJ.EngVal = 0;
MCUDIAGCERRINJ.Define = 'Global';


MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM = DataDict.Constant;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 2 Analog Sin Cosine Fault Ntc Number';
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.Description = [...
  'MotAg2 Analog Sin Cosine Fault Ntc Number'];
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X087;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.Define = 'Local';


MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM = DataDict.Constant;
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 5 Protocol Fault NTC Number';
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.Description = [...
  'Motor Angle 5 Protocol Fault NTC Number'];
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X083;
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.Define = 'Global';


MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM = DataDict.Constant;
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 6 Protocol Fault NTC Number';
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.Description = [...
  'Motor Angle 6 Protocol Fault NTC Number'];
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X085;
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.Define = 'Global';


NROFININCRITREG16BIT_CNT_U16 = DataDict.ConfigParam;
NROFININCRITREG16BIT_CNT_U16.LongName = 'Number Of Initialization Critical Registers 16 Bit';
NROFININCRITREG16BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read during initializatio' ...
  'n via 16bit access'];
NROFININCRITREG16BIT_CNT_U16.IsBuildPrm = false;
NROFININCRITREG16BIT_CNT_U16.DocUnits = 'Cnt';
NROFININCRITREG16BIT_CNT_U16.EngDT = dt.u16;
NROFININCRITREG16BIT_CNT_U16.EngVal = 0;
NROFININCRITREG16BIT_CNT_U16.EngMin = 0;
NROFININCRITREG16BIT_CNT_U16.EngMax = 65535;
NROFININCRITREG16BIT_CNT_U16.Define = 'Local';


NROFININCRITREG32BIT_CNT_U16 = DataDict.Constant;
NROFININCRITREG32BIT_CNT_U16.LongName = 'Number Of Initialization Critical Registers 32 Bit';
NROFININCRITREG32BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read during initializatio' ...
  'n via 32 bit access'];
NROFININCRITREG32BIT_CNT_U16.DocUnits = 'Cnt';
NROFININCRITREG32BIT_CNT_U16.EngDT = dt.u16;
NROFININCRITREG32BIT_CNT_U16.EngVal = 0;
NROFININCRITREG32BIT_CNT_U16.Define = 'Local';


NROFININCRITREG8BIT_CNT_U16 = DataDict.Constant;
NROFININCRITREG8BIT_CNT_U16.LongName = 'Number Of Initialization Critical Registers 8 Bit';
NROFININCRITREG8BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read during initializatio' ...
  'n via 8 bit access'];
NROFININCRITREG8BIT_CNT_U16.DocUnits = 'Cnt';
NROFININCRITREG8BIT_CNT_U16.EngDT = dt.u16;
NROFININCRITREG8BIT_CNT_U16.EngVal = 0;
NROFININCRITREG8BIT_CNT_U16.Define = 'Local';


NROFPERCRITREG16BIT_CNT_U16 = DataDict.Constant;
NROFPERCRITREG16BIT_CNT_U16.LongName = 'Number Of Periodic Critical Registers 16 Bit';
NROFPERCRITREG16BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read periodically via 16 ' ...
  'bit access'];
NROFPERCRITREG16BIT_CNT_U16.DocUnits = 'Cnt';
NROFPERCRITREG16BIT_CNT_U16.EngDT = dt.u16;
NROFPERCRITREG16BIT_CNT_U16.EngVal = 0;
NROFPERCRITREG16BIT_CNT_U16.Define = 'Local';


NROFPERCRITREG32BIT_CNT_U16 = DataDict.Constant;
NROFPERCRITREG32BIT_CNT_U16.LongName = 'Number Of Periodic Critical Registers 32 Bit';
NROFPERCRITREG32BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read periodically via 32 ' ...
  'bit access'];
NROFPERCRITREG32BIT_CNT_U16.DocUnits = 'Cnt';
NROFPERCRITREG32BIT_CNT_U16.EngDT = dt.u16;
NROFPERCRITREG32BIT_CNT_U16.EngVal = 0;
NROFPERCRITREG32BIT_CNT_U16.Define = 'Local';


NROFPERCRITREG8BIT_CNT_U16 = DataDict.Constant;
NROFPERCRITREG8BIT_CNT_U16.LongName = 'Number Of Periodic Critical Registers 8 Bit';
NROFPERCRITREG8BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read periodically via 8 b' ...
  'it access'];
NROFPERCRITREG8BIT_CNT_U16.DocUnits = 'Cnt';
NROFPERCRITREG8BIT_CNT_U16.EngDT = dt.u16;
NROFPERCRITREG8BIT_CNT_U16.EngVal = 0;
NROFPERCRITREG8BIT_CNT_U16.Define = 'Local';


PWRDISCNCTSWTDIAGSCAGFAC_ULS_F32 = DataDict.Constant;
PWRDISCNCTSWTDIAGSCAGFAC_ULS_F32.LongName = 'Power Disconnect Switch DIagnostic Scaling Factor';
PWRDISCNCTSWTDIAGSCAGFAC_ULS_F32.Description = [...
  'Inverse hardware scaling factor of Power Disconnect Switch DIagnostic.' ...
  '  .EngVal = (200+34.8)/34.8'];
PWRDISCNCTSWTDIAGSCAGFAC_ULS_F32.DocUnits = 'Uls';
PWRDISCNCTSWTDIAGSCAGFAC_ULS_F32.EngDT = dt.float32;
PWRDISCNCTSWTDIAGSCAGFAC_ULS_F32.EngVal = 6.747126437;
PWRDISCNCTSWTDIAGSCAGFAC_ULS_F32.Define = 'Local';


SWPENA = DataDict.Constant;
SWPENA.LongName = 'SWEEP ENABLE';
SWPENA.Description = [...
  'Configuration Parameter to indicate whether Sweep build or not.1=TRUE ' ...
  '0=FALSE. '];
SWPENA.DocUnits = 'Cnt';
SWPENA.EngDT = dt.lgc;
SWPENA.EngVal = 1;
SWPENA.Define = 'Local';


ADCOUTPMAX_VOLT_F32 = DataDict.Constant;
ADCOUTPMAX_VOLT_F32.LongName = 'ADC Output Maximum';
ADCOUTPMAX_VOLT_F32.Description = 'ADC Output Maximum';
ADCOUTPMAX_VOLT_F32.DocUnits = 'Volt';
ADCOUTPMAX_VOLT_F32.EngDT = dt.float32;
ADCOUTPMAX_VOLT_F32.EngVal = 5.0;
ADCOUTPMAX_VOLT_F32.Define = 'Local';


BATTADCOUTPMAX_VOLT_F32 = DataDict.Constant;
BATTADCOUTPMAX_VOLT_F32.LongName = 'Battery ADC Output Maximum';
BATTADCOUTPMAX_VOLT_F32.Description = 'Battery ADC Output Maximum';
BATTADCOUTPMAX_VOLT_F32.DocUnits = 'Volt';
BATTADCOUTPMAX_VOLT_F32.EngDT = dt.float32;
BATTADCOUTPMAX_VOLT_F32.EngVal = 40.0;
BATTADCOUTPMAX_VOLT_F32.Define = 'Local';


HWAG1SNSRNRMAX_CNT_F32 = DataDict.Constant;
HWAG1SNSRNRMAX_CNT_F32.LongName = 'Hand Wheel Angle Sensor Number Maximum';
HWAG1SNSRNRMAX_CNT_F32.Description = 'Hand Wheel Angle Sensor Number Maximum';
HWAG1SNSRNRMAX_CNT_F32.DocUnits = 'Cnt';
HWAG1SNSRNRMAX_CNT_F32.EngDT = dt.u08;
HWAG1SNSRNRMAX_CNT_F32.EngVal = 2;
HWAG1SNSRNRMAX_CNT_F32.Define = 'Local';


TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32 = DataDict.Constant;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.LongName = 'XCP Vehicle Speed Threshold';
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.Description = [...
  'Vehicle Speed is compared with XCP Vehicle speed threshold to determin' ...
  'e whether to grant or deny requested change in corresponding RAM value' ...
  's.'];
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.DocUnits = 'Kph';
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.EngDT = dt.lgc;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.EngVal = 1;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.Define = 'Global';


VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC = DataDict.Constant;
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.LongName = 'MCU Diagnostic Error Injection';
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.Description = [...
  'This is false for production builds.  It is set to true at compile tim' ...
  'e only for s/w special builds with MCU Error Injection active.'];
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.DocUnits = 'Cnt';
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.EngDT = dt.lgc;
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.EngVal = 0;
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
