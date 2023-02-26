%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Jan-2018 18:14:54       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES225A = DataDict.FDD;
ES225A.Version = '1.8.X';
ES225A.LongName = 'Handwheel Torque 10 Measurement';
ES225A.ShoName  = 'HwTq10Meas';
ES225A.DesignASIL = 'D';
ES225A.Description = [...
  'HwTq10Meas funtion shall compute handwheel torque by decoding the SENT' ...
  ' protocol based on the timestamps provided by the GTM'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTq10MeasInit1 = DataDict.Runnable;
HwTq10MeasInit1.Context = 'Rte';
HwTq10MeasInit1.TimeStep = 0;
HwTq10MeasInit1.Description = 'Initialization';

HwTq10MeasPer1 = DataDict.Runnable;
HwTq10MeasPer1.Context = 'Rte';
HwTq10MeasPer1.TimeStep = 0.002;
HwTq10MeasPer1.Description = 'Periodic event at 2ms rate';

HwTq10MeasPer2 = DataDict.Runnable;
HwTq10MeasPer2.Context = 'Rte';
HwTq10MeasPer2.TimeStep = 0.1;
HwTq10MeasPer2.Description = 'Periodic event at 100ms rate';

HwTq10MeasHwTq10AutTrim = DataDict.SrvRunnable;
HwTq10MeasHwTq10AutTrim.Context = 'Rte';
HwTq10MeasHwTq10AutTrim.Description = [...
  'Handwheel Torque 10 Measurement Handwheel Torque 10 Auto trim service'];
HwTq10MeasHwTq10AutTrim.Return = DataDict.CSReturn;
HwTq10MeasHwTq10AutTrim.Return.Type = 'None';
HwTq10MeasHwTq10AutTrim.Return.Min = [];
HwTq10MeasHwTq10AutTrim.Return.Max = [];
HwTq10MeasHwTq10AutTrim.Return.TestTolerance = [];

HwTq10MeasHwTq10ClrTrim = DataDict.SrvRunnable;
HwTq10MeasHwTq10ClrTrim.Context = 'Rte';
HwTq10MeasHwTq10ClrTrim.Description = [...
  'Handwheel Torque 10 Measurement Handwheel Torque 10 Clear Trim Service' ...
  ''];
HwTq10MeasHwTq10ClrTrim.Return = DataDict.CSReturn;
HwTq10MeasHwTq10ClrTrim.Return.Type = 'None';
HwTq10MeasHwTq10ClrTrim.Return.Min = [];
HwTq10MeasHwTq10ClrTrim.Return.Max = [];
HwTq10MeasHwTq10ClrTrim.Return.TestTolerance = [];

HwTq10MeasHwTq10ReadTrim = DataDict.SrvRunnable;
HwTq10MeasHwTq10ReadTrim.Context = 'Rte';
HwTq10MeasHwTq10ReadTrim.Description = [...
  'Handwheel Torque 10 Measurement Handwheel Torque 10 Read Trim Service'];
HwTq10MeasHwTq10ReadTrim.Return = DataDict.CSReturn;
HwTq10MeasHwTq10ReadTrim.Return.Type = 'None';
HwTq10MeasHwTq10ReadTrim.Return.Min = [];
HwTq10MeasHwTq10ReadTrim.Return.Max = [];
HwTq10MeasHwTq10ReadTrim.Return.TestTolerance = [];
HwTq10MeasHwTq10ReadTrim.Arguments(1) = DataDict.CSArguments;
HwTq10MeasHwTq10ReadTrim.Arguments(1).Name = 'HwTqReadTrimData';
HwTq10MeasHwTq10ReadTrim.Arguments(1).EngDT = dt.float32;
HwTq10MeasHwTq10ReadTrim.Arguments(1).EngMin = -10;
HwTq10MeasHwTq10ReadTrim.Arguments(1).EngMax = 10;
HwTq10MeasHwTq10ReadTrim.Arguments(1).TestTolerance = 0;
HwTq10MeasHwTq10ReadTrim.Arguments(1).Units = 'HwNm';
HwTq10MeasHwTq10ReadTrim.Arguments(1).Direction = 'Out';
HwTq10MeasHwTq10ReadTrim.Arguments(1).InitRowCol = [1  1];
HwTq10MeasHwTq10ReadTrim.Arguments(1).Description = 'Value of the trim data';

HwTq10MeasHwTq10TrimPrfmdSts = DataDict.SrvRunnable;
HwTq10MeasHwTq10TrimPrfmdSts.Context = 'Rte';
HwTq10MeasHwTq10TrimPrfmdSts.Description = [...
  'Handwheel Torque 10 Measurement Handwheel Torque 10 Trim Read Service'];
HwTq10MeasHwTq10TrimPrfmdSts.Return = DataDict.CSReturn;
HwTq10MeasHwTq10TrimPrfmdSts.Return.Type = 'None';
HwTq10MeasHwTq10TrimPrfmdSts.Return.Min = [];
HwTq10MeasHwTq10TrimPrfmdSts.Return.Max = [];
HwTq10MeasHwTq10TrimPrfmdSts.Return.TestTolerance = [];
HwTq10MeasHwTq10TrimPrfmdSts.Arguments(1) = DataDict.CSArguments;
HwTq10MeasHwTq10TrimPrfmdSts.Arguments(1).Name = 'HwTqOffsTrimPrfmdStsData';
HwTq10MeasHwTq10TrimPrfmdSts.Arguments(1).EngDT = dt.lgc;
HwTq10MeasHwTq10TrimPrfmdSts.Arguments(1).EngMin = 0;
HwTq10MeasHwTq10TrimPrfmdSts.Arguments(1).EngMax = 1;
HwTq10MeasHwTq10TrimPrfmdSts.Arguments(1).TestTolerance = 0;
HwTq10MeasHwTq10TrimPrfmdSts.Arguments(1).Units = 'Lgc';
HwTq10MeasHwTq10TrimPrfmdSts.Arguments(1).Direction = 'Out';
HwTq10MeasHwTq10TrimPrfmdSts.Arguments(1).InitRowCol = [1  1];
HwTq10MeasHwTq10TrimPrfmdSts.Arguments(1).Description = 'Value of the trim performed status';

HwTq10MeasHwTq10WrTrim = DataDict.SrvRunnable;
HwTq10MeasHwTq10WrTrim.Context = 'Rte';
HwTq10MeasHwTq10WrTrim.Description = [...
  'Handwheel Torque 10 Measurement Handwheel Torque 10 Wrtie Trim Service' ...
  ''];
HwTq10MeasHwTq10WrTrim.Return = DataDict.CSReturn;
HwTq10MeasHwTq10WrTrim.Return.Type = 'None';
HwTq10MeasHwTq10WrTrim.Return.Min = [];
HwTq10MeasHwTq10WrTrim.Return.Max = [];
HwTq10MeasHwTq10WrTrim.Return.TestTolerance = [];
HwTq10MeasHwTq10WrTrim.Arguments(1) = DataDict.CSArguments;
HwTq10MeasHwTq10WrTrim.Arguments(1).Name = 'HwTqWrOffsTrimData';
HwTq10MeasHwTq10WrTrim.Arguments(1).EngDT = dt.float32;
HwTq10MeasHwTq10WrTrim.Arguments(1).EngMin = -10;
HwTq10MeasHwTq10WrTrim.Arguments(1).EngMax = 10;
HwTq10MeasHwTq10WrTrim.Arguments(1).Units = 'HwNm';
HwTq10MeasHwTq10WrTrim.Arguments(1).Direction = 'In';
HwTq10MeasHwTq10WrTrim.Arguments(1).InitRowCol = [1  1];
HwTq10MeasHwTq10WrTrim.Arguments(1).Description = 'Value written in as the trim value';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwTq10MeasPer1'};
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


GtmGetSent1Data = DataDict.Client;
GtmGetSent1Data.CallLocation = {'HwTq10MeasPer1'};
GtmGetSent1Data.Description = [...
  'Server Runnable for getting Sent Data from generic timer module'];
GtmGetSent1Data.Return = DataDict.CSReturn;
GtmGetSent1Data.Return.Type = 'Standard';
GtmGetSent1Data.Return.Min = 0;
GtmGetSent1Data.Return.Max = 1;
GtmGetSent1Data.Return.TestTolerance = 0;
GtmGetSent1Data.Return.Description = 'Return for the Server runnable';
GtmGetSent1Data.Arguments(1) = DataDict.CSArguments;
GtmGetSent1Data.Arguments(1).Name = 'BufStrt';
GtmGetSent1Data.Arguments(1).EngDT = dt.u32;
GtmGetSent1Data.Arguments(1).EngMin = 0;
GtmGetSent1Data.Arguments(1).EngMax = 4294967295;
GtmGetSent1Data.Arguments(1).TestTolerance = 999;
GtmGetSent1Data.Arguments(1).Units = 'Cnt';
GtmGetSent1Data.Arguments(1).Direction = 'Out';
GtmGetSent1Data.Arguments(1).InitRowCol = [1  32];
GtmGetSent1Data.Arguments(1).Description = [...
  'Argument passed is the address of a buffer'];


HwTq10Offs_GetErrorStatus = DataDict.Client;
HwTq10Offs_GetErrorStatus.CallLocation = {'HwTq10MeasInit1'};
HwTq10Offs_GetErrorStatus.Description = [...
  'Client to get Handwheel Torque 10 NvMs error status'];
HwTq10Offs_GetErrorStatus.Return = DataDict.CSReturn;
HwTq10Offs_GetErrorStatus.Return.Type = 'Standard';
HwTq10Offs_GetErrorStatus.Return.Min = 0;
HwTq10Offs_GetErrorStatus.Return.Max = 1;
HwTq10Offs_GetErrorStatus.Return.TestTolerance = 0;
HwTq10Offs_GetErrorStatus.Return.Description = 'Return perameters ';
HwTq10Offs_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
HwTq10Offs_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
HwTq10Offs_GetErrorStatus.Arguments(1).EngDT = dt.u08;
HwTq10Offs_GetErrorStatus.Arguments(1).EngMin = 0;
HwTq10Offs_GetErrorStatus.Arguments(1).EngMax = 255;
HwTq10Offs_GetErrorStatus.Arguments(1).TestTolerance = 0;
HwTq10Offs_GetErrorStatus.Arguments(1).Units = 'Cnt';
HwTq10Offs_GetErrorStatus.Arguments(1).Direction = 'Out';
HwTq10Offs_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
HwTq10Offs_GetErrorStatus.Arguments(1).Description = [...
  'Polarity for requested error status result'];


HwTq10Offs_SetRamBlockStatus = DataDict.Client;
HwTq10Offs_SetRamBlockStatus.CallLocation = {'HwTq10AutTrim','HwTq10ClrTrim','HwTq10WrTrim'};
HwTq10Offs_SetRamBlockStatus.Description = 'Set Ram Block Status';
HwTq10Offs_SetRamBlockStatus.Return = DataDict.CSReturn;
HwTq10Offs_SetRamBlockStatus.Return.Type = 'Standard';
HwTq10Offs_SetRamBlockStatus.Return.Min = 0;
HwTq10Offs_SetRamBlockStatus.Return.Max = 1;
HwTq10Offs_SetRamBlockStatus.Return.TestTolerance = 0;
HwTq10Offs_SetRamBlockStatus.Return.Description = 'Return of the Srv Runnable';
HwTq10Offs_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwTq10Offs_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwTq10Offs_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwTq10Offs_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwTq10Offs_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwTq10Offs_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwTq10Offs_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwTq10Offs_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
HwTq10Offs_SetRamBlockStatus.Arguments(1).Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwTq10MeasPer2'};
SetNtcSts.Description = 'Set NTC Status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'Retuen Type - Standard';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NtcNr';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'NtcStsInfo';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'NtcSts';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'DebStep';


SetNtcStsAndSnpshtData = DataDict.Client;
SetNtcStsAndSnpshtData.CallLocation = {'HwTq10MeasPer1'};
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
HwTq10Polarity = DataDict.IpSignal;
HwTq10Polarity.LongName = 'Handwheel Torque 10 Polarity';
HwTq10Polarity.Description = 'Handwheel Torque 10 Polarity';
HwTq10Polarity.DocUnits = 'Uls';
HwTq10Polarity.EngDT = dt.s08;
HwTq10Polarity.EngInit = 1;
HwTq10Polarity.EngMin = -1;
HwTq10Polarity.EngMax = 1;
HwTq10Polarity.ReadIn = {'HwTq10MeasPer1'};
HwTq10Polarity.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTq10 = DataDict.OpSignal;
HwTq10.LongName = 'Handwheel Torque 10';
HwTq10.Description = 'Handwheel Torque 10 value';
HwTq10.DocUnits = 'HwNwtMtr';
HwTq10.SwcShoName = 'HwTq10Meas';
HwTq10.EngDT = dt.float32;
HwTq10.EngInit = 0;
HwTq10.EngMin = -10;
HwTq10.EngMax = 10;
HwTq10.TestTolerance = 0.0048828125;
HwTq10.WrittenIn = {'HwTq10MeasPer1'};
HwTq10.WriteType = 'Rte';


HwTq10Qlfr = DataDict.OpSignal;
HwTq10Qlfr.LongName = 'Handwheel Torque 10 Qualifier';
HwTq10Qlfr.Description = 'Handwheel Torque 10 Qualifier';
HwTq10Qlfr.DocUnits = 'Cnt';
HwTq10Qlfr.SwcShoName = 'HwTq10Meas';
HwTq10Qlfr.EngDT = enum.SigQlfr1;
HwTq10Qlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTq10Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTq10Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTq10Qlfr.TestTolerance = 0;
HwTq10Qlfr.WrittenIn = {'HwTq10MeasPer1'};
HwTq10Qlfr.WriteType = 'Rte';


HwTq10RollgCntr = DataDict.OpSignal;
HwTq10RollgCntr.LongName = 'Handwheel Torque 10 Rolling Counter';
HwTq10RollgCntr.Description = [...
  'Handwheel Torque 10 Rolling Counter'];
HwTq10RollgCntr.DocUnits = 'Cnt';
HwTq10RollgCntr.SwcShoName = 'HwTq10Meas';
HwTq10RollgCntr.EngDT = dt.u08;
HwTq10RollgCntr.EngInit = 0;
HwTq10RollgCntr.EngMin = 0;
HwTq10RollgCntr.EngMax = 255;
HwTq10RollgCntr.TestTolerance = 0;
HwTq10RollgCntr.WrittenIn = {'HwTq10MeasPer1'};
HwTq10RollgCntr.WriteType = 'Rte';



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
HwTq10Offs = DataDict.NVM;
HwTq10Offs.LongName = 'Handwheel Torque 10 Offset';
HwTq10Offs.Description = [...
  'Handwheel Torque 10 Offset NVM store'];
HwTq10Offs.DocUnits = 'Uls';
HwTq10Offs.EngDT = struct.HwTqOffsRec1;
HwTq10Offs.EngInit = [];
HwTq10Offs.EngMin = [struct('OffsTrim',-10,'OffsTrimPrfmdSts',0)];
HwTq10Offs.EngMax = [struct('OffsTrim',10,'OffsTrimPrfmdSts',1)];
HwTq10Offs.CustomerVisible = false;
HwTq10Offs.Impact = 'H';
HwTq10Offs.TuningOwner = 'FDD';
HwTq10Offs.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwTq10PrevHwTq = DataDict.PIM;
HwTq10PrevHwTq.LongName = 'Handwheel Torque 10 Previous Handwheel Torque';
HwTq10PrevHwTq.Description = 'Previous Handwheel Torque Value';
HwTq10PrevHwTq.DocUnits = 'HwNwtMtr';
HwTq10PrevHwTq.EngDT = dt.float32;
HwTq10PrevHwTq.EngMin = -10;
HwTq10PrevHwTq.EngMax = 10;
HwTq10PrevHwTq.InitRowCol = [1  1];


HwTq10RawDataBuf = DataDict.PIM;
HwTq10RawDataBuf.LongName = 'Handwheel Torque 10 Raw Data Buffer';
HwTq10RawDataBuf.Description = [...
  'Buffer that captures the timestamps recieved from the GTM client'];
HwTq10RawDataBuf.DocUnits = 'Cnt';
HwTq10RawDataBuf.EngDT = dt.u16;
HwTq10RawDataBuf.EngMin = 0;
HwTq10RawDataBuf.EngMax = 15;
HwTq10RawDataBuf.InitRowCol = [5  1];


HwTq10RollgCntrPrev = DataDict.PIM;
HwTq10RollgCntrPrev.LongName = 'Handwheel Torque 10 Rolling Counter Previous';
HwTq10RollgCntrPrev.Description = 'Previous Rolling Counter Value';
HwTq10RollgCntrPrev.DocUnits = 'Cnt';
HwTq10RollgCntrPrev.EngDT = dt.u08;
HwTq10RollgCntrPrev.EngMin = 0;
HwTq10RollgCntrPrev.EngMax = 255;
HwTq10RollgCntrPrev.InitRowCol = [1  1];


HwTq10TiStamp = DataDict.PIM;
HwTq10TiStamp.LongName = 'Handwheel Torque 10 Time Stamp';
HwTq10TiStamp.Description = [...
  'Timestamp of the recieved SENT data'];
HwTq10TiStamp.DocUnits = 'Cnt';
HwTq10TiStamp.EngDT = dt.u32;
HwTq10TiStamp.EngMin = 0;
HwTq10TiStamp.EngMax = 16777215;
HwTq10TiStamp.InitRowCol = [1  1];


HwTq10TiStampPrev = DataDict.PIM;
HwTq10TiStampPrev.LongName = 'Handwheel Torque 10 Time Stamp Previous';
HwTq10TiStampPrev.Description = 'Previous loops timestamp value';
HwTq10TiStampPrev.DocUnits = 'Cnt';
HwTq10TiStampPrev.EngDT = dt.u32;
HwTq10TiStampPrev.EngMin = 0;
HwTq10TiStampPrev.EngMax = 16777215;
HwTq10TiStampPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CRCFLTPARAMBYTE_CNT_U08 = DataDict.Constant;
CRCFLTPARAMBYTE_CNT_U08.LongName = 'Crc Fault Parameter Byte';
CRCFLTPARAMBYTE_CNT_U08.Description = 'Crc failute parameter byte';
CRCFLTPARAMBYTE_CNT_U08.DocUnits = 'Cnt';
CRCFLTPARAMBYTE_CNT_U08.EngDT = dt.u08;
CRCFLTPARAMBYTE_CNT_U08.EngVal = 2;
CRCFLTPARAMBYTE_CNT_U08.Define = 'Local';


CRCIDX_CNT_U08 = DataDict.Constant;
CRCIDX_CNT_U08.LongName = 'Crc Index';
CRCIDX_CNT_U08.Description = [...
  'Value used to get crc value from the buffer'];
CRCIDX_CNT_U08.DocUnits = 'Cnt';
CRCIDX_CNT_U08.EngDT = dt.u08;
CRCIDX_CNT_U08.EngVal = 10;
CRCIDX_CNT_U08.Define = 'Local';


CRCTBLSEEDIDX_CNT_U08 = DataDict.Constant;
CRCTBLSEEDIDX_CNT_U08.LongName = 'Crc Table Seed Index';
CRCTBLSEEDIDX_CNT_U08.Description = [...
  'Seed value index to compute the Crc'];
CRCTBLSEEDIDX_CNT_U08.DocUnits = 'Cnt';
CRCTBLSEEDIDX_CNT_U08.EngDT = dt.u08;
CRCTBLSEEDIDX_CNT_U08.EngVal = 5;
CRCTBLSEEDIDX_CNT_U08.Define = 'Local';


CRCTBL_CNT_U16 = DataDict.Constant;
CRCTBL_CNT_U16.LongName = 'Crc Table';
CRCTBL_CNT_U16.Description = [...
  'CRC Table to calculate the CRC on handhweel torque data'];
CRCTBL_CNT_U16.DocUnits = 'Cnt';
CRCTBL_CNT_U16.EngDT = dt.u16;
CRCTBL_CNT_U16.EngVal =  ...
   [0               13                7               10               14                3                9                4                1               12                6               11               15                2                8                5];
CRCTBL_CNT_U16.Define = 'Local';


DATA0IDX_CNT_U08 = DataDict.Constant;
DATA0IDX_CNT_U08.LongName = 'Data 0 Index';
DATA0IDX_CNT_U08.Description = [...
  'Value used to get data0 timestamp from the buffer'];
DATA0IDX_CNT_U08.DocUnits = 'Cnt';
DATA0IDX_CNT_U08.EngDT = dt.u08;
DATA0IDX_CNT_U08.EngVal = 4;
DATA0IDX_CNT_U08.Define = 'Local';


DATA1IDX_CNT_U08 = DataDict.Constant;
DATA1IDX_CNT_U08.LongName = 'Data 1 Index';
DATA1IDX_CNT_U08.Description = [...
  'Value used to get data1 timestamp from the buffer'];
DATA1IDX_CNT_U08.DocUnits = 'Cnt';
DATA1IDX_CNT_U08.EngDT = dt.u08;
DATA1IDX_CNT_U08.EngVal = 6;
DATA1IDX_CNT_U08.Define = 'Local';


DATA2IDX_CNT_U08 = DataDict.Constant;
DATA2IDX_CNT_U08.LongName = 'Data 1 Index';
DATA2IDX_CNT_U08.Description = [...
  'Value used to get data1 timestamp from the buffer'];
DATA2IDX_CNT_U08.DocUnits = 'Cnt';
DATA2IDX_CNT_U08.EngDT = dt.u08;
DATA2IDX_CNT_U08.EngVal = 8;
DATA2IDX_CNT_U08.Define = 'Local';


DATATISTAMPIDX_CNT_U08 = DataDict.Constant;
DATATISTAMPIDX_CNT_U08.LongName = 'Data Time Stamp Index';
DATATISTAMPIDX_CNT_U08.Description = [...
  'Value used to get timestamp from the buffer'];
DATATISTAMPIDX_CNT_U08.DocUnits = 'Cnt';
DATATISTAMPIDX_CNT_U08.EngDT = dt.u08;
DATATISTAMPIDX_CNT_U08.EngVal = 11;
DATATISTAMPIDX_CNT_U08.Define = 'Local';


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


ELECGLBPRM_NOFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_NOFLT_CNT_U08.LongName = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.Description = [...
  'Parameter bute value indicating no fault'];
ELECGLBPRM_NOFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_NOFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_NOFLT_CNT_U08.EngVal = 0;
ELECGLBPRM_NOFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08 = DataDict.Constant;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.LongName = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.Description = [...
  'Parametr Byte value indicating the Offset Trim Not Performed'];
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.EngVal = 1;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.Define = 'Global';


EVENIDXFAC_CNT_U08 = DataDict.Constant;
EVENIDXFAC_CNT_U08.LongName = 'Even Index Factor';
EVENIDXFAC_CNT_U08.Description = 'Value used to get a even index';
EVENIDXFAC_CNT_U08.DocUnits = 'Cnt';
EVENIDXFAC_CNT_U08.EngDT = dt.u08;
EVENIDXFAC_CNT_U08.EngVal = 2;
EVENIDXFAC_CNT_U08.Define = 'Local';


HWTQ10BUFIDX_CNT_U08 = DataDict.Constant;
HWTQ10BUFIDX_CNT_U08.LongName = 'Handwheel Torque 10 Buffer Index';
HWTQ10BUFIDX_CNT_U08.Description = [...
  'Buffer index to parse through the global buffer'];
HWTQ10BUFIDX_CNT_U08.DocUnits = 'Cnt';
HWTQ10BUFIDX_CNT_U08.EngDT = dt.u08;
HWTQ10BUFIDX_CNT_U08.EngVal = 32;
HWTQ10BUFIDX_CNT_U08.Define = 'Local';


HWTQ10DATAPLSHILIM_NANOSEC_U32 = DataDict.Constant;
HWTQ10DATAPLSHILIM_NANOSEC_U32.LongName = 'Handwheel Torque 10 Data Pulse High Limit';
HWTQ10DATAPLSHILIM_NANOSEC_U32.Description = [...
  'Data pulses range check high limit - Calculation formula [(1.22(tickti' ...
  'me) * 27(Data max pulse) * 1000(millitonano)) + ((1.22(ticktime) * 27(' ...
  'Data max pulse) * 1000(millitonano)) * 0.2(clock drift))]'];
HWTQ10DATAPLSHILIM_NANOSEC_U32.DocUnits = 'NanoSec';
HWTQ10DATAPLSHILIM_NANOSEC_U32.EngDT = dt.u32;
HWTQ10DATAPLSHILIM_NANOSEC_U32.EngVal = 39528;
HWTQ10DATAPLSHILIM_NANOSEC_U32.Define = 'Local';


HWTQ10DATAPLSLOLIM_NANOSEC_U32 = DataDict.Constant;
HWTQ10DATAPLSLOLIM_NANOSEC_U32.LongName = 'Handwheel Torque 10 Data Pulse Low Limit';
HWTQ10DATAPLSLOLIM_NANOSEC_U32.Description = [...
  'Data pulses range check Low limit - Calculation formula [(1.22(ticktim' ...
  'e) * 12(Data min pulse) * 1000(millitonano)) - ((1.22(ticktime) * 12(D' ...
  'ata min pulse) * 1000(millitonano)) * 0.2(clock drift))]'];
HWTQ10DATAPLSLOLIM_NANOSEC_U32.DocUnits = 'NanoSec';
HWTQ10DATAPLSLOLIM_NANOSEC_U32.EngDT = dt.u32;
HWTQ10DATAPLSLOLIM_NANOSEC_U32.EngVal = 26352;
HWTQ10DATAPLSLOLIM_NANOSEC_U32.Define = 'Local';


HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 10 Manufacturing Ntc Number';
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.Description = 'HwTq10 Manufacturing Ntc Number';
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.IsBuildPrm = false;
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X1E0;
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X1E0;
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X1E3;
HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM.Define = 'Global';


HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 10 Protocol Fault NTC Number';
HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM.Description = [...
  'Handwheel Torque 10 Protocol Fault NTC Number'];
HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X073;
HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X073;
HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X07A;
HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM.Define = 'Global';


HWTQ10OFFS_HWNWTMTR_F32 = DataDict.Constant;
HWTQ10OFFS_HWNWTMTR_F32.LongName = 'Handwheel Torque 9 Offset';
HWTQ10OFFS_HWNWTMTR_F32.Description = [...
  'Number of ticks that represent sync pulse'];
HWTQ10OFFS_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
HWTQ10OFFS_HWNWTMTR_F32.EngDT = dt.float32;
HWTQ10OFFS_HWNWTMTR_F32.EngVal = 10;
HWTQ10OFFS_HWNWTMTR_F32.Define = 'Local';


HWTQ10PRTCLFLTFAILSTEP_CNT_U16 = DataDict.Constant;
HWTQ10PRTCLFLTFAILSTEP_CNT_U16.LongName = 'Handwheel Torque 10 Protocol Fault Fail Step';
HWTQ10PRTCLFLTFAILSTEP_CNT_U16.Description = [...
  'Debounce Fail Step for handwheel torque Diagnostic'];
HWTQ10PRTCLFLTFAILSTEP_CNT_U16.DocUnits = 'Cnt';
HWTQ10PRTCLFLTFAILSTEP_CNT_U16.EngDT = dt.u16;
HWTQ10PRTCLFLTFAILSTEP_CNT_U16.EngVal = 3276;
HWTQ10PRTCLFLTFAILSTEP_CNT_U16.Define = 'Local';


HWTQ10PRTCLFLTPASSSTEP_CNT_U16 = DataDict.Constant;
HWTQ10PRTCLFLTPASSSTEP_CNT_U16.LongName = 'Handwheel Torque 10 Protocol Faul Pass Step';
HWTQ10PRTCLFLTPASSSTEP_CNT_U16.Description = [...
  'Debounce Pass Step for handhweel torque Diagnostic'];
HWTQ10PRTCLFLTPASSSTEP_CNT_U16.DocUnits = 'Cnt';
HWTQ10PRTCLFLTPASSSTEP_CNT_U16.EngDT = dt.u16;
HWTQ10PRTCLFLTPASSSTEP_CNT_U16.EngVal = 655;
HWTQ10PRTCLFLTPASSSTEP_CNT_U16.Define = 'Local';


HWTQ10RAWDATAOFFS_CNT_U16 = DataDict.Constant;
HWTQ10RAWDATAOFFS_CNT_U16.LongName = 'Handwheel Torque 10 Raw Data Offset';
HWTQ10RAWDATAOFFS_CNT_U16.Description = [...
  'Offset used to decode the SENT data'];
HWTQ10RAWDATAOFFS_CNT_U16.DocUnits = 'Cnt';
HWTQ10RAWDATAOFFS_CNT_U16.EngDT = dt.u16;
HWTQ10RAWDATAOFFS_CNT_U16.EngVal = 12;
HWTQ10RAWDATAOFFS_CNT_U16.Define = 'Local';


HWTQ10SNVTY_HWNWTMTRPERCNT_F32 = DataDict.Constant;
HWTQ10SNVTY_HWNWTMTRPERCNT_F32.LongName = 'Handwheel Torque 10 Sensitivity';
HWTQ10SNVTY_HWNWTMTRPERCNT_F32.Description = [...
  'Number of ticks that represent sync pulse'];
HWTQ10SNVTY_HWNWTMTRPERCNT_F32.DocUnits = 'HwNwtMtrPerCnt';
HWTQ10SNVTY_HWNWTMTRPERCNT_F32.EngDT = dt.float32;
HWTQ10SNVTY_HWNWTMTRPERCNT_F32.EngVal = 0.0048828125;
HWTQ10SNVTY_HWNWTMTRPERCNT_F32.Define = 'Local';


HWTQ10STSMASK_CNT_U16 = DataDict.Constant;
HWTQ10STSMASK_CNT_U16.LongName = 'Handwheel Torque 10 Status Mask';
HWTQ10STSMASK_CNT_U16.Description = [...
  'MAsk value used to flush out the status bits'];
HWTQ10STSMASK_CNT_U16.DocUnits = 'Cnt';
HWTQ10STSMASK_CNT_U16.EngDT = dt.u16;
HWTQ10STSMASK_CNT_U16.EngVal = 3;
HWTQ10STSMASK_CNT_U16.Define = 'Local';


HWTQ10SYNCPLSHILIM_NANOSEC_U32 = DataDict.Constant;
HWTQ10SYNCPLSHILIM_NANOSEC_U32.LongName = 'Handwheel Torque 10 Sync Pulse High Limit';
HWTQ10SYNCPLSHILIM_NANOSEC_U32.Description = [...
  'Sync pulses range check High limit - Calculation formula [(1.22(tickti' ...
  'me) * 56(sync pulse) * 1000(millitonano)) + ((1.22(ticktime) * 56(sync' ...
  ' pulse) * 1000(millitonano)) * 0.2(clock drift))] '];
HWTQ10SYNCPLSHILIM_NANOSEC_U32.DocUnits = 'NanoSec';
HWTQ10SYNCPLSHILIM_NANOSEC_U32.EngDT = dt.u32;
HWTQ10SYNCPLSHILIM_NANOSEC_U32.EngVal = 81984;
HWTQ10SYNCPLSHILIM_NANOSEC_U32.Define = 'Local';


HWTQ10SYNCPLSLOLIM_NANOSEC_U32 = DataDict.Constant;
HWTQ10SYNCPLSLOLIM_NANOSEC_U32.LongName = 'Handwheel Torque 10 Sync Pulse Low Limit';
HWTQ10SYNCPLSLOLIM_NANOSEC_U32.Description = [...
  'Sync pulses range check Low limit - Calculation formula [(1.22(ticktim' ...
  'e) * 56(sync pulse) * 1000(millitonano)) - ((1.22(ticktime) * 56(sync ' ...
  'pulse) * 1000(millitonano)) * 0.2(clock drift))]'];
HWTQ10SYNCPLSLOLIM_NANOSEC_U32.DocUnits = 'NanoSec';
HWTQ10SYNCPLSLOLIM_NANOSEC_U32.EngDT = dt.u32;
HWTQ10SYNCPLSLOLIM_NANOSEC_U32.EngVal = 54656;
HWTQ10SYNCPLSLOLIM_NANOSEC_U32.Define = 'Local';


HWTQ10TISTAMPROLLOVER_NANOSEC_S32 = DataDict.Constant;
HWTQ10TISTAMPROLLOVER_NANOSEC_S32.LongName = 'Handwheel Torque 10 Time Stamp Roll Over';
HWTQ10TISTAMPROLLOVER_NANOSEC_S32.Description = [...
  'Value used to account for the roll over of the time stamp data'];
HWTQ10TISTAMPROLLOVER_NANOSEC_S32.DocUnits = 'NanoSec';
HWTQ10TISTAMPROLLOVER_NANOSEC_S32.EngDT = dt.s32;
HWTQ10TISTAMPROLLOVER_NANOSEC_S32.EngVal = 8388607;
HWTQ10TISTAMPROLLOVER_NANOSEC_S32.Define = 'Local';


RAWCRCIDX_CNT_U08 = DataDict.Constant;
RAWCRCIDX_CNT_U08.LongName = 'Raw Crc Index';
RAWCRCIDX_CNT_U08.Description = 'Crc value pointer';
RAWCRCIDX_CNT_U08.DocUnits = 'Cnt';
RAWCRCIDX_CNT_U08.EngDT = dt.u08;
RAWCRCIDX_CNT_U08.EngVal = 4;
RAWCRCIDX_CNT_U08.Define = 'Local';


RAWDATA0IDX_CNT_U08 = DataDict.Constant;
RAWDATA0IDX_CNT_U08.LongName = 'Raw Data 0 Index';
RAWDATA0IDX_CNT_U08.Description = [...
  'Value used to get data 0 value from the buffer'];
RAWDATA0IDX_CNT_U08.DocUnits = 'Cnt';
RAWDATA0IDX_CNT_U08.EngDT = dt.u08;
RAWDATA0IDX_CNT_U08.EngVal = 1;
RAWDATA0IDX_CNT_U08.Define = 'Local';


RAWDATA1IDX_CNT_U08 = DataDict.Constant;
RAWDATA1IDX_CNT_U08.LongName = 'Raw Data 1 Index';
RAWDATA1IDX_CNT_U08.Description = [...
  'Value used to get data 1 value from the processed buffer'];
RAWDATA1IDX_CNT_U08.DocUnits = 'Cnt';
RAWDATA1IDX_CNT_U08.EngDT = dt.u08;
RAWDATA1IDX_CNT_U08.EngVal = 2;
RAWDATA1IDX_CNT_U08.Define = 'Local';


RAWDATA2IDX_CNT_U08 = DataDict.Constant;
RAWDATA2IDX_CNT_U08.LongName = 'Raw Data 2 Index';
RAWDATA2IDX_CNT_U08.Description = [...
  'Value used to get data 2 value from the processed buffer'];
RAWDATA2IDX_CNT_U08.DocUnits = 'Cnt';
RAWDATA2IDX_CNT_U08.EngDT = dt.u08;
RAWDATA2IDX_CNT_U08.EngVal = 3;
RAWDATA2IDX_CNT_U08.Define = 'Local';


RAWSTSIDX_CNT_U08 = DataDict.Constant;
RAWSTSIDX_CNT_U08.LongName = 'Raw Status Index';
RAWSTSIDX_CNT_U08.Description = [...
  'Value used to get status value from the processed buffer'];
RAWSTSIDX_CNT_U08.DocUnits = 'Cnt';
RAWSTSIDX_CNT_U08.EngDT = dt.u08;
RAWSTSIDX_CNT_U08.EngVal = 0;
RAWSTSIDX_CNT_U08.Define = 'Local';


ROUNDFAC_CNT_F32 = DataDict.Constant;
ROUNDFAC_CNT_F32.LongName = 'Round Factor';
ROUNDFAC_CNT_F32.Description = [...
  'Rounding factor used for floating point to fixed point conversion'];
ROUNDFAC_CNT_F32.DocUnits = 'Cnt';
ROUNDFAC_CNT_F32.EngDT = dt.float32;
ROUNDFAC_CNT_F32.EngVal = 0.5;
ROUNDFAC_CNT_F32.Define = 'Local';


SENTDATA0SHIFT_CNT_U16 = DataDict.Constant;
SENTDATA0SHIFT_CNT_U16.LongName = 'Sent Data 0 Shift';
SENTDATA0SHIFT_CNT_U16.Description = [...
  'Value used to bitpack the the raw sent data'];
SENTDATA0SHIFT_CNT_U16.DocUnits = 'Cnt';
SENTDATA0SHIFT_CNT_U16.EngDT = dt.u16;
SENTDATA0SHIFT_CNT_U16.EngVal = 8;
SENTDATA0SHIFT_CNT_U16.Define = 'Local';


SENTDATA1SHIFT_CNT_U16 = DataDict.Constant;
SENTDATA1SHIFT_CNT_U16.LongName = 'Sent Data 1 Shift';
SENTDATA1SHIFT_CNT_U16.Description = [...
  'Value used to bitpack the the raw sent data'];
SENTDATA1SHIFT_CNT_U16.DocUnits = 'Cnt';
SENTDATA1SHIFT_CNT_U16.EngDT = dt.u16;
SENTDATA1SHIFT_CNT_U16.EngVal = 4;
SENTDATA1SHIFT_CNT_U16.Define = 'Local';


STSFLTPARAMBYTE_CNT_U08 = DataDict.Constant;
STSFLTPARAMBYTE_CNT_U08.LongName = 'Status Fault Parameter Byte';
STSFLTPARAMBYTE_CNT_U08.Description = 'status fault parameter byte';
STSFLTPARAMBYTE_CNT_U08.DocUnits = 'Cnt';
STSFLTPARAMBYTE_CNT_U08.EngDT = dt.u08;
STSFLTPARAMBYTE_CNT_U08.EngVal = 1;
STSFLTPARAMBYTE_CNT_U08.Define = 'Local';


STSIDX_CNT_U08 = DataDict.Constant;
STSIDX_CNT_U08.LongName = 'Status Index';
STSIDX_CNT_U08.Description = [...
  'Number of ticks that represents the sync pulse'];
STSIDX_CNT_U08.DocUnits = 'Cnt';
STSIDX_CNT_U08.EngDT = dt.u08;
STSIDX_CNT_U08.EngVal = 2;
STSIDX_CNT_U08.Define = 'Local';


SYNCPLS_CNT_F32 = DataDict.Constant;
SYNCPLS_CNT_F32.LongName = 'Sync Pulse';
SYNCPLS_CNT_F32.Description = [...
  'Number of ticks that represents the sync pulse'];
SYNCPLS_CNT_F32.DocUnits = 'Cnt';
SYNCPLS_CNT_F32.EngDT = dt.float32;
SYNCPLS_CNT_F32.EngVal = 56;
SYNCPLS_CNT_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwTq10MfgFlt = DataDict.NTC;
HwTq10MfgFlt.NtcNr = 'HWTQ10MEAS_HWTQ10MFGNTCNR_CNT_ENUM';
HwTq10MfgFlt.NtcTyp = 'None';
HwTq10MfgFlt.LongName = 'Handwheel Torque 10 Manufacturing Fault';
HwTq10MfgFlt.Description = 'Fault is set when the Handwheel Torque 10 offset trim service not performed';
HwTq10MfgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq10MfgFlt.NtcStInfo.Bit0Descr = 'Offset Trim Not Performed';
HwTq10MfgFlt.NtcStInfo.Bit1Descr = 'Unused';
HwTq10MfgFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq10MfgFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq10MfgFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq10MfgFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq10MfgFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq10MfgFlt.NtcStInfo.Bit7Descr = 'Unused';
HwTq10MfgFlt.NtcStsLockdThisIgnCyc = 0;


HwTq10PrtclFlt = DataDict.NTC;
HwTq10PrtclFlt.NtcNr = 'HWTQ10MEAS_HWTQ10PRTCLFLTNTCNR_CNT_ENUM';
HwTq10PrtclFlt.NtcTyp = 'Deb';
HwTq10PrtclFlt.LongName = 'Handwheel Torque 10 Protocol Fault';
HwTq10PrtclFlt.Description = 'The NTC flag that is used to indicate a Handwheel Torque 10 fault';
HwTq10PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq10PrtclFlt.NtcStInfo.Bit0Descr = 'No Data Error';
HwTq10PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwTq10PrtclFlt.NtcStInfo.Bit2Descr = 'Crc Failure';
HwTq10PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq10PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq10PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq10PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq10PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';
HwTq10PrtclFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
