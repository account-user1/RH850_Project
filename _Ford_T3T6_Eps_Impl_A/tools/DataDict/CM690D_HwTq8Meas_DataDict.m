%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 04-Oct-2017 17:54:51       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM690D = DataDict.FDD;
CM690D.Version = '2.1.X';
CM690D.LongName = 'Handwheel Torque 8 Measurement';
CM690D.ShoName  = 'HwTq8Meas';
CM690D.DesignASIL = 'D';
CM690D.Description = [...
  'Handwheel Torque 8 Measurement function using SENT protocol'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTq8MeasInit1 = DataDict.Runnable;
HwTq8MeasInit1.Context = 'Rte';
HwTq8MeasInit1.TimeStep = 0;
HwTq8MeasInit1.Description = 'Software Init';

HwTq8MeasPer1 = DataDict.Runnable;
HwTq8MeasPer1.Context = 'Rte';
HwTq8MeasPer1.TimeStep = 0.002;
HwTq8MeasPer1.Description = 'HwTq Computation';

HwTq8MeasPer2 = DataDict.Runnable;
HwTq8MeasPer2.Context = 'Rte';
HwTq8MeasPer2.TimeStep = 0.1;
HwTq8MeasPer2.Description = 'Trim Performed Algorithm';

HwTq8AutTrim = DataDict.SrvRunnable;
HwTq8AutTrim.Context = 'Rte';
HwTq8AutTrim.Description = 'Auto Trim Service function';
HwTq8AutTrim.Return = DataDict.CSReturn;
HwTq8AutTrim.Return.Type = 'None';
HwTq8AutTrim.Return.Min = [];
HwTq8AutTrim.Return.Max = [];
HwTq8AutTrim.Return.TestTolerance = [];

HwTq8ClrTrim = DataDict.SrvRunnable;
HwTq8ClrTrim.Context = 'Rte';
HwTq8ClrTrim.Description = 'Clear Trim Service function';
HwTq8ClrTrim.Return = DataDict.CSReturn;
HwTq8ClrTrim.Return.Type = 'None';
HwTq8ClrTrim.Return.Min = [];
HwTq8ClrTrim.Return.Max = [];
HwTq8ClrTrim.Return.TestTolerance = [];

HwTq8ReadTrim = DataDict.SrvRunnable;
HwTq8ReadTrim.Context = 'Rte';
HwTq8ReadTrim.Description = 'Read Trim Service function';
HwTq8ReadTrim.Return = DataDict.CSReturn;
HwTq8ReadTrim.Return.Type = 'None';
HwTq8ReadTrim.Return.Min = [];
HwTq8ReadTrim.Return.Max = [];
HwTq8ReadTrim.Return.TestTolerance = [];
HwTq8ReadTrim.Arguments(1) = DataDict.CSArguments;
HwTq8ReadTrim.Arguments(1).Name = 'HwTqReadTrimData';
HwTq8ReadTrim.Arguments(1).EngDT = dt.float32;
HwTq8ReadTrim.Arguments(1).EngMin = -10;
HwTq8ReadTrim.Arguments(1).EngMax = 10;
HwTq8ReadTrim.Arguments(1).TestTolerance = 0.05;
HwTq8ReadTrim.Arguments(1).Units = 'HwNm';
HwTq8ReadTrim.Arguments(1).Direction = 'Out';
HwTq8ReadTrim.Arguments(1).InitRowCol = [1  1];
HwTq8ReadTrim.Arguments(1).Description = 'Read Trim Data';

HwTq8TrigStrt = DataDict.SrvRunnable;
HwTq8TrigStrt.Context = 'Both';
HwTq8TrigStrt.Description = 'Triggering Start Service function';
HwTq8TrigStrt.Return = DataDict.CSReturn;
HwTq8TrigStrt.Return.Type = 'None';
HwTq8TrigStrt.Return.Min = [];
HwTq8TrigStrt.Return.Max = [];
HwTq8TrigStrt.Return.TestTolerance = [];

HwTq8TrimPrfmdSts = DataDict.SrvRunnable;
HwTq8TrimPrfmdSts.Context = 'Rte';
HwTq8TrimPrfmdSts.Description = 'Trim Performed Service function';
HwTq8TrimPrfmdSts.Return = DataDict.CSReturn;
HwTq8TrimPrfmdSts.Return.Type = 'None';
HwTq8TrimPrfmdSts.Return.Min = [];
HwTq8TrimPrfmdSts.Return.Max = [];
HwTq8TrimPrfmdSts.Return.TestTolerance = [];
HwTq8TrimPrfmdSts.Arguments(1) = DataDict.CSArguments;
HwTq8TrimPrfmdSts.Arguments(1).Name = 'HwTqOffsTrimPrfmdStsData';
HwTq8TrimPrfmdSts.Arguments(1).EngDT = dt.lgc;
HwTq8TrimPrfmdSts.Arguments(1).EngMin = 0;
HwTq8TrimPrfmdSts.Arguments(1).EngMax = 1;
HwTq8TrimPrfmdSts.Arguments(1).TestTolerance = 0;
HwTq8TrimPrfmdSts.Arguments(1).Units = 'Lgc';
HwTq8TrimPrfmdSts.Arguments(1).Direction = 'Out';
HwTq8TrimPrfmdSts.Arguments(1).InitRowCol = [1  1];
HwTq8TrimPrfmdSts.Arguments(1).Description = 'Read Off set Trim Performed Status';

HwTq8WrTrim = DataDict.SrvRunnable;
HwTq8WrTrim.Context = 'Rte';
HwTq8WrTrim.Description = 'Write Trim Service function';
HwTq8WrTrim.Return = DataDict.CSReturn;
HwTq8WrTrim.Return.Type = 'None';
HwTq8WrTrim.Return.Min = [];
HwTq8WrTrim.Return.Max = [];
HwTq8WrTrim.Return.TestTolerance = [];
HwTq8WrTrim.Arguments(1) = DataDict.CSArguments;
HwTq8WrTrim.Arguments(1).Name = 'HwTqWrOffsTrimData';
HwTq8WrTrim.Arguments(1).EngDT = dt.float32;
HwTq8WrTrim.Arguments(1).EngMin = -10;
HwTq8WrTrim.Arguments(1).EngMax = 10;
HwTq8WrTrim.Arguments(1).Units = 'HwNm';
HwTq8WrTrim.Arguments(1).Direction = 'In';
HwTq8WrTrim.Arguments(1).InitRowCol = [1  1];
HwTq8WrTrim.Arguments(1).Description = 'Write Trim Data';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
CnvSnpshtData_u08 = DataDict.Client;
CnvSnpshtData_u08.CallLocation = {'HwTq8MeasPer1'};
CnvSnpshtData_u08.Description = [...
  'Convert a uint08 data type to a uint32 data type'];
CnvSnpshtData_u08.Return = DataDict.CSReturn;
CnvSnpshtData_u08.Return.Type = 'None';
CnvSnpshtData_u08.Return.Min = [];
CnvSnpshtData_u08.Return.Max = [];
CnvSnpshtData_u08.Return.TestTolerance = [];
CnvSnpshtData_u08.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_u08.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_u08.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_u08.Arguments(1).EngMin = 0;
CnvSnpshtData_u08.Arguments(1).EngMax = 255;
CnvSnpshtData_u08.Arguments(1).TestTolerance = 0;
CnvSnpshtData_u08.Arguments(1).Units = 'Cnt';
CnvSnpshtData_u08.Arguments(1).Direction = 'Out';
CnvSnpshtData_u08.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_u08.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_u08.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_u08.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_u08.Arguments(2).EngDT = dt.u08;
CnvSnpshtData_u08.Arguments(2).EngMin = 0;
CnvSnpshtData_u08.Arguments(2).EngMax = 255;
CnvSnpshtData_u08.Arguments(2).Units = 'Cnt';
CnvSnpshtData_u08.Arguments(2).Direction = 'In';
CnvSnpshtData_u08.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_u08.Arguments(2).Description = [...
  'Input for converting Snapshot data of type unsigned08'];


FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'HwTq8MeasPer1'};
FltInj_f32.Description = [...
  'Fault Injection on Handwheel Torque'];
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
FltInj_f32.Arguments(1).TestTolerance = 999;
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
FltInj_f32.Arguments(2).Description = '';


FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'HwTq8MeasPer1'};
FltInj_u08.Description = 'Fault Injection for Protocol Fault';
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
FltInj_u08.Arguments(1).Units = 'Uls';
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
GetNtcQlfrSts.CallLocation = {'HwTq8MeasPer1'};
GetNtcQlfrSts.Description = 'Qualifier Status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = 'Get NTC qualifier Status';
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
GetNtcQlfrSts.Arguments(2).Description = 'Get Qualifier Status';


GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'HwTq8MeasInit1','HwTq8TrigStrt'};
GetRefTmr1MicroSec32bit.Description = 'Timer';
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
GetRefTmr1MicroSec32bit.Arguments(1).TestTolerance = 999;
GetRefTmr1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr1MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr1MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr1MicroSec32bit.Arguments(1).Description = '';


GetTiSpan1MicroSec32bit = DataDict.Client;
GetTiSpan1MicroSec32bit.CallLocation = {'HwTq8MeasInit1','HwTq8TrigStrt'};
GetTiSpan1MicroSec32bit.Description = 'Timer';
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
GetTiSpan1MicroSec32bit.Arguments(1).Description = '';
GetTiSpan1MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan1MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan1MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan1MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan1MicroSec32bit.Arguments(2).Description = '';


HwTq8Offs_SetRamBlockStatus = DataDict.Client;
HwTq8Offs_SetRamBlockStatus.CallLocation = {'HwTq8AutTrim','HwTq8ClrTrim','HwTq8WrTrim'};
HwTq8Offs_SetRamBlockStatus.Description = 'NVM Block Status';
HwTq8Offs_SetRamBlockStatus.Return = DataDict.CSReturn;
HwTq8Offs_SetRamBlockStatus.Return.Type = 'Standard';
HwTq8Offs_SetRamBlockStatus.Return.Min = 0;
HwTq8Offs_SetRamBlockStatus.Return.Max = 1;
HwTq8Offs_SetRamBlockStatus.Return.TestTolerance = 0;
HwTq8Offs_SetRamBlockStatus.Return.Description = 'Set RAM block Status';
HwTq8Offs_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwTq8Offs_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwTq8Offs_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwTq8Offs_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwTq8Offs_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwTq8Offs_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwTq8Offs_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwTq8Offs_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
HwTq8Offs_SetRamBlockStatus.Arguments(1).Description = 'Set RAM block Status';


