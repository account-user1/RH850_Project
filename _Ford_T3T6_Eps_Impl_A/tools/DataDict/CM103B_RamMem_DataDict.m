%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 02-Nov-2017 11:17:25       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM103B = DataDict.FDD;
CM103B.Version = '1.1.X';
CM103B.LongName = 'RAM Memory';
CM103B.ShoName  = 'RamMem';
CM103B.DesignASIL = 'D';
CM103B.Description = [...
  'Diagnostics related to RAM memory - Local, periperal and I-Cache'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
RamMemGlbRamSngBitEcc = DataDict.Runnable;
RamMemGlbRamSngBitEcc.Context = 'NonRte';
RamMemGlbRamSngBitEcc.TimeStep = 'ISR';
RamMemGlbRamSngBitEcc.Description = [...
  'RAM Memory Global RAM Single Bit ECC'];

RamMemInit1 = DataDict.Runnable;
RamMemInit1.Context = 'Rte';
RamMemInit1.TimeStep = 0;
RamMemInit1.Description = 'None';

RamMemLclRamSngBitEcc = DataDict.Runnable;
RamMemLclRamSngBitEcc.Context = 'NonRte';
RamMemLclRamSngBitEcc.TimeStep = 'ISR';
RamMemLclRamSngBitEcc.Description = [...
  'RAM Memory Local RAM Single Bit ECC'];

RamMemPer1 = DataDict.Runnable;
RamMemPer1.Context = 'Rte';
RamMemPer1.TimeStep = 0.002;
RamMemPer1.Description = 'None';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'RamMemPer1','RamMemInit1'};
SetNtcSts.Description = 'None';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'None';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'None';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'None';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'None';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'None';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
GlbRamEccSngBitCntrOutp = DataDict.OpSignal;
GlbRamEccSngBitCntrOutp.LongName = 'Global RAM ECC Single Bit Counter Output';
GlbRamEccSngBitCntrOutp.Description = [...
  'Output to indicate the number of times Global RAM Single Bit ECC has o' ...
  'ccured in an ignition cycle'];
GlbRamEccSngBitCntrOutp.DocUnits = 'Cnt';
GlbRamEccSngBitCntrOutp.SwcShoName = 'RamMem';
GlbRamEccSngBitCntrOutp.EngDT = dt.u08;
GlbRamEccSngBitCntrOutp.EngInit = 0;
GlbRamEccSngBitCntrOutp.EngMin = 0;
GlbRamEccSngBitCntrOutp.EngMax = 100;
GlbRamEccSngBitCntrOutp.TestTolerance = 0;
GlbRamEccSngBitCntrOutp.WrittenIn = {'RamMemPer1'};
GlbRamEccSngBitCntrOutp.WriteType = 'Rte';


LclRamEccSngBitCntrOutp = DataDict.OpSignal;
LclRamEccSngBitCntrOutp.LongName = 'Local RAM ECC Single Bit Counter Output';
LclRamEccSngBitCntrOutp.Description = [...
  'Output to indicate the number of times Local RAM Single Bit ECC has oc' ...
  'cured in an ignition cycle'];
LclRamEccSngBitCntrOutp.DocUnits = 'Cnt';
LclRamEccSngBitCntrOutp.SwcShoName = 'RamMem';
LclRamEccSngBitCntrOutp.EngDT = dt.u08;
LclRamEccSngBitCntrOutp.EngInit = 0;
LclRamEccSngBitCntrOutp.EngMin = 0;
LclRamEccSngBitCntrOutp.EngMax = 100;
LclRamEccSngBitCntrOutp.TestTolerance = 0;
LclRamEccSngBitCntrOutp.WrittenIn = {'RamMemPer1'};
LclRamEccSngBitCntrOutp.WriteType = 'Rte';



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
dRamMemCanRamDblBitEccErrAdr = DataDict.Display;
dRamMemCanRamDblBitEccErrAdr.LongName = 'CAN RAM Double Bit ECC Error Address';
dRamMemCanRamDblBitEccErrAdr.Description = [...
  'Address indicated by the double bit ECC Failure'];
dRamMemCanRamDblBitEccErrAdr.DocUnits = 'Cnt';
dRamMemCanRamDblBitEccErrAdr.EngDT = dt.u32;
dRamMemCanRamDblBitEccErrAdr.EngMin = 0;
dRamMemCanRamDblBitEccErrAdr.EngMax = 4294967295;
dRamMemCanRamDblBitEccErrAdr.InitRowCol = [1  1];


