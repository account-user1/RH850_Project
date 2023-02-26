%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 06-Dec-2017 10:22:38       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: nz2654 %          %
%%-----------------------------------------------------------------------%

CM760A = DataDict.FDD;
CM760A.Version = '1.3.X';
CM760A.LongName = 'Uart0ConfigAndUse';
CM760A.ShoName  = 'Uart0CfgAndUse';
CM760A.DesignASIL = 'QM';
CM760A.Description = [...
  'Uart0 Configuration And Use Function'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
Uart0CfgAndUseInit1 = DataDict.Runnable;
Uart0CfgAndUseInit1.Context = 'Rte';
Uart0CfgAndUseInit1.TimeStep = 0;
Uart0CfgAndUseInit1.Description = 'Initialization';

Uart0CfgAndUsePer1 = DataDict.Runnable;
Uart0CfgAndUsePer1.Context = 'Rte';
Uart0CfgAndUsePer1.TimeStep = 0.002;
Uart0CfgAndUsePer1.Description = 'Periodic 1 triggred at 2ms rate';

Uart0CfgAndUsePer2 = DataDict.Runnable;
Uart0CfgAndUsePer2.Context = 'Rte';
Uart0CfgAndUsePer2.TimeStep = 0.002;
Uart0CfgAndUsePer2.Description = 'Periodic 2 triggred at 2ms rate';

Uart0CfgAndUsePer3 = DataDict.Runnable;
Uart0CfgAndUsePer3.Context = 'Rte';
Uart0CfgAndUsePer3.TimeStep = 0.01;
Uart0CfgAndUsePer3.Description = 'Periodic 3 triggred at 10ms rate';

Uart0CfgAndUsePer4 = DataDict.Runnable;
Uart0CfgAndUsePer4.Context = 'Rte';
Uart0CfgAndUsePer4.TimeStep = 0.1;
Uart0CfgAndUsePer4.Description = 'Periodic 4 triggred at 100ms rate';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetTxRateGroup = DataDict.Client;
GetTxRateGroup.CallLocation = {'Uart0CfgAndUsePer2','Uart0CfgAndUsePer3','Uart0CfgAndUsePer4'};
GetTxRateGroup.Description = [...
  'Get data for all Signal Groups that are configured under given Rate Gr' ...
  'oup'];
GetTxRateGroup.Return = DataDict.CSReturn;
GetTxRateGroup.Return.Type = 'Standard';
GetTxRateGroup.Return.Min = 0;
GetTxRateGroup.Return.Max = 1;
GetTxRateGroup.Return.TestTolerance = 0;
GetTxRateGroup.Return.Description = [...
  'Get all messages to be transmitted for the specified Rate Group'];
GetTxRateGroup.Arguments(1) = DataDict.CSArguments;
GetTxRateGroup.Arguments(1).Name = 'RateGroup';
GetTxRateGroup.Arguments(1).EngDT = dt.u08;
GetTxRateGroup.Arguments(1).EngMin = 0;
GetTxRateGroup.Arguments(1).EngMax = 255;
GetTxRateGroup.Arguments(1).Units = 'Cnt';
GetTxRateGroup.Arguments(1).Direction = 'In';
GetTxRateGroup.Arguments(1).InitRowCol = [1  1];
GetTxRateGroup.Arguments(1).Description = [...
  'Rate Group ID provided by IMC Arbitration component'];
GetTxRateGroup.Arguments(2) = DataDict.CSArguments;
GetTxRateGroup.Arguments(2).Name = 'Buf';
GetTxRateGroup.Arguments(2).EngDT = dt.u08;
GetTxRateGroup.Arguments(2).EngMin = 0;
GetTxRateGroup.Arguments(2).EngMax = 255;
GetTxRateGroup.Arguments(2).TestTolerance = 1;
GetTxRateGroup.Arguments(2).Units = 'Uls';
GetTxRateGroup.Arguments(2).Direction = 'Out';
GetTxRateGroup.Arguments(2).InitRowCol = [1  2048];
GetTxRateGroup.Arguments(2).Description = [...
  'Pointer to the configurable buffer.Size of this buffer will be based o' ...
  'ut of number of Signal Groups configured under Rate Group.Refer MDD fo' ...
  'r more details'];


SetRxSigGroup = DataDict.Client;
SetRxSigGroup.CallLocation = {'Uart0CfgAndUsePer1'};
SetRxSigGroup.Description = [...
  'Copies Signal Group data received by a serial comm channel to Imc Arbi' ...
  'tration'];
SetRxSigGroup.Return = DataDict.CSReturn;
SetRxSigGroup.Return.Type = 'Standard';
SetRxSigGroup.Return.Min = 0;
SetRxSigGroup.Return.Max = 1;
SetRxSigGroup.Return.TestTolerance = 0;
SetRxSigGroup.Return.Description = 'Send all valid Rx messages to IMC';
SetRxSigGroup.Arguments(1) = DataDict.CSArguments;
SetRxSigGroup.Arguments(1).Name = 'SigGroup';
SetRxSigGroup.Arguments(1).EngDT = dt.u08;
SetRxSigGroup.Arguments(1).EngMin = 0;
SetRxSigGroup.Arguments(1).EngMax = 255;
SetRxSigGroup.Arguments(1).Units = 'Cnt';
SetRxSigGroup.Arguments(1).Direction = 'In';
SetRxSigGroup.Arguments(1).InitRowCol = [1  1];
SetRxSigGroup.Arguments(1).Description = [...
  'Signal Group Id provided by IMC Arbitration component'];
SetRxSigGroup.Arguments(2) = DataDict.CSArguments;
SetRxSigGroup.Arguments(2).Name = 'DataSrc';
SetRxSigGroup.Arguments(2).EngDT = enum.ImcArbnRxDataSrc1;
SetRxSigGroup.Arguments(2).EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
SetRxSigGroup.Arguments(2).EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
SetRxSigGroup.Arguments(2).Units = 'Cnt';
SetRxSigGroup.Arguments(2).Direction = 'In';
SetRxSigGroup.Arguments(2).InitRowCol = [1  1];
SetRxSigGroup.Arguments(2).Description = 'Signal Source';
SetRxSigGroup.Arguments(3) = DataDict.CSArguments;
SetRxSigGroup.Arguments(3).Name = 'Buf';
SetRxSigGroup.Arguments(3).EngDT = dt.u08;
SetRxSigGroup.Arguments(3).EngMin = 0;
SetRxSigGroup.Arguments(3).EngMax = 255;
SetRxSigGroup.Arguments(3).TestTolerance = 1;
SetRxSigGroup.Arguments(3).Units = 'Uls';
SetRxSigGroup.Arguments(3).Direction = 'Out';
SetRxSigGroup.Arguments(3).InitRowCol = [1  8];
SetRxSigGroup.Arguments(3).Description = [...
  'Pointer to the received Signal Group data buffer. Imc Arbitration comp' ...
  'onent assumes that minimum 8 bytes can be read starting from given poi' ...
  'nter.0Refer MDD for more details'];



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
PrevDmaTrfCnt = DataDict.PIM;
PrevDmaTrfCnt.LongName = 'Previous Dma Transfer Count';
PrevDmaTrfCnt.Description = 'Previous Dma Transfer Count';
PrevDmaTrfCnt.DocUnits = 'Cnt';
PrevDmaTrfCnt.EngDT = dt.u16;
PrevDmaTrfCnt.EngMin = 0;
PrevDmaTrfCnt.EngMax = 65535;
PrevDmaTrfCnt.InitRowCol = [1  1];


Uart0100MilliSecBufCnt = DataDict.PIM;
Uart0100MilliSecBufCnt.LongName = 'Uart0 100 Milli Second Buffer Count';
Uart0100MilliSecBufCnt.Description = [...
  'Uart0 100 Milli Second Buffer Count. This size of this array is config' ...
  'urable'];
Uart0100MilliSecBufCnt.DocUnits = 'Cnt';
Uart0100MilliSecBufCnt.EngDT = dt.u08;
Uart0100MilliSecBufCnt.EngMin = 0;
Uart0100MilliSecBufCnt.EngMax = 255;
Uart0100MilliSecBufCnt.InitRowCol = [2048     1];


Uart0100MilliSecReadCmpl = DataDict.PIM;
Uart0100MilliSecReadCmpl.LongName = 'Uart0 100 Milli Read Complete';
Uart0100MilliSecReadCmpl.Description = 'Uart0 100 Milli Read Complete';
Uart0100MilliSecReadCmpl.DocUnits = 'Cnt';
Uart0100MilliSecReadCmpl.EngDT = dt.u08;
Uart0100MilliSecReadCmpl.EngMin = 0;
Uart0100MilliSecReadCmpl.EngMax = 255;
Uart0100MilliSecReadCmpl.InitRowCol = [1  1];


Uart010MilliSecBufCnt = DataDict.PIM;
Uart010MilliSecBufCnt.LongName = 'Uart0 10 Milli Second/Second Buffer Count';
Uart010MilliSecBufCnt.Description = [...
  'Uart0 10 Milli Second Buffer Count. This size of this array is configu' ...
  'rable'];
Uart010MilliSecBufCnt.DocUnits = 'Cnt';
Uart010MilliSecBufCnt.EngDT = dt.u08;
Uart010MilliSecBufCnt.EngMin = 0;
Uart010MilliSecBufCnt.EngMax = 255;
Uart010MilliSecBufCnt.InitRowCol = [2048     1];


Uart010MilliSecReadCmpl = DataDict.PIM;
Uart010MilliSecReadCmpl.LongName = 'Uart0 10 Milli Read Complete';
Uart010MilliSecReadCmpl.Description = 'Uart0 10 Milli Read Complete';
Uart010MilliSecReadCmpl.DocUnits = 'Cnt';
Uart010MilliSecReadCmpl.EngDT = dt.u08;
Uart010MilliSecReadCmpl.EngMin = 0;
Uart010MilliSecReadCmpl.EngMax = 255;
Uart010MilliSecReadCmpl.InitRowCol = [1  1];


Uart02MilliSecBufCnt = DataDict.PIM;
Uart02MilliSecBufCnt.LongName = 'Uart0 2 Milli Second Buffer Count';
Uart02MilliSecBufCnt.Description = [...
  'Uart0 2 Milli Second Buffer Count. This size of this array is configur' ...
  'able'];
Uart02MilliSecBufCnt.DocUnits = 'Cnt';
Uart02MilliSecBufCnt.EngDT = dt.u08;
Uart02MilliSecBufCnt.EngMin = 0;
Uart02MilliSecBufCnt.EngMax = 255;
Uart02MilliSecBufCnt.InitRowCol = [2048     1];


Uart0DiagcFrmErrCntr = DataDict.PIM;
Uart0DiagcFrmErrCntr.LongName = 'Uart0 Diagnostic Frame Error Counter';
Uart0DiagcFrmErrCntr.Description = [...
  'Uart0 Diagnostic Frame Error Counter'];
Uart0DiagcFrmErrCntr.DocUnits = 'Cnt';
Uart0DiagcFrmErrCntr.EngDT = dt.u32;
Uart0DiagcFrmErrCntr.EngMin = 0;
Uart0DiagcFrmErrCntr.EngMax = 4294967295;
Uart0DiagcFrmErrCntr.InitRowCol = [1  1];


Uart0DiagcOvrrunErrCntr = DataDict.PIM;
Uart0DiagcOvrrunErrCntr.LongName = 'Uart0 Diagnostic Overrun Error Counter';
Uart0DiagcOvrrunErrCntr.Description = [...
  'Uart0 Diagnostic Overrun Error Counter'];
Uart0DiagcOvrrunErrCntr.DocUnits = 'Cnt';
Uart0DiagcOvrrunErrCntr.EngDT = dt.u32;
Uart0DiagcOvrrunErrCntr.EngMin = 0;
Uart0DiagcOvrrunErrCntr.EngMax = 4294967295;
Uart0DiagcOvrrunErrCntr.InitRowCol = [1  1];


Uart0DiagcParErrCntr = DataDict.PIM;
Uart0DiagcParErrCntr.LongName = 'Uart0 Diagnostic Parity Error Counter';
Uart0DiagcParErrCntr.Description = [...
  'Uart0 Diagnostic Parity Error Counter'];
Uart0DiagcParErrCntr.DocUnits = 'Cnt';
Uart0DiagcParErrCntr.EngDT = dt.u32;
Uart0DiagcParErrCntr.EngMin = 0;
Uart0DiagcParErrCntr.EngMax = 4294967295;
Uart0DiagcParErrCntr.InitRowCol = [1  1];


Uart0DiagcRxMaxDataErrCntr = DataDict.PIM;
Uart0DiagcRxMaxDataErrCntr.LongName = 'Uart0 Diagnostic Maximum Data Received error counter';
Uart0DiagcRxMaxDataErrCntr.Description = [...
  'Uart0 Diagnostic Maximum Data Received error counter'];
Uart0DiagcRxMaxDataErrCntr.DocUnits = 'Cnt';
Uart0DiagcRxMaxDataErrCntr.EngDT = dt.u32;
Uart0DiagcRxMaxDataErrCntr.EngMin = 0;
Uart0DiagcRxMaxDataErrCntr.EngMax = 4294967295;
Uart0DiagcRxMaxDataErrCntr.InitRowCol = [1  1];


Uart0NrOfPnd100MilliSecFrmCnt = DataDict.PIM;
Uart0NrOfPnd100MilliSecFrmCnt.LongName = 'Uart0 Number Of Pending 100 Milli Second Frame Count';
Uart0NrOfPnd100MilliSecFrmCnt.Description = [...
  'Uart0 Number Of Pending 100 Milli Second Frame Count'];
Uart0NrOfPnd100MilliSecFrmCnt.DocUnits = 'Cnt';
Uart0NrOfPnd100MilliSecFrmCnt.EngDT = dt.u08;
Uart0NrOfPnd100MilliSecFrmCnt.EngMin = 0;
Uart0NrOfPnd100MilliSecFrmCnt.EngMax = 255;
Uart0NrOfPnd100MilliSecFrmCnt.InitRowCol = [1  1];


Uart0NrOfPnd10MilliSecFrmCnt = DataDict.PIM;
Uart0NrOfPnd10MilliSecFrmCnt.LongName = 'Uart0 Number Of Pending 10 Milli Second Frame Count';
Uart0NrOfPnd10MilliSecFrmCnt.Description = [...
  'Uart0 Number Of Pending 10 Milli Second Frame Count'];
Uart0NrOfPnd10MilliSecFrmCnt.DocUnits = 'Cnt';
Uart0NrOfPnd10MilliSecFrmCnt.EngDT = dt.u08;
Uart0NrOfPnd10MilliSecFrmCnt.EngMin = 0;
Uart0NrOfPnd10MilliSecFrmCnt.EngMax = 255;
Uart0NrOfPnd10MilliSecFrmCnt.InitRowCol = [1  1];


Uart0RxPrevLoopDataUnread = DataDict.PIM;
Uart0RxPrevLoopDataUnread.LongName = 'Uart0 Receive Previous Loop Data Unused';
Uart0RxPrevLoopDataUnread.Description = [...
  'Uart0 Receive Previous Loop Data Unused'];
Uart0RxPrevLoopDataUnread.DocUnits = 'Cnt';
Uart0RxPrevLoopDataUnread.EngDT = dt.u08;
Uart0RxPrevLoopDataUnread.EngMin = 0;
Uart0RxPrevLoopDataUnread.EngMax = 255;
Uart0RxPrevLoopDataUnread.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
DATABYTE0_CNT_U08 = DataDict.Constant;
DATABYTE0_CNT_U08.LongName = 'Data Byte 0';
DATABYTE0_CNT_U08.Description = 'Data Byte 0';
DATABYTE0_CNT_U08.DocUnits = 'Cnt';
DATABYTE0_CNT_U08.EngDT = dt.u08;
DATABYTE0_CNT_U08.EngVal = 0;
DATABYTE0_CNT_U08.Define = 'Local';


DATABYTE1_CNT_U08 = DataDict.Constant;
DATABYTE1_CNT_U08.LongName = 'Data Byte 1';
DATABYTE1_CNT_U08.Description = 'Data Byte 1';
DATABYTE1_CNT_U08.DocUnits = 'Cnt';
DATABYTE1_CNT_U08.EngDT = dt.u08;
DATABYTE1_CNT_U08.EngVal = 1;
DATABYTE1_CNT_U08.Define = 'Local';


DATABYTE2_CNT_U08 = DataDict.Constant;
DATABYTE2_CNT_U08.LongName = 'Data Byte 2';
DATABYTE2_CNT_U08.Description = 'Data Byte 2';
DATABYTE2_CNT_U08.DocUnits = 'Cnt';
DATABYTE2_CNT_U08.EngDT = dt.u08;
DATABYTE2_CNT_U08.EngVal = 2;
DATABYTE2_CNT_U08.Define = 'Local';


DATABYTE3_CNT_U08 = DataDict.Constant;
DATABYTE3_CNT_U08.LongName = 'Data Byte 3';
DATABYTE3_CNT_U08.Description = 'Data Byte 3';
DATABYTE3_CNT_U08.DocUnits = 'Cnt';
DATABYTE3_CNT_U08.EngDT = dt.u08;
DATABYTE3_CNT_U08.EngVal = 3;
DATABYTE3_CNT_U08.Define = 'Local';


DATABYTE4_CNT_U08 = DataDict.Constant;
DATABYTE4_CNT_U08.LongName = 'Data Byte 4';
DATABYTE4_CNT_U08.Description = 'Data Byte 4';
DATABYTE4_CNT_U08.DocUnits = 'Cnt';
DATABYTE4_CNT_U08.EngDT = dt.u08;
DATABYTE4_CNT_U08.EngVal = 4;
DATABYTE4_CNT_U08.Define = 'Local';


DATABYTE5_CNT_U08 = DataDict.Constant;
DATABYTE5_CNT_U08.LongName = 'Data Byte 5';
DATABYTE5_CNT_U08.Description = 'Data Byte 5';
DATABYTE5_CNT_U08.DocUnits = 'Cnt';
DATABYTE5_CNT_U08.EngDT = dt.u08;
DATABYTE5_CNT_U08.EngVal = 5;
DATABYTE5_CNT_U08.Define = 'Local';


DATABYTE6_CNT_U08 = DataDict.Constant;
DATABYTE6_CNT_U08.LongName = 'Data Byte 6';
DATABYTE6_CNT_U08.Description = 'Data Byte 6';
DATABYTE6_CNT_U08.DocUnits = 'Cnt';
DATABYTE6_CNT_U08.EngDT = dt.u08;
DATABYTE6_CNT_U08.EngVal = 6;
DATABYTE6_CNT_U08.Define = 'Local';


DATABYTE7_CNT_U08 = DataDict.Constant;
DATABYTE7_CNT_U08.LongName = 'Data Byte 7';
DATABYTE7_CNT_U08.Description = 'Data Byte 7';
DATABYTE7_CNT_U08.DocUnits = 'Cnt';
DATABYTE7_CNT_U08.EngDT = dt.u08;
DATABYTE7_CNT_U08.EngVal = 7;
DATABYTE7_CNT_U08.Define = 'Local';


DATABYTE8_CNT_U08 = DataDict.Constant;
DATABYTE8_CNT_U08.LongName = 'Data Byte 8';
DATABYTE8_CNT_U08.Description = 'Data Byte 8';
DATABYTE8_CNT_U08.DocUnits = 'Cnt';
DATABYTE8_CNT_U08.EngDT = dt.u08;
DATABYTE8_CNT_U08.EngVal = 8;
DATABYTE8_CNT_U08.Define = 'Local';


IMCARBN_FRMSIZE_CNT_U08 = DataDict.Constant;
IMCARBN_FRMSIZE_CNT_U08.LongName = 'Uart0 Frame Size';
IMCARBN_FRMSIZE_CNT_U08.Description = 'Uart0 Frame Size';
IMCARBN_FRMSIZE_CNT_U08.DocUnits = 'Cnt';
IMCARBN_FRMSIZE_CNT_U08.EngDT = dt.u08;
IMCARBN_FRMSIZE_CNT_U08.EngVal = 8;
IMCARBN_FRMSIZE_CNT_U08.Define = 'Global';


IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08 = DataDict.Constant;
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.LongName = 'Inter Micro Communication Arbitration Number of 100 MilliSecond Rate Group';
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.Description = [...
  'Inter Micro Communication Arbitration Number of 100 MilliSecond Rate G' ...
  'roup'];
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.DocUnits = 'Cnt';
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.EngDT = dt.u08;
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.EngVal = 0;
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.Define = 'Global';


IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08 = DataDict.Constant;
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.LongName = 'Inter Micro Communication Arbitration Number of 10 MilliSecond Rate Group';
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.Description = [...
  'Inter Micro Communication Arbitration Number of 10 MilliSecond Rate Gr' ...
  'oup'];
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.DocUnits = 'Cnt';
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.EngDT = dt.u08;
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.EngVal = 0;
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.Define = 'Global';


IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08 = DataDict.Constant;
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.LongName = 'Inter Micro Communication Arbitration Number of 2 MilliSecond Rate Group';
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.Description = [...
  'Inter Micro Communication Arbitration Number of 2 MilliSecond Rate Gro' ...
  'up'];
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.DocUnits = 'Cnt';
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.EngDT = dt.u08;
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.EngVal = 0;
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.Define = 'Global';


IMCARBN_PATIDMASKVAL_CNT_U08 = DataDict.Constant;
IMCARBN_PATIDMASKVAL_CNT_U08.LongName = 'Uart0 Pattern Identification Mask';
IMCARBN_PATIDMASKVAL_CNT_U08.Description = 'Uart0 Pattern Identification Mask';
IMCARBN_PATIDMASKVAL_CNT_U08.DocUnits = 'Cnt';
IMCARBN_PATIDMASKVAL_CNT_U08.EngDT = dt.u08;
IMCARBN_PATIDMASKVAL_CNT_U08.EngVal = 224;
IMCARBN_PATIDMASKVAL_CNT_U08.Define = 'Global';


IMCARBN_PATIDN_CNT_U08 = DataDict.Constant;
IMCARBN_PATIDN_CNT_U08.LongName = 'Uart0 Pattern Identification';
IMCARBN_PATIDN_CNT_U08.Description = 'Uart0 Pattern Identification';
IMCARBN_PATIDN_CNT_U08.DocUnits = 'Cnt';
IMCARBN_PATIDN_CNT_U08.EngDT = dt.u08;
IMCARBN_PATIDN_CNT_U08.EngVal = 160;
IMCARBN_PATIDN_CNT_U08.Define = 'Global';


IMCARBN_RATEGROUPID100MILLISEC_CNT_U08 = DataDict.Constant;
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.LongName = 'Inter Micro Communication Arbitration of 100 MilliSecond';
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.Description = [...
  'Inter Micro Communication Arbitration of 100 MilliSecond'];
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.DocUnits = 'Cnt';
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.EngDT = dt.u08;
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.EngVal = 0;
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.Define = 'Global';


IMCARBN_RATEGROUPID10MILLISEC_CNT_U08 = DataDict.Constant;
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.LongName = 'Inter Micro Communication Arbitration of 10 MilliSecond';
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.Description = [...
  'Inter Micro Communication Arbitration of 10 MilliSecond'];
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.DocUnits = 'Cnt';
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.EngDT = dt.u08;
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.EngVal = 0;
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.Define = 'Global';


IMCARBN_RATEGROUPID2MILLISEC_CNT_U08 = DataDict.Constant;
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.LongName = 'Inter Micro Communication Arbitration of 2 MilliSecond';
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.Description = [...
  'Inter Micro Communication Arbitration of 2 MilliSecond'];
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.DocUnits = 'Cnt';
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.EngDT = dt.u08;
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.EngVal = 0;
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.Define = 'Global';


MASKLOWR16BITOFUINT32_CNT_U16 = DataDict.Constant;
MASKLOWR16BITOFUINT32_CNT_U16.LongName = 'Mask Lower 16 bits of a Uint32';
MASKLOWR16BITOFUINT32_CNT_U16.Description = 'Mask Lower 16 bits of a Uint32';
MASKLOWR16BITOFUINT32_CNT_U16.DocUnits = 'Cnt';
MASKLOWR16BITOFUINT32_CNT_U16.EngDT = dt.u16;
MASKLOWR16BITOFUINT32_CNT_U16.EngVal = 65535;
MASKLOWR16BITOFUINT32_CNT_U16.Define = 'Local';


MAXSIGGROUPFORTX_CNT_U08 = DataDict.Constant;
MAXSIGGROUPFORTX_CNT_U08.LongName = 'Maximum Signal Group For Transmit';
MAXSIGGROUPFORTX_CNT_U08.Description = 'Maximum Signal Group For Transmit';
MAXSIGGROUPFORTX_CNT_U08.DocUnits = 'Cnt';
MAXSIGGROUPFORTX_CNT_U08.EngDT = dt.u08;
MAXSIGGROUPFORTX_CNT_U08.EngVal = 9;
MAXSIGGROUPFORTX_CNT_U08.Define = 'Local';


ROLLGCNTCHK_CNT_U08 = DataDict.Constant;
ROLLGCNTCHK_CNT_U08.LongName = 'Byte Count';
ROLLGCNTCHK_CNT_U08.Description = 'Byte Count';
ROLLGCNTCHK_CNT_U08.DocUnits = 'Cnt';
ROLLGCNTCHK_CNT_U08.EngDT = dt.u08;
ROLLGCNTCHK_CNT_U08.EngVal = 255;
ROLLGCNTCHK_CNT_U08.Define = 'Local';


TWO_CNT_U08 = DataDict.Constant;
TWO_CNT_U08.LongName = 'Two';
TWO_CNT_U08.Description = 'Value of Two';
TWO_CNT_U08.DocUnits = 'Cnt';
TWO_CNT_U08.EngDT = dt.u08;
TWO_CNT_U08.EngVal = 2;
TWO_CNT_U08.Define = 'Local';


UART0RXMAXBUFSIZE_CNT_U08 = DataDict.Constant;
UART0RXMAXBUFSIZE_CNT_U08.LongName = 'Dma Receive Channel Transfer Count';
UART0RXMAXBUFSIZE_CNT_U08.Description = 'Dma Receive Channel Transfer Count';
UART0RXMAXBUFSIZE_CNT_U08.DocUnits = 'Cnt';
UART0RXMAXBUFSIZE_CNT_U08.EngDT = dt.u08;
UART0RXMAXBUFSIZE_CNT_U08.EngVal = 144;
UART0RXMAXBUFSIZE_CNT_U08.Define = 'Local';


UART0RXMAXTRFCNT_CNT_U16 = DataDict.Constant;
UART0RXMAXTRFCNT_CNT_U16.LongName = 'Dma Receive Channel Maximum Transfer Count';
UART0RXMAXTRFCNT_CNT_U16.Description = [...
  'Dma Receive Channel Maximum Transfer Count'];
UART0RXMAXTRFCNT_CNT_U16.DocUnits = 'Cnt';
UART0RXMAXTRFCNT_CNT_U16.EngDT = dt.u16;
UART0RXMAXTRFCNT_CNT_U16.EngVal = 1440;
UART0RXMAXTRFCNT_CNT_U16.Define = 'Local';


UART0SHIFTVAL_CNT_U08 = DataDict.Constant;
UART0SHIFTVAL_CNT_U08.LongName = 'UART0 Shift Value';
UART0SHIFTVAL_CNT_U08.Description = [...
  'Value used to extract 16 bits from DMA transfer count'];
UART0SHIFTVAL_CNT_U08.DocUnits = 'Cnt';
UART0SHIFTVAL_CNT_U08.EngDT = dt.u08;
UART0SHIFTVAL_CNT_U08.EngVal = 16;
UART0SHIFTVAL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
