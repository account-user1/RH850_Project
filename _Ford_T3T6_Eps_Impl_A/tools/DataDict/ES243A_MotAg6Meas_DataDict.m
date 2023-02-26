%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 29-Jun-2017 13:37:06       %
%                                  Created with tool release: 3.0.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES243A = DataDict.FDD;
ES243A.Version = '1.4.X';
ES243A.LongName = 'Motor Angle 6 Measurement';
ES243A.ShoName  = 'MotAg6Meas';
ES243A.DesignASIL = 'D';
ES243A.Description = [...
  'MotAg6Meas funtion shall compute motor angle from Sine and Cosine ADC ' ...
  'signals'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotAg6MeasInit1 = DataDict.Runnable;
MotAg6MeasInit1.Context = 'Rte';
MotAg6MeasInit1.TimeStep = 0;
MotAg6MeasInit1.Description = 'Initialization';

MotAg6MeasPer1 = DataDict.Runnable;
MotAg6MeasPer1.Context = 'Rte';
MotAg6MeasPer1.TimeStep = 0.002;
MotAg6MeasPer1.Description = 'Periodic event at 2ms rate';

MotAg6MeasPer2 = DataDict.Runnable;
MotAg6MeasPer2.Context = 'NonRte';
MotAg6MeasPer2.TimeStep = 'MotorControl';
MotAg6MeasPer2.Description = [...
  'Periodic event at motor control rate'];

MotAg6MeasPer3 = DataDict.Runnable;
MotAg6MeasPer3.Context = 'Rte';
MotAg6MeasPer3.TimeStep = 0.004;
MotAg6MeasPer3.Description = 'Periodic event at 4ms rate';

MotAg6EolPrmRead = DataDict.SrvRunnable;
MotAg6EolPrmRead.Context = 'Rte';
MotAg6EolPrmRead.Description = [...
  'Motor Angle 6 Measurement EOL Parameter Read'];
MotAg6EolPrmRead.Return = DataDict.CSReturn;
MotAg6EolPrmRead.Return.Type = 'None';
MotAg6EolPrmRead.Return.Min = [];
MotAg6EolPrmRead.Return.Max = [];
MotAg6EolPrmRead.Return.TestTolerance = [];
MotAg6EolPrmRead.Arguments(1) = DataDict.CSArguments;
MotAg6EolPrmRead.Arguments(1).Name = 'MotAg6EolPrmData';
MotAg6EolPrmRead.Arguments(1).EngDT = struct.MotAgEolPrmRec1;
MotAg6EolPrmRead.Arguments(1).EngMin = [struct('SinOffs',1,'CosOffs',1,'SinAmpRecpr',0.4,'CosAmpRecpr',0.4,'SinDelta',-0.1736,'SinHrmncTbl',-0.015625,'CosHrmncTbl',-0.015625,'SinGainCorrd',0.8,'CosGainCorrd',0.8,'SinOffsCorrd',-0.25,'CosOffsCorrd',-0.25,'CosDeltaRecpr',0)];
MotAg6EolPrmRead.Arguments(1).EngMax = [struct('SinOffs',3,'CosOffs',3,'SinAmpRecpr',4,'CosAmpRecpr',4,'SinDelta',0.1736,'SinHrmncTbl',0.01550293,'CosHrmncTbl',0.01550293,'SinGainCorrd',1.2,'CosGainCorrd',1.2,'SinOffsCorrd',0.25,'CosOffsCorrd',0.25,'CosDeltaRecpr',1)];
MotAg6EolPrmRead.Arguments(1).TestTolerance = 0;
MotAg6EolPrmRead.Arguments(1).Units = 'Uls';
MotAg6EolPrmRead.Arguments(1).Direction = 'Out';
MotAg6EolPrmRead.Arguments(1).InitRowCol = [1  1];
MotAg6EolPrmRead.Arguments(1).Description = [...
  'Motor Angle 6 Measurement EOL Parameter Data In'];

MotAg6EolPrmWr = DataDict.SrvRunnable;
MotAg6EolPrmWr.Context = 'Rte';
MotAg6EolPrmWr.Description = [...
  'Motor Angle 6 Measurement EOL Parameter Write'];
MotAg6EolPrmWr.Return = DataDict.CSReturn;
MotAg6EolPrmWr.Return.Type = 'None';
MotAg6EolPrmWr.Return.Min = [];
MotAg6EolPrmWr.Return.Max = [];
MotAg6EolPrmWr.Return.TestTolerance = [];
MotAg6EolPrmWr.Arguments(1) = DataDict.CSArguments;
MotAg6EolPrmWr.Arguments(1).Name = 'MotAg6EolPrmData';
MotAg6EolPrmWr.Arguments(1).EngDT = struct.MotAgEolPrmRec1;
MotAg6EolPrmWr.Arguments(1).EngMin = [struct('SinOffs',1,'SinAmpRecpr',0.4,'CosOffs',1,'CosAmpRecpr',0.4,'SinDelta',-0.1736,'SinHrmncTbl',-0.015625,'CosHrmncTbl',-0.015625,'SinGainCorrd',0.8,'CosGainCorrd',0.8,'SinOffsCorrd',-0.25,'CosOffsCorrd',-0.25,'CosDeltaRecpr',0)];
MotAg6EolPrmWr.Arguments(1).EngMax = [struct('SinOffs',3,'SinAmpRecpr',4,'CosOffs',3,'CosAmpRecpr',4,'SinDelta',0.1736,'SinHrmncTbl',0.01550293,'CosHrmncTbl',0.01550293,'SinGainCorrd',1.2,'CosGainCorrd',1.2,'SinOffsCorrd',0.25,'CosOffsCorrd',0.25,'CosDeltaRecpr',1)];
MotAg6EolPrmWr.Arguments(1).Units = 'Uls';
MotAg6EolPrmWr.Arguments(1).Direction = 'In';
MotAg6EolPrmWr.Arguments(1).InitRowCol = [1  1];
MotAg6EolPrmWr.Arguments(1).Description = [...
  'Motor Angle 6 Measurement EOL Parameter Data Out'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
CnvSnpshtData_f32 = DataDict.Client;
CnvSnpshtData_f32.CallLocation = {'MotAg6MeasPer1'};
CnvSnpshtData_f32.Description = 'Convert a float data type to a uint32 data type';
CnvSnpshtData_f32.Return = DataDict.CSReturn;
CnvSnpshtData_f32.Return.Type = 'None';
CnvSnpshtData_f32.Return.Min = [];
CnvSnpshtData_f32.Return.Max = [];
CnvSnpshtData_f32.Return.TestTolerance = [];
CnvSnpshtData_f32.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_f32.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_f32.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_f32.Arguments(1).EngMin = 0;
CnvSnpshtData_f32.Arguments(1).EngMax = 4294967295;
CnvSnpshtData_f32.Arguments(1).TestTolerance = 0;
CnvSnpshtData_f32.Arguments(1).Units = 'Cnt';
CnvSnpshtData_f32.Arguments(1).Direction = 'Out';
CnvSnpshtData_f32.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_f32.Arguments(1).Description = 'Converted Snapshot data of type uint32';
CnvSnpshtData_f32.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_f32.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_f32.Arguments(2).EngDT = dt.float32;
CnvSnpshtData_f32.Arguments(2).EngMin = -3.402823466e+38;
CnvSnpshtData_f32.Arguments(2).EngMax = 3.402823466e+38;
CnvSnpshtData_f32.Arguments(2).Units = 'Cnt';
CnvSnpshtData_f32.Arguments(2).Direction = 'In';
CnvSnpshtData_f32.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_f32.Arguments(2).Description = 'Input for converting Snapshot data of type float32';


CnvSnpshtData_logl = DataDict.Client;
CnvSnpshtData_logl.CallLocation = {'MotAg6MeasPer1'};
CnvSnpshtData_logl.Description = 'Convert a logical data type to a uint32 data type';
CnvSnpshtData_logl.Return = DataDict.CSReturn;
CnvSnpshtData_logl.Return.Type = 'None';
CnvSnpshtData_logl.Return.Min = [];
CnvSnpshtData_logl.Return.Max = [];
CnvSnpshtData_logl.Return.TestTolerance = [];
CnvSnpshtData_logl.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_logl.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_logl.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_logl.Arguments(1).EngMin = 0;
CnvSnpshtData_logl.Arguments(1).EngMax = 1;
CnvSnpshtData_logl.Arguments(1).TestTolerance = 0;
CnvSnpshtData_logl.Arguments(1).Units = 'Cnt';
CnvSnpshtData_logl.Arguments(1).Direction = 'Out';
CnvSnpshtData_logl.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_logl.Arguments(1).Description = 'Converted Snapshot data of type uint32';
CnvSnpshtData_logl.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_logl.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_logl.Arguments(2).EngDT = dt.lgc;
CnvSnpshtData_logl.Arguments(2).EngMin = 0;
CnvSnpshtData_logl.Arguments(2).EngMax = 1;
CnvSnpshtData_logl.Arguments(2).Units = 'Cnt';
CnvSnpshtData_logl.Arguments(2).Direction = 'In';
CnvSnpshtData_logl.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_logl.Arguments(2).Description = 'Input for converting Snapshot data of type boolean';


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'MotAg6MeasPer1'};
GetNtcQlfrSts.Description = 'Get NTC status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = 'standard return type';
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
GetNtcQlfrSts.Arguments(2).TestTolerance = 0;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'NTC Qualifier status';


MotAg6EolPrm_GetErrorStatus = DataDict.Client;
MotAg6EolPrm_GetErrorStatus.CallLocation = {'MotAg6MeasInit1'};
MotAg6EolPrm_GetErrorStatus.Description = [...
  'Client to get motor angle end of line parameters nvm error status'];
MotAg6EolPrm_GetErrorStatus.Return = DataDict.CSReturn;
MotAg6EolPrm_GetErrorStatus.Return.Type = 'Standard';
MotAg6EolPrm_GetErrorStatus.Return.Min = 0;
MotAg6EolPrm_GetErrorStatus.Return.Max = 1;
MotAg6EolPrm_GetErrorStatus.Return.TestTolerance = 0;
MotAg6EolPrm_GetErrorStatus.Return.Description = 'Return perameters ';
MotAg6EolPrm_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotAg6EolPrm_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
MotAg6EolPrm_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotAg6EolPrm_GetErrorStatus.Arguments(1).EngMin = 0;
MotAg6EolPrm_GetErrorStatus.Arguments(1).EngMax = 255;
MotAg6EolPrm_GetErrorStatus.Arguments(1).TestTolerance = 0;
MotAg6EolPrm_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotAg6EolPrm_GetErrorStatus.Arguments(1).Direction = 'Out';
MotAg6EolPrm_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
MotAg6EolPrm_GetErrorStatus.Arguments(1).Description = [...
  'pointer to requested the error status result'];


MotAg6EolPrm_SetRamBlockStatus = DataDict.Client;
MotAg6EolPrm_SetRamBlockStatus.CallLocation = {'MotAg6EolPrmWr'};
MotAg6EolPrm_SetRamBlockStatus.Description = 'Set Ram Status Block';
MotAg6EolPrm_SetRamBlockStatus.Return = DataDict.CSReturn;
MotAg6EolPrm_SetRamBlockStatus.Return.Type = 'Standard';
MotAg6EolPrm_SetRamBlockStatus.Return.Min = 0;
MotAg6EolPrm_SetRamBlockStatus.Return.Max = 1;
MotAg6EolPrm_SetRamBlockStatus.Return.TestTolerance = 0;
MotAg6EolPrm_SetRamBlockStatus.Return.Description = 'Set Ram Status Block';
MotAg6EolPrm_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotAg6EolPrm_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotAg6EolPrm_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotAg6EolPrm_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotAg6EolPrm_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotAg6EolPrm_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotAg6EolPrm_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotAg6EolPrm_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MotAg6EolPrm_SetRamBlockStatus.Arguments(1).Description = 'Set Ram Status Block';


MotAg6StVari_GetErrorStatus = DataDict.Client;
MotAg6StVari_GetErrorStatus.CallLocation = {'MotAg6MeasInit1'};
MotAg6StVari_GetErrorStatus.Description = [...
  'Client to get motor angle state variable nvm error status'];
MotAg6StVari_GetErrorStatus.Return = DataDict.CSReturn;
MotAg6StVari_GetErrorStatus.Return.Type = 'Standard';
MotAg6StVari_GetErrorStatus.Return.Min = 0;
MotAg6StVari_GetErrorStatus.Return.Max = 1;
MotAg6StVari_GetErrorStatus.Return.TestTolerance = 0;
MotAg6StVari_GetErrorStatus.Return.Description = 'Return perameters ';
MotAg6StVari_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotAg6StVari_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
MotAg6StVari_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotAg6StVari_GetErrorStatus.Arguments(1).EngMin = 0;
MotAg6StVari_GetErrorStatus.Arguments(1).EngMax = 255;
MotAg6StVari_GetErrorStatus.Arguments(1).TestTolerance = 0;
MotAg6StVari_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotAg6StVari_GetErrorStatus.Arguments(1).Direction = 'Out';
MotAg6StVari_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
MotAg6StVari_GetErrorStatus.Arguments(1).Description = [...
  'pointer for requested error status result'];


MotAg6StVari_SetRamBlockStatus = DataDict.Client;
MotAg6StVari_SetRamBlockStatus.CallLocation = {'MotAg6MeasPer3'};
MotAg6StVari_SetRamBlockStatus.Description = 'Set Ram Status Block';
MotAg6StVari_SetRamBlockStatus.Return = DataDict.CSReturn;
MotAg6StVari_SetRamBlockStatus.Return.Type = 'Standard';
MotAg6StVari_SetRamBlockStatus.Return.Min = 0;
MotAg6StVari_SetRamBlockStatus.Return.Max = 1;
MotAg6StVari_SetRamBlockStatus.Return.TestTolerance = 0;
MotAg6StVari_SetRamBlockStatus.Return.Description = 'Set Ram Status Block';
MotAg6StVari_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotAg6StVari_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotAg6StVari_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotAg6StVari_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotAg6StVari_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotAg6StVari_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotAg6StVari_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotAg6StVari_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MotAg6StVari_SetRamBlockStatus.Arguments(1).Description = 'Set Ram Status Block';


SetNtcStsAndSnpshtData = DataDict.Client;
SetNtcStsAndSnpshtData.CallLocation = {'MotAg6MeasPer1'};
SetNtcStsAndSnpshtData.Description = 'Set NTC Status And Snapshot Data X';
SetNtcStsAndSnpshtData.Return = DataDict.CSReturn;
SetNtcStsAndSnpshtData.Return.Type = 'Standard';
SetNtcStsAndSnpshtData.Return.Min = 0;
SetNtcStsAndSnpshtData.Return.Max = 1;
SetNtcStsAndSnpshtData.Return.TestTolerance = 0;
SetNtcStsAndSnpshtData.Return.Description = 'None';
SetNtcStsAndSnpshtData.Arguments(1) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(1).Name = 'NtcNr';
SetNtcStsAndSnpshtData.Arguments(1).EngDT = enum.NtcNr1;
SetNtcStsAndSnpshtData.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcStsAndSnpshtData.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcStsAndSnpshtData.Arguments(1).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(1).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(1).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(1).Description = 'NTC Number';
SetNtcStsAndSnpshtData.Arguments(2) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(2).Name = 'NtcStInfo';
SetNtcStsAndSnpshtData.Arguments(2).EngDT = dt.u08;
SetNtcStsAndSnpshtData.Arguments(2).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(2).EngMax = 255;
SetNtcStsAndSnpshtData.Arguments(2).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(2).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(2).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(2).Description = 'NTC State Info';
SetNtcStsAndSnpshtData.Arguments(3) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(3).Name = 'NtcSts';
SetNtcStsAndSnpshtData.Arguments(3).EngDT = enum.NtcSts1;
SetNtcStsAndSnpshtData.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcStsAndSnpshtData.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcStsAndSnpshtData.Arguments(3).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(3).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(3).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(3).Description = 'NTC Status';
SetNtcStsAndSnpshtData.Arguments(4) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(4).Name = 'DebStep';
SetNtcStsAndSnpshtData.Arguments(4).EngDT = dt.u16;
SetNtcStsAndSnpshtData.Arguments(4).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(4).EngMax = 65535;
SetNtcStsAndSnpshtData.Arguments(4).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(4).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(4).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(4).Description = 'Debounce Step';
SetNtcStsAndSnpshtData.Arguments(5) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(5).Name = 'SpclSnpshtData0';
SetNtcStsAndSnpshtData.Arguments(5).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(5).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(5).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(5).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(5).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(5).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(5).Description = 'Special Snapshot Data 0';
SetNtcStsAndSnpshtData.Arguments(6) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(6).Name = 'SpclSnpshtData1';
SetNtcStsAndSnpshtData.Arguments(6).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(6).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(6).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(6).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(6).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(6).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(6).Description = 'Special Snapshot Data 1';
SetNtcStsAndSnpshtData.Arguments(7) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(7).Name = 'SpclSnpshtData2';
SetNtcStsAndSnpshtData.Arguments(7).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(7).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(7).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(7).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(7).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(7).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(7).Description = 'Special Snapshot Data 2';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotAg6Cos = DataDict.IpSignal;
MotAg6Cos.LongName = 'Motor Angle 6 Cosine';
MotAg6Cos.Description = 'Cosine ADC Signal';
MotAg6Cos.DocUnits = 'Volt';
MotAg6Cos.EngDT = dt.float32;
MotAg6Cos.EngInit = 1.65;
MotAg6Cos.EngMin = 0;
MotAg6Cos.EngMax = 5;
MotAg6Cos.ReadIn = {'MotAg6MeasPer1','MotAg6MeasPer3'};
MotAg6Cos.ReadType = 'Rte';


MotAg6CosAdcFaild = DataDict.IpSignal;
MotAg6CosAdcFaild.LongName = 'Motor Angle 6 Cosine ADC Failed';
MotAg6CosAdcFaild.Description = [...
  'Status Indicating cosine ADC Failed or Not'];
MotAg6CosAdcFaild.DocUnits = 'Cnt';
MotAg6CosAdcFaild.EngDT = dt.lgc;
MotAg6CosAdcFaild.EngInit = 0;
MotAg6CosAdcFaild.EngMin = 0;
MotAg6CosAdcFaild.EngMax = 1;
MotAg6CosAdcFaild.ReadIn = {'MotAg6MeasPer1'};
MotAg6CosAdcFaild.ReadType = 'Rte';


MotAg6RawMecl = DataDict.IpSignal;
MotAg6RawMecl.LongName = 'Motor Angle 6 Raw Mechanical';
MotAg6RawMecl.Description = [...
  'Raw Motor Angle 6 Mechnanical without polarity correction read in 2ms periodic'];
MotAg6RawMecl.DocUnits = 'MotRev';
MotAg6RawMecl.EngDT = dt.u0p16;
MotAg6RawMecl.EngInit = 0;
MotAg6RawMecl.EngMin = 0;
MotAg6RawMecl.EngMax = 0.9999847412;
MotAg6RawMecl.ReadIn = {'MotAg6MeasPer3'};
MotAg6RawMecl.ReadType = 'Rte';


MotAg6Sin = DataDict.IpSignal;
MotAg6Sin.LongName = 'Motor Angle 6 Sine';
MotAg6Sin.Description = 'Sine ADC signal';
MotAg6Sin.DocUnits = 'Volt';
MotAg6Sin.EngDT = dt.float32;
MotAg6Sin.EngInit = 1.65;
MotAg6Sin.EngMin = 0;
MotAg6Sin.EngMax = 5;
MotAg6Sin.ReadIn = {'MotAg6MeasPer1','MotAg6MeasPer3'};
MotAg6Sin.ReadType = 'Rte';


MotAg6SinAdcFaild = DataDict.IpSignal;
MotAg6SinAdcFaild.LongName = 'Motor Angle 6 Sine ADC Failed';
MotAg6SinAdcFaild.Description = [...
  'Status Indicating sine ADC Failed or Not'];
MotAg6SinAdcFaild.DocUnits = 'Cnt';
MotAg6SinAdcFaild.EngDT = dt.lgc;
MotAg6SinAdcFaild.EngInit = 0;
MotAg6SinAdcFaild.EngMin = 0;
MotAg6SinAdcFaild.EngMax = 1;
MotAg6SinAdcFaild.ReadIn = {'MotAg6MeasPer1'};
MotAg6SinAdcFaild.ReadType = 'Rte';


MotCtrlMotAg6Cos = DataDict.IpSignal;
MotCtrlMotAg6Cos.LongName = 'Motor Control Motor Angle 6 Cosine';
MotCtrlMotAg6Cos.Description = [...
  'Cosine ADC Signal read in motor control periodic'];
MotCtrlMotAg6Cos.DocUnits = 'Volt';
MotCtrlMotAg6Cos.EngDT = dt.float32;
MotCtrlMotAg6Cos.EngInit = 1.65;
MotCtrlMotAg6Cos.EngMin = 0;
MotCtrlMotAg6Cos.EngMax = 5;
MotCtrlMotAg6Cos.ReadIn = {'MotAg6MeasPer2'};
MotCtrlMotAg6Cos.ReadType = 'NonRte';


MotCtrlMotAg6CosRtAmpRecpr = DataDict.IpSignal;
MotCtrlMotAg6CosRtAmpRecpr.LongName = 'Motor Control Motor Angle 6 Cosine Runtime Amplitude Reciprocal';
MotCtrlMotAg6CosRtAmpRecpr.Description = [...
  'Cosine amplitude reciprocal learned value'];
MotCtrlMotAg6CosRtAmpRecpr.DocUnits = 'IvsVolt';
MotCtrlMotAg6CosRtAmpRecpr.EngDT = dt.float32;
MotCtrlMotAg6CosRtAmpRecpr.EngInit = 2.5;
MotCtrlMotAg6CosRtAmpRecpr.EngMin = 0.32;
MotCtrlMotAg6CosRtAmpRecpr.EngMax = 5.1;
MotCtrlMotAg6CosRtAmpRecpr.ReadIn = {'MotAg6MeasPer2'};
MotCtrlMotAg6CosRtAmpRecpr.ReadType = 'NonRte';


MotCtrlMotAg6CosRtOffs = DataDict.IpSignal;
MotCtrlMotAg6CosRtOffs.LongName = 'Motor Control Motor Angle 6 Cosine Runtime Offset';
MotCtrlMotAg6CosRtOffs.Description = 'Cosine learned offset value';
MotCtrlMotAg6CosRtOffs.DocUnits = 'Volt';
MotCtrlMotAg6CosRtOffs.EngDT = dt.float32;
MotCtrlMotAg6CosRtOffs.EngInit = 2.5;
MotCtrlMotAg6CosRtOffs.EngMin = 0.25;
MotCtrlMotAg6CosRtOffs.EngMax = 3.75;
MotCtrlMotAg6CosRtOffs.ReadIn = {'MotAg6MeasPer2'};
MotCtrlMotAg6CosRtOffs.ReadType = 'NonRte';


MotCtrlMotAg6Polarity = DataDict.IpSignal;
MotCtrlMotAg6Polarity.LongName = 'Motor Control Motor Angle 6 Polarity';
MotCtrlMotAg6Polarity.Description = 'Motor Angle 6 Polarity';
MotCtrlMotAg6Polarity.DocUnits = 'Cnt';
MotCtrlMotAg6Polarity.EngDT = dt.s08;
MotCtrlMotAg6Polarity.EngInit = -1;
MotCtrlMotAg6Polarity.EngMin = -1;
MotCtrlMotAg6Polarity.EngMax = 1;
MotCtrlMotAg6Polarity.ReadIn = {'MotAg6MeasPer2'};
MotCtrlMotAg6Polarity.ReadType = 'NonRte';


MotCtrlMotAg6Sin = DataDict.IpSignal;
MotCtrlMotAg6Sin.LongName = 'Motor Control Motor Angle 6 Sine';
MotCtrlMotAg6Sin.Description = [...
  'Sine ADC signal read on motor control periodic'];
MotCtrlMotAg6Sin.DocUnits = 'Volt';
MotCtrlMotAg6Sin.EngDT = dt.float32;
MotCtrlMotAg6Sin.EngInit = 1.65;
MotCtrlMotAg6Sin.EngMin = 0;
MotCtrlMotAg6Sin.EngMax = 5;
MotCtrlMotAg6Sin.ReadIn = {'MotAg6MeasPer2'};
MotCtrlMotAg6Sin.ReadType = 'NonRte';


MotCtrlMotAg6SinRtAmpRecpr = DataDict.IpSignal;
MotCtrlMotAg6SinRtAmpRecpr.LongName = 'Motor Control Motor Angle 6 Sine Runtime Amplitude Reciprocal';
MotCtrlMotAg6SinRtAmpRecpr.Description = [...
  'Sine amplitude reciprocal learned value'];
MotCtrlMotAg6SinRtAmpRecpr.DocUnits = 'IvsVolt';
MotCtrlMotAg6SinRtAmpRecpr.EngDT = dt.float32;
MotCtrlMotAg6SinRtAmpRecpr.EngInit = 1;
MotCtrlMotAg6SinRtAmpRecpr.EngMin = 0.32;
MotCtrlMotAg6SinRtAmpRecpr.EngMax = 5.1;
MotCtrlMotAg6SinRtAmpRecpr.ReadIn = {'MotAg6MeasPer2'};
MotCtrlMotAg6SinRtAmpRecpr.ReadType = 'NonRte';


MotCtrlMotAg6SinRtOffs = DataDict.IpSignal;
MotCtrlMotAg6SinRtOffs.LongName = 'Motor Control Motor Angle 6 Sine Runtime Offset';
MotCtrlMotAg6SinRtOffs.Description = 'Sine learned offset value';
MotCtrlMotAg6SinRtOffs.DocUnits = 'Volt';
MotCtrlMotAg6SinRtOffs.EngDT = dt.float32;
MotCtrlMotAg6SinRtOffs.EngInit = 2.5;
MotCtrlMotAg6SinRtOffs.EngMin = 0.25;
MotCtrlMotAg6SinRtOffs.EngMax = 3.75;
MotCtrlMotAg6SinRtOffs.ReadIn = {'MotAg6MeasPer2'};
MotCtrlMotAg6SinRtOffs.ReadType = 'NonRte';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'Motor Velocity Motor Reference Frame';
MotVelMrf.Description = [...
  'Motor Velocity with respect to motor reference frame'];
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'MotAg6MeasPer3'};
MotVelMrf.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotAg6CosRtAmpRecpr = DataDict.OpSignal;
MotAg6CosRtAmpRecpr.LongName = 'Motor Angle 6 Cosine Runtime Amplitude Reciprocal';
MotAg6CosRtAmpRecpr.Description = [...
  'Motor Angle 6 cos amplitude learned value'];