IoHwAb_SetFctPrphlHwTq8 = DataDict.Client;
IoHwAb_SetFctPrphlHwTq8.CallLocation = {'HwTq8MeasInit1'};
IoHwAb_SetFctPrphlHwTq8.Description = 'IO';
IoHwAb_SetFctPrphlHwTq8.Return = DataDict.CSReturn;
IoHwAb_SetFctPrphlHwTq8.Return.Type = 'Standard';
IoHwAb_SetFctPrphlHwTq8.Return.Min = 0;
IoHwAb_SetFctPrphlHwTq8.Return.Max = 1;
IoHwAb_SetFctPrphlHwTq8.Return.TestTolerance = 0;
IoHwAb_SetFctPrphlHwTq8.Return.Description = 'Input Output Pin Config';


SetNtcStsAndSnpshtData = DataDict.Client;
SetNtcStsAndSnpshtData.CallLocation = {'HwTq8MeasPer1','HwTq8MeasPer2'};
SetNtcStsAndSnpshtData.Description = 'Set NTC Status And Snapshot Data';
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
HwTq8Polarity = DataDict.IpSignal;
HwTq8Polarity.LongName = 'HandWheel Torque 8 Polarity';
HwTq8Polarity.Description = 'Tq Polarity';
HwTq8Polarity.DocUnits = 'Uls';
HwTq8Polarity.EngDT = dt.s08;
HwTq8Polarity.EngInit = 1;
HwTq8Polarity.EngMin = -1;
HwTq8Polarity.EngMax = 1;
HwTq8Polarity.ReadIn = {'HwTq8MeasPer1'};
HwTq8Polarity.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTq8 = DataDict.OpSignal;
HwTq8.LongName = 'HandWheel Torque 8';
HwTq8.Description = 'HandWheel Torque 8 Output';
HwTq8.DocUnits = 'HwNwtMtr';
HwTq8.SwcShoName = 'HwTq8Meas';
HwTq8.EngDT = dt.float32;
HwTq8.EngInit = 0;
HwTq8.EngMin = -10;
HwTq8.EngMax = 10;
HwTq8.TestTolerance = 0.0049;
HwTq8.WrittenIn = {'HwTq8MeasPer1'};
HwTq8.WriteType = 'Rte';


HwTq8Qlfr = DataDict.OpSignal;
HwTq8Qlfr.LongName = 'Handwheel Torque 8 Qualifier';
HwTq8Qlfr.Description = [...
  'HandWheel Torque 8 Qualifier - NTC Status return'];
HwTq8Qlfr.DocUnits = 'Cnt';
HwTq8Qlfr.SwcShoName = 'HwTq8Meas';
HwTq8Qlfr.EngDT = enum.SigQlfr1;
HwTq8Qlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTq8Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTq8Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTq8Qlfr.TestTolerance = 0;
HwTq8Qlfr.WrittenIn = {'HwTq8MeasPer1'};
HwTq8Qlfr.WriteType = 'Rte';


HwTq8RollgCntr = DataDict.OpSignal;
HwTq8RollgCntr.LongName = 'HandWheel Torque 8 Rolling Counter';
HwTq8RollgCntr.Description = 'HandWheel Torque 8 Heart Bit';
HwTq8RollgCntr.DocUnits = 'Cnt';
HwTq8RollgCntr.SwcShoName = 'HwTq8Meas';
HwTq8RollgCntr.EngDT = dt.u08;
HwTq8RollgCntr.EngInit = 0;
HwTq8RollgCntr.EngMin = 0;
HwTq8RollgCntr.EngMax = 255;
HwTq8RollgCntr.TestTolerance = 0;
HwTq8RollgCntr.WrittenIn = {'HwTq8MeasPer1'};
HwTq8RollgCntr.WriteType = 'Rte';


RackLimrCcwEotSig8 = DataDict.OpSignal;
RackLimrCcwEotSig8.LongName = 'Rack Limiter Counter Clockwise End of Travel Signal8';
RackLimrCcwEotSig8.Description = 'CCW EOT8';
RackLimrCcwEotSig8.DocUnits = 'HwDeg';
RackLimrCcwEotSig8.SwcShoName = 'HwTq8Meas';
RackLimrCcwEotSig8.EngDT = dt.float32;
RackLimrCcwEotSig8.EngInit = 0;
RackLimrCcwEotSig8.EngMin = -800;
RackLimrCcwEotSig8.EngMax = 0;
RackLimrCcwEotSig8.TestTolerance = 0.2;
RackLimrCcwEotSig8.WrittenIn = {'HwTq8MeasPer1'};
RackLimrCcwEotSig8.WriteType = 'Rte';


RackLimrCwEotSig8 = DataDict.OpSignal;
RackLimrCwEotSig8.LongName = 'Rack Limiter Clockwise End of Travel Signal8';
RackLimrCwEotSig8.Description = 'CW EOT8';
RackLimrCwEotSig8.DocUnits = 'HwDeg';
RackLimrCwEotSig8.SwcShoName = 'HwTq8Meas';
RackLimrCwEotSig8.EngDT = dt.float32;
RackLimrCwEotSig8.EngInit = 0;
RackLimrCwEotSig8.EngMin = 0;
RackLimrCwEotSig8.EngMax = 800;
RackLimrCwEotSig8.TestTolerance = 0.2;
RackLimrCwEotSig8.WrittenIn = {'HwTq8MeasPer1'};
RackLimrCwEotSig8.WriteType = 'Rte';


