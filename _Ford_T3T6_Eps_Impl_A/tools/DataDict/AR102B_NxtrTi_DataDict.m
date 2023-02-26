%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 22-Sep-2017 13:52:24       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

AR102B = DataDict.FDD;
AR102B.Version = '1.0.X';
AR102B.LongName = 'Nexteer Time';
AR102B.ShoName  = 'NxtrTi';
AR102B.DesignASIL = 'D';
AR102B.Description = 'Nexteer Time Library';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
NxtrTiInit1 = DataDict.Runnable;
NxtrTiInit1.Context = 'Rte';
NxtrTiInit1.TimeStep = 0;
NxtrTiInit1.Description = 'Init function which calls Init0';

NxtrTiPer1 = DataDict.Runnable;
NxtrTiPer1.Context = 'Rte';
NxtrTiPer1.TimeStep = 0.002;
NxtrTiPer1.Description = [...
  'Periodic check for Timer correlation fault'];

GetRefTmr100MicroSec32bit = DataDict.SrvRunnable;
GetRefTmr100MicroSec32bit.Context = 'Both';
GetRefTmr100MicroSec32bit.Description = [...
  'Get Reference time in multiples of 100 Micro Seconds'];
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 0;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = [...
  'Variable which holds the reference timer count value'];

GetRefTmr1MicroSec32bit = DataDict.SrvRunnable;
GetRefTmr1MicroSec32bit.Context = 'Both';
GetRefTmr1MicroSec32bit.Description = [...
  'Get Reference time in multiples of 1 Micro Seconds'];
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
  'Variable which holds the reference timer count value'];

GetTiSpan100MicroSec32bit = DataDict.SrvRunnable;
GetTiSpan100MicroSec32bit.Context = 'Both';
GetTiSpan100MicroSec32bit.Description = [...
  'Server runnable which returns elapsed time in counts of 100 micro seco' ...
  'nds'];
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(1).Description = [...
  'Variable which holds the reference timer count value'];
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = [...
  'Variable which holds the elapsed timer count value'];

GetTiSpan1MicroSec32bit = DataDict.SrvRunnable;
GetTiSpan1MicroSec32bit.Context = 'Both';
GetTiSpan1MicroSec32bit.Description = [...
  'Server runnable which returns elapsed time in counts of 1 micro second' ...
  's'];
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
  'Variable which holds the reference timer count value'];
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
  'Variable which holds the elapsed timer count value'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ClrErrInjReg = DataDict.Client;
ClrErrInjReg.CallLocation = {'NxtrTiPer1'};
ClrErrInjReg.Description = 'Clear BRAMDAT2';
ClrErrInjReg.Return = DataDict.CSReturn;
ClrErrInjReg.Return.Type = 'None';
ClrErrInjReg.Return.Min = [];
ClrErrInjReg.Return.Max = [];
ClrErrInjReg.Return.TestTolerance = [];


ReadErrInjReg = DataDict.Client;
ReadErrInjReg.CallLocation = {'NxtrTiPer1'};
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
ReadErrInjReg.Arguments(1).TestTolerance = 0;
ReadErrInjReg.Arguments(1).Units = 'Cnt';
ReadErrInjReg.Arguments(1).Direction = 'Out';
ReadErrInjReg.Arguments(1).InitRowCol = [1  1];
ReadErrInjReg.Arguments(1).Description = 'None';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'NxtrTiPer1'};
SetNtcSts.Description = 'Sets the status of a NTC';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'Standard Return';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NTC number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'NTC State Info';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'Ntc Status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Debounce step count';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

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
MCUDIAGCERRINJ = DataDict.ConfigParam;
MCUDIAGCERRINJ.LongName = 'MCU Diagnostic Error Injection';
MCUDIAGCERRINJ.Description = [...
  'This is false for production builds.  It is set to true at compile tim' ...
  'e only for s/w special builds with MCU Error Injection active.'];
MCUDIAGCERRINJ.IsBuildPrm = false;
MCUDIAGCERRINJ.DocUnits = 'Cnt';
MCUDIAGCERRINJ.EngDT = dt.lgc;
MCUDIAGCERRINJ.EngVal = 0;
MCUDIAGCERRINJ.EngMin = 0;
MCUDIAGCERRINJ.EngMax = 1;
MCUDIAGCERRINJ.Define = 'Global';


MCUERRINJ_NTC0039BIT00CASE01_CNT_U32 = DataDict.Constant;
MCUERRINJ_NTC0039BIT00CASE01_CNT_U32.LongName = 'MCU Error Injection Id NTC0x039 Bit 0 Case 1';
MCUERRINJ_NTC0039BIT00CASE01_CNT_U32.Description = [...
  'BRAMDAT2 value is compared to this constant to inject the respective f' ...
  'ault'];
MCUERRINJ_NTC0039BIT00CASE01_CNT_U32.DocUnits = 'Cnt';
MCUERRINJ_NTC0039BIT00CASE01_CNT_U32.EngDT = dt.u32;
MCUERRINJ_NTC0039BIT00CASE01_CNT_U32.EngVal = 3735809;
MCUERRINJ_NTC0039BIT00CASE01_CNT_U32.Define = 'Global';


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
TmrCorrlnFlt = DataDict.NTC;
TmrCorrlnFlt.NtcNr = NtcNr1.NTCNR_0X039;
TmrCorrlnFlt.NtcTyp = 'None';
TmrCorrlnFlt.LongName = 'Timer Correlation Fault';
TmrCorrlnFlt.Description = 'NTC for 1us vs 100ms correlation fault';
TmrCorrlnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
TmrCorrlnFlt.NtcStInfo.Bit0Descr = 'Correlation Fault';
TmrCorrlnFlt.NtcStInfo.Bit1Descr = 'Unused';
TmrCorrlnFlt.NtcStInfo.Bit2Descr = 'Unused';
TmrCorrlnFlt.NtcStInfo.Bit3Descr = 'Unused';
TmrCorrlnFlt.NtcStInfo.Bit4Descr = 'Unused';
TmrCorrlnFlt.NtcStInfo.Bit5Descr = 'Unused';
TmrCorrlnFlt.NtcStInfo.Bit6Descr = 'Unused';
TmrCorrlnFlt.NtcStInfo.Bit7Descr = 'Unused';
TmrCorrlnFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