MotAg6CosRtAmpRecpr.DocUnits = 'IvsVolt';
MotAg6CosRtAmpRecpr.SwcShoName = 'MotAg6Meas';
MotAg6CosRtAmpRecpr.EngDT = dt.float32;
MotAg6CosRtAmpRecpr.EngInit = 1;
MotAg6CosRtAmpRecpr.EngMin = 0.32;
MotAg6CosRtAmpRecpr.EngMax = 5.1;
MotAg6CosRtAmpRecpr.TestTolerance = 0;
MotAg6CosRtAmpRecpr.WrittenIn = {'MotAg6MeasPer1'};
MotAg6CosRtAmpRecpr.WriteType = 'Rte';


MotAg6CosRtOffs = DataDict.OpSignal;
MotAg6CosRtOffs.LongName = 'Motor Angle 6 Cosine Runtime Offset';
MotAg6CosRtOffs.Description = [...
  'Motor Angle 6 cos offset learned value'];
MotAg6CosRtOffs.DocUnits = 'Volt';
MotAg6CosRtOffs.SwcShoName = 'MotAg6Meas';
MotAg6CosRtOffs.EngDT = dt.float32;
MotAg6CosRtOffs.EngInit = 2.5;
MotAg6CosRtOffs.EngMin = 0.25;
MotAg6CosRtOffs.EngMax = 3.75;
MotAg6CosRtOffs.TestTolerance = 0;
MotAg6CosRtOffs.WrittenIn = {'MotAg6MeasPer1'};
MotAg6CosRtOffs.WriteType = 'Rte';


