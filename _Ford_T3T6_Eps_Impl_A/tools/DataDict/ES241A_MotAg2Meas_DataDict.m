%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 30-Aug-2016 09:51:11       %
%                                  Created with tool release: 2.44.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES241A = DataDict.FDD;
ES241A.Version = '1.8.X';
ES241A.LongName = 'Motor Angle 2 Measurement';
ES241A.ShoName  = 'MotAg2Meas';
ES241A.DesignASIL = 'A';
ES241A.Description = [...
  'This function is responsible for providing a qualified, tertiary motor' ...
  ' angle measurement using a sine / cosine based analog sensor'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotAg2MeasInit1 = DataDict.Runnable;
MotAg2MeasInit1.Context = 'Rte';
MotAg2MeasInit1.TimeStep = 0;
MotAg2MeasInit1.Description = 'Initiate function';

MotAg2MeasPer1 = DataDict.Runnable;
MotAg2MeasPer1.Context = 'Rte';
MotAg2MeasPer1.TimeStep = 0.002;
MotAg2MeasPer1.Description = 'Periodic function';

MotAg2MeasEolPrmRead = DataDict.SrvRunnable;
MotAg2MeasEolPrmRead.Context = 'Rte';
MotAg2MeasEolPrmRead.Description = 'End of Line perameters write';
MotAg2MeasEolPrmRead.Return = DataDict.CSReturn;
MotAg2MeasEolPrmRead.Return.Type = 'None';
MotAg2MeasEolPrmRead.Return.Min = [];
MotAg2MeasEolPrmRead.Return.Max = [];
MotAg2MeasEolPrmRead.Return.TestTolerance = [];
MotAg2MeasEolPrmRead.Arguments(1) = DataDict.CSArguments;
MotAg2MeasEolPrmRead.Arguments(1).Name = 'MotAg2EolPrmRead';
MotAg2MeasEolPrmRead.Arguments(1).EngDT = struct.MotAgMeasEolPrmRec1;
MotAg2MeasEolPrmRead.Arguments(1).EngMin = [struct('SinOffs',1,'CosOffs',1,'SinAmpRecpr',0.416666667,'CosAmpRecpr',0.416666667,'SinDelta',-0.1736)];
MotAg2MeasEolPrmRead.Arguments(1).EngMax = [struct('SinOffs',3,'CosOffs',3,'SinAmpRecpr',4,'CosAmpRecpr',4,'SinDelta',0.1736)];
MotAg2MeasEolPrmRead.Arguments(1).TestTolerance = 0;
MotAg2MeasEolPrmRead.Arguments(1).Units = 'Uls';
MotAg2MeasEolPrmRead.Arguments(1).Direction = 'Out';
MotAg2MeasEolPrmRead.Arguments(1).InitRowCol = [1  1];
MotAg2MeasEolPrmRead.Arguments(1).Description = 'End of Line perameters write';

MotAg2MeasEolPrmWr = DataDict.SrvRunnable;
MotAg2MeasEolPrmWr.Context = 'Rte';
MotAg2MeasEolPrmWr.Description = 'End of Line perameters Read';
MotAg2MeasEolPrmWr.Return = DataDict.CSReturn;
MotAg2MeasEolPrmWr.Return.Type = 'None';
MotAg2MeasEolPrmWr.Return.Min = [];
MotAg2MeasEolPrmWr.Return.Max = [];
MotAg2MeasEolPrmWr.Return.TestTolerance = [];
MotAg2MeasEolPrmWr.Arguments(1) = DataDict.CSArguments;
MotAg2MeasEolPrmWr.Arguments(1).Name = 'MotAg2SinCosEolCalData';
MotAg2MeasEolPrmWr.Arguments(1).EngDT = struct.MotAgMeasEolPrmRec1;
MotAg2MeasEolPrmWr.Arguments(1).EngMin = [struct('SinOffs',1,'CosOffs',1,'SinAmpRecpr',0.416666667,'CosAmpRecpr',0.416666667,'SinDelta',-0.1736)];
MotAg2MeasEolPrmWr.Arguments(1).EngMax = [struct('SinOffs',3,'CosOffs',3,'SinAmpRecpr',4,'CosAmpRecpr',4,'SinDelta',0.1736)];
MotAg2MeasEolPrmWr.Arguments(1).Units = 'Uls';
MotAg2MeasEolPrmWr.Arguments(1).Direction = 'In';
MotAg2MeasEolPrmWr.Arguments(1).InitRowCol = [1  1];
MotAg2MeasEolPrmWr.Arguments(1).Description = 'End of Line perameters Read';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'MotAg2MeasPer1'};
FltInj_f32.Description = 'Fault injection ';
FltInj_f32.Return = DataDict.CSReturn;
FltInj_f32.Return.Type = 'None';
FltInj_f32.Return.Min = [];
FltInj_f32.Return.Max = [];
FltInj_f32.Return.TestTolerance = [];
FltInj_f32.Arguments(1) = DataDict.CSArguments;
FltInj_f32.Arguments(1).Name = 'SigPah';
FltInj_f32.Arguments(1).EngDT = dt.float32;
FltInj_f32.Arguments(1).EngMin = -1000000000;
FltInj_f32.Arguments(1).EngMax = 1000000000;
FltInj_f32.Arguments(1).TestTolerance = 0;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(1).Description = '';
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];
FltInj_f32.Arguments(2).Description = 'Fault injection';


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'MotAg2MeasPer1'};
GetNtcQlfrSts.Description = 'Client call toi set the NTC';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'None';
GetNtcQlfrSts.Return.Min = [];
GetNtcQlfrSts.Return.Max = [];
GetNtcQlfrSts.Return.TestTolerance = [];
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = 'Client call toi set the NTC';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 0;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'Client call toi set the NTC';


