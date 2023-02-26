%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 29-Jun-2017 08:48:47       %
%                                  Created with tool release: 3.0.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES242A = DataDict.FDD;
ES242A.Version = '1.3.X';
ES242A.LongName = 'Motor Angle 5 Measurement';
ES242A.ShoName  = 'MotAg5Meas';
ES242A.DesignASIL = 'D';
ES242A.Description = [...
  'MotAg5Meas funtion shall compute motor angle from Sine and Cosine ADC ' ...
  'signals'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotAg5MeasInit1 = DataDict.Runnable;
MotAg5MeasInit1.Context = 'Rte';
MotAg5MeasInit1.TimeStep = 0;
MotAg5MeasInit1.Description = 'Initialization';

MotAg5MeasPer1 = DataDict.Runnable;
MotAg5MeasPer1.Context = 'Rte';
MotAg5MeasPer1.TimeStep = 0.002;
MotAg5MeasPer1.Description = 'Periodic event at 2ms rate';

MotAg5MeasPer2 = DataDict.Runnable;
MotAg5MeasPer2.Context = 'NonRte';
MotAg5MeasPer2.TimeStep = 'MotorControl';
MotAg5MeasPer2.Description = [...
  'Periodic event at motor control rate'];

MotAg5MeasPer3 = DataDict.Runnable;
MotAg5MeasPer3.Context = 'Rte';
MotAg5MeasPer3.TimeStep = 0.004;
MotAg5MeasPer3.Description = 'Periodic event at 4ms rate';

MotAg5EolPrmRead = DataDict.SrvRunnable;
MotAg5EolPrmRead.Context = 'Rte';
MotAg5EolPrmRead.Description = [...
  'Motor Angle 5 Measurement EOL Parameter Read'];
MotAg5EolPrmRead.Return = DataDict.CSReturn;
MotAg5EolPrmRead.Return.Type = 'None';
MotAg5EolPrmRead.Return.Min = [];
MotAg5EolPrmRead.Return.Max = [];
MotAg5EolPrmRead.Return.TestTolerance = [];
MotAg5EolPrmRead.Arguments(1) = DataDict.CSArguments;
MotAg5EolPrmRead.Arguments(1).Name = 'MotAg5EolPrmData';
MotAg5EolPrmRead.Arguments(1).EngDT = struct.MotAgEolPrmRec1;
MotAg5EolPrmRead.Arguments(1).EngMin = [struct('SinOffs',1,'CosOffs',1,'SinAmpRecpr',0.4,'CosAmpRecpr',0.4,'SinDelta',-0.1736,'SinHrmncTbl',-0.015625,'CosHrmncTbl',-0.015625,'SinGainCorrd',0.8,'CosGainCorrd',0.8,'SinOffsCorrd',-0.25,'CosOffsCorrd',-0.25,'CosDeltaRecpr',0)];
MotAg5EolPrmRead.Arguments(1).EngMax = [struct('SinOffs',3,'CosOffs',3,'SinAmpRecpr',4,'CosAmpRecpr',4,'SinDelta',0.1736,'SinHrmncTbl',0.01550293,'CosHrmncTbl',0.01550293,'SinGainCorrd',1.2,'CosGainCorrd',1.2,'SinOffsCorrd',0.25,'CosOffsCorrd',0.25,'CosDeltaRecpr',1)];
MotAg5EolPrmRead.Arguments(1).TestTolerance = 0;
MotAg5EolPrmRead.Arguments(1).Units = 'Uls';
MotAg5EolPrmRead.Arguments(1).Direction = 'Out';
MotAg5EolPrmRead.Arguments(1).InitRowCol = [1  1];
MotAg5EolPrmRead.Arguments(1).Description = [...
  'Motor Angle 5 Measurement EOL Parameter Data In'];

MotAg5EolPrmWr = DataDict.SrvRunnable;
MotAg5EolPrmWr.Context = 'Rte';
MotAg5EolPrmWr.Description = [...
  'Motor Angle 5 Measurement EOL Parameter Write'];
MotAg5EolPrmWr.Return = DataDict.CSReturn;
MotAg5EolPrmWr.Return.Type = 'None';
MotAg5EolPrmWr.Return.Min = [];
MotAg5EolPrmWr.Return.Max = [];
MotAg5EolPrmWr.Return.TestTolerance = [];
MotAg5EolPrmWr.Arguments(1) = DataDict.CSArguments;
MotAg5EolPrmWr.Arguments(1).Name = 'MotAg5EolPrmData';
MotAg5EolPrmWr.Arguments(1).EngDT = struct.MotAgEolPrmRec1;
MotAg5EolPrmWr.Arguments(1).EngMin = [struct('SinOffs',1,'SinAmpRecpr',0.4,'CosOffs',1,'CosAmpRecpr',0.4,'SinDelta',-0.1736,'SinHrmncTbl',-0.015625,'CosHrmncTbl',-0.015625,'SinGainCorrd',0.8,'CosGainCorrd',0.8,'SinOffsCorrd',-0.25,'CosOffsCorrd',-0.25,'CosDeltaRecpr',0)];
MotAg5EolPrmWr.Arguments(1).EngMax = [struct('SinOffs',3,'SinAmpRecpr',4,'CosOffs',3,'CosAmpRecpr',4,'SinDelta',0.1736,'SinHrmncTbl',0.01550293,'CosHrmncTbl',0.01550293,'SinGainCorrd',1.2,'CosGainCorrd',1.2,'SinOffsCorrd',0.25,'CosOffsCorrd',0.25,'CosDeltaRecpr',1)];
MotAg5EolPrmWr.Arguments(1).Units = 'Uls';
MotAg5EolPrmWr.Arguments(1).Direction = 'In';
MotAg5EolPrmWr.Arguments(1).InitRowCol = [1  1];
MotAg5EolPrmWr.Arguments(1).Description = [...
  'Motor Angle 5 Measurement EOL Parameter Data Out'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
CnvSnpshtData_f32 = DataDict.Client;
CnvSnpshtData_f32.CallLocation = {'MotAg5MeasPer1'};
CnvSnpshtData_f32.Description = [...
  'Convert a float data type to a uint32 data type'];
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
CnvSnpshtData_f32.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_f32.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_f32.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_f32.Arguments(2).EngDT = dt.float32;
CnvSnpshtData_f32.Arguments(2).EngMin = -3.402823466e+38;
CnvSnpshtData_f32.Arguments(2).EngMax = 3.402823466e+38;
CnvSnpshtData_f32.Arguments(2).Units = 'Cnt';
CnvSnpshtData_f32.Arguments(2).Direction = 'In';
CnvSnpshtData_f32.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_f32.Arguments(2).Description = [...
  'Input for converting Snapshot data of type float32'];


CnvSnpshtData_logl = DataDict.Client;
CnvSnpshtData_logl.CallLocation = {'MotAg5MeasPer1'};
CnvSnpshtData_logl.Description = [...
  'Convert a logical data type to a uint32 data type'];
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
CnvSnpshtData_logl.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_logl.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_logl.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_logl.Arguments(2).EngDT = dt.lgc;
CnvSnpshtData_logl.Arguments(2).EngMin = 0;
CnvSnpshtData_logl.Arguments(2).EngMax = 1;
CnvSnpshtData_logl.Arguments(2).Units = 'Cnt';
CnvSnpshtData_logl.Arguments(2).Direction = 'In';
CnvSnpshtData_logl.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_logl.Arguments(2).Description = [...
  'Input for converting Snapshot data of type boolean'];


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'MotAg5MeasPer1'};
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


GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'MotAg5MeasPer2'};
GetRefTmr1MicroSec32bit.Description = 'To get 1micro sec timer';
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
GetRefTmr1MicroSec32bit.Arguments(1).Description = 'Reference Timer';