dRamMemCanRamSngBitEccErrAdr = DataDict.Display;
dRamMemCanRamSngBitEccErrAdr.LongName = 'CAN RAM Single Bit ECC Error Address';
dRamMemCanRamSngBitEccErrAdr.Description = [...
  'Address indicated by the single bit ECC Failure'];
dRamMemCanRamSngBitEccErrAdr.DocUnits = 'Cnt';
dRamMemCanRamSngBitEccErrAdr.EngDT = dt.u32;
dRamMemCanRamSngBitEccErrAdr.EngMin = 0;
dRamMemCanRamSngBitEccErrAdr.EngMax = 4294967295;
dRamMemCanRamSngBitEccErrAdr.InitRowCol = [1  1];


dRamMemDtsRamEccErrAdr = DataDict.Display;
dRamMemDtsRamEccErrAdr.LongName = 'DTS RAM ECC Error Address';
dRamMemDtsRamEccErrAdr.Description = [...
  'Address indicated by the ECC Failure'];
dRamMemDtsRamEccErrAdr.DocUnits = 'Cnt';
dRamMemDtsRamEccErrAdr.EngDT = dt.u32;
dRamMemDtsRamEccErrAdr.EngMin = 0;
dRamMemDtsRamEccErrAdr.EngMax = 4294967295;
dRamMemDtsRamEccErrAdr.InitRowCol = [1  1];


dRamMemFrRamDblBitEccErrAdr = DataDict.Display;
dRamMemFrRamDblBitEccErrAdr.LongName = 'Flexray RAM Double Bit ECC Error Address';
dRamMemFrRamDblBitEccErrAdr.Description = [...
  'Address indicated by the Double Bit ECC Failure'];
dRamMemFrRamDblBitEccErrAdr.DocUnits = 'Cnt';
dRamMemFrRamDblBitEccErrAdr.EngDT = dt.u32;
dRamMemFrRamDblBitEccErrAdr.EngMin = 0;
dRamMemFrRamDblBitEccErrAdr.EngMax = 4294967295;
dRamMemFrRamDblBitEccErrAdr.InitRowCol = [1  1];


dRamMemFrRamSngBitEccErrAdr = DataDict.Display;
dRamMemFrRamSngBitEccErrAdr.LongName = 'Flexray RAM Single Bit ECC Error Address';
dRamMemFrRamSngBitEccErrAdr.Description = [...
  'Address indicated by the Single Bit ECC Failure'];
dRamMemFrRamSngBitEccErrAdr.DocUnits = 'Cnt';
dRamMemFrRamSngBitEccErrAdr.EngDT = dt.u32;
dRamMemFrRamSngBitEccErrAdr.EngMin = 0;
dRamMemFrRamSngBitEccErrAdr.EngMax = 4294967295;
dRamMemFrRamSngBitEccErrAdr.InitRowCol = [1  1];


dRamMemFrRamTmpBufADblBitEccErrAdr = DataDict.Display;
dRamMemFrRamTmpBufADblBitEccErrAdr.LongName = 'Flexray RAM Temporary Buffer A Double Bit ECC Error Address';
dRamMemFrRamTmpBufADblBitEccErrAdr.Description = [...
  'Address indicated by the Double Bit ECC Failure'];
dRamMemFrRamTmpBufADblBitEccErrAdr.DocUnits = 'Cnt';
dRamMemFrRamTmpBufADblBitEccErrAdr.EngDT = dt.u32;
dRamMemFrRamTmpBufADblBitEccErrAdr.EngMin = 0;
dRamMemFrRamTmpBufADblBitEccErrAdr.EngMax = 4294967295;
dRamMemFrRamTmpBufADblBitEccErrAdr.InitRowCol = [1  1];


dRamMemFrRamTmpBufBDblBitEccErrAdr = DataDict.Display;
dRamMemFrRamTmpBufBDblBitEccErrAdr.LongName = 'Flexray RAM Temporary Buffer B Double Bit ECC Error Address';
dRamMemFrRamTmpBufBDblBitEccErrAdr.Description = [...
  'Address indicated by the Double Bit ECC Failure'];