MotAg6MeclQlfr = DataDict.OpSignal;
MotAg6MeclQlfr.LongName = 'Motor Angle 6 Mechanical Qualifier';
MotAg6MeclQlfr.Description = 'Motor Angle 6 Mechanical Qualifier';
MotAg6MeclQlfr.DocUnits = 'Cnt';
MotAg6MeclQlfr.SwcShoName = 'MotAg6Meas';
MotAg6MeclQlfr.EngDT = enum.SigQlfr1;
MotAg6MeclQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
MotAg6MeclQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
MotAg6MeclQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotAg6MeclQlfr.TestTolerance = 0;
MotAg6MeclQlfr.WrittenIn = {'MotAg6MeasPer1'};
MotAg6MeclQlfr.WriteType = 'Rte';


MotAg6MeclRollgCntr = DataDict.OpSignal;
MotAg6MeclRollgCntr.LongName = 'Motor Angle 6 Mechanical Rolling Counter';
MotAg6MeclRollgCntr.Description = 'Motor Angle 6 Rolling Counter';
MotAg6MeclRollgCntr.DocUnits = 'Cnt';
MotAg6MeclRollgCntr.SwcShoName = 'MotAg6Meas';
MotAg6MeclRollgCntr.EngDT = dt.u08;
MotAg6MeclRollgCntr.EngInit = 0;
MotAg6MeclRollgCntr.EngMin = 0;
MotAg6MeclRollgCntr.EngMax = 255;
MotAg6MeclRollgCntr.TestTolerance = 0;
MotAg6MeclRollgCntr.WrittenIn = {'MotAg6MeasPer1'};
MotAg6MeclRollgCntr.WriteType = 'Rte';