MotAg5EolPrm_GetErrorStatus = DataDict.Client;
MotAg5EolPrm_GetErrorStatus.CallLocation = {'MotAg5MeasInit1'};
MotAg5EolPrm_GetErrorStatus.Description = [...
  'Client to get motor angle end of line parameters nvm error status'];
MotAg5EolPrm_GetErrorStatus.Return = DataDict.CSReturn;
MotAg5EolPrm_GetErrorStatus.Return.Type = 'Standard';
MotAg5EolPrm_GetErrorStatus.Return.Min = 0;
MotAg5EolPrm_GetErrorStatus.Return.Max = 1;
MotAg5EolPrm_GetErrorStatus.Return.TestTolerance = 0;
MotAg5EolPrm_GetErrorStatus.Return.Description = 'Return perameters ';
MotAg5EolPrm_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotAg5EolPrm_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
MotAg5EolPrm_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotAg5EolPrm_GetErrorStatus.Arguments(1).EngMin = 0;
MotAg5EolPrm_GetErrorStatus.Arguments(1).EngMax = 255;
MotAg5EolPrm_GetErrorStatus.Arguments(1).TestTolerance = 0;
MotAg5EolPrm_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotAg5EolPrm_GetErrorStatus.Arguments(1).Direction = 'Out';
MotAg5EolPrm_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
MotAg5EolPrm_GetErrorStatus.Arguments(1).Description = [...
  'pointer to requested the error status result'];


MotAg5EolPrm_SetRamBlockStatus = DataDict.Client;
MotAg5EolPrm_SetRamBlockStatus.CallLocation = {'MotAg5EolPrmWr'};
MotAg5EolPrm_SetRamBlockStatus.Description = 'Set Ram Status Block';
MotAg5EolPrm_SetRamBlockStatus.Return = DataDict.CSReturn;
MotAg5EolPrm_SetRamBlockStatus.Return.Type = 'Standard';
MotAg5EolPrm_SetRamBlockStatus.Return.Min = 0;
MotAg5EolPrm_SetRamBlockStatus.Return.Max = 1;
MotAg5EolPrm_SetRamBlockStatus.Return.TestTolerance = 0;
MotAg5EolPrm_SetRamBlockStatus.Return.Description = 'Set Ram Status Block';
MotAg5EolPrm_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotAg5EolPrm_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotAg5EolPrm_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotAg5EolPrm_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotAg5EolPrm_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotAg5EolPrm_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotAg5EolPrm_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotAg5EolPrm_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MotAg5EolPrm_SetRamBlockStatus.Arguments(1).Description = 'Set Ram Status Block';


MotAg5StVari_GetErrorStatus = DataDict.Client;
MotAg5StVari_GetErrorStatus.CallLocation = {'MotAg5MeasInit1'};
MotAg5StVari_GetErrorStatus.Description = [...
  'Client to get motor angle state variable nvm error status'];
MotAg5StVari_GetErrorStatus.Return = DataDict.CSReturn;
MotAg5StVari_GetErrorStatus.Return.Type = 'Standard';
MotAg5StVari_GetErrorStatus.Return.Min = 0;
MotAg5StVari_GetErrorStatus.Return.Max = 1;
MotAg5StVari_GetErrorStatus.Return.TestTolerance = 0;
MotAg5StVari_GetErrorStatus.Return.Description = 'Return perameters ';
MotAg5StVari_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotAg5StVari_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
MotAg5StVari_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotAg5StVari_GetErrorStatus.Arguments(1).EngMin = 0;
MotAg5StVari_GetErrorStatus.Arguments(1).EngMax = 255;
MotAg5StVari_GetErrorStatus.Arguments(1).TestTolerance = 0;
MotAg5StVari_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotAg5StVari_GetErrorStatus.Arguments(1).Direction = 'Out';
MotAg5StVari_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
MotAg5StVari_GetErrorStatus.Arguments(1).Description = [...
  'pointer for requested error status result'];


MotAg5StVari_SetRamBlockStatus = DataDict.Client;
MotAg5StVari_SetRamBlockStatus.CallLocation = {'MotAg5MeasPer3'};
MotAg5StVari_SetRamBlockStatus.Description = 'Set Ram Status Block';
MotAg5StVari_SetRamBlockStatus.Return = DataDict.CSReturn;
MotAg5StVari_SetRamBlockStatus.Return.Type = 'Standard';
MotAg5StVari_SetRamBlockStatus.Return.Min = 0;
MotAg5StVari_SetRamBlockStatus.Return.Max = 1;
MotAg5StVari_SetRamBlockStatus.Return.TestTolerance = 0;
MotAg5StVari_SetRamBlockStatus.Return.Description = 'Set Ram Status Block';
MotAg5StVari_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotAg5StVari_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotAg5StVari_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotAg5StVari_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotAg5StVari_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotAg5StVari_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotAg5StVari_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotAg5StVari_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MotAg5StVari_SetRamBlockStatus.Arguments(1).Description = 'Set Ram Status Block';


SetNtcStsAndSnpshtData = DataDict.Client;
SetNtcStsAndSnpshtData.CallLocation = {'MotAg5MeasPer1'};
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
MotAg5Cos = DataDict.IpSignal;
MotAg5Cos.LongName = 'Motor Angle 5 Cosine';
MotAg5Cos.Description = 'Cosine ADC Signal';
MotAg5Cos.DocUnits = 'Volt';
MotAg5Cos.EngDT = dt.float32;
MotAg5Cos.EngInit = 1.65;
MotAg5Cos.EngMin = 0;
MotAg5Cos.EngMax = 5;
MotAg5Cos.ReadIn = {'MotAg5MeasPer1','MotAg5MeasPer3'};
MotAg5Cos.ReadType = 'Rte';


MotAg5CosAdcFaild = DataDict.IpSignal;
MotAg5CosAdcFaild.LongName = 'Motor Angle 5 Cosine ADC Failed';
MotAg5CosAdcFaild.Description = [...
  'Status Indicating Cos ADC Failed or Not'];
MotAg5CosAdcFaild.DocUnits = 'Cnt';
MotAg5CosAdcFaild.EngDT = dt.lgc;
MotAg5CosAdcFaild.EngInit = 0;
MotAg5CosAdcFaild.EngMin = 0;
MotAg5CosAdcFaild.EngMax = 1;
MotAg5CosAdcFaild.ReadIn = {'MotAg5MeasPer1'};
MotAg5CosAdcFaild.ReadType = 'Rte';


MotAg5RawMecl = DataDict.IpSignal;
MotAg5RawMecl.LongName = 'Motor Angle 5 Raw Mechanical';
MotAg5RawMecl.Description = [...
  'Raw Motor Angle 5 Mechnanical without polarity correction read in 2ms periodic'];