dRamMemFrRamTmpBufBDblBitEccErrAdr.DocUnits = 'Cnt';
dRamMemFrRamTmpBufBDblBitEccErrAdr.EngDT = dt.u32;
dRamMemFrRamTmpBufBDblBitEccErrAdr.EngMin = 0;
dRamMemFrRamTmpBufBDblBitEccErrAdr.EngMax = 4294967295;
dRamMemFrRamTmpBufBDblBitEccErrAdr.InitRowCol = [1  1];


dRamMemGtmRamSngBitEccErrAdr = DataDict.Display;
dRamMemGtmRamSngBitEccErrAdr.LongName = 'RAM Memory GTM RAM Single Bit ECC Error Address';
dRamMemGtmRamSngBitEccErrAdr.Description = [...
  'Address indicated by the Single Bit ECC Failure'];
dRamMemGtmRamSngBitEccErrAdr.DocUnits = 'Cnt';
dRamMemGtmRamSngBitEccErrAdr.EngDT = dt.u32;
dRamMemGtmRamSngBitEccErrAdr.EngMin = 0;
dRamMemGtmRamSngBitEccErrAdr.EngMax = 4294967295;
dRamMemGtmRamSngBitEccErrAdr.InitRowCol = [1  1];


dRamMemMCan0RamDblBitEccErrAdr = DataDict.Display;
dRamMemMCan0RamDblBitEccErrAdr.LongName = 'RAM Memory Mass CAN 0 RAM Double Bit ECC Error Address';
dRamMemMCan0RamDblBitEccErrAdr.Description = [...
  'Address indicated by the double bit ECC Failure'];
dRamMemMCan0RamDblBitEccErrAdr.DocUnits = 'Cnt';
dRamMemMCan0RamDblBitEccErrAdr.EngDT = dt.u32;
dRamMemMCan0RamDblBitEccErrAdr.EngMin = 0;
dRamMemMCan0RamDblBitEccErrAdr.EngMax = 4294967295;
dRamMemMCan0RamDblBitEccErrAdr.InitRowCol = [1  1];


dRamMemMCan1RamDblBitEccErrAdr = DataDict.Display;
dRamMemMCan1RamDblBitEccErrAdr.LongName = 'RAM Memory Mass CAN 1 RAM Double Bit ECC Error Address';
dRamMemMCan1RamDblBitEccErrAdr.Description = [...
  'Address indicated by the double bit ECC Failure'];
dRamMemMCan1RamDblBitEccErrAdr.DocUnits = 'Cnt';
dRamMemMCan1RamDblBitEccErrAdr.EngDT = dt.u32;
dRamMemMCan1RamDblBitEccErrAdr.EngMin = 0;
dRamMemMCan1RamDblBitEccErrAdr.EngMax = 4294967295;
dRamMemMCan1RamDblBitEccErrAdr.InitRowCol = [1  1];


dRamMemSpi0RamEccErrAdr = DataDict.Display;
dRamMemSpi0RamEccErrAdr.LongName = 'SPI 0 RAM ECC Error Address';
dRamMemSpi0RamEccErrAdr.Description = [...
  'SPI 0 RAM Double Bit ECC Error Address'];
dRamMemSpi0RamEccErrAdr.DocUnits = 'Cnt';
dRamMemSpi0RamEccErrAdr.EngDT = dt.u32;
dRamMemSpi0RamEccErrAdr.EngMin = 0;
dRamMemSpi0RamEccErrAdr.EngMax = 4294967295;
dRamMemSpi0RamEccErrAdr.InitRowCol = [1  1];


dRamMemSpi1RamEccErrAdr = DataDict.Display;
dRamMemSpi1RamEccErrAdr.LongName = 'SPI 1 RAM ECC Error Address';
dRamMemSpi1RamEccErrAdr.Description = [...
  'SPI 1 RAM Double Bit ECC Error Address'];
dRamMemSpi1RamEccErrAdr.DocUnits = 'Cnt';
dRamMemSpi1RamEccErrAdr.EngDT = dt.u32;
dRamMemSpi1RamEccErrAdr.EngMin = 0;
dRamMemSpi1RamEccErrAdr.EngMax = 4294967295;
dRamMemSpi1RamEccErrAdr.InitRowCol = [1  1];


dRamMemSpi2RamEccErrAdr = DataDict.Display;
dRamMemSpi2RamEccErrAdr.LongName = 'SPI 2 RAM ECC Error Address';
dRamMemSpi2RamEccErrAdr.Description = [...
  'SPI 2 RAM Double Bit ECC Error Address'];