RackLimrEotSig8Avl = DataDict.OpSignal;
RackLimrEotSig8Avl.LongName = 'Rack Limiter End of Travel Signal8 Available';
RackLimrEotSig8Avl.Description = 'Rack Limiter End of Travel';
RackLimrEotSig8Avl.DocUnits = 'Uls';
RackLimrEotSig8Avl.SwcShoName = 'HwTq8Meas';
RackLimrEotSig8Avl.EngDT = dt.lgc;
RackLimrEotSig8Avl.EngInit = 0;
RackLimrEotSig8Avl.EngMin = 0;
RackLimrEotSig8Avl.EngMax = 1;
RackLimrEotSig8Avl.TestTolerance = 0;
RackLimrEotSig8Avl.WrittenIn = {'HwTq8MeasPer1'};
RackLimrEotSig8Avl.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwTq8MeasHwTq8PrtclFltFailStep = DataDict.Calibration;
HwTq8MeasHwTq8PrtclFltFailStep.LongName = 'Handwheel Torque 8 Measurement Handwheel Torque 8 Protocol Fault Fail Step';
HwTq8MeasHwTq8PrtclFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwTq8MeasHwTq8PrtclFltFailStep.DocUnits = 'Cnt';
HwTq8MeasHwTq8PrtclFltFailStep.EngDT = dt.u16;
HwTq8MeasHwTq8PrtclFltFailStep.EngVal = 2521;
HwTq8MeasHwTq8PrtclFltFailStep.EngMin = 0;
HwTq8MeasHwTq8PrtclFltFailStep.EngMax = 65535;
HwTq8MeasHwTq8PrtclFltFailStep.Cardinality = 'Inin';
HwTq8MeasHwTq8PrtclFltFailStep.CustomerVisible = false;
HwTq8MeasHwTq8PrtclFltFailStep.Online = false;
HwTq8MeasHwTq8PrtclFltFailStep.Impact = 'H';
HwTq8MeasHwTq8PrtclFltFailStep.TuningOwner = 'FDD';
HwTq8MeasHwTq8PrtclFltFailStep.GraphLink = {''};
HwTq8MeasHwTq8PrtclFltFailStep.Monotony = 'None';
HwTq8MeasHwTq8PrtclFltFailStep.MaxGrad = 0;
HwTq8MeasHwTq8PrtclFltFailStep.PortName = 'HwTq8MeasHwTq8PrtclFltFailStep';


HwTq8MeasHwTq8PrtclFltPassStep = DataDict.Calibration;
HwTq8MeasHwTq8PrtclFltPassStep.LongName = 'HandWheel Torque8 Measurement HandWheel Torque8 Protocol Fault Pass Step';
HwTq8MeasHwTq8PrtclFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwTq8MeasHwTq8PrtclFltPassStep.DocUnits = 'Cnt';
HwTq8MeasHwTq8PrtclFltPassStep.EngDT = dt.u16;
HwTq8MeasHwTq8PrtclFltPassStep.EngVal = 1000;
HwTq8MeasHwTq8PrtclFltPassStep.EngMin = 0;
HwTq8MeasHwTq8PrtclFltPassStep.EngMax = 65535;
HwTq8MeasHwTq8PrtclFltPassStep.Cardinality = 'Inin';
HwTq8MeasHwTq8PrtclFltPassStep.CustomerVisible = false;
HwTq8MeasHwTq8PrtclFltPassStep.Online = false;
HwTq8MeasHwTq8PrtclFltPassStep.Impact = 'H';
HwTq8MeasHwTq8PrtclFltPassStep.TuningOwner = 'FDD';
HwTq8MeasHwTq8PrtclFltPassStep.GraphLink = {''};
HwTq8MeasHwTq8PrtclFltPassStep.Monotony = 'None';
HwTq8MeasHwTq8PrtclFltPassStep.MaxGrad = 0;
HwTq8MeasHwTq8PrtclFltPassStep.PortName = 'HwTq8MeasHwTq8PrtclFltPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
HwTq8Offs = DataDict.NVM;
HwTq8Offs.LongName = 'Handwheel Torque 8 Offset';
HwTq8Offs.Description = [...
  'Handwheel Torque 8 Offset NVM store'];
HwTq8Offs.DocUnits = 'Uls';
HwTq8Offs.EngDT = struct.HwTqOffsRec1;
HwTq8Offs.EngInit = [struct('OffsTrim',0,'OffsTrimPrfmdSts',0)];
HwTq8Offs.EngMin = [struct('OffsTrim',-10,'OffsTrimPrfmdSts',0)];
HwTq8Offs.EngMax = [struct('OffsTrim',10,'OffsTrimPrfmdSts',1)];
HwTq8Offs.CustomerVisible = false;
HwTq8Offs.Impact = 'H';
HwTq8Offs.TuningOwner = 'FDD';
HwTq8Offs.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwTq8ComStsErrCntr = DataDict.PIM;
HwTq8ComStsErrCntr.LongName = 'Handwheel Torque 8 Communication Status Error Counter';
HwTq8ComStsErrCntr.Description = [...
  'Com Error Increments this counter -Troubleshooting Purpose '];