MotAg5RawMecl.DocUnits = 'MotRev';
MotAg5RawMecl.EngDT = dt.u0p16;
MotAg5RawMecl.EngInit = 0;
MotAg5RawMecl.EngMin = 0;
MotAg5RawMecl.EngMax = 0.9999847412;
MotAg5RawMecl.ReadIn = {'MotAg5MeasPer3'};
MotAg5RawMecl.ReadType = 'Rte';


MotAg5Sin = DataDict.IpSignal;
MotAg5Sin.LongName = 'Motor Angle 5 Sine';
MotAg5Sin.Description = 'Sine ADC signal';
MotAg5Sin.DocUnits = 'Volt';
MotAg5Sin.EngDT = dt.float32;
MotAg5Sin.EngInit = 1.65;
MotAg5Sin.EngMin = 0;
MotAg5Sin.EngMax = 5;
MotAg5Sin.ReadIn = {'MotAg5MeasPer1','MotAg5MeasPer3'};
MotAg5Sin.ReadType = 'Rte';


MotAg5SinAdcFaild = DataDict.IpSignal;
MotAg5SinAdcFaild.LongName = 'Motor Angle 5 Sine ADC Failed';
MotAg5SinAdcFaild.Description = [...
  'Status Indicating sin ADC Failed or Not'];
MotAg5SinAdcFaild.DocUnits = 'Cnt';
MotAg5SinAdcFaild.EngDT = dt.lgc;
MotAg5SinAdcFaild.EngInit = 0;
MotAg5SinAdcFaild.EngMin = 0;
MotAg5SinAdcFaild.EngMax = 1;
MotAg5SinAdcFaild.ReadIn = {'MotAg5MeasPer1'};
MotAg5SinAdcFaild.ReadType = 'Rte';


MotCtrlMotAg5Cos = DataDict.IpSignal;
MotCtrlMotAg5Cos.LongName = 'Motor Control Motor Angle 5 Cosine';
MotCtrlMotAg5Cos.Description = [...
  'Cosine ADC Signal read in motor control periodic'];
MotCtrlMotAg5Cos.DocUnits = 'Volt';
MotCtrlMotAg5Cos.EngDT = dt.float32;
MotCtrlMotAg5Cos.EngInit = 1.65;
MotCtrlMotAg5Cos.EngMin = 0;
MotCtrlMotAg5Cos.EngMax = 5;
MotCtrlMotAg5Cos.ReadIn = {'MotAg5MeasPer2'};
MotCtrlMotAg5Cos.ReadType = 'NonRte';


MotCtrlMotAg5CosRtAmpRecpr = DataDict.IpSignal;
MotCtrlMotAg5CosRtAmpRecpr.LongName = 'Motor Control Motor Angle 5 Cosine Runtime Amplitude Reciprocal';
MotCtrlMotAg5CosRtAmpRecpr.Description = [...
  'Cosine amplitude reciprocal learned value'];
MotCtrlMotAg5CosRtAmpRecpr.DocUnits = 'IvsVolt';
MotCtrlMotAg5CosRtAmpRecpr.EngDT = dt.float32;
MotCtrlMotAg5CosRtAmpRecpr.EngInit = 2.5;
MotCtrlMotAg5CosRtAmpRecpr.EngMin = 0.32;
MotCtrlMotAg5CosRtAmpRecpr.EngMax = 5.1;
MotCtrlMotAg5CosRtAmpRecpr.ReadIn = {'MotAg5MeasPer2'};
MotCtrlMotAg5CosRtAmpRecpr.ReadType = 'NonRte';


MotCtrlMotAg5CosRtOffs = DataDict.IpSignal;
MotCtrlMotAg5CosRtOffs.LongName = 'Motor Control Motor Angle 5 Cosine Runtime Offset';
MotCtrlMotAg5CosRtOffs.Description = 'Cosine learned offset value';
MotCtrlMotAg5CosRtOffs.DocUnits = 'Volt';
MotCtrlMotAg5CosRtOffs.EngDT = dt.float32;
MotCtrlMotAg5CosRtOffs.EngInit = 2.5;
MotCtrlMotAg5CosRtOffs.EngMin = 0.25;
MotCtrlMotAg5CosRtOffs.EngMax = 3.75;
MotCtrlMotAg5CosRtOffs.ReadIn = {'MotAg5MeasPer2'};
MotCtrlMotAg5CosRtOffs.ReadType = 'NonRte';


MotCtrlMotAg5Polarity = DataDict.IpSignal;
MotCtrlMotAg5Polarity.LongName = 'Motor Control Motor Angle 5 Polarity';
MotCtrlMotAg5Polarity.Description = 'Motor Angle 5 Polarity';
MotCtrlMotAg5Polarity.DocUnits = 'Cnt';
MotCtrlMotAg5Polarity.EngDT = dt.s08;
MotCtrlMotAg5Polarity.EngInit = -1;
MotCtrlMotAg5Polarity.EngMin = -1;
MotCtrlMotAg5Polarity.EngMax = 1;
MotCtrlMotAg5Polarity.ReadIn = {'MotAg5MeasPer2'};
MotCtrlMotAg5Polarity.ReadType = 'NonRte';


MotCtrlMotAg5Sin = DataDict.IpSignal;
MotCtrlMotAg5Sin.LongName = 'Motor Control Motor Angle 5 Sine';
MotCtrlMotAg5Sin.Description = [...
  'Sine ADC signal read on motor control periodic'];
MotCtrlMotAg5Sin.DocUnits = 'Volt';
MotCtrlMotAg5Sin.EngDT = dt.float32;
MotCtrlMotAg5Sin.EngInit = 1.65;
MotCtrlMotAg5Sin.EngMin = 0;
MotCtrlMotAg5Sin.EngMax = 5;
MotCtrlMotAg5Sin.ReadIn = {'MotAg5MeasPer2'};
MotCtrlMotAg5Sin.ReadType = 'NonRte';


MotCtrlMotAg5SinRtAmpRecpr = DataDict.IpSignal;
MotCtrlMotAg5SinRtAmpRecpr.LongName = 'Motor Control Motor Angle 5 Sine Runtime Amplitude Reciprocal';
MotCtrlMotAg5SinRtAmpRecpr.Description = [...
  'Sine amplitude reciprocal learned value'];
MotCtrlMotAg5SinRtAmpRecpr.DocUnits = 'IvsVolt';
MotCtrlMotAg5SinRtAmpRecpr.EngDT = dt.float32;
MotCtrlMotAg5SinRtAmpRecpr.EngInit = 1;
MotCtrlMotAg5SinRtAmpRecpr.EngMin = 0.32;
MotCtrlMotAg5SinRtAmpRecpr.EngMax = 5.1;
MotCtrlMotAg5SinRtAmpRecpr.ReadIn = {'MotAg5MeasPer2'};
MotCtrlMotAg5SinRtAmpRecpr.ReadType = 'NonRte';


