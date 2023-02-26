%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Jan-2018 18:16:09       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES224A = DataDict.FDD;
ES224A.Version = '1.7.X';
ES224A.LongName = 'Handwheel Torque 9 Measurement';
ES224A.ShoName  = 'HwTq9Meas';
ES224A.DesignASIL = 'D';
ES224A.Description = [...
  'HwTq9Meas funtion shall compute handwheel torque by decoding the SENT ' ...
  'protocol based on the timestamps provided by the GTM'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTq9MeasInit1 = DataDict.Runnable;
HwTq9MeasInit1.Context = 'Rte';
HwTq9MeasInit1.TimeStep = 0;
HwTq9MeasInit1.Description = 'Initialization';

HwTq9MeasPer1 = DataDict.Runnable;
HwTq9MeasPer1.Context = 'Rte';
HwTq9MeasPer1.TimeStep = 0.002;
HwTq9MeasPer1.Description = 'Periodic event at 2ms rate';

HwTq9MeasPer2 = DataDict.Runnable;
HwTq9MeasPer2.Context = 'Rte';
HwTq9MeasPer2.TimeStep = 0.1;
HwTq9MeasPer2.Description = 'Periodic event at 100ms rate';

HwTq9MeasHwTq9AutTrim = DataDict.SrvRunnable;
HwTq9MeasHwTq9AutTrim.Context = 'Rte';
HwTq9MeasHwTq9AutTrim.Description = [...
  'Handwheel Torque 9 Measurement Handwheel Torque 9 Auto trim service'];
HwTq9MeasHwTq9AutTrim.Return = DataDict.CSReturn;
HwTq9MeasHwTq9AutTrim.Return.Type = 'None';
HwTq9MeasHwTq9AutTrim.Return.Min = [];
HwTq9MeasHwTq9AutTrim.Return.Max = [];
HwTq9MeasHwTq9AutTrim.Return.TestTolerance = [];

HwTq9MeasHwTq9ClrTrim = DataDict.SrvRunnable;
HwTq9MeasHwTq9ClrTrim.Context = 'Rte';
HwTq9MeasHwTq9ClrTrim.Description = [...
  'Handwheel Torque 9 Measurement Handwheel Torque 9 Clear Trim Service'];
HwTq9MeasHwTq9ClrTrim.Return = DataDict.CSReturn;
HwTq9MeasHwTq9ClrTrim.Return.Type = 'None';
HwTq9MeasHwTq9ClrTrim.Return.Min = [];
HwTq9MeasHwTq9ClrTrim.Return.Max = [];
HwTq9MeasHwTq9ClrTrim.Return.TestTolerance = [];

HwTq9MeasHwTq9ReadTrim = DataDict.SrvRunnable;
HwTq9MeasHwTq9ReadTrim.Context = 'Rte';
HwTq9MeasHwTq9ReadTrim.Description = [...
  'Handwheel Torque 9 Measurement Handwheel Torque 9 Read Trim Service'];
HwTq9MeasHwTq9ReadTrim.Return = DataDict.CSReturn;
HwTq9MeasHwTq9ReadTrim.Return.Type = 'None';
HwTq9MeasHwTq9ReadTrim.Return.Min = [];
HwTq9MeasHwTq9ReadTrim.Return.Max = [];
HwTq9MeasHwTq9ReadTrim.Return.TestTolerance = [];
HwTq9MeasHwTq9ReadTrim.Arguments(1) = DataDict.CSArguments;
HwTq9MeasHwTq9ReadTrim.Arguments(1).Name = 'HwTqReadTrimData';
HwTq9MeasHwTq9ReadTrim.Arguments(1).EngDT = dt.float32;
HwTq9MeasHwTq9ReadTrim.Arguments(1).EngMin = -10;
HwTq9MeasHwTq9ReadTrim.Arguments(1).EngMax = 10;
HwTq9MeasHwTq9ReadTrim.Arguments(1).TestTolerance = 0;
HwTq9MeasHwTq9ReadTrim.Arguments(1).Units = 'HwNm';
HwTq9MeasHwTq9ReadTrim.Arguments(1).Direction = 'Out';
HwTq9MeasHwTq9ReadTrim.Arguments(1).InitRowCol = [1  1];
HwTq9MeasHwTq9ReadTrim.Arguments(1).Description = 'Value of the trim data';

HwTq9MeasHwTq9TrimPrfmdSts = DataDict.SrvRunnable;
HwTq9MeasHwTq9TrimPrfmdSts.Context = 'Rte';
HwTq9MeasHwTq9TrimPrfmdSts.Description = [...
  'Handwheel Torque 9 Measurement Handwheel Torque 9 Trim Read Service'];
HwTq9MeasHwTq9TrimPrfmdSts.Return = DataDict.CSReturn;
HwTq9MeasHwTq9TrimPrfmdSts.Return.Type = 'None';
HwTq9MeasHwTq9TrimPrfmdSts.Return.Min = [];
HwTq9MeasHwTq9TrimPrfmdSts.Return.Max = [];
HwTq9MeasHwTq9TrimPrfmdSts.Return.TestTolerance = [];
HwTq9MeasHwTq9TrimPrfmdSts.Arguments(1) = DataDict.CSArguments;
HwTq9MeasHwTq9TrimPrfmdSts.Arguments(1).Name = 'HwTqOffsTrimPrfmdStsData';
HwTq9MeasHwTq9TrimPrfmdSts.Arguments(1).EngDT = dt.lgc;
HwTq9MeasHwTq9TrimPrfmdSts.Arguments(1).EngMin = 0;
HwTq9MeasHwTq9TrimPrfmdSts.Arguments(1).EngMax = 1;
HwTq9MeasHwTq9TrimPrfmdSts.Arguments(1).TestTolerance = 0;
HwTq9MeasHwTq9TrimPrfmdSts.Arguments(1).Units = 'Lgc';
HwTq9MeasHwTq9TrimPrfmdSts.Arguments(1).Direction = 'Out';
HwTq9MeasHwTq9TrimPrfmdSts.Arguments(1).InitRowCol = [1  1];
HwTq9MeasHwTq9TrimPrfmdSts.Arguments(1).Description = 'Value of the trim performed status';

HwTq9MeasHwTq9WrTrim = DataDict.SrvRunnable;
HwTq9MeasHwTq9WrTrim.Context = 'Rte';
HwTq9MeasHwTq9WrTrim.Description = [...
  'Handwheel Torque 9 Measurement Handwheel Torque 9 Wrtie Trim Service'];
HwTq9MeasHwTq9WrTrim.Return = DataDict.CSReturn;
HwTq9MeasHwTq9WrTrim.Return.Type = 'None';
HwTq9MeasHwTq9WrTrim.Return.Min = [];
HwTq9MeasHwTq9WrTrim.Return.Max = [];
HwTq9MeasHwTq9WrTrim.Return.TestTolerance = [];
HwTq9MeasHwTq9WrTrim.Arguments(1) = DataDict.CSArguments;
HwTq9MeasHwTq9WrTrim.Arguments(1).Name = 'HwTqWrOffsTrimData';
HwTq9MeasHwTq9WrTrim.Arguments(1).EngDT = dt.float32;
HwTq9MeasHwTq9WrTrim.Arguments(1).EngMin = -10;
HwTq9MeasHwTq9WrTrim.Arguments(1).EngMax = 10;
HwTq9MeasHwTq9WrTrim.Arguments(1).Units = 'HwNm';
HwTq9MeasHwTq9WrTrim.Arguments(1).Direction = 'In';
HwTq9MeasHwTq9WrTrim.Arguments(1).InitRowCol = [1  1];
HwTq9MeasHwTq9WrTrim.Arguments(1).Description = 'Value written in as the trim value';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwTq9MeasPer1'};
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


GtmGetSent0Data = DataDict.Client;
GtmGetSent0Data.CallLocation = {'HwTq9MeasPer1'};
GtmGetSent0Data.Description = [...
  'Server Runnable for getting Sent Data from generic timer module'];
GtmGetSent0Data.Return = DataDict.CSReturn;
GtmGetSent0Data.Return.Type = 'Standard';
GtmGetSent0Data.Return.Min = 0;
GtmGetSent0Data.Return.Max = 1;
GtmGetSent0Data.Return.TestTolerance = 0;
GtmGetSent0Data.Return.Description = 'Return for the Server runnable';
GtmGetSent0Data.Arguments(1) = DataDict.CSArguments;
GtmGetSent0Data.Arguments(1).Name = 'BufStrt';
GtmGetSent0Data.Arguments(1).EngDT = dt.u32;
GtmGetSent0Data.Arguments(1).EngMin = 0;
GtmGetSent0Data.Arguments(1).EngMax = 4294967295;
GtmGetSent0Data.Arguments(1).TestTolerance = 999;
GtmGetSent0Data.Arguments(1).Units = 'Cnt';
GtmGetSent0Data.Arguments(1).Direction = 'Out';
GtmGetSent0Data.Arguments(1).InitRowCol = [1  32];
GtmGetSent0Data.Arguments(1).Description = [...
  'Argument passed is the address of a buffer'];


HwTq9Offs_GetErrorStatus = DataDict.Client;
HwTq9Offs_GetErrorStatus.CallLocation = {'HwTq9MeasInit1'};
HwTq9Offs_GetErrorStatus.Description = [...
  'Client to get Handwheel Torque 9 NvMs error status'];
HwTq9Offs_GetErrorStatus.Return = DataDict.CSReturn;
HwTq9Offs_GetErrorStatus.Return.Type = 'Standard';
HwTq9Offs_GetErrorStatus.Return.Min = 0;
HwTq9Offs_GetErrorStatus.Return.Max = 1;
HwTq9Offs_GetErrorStatus.Return.TestTolerance = 0;
HwTq9Offs_GetErrorStatus.Return.Description = 'Return perameters ';
HwTq9Offs_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
HwTq9Offs_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
HwTq9Offs_GetErrorStatus.Arguments(1).EngDT = dt.u08;
HwTq9Offs_GetErrorStatus.Arguments(1).EngMin = 0;
HwTq9Offs_GetErrorStatus.Arguments(1).EngMax = 255;
HwTq9Offs_GetErrorStatus.Arguments(1).TestTolerance = 0;
HwTq9Offs_GetErrorStatus.Arguments(1).Units = 'Cnt';
HwTq9Offs_GetErrorStatus.Arguments(1).Direction = 'Out';
HwTq9Offs_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
HwTq9Offs_GetErrorStatus.Arguments(1).Description = [...
  'Polarity for requested error status result'];


HwTq9Offs_SetRamBlockStatus = DataDict.Client;
HwTq9Offs_SetRamBlockStatus.CallLocation = {'HwTq9AutTrim','HwTq9ClrTrim','HwTq9WrTrim'};
HwTq9Offs_SetRamBlockStatus.Description = 'Set Ram Block Status';
HwTq9Offs_SetRamBlockStatus.Return = DataDict.CSReturn;
HwTq9Offs_SetRamBlockStatus.Return.Type = 'Standard';
HwTq9Offs_SetRamBlockStatus.Return.Min = 0;
HwTq9Offs_SetRamBlockStatus.Return.Max = 1;
HwTq9Offs_SetRamBlockStatus.Return.TestTolerance = 0;
HwTq9Offs_SetRamBlockStatus.Return.Description = 'Return of the Srv Runnable';
HwTq9Offs_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwTq9Offs_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwTq9Offs_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwTq9Offs_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwTq9Offs_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwTq9Offs_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwTq9Offs_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwTq9Offs_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
HwTq9Offs_SetRamBlockStatus.Arguments(1).Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwTq9MeasPer2'};
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
SetNtcStsAndSnpshtData.CallLocation = {'HwTq9MeasPer1'};
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
HwTq9Polarity = DataDict.IpSignal;
HwTq9Polarity.LongName = 'Handwheel Torque 9 Polarity';
HwTq9Polarity.Description = 'Handwheel Torque 9 Polarity';
HwTq9Polarity.DocUnits = 'Uls';
HwTq9Polarity.EngDT = dt.s08;
HwTq9Polarity.EngInit = 1;
HwTq9Polarity.EngMin = -1;
HwTq9Polarity.EngMax = 1;
HwTq9Polarity.ReadIn = {'HwTq9MeasPer1'};
HwTq9Polarity.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTq9 = DataDict.OpSignal;
HwTq9.LongName = 'Handwheel Torque 9';
HwTq9.Description = 'Handwheel Torque 9 value';
HwTq9.DocUnits = 'HwNwtMtr';
HwTq9.SwcShoName = 'HwTq9Meas';
HwTq9.EngDT = dt.float32;
HwTq9.EngInit = 0;
HwTq9.EngMin = -10;
HwTq9.EngMax = 10;
HwTq9.TestTolerance = 0.0048828125;
HwTq9.WrittenIn = {'HwTq9MeasPer1'};
HwTq9.WriteType = 'Rte';


HwTq9Qlfr = DataDict.OpSignal;
HwTq9Qlfr.LongName = 'Handwheel Torque 9 Qualifier';
HwTq9Qlfr.Description = 'Handwheel Torque 9 Qualifier';
HwTq9Qlfr.DocUnits = 'Cnt';
HwTq9Qlfr.SwcShoName = 'HwTq9Meas';
HwTq9Qlfr.EngDT = enum.SigQlfr1;
HwTq9Qlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTq9Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTq9Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTq9Qlfr.TestTolerance = 0;
HwTq9Qlfr.WrittenIn = {'HwTq9MeasPer1'};
HwTq9Qlfr.WriteType = 'Rte';


HwTq9RollgCntr = DataDict.OpSignal;
HwTq9RollgCntr.LongName = 'Handwheel Torque 9 Rolling Counter';
HwTq9RollgCntr.Description = 'Handwheel Torque 9 Rolling Counter';
HwTq9RollgCntr.DocUnits = 'Cnt';
HwTq9RollgCntr.SwcShoName = 'HwTq9Meas';
HwTq9RollgCntr.EngDT = dt.u08;
HwTq9RollgCntr.EngInit = 0;
HwTq9RollgCntr.EngMin = 0;
HwTq9RollgCntr.EngMax = 255;
HwTq9RollgCntr.TestTolerance = 0;
HwTq9RollgCntr.WrittenIn = {'HwTq9MeasPer1'};
HwTq9RollgCntr.WriteType = 'Rte';



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
HwTq9Offs = DataDict.NVM;
HwTq9Offs.LongName = 'Handwheel Torque 9 Offset';
HwTq9Offs.Description = [...
  'Handwheel Torque 9 Offset NVM store'];
HwTq9Offs.DocUnits = 'Uls';
HwTq9Offs.EngDT = struct.HwTqOffsRec1;
HwTq9Offs.EngInit = [];
HwTq9Offs.EngMin = [struct('OffsTrim',-10,'OffsTrimPrfmdSts',0)];
HwTq9Offs.EngMax = [struct('OffsTrim',10,'OffsTrimPrfmdSts',1)];
HwTq9Offs.CustomerVisible = false;
HwTq9Offs.Impact = 'H';
HwTq9Offs.TuningOwner = 'FDD';
HwTq9Offs.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwTq9PrevHwTq = DataDict.PIM;
HwTq9PrevHwTq.LongName = 'Handwheel Torque 9 Previous Handwheel Torque';
HwTq9PrevHwTq.Description = 'Previous Handwheel Torque Value';
HwTq9PrevHwTq.DocUnits = 'HwNwtMtr';
HwTq9PrevHwTq.EngDT = dt.float32;
HwTq9PrevHwTq.EngMin = -10;
HwTq9PrevHwTq.EngMax = 10;
HwTq9PrevHwTq.InitRowCol = [1  1];


HwTq9RawDataBuf = DataDict.PIM;
HwTq9RawDataBuf.LongName = 'Handwheel Torque 9 Raw Data Buffer';
HwTq9RawDataBuf.Description = [...
  'Buffer that captures the timestamps recieved from the GTM client'];
HwTq9RawDataBuf.DocUnits = 'Cnt';
HwTq9RawDataBuf.EngDT = dt.u16;
HwTq9RawDataBuf.EngMin = 0;
HwTq9RawDataBuf.EngMax = 15;
HwTq9RawDataBuf.InitRowCol = [5  1];


HwTq9RollgCntrPrev = DataDict.PIM;
HwTq9RollgCntrPrev.LongName = 'Handwheel Torque 9 Rolling Counter Previous';
HwTq9RollgCntrPrev.Description = 'Previous Rolling Counter Value';
HwTq9RollgCntrPrev.DocUnits = 'Cnt';
HwTq9RollgCntrPrev.EngDT = dt.u08;
HwTq9RollgCntrPrev.EngMin = 0;
HwTq9RollgCntrPrev.EngMax = 255;
HwTq9RollgCntrPrev.InitRowCol = [1  1];


HwTq9TiStamp = DataDict.PIM;
HwTq9TiStamp.LongName = 'Handwheel Torque 9 Time Stamp';
HwTq9TiStamp.Description = [...
  'Timestamp of the recieved SENT data'];
HwTq9TiStamp.DocUnits = 'Cnt';
HwTq9TiStamp.EngDT = dt.u32;
HwTq9TiStamp.EngMin = 0;
HwTq9TiStamp.EngMax = 16777215;
HwTq9TiStamp.InitRowCol = [1  1];


HwTq9TiStampPrev = DataDict.PIM;
HwTq9TiStampPrev.LongName = 'Handwheel Torque 9 Time Stamp Previous';
HwTq9TiStampPrev.Description = 'Previous loops timestamp value';
HwTq9TiStampPrev.DocUnits = 'Cnt';
HwTq9TiStampPrev.EngDT = dt.u32;
HwTq9TiStampPrev.EngMin = 0;
HwTq9TiStampPrev.EngMax = 16777215;
HwTq9TiStampPrev.InitRowCol = [1  1];



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


HWTQ9BUFIDX_CNT_U08 = DataDict.Constant;
HWTQ9BUFIDX_CNT_U08.LongName = 'Handwheel Torque 9 Buffer Index';
HWTQ9BUFIDX_CNT_U08.Description = [...
  'Buffer index to parse through the global buffer'];
HWTQ9BUFIDX_CNT_U08.DocUnits = 'Cnt';
HWTQ9BUFIDX_CNT_U08.EngDT = dt.u08;
HWTQ9BUFIDX_CNT_U08.EngVal = 32;
HWTQ9BUFIDX_CNT_U08.Define = 'Local';


HWTQ9DATAPLSHILIM_NANOSEC_U32 = DataDict.Constant;
HWTQ9DATAPLSHILIM_NANOSEC_U32.LongName = 'Handwheel Torque 9 Data Pulse High Limit';
HWTQ9DATAPLSHILIM_NANOSEC_U32.Description = [...
  'Data pulses range check high limit - Calculation formula [(1.22(tickti' ...
  'me) * 27(Data max pulse) * 1000(millitonano)) + ((1.22(ticktime) * 27(' ...
  'Data max pulse) * 1000(millitonano)) * 0.2(clock drift))]'];
HWTQ9DATAPLSHILIM_NANOSEC_U32.DocUnits = 'NanoSec';
HWTQ9DATAPLSHILIM_NANOSEC_U32.EngDT = dt.u32;
HWTQ9DATAPLSHILIM_NANOSEC_U32.EngVal = 39528;
HWTQ9DATAPLSHILIM_NANOSEC_U32.Define = 'Local';


HWTQ9DATAPLSLOLIM_NANOSEC_U32 = DataDict.Constant;
HWTQ9DATAPLSLOLIM_NANOSEC_U32.LongName = 'Handwheel Torque 9 Data Pulse Low Limit';
HWTQ9DATAPLSLOLIM_NANOSEC_U32.Description = [...
  'Data pulses range check Low limit - Calculation formula [(1.22(ticktim' ...
  'e) * 12(Data min pulse) * 1000(millitonano)) - ((1.22(ticktime) * 12(D' ...
  'ata min pulse) * 1000(millitonano)) * 0.2(clock drift))]'];
HWTQ9DATAPLSLOLIM_NANOSEC_U32.DocUnits = 'NanoSec';
HWTQ9DATAPLSLOLIM_NANOSEC_U32.EngDT = dt.u32;
HWTQ9DATAPLSLOLIM_NANOSEC_U32.EngVal = 26352;
HWTQ9DATAPLSLOLIM_NANOSEC_U32.Define = 'Local';


HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 9 Manufacturing Ntc Number';
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.Description = 'HwTq1 Manufacturing Ntc Number';
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.IsBuildPrm = false;
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X1E0;
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X1E0;
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X1E3;
HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM.Define = 'Global';


HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM.LongName = 'Handwheel Torque 9 Protocol Fault NTC Number';
HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM.Description = [...
  'Handwheel Torque 9 Protocol Fault NTC Number'];
HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X073;
HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X073;
HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X07A;
HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM.Define = 'Global';


HWTQ9OFFS_HWNWTMTR_F32 = DataDict.Constant;
HWTQ9OFFS_HWNWTMTR_F32.LongName = 'Handwheel Torque 9 Offset';
HWTQ9OFFS_HWNWTMTR_F32.Description = [...
  'Number of ticks that represent sync pulse'];
HWTQ9OFFS_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
HWTQ9OFFS_HWNWTMTR_F32.EngDT = dt.float32;
HWTQ9OFFS_HWNWTMTR_F32.EngVal = 10;
HWTQ9OFFS_HWNWTMTR_F32.Define = 'Local';


HWTQ9PRTCLFLTFAILSTEP_CNT_U16 = DataDict.Constant;
HWTQ9PRTCLFLTFAILSTEP_CNT_U16.LongName = 'Handwheel Torque 9 Protocol Fault Fail Step';
HWTQ9PRTCLFLTFAILSTEP_CNT_U16.Description = [...
  'Debounce Fail Step for handwheel torque Diagnostic'];
HWTQ9PRTCLFLTFAILSTEP_CNT_U16.DocUnits = 'Cnt';
HWTQ9PRTCLFLTFAILSTEP_CNT_U16.EngDT = dt.u16;
HWTQ9PRTCLFLTFAILSTEP_CNT_U16.EngVal = 3276;
HWTQ9PRTCLFLTFAILSTEP_CNT_U16.Define = 'Local';


HWTQ9PRTCLFLTPASSSTEP_CNT_U16 = DataDict.Constant;
HWTQ9PRTCLFLTPASSSTEP_CNT_U16.LongName = 'Handwheel Torque 9 Protocol Faul Pass Step';
HWTQ9PRTCLFLTPASSSTEP_CNT_U16.Description = [...
  'Debounce Pass Step for handhweel torque Diagnostic'];
HWTQ9PRTCLFLTPASSSTEP_CNT_U16.DocUnits = 'Cnt';
HWTQ9PRTCLFLTPASSSTEP_CNT_U16.EngDT = dt.u16;
HWTQ9PRTCLFLTPASSSTEP_CNT_U16.EngVal = 655;
HWTQ9PRTCLFLTPASSSTEP_CNT_U16.Define = 'Local';


HWTQ9RAWDATAOFFS_CNT_U16 = DataDict.Constant;
HWTQ9RAWDATAOFFS_CNT_U16.LongName = 'Handwheel Torque 9 Raw Data Offset';
HWTQ9RAWDATAOFFS_CNT_U16.Description = [...
  'Offset used to decode the SENT data'];
HWTQ9RAWDATAOFFS_CNT_U16.DocUnits = 'Cnt';
HWTQ9RAWDATAOFFS_CNT_U16.EngDT = dt.u16;
HWTQ9RAWDATAOFFS_CNT_U16.EngVal = 12;
HWTQ9RAWDATAOFFS_CNT_U16.Define = 'Local';


HWTQ9SNVTY_HWNWTMTRPERCNT_F32 = DataDict.Constant;
HWTQ9SNVTY_HWNWTMTRPERCNT_F32.LongName = 'Handwheel Torque 9 Sensitivity';
HWTQ9SNVTY_HWNWTMTRPERCNT_F32.Description = [...
  'Number of ticks that represent sync pulse'];
HWTQ9SNVTY_HWNWTMTRPERCNT_F32.DocUnits = 'HwNwtMtrPerCnt';
HWTQ9SNVTY_HWNWTMTRPERCNT_F32.EngDT = dt.float32;
HWTQ9SNVTY_HWNWTMTRPERCNT_F32.EngVal = 0.0048828125;
HWTQ9SNVTY_HWNWTMTRPERCNT_F32.Define = 'Local';


HWTQ9STSMASK_CNT_U16 = DataDict.Constant;
HWTQ9STSMASK_CNT_U16.LongName = 'Handwheel Torque 9 Status Mask';
HWTQ9STSMASK_CNT_U16.Description = [...
  'MAsk value used to flush out the status bits'];
HWTQ9STSMASK_CNT_U16.DocUnits = 'Cnt';
HWTQ9STSMASK_CNT_U16.EngDT = dt.u16;
HWTQ9STSMASK_CNT_U16.EngVal = 3;
HWTQ9STSMASK_CNT_U16.Define = 'Local';


HWTQ9SYNCPLSHILIM_NANOSEC_U32 = DataDict.Constant;
HWTQ9SYNCPLSHILIM_NANOSEC_U32.LongName = 'Handwheel Torque 9 Sync Pulse High Limit';
HWTQ9SYNCPLSHILIM_NANOSEC_U32.Description = [...
  'Sync pulses range check High limit - Calculation formula [(1.22(tickti' ...
  'me) * 56(sync pulse) * 1000(millitonano)) + ((1.22(ticktime) * 56(sync' ...
  ' pulse) * 1000(millitonano)) * 0.2(clock drift))] '];
HWTQ9SYNCPLSHILIM_NANOSEC_U32.DocUnits = 'NanoSec';
HWTQ9SYNCPLSHILIM_NANOSEC_U32.EngDT = dt.u32;
HWTQ9SYNCPLSHILIM_NANOSEC_U32.EngVal = 81984;
HWTQ9SYNCPLSHILIM_NANOSEC_U32.Define = 'Local';


HWTQ9SYNCPLSLOLIM_NANOSEC_U32 = DataDict.Constant;
HWTQ9SYNCPLSLOLIM_NANOSEC_U32.LongName = 'Handwheel Torque 9 Sync Pulse Low Limit';
HWTQ9SYNCPLSLOLIM_NANOSEC_U32.Description = [...
  'Sync pulses range check Low limit - Calculation formula [(1.22(ticktim' ...
  'e) * 56(sync pulse) * 1000(millitonano)) - ((1.22(ticktime) * 56(sync ' ...
  'pulse) * 1000(millitonano)) * 0.2(clock drift))]'];
HWTQ9SYNCPLSLOLIM_NANOSEC_U32.DocUnits = 'NanoSec';
HWTQ9SYNCPLSLOLIM_NANOSEC_U32.EngDT = dt.u32;
HWTQ9SYNCPLSLOLIM_NANOSEC_U32.EngVal = 54656;
HWTQ9SYNCPLSLOLIM_NANOSEC_U32.Define = 'Local';


HWTQ9TISTAMPROLLOVER_NANOSEC_S32 = DataDict.Constant;
HWTQ9TISTAMPROLLOVER_NANOSEC_S32.LongName = 'Handwheel Torque 9 Time Stamp Roll Over';
HWTQ9TISTAMPROLLOVER_NANOSEC_S32.Description = [...
  'Value used to account for the roll over of the time stamp data'];
HWTQ9TISTAMPROLLOVER_NANOSEC_S32.DocUnits = 'NanoSec';
HWTQ9TISTAMPROLLOVER_NANOSEC_S32.EngDT = dt.s32;
HWTQ9TISTAMPROLLOVER_NANOSEC_S32.EngVal = 8388607;
HWTQ9TISTAMPROLLOVER_NANOSEC_S32.Define = 'Local';


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
HwTq9MfgFlt = DataDict.NTC;
HwTq9MfgFlt.NtcNr = 'HWTQ9MEAS_HWTQ9MFGNTCNR_CNT_ENUM';
HwTq9MfgFlt.NtcTyp = 'None';
HwTq9MfgFlt.LongName = 'Handwheel Torque 9 Manufacturing Fault';
HwTq9MfgFlt.Description = 'Fault is set when the handwheel Torque 9 offset trim service not performed';
HwTq9MfgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq9MfgFlt.NtcStInfo.Bit0Descr = 'Offset Trim Not Performed';
HwTq9MfgFlt.NtcStInfo.Bit1Descr = 'Unused';
HwTq9MfgFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq9MfgFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq9MfgFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq9MfgFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq9MfgFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq9MfgFlt.NtcStInfo.Bit7Descr = 'Unused';
HwTq9MfgFlt.NtcStsLockdThisIgnCyc = 0;


HwTq9PrtclFlt = DataDict.NTC;
HwTq9PrtclFlt.NtcNr = 'HWTQ9MEAS_HWTQ9PRTCLFLTNTCNR_CNT_ENUM';
HwTq9PrtclFlt.NtcTyp = 'Deb';
HwTq9PrtclFlt.LongName = 'Handwheel Torque 9 Protocol Fault';
HwTq9PrtclFlt.Description = 'The NTC flag that is used to indicate a Handwheel Torque 9 fault';
HwTq9PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq9PrtclFlt.NtcStInfo.Bit0Descr = 'No Data Error';
HwTq9PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwTq9PrtclFlt.NtcStInfo.Bit2Descr = 'Crc Failure';
HwTq9PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq9PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq9PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq9PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq9PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';
HwTq9PrtclFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