HwTq8ComStsErrCntr.DocUnits = 'Cnt';
HwTq8ComStsErrCntr.EngDT = dt.u08;
HwTq8ComStsErrCntr.EngMin = 0;
HwTq8ComStsErrCntr.EngMax = 255;
HwTq8ComStsErrCntr.InitRowCol = [1  1];


HwTq8IntSnsrErrCntr = DataDict.PIM;
HwTq8IntSnsrErrCntr.LongName = 'Handwheel Torque 8 Internal Sensor Error Counter';
HwTq8IntSnsrErrCntr.Description = [...
  'Internal Sensor Error Increments this counter -Troubleshooting Purpose' ...
  ' '];
HwTq8IntSnsrErrCntr.DocUnits = 'Cnt';
HwTq8IntSnsrErrCntr.EngDT = dt.u08;
HwTq8IntSnsrErrCntr.EngMin = 0;
HwTq8IntSnsrErrCntr.EngMax = 255;
HwTq8IntSnsrErrCntr.InitRowCol = [1  1];


HwTq8MsgMissRxCnt = DataDict.PIM;
HwTq8MsgMissRxCnt.LongName = 'Handwheel Torque 8 Message Missing Receive Count';
HwTq8MsgMissRxCnt.Description = [...
  'Torque 8 Missing Counter- Troubleshooting Purpose'];
HwTq8MsgMissRxCnt.DocUnits = 'Cnt';
HwTq8MsgMissRxCnt.EngDT = dt.u32;
HwTq8MsgMissRxCnt.EngMin = 0;
HwTq8MsgMissRxCnt.EngMax = 4294967295;
HwTq8MsgMissRxCnt.InitRowCol = [1  1];


HwTq8PrevHwTq8 = DataDict.PIM;
HwTq8PrevHwTq8.LongName = 'Handwheel Torque 8 Measurement Previous Handwheel Torque 8';
HwTq8PrevHwTq8.Description = 'Previous Handwheel Torque8';
HwTq8PrevHwTq8.DocUnits = 'HwNwtMtr';
HwTq8PrevHwTq8.EngDT = dt.float32;
HwTq8PrevHwTq8.EngMin = -10;
HwTq8PrevHwTq8.EngMax = 10;
HwTq8PrevHwTq8.InitRowCol = [1  1];


HwTq8PrevRollgCntr = DataDict.PIM;
HwTq8PrevRollgCntr.LongName = 'Handwheel Torque 8 Measurement Previous Rolling Count';
HwTq8PrevRollgCntr.Description = 'Previous Roll Count';
HwTq8PrevRollgCntr.DocUnits = 'Cnt';
HwTq8PrevRollgCntr.EngDT = dt.u08;
HwTq8PrevRollgCntr.EngMin = 0;
HwTq8PrevRollgCntr.EngMax = 255;
HwTq8PrevRollgCntr.InitRowCol = [1  1];


RackLimrCcwEot8 = DataDict.PIM;
RackLimrCcwEot8.LongName = 'Rack Limiter Counter Clockwise End of Travel0';
RackLimrCcwEot8.Description = 'CCW EOT';
RackLimrCcwEot8.DocUnits = 'HwDeg';
RackLimrCcwEot8.EngDT = dt.float32;
RackLimrCcwEot8.EngMin = -800;
RackLimrCcwEot8.EngMax = 0;
RackLimrCcwEot8.InitRowCol = [1  1];


RackLimrCwEot8 = DataDict.PIM;
RackLimrCwEot8.LongName = 'Rack Limiter Clockwise End of Travel0';
RackLimrCwEot8.Description = 'CW EOT';
RackLimrCwEot8.DocUnits = 'HwDeg';
RackLimrCwEot8.EngDT = dt.float32;
RackLimrCwEot8.EngMin = 0;
RackLimrCwEot8.EngMax = 800;
RackLimrCwEot8.InitRowCol = [1  1];


RackLimrEot8Avl = DataDict.PIM;
RackLimrEot8Avl.LongName = 'Rack Limiter End of Travel 8 Available';
RackLimrEot8Avl.Description = 'EOT Signal Available';
RackLimrEot8Avl.DocUnits = 'Uls';
RackLimrEot8Avl.EngDT = dt.lgc;
RackLimrEot8Avl.EngMin = 0;
RackLimrEot8Avl.EngMax = 1;
RackLimrEot8Avl.InitRowCol = [1  1];


RackLimrEot8Data0 = DataDict.PIM;
RackLimrEot8Data0.LongName = 'Rack Limiter End of Travel 8 Data0';
RackLimrEot8Data0.Description = 'Scratchpad Data0 of ID 2';
RackLimrEot8Data0.DocUnits = 'Cnt';
RackLimrEot8Data0.EngDT = dt.u08;
RackLimrEot8Data0.EngMin = 0;
RackLimrEot8Data0.EngMax = 255;
RackLimrEot8Data0.InitRowCol = [1  1];