MotAg2EolPrm_GetErrorStatus = DataDict.Client;
MotAg2EolPrm_GetErrorStatus.CallLocation = {'MotAg2MeasInit1'};
MotAg2EolPrm_GetErrorStatus.Description = [...
  'End of Line parameters to get error status'];
MotAg2EolPrm_GetErrorStatus.Return = DataDict.CSReturn;
MotAg2EolPrm_GetErrorStatus.Return.Type = 'Standard';
MotAg2EolPrm_GetErrorStatus.Return.Min = 0;
MotAg2EolPrm_GetErrorStatus.Return.Max = 1;
MotAg2EolPrm_GetErrorStatus.Return.TestTolerance = [];
MotAg2EolPrm_GetErrorStatus.Return.Description = [...
  'End of Line parameters to get error status'];
MotAg2EolPrm_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotAg2EolPrm_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
MotAg2EolPrm_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotAg2EolPrm_GetErrorStatus.Arguments(1).EngMin = 0;
MotAg2EolPrm_GetErrorStatus.Arguments(1).EngMax = 255;
MotAg2EolPrm_GetErrorStatus.Arguments(1).TestTolerance = 0;
MotAg2EolPrm_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotAg2EolPrm_GetErrorStatus.Arguments(1).Direction = 'Out';
MotAg2EolPrm_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
MotAg2EolPrm_GetErrorStatus.Arguments(1).Description = [...
  'End of Line parameters to get error status'];


MotAg2EolPrm_SetRamBlockStatus = DataDict.Client;
MotAg2EolPrm_SetRamBlockStatus.CallLocation = {'MotAg2MeasEolPrmWr'};
MotAg2EolPrm_SetRamBlockStatus.Description = [...
  'End of Line parameters to get set ram clock status'];
MotAg2EolPrm_SetRamBlockStatus.Return = DataDict.CSReturn;
MotAg2EolPrm_SetRamBlockStatus.Return.Type = 'Standard';
MotAg2EolPrm_SetRamBlockStatus.Return.Min = 0;
MotAg2EolPrm_SetRamBlockStatus.Return.Max = 1;
MotAg2EolPrm_SetRamBlockStatus.Return.TestTolerance = 0;
MotAg2EolPrm_SetRamBlockStatus.Return.Description = [...
  'End of Line parameters to get set ram clock status'];
MotAg2EolPrm_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotAg2EolPrm_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotAg2EolPrm_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotAg2EolPrm_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotAg2EolPrm_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotAg2EolPrm_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotAg2EolPrm_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotAg2EolPrm_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MotAg2EolPrm_SetRamBlockStatus.Arguments(1).Description = [...
  'End of Line parameters to get set ram clock status'];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'MotAg2MeasPer1'};