MotCtrlMotAg5SinRtOffs = DataDict.IpSignal;
MotCtrlMotAg5SinRtOffs.LongName = 'Motor Control Motor Angle 5 Sine Runtime Offset';
MotCtrlMotAg5SinRtOffs.Description = 'Sine learned offset value';
MotCtrlMotAg5SinRtOffs.DocUnits = 'Volt';
MotCtrlMotAg5SinRtOffs.EngDT = dt.float32;
MotCtrlMotAg5SinRtOffs.EngInit = 2.5;
MotCtrlMotAg5SinRtOffs.EngMin = 0.25;
MotCtrlMotAg5SinRtOffs.EngMax = 3.75;
MotCtrlMotAg5SinRtOffs.ReadIn = {'MotAg5MeasPer2'};
MotCtrlMotAg5SinRtOffs.ReadType = 'NonRte';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'Motor Velocity Motor Reference Frame';
MotVelMrf.Description = [...
  'Motor Velocity with respect to motor reference frame'];
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'MotAg5MeasPer3'};
MotVelMrf.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotAg5CosRtAmpRecpr = DataDict.OpSignal;
MotAg5CosRtAmpRecpr.LongName = 'Motor Angle 5 Cosine Runtime Amplitude Reciprocal';
MotAg5CosRtAmpRecpr.Description = [...
  'Motor Angle 5 cos amplitude learned value'];
MotAg5CosRtAmpRecpr.DocUnits = 'IvsVolt';
MotAg5CosRtAmpRecpr.SwcShoName = 'MotAg5Meas';
MotAg5CosRtAmpRecpr.EngDT = dt.float32;
MotAg5CosRtAmpRecpr.EngInit = 1;
MotAg5CosRtAmpRecpr.EngMin = 0.32;
MotAg5CosRtAmpRecpr.EngMax = 5.1;
MotAg5CosRtAmpRecpr.TestTolerance = 0;
MotAg5CosRtAmpRecpr.WrittenIn = {'MotAg5MeasPer1'};
MotAg5CosRtAmpRecpr.WriteType = 'Rte';


MotAg5CosRtOffs = DataDict.OpSignal;
MotAg5CosRtOffs.LongName = 'Motor Angle 5 Cosine Runtime Offset 2';
MotAg5CosRtOffs.Description = [...
  'Motor Angle 5 cos offset learned value'];
MotAg5CosRtOffs.DocUnits = 'Volt';
MotAg5CosRtOffs.SwcShoName = 'MotAg5Meas';
MotAg5CosRtOffs.EngDT = dt.float32;
MotAg5CosRtOffs.EngInit = 2.5;
MotAg5CosRtOffs.EngMin = 0.25;
MotAg5CosRtOffs.EngMax = 3.75;
MotAg5CosRtOffs.TestTolerance = 0;
MotAg5CosRtOffs.WrittenIn = {'MotAg5MeasPer1'};
MotAg5CosRtOffs.WriteType = 'Rte';


MotAg5MeclQlfr = DataDict.OpSignal;
MotAg5MeclQlfr.LongName = 'Motor Angle 5 Mechanical Qualifier';
MotAg5MeclQlfr.Description = 'Motor Angle 5 Mechanical Qualifier';
MotAg5MeclQlfr.DocUnits = 'Cnt';
MotAg5MeclQlfr.SwcShoName = 'MotAg5Meas';
MotAg5MeclQlfr.EngDT = enum.SigQlfr1;
MotAg5MeclQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
MotAg5MeclQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
MotAg5MeclQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotAg5MeclQlfr.TestTolerance = 0;
MotAg5MeclQlfr.WrittenIn = {'MotAg5MeasPer1'};
MotAg5MeclQlfr.WriteType = 'Rte';


MotAg5MeclRollgCntr = DataDict.OpSignal;
MotAg5MeclRollgCntr.LongName = 'Motor Angle 5 Mechanical Rolling Counter';
MotAg5MeclRollgCntr.Description = 'Motor Angle 5 Rolling Counter';
MotAg5MeclRollgCntr.DocUnits = 'Cnt';
MotAg5MeclRollgCntr.SwcShoName = 'MotAg5Meas';
MotAg5MeclRollgCntr.EngDT = dt.u08;
MotAg5MeclRollgCntr.EngInit = 0;
MotAg5MeclRollgCntr.EngMin = 0;
MotAg5MeclRollgCntr.EngMax = 255;
MotAg5MeclRollgCntr.TestTolerance = 0;
MotAg5MeclRollgCntr.WrittenIn = {'MotAg5MeasPer1'};
MotAg5MeclRollgCntr.WriteType = 'Rte';


MotAg5SinRtAmpRecpr = DataDict.OpSignal;
MotAg5SinRtAmpRecpr.LongName = 'Motor Angle 5 Sine Runtime Amplitude Reciprocal';
MotAg5SinRtAmpRecpr.Description = [...
  'Motor Angle 5 sine amplitude learned value'];
MotAg5SinRtAmpRecpr.DocUnits = 'IvsVolt';
MotAg5SinRtAmpRecpr.SwcShoName = 'MotAg5Meas';
MotAg5SinRtAmpRecpr.EngDT = dt.float32;
MotAg5SinRtAmpRecpr.EngInit = 1;
MotAg5SinRtAmpRecpr.EngMin = 0.32;
MotAg5SinRtAmpRecpr.EngMax = 5.1;
MotAg5SinRtAmpRecpr.TestTolerance = 0;
MotAg5SinRtAmpRecpr.WrittenIn = {'MotAg5MeasPer1'};
MotAg5SinRtAmpRecpr.WriteType = 'Rte';


MotAg5SinRtOffs = DataDict.OpSignal;
MotAg5SinRtOffs.LongName = 'Motor Angle 5 Sine Runtime Offset 2';
MotAg5SinRtOffs.Description = [...
  'Motor Angle 5 sine offset learned value'];
MotAg5SinRtOffs.DocUnits = 'Volt';
MotAg5SinRtOffs.SwcShoName = 'MotAg5Meas';
MotAg5SinRtOffs.EngDT = dt.float32;
MotAg5SinRtOffs.EngInit = 2.5;
MotAg5SinRtOffs.EngMin = 0.25;
MotAg5SinRtOffs.EngMax = 3.75;
MotAg5SinRtOffs.TestTolerance = 0;
MotAg5SinRtOffs.WrittenIn = {'MotAg5MeasPer1'};
MotAg5SinRtOffs.WriteType = 'Rte';


MotCtrlMotAgMeasTi = DataDict.OpSignal;
MotCtrlMotAgMeasTi.LongName = 'Motor Control Motor Angle Measurement Time';
MotCtrlMotAgMeasTi.Description = [...
  'Measurement time of Motor Angle 5 in counts representing uSec.'];
MotCtrlMotAgMeasTi.DocUnits = 'Cnt';
MotCtrlMotAgMeasTi.SwcShoName = 'MotAg5Meas';
MotCtrlMotAgMeasTi.EngDT = dt.u32;
MotCtrlMotAgMeasTi.EngInit = 0;
MotCtrlMotAgMeasTi.EngMin = 0;
MotCtrlMotAgMeasTi.EngMax = 4294967295;
MotCtrlMotAgMeasTi.TestTolerance = 0;
MotCtrlMotAgMeasTi.WrittenIn = {'MotAg5MeasPer2'};
MotCtrlMotAgMeasTi.WriteType = 'NonRte';