dRamMemSpi2RamEccErrAdr.DocUnits = 'Cnt';
dRamMemSpi2RamEccErrAdr.EngDT = dt.u32;
dRamMemSpi2RamEccErrAdr.EngMin = 0;
dRamMemSpi2RamEccErrAdr.EngMax = 4294967295;
dRamMemSpi2RamEccErrAdr.InitRowCol = [1  1];


dRamMemSpi3RamEccErrAdr = DataDict.Display;
dRamMemSpi3RamEccErrAdr.LongName = 'SPI 3 RAM ECC Error Address';
dRamMemSpi3RamEccErrAdr.Description = [...
  'SPI 3 RAM Double Bit ECC Error Address'];
dRamMemSpi3RamEccErrAdr.DocUnits = 'Cnt';
dRamMemSpi3RamEccErrAdr.EngDT = dt.u32;
dRamMemSpi3RamEccErrAdr.EngMin = 0;
dRamMemSpi3RamEccErrAdr.EngMax = 4294967295;
dRamMemSpi3RamEccErrAdr.InitRowCol = [1  1];


dRamMemSpiRamEccErrAdr = DataDict.Display;
dRamMemSpiRamEccErrAdr.LongName = 'SPI RAM Failure Address';
dRamMemSpiRamEccErrAdr.Description = [...
  'Address indicated by the ECC Failure'];
dRamMemSpiRamEccErrAdr.DocUnits = 'Cnt';
dRamMemSpiRamEccErrAdr.EngDT = dt.u32;
dRamMemSpiRamEccErrAdr.EngMin = 0;
dRamMemSpiRamEccErrAdr.EngMax = 4294967295;
dRamMemSpiRamEccErrAdr.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
GlbRamEccSngBitCntr = DataDict.PIM;
GlbRamEccSngBitCntr.LongName = 'Global RAM ECC Single Bit Counter';
GlbRamEccSngBitCntr.Description = [...
  'Address indicated by the ECC Failure'];
GlbRamEccSngBitCntr.DocUnits = 'Cnt';
GlbRamEccSngBitCntr.EngDT = dt.u08;
GlbRamEccSngBitCntr.EngMin = 0;
GlbRamEccSngBitCntr.EngMax = 100;
GlbRamEccSngBitCntr.InitRowCol = [1  1];


GlbRamEccSngBitSoftFailr = DataDict.PIM;
GlbRamEccSngBitSoftFailr.LongName = 'Global RAM ECC Single Bit Soft Failure';
GlbRamEccSngBitSoftFailr.Description = [...
  'Passes information to periodic for Global RAM single bit fault status'];
GlbRamEccSngBitSoftFailr.DocUnits = 'Cnt';
GlbRamEccSngBitSoftFailr.EngDT = dt.lgc;
GlbRamEccSngBitSoftFailr.EngMin = 0;
GlbRamEccSngBitSoftFailr.EngMax = 1;
GlbRamEccSngBitSoftFailr.InitRowCol = [1  1];


GlbRamFailrAdr = DataDict.PIM;
GlbRamFailrAdr.LongName = 'Global RAM Failure Address';
GlbRamFailrAdr.Description = [...
  'Address indicated by the ECC Failure'];
GlbRamFailrAdr.DocUnits = 'Cnt';
GlbRamFailrAdr.EngDT = dt.u32;
GlbRamFailrAdr.EngMin = 0;
GlbRamFailrAdr.EngMax = 4294967295;
GlbRamFailrAdr.InitRowCol = [1  1];


GlbRamWordLineRead = DataDict.PIM;
GlbRamWordLineRead.LongName = 'Global RAM Word Line Read';
GlbRamWordLineRead.Description = [...
  'Variable to read data from Global RAM'];
GlbRamWordLineRead.DocUnits = 'Cnt';
GlbRamWordLineRead.EngDT = dt.u32;
GlbRamWordLineRead.EngMin = 0;
GlbRamWordLineRead.EngMax = 4294967295;
GlbRamWordLineRead.InitRowCol = [1  1];


LclRamEccSngBitCntr = DataDict.PIM;
LclRamEccSngBitCntr.LongName = 'Local RAM ECC Single Bit Counter';
LclRamEccSngBitCntr.Description = [...
  'Address indicated by the ECC Failure'];
LclRamEccSngBitCntr.DocUnits = 'Cnt';
LclRamEccSngBitCntr.EngDT = dt.u08;
LclRamEccSngBitCntr.EngMin = 0;
LclRamEccSngBitCntr.EngMax = 100;
LclRamEccSngBitCntr.InitRowCol = [1  1];