SetNtcSts.Description = 'clieent call to set NTC status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'None';
SetNtcSts.Return.Min = [];
SetNtcSts.Return.Max = [];
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'client call to set NTC status';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'client call to set NTC status';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'client call to set NTC status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'client call to set NTC status';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotAg2Cos = DataDict.IpSignal;
MotAg2Cos.LongName = 'Motor Angle 2 Cosine';
MotAg2Cos.Description = [...
  ' Input representing the motor angle in terms of a digitized cosine wav' ...
  'eshape'];
MotAg2Cos.DocUnits = 'Volt';
MotAg2Cos.EngDT = dt.float32;
MotAg2Cos.EngInit = 0;
MotAg2Cos.EngMin = 0;
MotAg2Cos.EngMax = 5;
MotAg2Cos.ReadIn = {'MotAg2MeasPer1'};
MotAg2Cos.ReadType = 'Rte';


MotAg2CosAdcFaild = DataDict.IpSignal;
MotAg2CosAdcFaild.LongName = 'Motor Angle 2 Cosine Adc Failed';
MotAg2CosAdcFaild.Description = [...
  'A signal that indicates that the Adc converting the cosine signal has ' ...
  'failed'];
MotAg2CosAdcFaild.DocUnits = 'Cnt';
MotAg2CosAdcFaild.EngDT = dt.lgc;
MotAg2CosAdcFaild.EngInit = 0;
MotAg2CosAdcFaild.EngMin = 0;
MotAg2CosAdcFaild.EngMax = 1;
MotAg2CosAdcFaild.ReadIn = {'MotAg2MeasPer1'};
MotAg2CosAdcFaild.ReadType = 'Rte';


MotAg2Sin = DataDict.IpSignal;
MotAg2Sin.LongName = 'Motor Angle 2 Sine';
MotAg2Sin.Description = [...
  'Input representing the motor angle in terms of a digitized sine wavesh' ...
  'ape'];
MotAg2Sin.DocUnits = 'Volt';
MotAg2Sin.EngDT = dt.float32;
MotAg2Sin.EngInit = 0;
MotAg2Sin.EngMin = 0;
MotAg2Sin.EngMax = 5;
MotAg2Sin.ReadIn = {'MotAg2MeasPer1'};
MotAg2Sin.ReadType = 'Rte';


MotAg2SinAdcFaild = DataDict.IpSignal;
MotAg2SinAdcFaild.LongName = 'Motor Angle 2 Sine Adc Failed';
MotAg2SinAdcFaild.Description = [...
  'A signal that indicates that the Adc converting the sine signal has fa' ...
  'iled'];
MotAg2SinAdcFaild.DocUnits = 'Cnt';
MotAg2SinAdcFaild.EngDT = dt.lgc;
MotAg2SinAdcFaild.EngInit = 0;
MotAg2SinAdcFaild.EngMin = 0;
MotAg2SinAdcFaild.EngMax = 1;
MotAg2SinAdcFaild.ReadIn = {'MotAg2MeasPer1'};
MotAg2SinAdcFaild.ReadType = 'Rte';


MotAgMecl2Polarity = DataDict.IpSignal;
MotAgMecl2Polarity.LongName = 'Motor Angle Mechanical 2 Polarity';
MotAgMecl2Polarity.Description = [...
  'Multiplier of either -1 or +1 allowing the sensor measurement to chang' ...
  'e direction (sign) of the output motor angle'];
MotAgMecl2Polarity.DocUnits = 'Uls';
MotAgMecl2Polarity.EngDT = dt.s08;
MotAgMecl2Polarity.EngInit = 1;
MotAgMecl2Polarity.EngMin = -1;
MotAgMecl2Polarity.EngMax = 1;
MotAgMecl2Polarity.ReadIn = {'MotAg2MeasPer1'};
MotAgMecl2Polarity.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotAg2Mecl = DataDict.OpSignal;
MotAg2Mecl.LongName = 'Motor Angle 2 Mechanical';
MotAg2Mecl.Description = 'Mechanical motor angle';
MotAg2Mecl.DocUnits = 'MotRev';
MotAg2Mecl.SwcShoName = 'MotAg2Meas';
MotAg2Mecl.EngDT = dt.u0p16;
MotAg2Mecl.EngInit = 0;
MotAg2Mecl.EngMin = 0;
MotAg2Mecl.EngMax = 0.9999847412;
MotAg2Mecl.TestTolerance = 1.525878906e-05;
MotAg2Mecl.WrittenIn = {'MotAg2MeasPer1'};
MotAg2Mecl.WriteType = 'Rte';