MotCtrlMotAg5Mecl = DataDict.OpSignal;
MotCtrlMotAg5Mecl.LongName = 'Motor Control Motor Angle 5 Mechanical';
MotCtrlMotAg5Mecl.Description = 'Motor Angle 5 Mechanical value';
MotCtrlMotAg5Mecl.DocUnits = 'MotRev';
MotCtrlMotAg5Mecl.SwcShoName = 'MotAg5Meas';
MotCtrlMotAg5Mecl.EngDT = dt.u0p16;
MotCtrlMotAg5Mecl.EngInit = 0;
MotCtrlMotAg5Mecl.EngMin = 0;
MotCtrlMotAg5Mecl.EngMax = 0.9999847412;
MotCtrlMotAg5Mecl.TestTolerance = 1.525878906e-05;
MotCtrlMotAg5Mecl.WrittenIn = {'MotAg5MeasPer2'};
MotCtrlMotAg5Mecl.WriteType = 'NonRte';


MotCtrlMotAg5RawMecl = DataDict.OpSignal;
MotCtrlMotAg5RawMecl.LongName = 'Motor Control Motor Angle 5 Raw Mechanical';
MotCtrlMotAg5RawMecl.Description = 'Raw Motor Angle 5 Mechanical value without polarity correction';
MotCtrlMotAg5RawMecl.DocUnits = 'MotRev';
MotCtrlMotAg5RawMecl.SwcShoName = 'MotAg5Meas';
MotCtrlMotAg5RawMecl.EngDT = dt.u0p16;
MotCtrlMotAg5RawMecl.EngInit = 0;
MotCtrlMotAg5RawMecl.EngMin = 0;
MotCtrlMotAg5RawMecl.EngMax = 0.9999847412;
MotCtrlMotAg5RawMecl.TestTolerance = 1.525878906e-05;
MotCtrlMotAg5RawMecl.WrittenIn = {'MotAg5MeasPer2'};
MotCtrlMotAg5RawMecl.WriteType = 'NonRte';

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
MotAg5PrtclOk = DataDict.IRV;
MotAg5PrtclOk.LongName = 'Sine Cosine Test Ok';
MotAg5PrtclOk.Description = 'Sine Cosine Test Ok';
MotAg5PrtclOk.DocUnits = 'Cnt';
MotAg5PrtclOk.EngDT = dt.lgc;
MotAg5PrtclOk.EngInit = 0;
MotAg5PrtclOk.EngMin = 0;
MotAg5PrtclOk.EngMax = 1;
MotAg5PrtclOk.ReadIn = {'MotAg5MeasPer3'};
MotAg5PrtclOk.WrittenIn = {'MotAg5MeasPer1'};