MotAg6SinRtAmpRecpr = DataDict.OpSignal;
MotAg6SinRtAmpRecpr.LongName = 'Motor Angle 6 Sine Runtime Amplitude Reciprocal';
MotAg6SinRtAmpRecpr.Description = [...
  'Motor Angle 6 sine amplitude learned value'];
MotAg6SinRtAmpRecpr.DocUnits = 'IvsVolt';
MotAg6SinRtAmpRecpr.SwcShoName = 'MotAg6Meas';
MotAg6SinRtAmpRecpr.EngDT = dt.float32;
MotAg6SinRtAmpRecpr.EngInit = 1;
MotAg6SinRtAmpRecpr.EngMin = 0.32;
MotAg6SinRtAmpRecpr.EngMax = 5.1;
MotAg6SinRtAmpRecpr.TestTolerance = 0;
MotAg6SinRtAmpRecpr.WrittenIn = {'MotAg6MeasPer1'};
MotAg6SinRtAmpRecpr.WriteType = 'Rte';


MotAg6SinRtOffs = DataDict.OpSignal;
MotAg6SinRtOffs.LongName = 'Motor Angle 6 Sine Runtime Offset';
MotAg6SinRtOffs.Description = [...
  'Motor Angle 6 sine offset learned value'];
MotAg6SinRtOffs.DocUnits = 'Volt';
MotAg6SinRtOffs.SwcShoName = 'MotAg6Meas';
MotAg6SinRtOffs.EngDT = dt.float32;
MotAg6SinRtOffs.EngInit = 2.5;
MotAg6SinRtOffs.EngMin = 0.25;
MotAg6SinRtOffs.EngMax = 3.75;
MotAg6SinRtOffs.TestTolerance = 0;
MotAg6SinRtOffs.WrittenIn = {'MotAg6MeasPer1'};
MotAg6SinRtOffs.WriteType = 'Rte';


MotCtrlMotAg6Mecl = DataDict.OpSignal;
MotCtrlMotAg6Mecl.LongName = 'Motor Control Motor Angle 6 Mechanical';
MotCtrlMotAg6Mecl.Description = 'Motor Angle 6 Mechanical value';
MotCtrlMotAg6Mecl.DocUnits = 'MotRev';
MotCtrlMotAg6Mecl.SwcShoName = 'MotAg6Meas';
MotCtrlMotAg6Mecl.EngDT = dt.u0p16;
MotCtrlMotAg6Mecl.EngInit = 0;
MotCtrlMotAg6Mecl.EngMin = 0;
MotCtrlMotAg6Mecl.EngMax = 0.9999847412;
MotCtrlMotAg6Mecl.TestTolerance = 1.525878906e-05;
MotCtrlMotAg6Mecl.WrittenIn = {'MotAg6MeasPer2'};
MotCtrlMotAg6Mecl.WriteType = 'NonRte';


MotCtrlMotAg6RawMecl = DataDict.OpSignal;
MotCtrlMotAg6RawMecl.LongName = 'Motor Control Motor Angle 6 Mechanical';
MotCtrlMotAg6RawMecl.Description = 'Motor Angle 6 Mechanical value';
MotCtrlMotAg6RawMecl.DocUnits = 'MotRev';
MotCtrlMotAg6RawMecl.SwcShoName = 'MotAg6Meas';
MotCtrlMotAg6RawMecl.EngDT = dt.u0p16;
MotCtrlMotAg6RawMecl.EngInit = 0;
MotCtrlMotAg6RawMecl.EngMin = 0;
MotCtrlMotAg6RawMecl.EngMax = 0.9999847412;
MotCtrlMotAg6RawMecl.TestTolerance = 1.525878906e-05;
MotCtrlMotAg6RawMecl.WrittenIn = {'MotAg6MeasPer2'};
MotCtrlMotAg6RawMecl.WriteType = 'NonRte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
MotAg6PrtclOk = DataDict.IRV;
MotAg6PrtclOk.LongName = 'Sine Cosine Test Ok';
MotAg6PrtclOk.Description = 'Sine Cosine Test Ok';
MotAg6PrtclOk.DocUnits = 'Cnt';
MotAg6PrtclOk.EngDT = dt.lgc;
MotAg6PrtclOk.EngInit = 0;
MotAg6PrtclOk.EngMin = 0;
MotAg6PrtclOk.EngMax = 1;
MotAg6PrtclOk.ReadIn = {'MotAg6MeasPer3'};
MotAg6PrtclOk.WrittenIn = {'MotAg6MeasPer1'};


