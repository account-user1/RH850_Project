%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 17-Nov-2017 16:38:15       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM102B = DataDict.FDD;
CM102B.Version = '1.2.X';
CM102B.LongName = 'Flash Memory';
CM102B.ShoName  = 'FlsMem';
CM102B.DesignASIL = 'D';
CM102B.Description = 'Code Flash memory diagnostics';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
CodFlsSngBitEcc = DataDict.Runnable;
CodFlsSngBitEcc.Context = 'NonRte';
CodFlsSngBitEcc.TimeStep = 'ISR';
CodFlsSngBitEcc.Description = [...
  'ISR executed when ECC single bit error is detected'];

FlsMemInit1 = DataDict.Runnable;
FlsMemInit1.Context = 'Rte';
FlsMemInit1.TimeStep = 0;
FlsMemInit1.Description = [...
  'Outputs CRC of application region pre-calculated'];

FlsMemInit2 = DataDict.Runnable;
FlsMemInit2.Context = 'NonRte';
FlsMemInit2.TimeStep = 0;
FlsMemInit2.Description = [...
  'Configure DMA-DTS channels and DCRB unit for CRC computation'];

FlsMemPer1 = DataDict.Runnable;
FlsMemPer1.Context = 'Rte';
FlsMemPer1.TimeStep = 0.1;
FlsMemPer1.Description = [...
  'Checks for CRC computation end in loop. Then compares CRCs with the re' ...
  'ference ones'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ChkForStrtUpTest = DataDict.Client;
ChkForStrtUpTest.CallLocation = {'FlsMemInit2'};
ChkForStrtUpTest.Description = 'Compute CRC only if start-up test condition is valid ';
ChkForStrtUpTest.Return = DataDict.CSReturn;
ChkForStrtUpTest.Return.Type = 'None';
ChkForStrtUpTest.Return.Min = [];
ChkForStrtUpTest.Return.Max = [];
ChkForStrtUpTest.Return.TestTolerance = [];
ChkForStrtUpTest.Arguments(1) = DataDict.CSArguments;
ChkForStrtUpTest.Arguments(1).Name = 'ExecStrtUpTest';
ChkForStrtUpTest.Arguments(1).EngDT = dt.lgc;
ChkForStrtUpTest.Arguments(1).EngMin = 0;
ChkForStrtUpTest.Arguments(1).EngMax = 1;
ChkForStrtUpTest.Arguments(1).TestTolerance = 0;
ChkForStrtUpTest.Arguments(1).Units = 'Cnt';
ChkForStrtUpTest.Arguments(1).Direction = 'Out';
ChkForStrtUpTest.Arguments(1).InitRowCol = [1  1];
ChkForStrtUpTest.Arguments(1).Description = 'indiactes the start-up test condition ';


GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FlsMemInit2'};
GetRefTmr100MicroSec32bit.Description = 'Used to get reference timer';
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
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'Timer value ';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'FlsMemPer1'};
GetTiSpan100MicroSec32bit.Description = 'used to measure time taken from start time';
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
GetTiSpan100MicroSec32bit.Arguments(1).Description = 'start Timer value';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Time spent from start time';


ResvCrcHwUnit = DataDict.Client;
ResvCrcHwUnit.CallLocation = {'FlsMemInit2','FlsMemPer1'};
ResvCrcHwUnit.Description = [...
  'Reserves a hardware unit until it is released.'];
ResvCrcHwUnit.Return = DataDict.CSReturn;
ResvCrcHwUnit.Return.Type = 'Standard';
ResvCrcHwUnit.Return.Min = 0;
ResvCrcHwUnit.Return.Max = 1;
ResvCrcHwUnit.Return.TestTolerance = 1;
ResvCrcHwUnit.Return.Description = 'Standard Autosar function return.';
ResvCrcHwUnit.Arguments(1) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(1).Name = 'Mod';
ResvCrcHwUnit.Arguments(1).EngDT = enum.CrcHwResvMod1;
ResvCrcHwUnit.Arguments(1).EngMin = CrcHwResvMod1.CRCHWRESVMOD_RELS;
ResvCrcHwUnit.Arguments(1).EngMax = CrcHwResvMod1.CRCHWRESVMOD_RESV;
ResvCrcHwUnit.Arguments(1).Units = 'Cnt';
ResvCrcHwUnit.Arguments(1).Direction = 'In';
ResvCrcHwUnit.Arguments(1).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(1).Description = [...
  'Provides the action the function shall take.'];