MotAg2MeclQlfr = DataDict.OpSignal;
MotAg2MeclQlfr.LongName = 'Motor Angle 2 Mechanical Qualifier';
MotAg2MeclQlfr.Description = [...
  'Qualifier of the motor angle indicating status of the signal for arbit' ...
  'ration and correlation functions'];
MotAg2MeclQlfr.DocUnits = 'Cnt';
MotAg2MeclQlfr.SwcShoName = 'MotAg2Meas';
MotAg2MeclQlfr.EngDT = enum.SigQlfr1;
MotAg2MeclQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
MotAg2MeclQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
MotAg2MeclQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotAg2MeclQlfr.TestTolerance = 0;
MotAg2MeclQlfr.WrittenIn = {'MotAg2MeasPer1'};
MotAg2MeclQlfr.WriteType = 'Rte';


MotAg2MeclRollgCntr = DataDict.OpSignal;
MotAg2MeclRollgCntr.LongName = 'Motor Angle 2 Mechanical Rolling Counter';
MotAg2MeclRollgCntr.Description = [...
  'Rolling counter - only updated when the signal checks are passed'];
MotAg2MeclRollgCntr.DocUnits = 'Cnt';
MotAg2MeclRollgCntr.SwcShoName = 'MotAg2Meas';
MotAg2MeclRollgCntr.EngDT = dt.u08;
MotAg2MeclRollgCntr.EngInit = 0;
MotAg2MeclRollgCntr.EngMin = 0;
MotAg2MeclRollgCntr.EngMax = 255;
MotAg2MeclRollgCntr.TestTolerance = 0;
MotAg2MeclRollgCntr.WrittenIn = {'MotAg2MeasPer1'};
MotAg2MeclRollgCntr.WriteType = 'Rte';


MotAg2VltgSqd = DataDict.OpSignal;
MotAg2VltgSqd.LongName = 'Motor Angle 2 Voltage Squared';
MotAg2VltgSqd.Description = 'Motor Angle 2 Voltage Squared';
MotAg2VltgSqd.DocUnits = 'VoltSqd';
MotAg2VltgSqd.SwcShoName = 'MotAg2Meas';
MotAg2VltgSqd.EngDT = dt.float32;
MotAg2VltgSqd.EngInit = 1.755625;
MotAg2VltgSqd.EngMin = 0;
MotAg2VltgSqd.EngMax = 25;
MotAg2VltgSqd.TestTolerance = 1.490843982e-06;
MotAg2VltgSqd.WrittenIn = {'MotAg2MeasPer1'};
MotAg2VltgSqd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotAg2MeasOffs = DataDict.Calibration;
MotAg2MeasOffs.LongName = 'Motor Angle 2 Measure Offset';
MotAg2MeasOffs.Description = [...
  'Motor Angle Measure Sine Cosine Motor Position offset'];
MotAg2MeasOffs.DocUnits = 'MotRev';
MotAg2MeasOffs.EngDT = dt.float32;
MotAg2MeasOffs.EngVal = 0;
MotAg2MeasOffs.EngMin = 0;
MotAg2MeasOffs.EngMax = 0.99;
MotAg2MeasOffs.Cardinality = 'Cmn';
MotAg2MeasOffs.CustomerVisible = false;
MotAg2MeasOffs.Online = false;
MotAg2MeasOffs.Impact = 'H';
MotAg2MeasOffs.TuningOwner = 'FDD';
MotAg2MeasOffs.GraphLink = {''};
MotAg2MeasOffs.Monotony = 'None';
MotAg2MeasOffs.MaxGrad = 0;
MotAg2MeasOffs.PortName = 'MotAg2MeasOffs';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
MotAg2EolPrm = DataDict.NVM;
MotAg2EolPrm.LongName = 'Motor Angle 2 EOL Parameter';
MotAg2EolPrm.Description = [...
  'Motor Angle 2 End Of Line parameters'];