RackLimrEot8Data1 = DataDict.PIM;
RackLimrEot8Data1.LongName = 'Rack Limiter End of Travel 8 Data1';
RackLimrEot8Data1.Description = 'Scratchpad Data0 of ID 3';
RackLimrEot8Data1.DocUnits = 'Cnt';
RackLimrEot8Data1.EngDT = dt.u08;
RackLimrEot8Data1.EngMin = 0;
RackLimrEot8Data1.EngMax = 255;
RackLimrEot8Data1.InitRowCol = [1  1];


RackLimrEot8Data2 = DataDict.PIM;
RackLimrEot8Data2.LongName = 'Rack Limiter End of Travel 8 Data2';
RackLimrEot8Data2.Description = 'Scratchpad Data0 of ID 4';
RackLimrEot8Data2.DocUnits = 'Cnt';
RackLimrEot8Data2.EngDT = dt.u08;
RackLimrEot8Data2.EngMin = 0;
RackLimrEot8Data2.EngMax = 255;
RackLimrEot8Data2.InitRowCol = [1  1];


RackLimrEot8Id2DataReadCmpl = DataDict.PIM;
RackLimrEot8Id2DataReadCmpl.LongName = 'Rack Limiter End of Travel 8 Id2 Data Read Complete';
RackLimrEot8Id2DataReadCmpl.Description = 'Scratchpad message ID2 data';
RackLimrEot8Id2DataReadCmpl.DocUnits = 'Uls';
RackLimrEot8Id2DataReadCmpl.EngDT = dt.lgc;
RackLimrEot8Id2DataReadCmpl.EngMin = 0;
RackLimrEot8Id2DataReadCmpl.EngMax = 1;
RackLimrEot8Id2DataReadCmpl.InitRowCol = [1  1];


RackLimrEot8Id3DataReadCmpl = DataDict.PIM;
RackLimrEot8Id3DataReadCmpl.LongName = 'Rack Limiter End of Travel 8 Id3 Data Read Complete';
RackLimrEot8Id3DataReadCmpl.Description = 'Scratchpad message ID3 data';
RackLimrEot8Id3DataReadCmpl.DocUnits = 'Uls';
RackLimrEot8Id3DataReadCmpl.EngDT = dt.lgc;
RackLimrEot8Id3DataReadCmpl.EngMin = 0;
RackLimrEot8Id3DataReadCmpl.EngMax = 1;
RackLimrEot8Id3DataReadCmpl.InitRowCol = [1  1];


RackLimrEot8Id4DataReadCmpl = DataDict.PIM;
RackLimrEot8Id4DataReadCmpl.LongName = 'Rack Limiter End of Travel 8 Id4 Data Read Complete';
RackLimrEot8Id4DataReadCmpl.Description = 'Scratchpad message ID4 data';
RackLimrEot8Id4DataReadCmpl.DocUnits = 'Uls';
RackLimrEot8Id4DataReadCmpl.EngDT = dt.lgc;
RackLimrEot8Id4DataReadCmpl.EngMin = 0;
RackLimrEot8Id4DataReadCmpl.EngMax = 1;
RackLimrEot8Id4DataReadCmpl.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.LongName = 'Handwheel Torque Offset';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.Description = 'Offset';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Lower Limit';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value min limit to -10'];
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngVal = -10;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Upper Limit';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value max limit to 10'];
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSCA_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSCA_ULS_F32.LongName = 'Handwheel Torque Scale';
ELECGLBPRM_HWTQSCA_ULS_F32.Description = 'Scale';
ELECGLBPRM_HWTQSCA_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWTQSCA_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSCA_ULS_F32.EngVal = 0.004884005;
ELECGLBPRM_HWTQSCA_ULS_F32.Define = 'Global';


ELECGLBPRM_NOFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_NOFLT_CNT_U08.LongName = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.Description = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_NOFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_NOFLT_CNT_U08.EngVal = 0;
ELECGLBPRM_NOFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08 = DataDict.Constant;
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.LongName = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.Description = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.EngVal = 1;
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.Define = 'Global';


ELECGLBPRM_PRTCLFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_PRTCLFLT_CNT_U08.LongName = 'Protocol Fault';
ELECGLBPRM_PRTCLFLT_CNT_U08.Description = 'Protocol Fault';
ELECGLBPRM_PRTCLFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_PRTCLFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_PRTCLFLT_CNT_U08.EngVal = 1;
ELECGLBPRM_PRTCLFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_SENTCOMSTSCLR_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.LongName = 'SENT Communication Status Clear Register';
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.Description = [...
  'Value sent to the RSENTnCSC (RSENT Communication Status Clear Register' ...
  ') in an effort to clear any faults present.  The value of 2046 is 0x00' ...
  '7E, which corresponds to all active clear bits.'];
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.EngVal = 2046;
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.LongName = 'Sent Communication Status Error Mask';
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.Description = [...
  'Value used to mask off uninteresting error status bits (SES, SMS, SCS ' ...
  '- Slow Serial Messages, FRS - Fast Recieve Message)'];
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.EngVal = 254;
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.LongName = 'Sent Communication Status FRS Mask';
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.Description = [...
  'Value used to mask FRS bit of status register'];
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.EngVal = 1;
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.LongName = 'Sent Communication Status Slow Mask';
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.Description = [...
  'Value used to mask SLow Channel bit of status register'];
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.EngVal = 1792;
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.LongName = 'Sent Fast Receive Data Mask';
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.Description = [...
  'Value used to mask Data bit of Fast Receive register'];
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.EngVal = 4095;
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.LongName = 'Sent Fast Receive FCCN Mask';
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.Description = [...
  'Value used to mask FCCN bit of Fast Receive register'];
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.EngVal = 805306368;
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.LongName = 'Sent Fast Receive SND Mask';
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.Description = [...
  'Value used to mask SND bit of Fast Receive register'];
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.EngVal = 2147483648;
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.LongName = 'Sent Slow Receive Data Identifier Mask';
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.Description = [...
  'Value used to mask Slow Receive Data of register'];
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.EngVal = 3840;
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.LongName = 'Sent Slow Receive Data Mask';
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.Description = [...
  'Value used to mask Slow Receive Data of register'];
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.EngVal = 255;
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SNSRINTFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_SNSRINTFLT_CNT_U08.LongName = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.Description = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngVal = 2;
ELECGLBPRM_SNSRINTFLT_CNT_U08.Define = 'Global';