ResvCrcHwUnit.Arguments(2) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(2).Name = 'CrcCfg';
ResvCrcHwUnit.Arguments(2).EngDT = enum.CrcHwResvCfg1;
ResvCrcHwUnit.Arguments(2).EngMin = CrcHwResvCfg1.CRCHWRESVCFG_32BITCRC32BITWIDTH;
ResvCrcHwUnit.Arguments(2).EngMax = CrcHwResvCfg1.CRCHWRESVCFG_8BITCRCH2F;
ResvCrcHwUnit.Arguments(2).Units = 'Cnt';
ResvCrcHwUnit.Arguments(2).Direction = 'In';
ResvCrcHwUnit.Arguments(2).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(2).Description = [...
  'Provides the configuration for the hardware unit.'];
ResvCrcHwUnit.Arguments(3) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(3).Name = 'CrcHwInRegAdr';
ResvCrcHwUnit.Arguments(3).EngDT = dt.u32;
ResvCrcHwUnit.Arguments(3).EngMin = 0;
ResvCrcHwUnit.Arguments(3).EngMax = 4294967295;
ResvCrcHwUnit.Arguments(3).TestTolerance = 0;
ResvCrcHwUnit.Arguments(3).Units = 'Cnt';
ResvCrcHwUnit.Arguments(3).Direction = 'Out';
ResvCrcHwUnit.Arguments(3).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(3).Description = [...
  'Returns the input register address that is used to pass the data the C' ...
  'RC for which the CRC is being calculated.'];
ResvCrcHwUnit.Arguments(4) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(4).Name = 'CrcHwOutRegAdr';
ResvCrcHwUnit.Arguments(4).EngDT = dt.u32;
ResvCrcHwUnit.Arguments(4).EngMin = 0;
ResvCrcHwUnit.Arguments(4).EngMax = 4294967295;
ResvCrcHwUnit.Arguments(4).TestTolerance = 0;
ResvCrcHwUnit.Arguments(4).Units = 'Cnt';
ResvCrcHwUnit.Arguments(4).Direction = 'Out';
ResvCrcHwUnit.Arguments(4).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(4).Description = [...
  'Returns the output register address that contains the results of the C' ...
  'RC calculation.'];
ResvCrcHwUnit.Arguments(5) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(5).Name = 'StrtVal';
ResvCrcHwUnit.Arguments(5).EngDT = dt.u32;
ResvCrcHwUnit.Arguments(5).EngMin = 0;
ResvCrcHwUnit.Arguments(5).EngMax = 4294967295;
ResvCrcHwUnit.Arguments(5).Units = 'Cnt';
ResvCrcHwUnit.Arguments(5).Direction = 'In';
ResvCrcHwUnit.Arguments(5).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(5).Description = [...
  'Starting value for the CRC calculation.'];
ResvCrcHwUnit.Arguments(6) = DataDict.CSArguments;
ResvCrcHwUnit.Arguments(6).Name = 'ResvKey';
ResvCrcHwUnit.Arguments(6).EngDT = dt.u32;
ResvCrcHwUnit.Arguments(6).EngMin = 0;
ResvCrcHwUnit.Arguments(6).EngMax = 4294967295;
ResvCrcHwUnit.Arguments(6).TestTolerance = 0;
ResvCrcHwUnit.Arguments(6).Units = 'Cnt';
ResvCrcHwUnit.Arguments(6).Direction = 'InOut';
ResvCrcHwUnit.Arguments(6).InitRowCol = [1  1];
ResvCrcHwUnit.Arguments(6).Description = [...
  'Provides the key to the caller so they can release the hardware unit w' ...
  'hen finshed.'];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'FlsMemPer1'};