LclRamEccSngBitSoftFailr = DataDict.PIM;
LclRamEccSngBitSoftFailr.LongName = 'Local Ram ECC Single Bit Soft Failure';
LclRamEccSngBitSoftFailr.Description = [...
  'Passes information to periodic for local RAM single bit fault status'];
LclRamEccSngBitSoftFailr.DocUnits = 'Cnt';
LclRamEccSngBitSoftFailr.EngDT = dt.lgc;
LclRamEccSngBitSoftFailr.EngMin = 0;
LclRamEccSngBitSoftFailr.EngMax = 1;
LclRamEccSngBitSoftFailr.InitRowCol = [1  1];


LclRamFailrAdr = DataDict.PIM;
LclRamFailrAdr.LongName = 'Local RAM Failure Address';
LclRamFailrAdr.Description = [...
  'Address indicated by the ECC Failure'];
LclRamFailrAdr.DocUnits = 'Cnt';
LclRamFailrAdr.EngDT = dt.u32;
LclRamFailrAdr.EngMin = 0;
LclRamFailrAdr.EngMax = 4294967295;
LclRamFailrAdr.InitRowCol = [1  1];


LclRamWordLineRead = DataDict.PIM;
LclRamWordLineRead.LongName = 'Local RAM Word Line Read';
LclRamWordLineRead.Description = [...
  'Variable to read data from Local RAM'];
LclRamWordLineRead.DocUnits = 'Cnt';
LclRamWordLineRead.EngDT = dt.u32;
LclRamWordLineRead.EngMin = 0;
LclRamWordLineRead.EngMax = 4294967295;
LclRamWordLineRead.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
GLBRAMBASADR_CNT_U32 = DataDict.Constant;
GLBRAMBASADR_CNT_U32.LongName = 'Global Ram Base Address';
GLBRAMBASADR_CNT_U32.Description = [...
  'Base address to caliculate Global ram error address:0xFEED8000'];
GLBRAMBASADR_CNT_U32.DocUnits = 'Cnt';
GLBRAMBASADR_CNT_U32.EngDT = dt.u32;
GLBRAMBASADR_CNT_U32.EngVal = 4276977664;
GLBRAMBASADR_CNT_U32.Define = 'Local';


GLBRAMSNGBITCNTRMAX_CNT_U08 = DataDict.Constant;
GLBRAMSNGBITCNTRMAX_CNT_U08.LongName = 'Global RAM Single Bit Counter Max';
GLBRAMSNGBITCNTRMAX_CNT_U08.Description = [...
  'Maximum value of counter for State Health calculation'];
GLBRAMSNGBITCNTRMAX_CNT_U08.DocUnits = 'Cnt';
GLBRAMSNGBITCNTRMAX_CNT_U08.EngDT = dt.u08;
GLBRAMSNGBITCNTRMAX_CNT_U08.EngVal = 100;
GLBRAMSNGBITCNTRMAX_CNT_U08.Define = 'Local';


LCLRAMBASADR_CNT_U32 = DataDict.Constant;
LCLRAMBASADR_CNT_U32.LongName = 'Local Ram Base Address';
LCLRAMBASADR_CNT_U32.Description = [...
  'Base address to caliculate local ram error address:0xFEBE0000'];
LCLRAMBASADR_CNT_U32.DocUnits = 'Cnt';
LCLRAMBASADR_CNT_U32.EngDT = dt.u32;
LCLRAMBASADR_CNT_U32.EngVal = 4273864704;
LCLRAMBASADR_CNT_U32.Define = 'Local';


LCLRAMSNGBITCNTRMAX_CNT_U08 = DataDict.Constant;
LCLRAMSNGBITCNTRMAX_CNT_U08.LongName = 'Local RAM Single Bit Counter Max';
LCLRAMSNGBITCNTRMAX_CNT_U08.Description = [...
  'Maximum value of counter for State Health calculation'];