MotAg6RtVari = DataDict.IRV;
MotAg6RtVari.LongName = 'Motor Angle 6 Runtime Variable';
MotAg6RtVari.Description = 'Motor Angle 6 Runtime Variable';
MotAg6RtVari.DocUnits = 'Uls';
MotAg6RtVari.EngDT = struct.MotAgRtPrmRec1;
MotAg6RtVari.EngInit = [struct('SinRtOffs',2.5,'SinRtAmpRecpr',1,'CosRtOffs',2.5,'CosRtAmpRecpr',1,'SinGainCorrd',1,'CosGainCorrd',1,'SinOffsCorrd',0,'CosOffsCorrd',0,'CosSinNomRatio',1,'SinCosNomRatio',1,'RtToNomRatioLoLim',1,'RtToNomRatioHiLim',1,'PrevSinRtOffs',2.5,'PrevCosRtOffs',2.5)];
MotAg6RtVari.EngMin = [struct('SinRtOffs',0.25,'SinRtAmpRecpr',0.32,'CosRtOffs',0.25,'CosRtAmpRecpr',0.32,'SinGainCorrd',0.8,'CosGainCorrd',0.8,'SinOffsCorrd',-0.25,'CosOffsCorrd',-0.25,'CosSinNomRatio',0.1,'SinCosNomRatio',0.1,'RtToNomRatioLoLim',0.8,'RtToNomRatioHiLim',1,'PrevSinRtOffs',0.25,'PrevCosRtOffs',0.25)];
MotAg6RtVari.EngMax = [struct('SinRtOffs',3.75,'SinRtAmpRecpr',5.1,'CosRtOffs',3.75,'CosRtAmpRecpr',5.1,'SinGainCorrd',1.2,'CosGainCorrd',1.2,'SinOffsCorrd',0.25,'CosOffsCorrd',0.25,'CosSinNomRatio',10,'SinCosNomRatio',10,'RtToNomRatioLoLim',1,'RtToNomRatioHiLim',1.2,'PrevSinRtOffs',3.75,'PrevCosRtOffs',3.75)];
MotAg6RtVari.ReadIn = {'MotAg6MeasPer1'};
MotAg6RtVari.WrittenIn = {'MotAg6MeasPer3'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotAg6MeasAmpSqdMaxThd = DataDict.Calibration;
MotAg6MeasAmpSqdMaxThd.LongName = 'Motor Angle 6 Measurement Amplitude Squared Maximum Threshold';
MotAg6MeasAmpSqdMaxThd.Description = [...
  'Maximum Amplitude threshold for Sin/Cos signals'];
MotAg6MeasAmpSqdMaxThd.DocUnits = 'VoltSqd';
MotAg6MeasAmpSqdMaxThd.EngDT = dt.float32;
MotAg6MeasAmpSqdMaxThd.EngVal = 2.8;
MotAg6MeasAmpSqdMaxThd.EngMin = 1e-06;
MotAg6MeasAmpSqdMaxThd.EngMax = 6.25;
MotAg6MeasAmpSqdMaxThd.Cardinality = 'Cmn';
MotAg6MeasAmpSqdMaxThd.CustomerVisible = false;
MotAg6MeasAmpSqdMaxThd.Online = false;
MotAg6MeasAmpSqdMaxThd.Impact = 'H';
MotAg6MeasAmpSqdMaxThd.TuningOwner = 'FDD';
MotAg6MeasAmpSqdMaxThd.GraphLink = {''};
MotAg6MeasAmpSqdMaxThd.Monotony = 'None';
MotAg6MeasAmpSqdMaxThd.MaxGrad = 6.249999;
MotAg6MeasAmpSqdMaxThd.PortName = 'MotAg6MeasAmpSqdMaxThd';


MotAg6MeasAmpSqdMinThd = DataDict.Calibration;
MotAg6MeasAmpSqdMinThd.LongName = 'Motor Angle 6 Measurement Amplitude Squared Minimum Threshold';
MotAg6MeasAmpSqdMinThd.Description = [...
  'Minimum Amplitude threshold for Sin/Cos signals'];
MotAg6MeasAmpSqdMinThd.DocUnits = 'VoltSqd';
MotAg6MeasAmpSqdMinThd.EngDT = dt.float32;
MotAg6MeasAmpSqdMinThd.EngVal = 0.0625;
MotAg6MeasAmpSqdMinThd.EngMin = 1e-06;
MotAg6MeasAmpSqdMinThd.EngMax = 6.25;
MotAg6MeasAmpSqdMinThd.Cardinality = 'Cmn';
MotAg6MeasAmpSqdMinThd.CustomerVisible = false;
MotAg6MeasAmpSqdMinThd.Online = false;
MotAg6MeasAmpSqdMinThd.Impact = 'H';
MotAg6MeasAmpSqdMinThd.TuningOwner = 'FDD';
MotAg6MeasAmpSqdMinThd.GraphLink = {''};
MotAg6MeasAmpSqdMinThd.Monotony = 'None';
MotAg6MeasAmpSqdMinThd.MaxGrad = 6.249999;
MotAg6MeasAmpSqdMinThd.PortName = 'MotAg6MeasAmpSqdMinThd';


MotAg6MeasLpFilFrq = DataDict.Calibration;
MotAg6MeasLpFilFrq.LongName = 'Motor Angle 6 Measurement Low Pass Filter Frequency';
MotAg6MeasLpFilFrq.Description = [...
  'Motor Angle 6 Measurement Low pass filter frequency in Hertz'];
MotAg6MeasLpFilFrq.DocUnits = 'Hz';
MotAg6MeasLpFilFrq.EngDT = dt.float32;
MotAg6MeasLpFilFrq.EngVal = 0.1;
MotAg6MeasLpFilFrq.EngMin = 0;
MotAg6MeasLpFilFrq.EngMax = 10;
MotAg6MeasLpFilFrq.Cardinality = 'Cmn';
MotAg6MeasLpFilFrq.CustomerVisible = false;
MotAg6MeasLpFilFrq.Online = false;
MotAg6MeasLpFilFrq.Impact = 'H';
MotAg6MeasLpFilFrq.TuningOwner = 'FDD';
MotAg6MeasLpFilFrq.GraphLink = {''};
MotAg6MeasLpFilFrq.Monotony = 'None';
MotAg6MeasLpFilFrq.MaxGrad = 10;
MotAg6MeasLpFilFrq.PortName = 'MotAg6MeasLpFilFrq';


MotAg6MeasOffs = DataDict.Calibration;
MotAg6MeasOffs.LongName = 'Motor Angle 6 Measurement Offset';
MotAg6MeasOffs.Description = [...
  'An offset applied to motor angle used for synchronization'];
MotAg6MeasOffs.DocUnits = 'MotRev';
MotAg6MeasOffs.EngDT = dt.u0p16;
MotAg6MeasOffs.EngVal = 0;
MotAg6MeasOffs.EngMin = 0;
MotAg6MeasOffs.EngMax = 0.9999847412;
MotAg6MeasOffs.Cardinality = 'Cmn';
MotAg6MeasOffs.CustomerVisible = false;
MotAg6MeasOffs.Online = false;
MotAg6MeasOffs.Impact = 'H';
MotAg6MeasOffs.TuningOwner = 'FDD';
MotAg6MeasOffs.GraphLink = {''};
MotAg6MeasOffs.Monotony = 'None';
MotAg6MeasOffs.MaxGrad = 0.9999847412;
MotAg6MeasOffs.PortName = 'MotAg6MeasOffs';


MotAg6MeasRtAmpRecprLim = DataDict.Calibration;
MotAg6MeasRtAmpRecprLim.LongName = 'Motor Angle 6 Measurement Run Time Amplitude Reciprocal Limit';
MotAg6MeasRtAmpRecprLim.Description = [...
  'Limit on the amount of amplitude that is allowed to be learned'];
MotAg6MeasRtAmpRecprLim.DocUnits = 'IvsVolt';
MotAg6MeasRtAmpRecprLim.EngDT = dt.float32;
MotAg6MeasRtAmpRecprLim.EngVal = 0.122;
MotAg6MeasRtAmpRecprLim.EngMin = 0;
MotAg6MeasRtAmpRecprLim.EngMax = 0.25;
MotAg6MeasRtAmpRecprLim.Cardinality = 'Cmn';
MotAg6MeasRtAmpRecprLim.CustomerVisible = false;
MotAg6MeasRtAmpRecprLim.Online = false;
MotAg6MeasRtAmpRecprLim.Impact = 'H';
MotAg6MeasRtAmpRecprLim.TuningOwner = 'FDD';
MotAg6MeasRtAmpRecprLim.GraphLink = {''};
MotAg6MeasRtAmpRecprLim.Monotony = 'None';
MotAg6MeasRtAmpRecprLim.MaxGrad = 0.25;
MotAg6MeasRtAmpRecprLim.PortName = 'MotAg6MeasRtAmpRecprLim';


MotAg6MeasRtFilEnaThd = DataDict.Calibration;
MotAg6MeasRtFilEnaThd.LongName = 'Motor Angle 6 Measurement Runtime Filter Enable Threshold';
MotAg6MeasRtFilEnaThd.Description = [...
  'Motor Angle 6 Measurement Runtime Filter Enable Threshold'];
MotAg6MeasRtFilEnaThd.DocUnits = 'Uls';
MotAg6MeasRtFilEnaThd.EngDT = dt.float32;
MotAg6MeasRtFilEnaThd.EngVal = 0.99;
MotAg6MeasRtFilEnaThd.EngMin = 0.8;
MotAg6MeasRtFilEnaThd.EngMax = 1;
MotAg6MeasRtFilEnaThd.Cardinality = 'Cmn';
MotAg6MeasRtFilEnaThd.CustomerVisible = false;
MotAg6MeasRtFilEnaThd.Online = false;
MotAg6MeasRtFilEnaThd.Impact = 'H';
MotAg6MeasRtFilEnaThd.TuningOwner = 'FDD';
MotAg6MeasRtFilEnaThd.GraphLink = {''};
MotAg6MeasRtFilEnaThd.Monotony = 'None';
MotAg6MeasRtFilEnaThd.MaxGrad = 1;
MotAg6MeasRtFilEnaThd.PortName = 'MotAg6MeasRtFilEnaThd';


MotAg6MeasRtMotVelFilEnaThd = DataDict.Calibration;
MotAg6MeasRtMotVelFilEnaThd.LongName = 'Motor Angle 6 Measurement Runtime Motor Velocity Filter Enable Threshold';
MotAg6MeasRtMotVelFilEnaThd.Description = [...
  'Motor Angle 6 Measurement Motor Velocity Enable Threshold for LPF Filt' ...
  'er'];
MotAg6MeasRtMotVelFilEnaThd.DocUnits = 'MotRadPerSec';
MotAg6MeasRtMotVelFilEnaThd.EngDT = dt.float32;
MotAg6MeasRtMotVelFilEnaThd.EngVal = 100;
MotAg6MeasRtMotVelFilEnaThd.EngMin = 0;
MotAg6MeasRtMotVelFilEnaThd.EngMax = 1000;
MotAg6MeasRtMotVelFilEnaThd.Cardinality = 'Cmn';
MotAg6MeasRtMotVelFilEnaThd.CustomerVisible = false;
MotAg6MeasRtMotVelFilEnaThd.Online = false;
MotAg6MeasRtMotVelFilEnaThd.Impact = 'H';
MotAg6MeasRtMotVelFilEnaThd.TuningOwner = 'FDD';
MotAg6MeasRtMotVelFilEnaThd.GraphLink = {''};
MotAg6MeasRtMotVelFilEnaThd.Monotony = 'None';
MotAg6MeasRtMotVelFilEnaThd.MaxGrad = 1000;
MotAg6MeasRtMotVelFilEnaThd.PortName = 'MotAg6MeasRtMotVelFilEnaThd';


MotAg6MeasRtOffsLim = DataDict.Calibration;
MotAg6MeasRtOffsLim.LongName = 'Motor Angle 6 Measurement Runtime Offset Limit';
MotAg6MeasRtOffsLim.Description = [...
  'Limit on amount of offset that is allowed to be learned'];
MotAg6MeasRtOffsLim.DocUnits = 'Volt';
MotAg6MeasRtOffsLim.EngDT = dt.float32;
MotAg6MeasRtOffsLim.EngVal = 0.1;
MotAg6MeasRtOffsLim.EngMin = 0;
MotAg6MeasRtOffsLim.EngMax = 0.5;
MotAg6MeasRtOffsLim.Cardinality = 'Cmn';
MotAg6MeasRtOffsLim.CustomerVisible = false;
MotAg6MeasRtOffsLim.Online = false;
MotAg6MeasRtOffsLim.Impact = 'H';
MotAg6MeasRtOffsLim.TuningOwner = 'FDD';
MotAg6MeasRtOffsLim.GraphLink = {''};
MotAg6MeasRtOffsLim.Monotony = 'None';
MotAg6MeasRtOffsLim.MaxGrad = 0.5;
MotAg6MeasRtOffsLim.PortName = 'MotAg6MeasRtOffsLim';


MotAg6MeasRtToNomRatLim = DataDict.Calibration;
MotAg6MeasRtToNomRatLim.LongName = 'Motor Angle 6 Measurement Runtime to Nominal Ratio Limit';
MotAg6MeasRtToNomRatLim.Description = [...
  'Sine/Cosine Runtime to Nominal Ratio Limit'];
MotAg6MeasRtToNomRatLim.DocUnits = 'Uls';
MotAg6MeasRtToNomRatLim.EngDT = dt.float32;
MotAg6MeasRtToNomRatLim.EngVal = 0.1;
MotAg6MeasRtToNomRatLim.EngMin = 0;
MotAg6MeasRtToNomRatLim.EngMax = 0.2;
MotAg6MeasRtToNomRatLim.Cardinality = 'Cmn';
MotAg6MeasRtToNomRatLim.CustomerVisible = false;
MotAg6MeasRtToNomRatLim.Online = false;
MotAg6MeasRtToNomRatLim.Impact = 'H';
MotAg6MeasRtToNomRatLim.TuningOwner = 'FDD';
MotAg6MeasRtToNomRatLim.GraphLink = {''};
MotAg6MeasRtToNomRatLim.Monotony = 'None';
MotAg6MeasRtToNomRatLim.MaxGrad = 0.2;
MotAg6MeasRtToNomRatLim.PortName = 'MotAg6MeasRtToNomRatLim';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
 %% Non-Volatile Memory Definition            
%%-------------------------------------------
MotAg6EolPrm = DataDict.NVM;
MotAg6EolPrm.LongName = 'Motor Angle 6 EOL Parameter';
MotAg6EolPrm.Description = 'Motor Angle End of Line Parameters';
MotAg6EolPrm.DocUnits = 'Uls';
MotAg6EolPrm.EngDT = struct.MotAgEolPrmRec1;
MotAg6EolPrm.EngInit = [];
MotAg6EolPrm.EngMin = [struct('SinOffs',1,'CosOffs',1,'SinAmpRecpr',0.4,'CosAmpRecpr',0.4,'SinDelta',-0.1736,'SinHrmncTbl',-0.015625,'CosHrmncTbl',-0.015625,'SinGainCorrd',0.8,'CosGainCorrd',0.8,'SinOffsCorrd',-0.25,'CosOffsCorrd',-0.25,'CosDeltaRecpr',0)];
MotAg6EolPrm.EngMax = [struct('SinOffs',3,'CosOffs',2,'SinAmpRecpr',4,'CosAmpRecpr',4,'SinDelta',0.1736,'SinHrmncTbl',0.01550293,'CosHrmncTbl',0.01550293,'SinGainCorrd',1.2,'CosGainCorrd',1.2,'SinOffsCorrd',0.25,'CosOffsCorrd',0.25,'CosDeltaRecpr',1)];
MotAg6EolPrm.CustomerVisible = false;
MotAg6EolPrm.Impact = 'H';
MotAg6EolPrm.TuningOwner = 'FDD';
MotAg6EolPrm.InitRowCol = [1  1];


MotAg6StVari = DataDict.NVM;
MotAg6StVari.LongName = 'Motor Angle State Variable';
MotAg6StVari.Description = [...
  'Motor Angle Low Pass Filter State variables'];
MotAg6StVari.DocUnits = 'Uls';
MotAg6StVari.EngDT = struct.MotAgStVariRec1;
MotAg6StVari.EngInit = [];
MotAg6StVari.EngMin = [struct('MotAgSinMax',0.25,'MotAgSinMin',-2.5,'MotAgCosMax',0.25,'MotAgCosMin',-2.5)];
MotAg6StVari.EngMax = [struct('MotAgSinMax',2.5,'MotAgSinMin',-0.25,'MotAgCosMax',2.5,'MotAgCosMin',-0.25)];
MotAg6StVari.CustomerVisible = false;
MotAg6StVari.Impact = 'H';
MotAg6StVari.TuningOwner = 'FDD';
MotAg6StVari.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotAg6MeasAmpVal = DataDict.Display;
dMotAg6MeasAmpVal.LongName = 'Motor Angle 6 Amplitude Value';
dMotAg6MeasAmpVal.Description = 'Sine and Cosine Amplitude value';
dMotAg6MeasAmpVal.DocUnits = 'VoltSqd';
dMotAg6MeasAmpVal.EngDT = dt.float32;
dMotAg6MeasAmpVal.EngMin = 0;
dMotAg6MeasAmpVal.EngMax = 5.76;
dMotAg6MeasAmpVal.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotAg6CosMaxLpFil = DataDict.PIM;
MotAg6CosMaxLpFil.LongName = 'Cosine Maximum Low Pass Filter';
MotAg6CosMaxLpFil.Description = [...
  'State variable for Cosine Maximum Low Pass Filter'];
MotAg6CosMaxLpFil.DocUnits = 'Volt';
MotAg6CosMaxLpFil.EngDT = struct.FilLpRec1;
MotAg6CosMaxLpFil.EngMin = [struct('FilSt',0,'FilGain',0)];
MotAg6CosMaxLpFil.EngMax = [struct('FilSt',2.5,'FilGain',1)];
MotAg6CosMaxLpFil.InitRowCol = [1  1];


MotAg6CosMinLpFil = DataDict.PIM;
MotAg6CosMinLpFil.LongName = 'Cosine Minimum Low Pass Filter';
MotAg6CosMinLpFil.Description = [...
  'State variable for Cosine Minimum Low Pass Filter'];
MotAg6CosMinLpFil.DocUnits = 'Volt';
MotAg6CosMinLpFil.EngDT = struct.FilLpRec1;
MotAg6CosMinLpFil.EngMin = [struct('FilSt',-2.5,'FilGain',0)];
MotAg6CosMinLpFil.EngMax = [struct('FilSt',0,'FilGain',1)];
MotAg6CosMinLpFil.InitRowCol = [1  1];


MotAg6NvmFltEna = DataDict.PIM;
MotAg6NvmFltEna.LongName = 'Motor Angle 6 Non volatile memory Fault Enable';
MotAg6NvmFltEna.Description = 'status indicating Nvm failure';
MotAg6NvmFltEna.DocUnits = 'Cnt';
MotAg6NvmFltEna.EngDT = dt.lgc;
MotAg6NvmFltEna.EngMin = 0;
MotAg6NvmFltEna.EngMax = 1;
MotAg6NvmFltEna.InitRowCol = [1  1];


MotAg6PrevRollgCntr = DataDict.PIM;
MotAg6PrevRollgCntr.LongName = 'Motor Angle 6 Previous Rolling Counter';
MotAg6PrevRollgCntr.Description = 'Rolling Counter Previous value.';
MotAg6PrevRollgCntr.DocUnits = 'Cnt';
MotAg6PrevRollgCntr.EngDT = dt.u08;
MotAg6PrevRollgCntr.EngMin = 0;
MotAg6PrevRollgCntr.EngMax = 255;
MotAg6PrevRollgCntr.InitRowCol = [1  1];


MotAg6RtPrm = DataDict.PIM;
MotAg6RtPrm.LongName = 'Motor Angle Runtime Parameter';
MotAg6RtPrm.Description = 'Motor Angle Runtime Parameter';
MotAg6RtPrm.DocUnits = 'Uls';
MotAg6RtPrm.EngDT = struct.MotAgRtPrmRec1;
MotAg6RtPrm.EngMin = [struct('SinRtOffs',1,'SinRtAmpRecpr',0.32,'CosRtOffs',1,'CosRtAmpRecpr',0.32,'SinGainCorrd',0.8,'CosGainCorrd',0.8,'SinOffsCorrd',-0.25,'CosOffsCorrd',-0.25,'CosSinNomRatio',0.1,'SinCosNomRatio',0.1,'RtToNomRatioLoLim',0.8,'RtToNomRatioHiLim',1,'PrevSinRtOffs',1,'PrevCosRtOffs',1)];
MotAg6RtPrm.EngMax = [struct('SinRtOffs',3,'SinRtAmpRecpr',4,'CosRtOffs',3,'CosRtAmpRecpr',4,'SinGainCorrd',1.2,'CosGainCorrd',1.2,'SinOffsCorrd',0.25,'CosOffsCorrd',0.25,'CosSinNomRatio',10,'SinCosNomRatio',10,'RtToNomRatioLoLim',1,'RtToNomRatioHiLim',1.2,'PrevSinRtOffs',3,'PrevCosRtOffs',3)];
MotAg6RtPrm.InitRowCol = [1  1];


MotAg6SinMaxLpFil = DataDict.PIM;
MotAg6SinMaxLpFil.LongName = 'Sine Maximum Low Pass Filter';
MotAg6SinMaxLpFil.Description = [...
  'State variable for Sine Maximum Low Pass Filter'];
MotAg6SinMaxLpFil.DocUnits = 'Volt';
MotAg6SinMaxLpFil.EngDT = struct.FilLpRec1;
MotAg6SinMaxLpFil.EngMin = [struct('FilSt',0,'FilGain',0)];
MotAg6SinMaxLpFil.EngMax = [struct('FilSt',2.5,'FilGain',1)];
MotAg6SinMaxLpFil.InitRowCol = [1  1];


MotAg6SinMinLpFil = DataDict.PIM;
MotAg6SinMinLpFil.LongName = 'Sine Minimum Low Pass Filter';
MotAg6SinMinLpFil.Description = [...
  'State variable for Sine Minimum Low Pass Filter'];
MotAg6SinMinLpFil.DocUnits = 'Volt';
MotAg6SinMinLpFil.EngDT = struct.FilLpRec1;
MotAg6SinMinLpFil.EngMin = [struct('FilSt',-2.5,'FilGain',0)];
MotAg6SinMinLpFil.EngMax = [struct('FilSt',0,'FilGain',1)];
MotAg6SinMinLpFil.InitRowCol = [1  1];


PrevMotAg6Mecl = DataDict.PIM;
PrevMotAg6Mecl.LongName = 'Previous Motor Angle 6 Mechanical';
PrevMotAg6Mecl.Description = 'Previous Motor Angle 6 Mechanical';
PrevMotAg6Mecl.DocUnits = 'MotRev';
PrevMotAg6Mecl.EngDT = dt.u0p16;
PrevMotAg6Mecl.EngMin = 0;
PrevMotAg6Mecl.EngMax = 0.9999847412;
PrevMotAg6Mecl.InitRowCol = [1  1];



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


ARCHGLBPRM_4MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_4MILLISEC_SEC_F32.LongName = '4 Milliseconds';
ARCHGLBPRM_4MILLISEC_SEC_F32.Description = '4ms periodic loop time step';
ARCHGLBPRM_4MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_4MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_4MILLISEC_SEC_F32.EngVal = 0.004;
ARCHGLBPRM_4MILLISEC_SEC_F32.Define = 'Global';


MOTAGHRMNCIDXSHIFT_CNT_U16 = DataDict.Constant;
MOTAGHRMNCIDXSHIFT_CNT_U16.LongName = 'Motor Angle Harmonic Index Shift';
MOTAGHRMNCIDXSHIFT_CNT_U16.Description = 'Value used to bit shift';
MOTAGHRMNCIDXSHIFT_CNT_U16.DocUnits = 'Cnt';
MOTAGHRMNCIDXSHIFT_CNT_U16.EngDT = dt.u16;
MOTAGHRMNCIDXSHIFT_CNT_U16.EngVal = 16;
MOTAGHRMNCIDXSHIFT_CNT_U16.Define = 'Local';


NVMFAILRBIT_CNT_U08 = DataDict.Constant;
NVMFAILRBIT_CNT_U08.LongName = 'NvM Failure Bit';
NVMFAILRBIT_CNT_U08.Description = 'Value used to bit shift';
NVMFAILRBIT_CNT_U08.DocUnits = 'Cnt';
NVMFAILRBIT_CNT_U08.EngDT = dt.u08;
NVMFAILRBIT_CNT_U08.EngVal = 2;
NVMFAILRBIT_CNT_U08.Define = 'Local';


ADCFAILRBIT_CNT_U08 = DataDict.Constant;
ADCFAILRBIT_CNT_U08.LongName = 'ADC Failure Bit';
ADCFAILRBIT_CNT_U08.Description = 'Value used to bit shift';
ADCFAILRBIT_CNT_U08.DocUnits = 'Cnt';
ADCFAILRBIT_CNT_U08.EngDT = dt.u08;
ADCFAILRBIT_CNT_U08.EngVal = 3;
ADCFAILRBIT_CNT_U08.Define = 'Local';


HRMNCTBLROUNDFAC_MOTREV_U0P16 = DataDict.Constant;
HRMNCTBLROUNDFAC_MOTREV_U0P16.LongName = 'Harmonic Table Rounding Factor';
HRMNCTBLROUNDFAC_MOTREV_U0P16.Description = [...
  'Rounding factor to compute an index based on motor angle for harmonic ' ...
  'table'];
HRMNCTBLROUNDFAC_MOTREV_U0P16.DocUnits = 'MotRev';
HRMNCTBLROUNDFAC_MOTREV_U0P16.EngDT = dt.u0p16;
HRMNCTBLROUNDFAC_MOTREV_U0P16.EngVal = 0.003472222;
HRMNCTBLROUNDFAC_MOTREV_U0P16.Define = 'Local';


HRMNCTBLSIZE_CNT_U16 = DataDict.Constant;
HRMNCTBLSIZE_CNT_U16.LongName = 'Harmonic Table Size';
HRMNCTBLSIZE_CNT_U16.Description = 'Harmonic Table Size';
HRMNCTBLSIZE_CNT_U16.DocUnits = 'Cnt';
HRMNCTBLSIZE_CNT_U16.EngDT = dt.u16p0;
HRMNCTBLSIZE_CNT_U16.EngVal = 144;
HRMNCTBLSIZE_CNT_U16.Define = 'Local';


MOTAGADCSIGMAXAMP_VOLT_F32 = DataDict.Constant;
MOTAGADCSIGMAXAMP_VOLT_F32.LongName = 'Motor Angle ADC Signal Maximum Amplitude';
MOTAGADCSIGMAXAMP_VOLT_F32.Description = 'Max Amplitude';
MOTAGADCSIGMAXAMP_VOLT_F32.DocUnits = 'Volt';
MOTAGADCSIGMAXAMP_VOLT_F32.EngDT = dt.float32;
MOTAGADCSIGMAXAMP_VOLT_F32.EngVal = 2.5;
MOTAGADCSIGMAXAMP_VOLT_F32.Define = 'Local';


MOTAGADCSIGMINAMP_VOLT_F32 = DataDict.Constant;
MOTAGADCSIGMINAMP_VOLT_F32.LongName = 'Motor Angle ADC Signal Minimum Amplitude';
MOTAGADCSIGMINAMP_VOLT_F32.Description = 'Min Amplitude';
MOTAGADCSIGMINAMP_VOLT_F32.DocUnits = 'Volt';
MOTAGADCSIGMINAMP_VOLT_F32.EngDT = dt.float32;
MOTAGADCSIGMINAMP_VOLT_F32.EngVal = 0.25;
MOTAGADCSIGMINAMP_VOLT_F32.Define = 'Local';


MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 6 Protocol Fault NTC Number';
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.Description = [...
  'Motor Angle 6 Protocol Fault NTC Number'];
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X085;
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X083;
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X08A;
MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM.Define = 'Global';


MOTAG6PRTCLFLTFAILSTEP_CNT_U16 = DataDict.Constant;
MOTAG6PRTCLFLTFAILSTEP_CNT_U16.LongName = 'Motor Angle 6 Protocol Fault Fail Step';
MOTAG6PRTCLFLTFAILSTEP_CNT_U16.Description = [...
  'Debounce Fail Step for motor angle Diagnostic'];
MOTAG6PRTCLFLTFAILSTEP_CNT_U16.DocUnits = 'Cnt';
MOTAG6PRTCLFLTFAILSTEP_CNT_U16.EngDT = dt.u16;
MOTAG6PRTCLFLTFAILSTEP_CNT_U16.EngVal = 3276;
MOTAG6PRTCLFLTFAILSTEP_CNT_U16.Define = 'Local';


MOTAG6PRTCLFLTPASSSTEP_CNT_U16 = DataDict.Constant;
MOTAG6PRTCLFLTPASSSTEP_CNT_U16.LongName = 'Motor Angle 6 Protocol Faul Pass Step';
MOTAG6PRTCLFLTPASSSTEP_CNT_U16.Description = [...
  'Debounce Pass Step for Motor Angle 0 Diagnostic'];
MOTAG6PRTCLFLTPASSSTEP_CNT_U16.DocUnits = 'Cnt';
MOTAG6PRTCLFLTPASSSTEP_CNT_U16.EngDT = dt.u16;
MOTAG6PRTCLFLTPASSSTEP_CNT_U16.EngVal = 655;
MOTAG6PRTCLFLTPASSSTEP_CNT_U16.Define = 'Local';


NOMOFFSVAL_ULS_F32 = DataDict.Constant;
NOMOFFSVAL_ULS_F32.LongName = 'Scaling Value';
NOMOFFSVAL_ULS_F32.Description = [...
  'Scaling Value used as nominal offset'];
NOMOFFSVAL_ULS_F32.DocUnits = 'Uls';
NOMOFFSVAL_ULS_F32.EngDT = dt.float32;
NOMOFFSVAL_ULS_F32.EngVal = 1.65;
NOMOFFSVAL_ULS_F32.Define = 'Local';


RTAMPRECPRHILIM_IVSVOLT_F32 = DataDict.Constant;
RTAMPRECPRHILIM_IVSVOLT_F32.LongName = 'Runtime Amplitude Reciprocal High Limit';
RTAMPRECPRHILIM_IVSVOLT_F32.Description = [...
  'Runtime Amplitude Reciprocal High Limit'];
RTAMPRECPRHILIM_IVSVOLT_F32.DocUnits = 'IvsVolt';
RTAMPRECPRHILIM_IVSVOLT_F32.EngDT = dt.float32;
RTAMPRECPRHILIM_IVSVOLT_F32.EngVal = 5.1;
RTAMPRECPRHILIM_IVSVOLT_F32.Define = 'Local';


RTAMPRECPRLOLIM_IVSVOLT_F32 = DataDict.Constant;
RTAMPRECPRLOLIM_IVSVOLT_F32.LongName = 'Runtime Amplitude Reciprocal Low Limit';
RTAMPRECPRLOLIM_IVSVOLT_F32.Description = [...
  'Runtime amplitude reciprocal terms low limit'];
RTAMPRECPRLOLIM_IVSVOLT_F32.DocUnits = 'IvsVolt';
RTAMPRECPRLOLIM_IVSVOLT_F32.EngDT = dt.float32;
RTAMPRECPRLOLIM_IVSVOLT_F32.EngVal = 0.32;
RTAMPRECPRLOLIM_IVSVOLT_F32.Define = 'Local';


RTOFFSHILIM_VOLT_F32 = DataDict.Constant;
RTOFFSHILIM_VOLT_F32.LongName = 'Runtime Offset High Limit';
RTOFFSHILIM_VOLT_F32.Description = 'Runtime Offset High Limit';
RTOFFSHILIM_VOLT_F32.DocUnits = 'Volt';
RTOFFSHILIM_VOLT_F32.EngDT = dt.float32;
RTOFFSHILIM_VOLT_F32.EngVal = 3.75;
RTOFFSHILIM_VOLT_F32.Define = 'Local';


RTOFFSLOLIM_VOLT_F32 = DataDict.Constant;
RTOFFSLOLIM_VOLT_F32.LongName = 'Runtime Offset Low Limit';
RTOFFSLOLIM_VOLT_F32.Description = 'Runtime Offset Low Limit';
RTOFFSLOLIM_VOLT_F32.DocUnits = 'Volt';
RTOFFSLOLIM_VOLT_F32.EngDT = dt.float32;
RTOFFSLOLIM_VOLT_F32.EngVal = 0.25;
RTOFFSLOLIM_VOLT_F32.Define = 'Local';


RTPRMCON_ULS_F32 = DataDict.Constant;
RTPRMCON_ULS_F32.LongName = 'Run Time Parameter Constant';
RTPRMCON_ULS_F32.Description = 'Run Time Parameter Constant';
RTPRMCON_ULS_F32.DocUnits = 'Uls';
RTPRMCON_ULS_F32.EngDT = dt.float32;
RTPRMCON_ULS_F32.EngVal = 0.5;
RTPRMCON_ULS_F32.Define = 'Local';


SCAGCON_ULS_F32 = DataDict.Constant;
SCAGCON_ULS_F32.LongName = 'Scaling Constant';
SCAGCON_ULS_F32.Description = 'Scaling Constant';
SCAGCON_ULS_F32.DocUnits = 'Uls';
SCAGCON_ULS_F32.EngDT = dt.float32;
SCAGCON_ULS_F32.EngVal = 8192;
SCAGCON_ULS_F32.Define = 'Local';


SCAGFAC_ULS_F32 = DataDict.Constant;
SCAGFAC_ULS_F32.LongName = 'Scaling Factor Two';
SCAGFAC_ULS_F32.Description = 'Scaling Factor of value two';
SCAGFAC_ULS_F32.DocUnits = 'Uls';
SCAGFAC_ULS_F32.EngDT = dt.float32;
SCAGFAC_ULS_F32.EngVal = 2;
SCAGFAC_ULS_F32.Define = 'Local';


MOTAGMAX_CNT_U16 = DataDict.Constant;
MOTAGMAX_CNT_U16.LongName = 'Motor Angle Maximum';
MOTAGMAX_CNT_U16.Description = 'represents the maximum value motor angle can take';
MOTAGMAX_CNT_U16.DocUnits = 'Cnt';
MOTAGMAX_CNT_U16.EngDT = dt.u16;
MOTAGMAX_CNT_U16.EngVal = 65535;
MOTAGMAX_CNT_U16.Define = 'Local';


MOTAGMAX_MOTREV_U0P16 = DataDict.Constant;
MOTAGMAX_MOTREV_U0P16.LongName = 'Motor Angle Maximum';
MOTAGMAX_MOTREV_U0P16.Description = 'float32 value of 2^16 - 1 that represents the maximum value motor angle can take';
MOTAGMAX_MOTREV_U0P16.DocUnits = 'MotRev';
MOTAGMAX_MOTREV_U0P16.EngDT = dt.u0p16;
MOTAGMAX_MOTREV_U0P16.EngVal = 0.9999847412;
MOTAGMAX_MOTREV_U0P16.Define = 'Local';

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
MotAg6PrtclFlt = DataDict.NTC;
MotAg6PrtclFlt.NtcNr = 'MOTAG6MEAS_MOTAG6PRTCLFLTNTCNR_CNT_ENUM';
MotAg6PrtclFlt.NtcTyp = 'Deb';
MotAg6PrtclFlt.LongName = 'Motor Angle 6 Protocol Fault';
MotAg6PrtclFlt.Description = 'The NTC flag that is used to indicate a Motor Angle 6 fault';
MotAg6PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MotAg6PrtclFlt.NtcStInfo.Bit0Descr = 'ADC signals out of range low';
MotAg6PrtclFlt.NtcStInfo.Bit1Descr = 'ADC signals out of range high';
MotAg6PrtclFlt.NtcStInfo.Bit2Descr = 'NvM failure';
MotAg6PrtclFlt.NtcStInfo.Bit3Descr = 'Adc Failure';
MotAg6PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
MotAg6PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
MotAg6PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
MotAg6PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