MotAg2EolPrm.DocUnits = 'Uls';
MotAg2EolPrm.EngDT = struct.MotAgMeasEolPrmRec1;
MotAg2EolPrm.EngInit = [struct('SinOffs',2.5,'CosOffs',2.5,'SinAmpRecpr',1,'CosAmpRecpr',1,'SinDelta',0)];
MotAg2EolPrm.EngMin = [struct('SinOffs',1,'CosOffs',1,'SinAmpRecpr',0.416666667,'CosAmpRecpr',0.416666667,'SinDelta',-0.1736)];
MotAg2EolPrm.EngMax = [struct('SinOffs',3,'CosOffs',3,'SinAmpRecpr',4,'CosAmpRecpr',4,'SinDelta',0.1736)];
MotAg2EolPrm.CustomerVisible = false;
MotAg2EolPrm.Impact = 'H';
MotAg2EolPrm.TuningOwner = 'FDD';
MotAg2EolPrm.CoderInfo.Alias = '';
MotAg2EolPrm.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotAg2MeclPrev = DataDict.PIM;
MotAg2MeclPrev.LongName = 'Motor Angle 2 Mechanical Revolution Previous';
MotAg2MeclPrev.Description = 'Previous Motor Angle 2 value';
MotAg2MeclPrev.DocUnits = 'MotRev';
MotAg2MeclPrev.EngDT = dt.float32;
MotAg2MeclPrev.EngMin = 0;
MotAg2MeclPrev.EngMax = 1;
MotAg2MeclPrev.InitRowCol = [1  1];


MotAg2MeclRollgCntrPrev = DataDict.PIM;
MotAg2MeclRollgCntrPrev.LongName = 'Motor Angle 2 Mechanical Rolling Counter Previous';
MotAg2MeclRollgCntrPrev.Description = 'Previous Roll Count';
MotAg2MeclRollgCntrPrev.DocUnits = 'Cnt';
MotAg2MeclRollgCntrPrev.EngDT = dt.u08;
MotAg2MeclRollgCntrPrev.EngMin = 0;
MotAg2MeclRollgCntrPrev.EngMax = 255;
MotAg2MeclRollgCntrPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


FLTINJ_MOTAG2MEAS_MOTAG2MECL = DataDict.Constant;
FLTINJ_MOTAG2MEAS_MOTAG2MECL.LongName = 'Fault Injection Motor Angle 2 Mechanical';
FLTINJ_MOTAG2MEAS_MOTAG2MECL.Description = [...
  'Fault Injection Motor Angle 2 Mechanical Signal Constant'];
FLTINJ_MOTAG2MEAS_MOTAG2MECL.DocUnits = 'Uls';
FLTINJ_MOTAG2MEAS_MOTAG2MECL.EngDT = dt.u16;
FLTINJ_MOTAG2MEAS_MOTAG2MECL.EngVal = 40;
FLTINJ_MOTAG2MEAS_MOTAG2MECL.Define = 'Global';


MOTAG2ANSINCOSFLTFAILSTEP_CNT_U16 = DataDict.Constant;
MOTAG2ANSINCOSFLTFAILSTEP_CNT_U16.LongName = 'Motor Angle 2 Analog Sin Cosine Fault P Step';
MOTAG2ANSINCOSFLTFAILSTEP_CNT_U16.Description = [...
  'Motor Angle Measure Sine Cosine Value Diagnosis Fail Step i.e.((32767*0.002)/desired time to set the fault)'];
MOTAG2ANSINCOSFLTFAILSTEP_CNT_U16.DocUnits = 'Cnt';
MOTAG2ANSINCOSFLTFAILSTEP_CNT_U16.EngDT = dt.u16;
MOTAG2ANSINCOSFLTFAILSTEP_CNT_U16.EngVal = 327;
MOTAG2ANSINCOSFLTFAILSTEP_CNT_U16.Define = 'Local';


MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 2 Analog Sin Cosine Fault Ntc Number';
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.Description = [...
  'MotAg2 Analog Sin Cosine Fault Ntc Number'];
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X087;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X083;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X08A;
MOTAG2ANSINCOSFLTNTCNR_CNT_ENUM.Define = 'Local';


MOTAG2ANSINCOSFLTPASSSTEP_CNT_U16 = DataDict.Constant;
MOTAG2ANSINCOSFLTPASSSTEP_CNT_U16.LongName = 'Motor Angle 2 Analog Sin Cosine Fault N Step';
MOTAG2ANSINCOSFLTPASSSTEP_CNT_U16.Description = [...
  'Motor Angle Measure Sine Cosine Value Diagnosis Pass Step i.e.(4*MOTAG2ANSINCOSFLTFAILSTEP) '];