LCLRAMSNGBITCNTRMAX_CNT_U08.DocUnits = 'Cnt';
LCLRAMSNGBITCNTRMAX_CNT_U08.EngDT = dt.u08;
LCLRAMSNGBITCNTRMAX_CNT_U08.EngVal = 100;
LCLRAMSNGBITCNTRMAX_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
CanRamHardFlt = DataDict.NTC;
CanRamHardFlt.NtcNr = NtcNr1.NTCNR_0X01B;
CanRamHardFlt.NtcTyp = 'None';
CanRamHardFlt.LongName = 'CAN RAM Fault';
CanRamHardFlt.Description = '';
CanRamHardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
CanRamHardFlt.NtcStInfo.Bit0Descr = 'Unused';
CanRamHardFlt.NtcStInfo.Bit1Descr = 'MTTCAN RAM double bit ECC error ';
CanRamHardFlt.NtcStInfo.Bit2Descr = 'Unused';
CanRamHardFlt.NtcStInfo.Bit3Descr = 'MCAN0 RAM double bit ECC error ';
CanRamHardFlt.NtcStInfo.Bit4Descr = 'Unused';
CanRamHardFlt.NtcStInfo.Bit5Descr = 'MCAN1 RAM double bit ECC error ';
CanRamHardFlt.NtcStInfo.Bit6Descr = 'Unused';
CanRamHardFlt.NtcStInfo.Bit7Descr = 'Unused';
CanRamHardFlt.NtcStsLockdThisIgnCyc = 0;


FrDblBitFlt = DataDict.NTC;
FrDblBitFlt.NtcNr = NtcNr1.NTCNR_0X01D;
FrDblBitFlt.NtcTyp = 'None';
FrDblBitFlt.LongName = 'Flexray Double Bit Fault';
FrDblBitFlt.Description = '';
FrDblBitFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
FrDblBitFlt.NtcStInfo.Bit0Descr = 'Unused';
FrDblBitFlt.NtcStInfo.Bit1Descr = 'Flexray Message RAM ECC Double Bit Fault';
FrDblBitFlt.NtcStInfo.Bit2Descr = 'Unused';
FrDblBitFlt.NtcStInfo.Bit3Descr = 'Flexray Buffer A RAM ECC Double Bit Fault';
FrDblBitFlt.NtcStInfo.Bit4Descr = 'Unused';
FrDblBitFlt.NtcStInfo.Bit5Descr = 'Flexray Buffer B RAM ECC Double Bit Fault';
FrDblBitFlt.NtcStInfo.Bit6Descr = 'Unused';
FrDblBitFlt.NtcStInfo.Bit7Descr = 'Unused';
FrDblBitFlt.NtcStsLockdThisIgnCyc = 0;


RamSoftFlt = DataDict.NTC;
RamSoftFlt.NtcNr = NtcNr1.NTCNR_0X012;
RamSoftFlt.NtcTyp = 'None';
RamSoftFlt.LongName = 'Ram Soft Fault';
RamSoftFlt.Description = 'Soft failure (single bit) for Local RAM,Global RAM, Peripheral RAM,GTM RAM,DTS RAM and Cache';
RamSoftFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
RamSoftFlt.NtcStInfo.Bit0Descr = 'Local RAM ECC Single Bit Correction (Soft Fault)';
RamSoftFlt.NtcStInfo.Bit1Descr = 'Global RAM ECC Single Bit Correction (Soft Fault)';
RamSoftFlt.NtcStInfo.Bit2Descr = 'I-Cache ECC Error Detection';
RamSoftFlt.NtcStInfo.Bit3Descr = 'DTS RAM single Bit Fault';
RamSoftFlt.NtcStInfo.Bit4Descr = 'CAN RAM ECC Single Bit Correction (Soft Fault)';
RamSoftFlt.NtcStInfo.Bit5Descr = 'FlexRay ECC Single Bit Fault';
RamSoftFlt.NtcStInfo.Bit6Descr = 'CSHI0-3 RAM ECC Single Bit Correction (Soft Fault)';
RamSoftFlt.NtcStInfo.Bit7Descr = 'GTM 0-1 RAM ECC Single Bit Correction (Soft Fault)';
RamSoftFlt.NtcStsLockdThisIgnCyc = 0;