SetNtcSts.Description = 'Used set NTC';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'status of the set NTC block ';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NTC number to be set';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'Paremeter bit information';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'debounce type of the NTC';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Faulr accumulator step size';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
CodFlsCrcChkCmpl = DataDict.OpSignal;
CodFlsCrcChkCmpl.LongName = 'Code Flash Crc Check Complete';
CodFlsCrcChkCmpl.Description = 'Crc Check Operation Complete Flag';
CodFlsCrcChkCmpl.DocUnits = 'Cnt';
CodFlsCrcChkCmpl.SwcShoName = 'FlsMem';
CodFlsCrcChkCmpl.EngDT = dt.lgc;
CodFlsCrcChkCmpl.EngInit = 0;
CodFlsCrcChkCmpl.EngMin = 0;
CodFlsCrcChkCmpl.EngMax = 1;
CodFlsCrcChkCmpl.TestTolerance = 0;
CodFlsCrcChkCmpl.WrittenIn = {'FlsMemPer1'};
CodFlsCrcChkCmpl.WriteType = 'Rte';


SwApplCrc = DataDict.OpSignal;
SwApplCrc.LongName = 'Software Application CRC';
SwApplCrc.Description = [...
  'Output the CRC of software application region'];
SwApplCrc.DocUnits = 'Cnt';
SwApplCrc.SwcShoName = 'FlsMem';
SwApplCrc.EngDT = dt.u32;
SwApplCrc.EngInit = 0;
SwApplCrc.EngMin = 0;
SwApplCrc.EngMax = 4294967295;
SwApplCrc.TestTolerance = 0;
SwApplCrc.WrittenIn = {'FlsMemInit1'};
SwApplCrc.WriteType = 'Rte';



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
CodFlsCrcChkStrtTi = DataDict.PIM;
CodFlsCrcChkStrtTi.LongName = 'Code Flash Crc Check Start Time';
CodFlsCrcChkStrtTi.Description = 'used for check Timer Out';
CodFlsCrcChkStrtTi.DocUnits = 'Cnt';
CodFlsCrcChkStrtTi.EngDT = dt.u32;
CodFlsCrcChkStrtTi.EngMin = 0;
CodFlsCrcChkStrtTi.EngMax = 5000;
CodFlsCrcChkStrtTi.InitRowCol = [1  1];


CodFlsDummyRead1 = DataDict.PIM;
CodFlsDummyRead1.LongName = 'Code Flash Dummy Read 1';
CodFlsDummyRead1.Description = [...
  'PIM to read different addresses from the same word line since a temp v' ...
  'ariable reading those addresses would get optimized away by the compil' ...
  'er'];
CodFlsDummyRead1.DocUnits = 'Cnt';
CodFlsDummyRead1.EngDT = dt.u32;
CodFlsDummyRead1.EngMin = 0;
CodFlsDummyRead1.EngMax = 4294967295;
CodFlsDummyRead1.InitRowCol = [1  1];


CodFlsDummyRead2 = DataDict.PIM;
CodFlsDummyRead2.LongName = 'Code Flash Dummy Read 2';
CodFlsDummyRead2.Description = [...
  'PIM to read different addresses fromt the same word line since a temp ' ...
  'variable reading those addresses would get optimized away by the compi' ...
  'ler'];
CodFlsDummyRead2.DocUnits = 'Cnt';
CodFlsDummyRead2.EngDT = dt.u32;
CodFlsDummyRead2.EngMin = 0;
CodFlsDummyRead2.EngMax = 4294967295;
CodFlsDummyRead2.InitRowCol = [1  1];


CodFlsDummyRead3 = DataDict.PIM;
CodFlsDummyRead3.LongName = 'Code Flash Dummy Read 3';
CodFlsDummyRead3.Description = [...
  'PIM to read different addresses from the same word line since a temp v' ...
  'ariable reading those addresses would get optimized away by the compil' ...
  'er'];
CodFlsDummyRead3.DocUnits = 'Cnt';
CodFlsDummyRead3.EngDT = dt.u32;
CodFlsDummyRead3.EngMin = 0;
CodFlsDummyRead3.EngMax = 4294967295;
CodFlsDummyRead3.InitRowCol = [1  1];


CodFlsDummyRead4 = DataDict.PIM;
CodFlsDummyRead4.LongName = 'Code Flash Dummy Read 4';
CodFlsDummyRead4.Description = [...
  'PIM to read different addresses from the same word line since a temp v' ...
  'ariable reading those addresses would get optimized away by the compil' ...
  'er'];
CodFlsDummyRead4.DocUnits = 'Cnt';
CodFlsDummyRead4.EngDT = dt.u32;
CodFlsDummyRead4.EngMin = 0;
CodFlsDummyRead4.EngMax = 4294967295;
CodFlsDummyRead4.InitRowCol = [1  1];


