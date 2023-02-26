%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 27-Jul-2017 11:09:51       %
%                                  Created with tool release: 2.58.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM670A = DataDict.FDD;
CM670A.Version = '3.1.x';
CM670A.LongName = 'Handwheel Angle 1 Measurement';
CM670A.ShoName  = 'HwAg1Meas';
CM670A.DesignASIL = 'D';
CM670A.Description = [...
  'HandWheel Angle Sensor 1 Measurement Function reads 10th Tooth and 11t' ...
  'h Tooth Spur Handwheel angles over SENT and compute absolute Handwheel' ...
  ' Angle 1. Function also provides Fault Injection and Trim Manufacturin' ...
  'g services'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAg1MeasInit1 = DataDict.Runnable;
HwAg1MeasInit1.Context = 'Rte';
HwAg1MeasInit1.TimeStep = 0;
HwAg1MeasInit1.Description = 'Initialization';

HwAg1MeasPer1 = DataDict.Runnable;
HwAg1MeasPer1.Context = 'Rte';
HwAg1MeasPer1.TimeStep = 0.002;
HwAg1MeasPer1.Description = 'Trigger';

HwAg1MeasPer2 = DataDict.Runnable;
HwAg1MeasPer2.Context = 'Rte';
HwAg1MeasPer2.TimeStep = 0.002;
HwAg1MeasPer2.Description = 'Read 10th Tooth Sensor';

HwAg1MeasPer3 = DataDict.Runnable;
HwAg1MeasPer3.Context = 'Rte';
HwAg1MeasPer3.TimeStep = 0.002;
HwAg1MeasPer3.Description = 'Read 11th Tooth Sensor';

HwAg1MeasPer4 = DataDict.Runnable;
HwAg1MeasPer4.Context = 'Rte';
HwAg1MeasPer4.TimeStep = 0.002;
HwAg1MeasPer4.Description = 'HwAg Computation';

HwAg1MeasPer5 = DataDict.Runnable;
HwAg1MeasPer5.Context = 'Rte';
HwAg1MeasPer5.TimeStep = 0.1;
HwAg1MeasPer5.Description = 'Trim Performed Diagnostic';

HwAg1AutTrim = DataDict.SrvRunnable;
HwAg1AutTrim.Context = 'Rte';
HwAg1AutTrim.Description = [...
  'Handwheel Measurement Angle1 Auto Trim'];
HwAg1AutTrim.Return = DataDict.CSReturn;
HwAg1AutTrim.Return.Type = 'None';
HwAg1AutTrim.Return.Min = [];
HwAg1AutTrim.Return.Max = [];
HwAg1AutTrim.Return.TestTolerance = [];

HwAg1ClrLtch = DataDict.SrvRunnable;
HwAg1ClrLtch.Context = 'Rte';
HwAg1ClrLtch.Description = [...
  'Service to clear the Latch Condition'];
HwAg1ClrLtch.Return = DataDict.CSReturn;
HwAg1ClrLtch.Return.Type = 'None';
HwAg1ClrLtch.Return.Min = [];
HwAg1ClrLtch.Return.Max = [];
HwAg1ClrLtch.Return.TestTolerance = [];

HwAg1ClrTrim = DataDict.SrvRunnable;
HwAg1ClrTrim.Context = 'Rte';
HwAg1ClrTrim.Description = [...
  'Handwheel Angle1 Measurement Clear Trim'];
HwAg1ClrTrim.Return = DataDict.CSReturn;
HwAg1ClrTrim.Return.Type = 'None';
HwAg1ClrTrim.Return.Min = [];
HwAg1ClrTrim.Return.Max = [];
HwAg1ClrTrim.Return.TestTolerance = [];

HwAg1ReadTrim = DataDict.SrvRunnable;
HwAg1ReadTrim.Context = 'Rte';
HwAg1ReadTrim.Description = [...
  'Handwheel Angle1 Measurement Read Trim'];
HwAg1ReadTrim.Return = DataDict.CSReturn;
HwAg1ReadTrim.Return.Type = 'None';
HwAg1ReadTrim.Return.Min = [];
HwAg1ReadTrim.Return.Max = [];
HwAg1ReadTrim.Return.TestTolerance = [];
HwAg1ReadTrim.Arguments(1) = DataDict.CSArguments;
HwAg1ReadTrim.Arguments(1).Name = 'HwAgReadTrimData';
HwAg1ReadTrim.Arguments(1).EngDT = dt.float32;
HwAg1ReadTrim.Arguments(1).EngMin = -900;
HwAg1ReadTrim.Arguments(1).EngMax = 900;
HwAg1ReadTrim.Arguments(1).TestTolerance = 0;
HwAg1ReadTrim.Arguments(1).Units = 'HwDeg';
HwAg1ReadTrim.Arguments(1).Direction = 'Out';
HwAg1ReadTrim.Arguments(1).InitRowCol = [1  1];
HwAg1ReadTrim.Arguments(1).Description = [...
  'Handwheel Angle1 Measurement Read Trim'];

HwAg1TrimPrfmdSts = DataDict.SrvRunnable;
HwAg1TrimPrfmdSts.Context = 'Rte';
HwAg1TrimPrfmdSts.Description = [...
  'Handwheel Angle1 Measurement Trim perform Status'];
HwAg1TrimPrfmdSts.Return = DataDict.CSReturn;
HwAg1TrimPrfmdSts.Return.Type = 'None';
HwAg1TrimPrfmdSts.Return.Min = [];
HwAg1TrimPrfmdSts.Return.Max = [];
HwAg1TrimPrfmdSts.Return.TestTolerance = [];
HwAg1TrimPrfmdSts.Arguments(1) = DataDict.CSArguments;
HwAg1TrimPrfmdSts.Arguments(1).Name = 'HwAgOffsTrimPrfmdStsData';
HwAg1TrimPrfmdSts.Arguments(1).EngDT = dt.lgc;
HwAg1TrimPrfmdSts.Arguments(1).EngMin = 0;
HwAg1TrimPrfmdSts.Arguments(1).EngMax = 1;
HwAg1TrimPrfmdSts.Arguments(1).TestTolerance = 0;
HwAg1TrimPrfmdSts.Arguments(1).Units = 'Lgc';
HwAg1TrimPrfmdSts.Arguments(1).Direction = 'Out';
HwAg1TrimPrfmdSts.Arguments(1).InitRowCol = [1  1];
HwAg1TrimPrfmdSts.Arguments(1).Description = [...
  'Handwheel Angle1 Measurement Trim Perform Status'];

HwAg1WrTrim = DataDict.SrvRunnable;
HwAg1WrTrim.Context = 'Rte';
HwAg1WrTrim.Description = [...
  'Handwheel Angle1 Measurement Write Trim'];
HwAg1WrTrim.Return = DataDict.CSReturn;
HwAg1WrTrim.Return.Type = 'None';
HwAg1WrTrim.Return.Min = [];
HwAg1WrTrim.Return.Max = [];
HwAg1WrTrim.Return.TestTolerance = [];
HwAg1WrTrim.Arguments(1) = DataDict.CSArguments;
HwAg1WrTrim.Arguments(1).Name = 'HwAgWrOffsTrimData';
HwAg1WrTrim.Arguments(1).EngDT = dt.float32;
HwAg1WrTrim.Arguments(1).EngMin = -900;
HwAg1WrTrim.Arguments(1).EngMax = 900;
HwAg1WrTrim.Arguments(1).Units = 'HwDeg';
HwAg1WrTrim.Arguments(1).Direction = 'In';
HwAg1WrTrim.Arguments(1).InitRowCol = [1  1];
HwAg1WrTrim.Arguments(1).Description = [...
  'Handwheel Angle1 Measurement Write Trim Offset'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwAg1MeasPer4'};
GetNtcQlfrSts.Description = 'Get Qualifier Status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = [];
GetNtcQlfrSts.Return.Description = '';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = 1;
GetNtcQlfrSts.Arguments(1).EngMax = 511;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = '';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = 0;
GetNtcQlfrSts.Arguments(2).EngMax = 2;
GetNtcQlfrSts.Arguments(2).TestTolerance = 999;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = '';


GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'HwAg1MeasInit1','HwAg1MeasPer1'};
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
GetTiSpan1MicroSec32bit.CallLocation = {'HwAg1MeasInit1','HwAg1MeasPer1'};
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
GetTiSpan1MicroSec32bit.Arguments(2).TestTolerance = 999;
GetTiSpan1MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan1MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan1MicroSec32bit.Arguments(2).Description = '';


HwAg1IfFltLtch_GetErrorStatus = DataDict.Client;
HwAg1IfFltLtch_GetErrorStatus.CallLocation = {'HwAg1MeasInit1'};
HwAg1IfFltLtch_GetErrorStatus.Description = 'To check NVM validity status';
HwAg1IfFltLtch_GetErrorStatus.Return = DataDict.CSReturn;
HwAg1IfFltLtch_GetErrorStatus.Return.Type = 'Standard';
HwAg1IfFltLtch_GetErrorStatus.Return.Min = 0;
HwAg1IfFltLtch_GetErrorStatus.Return.Max = 1;
HwAg1IfFltLtch_GetErrorStatus.Return.TestTolerance = [];
HwAg1IfFltLtch_GetErrorStatus.Return.Description = 'Return perameters';
HwAg1IfFltLtch_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
HwAg1IfFltLtch_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
HwAg1IfFltLtch_GetErrorStatus.Arguments(1).EngDT = dt.u08;
HwAg1IfFltLtch_GetErrorStatus.Arguments(1).EngMin = 0;
HwAg1IfFltLtch_GetErrorStatus.Arguments(1).EngMax = 255;
HwAg1IfFltLtch_GetErrorStatus.Arguments(1).TestTolerance = 0;
HwAg1IfFltLtch_GetErrorStatus.Arguments(1).Units = 'Cnt';
HwAg1IfFltLtch_GetErrorStatus.Arguments(1).Direction = 'Out';
HwAg1IfFltLtch_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
HwAg1IfFltLtch_GetErrorStatus.Arguments(1).Description = 'requested error status result';


HwAg1IfFltLtch_SetRamBlockStatus = DataDict.Client;
HwAg1IfFltLtch_SetRamBlockStatus.CallLocation = {'HwAg1ClrLtch','HwAg1MeasPer4','HwAg1MeasInit1'};
HwAg1IfFltLtch_SetRamBlockStatus.Description = 'NVM';
HwAg1IfFltLtch_SetRamBlockStatus.Return = DataDict.CSReturn;
HwAg1IfFltLtch_SetRamBlockStatus.Return.Type = 'Standard';
HwAg1IfFltLtch_SetRamBlockStatus.Return.Min = 0;
HwAg1IfFltLtch_SetRamBlockStatus.Return.Max = 1;
HwAg1IfFltLtch_SetRamBlockStatus.Return.TestTolerance = 0;
HwAg1IfFltLtch_SetRamBlockStatus.Return.Description = '';
HwAg1IfFltLtch_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwAg1IfFltLtch_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwAg1IfFltLtch_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwAg1IfFltLtch_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwAg1IfFltLtch_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwAg1IfFltLtch_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwAg1IfFltLtch_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwAg1IfFltLtch_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
HwAg1IfFltLtch_SetRamBlockStatus.Arguments(1).Description = '';


HwAg1Offs_GetErrorStatus = DataDict.Client;
HwAg1Offs_GetErrorStatus.CallLocation = {'HwAg1MeasInit1'};
HwAg1Offs_GetErrorStatus.Description = 'To check NVM validity status';
HwAg1Offs_GetErrorStatus.Return = DataDict.CSReturn;
HwAg1Offs_GetErrorStatus.Return.Type = 'Standard';
HwAg1Offs_GetErrorStatus.Return.Min = 0;
HwAg1Offs_GetErrorStatus.Return.Max = 1;
HwAg1Offs_GetErrorStatus.Return.TestTolerance = [];
HwAg1Offs_GetErrorStatus.Return.Description = 'Return perameters';
HwAg1Offs_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
HwAg1Offs_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
HwAg1Offs_GetErrorStatus.Arguments(1).EngDT = dt.u08;
HwAg1Offs_GetErrorStatus.Arguments(1).EngMin = 0;
HwAg1Offs_GetErrorStatus.Arguments(1).EngMax = 255;
HwAg1Offs_GetErrorStatus.Arguments(1).TestTolerance = 0;
HwAg1Offs_GetErrorStatus.Arguments(1).Units = 'Cnt';
HwAg1Offs_GetErrorStatus.Arguments(1).Direction = 'Out';
HwAg1Offs_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
HwAg1Offs_GetErrorStatus.Arguments(1).Description = 'requested error status result';


HwAg1Offs_SetRamBlockStatus = DataDict.Client;
HwAg1Offs_SetRamBlockStatus.CallLocation = {'HwAg1AutTrim','HwAg1ClrTrim','HwAg1WrTrim','HwAg1MeasInit1'};
HwAg1Offs_SetRamBlockStatus.Description = 'NVM';
HwAg1Offs_SetRamBlockStatus.Return = DataDict.CSReturn;
HwAg1Offs_SetRamBlockStatus.Return.Type = 'Standard';
HwAg1Offs_SetRamBlockStatus.Return.Min = 0;
HwAg1Offs_SetRamBlockStatus.Return.Max = 1;
HwAg1Offs_SetRamBlockStatus.Return.TestTolerance = 0;
HwAg1Offs_SetRamBlockStatus.Return.Description = '';
HwAg1Offs_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwAg1Offs_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwAg1Offs_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwAg1Offs_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwAg1Offs_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwAg1Offs_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwAg1Offs_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwAg1Offs_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
HwAg1Offs_SetRamBlockStatus.Arguments(1).Description = '';


IoHwAb_SetFctPrphlHwAg1 = DataDict.Client;
IoHwAb_SetFctPrphlHwAg1.CallLocation = {'HwAg1MeasInit1'};
IoHwAb_SetFctPrphlHwAg1.Description = 'Physical Pin';
IoHwAb_SetFctPrphlHwAg1.Return = DataDict.CSReturn;
IoHwAb_SetFctPrphlHwAg1.Return.Type = 'Standard';
IoHwAb_SetFctPrphlHwAg1.Return.Min = 0;
IoHwAb_SetFctPrphlHwAg1.Return.Max = 1;
IoHwAb_SetFctPrphlHwAg1.Return.TestTolerance = [];
IoHwAb_SetFctPrphlHwAg1.Return.Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwAg1MeasPer3','HwAg1MeasPer4','HwAg1MeasPer5','HwAg1MeasPer2'};
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
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
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
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
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
HwAg1Polarity = DataDict.IpSignal;
HwAg1Polarity.LongName = 'HandWheel Angle 1 Polarity';
HwAg1Polarity.Description = 'HandWheel Angle 1 Polarity';
HwAg1Polarity.DocUnits = 'Uls';
HwAg1Polarity.EngDT = dt.s08;
HwAg1Polarity.EngInit = 1;
HwAg1Polarity.EngMin = -1;
HwAg1Polarity.EngMax = 1;
HwAg1Polarity.ReadIn = {'HwAg1MeasPer5'};
HwAg1Polarity.ReadType = 'Rte';


HwAg1SnsrTyp = DataDict.IpSignal;
HwAg1SnsrTyp.LongName = 'Handwheel/Hardware Angle Sensor Type';
HwAg1SnsrTyp.Description = [...
  'Handwheel/Hardware Angle Sensor Type'];
HwAg1SnsrTyp.DocUnits = 'Cnt';
HwAg1SnsrTyp.EngDT = enum.HwAgSnsrTyp1;
HwAg1SnsrTyp.EngInit = HwAgSnsrTyp1.HWAGSNSRTYP_NOSNSR;
HwAg1SnsrTyp.EngMin = HwAgSnsrTyp1.HWAGSNSRTYP_NOSNSR;
HwAg1SnsrTyp.EngMax = HwAgSnsrTyp1.HWAGSNSRTYP_A1335;
HwAg1SnsrTyp.ReadIn = {'HwAg1MeasInit1','HwAg1MeasPer2','HwAg1MeasPer3','HwAg1MeasPer4'};
HwAg1SnsrTyp.ReadType = 'Rte';


RegInpRSENT2CS = DataDict.IpSignal;
RegInpRSENT2CS.LongName = 'Register Input RSENT2 Comm Stat';
RegInpRSENT2CS.Description = 'Register Input RSENT2 Comm Stat';
RegInpRSENT2CS.DocUnits = 'Cnt';
RegInpRSENT2CS.EngDT = dt.u32;
RegInpRSENT2CS.EngInit = 0;
RegInpRSENT2CS.EngMin = 0;
RegInpRSENT2CS.EngMax = 4294967295;
RegInpRSENT2CS.ReadIn = {'HwAg1MeasPer3','HwAg1MeasPer4'};
RegInpRSENT2CS.ReadType = 'Phy';


RegInpRSENT2FND = DataDict.IpSignal;
RegInpRSENT2FND.LongName = 'Register Input RSENT2 FND';
RegInpRSENT2FND.Description = 'Register Input RSENT2 FND';
RegInpRSENT2FND.DocUnits = 'Cnt';
RegInpRSENT2FND.EngDT = dt.u08;
RegInpRSENT2FND.EngInit = 0;
RegInpRSENT2FND.EngMin = 0;
RegInpRSENT2FND.EngMax = 1;
RegInpRSENT2FND.ReadIn = {'HwAg1MeasPer1'};
RegInpRSENT2FND.ReadType = 'Phy';


RegInpRSENT2FRS = DataDict.IpSignal;
RegInpRSENT2FRS.LongName = 'Register Input RSENT2 FSM';
RegInpRSENT2FRS.Description = 'Register Input RSENT2 FSM';
RegInpRSENT2FRS.DocUnits = 'Cnt';
RegInpRSENT2FRS.EngDT = dt.u08;
RegInpRSENT2FRS.EngInit = 0;
RegInpRSENT2FRS.EngMin = 0;
RegInpRSENT2FRS.EngMax = 1;
RegInpRSENT2FRS.ReadIn = {'HwAg1MeasPer1'};
RegInpRSENT2FRS.ReadType = 'Phy';


RegInpRSENT2FRXD = DataDict.IpSignal;
RegInpRSENT2FRXD.LongName = 'Register Input RSENT2 Fast Receive Data';
RegInpRSENT2FRXD.Description = [...
  'Register Input RSENT2 Fast Receive Data'];
RegInpRSENT2FRXD.DocUnits = 'Cnt';
RegInpRSENT2FRXD.EngDT = dt.u32;
RegInpRSENT2FRXD.EngInit = 0;
RegInpRSENT2FRXD.EngMin = 0;
RegInpRSENT2FRXD.EngMax = 4294967295;
RegInpRSENT2FRXD.ReadIn = {'HwAg1MeasPer2','HwAg1MeasPer3'};
RegInpRSENT2FRXD.ReadType = 'Phy';


RegInpRSENT2NRS = DataDict.IpSignal;
RegInpRSENT2NRS.LongName = 'Register Input RSENT2 NRS';
RegInpRSENT2NRS.Description = 'Register Input RSENT2 NRS';
RegInpRSENT2NRS.DocUnits = 'Cnt';
RegInpRSENT2NRS.EngDT = dt.lgc;
RegInpRSENT2NRS.EngInit = 0;
RegInpRSENT2NRS.EngMin = 0;
RegInpRSENT2NRS.EngMax = 1;
RegInpRSENT2NRS.ReadIn = {'HwAg1MeasPer1','HwAg1MeasPer2','HwAg1MeasPer3'};
RegInpRSENT2NRS.ReadType = 'Phy';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAg1 = DataDict.OpSignal;
HwAg1.LongName = 'HandWheel Angle 1';
HwAg1.Description = 'HandWheel Angle 1 Output';
HwAg1.DocUnits = 'HwDeg';
HwAg1.SwcShoName = 'HwAg1Meas';
HwAg1.EngDT = dt.float32;
HwAg1.EngInit = 0;
HwAg1.EngMin = -900;
HwAg1.EngMax = 900;
HwAg1.TestTolerance = 0.088;
HwAg1.WrittenIn = {'HwAg1MeasPer5'};
HwAg1.WriteType = 'Rte';


HwAg1Qlfr = DataDict.OpSignal;
HwAg1Qlfr.LongName = 'Handwheel Angle 1 Qualifier';
HwAg1Qlfr.Description = [...
  'HandWheel Angle 1 Qualifier - NTC Status return'];
HwAg1Qlfr.DocUnits = 'Cnt';
HwAg1Qlfr.SwcShoName = 'HwAg1Meas';
HwAg1Qlfr.EngDT = enum.SigQlfr1;
HwAg1Qlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwAg1Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwAg1Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwAg1Qlfr.TestTolerance = 0;
HwAg1Qlfr.WrittenIn = {'HwAg1MeasPer5'};
HwAg1Qlfr.WriteType = 'Rte';


HwAg1RollgCntr = DataDict.OpSignal;
HwAg1RollgCntr.LongName = 'HandWheel Angle 1 Rolling Counter';
HwAg1RollgCntr.Description = 'HandWheel Angle 1 Heart Bit';
HwAg1RollgCntr.DocUnits = 'Cnt';
HwAg1RollgCntr.SwcShoName = 'HwAg1Meas';
HwAg1RollgCntr.EngDT = dt.u08;
HwAg1RollgCntr.EngInit = 0;
HwAg1RollgCntr.EngMin = 0;
HwAg1RollgCntr.EngMax = 255;
HwAg1RollgCntr.TestTolerance = 0;
HwAg1RollgCntr.WrittenIn = {'HwAg1MeasPer5'};
HwAg1RollgCntr.WriteType = 'Rte';


RegOutRSENT2NRC = DataDict.OpSignal;
RegOutRSENT2NRC.LongName = 'Register Input RSENT2 NRC Trigger';
RegOutRSENT2NRC.Description = 'NRC Trigger';
RegOutRSENT2NRC.DocUnits = 'Cnt';
RegOutRSENT2NRC.SwcShoName = 'HwAg1Meas';
RegOutRSENT2NRC.EngDT = dt.lgc;
RegOutRSENT2NRC.EngInit = 0;
RegOutRSENT2NRC.EngMin = 0;
RegOutRSENT2NRC.EngMax = 1;
RegOutRSENT2NRC.TestTolerance = 0;
RegOutRSENT2NRC.WrittenIn = {'HwAg1MeasPer1','HwAg1MeasPer4'};
RegOutRSENT2NRC.WriteType = 'Phy';


RegOutRSENT2SPCT = DataDict.OpSignal;
RegOutRSENT2SPCT.LongName = 'Register Input RSENT2 SPC Trigger';
RegOutRSENT2SPCT.Description = 'SPC Trigger';
RegOutRSENT2SPCT.DocUnits = 'Cnt';
RegOutRSENT2SPCT.SwcShoName = 'HwAg1Meas';
RegOutRSENT2SPCT.EngDT = dt.u32;
RegOutRSENT2SPCT.EngInit = 0;
RegOutRSENT2SPCT.EngMin = 0;
RegOutRSENT2SPCT.EngMax = 4294967295;
RegOutRSENT2SPCT.TestTolerance = 0;
RegOutRSENT2SPCT.WrittenIn = {'HwAg1MeasPer2'};
RegOutRSENT2SPCT.WriteType = 'Phy';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
HwAg1Snsr0Raw = DataDict.IRV;
HwAg1Snsr0Raw.LongName = 'Handwheel Angle 1 Sensor 0 Raw';
HwAg1Snsr0Raw.Description = 'Sensor 0, 10th Tooth Raw data';
HwAg1Snsr0Raw.DocUnits = 'Cnt';
HwAg1Snsr0Raw.EngDT = dt.u16;
HwAg1Snsr0Raw.EngInit = 0;
HwAg1Snsr0Raw.EngMin = 0;
HwAg1Snsr0Raw.EngMax = 4095;
HwAg1Snsr0Raw.ReadIn = {'HwAg1MeasPer4'};
HwAg1Snsr0Raw.WrittenIn = {'HwAg1MeasPer2'};


HwAg1Snsr0TestOk = DataDict.IRV;
HwAg1Snsr0TestOk.LongName = 'Handwheel Angle 1 Sensor 0 Test Ok';
HwAg1Snsr0TestOk.Description = 'Sensor 0, 10th Tooth Test Ok';
HwAg1Snsr0TestOk.DocUnits = 'Cnt';
HwAg1Snsr0TestOk.EngDT = dt.u08;
HwAg1Snsr0TestOk.EngInit = 0;
HwAg1Snsr0TestOk.EngMin = 0;
HwAg1Snsr0TestOk.EngMax = 3;
HwAg1Snsr0TestOk.ReadIn = {'HwAg1MeasPer4'};
HwAg1Snsr0TestOk.WrittenIn = {'HwAg1MeasPer2'};


HwAg1Snsr1Raw = DataDict.IRV;
HwAg1Snsr1Raw.LongName = 'Handwheel Angle 1 Sensor 1 Raw';
HwAg1Snsr1Raw.Description = 'Sensor 1, 11th Tooth Raw data';
HwAg1Snsr1Raw.DocUnits = 'Cnt';
HwAg1Snsr1Raw.EngDT = dt.u16;
HwAg1Snsr1Raw.EngInit = 0;
HwAg1Snsr1Raw.EngMin = 0;
HwAg1Snsr1Raw.EngMax = 4095;
HwAg1Snsr1Raw.ReadIn = {'HwAg1MeasPer4'};
HwAg1Snsr1Raw.WrittenIn = {'HwAg1MeasPer3'};


HwAg1Snsr1TestOk = DataDict.IRV;
HwAg1Snsr1TestOk.LongName = 'Handwheel Angle 1 Sensor 1 Test Ok';
HwAg1Snsr1TestOk.Description = 'Sensor 1, 11th Tooth Test Ok';
HwAg1Snsr1TestOk.DocUnits = 'Cnt';
HwAg1Snsr1TestOk.EngDT = dt.u08;
HwAg1Snsr1TestOk.EngInit = 0;
HwAg1Snsr1TestOk.EngMin = 0;
HwAg1Snsr1TestOk.EngMax = 3;
HwAg1Snsr1TestOk.ReadIn = {'HwAg1MeasPer4'};
HwAg1Snsr1TestOk.WrittenIn = {'HwAg1MeasPer3'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwAg1MeasHwAg1IfFltFailStep = DataDict.Calibration;
HwAg1MeasHwAg1IfFltFailStep.LongName = 'HandWheel Angle1 Measurement HandWheel Angle1 Interface Fault Fail Step';
HwAg1MeasHwAg1IfFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwAg1MeasHwAg1IfFltFailStep.DocUnits = 'Cnt';
HwAg1MeasHwAg1IfFltFailStep.EngDT = dt.u16;
HwAg1MeasHwAg1IfFltFailStep.EngVal = 2521;
HwAg1MeasHwAg1IfFltFailStep.EngMin = 0;
HwAg1MeasHwAg1IfFltFailStep.EngMax = 65535;
HwAg1MeasHwAg1IfFltFailStep.Cardinality = 'Inin';
HwAg1MeasHwAg1IfFltFailStep.CustomerVisible = false;
HwAg1MeasHwAg1IfFltFailStep.Online = false;
HwAg1MeasHwAg1IfFltFailStep.Impact = 'H';
HwAg1MeasHwAg1IfFltFailStep.TuningOwner = 'FDD';
HwAg1MeasHwAg1IfFltFailStep.GraphLink = {''};
HwAg1MeasHwAg1IfFltFailStep.Monotony = 'None';
HwAg1MeasHwAg1IfFltFailStep.MaxGrad = 0;
HwAg1MeasHwAg1IfFltFailStep.PortName = 'HwAg1MeasHwAg1IfFltFailStep';


HwAg1MeasHwAg1IfFltPassStep = DataDict.Calibration;
HwAg1MeasHwAg1IfFltPassStep.LongName = 'HandWheel Angle1 Measurement HandWheel Angle1 Interface Fault Pass Step';
HwAg1MeasHwAg1IfFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwAg1MeasHwAg1IfFltPassStep.DocUnits = 'Cnt';
HwAg1MeasHwAg1IfFltPassStep.EngDT = dt.u16;
HwAg1MeasHwAg1IfFltPassStep.EngVal = 1000;
HwAg1MeasHwAg1IfFltPassStep.EngMin = 0;
HwAg1MeasHwAg1IfFltPassStep.EngMax = 65535;
HwAg1MeasHwAg1IfFltPassStep.Cardinality = 'Inin';
HwAg1MeasHwAg1IfFltPassStep.CustomerVisible = false;
HwAg1MeasHwAg1IfFltPassStep.Online = false;
HwAg1MeasHwAg1IfFltPassStep.Impact = 'H';
HwAg1MeasHwAg1IfFltPassStep.TuningOwner = 'FDD';
HwAg1MeasHwAg1IfFltPassStep.GraphLink = {''};
HwAg1MeasHwAg1IfFltPassStep.Monotony = 'None';
HwAg1MeasHwAg1IfFltPassStep.MaxGrad = 0;
HwAg1MeasHwAg1IfFltPassStep.PortName = 'HwAg1MeasHwAg1IfFltPassStep';


HwAg1MeasHwAg1Snsr0PrtclFltFailStep = DataDict.Calibration;
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.LongName = 'HandWheel Angle1 Measurement HandWheel Angle1 Sensor0 Protocol Fault Fail Step';
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.DocUnits = 'Cnt';
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.EngDT = dt.u16;
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.EngVal = 2521;
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.EngMin = 0;
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.EngMax = 65535;
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.Cardinality = 'Inin';
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.CustomerVisible = false;
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.Online = false;
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.Impact = 'H';
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.TuningOwner = 'FDD';
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.GraphLink = {''};
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.Monotony = 'None';
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.MaxGrad = 0;
HwAg1MeasHwAg1Snsr0PrtclFltFailStep.PortName = 'HwAg1MeasHwAg1Snsr0PrtclFltFailStep';


HwAg1MeasHwAg1Snsr0PrtclFltPassStep = DataDict.Calibration;
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.LongName = 'HandWheel Angle1 Measurement HandWheel Angle1 Sensor0 Protocol Fault Pass Step';
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.DocUnits = 'Cnt';
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.EngDT = dt.u16;
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.EngVal = 1000;
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.EngMin = 0;
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.EngMax = 65535;
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.Cardinality = 'Inin';
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.CustomerVisible = false;
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.Online = false;
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.Impact = 'H';
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.TuningOwner = 'FDD';
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.GraphLink = {''};
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.Monotony = 'None';
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.MaxGrad = 0;
HwAg1MeasHwAg1Snsr0PrtclFltPassStep.PortName = 'HwAg1MeasHwAg1Snsr0PrtclFltPassStep';


HwAg1MeasHwAg1Snsr1PrtclFltFailStep = DataDict.Calibration;
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.LongName = 'HandWheel Angle1 Measurement HandWheel Angle1 Sensor1 Protocol Fault Fail Step';
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.DocUnits = 'Cnt';
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.EngDT = dt.u16;
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.EngVal = 2521;
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.EngMin = 0;
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.EngMax = 65535;
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.Cardinality = 'Inin';
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.CustomerVisible = false;
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.Online = false;
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.Impact = 'H';
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.TuningOwner = 'FDD';
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.GraphLink = {''};
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.Monotony = 'None';
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.MaxGrad = 0;
HwAg1MeasHwAg1Snsr1PrtclFltFailStep.PortName = 'HwAg1MeasHwAg1Snsr1PrtclFltFailStep';


HwAg1MeasHwAg1Snsr1PrtclFltPassStep = DataDict.Calibration;
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.LongName = 'HandWheel Angle1 Measurement HandWheel Angle1 Sensor1 Protocol Fault Pass Step';
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.DocUnits = 'Cnt';
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.EngDT = dt.u16;
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.EngVal = 1000;
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.EngMin = 0;
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.EngMax = 65535;
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.Cardinality = 'Inin';
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.CustomerVisible = false;
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.Online = false;
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.Impact = 'H';
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.TuningOwner = 'FDD';
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.GraphLink = {''};
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.Monotony = 'None';
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.MaxGrad = 0;
HwAg1MeasHwAg1Snsr1PrtclFltPassStep.PortName = 'HwAg1MeasHwAg1Snsr1PrtclFltPassStep';


HwAg1MeasSnsr0Rev = DataDict.Calibration;
HwAg1MeasSnsr0Rev.LongName = 'HandWheel Angle1 Measurement Sensor0 Revolution';
HwAg1MeasSnsr0Rev.Description = 'Sensor0 10th Tooth Revolution';
HwAg1MeasSnsr0Rev.DocUnits = 'Cnt';
HwAg1MeasSnsr0Rev.EngDT = dt.u08;
HwAg1MeasSnsr0Rev.EngVal =  ...
   [0                1                1                2                2                3                3                4                4                5                5                6                6                7                7                8                8                9                9               10               10                0];
HwAg1MeasSnsr0Rev.EngMin = 0;
HwAg1MeasSnsr0Rev.EngMax = 255;
HwAg1MeasSnsr0Rev.Cardinality = 'Inin';
HwAg1MeasSnsr0Rev.CustomerVisible = false;
HwAg1MeasSnsr0Rev.Online = false;
HwAg1MeasSnsr0Rev.Impact = 'H';
HwAg1MeasSnsr0Rev.TuningOwner = 'FDD';
HwAg1MeasSnsr0Rev.GraphLink = {''};
HwAg1MeasSnsr0Rev.Monotony = 'None';
HwAg1MeasSnsr0Rev.MaxGrad = 0;
HwAg1MeasSnsr0Rev.PortName = 'HwAg1MeasSnsr0Rev';


HwAg1MeasSnsr1Rev = DataDict.Calibration;
HwAg1MeasSnsr1Rev.LongName = 'HandWheel Angle1 Measurement Sensor1 Revolution';
HwAg1MeasSnsr1Rev.Description = 'Sensor1 11th Tooth Revolution';
HwAg1MeasSnsr1Rev.DocUnits = 'Cnt';
HwAg1MeasSnsr1Rev.EngDT = dt.u08;
HwAg1MeasSnsr1Rev.EngVal =  ...
   [0                0                1                1                2                2                3                3                4                4                5                5                6                6                7                7                8                8                9                9                0                9];
HwAg1MeasSnsr1Rev.EngMin = 0;
HwAg1MeasSnsr1Rev.EngMax = 255;
HwAg1MeasSnsr1Rev.Cardinality = 'Inin';
HwAg1MeasSnsr1Rev.CustomerVisible = false;
HwAg1MeasSnsr1Rev.Online = false;
HwAg1MeasSnsr1Rev.Impact = 'H';
HwAg1MeasSnsr1Rev.TuningOwner = 'FDD';
HwAg1MeasSnsr1Rev.GraphLink = {''};
HwAg1MeasSnsr1Rev.Monotony = 'None';
HwAg1MeasSnsr1Rev.MaxGrad = 0;
HwAg1MeasSnsr1Rev.PortName = 'HwAg1MeasSnsr1Rev';


HwAg1MeasStep = DataDict.Calibration;
HwAg1MeasStep.LongName = 'HandWheel Angle1 Measurement Step';
HwAg1MeasStep.Description = 'Step Level';
HwAg1MeasStep.DocUnits = 'Cnt';
HwAg1MeasStep.EngDT = dt.s16;
HwAg1MeasStep.EngVal =  ...
   [0             -360               36             -324               72             -288              108             -252              144             -216              180             -180              216             -144              252             -108              288              -72              324              -36              360             -396];
HwAg1MeasStep.EngMin = -500;
HwAg1MeasStep.EngMax = 500;
HwAg1MeasStep.Cardinality = 'Inin';
HwAg1MeasStep.CustomerVisible = false;
HwAg1MeasStep.Online = false;
HwAg1MeasStep.Impact = 'H';
HwAg1MeasStep.TuningOwner = 'FDD';
HwAg1MeasStep.GraphLink = {''};
HwAg1MeasStep.Monotony = 'None';
HwAg1MeasStep.MaxGrad = 0;
HwAg1MeasStep.PortName = 'HwAg1MeasStep';


HwAg1MeasVrnrErrThd = DataDict.Calibration;
HwAg1MeasVrnrErrThd.LongName = 'HandWheel Angle1 Measurement Vernier Error Threshold';
HwAg1MeasVrnrErrThd.Description = 'Vernier Error Threshold Value';
HwAg1MeasVrnrErrThd.DocUnits = 'Cnt';
HwAg1MeasVrnrErrThd.EngDT = dt.u08;
HwAg1MeasVrnrErrThd.EngVal = 8;
HwAg1MeasVrnrErrThd.EngMin = 0;
HwAg1MeasVrnrErrThd.EngMax = 20;
HwAg1MeasVrnrErrThd.Cardinality = 'Inin';
HwAg1MeasVrnrErrThd.CustomerVisible = false;
HwAg1MeasVrnrErrThd.Online = false;
HwAg1MeasVrnrErrThd.Impact = 'H';
HwAg1MeasVrnrErrThd.TuningOwner = 'FDD';
HwAg1MeasVrnrErrThd.GraphLink = {''};
HwAg1MeasVrnrErrThd.Monotony = 'None';
HwAg1MeasVrnrErrThd.MaxGrad = 0;
HwAg1MeasVrnrErrThd.PortName = 'HwAg1MeasVrnrErrThd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
HwAg1IfFltLtch = DataDict.NVM;
HwAg1IfFltLtch.LongName = 'Handwheel Angle 0 Interface Fault Latch';
HwAg1IfFltLtch.Description = [...
  'Handwheel Angle 0 Interface Fault Latch'];
HwAg1IfFltLtch.DocUnits = 'Cnt';
HwAg1IfFltLtch.EngDT = dt.lgc;
HwAg1IfFltLtch.EngInit = [];
HwAg1IfFltLtch.EngMin = 0;
HwAg1IfFltLtch.EngMax = 1;
HwAg1IfFltLtch.CustomerVisible = false;
HwAg1IfFltLtch.Impact = 'H';
HwAg1IfFltLtch.TuningOwner = 'FDD';
HwAg1IfFltLtch.InitRowCol = [1  1];


HwAg1Offs = DataDict.NVM;
HwAg1Offs.LongName = 'Handwheel Angle1 Offset';
HwAg1Offs.Description = 'Handwheel Angle1 Offset NVM store';
HwAg1Offs.DocUnits = 'Uls';
HwAg1Offs.EngDT = struct.HwAgOffsRec1;
HwAg1Offs.EngInit = [];
HwAg1Offs.EngMin = [struct('OffsTrim',-900,'OffsTrimPrfmdSts',0)];
HwAg1Offs.EngMax = [struct('OffsTrim',900,'OffsTrimPrfmdSts',1)];
HwAg1Offs.CustomerVisible = false;
HwAg1Offs.Impact = 'H';
HwAg1Offs.TuningOwner = 'FDD';
HwAg1Offs.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHwAg1MeasSnsr0Abs = DataDict.Display;
dHwAg1MeasSnsr0Abs.LongName = 'Handwheel Angle 1 Measurement Sensor0 Absolute';
dHwAg1MeasSnsr0Abs.Description = [...
  'Sensor0 (10th tooth) Absolute Angle'];
dHwAg1MeasSnsr0Abs.DocUnits = 'Cnt';
dHwAg1MeasSnsr0Abs.EngDT = dt.float32;
dHwAg1MeasSnsr0Abs.EngMin = -900;
dHwAg1MeasSnsr0Abs.EngMax = 900;
dHwAg1MeasSnsr0Abs.InitRowCol = [1  1];


dHwAg1MeasSnsr0CS = DataDict.Display;
dHwAg1MeasSnsr0CS.LongName = 'Handwheel Angle1 Measurement Sensor0 CS';
dHwAg1MeasSnsr0CS.Description = 'Sensor0 Comm Status';
dHwAg1MeasSnsr0CS.DocUnits = 'Cnt';
dHwAg1MeasSnsr0CS.EngDT = dt.u32;
dHwAg1MeasSnsr0CS.EngMin = 0;
dHwAg1MeasSnsr0CS.EngMax = 4294967295;
dHwAg1MeasSnsr0CS.InitRowCol = [1  1];


dHwAg1MeasSnsr0FRXD = DataDict.Display;
dHwAg1MeasSnsr0FRXD.LongName = 'Handwheel Angle1 Measurement Sensor0 FRXD';
dHwAg1MeasSnsr0FRXD.Description = 'Sensor0 Fast Receive Data';
dHwAg1MeasSnsr0FRXD.DocUnits = 'Cnt';
dHwAg1MeasSnsr0FRXD.EngDT = dt.u32;
dHwAg1MeasSnsr0FRXD.EngMin = 0;
dHwAg1MeasSnsr0FRXD.EngMax = 4294967295;
dHwAg1MeasSnsr0FRXD.InitRowCol = [1  1];


dHwAg1MeasSnsr0Rel = DataDict.Display;
dHwAg1MeasSnsr0Rel.LongName = 'Handwheel Angle 1 Measurement Sensor0 Relative';
dHwAg1MeasSnsr0Rel.Description = [...
  'Sensor0 (10th tooth) Relative Angle'];
dHwAg1MeasSnsr0Rel.DocUnits = 'Cnt';
dHwAg1MeasSnsr0Rel.EngDT = dt.float32;
dHwAg1MeasSnsr0Rel.EngMin = 0;
dHwAg1MeasSnsr0Rel.EngMax = 360;
dHwAg1MeasSnsr0Rel.InitRowCol = [1  1];


dHwAg1MeasSnsr1Abs = DataDict.Display;
dHwAg1MeasSnsr1Abs.LongName = 'Handwheel Angle 1 Measurement Sensor1 Absolute';
dHwAg1MeasSnsr1Abs.Description = [...
  'Sensor1 (11th tooth) Absolute Angle'];
dHwAg1MeasSnsr1Abs.DocUnits = 'Cnt';
dHwAg1MeasSnsr1Abs.EngDT = dt.float32;
dHwAg1MeasSnsr1Abs.EngMin = -900;
dHwAg1MeasSnsr1Abs.EngMax = 900;
dHwAg1MeasSnsr1Abs.InitRowCol = [1  1];


dHwAg1MeasSnsr1CS = DataDict.Display;
dHwAg1MeasSnsr1CS.LongName = 'Handwheel Angle1 Measurement Sensor1 CS';
dHwAg1MeasSnsr1CS.Description = 'Sensor1 Comm Status';
dHwAg1MeasSnsr1CS.DocUnits = 'Cnt';
dHwAg1MeasSnsr1CS.EngDT = dt.u32;
dHwAg1MeasSnsr1CS.EngMin = 0;
dHwAg1MeasSnsr1CS.EngMax = 4294967295;
dHwAg1MeasSnsr1CS.InitRowCol = [1  1];


dHwAg1MeasSnsr1FRXD = DataDict.Display;
dHwAg1MeasSnsr1FRXD.LongName = 'Handwheel Angle1 Measurement Sensor1 FRXD';
dHwAg1MeasSnsr1FRXD.Description = 'Sensor1 Fast Receive Data';
dHwAg1MeasSnsr1FRXD.DocUnits = 'Cnt';
dHwAg1MeasSnsr1FRXD.EngDT = dt.u32;
dHwAg1MeasSnsr1FRXD.EngMin = 0;
dHwAg1MeasSnsr1FRXD.EngMax = 4294967295;
dHwAg1MeasSnsr1FRXD.InitRowCol = [1  1];


dHwAg1MeasSnsr1Rel = DataDict.Display;
dHwAg1MeasSnsr1Rel.LongName = 'Handwheel Angle 1 Measurement Sensor1 Relative';
dHwAg1MeasSnsr1Rel.Description = [...
  'Sensor1 (11th tooth) Relative Angle'];
dHwAg1MeasSnsr1Rel.DocUnits = 'Cnt';
dHwAg1MeasSnsr1Rel.EngDT = dt.float32;
dHwAg1MeasSnsr1Rel.EngMin = 0;
dHwAg1MeasSnsr1Rel.EngMax = 360;
dHwAg1MeasSnsr1Rel.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwAg1InitStepSeqNrCmpl = DataDict.PIM;
HwAg1InitStepSeqNrCmpl.LongName = 'Handwheel Angle 1 Initialization Step Sequence Number Complete';
HwAg1InitStepSeqNrCmpl.Description = [...
  'Signal use as flag for load intial skip step to prev skip step once at' ...
  ' startup only'];
HwAg1InitStepSeqNrCmpl.DocUnits = 'Cnt';
HwAg1InitStepSeqNrCmpl.EngDT = dt.lgc;
HwAg1InitStepSeqNrCmpl.EngMin = 0;
HwAg1InitStepSeqNrCmpl.EngMax = 1;
HwAg1InitStepSeqNrCmpl.InitRowCol = [1  1];


HwAg1LtchClr = DataDict.PIM;
HwAg1LtchClr.LongName = 'Handwheel Angle 1 Latch Clear';
HwAg1LtchClr.Description = 'Handwheel Angle 1 Latch Clear ';
HwAg1LtchClr.DocUnits = 'Cnt';
HwAg1LtchClr.EngDT = dt.lgc;
HwAg1LtchClr.EngMin = 0;
HwAg1LtchClr.EngMax = 1;
HwAg1LtchClr.InitRowCol = [1  1];


HwAg1PrevHwAg1 = DataDict.PIM;
HwAg1PrevHwAg1.LongName = 'Handwheel Angle 1 Previous Handwheel Angle 1';
HwAg1PrevHwAg1.Description = 'Previous Handwheel Angle 1 ';
HwAg1PrevHwAg1.DocUnits = 'HwDeg';
HwAg1PrevHwAg1.EngDT = dt.float32;
HwAg1PrevHwAg1.EngMin = -900;
HwAg1PrevHwAg1.EngMax = 900;
HwAg1PrevHwAg1.InitRowCol = [1  1];


HwAg1PrevRollCnt = DataDict.PIM;
HwAg1PrevRollCnt.LongName = 'Handwheel Angle 1 Previous Rolling Count';
HwAg1PrevRollCnt.Description = 'Previous Roll Count';
HwAg1PrevRollCnt.DocUnits = 'Cnt';
HwAg1PrevRollCnt.EngDT = dt.u08;
HwAg1PrevRollCnt.EngMin = 0;
HwAg1PrevRollCnt.EngMax = 255;
HwAg1PrevRollCnt.InitRowCol = [1  1];


HwAg1PrevStepSeqNr = DataDict.PIM;
HwAg1PrevStepSeqNr.LongName = 'Handwheel Angle 1 Previous Step Sequence Number Step';
HwAg1PrevStepSeqNr.Description = 'Previous Roll Count';
HwAg1PrevStepSeqNr.DocUnits = 'Cnt';
HwAg1PrevStepSeqNr.EngDT = dt.u08;
HwAg1PrevStepSeqNr.EngMin = 0;
HwAg1PrevStepSeqNr.EngMax = 22;
HwAg1PrevStepSeqNr.InitRowCol = [1  1];


HwAg1RawDataAvlStrtTi = DataDict.PIM;
HwAg1RawDataAvlStrtTi.LongName = 'Handwheel Angle 1 Data Available Start Time';
HwAg1RawDataAvlStrtTi.Description = 'Data Available Start Time ';
HwAg1RawDataAvlStrtTi.DocUnits = 'Cnt';
HwAg1RawDataAvlStrtTi.EngDT = dt.u32;
HwAg1RawDataAvlStrtTi.EngMin = 0;
HwAg1RawDataAvlStrtTi.EngMax = 4294967295;
HwAg1RawDataAvlStrtTi.InitRowCol = [1  1];


HwAg1Snsr0ComStsErrCntr = DataDict.PIM;
HwAg1Snsr0ComStsErrCntr.LongName = 'Handwheel Angle 1 Sensor 0 Communication Status Error Counter';
HwAg1Snsr0ComStsErrCntr.Description = [...
  'Com Error Increments this counter -Troubleshooting Purpose '];
HwAg1Snsr0ComStsErrCntr.DocUnits = 'Cnt';
HwAg1Snsr0ComStsErrCntr.EngDT = dt.u08;
HwAg1Snsr0ComStsErrCntr.EngMin = 0;
HwAg1Snsr0ComStsErrCntr.EngMax = 255;
HwAg1Snsr0ComStsErrCntr.InitRowCol = [1  1];


HwAg1Snsr0IdErrCntr = DataDict.PIM;
HwAg1Snsr0IdErrCntr.LongName = 'Handwheel Angle 1 Sensor 0 Identifier Error Counter';
HwAg1Snsr0IdErrCntr.Description = [...
  'Id Error Increments this counter -Troubleshooting Purpose '];
HwAg1Snsr0IdErrCntr.DocUnits = 'Cnt';
HwAg1Snsr0IdErrCntr.EngDT = dt.u08;
HwAg1Snsr0IdErrCntr.EngMin = 0;
HwAg1Snsr0IdErrCntr.EngMax = 255;
HwAg1Snsr0IdErrCntr.InitRowCol = [1  1];


HwAg1Snsr0IntSnsrErrCntr = DataDict.PIM;
HwAg1Snsr0IntSnsrErrCntr.LongName = 'Handwheel Angle 1 Sensor 0 Internal Sensor Error Counter';
HwAg1Snsr0IntSnsrErrCntr.Description = [...
  'Internal Sensor Error Increments this counter -Troubleshooting Purpose' ...
  ' '];
HwAg1Snsr0IntSnsrErrCntr.DocUnits = 'Cnt';
HwAg1Snsr0IntSnsrErrCntr.EngDT = dt.u08;
HwAg1Snsr0IntSnsrErrCntr.EngMin = 0;
HwAg1Snsr0IntSnsrErrCntr.EngMax = 255;
HwAg1Snsr0IntSnsrErrCntr.InitRowCol = [1  1];


HwAg1Snsr0NoMsgErrCntr = DataDict.PIM;
HwAg1Snsr0NoMsgErrCntr.LongName = 'Handwheel Angle 1 Sensor 0 No Message Error Counter';
HwAg1Snsr0NoMsgErrCntr.Description = [...
  'No New Message Increments this counter -Troubleshooting Purpose '];
HwAg1Snsr0NoMsgErrCntr.DocUnits = 'Cnt';
HwAg1Snsr0NoMsgErrCntr.EngDT = dt.u08;
HwAg1Snsr0NoMsgErrCntr.EngMin = 0;
HwAg1Snsr0NoMsgErrCntr.EngMax = 255;
HwAg1Snsr0NoMsgErrCntr.InitRowCol = [1  1];


HwAg1Snsr1ComStsErrCntr = DataDict.PIM;
HwAg1Snsr1ComStsErrCntr.LongName = 'Handwheel Angle 1 Sensor 0 Communication Status Error Counter';
HwAg1Snsr1ComStsErrCntr.Description = [...
  'Com Error Increments this counter -Troubleshooting Purpose '];
HwAg1Snsr1ComStsErrCntr.DocUnits = 'Cnt';
HwAg1Snsr1ComStsErrCntr.EngDT = dt.u08;
HwAg1Snsr1ComStsErrCntr.EngMin = 0;
HwAg1Snsr1ComStsErrCntr.EngMax = 255;
HwAg1Snsr1ComStsErrCntr.InitRowCol = [1  1];


HwAg1Snsr1IdErrCntr = DataDict.PIM;
HwAg1Snsr1IdErrCntr.LongName = 'Handwheel Angle 1 Sensor 1 Identifier Error Counter';
HwAg1Snsr1IdErrCntr.Description = [...
  'Id Error Increments this counter -Troubleshooting Purpose '];
HwAg1Snsr1IdErrCntr.DocUnits = 'Cnt';
HwAg1Snsr1IdErrCntr.EngDT = dt.u08;
HwAg1Snsr1IdErrCntr.EngMin = 0;
HwAg1Snsr1IdErrCntr.EngMax = 255;
HwAg1Snsr1IdErrCntr.InitRowCol = [1  1];


HwAg1Snsr1IntSnsrErrCntr = DataDict.PIM;
HwAg1Snsr1IntSnsrErrCntr.LongName = 'Handwheel Angle 1 Sensor 0 Internal Sensor Error Counter';
HwAg1Snsr1IntSnsrErrCntr.Description = [...
  'Internal Sensor Error Increments this counter -Troubleshooting Purpose' ...
  ' '];
HwAg1Snsr1IntSnsrErrCntr.DocUnits = 'Cnt';
HwAg1Snsr1IntSnsrErrCntr.EngDT = dt.u08;
HwAg1Snsr1IntSnsrErrCntr.EngMin = 0;
HwAg1Snsr1IntSnsrErrCntr.EngMax = 255;
HwAg1Snsr1IntSnsrErrCntr.InitRowCol = [1  1];


HwAg1Snsr1NoMsgErrCntr = DataDict.PIM;
HwAg1Snsr1NoMsgErrCntr.LongName = 'Handwheel Angle 1 Sensor 0 No Message Error Counter';
HwAg1Snsr1NoMsgErrCntr.Description = [...
  'No New Message Increments this counter -Troubleshooting Purpose '];
HwAg1Snsr1NoMsgErrCntr.DocUnits = 'Cnt';
HwAg1Snsr1NoMsgErrCntr.EngDT = dt.u08;
HwAg1Snsr1NoMsgErrCntr.EngMin = 0;
HwAg1Snsr1NoMsgErrCntr.EngMax = 255;
HwAg1Snsr1NoMsgErrCntr.InitRowCol = [1  1];


HwAg1SnsrTrigNr = DataDict.PIM;
HwAg1SnsrTrigNr.LongName = 'Handwheel Angle 1 Sensor Trigger Number';
HwAg1SnsrTrigNr.Description = 'Sensor Trigger Number';
HwAg1SnsrTrigNr.DocUnits = 'Cnt';
HwAg1SnsrTrigNr.EngDT = dt.u08;
HwAg1SnsrTrigNr.EngMin = 0;
HwAg1SnsrTrigNr.EngMax = 2;
HwAg1SnsrTrigNr.InitRowCol = [1  1];


PrevHwAg1 = DataDict.PIM;
PrevHwAg1.LongName = 'Previous Handwheel Angle 1';
PrevHwAg1.Description = 'final Previous Handwheel Angle 1 ';
PrevHwAg1.DocUnits = 'HwDeg';
PrevHwAg1.EngDT = dt.float32;
PrevHwAg1.EngMin = -900;
PrevHwAg1.EngMax = 900;
PrevHwAg1.InitRowCol = [1  1];


PrevHwAg1Qlfr = DataDict.PIM;
PrevHwAg1Qlfr.LongName = 'Previous Handwheel Angle 1 Qualifier';
PrevHwAg1Qlfr.Description = 'Previous Qualifier value ';
PrevHwAg1Qlfr.DocUnits = 'Cnt';
PrevHwAg1Qlfr.EngDT = enum.SigQlfr1;
PrevHwAg1Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
PrevHwAg1Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
PrevHwAg1Qlfr.InitRowCol = [1  1];


PrevHwAg1Snsr0Raw = DataDict.PIM;
PrevHwAg1Snsr0Raw.LongName = 'Previous Handwheel Angle 1 Sensor 0 Raw';
PrevHwAg1Snsr0Raw.Description = 'Previous Raw value of Sensor 0 ';
PrevHwAg1Snsr0Raw.DocUnits = 'Cnt';
PrevHwAg1Snsr0Raw.EngDT = dt.u16;
PrevHwAg1Snsr0Raw.EngMin = 0;
PrevHwAg1Snsr0Raw.EngMax = 4095;
PrevHwAg1Snsr0Raw.InitRowCol = [1  1];


PrevHwAg1Snsr0TestOk = DataDict.PIM;
PrevHwAg1Snsr0TestOk.LongName = 'Previous Handwheel Angle 1 Sensor 0 Test Ok';
PrevHwAg1Snsr0TestOk.Description = [...
  'Previous Raw value of Sensor 0 Test Ok '];
PrevHwAg1Snsr0TestOk.DocUnits = 'Cnt';
PrevHwAg1Snsr0TestOk.EngDT = dt.u08;
PrevHwAg1Snsr0TestOk.EngMin = 0;
PrevHwAg1Snsr0TestOk.EngMax = 3;
PrevHwAg1Snsr0TestOk.InitRowCol = [1  1];


PrevHwAg1Snsr1Raw = DataDict.PIM;
PrevHwAg1Snsr1Raw.LongName = 'Previous Handwheel Angle 1 Sensor 1 Raw';
PrevHwAg1Snsr1Raw.Description = 'Previous Raw value of Sensor 1 ';
PrevHwAg1Snsr1Raw.DocUnits = 'Cnt';
PrevHwAg1Snsr1Raw.EngDT = dt.u16;
PrevHwAg1Snsr1Raw.EngMin = 0;
PrevHwAg1Snsr1Raw.EngMax = 4095;
PrevHwAg1Snsr1Raw.InitRowCol = [1  1];


PrevHwAg1Snsr1TestOk = DataDict.PIM;
PrevHwAg1Snsr1TestOk.LongName = 'Previous Handwheel Angle 1 Sensor 1 Test Ok';
PrevHwAg1Snsr1TestOk.Description = [...
  'Previous Raw value of Sensor 1 Test Ok '];
PrevHwAg1Snsr1TestOk.DocUnits = 'Cnt';
PrevHwAg1Snsr1TestOk.EngDT = dt.u08;
PrevHwAg1Snsr1TestOk.EngMin = 0;
PrevHwAg1Snsr1TestOk.EngMax = 3;
PrevHwAg1Snsr1TestOk.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_DEGPERREV_DEGPERREV_F32 = DataDict.Constant;
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.LongName = 'Degrees per Revolution';
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.Description = 'Number of degrees per revolution';
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.DocUnits = 'DEGPERREV';
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.EngDT = dt.float32;
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.EngVal = 360;
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.Define = 'Global';


ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32 = DataDict.Constant;
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.LongName = 'HandWheel Angle Center Offset';
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.Description = 'Handwheel Angle Center correction';
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.DocUnits = 'HwDeg';
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.EngVal = 900;
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.Define = 'Global';


ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC = DataDict.ConfigParam;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.LongName = 'Handwheel Angle Interface Latch Enable';
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.Description = [...
  'Handwheel Angle Interface Latch Enable'];
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.IsBuildPrm = false;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.DocUnits = 'Cnt';
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.EngDT = dt.lgc;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.EngVal = 0;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.EngMin = 0;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.EngMax = 1;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.Define = 'Global';


ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.LongName = 'Handwheel Angle Latch Fault parameter Bit';
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.Description = [...
  'Handwheel Angle Latch Fault parameter Bit'];
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.EngVal = 128;
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.Define = 'Global';


ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.LongName = 'Handwheel Angle Saturation Lower Limit';
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.Description = [...
  'Handwheel Angle value min limit to -900'];
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.DocUnits = 'HwDeg';
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.EngVal = -900;
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.Define = 'Global';


ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.LongName = 'Handwheel Angle Saturation Upper Limit';
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.Description = [...
  'Handwheel Angle value max limit to 900'];
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.DocUnits = 'HwDeg';
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.EngVal = 900;
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.Define = 'Global';


ELECGLBPRM_HWAGSCA_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSCA_ULS_F32.LongName = 'Handwheel Angle Scale';
ELECGLBPRM_HWAGSCA_ULS_F32.Description = 'Scale';
ELECGLBPRM_HWAGSCA_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSCA_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSCA_ULS_F32.EngVal = 0.08789;
ELECGLBPRM_HWAGSCA_ULS_F32.Define = 'Global';


ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.LongName = 'Handwheel Angle Spur Gear Ratio';
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.Description = 'One Rev';
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.EngVal = 1.1;
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.Define = 'Global';


ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.LongName = 'Handwheel Angle0 Spur to Ring Gear Ratio Sensor 0';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.Description = [...
  '10th Tooth Spur To Ring Gear ratio 10/22'];
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.EngVal = 0.4545;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.Define = 'Global';


ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.LongName = 'Handwheel Angle0 Spur to Ring Gear Ratio Sensor 1';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.Description = [...
  '11th Tooth Spur To Ring Gear ratio 11/22'];
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.EngVal = 0.5;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.Define = 'Global';


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


ELECGLBPRM_SKIPSTEPFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.LongName = 'Skip Step Fault';
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.Description = 'Skip Step Fault';
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.EngVal = 1;
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_SNSRINTFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_SNSRINTFLT_CNT_U08.LongName = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.Description = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngVal = 2;
ELECGLBPRM_SNSRINTFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_VRNRERRFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_VRNRERRFLT_CNT_U08.LongName = 'Vernier Error Fault';
ELECGLBPRM_VRNRERRFLT_CNT_U08.Description = 'Vernier Error Fault';
ELECGLBPRM_VRNRERRFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_VRNRERRFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_VRNRERRFLT_CNT_U08.EngVal = 2;
ELECGLBPRM_VRNRERRFLT_CNT_U08.Define = 'Global';


HWAG10THTOOTHTRIG_CNT_U08 = DataDict.ConfigParam;
HWAG10THTOOTHTRIG_CNT_U08.LongName = 'Handwheel Angle 10th tooth Trigger';
HWAG10THTOOTHTRIG_CNT_U08.Description = '10th Tooth Trigger Id';
HWAG10THTOOTHTRIG_CNT_U08.IsBuildPrm = true;
HWAG10THTOOTHTRIG_CNT_U08.DocUnits = 'Cnt';
HWAG10THTOOTHTRIG_CNT_U08.EngDT = dt.u08;
HWAG10THTOOTHTRIG_CNT_U08.EngVal = 1;
HWAG10THTOOTHTRIG_CNT_U08.EngMin = 0;
HWAG10THTOOTHTRIG_CNT_U08.EngMax = 2;
HWAG10THTOOTHTRIG_CNT_U08.Define = 'Local';


HWAG11THTOOTHTRIG_CNT_U08 = DataDict.ConfigParam;
HWAG11THTOOTHTRIG_CNT_U08.LongName = 'Handwheel Angle 11th tooth Trigger';
HWAG11THTOOTHTRIG_CNT_U08.Description = '11th Tooth Trigger Id';
HWAG11THTOOTHTRIG_CNT_U08.IsBuildPrm = true;
HWAG11THTOOTHTRIG_CNT_U08.DocUnits = 'Cnt';
HWAG11THTOOTHTRIG_CNT_U08.EngDT = dt.u08;
HWAG11THTOOTHTRIG_CNT_U08.EngVal = 2;
HWAG11THTOOTHTRIG_CNT_U08.EngMin = 0;
HWAG11THTOOTHTRIG_CNT_U08.EngMax = 2;
HWAG11THTOOTHTRIG_CNT_U08.Define = 'Local';


HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.LongName = 'Handwheel Angle 1 Interface Ntc Number';
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.Description = 'HwAg1 Interface Ntc Number';
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.IsBuildPrm = true;
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X098;
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X093;
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X09A;
HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM.Define = 'Global';


HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.LongName = 'Handwheel Angle 1 Manufacturing Ntc Number';
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.Description = 'HwAg1 Manufacturing Ntc Number';
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.IsBuildPrm = true;
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X1FA;
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X1F9;
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X1FA;
HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM.Define = 'Global';


HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.LongName = 'Handwheel Angle 1 Sensor 0 Ntc Number';
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.Description = 'HwAg1 Sensor 0 Ntc Number';
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.IsBuildPrm = true;
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X097;
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X093;
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X09A;
HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM.Define = 'Global';


HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.LongName = 'Handwheel Angle1 Sensor 1 Ntc Number';
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.Description = 'HwAg1 Sensor 1 Ntc Number';
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.IsBuildPrm = true;
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X099;
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X093;
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X09A;
HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM.Define = 'Global';


HWAG1SNSRFLTPASSSTEP_CNT_U16 = DataDict.Constant;
HWAG1SNSRFLTPASSSTEP_CNT_U16.LongName = 'Handwheel Angle 1 Sensor Fault Pass Step';
HWAG1SNSRFLTPASSSTEP_CNT_U16.Description = [...
  'Handwheel Angle 1 Sensor Fault Pass Step'];
HWAG1SNSRFLTPASSSTEP_CNT_U16.DocUnits = 'Cnt';
HWAG1SNSRFLTPASSSTEP_CNT_U16.EngDT = dt.u16;
HWAG1SNSRFLTPASSSTEP_CNT_U16.EngVal = 65535;
HWAG1SNSRFLTPASSSTEP_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwAg1IfFlt = DataDict.NTC;
HwAg1IfFlt.NtcNr = 'HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM';
HwAg1IfFlt.NtcTyp = 'Deb';
HwAg1IfFlt.LongName = 'Handwheel Angle 0 Interface Fault';
HwAg1IfFlt.Description = 'Interface Fault';
HwAg1IfFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAg1IfFlt.NtcStInfo.Bit0Descr = 'Skip Step Fault';
HwAg1IfFlt.NtcStInfo.Bit1Descr = 'Vernier Error Fault';
HwAg1IfFlt.NtcStInfo.Bit2Descr = 'Unused';
HwAg1IfFlt.NtcStInfo.Bit3Descr = 'Unused';
HwAg1IfFlt.NtcStInfo.Bit4Descr = 'Unused';
HwAg1IfFlt.NtcStInfo.Bit5Descr = 'Unused';
HwAg1IfFlt.NtcStInfo.Bit6Descr = 'Unused';
HwAg1IfFlt.NtcStInfo.Bit7Descr = 'Latch Fault';


HwAg1MfgFlt = DataDict.NTC;
HwAg1MfgFlt.NtcNr = 'HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM';
HwAg1MfgFlt.NtcTyp = 'None';
HwAg1MfgFlt.LongName = 'Handwheel Angle 1 Manufacturing Fault';
HwAg1MfgFlt.Description = 'Manufacturing Fault';
HwAg1MfgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAg1MfgFlt.NtcStInfo.Bit0Descr = 'Offset Trim Not Performed';
HwAg1MfgFlt.NtcStInfo.Bit1Descr = 'Unused';
HwAg1MfgFlt.NtcStInfo.Bit2Descr = 'Unused';
HwAg1MfgFlt.NtcStInfo.Bit3Descr = 'Unused';
HwAg1MfgFlt.NtcStInfo.Bit4Descr = 'Unused';
HwAg1MfgFlt.NtcStInfo.Bit5Descr = 'Unused';
HwAg1MfgFlt.NtcStInfo.Bit6Descr = 'Unused';
HwAg1MfgFlt.NtcStInfo.Bit7Descr = 'Unused';


HwAg1Snsr0PrtclFlt = DataDict.NTC;
HwAg1Snsr0PrtclFlt.NtcNr = 'HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM';
HwAg1Snsr0PrtclFlt.NtcTyp = 'Deb';
HwAg1Snsr0PrtclFlt.LongName = 'Handwheel Angle 1 Sensor0 Protocol Fault';
HwAg1Snsr0PrtclFlt.Description = 'Protocol Fault';
HwAg1Snsr0PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAg1Snsr0PrtclFlt.NtcStInfo.Bit0Descr = 'Protocol Fault';
HwAg1Snsr0PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwAg1Snsr0PrtclFlt.NtcStInfo.Bit2Descr = 'Unused';
HwAg1Snsr0PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwAg1Snsr0PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwAg1Snsr0PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwAg1Snsr0PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwAg1Snsr0PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';


HwAg1Snsr1PrtclFlt = DataDict.NTC;
HwAg1Snsr1PrtclFlt.NtcNr = 'HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM';
HwAg1Snsr1PrtclFlt.NtcTyp = 'Deb';
HwAg1Snsr1PrtclFlt.LongName = 'Handwheel Angle 1 Sensor1 Protocol Fault';
HwAg1Snsr1PrtclFlt.Description = 'Protocol Fault';
HwAg1Snsr1PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAg1Snsr1PrtclFlt.NtcStInfo.Bit0Descr = 'Protocol Fault';
HwAg1Snsr1PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwAg1Snsr1PrtclFlt.NtcStInfo.Bit2Descr = 'Unused';
HwAg1Snsr1PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwAg1Snsr1PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwAg1Snsr1PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwAg1Snsr1PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwAg1Snsr1PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