Spi0RamHardFlt = DataDict.NTC;
Spi0RamHardFlt.NtcNr = NtcNr1.NTCNR_0X017;
Spi0RamHardFlt.NtcTyp = 'None';
Spi0RamHardFlt.LongName = 'SPI 0 RAM Hard Fault';
Spi0RamHardFlt.Description = 'SPI0 Periheral RAM Double Bit Failure';
Spi0RamHardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
Spi0RamHardFlt.NtcStInfo.Bit0Descr = 'Unused';
Spi0RamHardFlt.NtcStInfo.Bit1Descr = 'SPI0 Peripheral RAM Double Bit (Hard Fault)';
Spi0RamHardFlt.NtcStInfo.Bit2Descr = 'Unused';
Spi0RamHardFlt.NtcStInfo.Bit3Descr = 'Unused';
Spi0RamHardFlt.NtcStInfo.Bit4Descr = 'Unused';
Spi0RamHardFlt.NtcStInfo.Bit5Descr = 'Unused';
Spi0RamHardFlt.NtcStInfo.Bit6Descr = 'Unused';
Spi0RamHardFlt.NtcStInfo.Bit7Descr = 'Unused';
Spi0RamHardFlt.NtcStsLockdThisIgnCyc = 0;


Spi1RamHardFlt = DataDict.NTC;
Spi1RamHardFlt.NtcNr = NtcNr1.NTCNR_0X018;
Spi1RamHardFlt.NtcTyp = 'None';
Spi1RamHardFlt.LongName = 'SPI 1 RAM Hard Fault';
Spi1RamHardFlt.Description = 'SPI1 Periheral RAM Double Bit Failure';
Spi1RamHardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
Spi1RamHardFlt.NtcStInfo.Bit0Descr = 'Unused';
Spi1RamHardFlt.NtcStInfo.Bit1Descr = 'SPI1 Peripheral RAM Double Bit (Hard Fault)';
Spi1RamHardFlt.NtcStInfo.Bit2Descr = 'Unused';
Spi1RamHardFlt.NtcStInfo.Bit3Descr = 'Unused';
Spi1RamHardFlt.NtcStInfo.Bit4Descr = 'Unused';
Spi1RamHardFlt.NtcStInfo.Bit5Descr = 'Unused';
Spi1RamHardFlt.NtcStInfo.Bit6Descr = 'Unused';
Spi1RamHardFlt.NtcStInfo.Bit7Descr = 'Unused';
Spi1RamHardFlt.NtcStsLockdThisIgnCyc = 0;


Spi2RamHardFlt = DataDict.NTC;
Spi2RamHardFlt.NtcNr = NtcNr1.NTCNR_0X019;
Spi2RamHardFlt.NtcTyp = 'None';
Spi2RamHardFlt.LongName = 'SPI 2 RAM Hard Fault';
Spi2RamHardFlt.Description = 'SPI2 Periheral RAM Double Bit Failure';
Spi2RamHardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
Spi2RamHardFlt.NtcStInfo.Bit0Descr = 'Unused';
Spi2RamHardFlt.NtcStInfo.Bit1Descr = 'SPI2 Peripheral RAM Double Bit (Hard Fault)';
Spi2RamHardFlt.NtcStInfo.Bit2Descr = 'Unused';
Spi2RamHardFlt.NtcStInfo.Bit3Descr = 'Unused';
Spi2RamHardFlt.NtcStInfo.Bit4Descr = 'Unused';
Spi2RamHardFlt.NtcStInfo.Bit5Descr = 'Unused';
Spi2RamHardFlt.NtcStInfo.Bit6Descr = 'Unused';
Spi2RamHardFlt.NtcStInfo.Bit7Descr = 'Unused';
Spi2RamHardFlt.NtcStsLockdThisIgnCyc = 0;


Spi3RamHardFlt = DataDict.NTC;
Spi3RamHardFlt.NtcNr = NtcNr1.NTCNR_0X01A;
Spi3RamHardFlt.NtcTyp = 'None';
Spi3RamHardFlt.LongName = 'SPI 3 RAM Hard Fault';
Spi3RamHardFlt.Description = 'SPI3 Periheral RAM Double Bit Failure';
Spi3RamHardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
Spi3RamHardFlt.NtcStInfo.Bit0Descr = 'Unused';
Spi3RamHardFlt.NtcStInfo.Bit1Descr = 'SPI3 Peripheral RAM Double Bit (Hard Fault)';
Spi3RamHardFlt.NtcStInfo.Bit2Descr = 'Unused';
Spi3RamHardFlt.NtcStInfo.Bit3Descr = 'Unused';
Spi3RamHardFlt.NtcStInfo.Bit4Descr = 'Unused';
Spi3RamHardFlt.NtcStInfo.Bit5Descr = 'Unused';
Spi3RamHardFlt.NtcStInfo.Bit6Descr = 'Unused';
Spi3RamHardFlt.NtcStInfo.Bit7Descr = 'Unused';
Spi3RamHardFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