CodFlsSngBitErr = DataDict.PIM;
CodFlsSngBitErr.LongName = 'Code Flash Single Bit Error';
CodFlsSngBitErr.Description = [...
  'Flag to indicate if Code Flash Single Bit Error occured'];
CodFlsSngBitErr.DocUnits = 'Cnt';
CodFlsSngBitErr.EngDT = dt.lgc;
CodFlsSngBitErr.EngMin = 0;
CodFlsSngBitErr.EngMax = 1;
CodFlsSngBitErr.InitRowCol = [1  1];


CrcChkCmpl = DataDict.PIM;
CrcChkCmpl.LongName = 'Crc Check Complete';
CrcChkCmpl.Description = [...
  'Flag determine Crc Operation Complete or not'];
CrcChkCmpl.DocUnits = 'Cnt';
CrcChkCmpl.EngDT = dt.lgc;
CrcChkCmpl.EngMin = 0;
CrcChkCmpl.EngMax = 1;
CrcChkCmpl.InitRowCol = [1  1];


CrcHwIdxKey = DataDict.PIM;
CrcHwIdxKey.LongName = 'Crc Hardware Index Key';
CrcHwIdxKey.Description = [...
  'Index Key return Task ID for Crc Hw Release'];
CrcHwIdxKey.DocUnits = 'Cnt';
CrcHwIdxKey.EngDT = dt.u32;
CrcHwIdxKey.EngMin = 0;
CrcHwIdxKey.EngMax = 4294967295;
CrcHwIdxKey.InitRowCol = [1  1];


HwCrcCalcdRes = DataDict.PIM;
HwCrcCalcdRes.LongName = 'Hardware Crc Calculated Result';
HwCrcCalcdRes.Description = [...
  'used as structure which store "HwCrcCalcdRes" elements per sector'];
HwCrcCalcdRes.DocUnits = 'Uls';
HwCrcCalcdRes.EngDT = dt.u32;
HwCrcCalcdRes.EngMin = 0;
HwCrcCalcdRes.EngMax = 4294967295;
HwCrcCalcdRes.InitRowCol = [1  8];


PwrOnRstCrcChkCmpl = DataDict.PIM;
PwrOnRstCrcChkCmpl.LongName = 'Power On Reset Crc Check Complete';
PwrOnRstCrcChkCmpl.Description = [...
  'Flag determine Power On Reset Crc Operation Complete'];
PwrOnRstCrcChkCmpl.DocUnits = 'Cnt';
PwrOnRstCrcChkCmpl.EngDT = dt.lgc;
PwrOnRstCrcChkCmpl.EngMin = 0;
PwrOnRstCrcChkCmpl.EngMax = 1;
PwrOnRstCrcChkCmpl.InitRowCol = [1  1];


dFlsMemVrfyCrcInitCmpl = DataDict.PIM;
dFlsMemVrfyCrcInitCmpl.LongName = 'Flash Memory Verify CRC Initialization Completed';
dFlsMemVrfyCrcInitCmpl.Description = [...
  'Flag indicating completed run of FlsMemInit2 function'];
dFlsMemVrfyCrcInitCmpl.DocUnits = 'Cnt';
dFlsMemVrfyCrcInitCmpl.EngDT = dt.lgc;
dFlsMemVrfyCrcInitCmpl.EngMin = 0;
dFlsMemVrfyCrcInitCmpl.EngMax = 1;
dFlsMemVrfyCrcInitCmpl.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
APPLCRCREGNNR_CNT_U08 = DataDict.ConfigParam;
APPLCRCREGNNR_CNT_U08.LongName = 'Application CRC Region Number';
APPLCRCREGNNR_CNT_U08.Description = [...
  'The application region"s index might be changed in between programs. T' ...
  'his constant will define the application region for a specific build.'];
APPLCRCREGNNR_CNT_U08.IsBuildPrm = false;
APPLCRCREGNNR_CNT_U08.DocUnits = 'Cnt';
APPLCRCREGNNR_CNT_U08.EngDT = dt.u08;
APPLCRCREGNNR_CNT_U08.EngVal = 0;
APPLCRCREGNNR_CNT_U08.EngMin = 0;
APPLCRCREGNNR_CNT_U08.EngMax = 255;
APPLCRCREGNNR_CNT_U08.Define = 'Local';