MotAg5RtVari = DataDict.IRV;
MotAg5RtVari.LongName = 'Motor Angle 5 Runtime Variable';
MotAg5RtVari.Description = 'Motor Angle 5 Runtime Variable';
MotAg5RtVari.DocUnits = 'Uls';
MotAg5RtVari.EngDT = struct.MotAgRtPrmRec1;
MotAg5RtVari.EngInit = [struct('SinRtOffs',2.5,'SinRtAmpRecpr',1,'CosRtOffs',2.5,'CosRtAmpRecpr',1,'SinGainCorrd',1,'CosGainCorrd',1,'SinOffsCorrd',0,'CosOffsCorrd',0,'CosSinNomRatio',1,'SinCosNomRatio',1,'RtToNomRatioLoLim',1,'RtToNomRatioHiLim',1,'PrevSinRtOffs',2.5,'PrevCosRtOffs',2.5)];
MotAg5RtVari.EngMin = [struct('SinRtOffs',0.25,'SinRtAmpRecpr',0.32,'CosRtOffs',0.25,'CosRtAmpRecpr',0.32,'SinGainCorrd',0.8,'CosGainCorrd',0.8,'SinOffsCorrd',-0.25,'CosOffsCorrd',-0.25,'CosSinNomRatio',0.1,'SinCosNomRatio',0.1,'RtToNomRatioLoLim',0.8,'RtToNomRatioHiLim',1,'PrevSinRtOffs',0.25,'PrevCosRtOffs',0.25)];
MotAg5RtVari.EngMax = [struct('SinRtOffs',3.75,'SinRtAmpRecpr',5.1,'CosRtOffs',3.75,'CosRtAmpRecpr',5.1,'SinGainCorrd',1.2,'CosGainCorrd',1.2,'SinOffsCorrd',0.25,'CosOffsCorrd',0.25,'CosSinNomRatio',10,'SinCosNomRatio',10,'RtToNomRatioLoLim',1,'RtToNomRatioHiLim',1.2,'PrevSinRtOffs',3.75,'PrevCosRtOffs',3.75)];
MotAg5RtVari.ReadIn = {'MotAg5MeasPer1'};
MotAg5RtVari.WrittenIn = {'MotAg5MeasPer3'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotAg5MeasAmpSqdMaxThd = DataDict.Calibration;
MotAg5MeasAmpSqdMaxThd.LongName = 'Motor Angle 5 Measurement Amplitude Squared Maximum Threshold';
MotAg5MeasAmpSqdMaxThd.Description = [...
  'Maximum Amplitude threshold for Sin/Cos signals'];
MotAg5MeasAmpSqdMaxThd.DocUnits = 'VoltSqd';
MotAg5MeasAmpSqdMaxThd.EngDT = dt.float32;
MotAg5MeasAmpSqdMaxThd.EngVal = 2.8;
MotAg5MeasAmpSqdMaxThd.EngMin = 1e-06;
MotAg5MeasAmpSqdMaxThd.EngMax = 6.25;
MotAg5MeasAmpSqdMaxThd.Cardinality = 'Cmn';
MotAg5MeasAmpSqdMaxThd.CustomerVisible = false;
MotAg5MeasAmpSqdMaxThd.Online = false;
MotAg5MeasAmpSqdMaxThd.Impact = 'H';
MotAg5MeasAmpSqdMaxThd.TuningOwner = 'FDD';
MotAg5MeasAmpSqdMaxThd.GraphLink = {''};
MotAg5MeasAmpSqdMaxThd.Monotony = 'None';
MotAg5MeasAmpSqdMaxThd.MaxGrad = 6.249999;
MotAg5MeasAmpSqdMaxThd.PortName = 'MotAg5MeasAmpSqdMaxThd';


MotAg5MeasAmpSqdMinThd = DataDict.Calibration;
MotAg5MeasAmpSqdMinThd.LongName = 'Motor Angle 5 Measurement Amplitude Squared Minimum Threshold';
MotAg5MeasAmpSqdMinThd.Description = [...
  'Minimum Amplitude threshold for Sin/Cos signals'];
MotAg5MeasAmpSqdMinThd.DocUnits = 'VoltSqd';
MotAg5MeasAmpSqdMinThd.EngDT = dt.float32;
MotAg5MeasAmpSqdMinThd.EngVal = 0.0625;
MotAg5MeasAmpSqdMinThd.EngMin = 1e-06;
MotAg5MeasAmpSqdMinThd.EngMax = 6.25;
MotAg5MeasAmpSqdMinThd.Cardinality = 'Cmn';
MotAg5MeasAmpSqdMinThd.CustomerVisible = false;
MotAg5MeasAmpSqdMinThd.Online = false;
MotAg5MeasAmpSqdMinThd.Impact = 'H';
MotAg5MeasAmpSqdMinThd.TuningOwner = 'FDD';
MotAg5MeasAmpSqdMinThd.GraphLink = {''};
MotAg5MeasAmpSqdMinThd.Monotony = 'None';
MotAg5MeasAmpSqdMinThd.MaxGrad = 6.249999;
MotAg5MeasAmpSqdMinThd.PortName = 'MotAg5MeasAmpSqdMinThd';


MotAg5MeasLpFilFrq = DataDict.Calibration;
MotAg5MeasLpFilFrq.LongName = 'Motor Angle 5 Measurement Low Pass Filter Frequency';
MotAg5MeasLpFilFrq.Description = [...
  'Motor Angle 5 Measurement Low pass filter frequency in Hertz'];
MotAg5MeasLpFilFrq.DocUnits = 'Hz';
MotAg5MeasLpFilFrq.EngDT = dt.float32;
MotAg5MeasLpFilFrq.EngVal = 0.1;
MotAg5MeasLpFilFrq.EngMin = 0;
MotAg5MeasLpFilFrq.EngMax = 10;
MotAg5MeasLpFilFrq.Cardinality = 'Cmn';
MotAg5MeasLpFilFrq.CustomerVisible = false;
MotAg5MeasLpFilFrq.Online = false;
MotAg5MeasLpFilFrq.Impact = 'H';
MotAg5MeasLpFilFrq.TuningOwner = 'FDD';
MotAg5MeasLpFilFrq.GraphLink = {''};
MotAg5MeasLpFilFrq.Monotony = 'None';
MotAg5MeasLpFilFrq.MaxGrad = 10;
MotAg5MeasLpFilFrq.PortName = 'MotAg5MeasLpFilFrq';


MotAg5MeasOffs = DataDict.Calibration;
MotAg5MeasOffs.LongName = 'Motor Angle 5 Measurement Offset';
MotAg5MeasOffs.Description = [...
  'An offset applied to motor angle used for synchronization'];
MotAg5MeasOffs.DocUnits = 'MotRev';
MotAg5MeasOffs.EngDT = dt.u0p16;
MotAg5MeasOffs.EngVal = 0;
MotAg5MeasOffs.EngMin = 0;
MotAg5MeasOffs.EngMax = 0.9999847412;
MotAg5MeasOffs.Cardinality = 'Cmn';
MotAg5MeasOffs.CustomerVisible = false;
MotAg5MeasOffs.Online = false;
MotAg5MeasOffs.Impact = 'H';
MotAg5MeasOffs.TuningOwner = 'FDD';
MotAg5MeasOffs.GraphLink = {''};
MotAg5MeasOffs.Monotony = 'None';
MotAg5MeasOffs.MaxGrad = 0.9999847412;
MotAg5MeasOffs.PortName = 'MotAg5MeasOffs';


MotAg5MeasRtAmpRecprLim = DataDict.Calibration;
MotAg5MeasRtAmpRecprLim.LongName = 'Motor Angle 5 Measurement Run Time Amplitude Reciprocal Limit';
MotAg5MeasRtAmpRecprLim.Description = [...
  'Limit on the amount of amplitude that is allowed to be learned'];
MotAg5MeasRtAmpRecprLim.DocUnits = 'IvsVolt';
MotAg5MeasRtAmpRecprLim.EngDT = dt.float32;
MotAg5MeasRtAmpRecprLim.EngVal = 0.122;
MotAg5MeasRtAmpRecprLim.EngMin = 0;
MotAg5MeasRtAmpRecprLim.EngMax = 0.25;
MotAg5MeasRtAmpRecprLim.Cardinality = 'Cmn';
MotAg5MeasRtAmpRecprLim.CustomerVisible = false;
MotAg5MeasRtAmpRecprLim.Online = false;
MotAg5MeasRtAmpRecprLim.Impact = 'H';
MotAg5MeasRtAmpRecprLim.TuningOwner = 'FDD';
MotAg5MeasRtAmpRecprLim.GraphLink = {''};
MotAg5MeasRtAmpRecprLim.Monotony = 'None';
MotAg5MeasRtAmpRecprLim.MaxGrad = 0.25;
MotAg5MeasRtAmpRecprLim.PortName = 'MotAg5MeasRtAmpRecprLim';


MotAg5MeasRtFilEnaThd = DataDict.Calibration;
MotAg5MeasRtFilEnaThd.LongName = 'Motor Angle 5 Measurement Runtime Filter Enable Threshold';
MotAg5MeasRtFilEnaThd.Description = [...
  'Motor Angle 5 Measurement Runtime Filter Enable Threshold'];
MotAg5MeasRtFilEnaThd.DocUnits = 'Uls';
MotAg5MeasRtFilEnaThd.EngDT = dt.float32;
MotAg5MeasRtFilEnaThd.EngVal = 0.99;
MotAg5MeasRtFilEnaThd.EngMin = 0.8;
MotAg5MeasRtFilEnaThd.EngMax = 1;
MotAg5MeasRtFilEnaThd.Cardinality = 'Cmn';
MotAg5MeasRtFilEnaThd.CustomerVisible = false;
MotAg5MeasRtFilEnaThd.Online = false;
MotAg5MeasRtFilEnaThd.Impact = 'H';
MotAg5MeasRtFilEnaThd.TuningOwner = 'FDD';
MotAg5MeasRtFilEnaThd.GraphLink = {''};
MotAg5MeasRtFilEnaThd.Monotony = 'None';
MotAg5MeasRtFilEnaThd.MaxGrad = 1;
MotAg5MeasRtFilEnaThd.PortName = 'MotAg5MeasRtFilEnaThd';


MotAg5MeasRtMotVelFilEnaThd = DataDict.Calibration;
MotAg5MeasRtMotVelFilEnaThd.LongName = 'Motor Angle 5 Measurement Runtime Motor Velocity Filter Enable Threshold';
MotAg5MeasRtMotVelFilEnaThd.Description = [...
  'Motor Angle 5 Measurement Motor Velocity Enable Threshold for LPF Filt' ...
  'er'];
MotAg5MeasRtMotVelFilEnaThd.DocUnits = 'MotRadPerSec';
MotAg5MeasRtMotVelFilEnaThd.EngDT = dt.float32;
MotAg5MeasRtMotVelFilEnaThd.EngVal = 100;
MotAg5MeasRtMotVelFilEnaThd.EngMin = 0;
MotAg5MeasRtMotVelFilEnaThd.EngMax = 1000;
MotAg5MeasRtMotVelFilEnaThd.Cardinality = 'Cmn';
MotAg5MeasRtMotVelFilEnaThd.CustomerVisible = false;
MotAg5MeasRtMotVelFilEnaThd.Online = false;
MotAg5MeasRtMotVelFilEnaThd.Impact = 'H';
MotAg5MeasRtMotVelFilEnaThd.TuningOwner = 'FDD';
MotAg5MeasRtMotVelFilEnaThd.GraphLink = {''};
MotAg5MeasRtMotVelFilEnaThd.Monotony = 'None';
MotAg5MeasRtMotVelFilEnaThd.MaxGrad = 1000;
MotAg5MeasRtMotVelFilEnaThd.PortName = 'MotAg5MeasRtMotVelFilEnaThd';


MotAg5MeasRtOffsLim = DataDict.Calibration;
MotAg5MeasRtOffsLim.LongName = 'Motor Angle 5 Measurement Runtime Offset Limit';
MotAg5MeasRtOffsLim.Description = [...
  'Limit on amount of offset that is allowed to be learned'];
MotAg5MeasRtOffsLim.DocUnits = 'Volt';
MotAg5MeasRtOffsLim.EngDT = dt.float32;
MotAg5MeasRtOffsLim.EngVal = 0.1;
MotAg5MeasRtOffsLim.EngMin = 0;
MotAg5MeasRtOffsLim.EngMax = 0.5;
MotAg5MeasRtOffsLim.Cardinality = 'Cmn';
MotAg5MeasRtOffsLim.CustomerVisible = false;
MotAg5MeasRtOffsLim.Online = false;
MotAg5MeasRtOffsLim.Impact = 'H';
MotAg5MeasRtOffsLim.TuningOwner = 'FDD';
MotAg5MeasRtOffsLim.GraphLink = {''};
MotAg5MeasRtOffsLim.Monotony = 'None';
MotAg5MeasRtOffsLim.MaxGrad = 0.5;
MotAg5MeasRtOffsLim.PortName = 'MotAg5MeasRtOffsLim';


MotAg5MeasRtToNomRatLim = DataDict.Calibration;
MotAg5MeasRtToNomRatLim.LongName = 'Motor Angle 5 Measurement Runtime to Nominal Ratio Limit';
MotAg5MeasRtToNomRatLim.Description = [...
  'Sine/Cosine Runtime to Nominal Ratio Limit'];
MotAg5MeasRtToNomRatLim.DocUnits = 'Uls';
MotAg5MeasRtToNomRatLim.EngDT = dt.float32;
MotAg5MeasRtToNomRatLim.EngVal = 0.1;
MotAg5MeasRtToNomRatLim.EngMin = 0;
MotAg5MeasRtToNomRatLim.EngMax = 0.2;
MotAg5MeasRtToNomRatLim.Cardinality = 'Cmn';
MotAg5MeasRtToNomRatLim.CustomerVisible = false;
MotAg5MeasRtToNomRatLim.Online = false;
MotAg5MeasRtToNomRatLim.Impact = 'H';
MotAg5MeasRtToNomRatLim.TuningOwner = 'FDD';
MotAg5MeasRtToNomRatLim.GraphLink = {''};
MotAg5MeasRtToNomRatLim.Monotony = 'None';
MotAg5MeasRtToNomRatLim.MaxGrad = 0.2;
MotAg5MeasRtToNomRatLim.PortName = 'MotAg5MeasRtToNomRatLim';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
MotAg5EolPrm = DataDict.NVM;
MotAg5EolPrm.LongName = 'Motor Angle 5 EOL Parameter';
MotAg5EolPrm.Description = 'Motor Angle End of Line Parameters';
MotAg5EolPrm.DocUnits = 'Uls';
MotAg5EolPrm.EngDT = struct.MotAgEolPrmRec1;
MotAg5EolPrm.EngInit = [];
MotAg5EolPrm.EngMin = [struct('SinOffs',1,'CosOffs',1,'SinAmpRecpr',0.4,'CosAmpRecpr',0.4,'SinDelta',-0.1736,'SinHrmncTbl',-0.015625,'CosHrmncTbl',-0.015625,'SinGainCorrd',0.8,'CosGainCorrd',0.8,'SinOffsCorrd',-0.25,'CosOffsCorrd',-0.25,'CosDeltaRecpr',0)];
MotAg5EolPrm.EngMax = [struct('SinOffs',3,'CosOffs',2,'SinAmpRecpr',4,'CosAmpRecpr',4,'SinDelta',0.1736,'SinHrmncTbl',0.01550293,'CosHrmncTbl',0.01550293,'SinGainCorrd',1.2,'CosGainCorrd',1.2,'SinOffsCorrd',0.25,'CosOffsCorrd',0.25,'CosDeltaRecpr',1)];
MotAg5EolPrm.CustomerVisible = false;
MotAg5EolPrm.Impact = 'H';
MotAg5EolPrm.TuningOwner = 'FDD';
MotAg5EolPrm.InitRowCol = [1  1];


MotAg5StVari = DataDict.NVM;
MotAg5StVari.LongName = 'Motor Angle State Variable';
MotAg5StVari.Description = [...
  'Motor Angle Low Pass Filter State variables'];
MotAg5StVari.DocUnits = 'Uls';
MotAg5StVari.EngDT = struct.MotAgStVariRec1;
MotAg5StVari.EngInit = [];
MotAg5StVari.EngMin = [struct('MotAgSinMax',0.25,'MotAgSinMin',-2.5,'MotAgCosMax',0.25,'MotAgCosMin',-2.5)];
MotAg5StVari.EngMax = [struct('MotAgSinMax',2.5,'MotAgSinMin',-0.25,'MotAgCosMax',2.5,'MotAgCosMin',-0.25)];
MotAg5StVari.CustomerVisible = false;
MotAg5StVari.Impact = 'H';
MotAg5StVari.TuningOwner = 'FDD';
MotAg5StVari.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotAg5MeasAmpVal = DataDict.Display;
dMotAg5MeasAmpVal.LongName = 'Motor Angle 5 Amplitude Value';
dMotAg5MeasAmpVal.Description = 'Sine and Cosine Amplitude value';
dMotAg5MeasAmpVal.DocUnits = 'VoltSqd';
dMotAg5MeasAmpVal.EngDT = dt.float32;
dMotAg5MeasAmpVal.EngMin = 0;
dMotAg5MeasAmpVal.EngMax = 5.76;
dMotAg5MeasAmpVal.InitRowCol = [1  1];

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotAg5CosMaxLpFil = DataDict.PIM;
MotAg5CosMaxLpFil.LongName = 'Cosine Maximum Low Pass Filter';
MotAg5CosMaxLpFil.Description = [...
  'State variable for Cosine Maximum Low Pass Filter'];
MotAg5CosMaxLpFil.DocUnits = 'Volt';
MotAg5CosMaxLpFil.EngDT = struct.FilLpRec1;
MotAg5CosMaxLpFil.EngMin = [struct('FilSt',0,'FilGain',0)];
MotAg5CosMaxLpFil.EngMax = [struct('FilSt',2.5,'FilGain',1)];
MotAg5CosMaxLpFil.InitRowCol = [1  1];


MotAg5CosMinLpFil = DataDict.PIM;
MotAg5CosMinLpFil.LongName = 'Cosine Minimum Low Pass Filter';
MotAg5CosMinLpFil.Description = [...
  'State variable for Cosine Minimum Low Pass Filter'];
MotAg5CosMinLpFil.DocUnits = 'Volt';
MotAg5CosMinLpFil.EngDT = struct.FilLpRec1;
MotAg5CosMinLpFil.EngMin = [struct('FilSt',-2.5,'FilGain',0)];
MotAg5CosMinLpFil.EngMax = [struct('FilSt',0,'FilGain',1)];
MotAg5CosMinLpFil.InitRowCol = [1  1];


MotAg5NvmFltEna = DataDict.PIM;
MotAg5NvmFltEna.LongName = 'Motor Angle 5 Non volatile memory Fault Enable';
MotAg5NvmFltEna.Description = 'status indicating Nvm failure';
MotAg5NvmFltEna.DocUnits = 'Cnt';
MotAg5NvmFltEna.EngDT = dt.lgc;
MotAg5NvmFltEna.EngMin = 0;
MotAg5NvmFltEna.EngMax = 1;
MotAg5NvmFltEna.InitRowCol = [1  1];


MotAg5PrevRollgCntr = DataDict.PIM;
MotAg5PrevRollgCntr.LongName = 'Motor Angle 5 Previous Rolling Counter';
MotAg5PrevRollgCntr.Description = 'Rolling Counter Previous value.';
MotAg5PrevRollgCntr.DocUnits = 'Cnt';
MotAg5PrevRollgCntr.EngDT = dt.u08;
MotAg5PrevRollgCntr.EngMin = 0;
MotAg5PrevRollgCntr.EngMax = 255;
MotAg5PrevRollgCntr.InitRowCol = [1  1];


MotAg5RtPrm = DataDict.PIM;
MotAg5RtPrm.LongName = 'Motor Angle Runtime Parameter';
MotAg5RtPrm.Description = 'Motor Angle Runtime Parameter';
MotAg5RtPrm.DocUnits = 'Uls';
MotAg5RtPrm.EngDT = struct.MotAgRtPrmRec1;
MotAg5RtPrm.EngMin = [struct('SinRtOffs',1,'SinRtAmpRecpr',0.32,'CosRtOffs',1,'CosRtAmpRecpr',0.32,'SinGainCorrd',0.8,'CosGainCorrd',0.8,'SinOffsCorrd',-0.25,'CosOffsCorrd',-0.25,'CosSinNomRatio',0.1,'SinCosNomRatio',0.1,'RtToNomRatioLoLim',0.8,'RtToNomRatioHiLim',1,'PrevSinRtOffs',1,'PrevCosRtOffs',1)];
MotAg5RtPrm.EngMax = [struct('SinRtOffs',3,'SinRtAmpRecpr',4,'CosRtOffs',3,'CosRtAmpRecpr',4,'SinGainCorrd',1.2,'CosGainCorrd',1.2,'SinOffsCorrd',0.25,'CosOffsCorrd',0.25,'CosSinNomRatio',10,'SinCosNomRatio',10,'RtToNomRatioLoLim',1,'RtToNomRatioHiLim',1.2,'PrevSinRtOffs',3,'PrevCosRtOffs',3)];
MotAg5RtPrm.InitRowCol = [1  1];


MotAg5SinMaxLpFil = DataDict.PIM;
MotAg5SinMaxLpFil.LongName = 'Sine Maximum Low Pass Filter';
MotAg5SinMaxLpFil.Description = [...
  'State variable for Sine Maximum Low Pass Filter'];
MotAg5SinMaxLpFil.DocUnits = 'Volt';
MotAg5SinMaxLpFil.EngDT = struct.FilLpRec1;
MotAg5SinMaxLpFil.EngMin = [struct('FilSt',0,'FilGain',0)];
MotAg5SinMaxLpFil.EngMax = [struct('FilSt',2.5,'FilGain',1)];
MotAg5SinMaxLpFil.InitRowCol = [1  1];


MotAg5SinMinLpFil = DataDict.PIM;
MotAg5SinMinLpFil.LongName = 'Sine Minimum Low Pass Filter';
MotAg5SinMinLpFil.Description = [...
  'State variable for Sine Minimum Low Pass Filter'];
MotAg5SinMinLpFil.DocUnits = 'Volt';
MotAg5SinMinLpFil.EngDT = struct.FilLpRec1;
MotAg5SinMinLpFil.EngMin = [struct('FilSt',-2.5,'FilGain',0)];
MotAg5SinMinLpFil.EngMax = [struct('FilSt',0,'FilGain',1)];
MotAg5SinMinLpFil.InitRowCol = [1  1];


PrevMotAg5Mecl = DataDict.PIM;
PrevMotAg5Mecl.LongName = 'Previous Motor Angle 5 Mechanical';
PrevMotAg5Mecl.Description = 'Previous Motor Angle 5 Mechanical';
PrevMotAg5Mecl.DocUnits = 'MotRev';
PrevMotAg5Mecl.EngDT = dt.u0p16;
PrevMotAg5Mecl.EngMin = 0;
PrevMotAg5Mecl.EngMax = 0.9999847412;
PrevMotAg5Mecl.InitRowCol = [1  1];



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


MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.LongName = 'Motor Angle 5 Protocol Fault NTC Number';
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.Description = [...
  'Motor Angle 5 Protocol Fault NTC Number'];
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X083;
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X083;
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X08A;
MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM.Define = 'Global';


MOTAG5PRTCLFLTFAILSTEP_CNT_U16 = DataDict.Constant;
MOTAG5PRTCLFLTFAILSTEP_CNT_U16.LongName = 'Motor Angle 5 Protocol Fault Fail Step';
MOTAG5PRTCLFLTFAILSTEP_CNT_U16.Description = [...
  'Debounce Fail Step for motor angle Diagnostic'];
MOTAG5PRTCLFLTFAILSTEP_CNT_U16.DocUnits = 'Cnt';
MOTAG5PRTCLFLTFAILSTEP_CNT_U16.EngDT = dt.u16;
MOTAG5PRTCLFLTFAILSTEP_CNT_U16.EngVal = 3276;
MOTAG5PRTCLFLTFAILSTEP_CNT_U16.Define = 'Local';


MOTAG5PRTCLFLTPASSSTEP_CNT_U16 = DataDict.Constant;
MOTAG5PRTCLFLTPASSSTEP_CNT_U16.LongName = 'Motor Angle 5 Protocol Faul Pass Step';
MOTAG5PRTCLFLTPASSSTEP_CNT_U16.Description = [...
  'Debounce Pass Step for Motor Angle 0 Diagnostic'];
MOTAG5PRTCLFLTPASSSTEP_CNT_U16.DocUnits = 'Cnt';
MOTAG5PRTCLFLTPASSSTEP_CNT_U16.EngDT = dt.u16;
MOTAG5PRTCLFLTPASSSTEP_CNT_U16.EngVal = 655;
MOTAG5PRTCLFLTPASSSTEP_CNT_U16.Define = 'Local';


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
MotAg5PrtclFlt = DataDict.NTC;
MotAg5PrtclFlt.NtcNr = 'MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM';
MotAg5PrtclFlt.NtcTyp = 'Deb';
MotAg5PrtclFlt.LongName = 'Motor Angle 5 Protocol Fault';
MotAg5PrtclFlt.Description = 'The NTC flag that is used to indicate a motor angle 5 fault';
MotAg5PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MotAg5PrtclFlt.NtcStInfo.Bit0Descr = 'ADC signals out of range low';
MotAg5PrtclFlt.NtcStInfo.Bit1Descr = 'ADC signals out of range high';
MotAg5PrtclFlt.NtcStInfo.Bit2Descr = 'NvM failure';
MotAg5PrtclFlt.NtcStInfo.Bit3Descr = 'Adc Failure';
MotAg5PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
MotAg5PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
MotAg5PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
MotAg5PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