MOTAG2ANSINCOSFLTPASSSTEP_CNT_U16.DocUnits = 'Cnt';
MOTAG2ANSINCOSFLTPASSSTEP_CNT_U16.EngDT = dt.u16;
MOTAG2ANSINCOSFLTPASSSTEP_CNT_U16.EngVal = 82;
MOTAG2ANSINCOSFLTPASSSTEP_CNT_U16.Define = 'Local';


MOTAG2MECLMAX_MOTREV_F32 = DataDict.Constant;
MOTAG2MECLMAX_MOTREV_F32.LongName = 'Motor Angle2 Mechanical Maximum';
MOTAG2MECLMAX_MOTREV_F32.Description = 'Limit value to maximum';
MOTAG2MECLMAX_MOTREV_F32.DocUnits = 'MotRev';
MOTAG2MECLMAX_MOTREV_F32.EngDT = dt.float32;
MOTAG2MECLMAX_MOTREV_F32.EngVal = 0.9999847412;
MOTAG2MECLMAX_MOTREV_F32.Define = 'Local';


MOTAG2MECLMIN_MOTREV_F32 = DataDict.Constant;
MOTAG2MECLMIN_MOTREV_F32.LongName = 'Motor Angle2 Mechanical Minimum';
MOTAG2MECLMIN_MOTREV_F32.Description = 'Limit value to minimun';
MOTAG2MECLMIN_MOTREV_F32.DocUnits = 'MotRev';
MOTAG2MECLMIN_MOTREV_F32.EngDT = dt.float32;
MOTAG2MECLMIN_MOTREV_F32.EngVal = 0;
MOTAG2MECLMIN_MOTREV_F32.Define = 'Local';


VALMAXERR_VOLTSQD_F32 = DataDict.Constant;
VALMAXERR_VOLTSQD_F32.LongName = 'Vaue Maximum Error';
VALMAXERR_VOLTSQD_F32.Description = [...
  'Analog MSB Protocol Diag Max Threshold i.e.(2.4*2.4)'];
VALMAXERR_VOLTSQD_F32.DocUnits = 'VoltSqd';
VALMAXERR_VOLTSQD_F32.EngDT = dt.float32;
VALMAXERR_VOLTSQD_F32.EngVal = 5.76;
VALMAXERR_VOLTSQD_F32.Define = 'Local';


VALMINERR_VOLTSQD_F32 = DataDict.Constant;
VALMINERR_VOLTSQD_F32.LongName = 'Vaue Minimum Error';
VALMINERR_VOLTSQD_F32.Description = [...
  'Analog MSB Protocol Diag Min Threshold i.e. (0.25*0.25)'];
VALMINERR_VOLTSQD_F32.DocUnits = 'VoltSqd';
VALMINERR_VOLTSQD_F32.EngDT = dt.float32;
VALMINERR_VOLTSQD_F32.EngVal = 0.0625;
VALMINERR_VOLTSQD_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
MotAg2AnSinCosFlt = DataDict.NTC;
MotAg2AnSinCosFlt.NtcNr = NtcNr1.NTCNR_0X087;
MotAg2AnSinCosFlt.NtcTyp = 'Deb';
MotAg2AnSinCosFlt.LongName = 'Motor Angle 2 Analog Sine Cosine Fault';
MotAg2AnSinCosFlt.Description = 'Motor Angle 2 Measurement Analog Sine vs. Cosine Correlation NTC';
MotAg2AnSinCosFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MotAg2AnSinCosFlt.NtcStInfo.Bit0Descr = 'Cosine and Sin input is below Minimum Error threshold';
MotAg2AnSinCosFlt.NtcStInfo.Bit1Descr = 'Cosine and Sin input is above Maximum Error threshold';
MotAg2AnSinCosFlt.NtcStInfo.Bit2Descr = 'Unused';
MotAg2AnSinCosFlt.NtcStInfo.Bit3Descr = 'Unused';
MotAg2AnSinCosFlt.NtcStInfo.Bit4Descr = 'Unused';
MotAg2AnSinCosFlt.NtcStInfo.Bit5Descr = 'Unused';
MotAg2AnSinCosFlt.NtcStInfo.Bit6Descr = 'Unused';
MotAg2AnSinCosFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