CRCCHKMAXALLWDTI_CNT_U32 = DataDict.Constant;
CRCCHKMAXALLWDTI_CNT_U32.LongName = 'Crc Check Maximum Allower Time';
CRCCHKMAXALLWDTI_CNT_U32.Description = [...
  'Number of Opportunity for check the flag'];
CRCCHKMAXALLWDTI_CNT_U32.DocUnits = 'Cnt';
CRCCHKMAXALLWDTI_CNT_U32.EngDT = dt.u32;
CRCCHKMAXALLWDTI_CNT_U32.EngVal = 2000;
CRCCHKMAXALLWDTI_CNT_U32.Define = 'Local';


STD_OFF = DataDict.Constant;
STD_OFF.LongName = 'Standard Off';
STD_OFF.Description = 'FALSE';
STD_OFF.DocUnits = 'Cnt';
STD_OFF.EngDT = dt.lgc;
STD_OFF.EngVal = 0;
STD_OFF.Define = 'Global';


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
CodFlsCrcFlt = DataDict.NTC;
CodFlsCrcFlt.NtcNr = NtcNr1.NTCNR_0X004;
CodFlsCrcFlt.NtcTyp = 'None';
CodFlsCrcFlt.LongName = 'Flash Memory Code Flash Crc Fault';
CodFlsCrcFlt.Description = 'Crc Check failure for code flash';
CodFlsCrcFlt.NtcStInfo = DataDict.NtcStInfoIdx;
CodFlsCrcFlt.NtcStInfo.Idx(1).EngVal = 1;
CodFlsCrcFlt.NtcStInfo.Idx(1).Descr = 'Crc Check Crc Region 1 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(2).EngVal = 2;
CodFlsCrcFlt.NtcStInfo.Idx(2).Descr = 'Crc Check Crc Region 2 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(3).EngVal = 4;
CodFlsCrcFlt.NtcStInfo.Idx(3).Descr = 'Crc Check Crc Region 3 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(4).EngVal = 8;
CodFlsCrcFlt.NtcStInfo.Idx(4).Descr = 'Crc Check Crc Region 4 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(5).EngVal = 16;
CodFlsCrcFlt.NtcStInfo.Idx(5).Descr = 'Crc Check Crc Region 5 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(6).EngVal = 32;
CodFlsCrcFlt.NtcStInfo.Idx(6).Descr = 'Crc Check Crc Region 6 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(7).EngVal = 64;
CodFlsCrcFlt.NtcStInfo.Idx(7).Descr = 'Crc Check Crc Region 7 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(8).EngVal = 128;
CodFlsCrcFlt.NtcStInfo.Idx(8).Descr = 'Crc Check Crc Region 8 Fail';
CodFlsCrcFlt.NtcStInfo.Idx(9).EngVal = 255;
CodFlsCrcFlt.NtcStInfo.Idx(9).Descr = 'Crc Check Time Out Fail';
CodFlsCrcFlt.NtcStsLockdThisIgnCyc = 0;


CodFlsSngBitEccFlt = DataDict.NTC;
CodFlsSngBitEccFlt.NtcNr = NtcNr1.NTCNR_0X002;
CodFlsSngBitEccFlt.NtcTyp = 'None';
CodFlsSngBitEccFlt.LongName = 'Code Flash Single Bit ECC Fault';
CodFlsSngBitEccFlt.Description = 'Code flash from ECC';
CodFlsSngBitEccFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
CodFlsSngBitEccFlt.NtcStInfo.Bit0Descr = 'Code Flash Single Bit ECC Fault';
CodFlsSngBitEccFlt.NtcStInfo.Bit1Descr = 'Unused';
CodFlsSngBitEccFlt.NtcStInfo.Bit2Descr = 'Unused';
CodFlsSngBitEccFlt.NtcStInfo.Bit3Descr = 'Unused';
CodFlsSngBitEccFlt.NtcStInfo.Bit4Descr = 'Unused';
CodFlsSngBitEccFlt.NtcStInfo.Bit5Descr = 'Unused';
CodFlsSngBitEccFlt.NtcStInfo.Bit6Descr = 'Unused';
CodFlsSngBitEccFlt.NtcStInfo.Bit7Descr = 'Unused';
CodFlsSngBitEccFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