EOTIDFOUR_CNT_U08 = DataDict.Constant;
EOTIDFOUR_CNT_U08.LongName = 'Rack Limiter End of Travel Signal Low Limit';
EOTIDFOUR_CNT_U08.Description = 'Low Limit For Rack Limiter Counter';
EOTIDFOUR_CNT_U08.DocUnits = 'Cnt';
EOTIDFOUR_CNT_U08.EngDT = dt.u08;
EOTIDFOUR_CNT_U08.EngVal = 4;
EOTIDFOUR_CNT_U08.Define = 'Local';


EOTIDTHREE_CNT_U08 = DataDict.Constant;
EOTIDTHREE_CNT_U08.LongName = 'Rack Limiter End of Travel Signal Low Limit';
EOTIDTHREE_CNT_U08.Description = 'Low Limit For Rack Limiter Counter';
EOTIDTHREE_CNT_U08.DocUnits = 'Cnt';
EOTIDTHREE_CNT_U08.EngDT = dt.u08;
EOTIDTHREE_CNT_U08.EngVal = 3;
EOTIDTHREE_CNT_U08.Define = 'Local';


EOTIDTWO_CNT_U08 = DataDict.Constant;
EOTIDTWO_CNT_U08.LongName = 'Rack Limiter End of Travel Signal Low Limit';
EOTIDTWO_CNT_U08.Description = 'Low Limit For Rack Limiter Counter';
EOTIDTWO_CNT_U08.DocUnits = 'Cnt';
EOTIDTWO_CNT_U08.EngDT = dt.u08;
EOTIDTWO_CNT_U08.EngVal = 2;
EOTIDTWO_CNT_U08.Define = 'Local';


EOTLNMASK_CNT_U16 = DataDict.Constant;
EOTLNMASK_CNT_U16.LongName = 'End of Travel Signal lower Mask';
EOTLNMASK_CNT_U16.Description = 'End of Travel upper Mask';
EOTLNMASK_CNT_U16.DocUnits = 'Cnt';
EOTLNMASK_CNT_U16.EngDT = dt.u16;
EOTLNMASK_CNT_U16.EngVal = 15;
EOTLNMASK_CNT_U16.Define = 'Local';


EOTUNMASK_CNT_U16 = DataDict.Constant;
EOTUNMASK_CNT_U16.LongName = 'End of Travel upper Mask';
EOTUNMASK_CNT_U16.Description = 'End of Travel upper Mask';
EOTUNMASK_CNT_U16.DocUnits = 'Cnt';
EOTUNMASK_CNT_U16.EngDT = dt.u16;
EOTUNMASK_CNT_U16.EngVal = 240;
EOTUNMASK_CNT_U16.Define = 'Local';


FLTINJ_HWTQ8MEAS_HWTQ8 = DataDict.Constant;
FLTINJ_HWTQ8MEAS_HWTQ8.LongName = 'Fault Injection Handwheel Torque 8 Measure Handwheel Torque 8';
FLTINJ_HWTQ8MEAS_HWTQ8.Description = [...
  'Fault Injection Handwheel Torque 8 Measure Handwheel Torque 8 Constant' ...
  ''];
FLTINJ_HWTQ8MEAS_HWTQ8.DocUnits = 'Uls';
FLTINJ_HWTQ8MEAS_HWTQ8.EngDT = dt.u16;
FLTINJ_HWTQ8MEAS_HWTQ8.EngVal = 43;
FLTINJ_HWTQ8MEAS_HWTQ8.Define = 'Global';


FLTINJ_HWTQ8MEAS_TESTOK0 = DataDict.Constant;
FLTINJ_HWTQ8MEAS_TESTOK0.LongName = 'Fault Injection Handwheel Torque 8 Measure Test OK 0';
FLTINJ_HWTQ8MEAS_TESTOK0.Description = [...
  'Fault Injection Handwheel Torque 8 Measure Test OK 0 Constant'];
FLTINJ_HWTQ8MEAS_TESTOK0.DocUnits = 'Uls';
FLTINJ_HWTQ8MEAS_TESTOK0.EngDT = dt.u16;
FLTINJ_HWTQ8MEAS_TESTOK0.EngVal = 44;
FLTINJ_HWTQ8MEAS_TESTOK0.Define = 'Global';


HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 8 Manufacturing Ntc Number';
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.Description = 'HwTq8 Manufacturing Ntc Number';
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.IsBuildPrm = true;
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X1E0;
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X1E0;
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X1E3;
HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM.Define = 'Global';


HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 8 Ntc Number';
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.Description = 'HwTq8 Ntc Number';
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.IsBuildPrm = true;
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X073;
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X070;
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X07A;
HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM.Define = 'Global';


RACKLIMRCCWEOTSCA_ULS_F32 = DataDict.Constant;
RACKLIMRCCWEOTSCA_ULS_F32.LongName = 'Rack Limiter Counter Clockwise End of Travel Scale';
RACKLIMRCCWEOTSCA_ULS_F32.Description = 'Scale';
RACKLIMRCCWEOTSCA_ULS_F32.DocUnits = 'Uls';
RACKLIMRCCWEOTSCA_ULS_F32.EngDT = dt.float32;
RACKLIMRCCWEOTSCA_ULS_F32.EngVal = -0.1953;
RACKLIMRCCWEOTSCA_ULS_F32.Define = 'Local';


RACKLIMRCWEOTSCA_ULS_F32 = DataDict.Constant;
RACKLIMRCWEOTSCA_ULS_F32.LongName = 'Rack Limiter Clockwise End of Travel Scale';
RACKLIMRCWEOTSCA_ULS_F32.Description = 'Scale';
RACKLIMRCWEOTSCA_ULS_F32.DocUnits = 'Uls';
RACKLIMRCWEOTSCA_ULS_F32.EngDT = dt.float32;
RACKLIMRCWEOTSCA_ULS_F32.EngVal = 0.1953;
RACKLIMRCWEOTSCA_ULS_F32.Define = 'Local';


RACKLIMREOTSIGHILIM_HWDEG_F32 = DataDict.Constant;
RACKLIMREOTSIGHILIM_HWDEG_F32.LongName = 'Rack Limiter End of Travel Signal High Limit';
RACKLIMREOTSIGHILIM_HWDEG_F32.Description = 'High Limit For Rack Limiter';
RACKLIMREOTSIGHILIM_HWDEG_F32.DocUnits = 'HwDeg';
RACKLIMREOTSIGHILIM_HWDEG_F32.EngDT = dt.float32;
RACKLIMREOTSIGHILIM_HWDEG_F32.EngVal = 800;
RACKLIMREOTSIGHILIM_HWDEG_F32.Define = 'Local';


RACKLIMREOTSIGLOLIM_HWDEG_F32 = DataDict.Constant;
RACKLIMREOTSIGLOLIM_HWDEG_F32.LongName = 'Rack Limiter End of Travel Signal Low Limit';
RACKLIMREOTSIGLOLIM_HWDEG_F32.Description = 'Low Limit For Rack Limiter Counter';
RACKLIMREOTSIGLOLIM_HWDEG_F32.DocUnits = 'HwDeg';
RACKLIMREOTSIGLOLIM_HWDEG_F32.EngDT = dt.float32;
RACKLIMREOTSIGLOLIM_HWDEG_F32.EngVal = -800;
RACKLIMREOTSIGLOLIM_HWDEG_F32.Define = 'Local';


ROLLGCNTRMAXVAL_CNT_U08 = DataDict.Constant;
ROLLGCNTRMAXVAL_CNT_U08.LongName = 'Rolling Counter Maximum Value';
ROLLGCNTRMAXVAL_CNT_U08.Description = [...
  'Maximum value for Rolling Counter = 255'];
ROLLGCNTRMAXVAL_CNT_U08.DocUnits = 'Cnt';
ROLLGCNTRMAXVAL_CNT_U08.EngDT = dt.u08;
ROLLGCNTRMAXVAL_CNT_U08.EngVal = 255;
ROLLGCNTRMAXVAL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwTq8MfgFlt = DataDict.NTC;
HwTq8MfgFlt.NtcNr = 'HWTQ8MEAS_HWTQ8MFGNTCNR_CNT_ENUM';
HwTq8MfgFlt.NtcTyp = 'None';
HwTq8MfgFlt.LongName = 'Handwheel Torque 8 Manufacturing Fault';
HwTq8MfgFlt.Description = 'Manufacturing Fault';
HwTq8MfgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq8MfgFlt.NtcStInfo.Bit0Descr = 'Offset Trim Not Performed';
HwTq8MfgFlt.NtcStInfo.Bit1Descr = 'Unused';
HwTq8MfgFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq8MfgFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq8MfgFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq8MfgFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq8MfgFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq8MfgFlt.NtcStInfo.Bit7Descr = 'Unused';
HwTq8MfgFlt.NtcStsLockdThisIgnCyc = 0;


HwTq8PrtclFlt = DataDict.NTC;
HwTq8PrtclFlt.NtcNr = 'HWTQ8MEAS_HWTQ8PRTCLNTCNR_CNT_ENUM';
HwTq8PrtclFlt.NtcTyp = 'Deb';
HwTq8PrtclFlt.LongName = 'Handwheel Torque 8 Protocol Fault';
HwTq8PrtclFlt.Description = 'Protocol Fault';
HwTq8PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq8PrtclFlt.NtcStInfo.Bit0Descr = 'Protocol Fault';
HwTq8PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwTq8PrtclFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq8PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq8PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq8PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq8PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq8PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';
HwTq8PrtclFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
