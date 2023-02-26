%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 06-Dec-2017 10:24:05       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: nz2654 %          %
%%-----------------------------------------------------------------------%

CM765A = DataDict.FDD;
CM765A.Version = '1.4.X';
CM765A.LongName = 'Uart1ConfigAndUse';
CM765A.ShoName  = 'Uart1CfgAndUse';
CM765A.DesignASIL = 'QM';
CM765A.Description = [...
  'Uart1 Configuration And Use Function'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
Uart1CfgAndUseInit1 = DataDict.Runnable;
Uart1CfgAndUseInit1.Context = 'Rte';
Uart1CfgAndUseInit1.TimeStep = 0;
Uart1CfgAndUseInit1.Description = 'Initialization';

Uart1CfgAndUsePer1 = DataDict.Runnable;
Uart1CfgAndUsePer1.Context = 'Rte';
Uart1CfgAndUsePer1.TimeStep = 0.002;
Uart1CfgAndUsePer1.Description = 'Periodic 1 triggred at 2ms rate';

Uart1CfgAndUsePer2 = DataDict.Runnable;
Uart1CfgAndUsePer2.Context = 'Rte';
Uart1CfgAndUsePer2.TimeStep = 0.002;
Uart1CfgAndUsePer2.Description = 'Periodic 2 triggred at 2ms rate';

Uart1CfgAndUsePer3 = DataDict.Runnable;
Uart1CfgAndUsePer3.Context = 'Rte';
Uart1CfgAndUsePer3.TimeStep = 0.01;
Uart1CfgAndUsePer3.Description = 'Periodic 3 triggred at 10ms rate';

Uart1CfgAndUsePer4 = DataDict.Runnable;
Uart1CfgAndUsePer4.Context = 'Rte';
Uart1CfgAndUsePer4.TimeStep = 0.1;
Uart1CfgAndUsePer4.Description = 'Periodic 4 triggred at 100ms rate';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetTxRateGroup = DataDict.Client;
GetTxRateGroup.CallLocation = {'Uart1CfgAndUsePer2','Uart1CfgAndUsePer3','Uart1CfgAndUsePer4'};
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
SetRxSigGroup.CallLocation = {'Uart1CfgAndUsePer1'};
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


Uart1100MilliSecBufCnt = DataDict.PIM;
Uart1100MilliSecBufCnt.LongName = 'Uart1 100 Milli Second Buffer Count';
Uart1100MilliSecBufCnt.Description = [...
  'Uart1 100 Milli Second Buffer Count. This size of this array is config' ...
  'urable'];
Uart1100MilliSecBufCnt.DocUnits = 'Cnt';
Uart1100MilliSecBufCnt.EngDT = dt.u08;
Uart1100MilliSecBufCnt.EngMin = 0;
Uart1100MilliSecBufCnt.EngMax = 255;
Uart1100MilliSecBufCnt.InitRowCol = [2048     1];


Uart1100MilliSecReadCmpl = DataDict.PIM;
Uart1100MilliSecReadCmpl.LongName = 'Uart1 100 Milli Read Complete';
Uart1100MilliSecReadCmpl.Description = 'Uart1 100 Milli Read Complete';
Uart1100MilliSecReadCmpl.DocUnits = 'Cnt';
Uart1100MilliSecReadCmpl.EngDT = dt.u08;
Uart1100MilliSecReadCmpl.EngMin = 0;
Uart1100MilliSecReadCmpl.EngMax = 255;
Uart1100MilliSecReadCmpl.InitRowCol = [1  1];


Uart110MilliSecBufCnt = DataDict.PIM;
Uart110MilliSecBufCnt.LongName = 'Uart1 10 Milli Second/Second Buffer Count';
Uart110MilliSecBufCnt.Description = [...
  'Uart1 10 Milli Second Buffer Count. This size of this array is configu' ...
  'rable'];
Uart110MilliSecBufCnt.DocUnits = 'Cnt';
Uart110MilliSecBufCnt.EngDT = dt.u08;
Uart110MilliSecBufCnt.EngMin = 0;
Uart110MilliSecBufCnt.EngMax = 255;
Uart110MilliSecBufCnt.InitRowCol = [2048     1];


Uart110MilliSecReadCmpl = DataDict.PIM;
Uart110MilliSecReadCmpl.LongName = 'Uart1 10 Milli Read Complete';
Uart110MilliSecReadCmpl.Description = 'Uart1 10 Milli Read Complete';
Uart110MilliSecReadCmpl.DocUnits = 'Cnt';
Uart110MilliSecReadCmpl.EngDT = dt.u08;
Uart110MilliSecReadCmpl.EngMin = 0;
Uart110MilliSecReadCmpl.EngMax = 255;
Uart110MilliSecReadCmpl.InitRowCol = [1  1];


Uart12MilliSecBufCnt = DataDict.PIM;
Uart12MilliSecBufCnt.LongName = 'Uart1 2 Milli Second Buffer Count';
Uart12MilliSecBufCnt.Description = [...
  'Uart1 2 Milli Second Buffer Count. This size of this array is configur' ...
  'able'];
Uart12MilliSecBufCnt.DocUnits = 'Cnt';
Uart12MilliSecBufCnt.EngDT = dt.u08;
Uart12MilliSecBufCnt.EngMin = 0;
Uart12MilliSecBufCnt.EngMax = 255;
Uart12MilliSecBufCnt.InitRowCol = [2048     1];


Uart1DiagcFrmErrCntr = DataDict.PIM;
Uart1DiagcFrmErrCntr.LongName = 'Uart1 Diagnostic Frame Error Counter';
Uart1DiagcFrmErrCntr.Description = [...
  'Uart1 Diagnostic Frame Error Counter'];
Uart1DiagcFrmErrCntr.DocUnits = 'Cnt';
Uart1DiagcFrmErrCntr.EngDT = dt.u32;
Uart1DiagcFrmErrCntr.EngMin = 0;
Uart1DiagcFrmErrCntr.EngMax = 4294967295;
Uart1DiagcFrmErrCntr.InitRowCol = [1  1];


Uart1DiagcOvrrunErrCntr = DataDict.PIM;
Uart1DiagcOvrrunErrCntr.LongName = 'Uart1 Diagnostic Overrun Error Counter';
Uart1DiagcOvrrunErrCntr.Description = [...
  'Uart1 Diagnostic Overrun Error Counter'];
Uart1DiagcOvrrunErrCntr.DocUnits = 'Cnt';
Uart1DiagcOvrrunErrCntr.EngDT = dt.u32;
Uart1DiagcOvrrunErrCntr.EngMin = 0;
Uart1DiagcOvrrunErrCntr.EngMax = 4294967295;
Uart1DiagcOvrrunErrCntr.InitRowCol = [1  1];


Uart1DiagcParErrCntr = DataDict.PIM;
Uart1DiagcParErrCntr.LongName = 'Uart1 Diagnostic Parity Error Counter';
Uart1DiagcParErrCntr.Description = [...
  'Uart1 Diagnostic Parity Error Counter'];
Uart1DiagcParErrCntr.DocUnits = 'Cnt';
Uart1DiagcParErrCntr.EngDT = dt.u32;
Uart1DiagcParErrCntr.EngMin = 0;
Uart1DiagcParErrCntr.EngMax = 4294967295;
Uart1DiagcParErrCntr.InitRowCol = [1  1];


Uart1DiagcRxMaxDataErrCntr = DataDict.PIM;
Uart1DiagcRxMaxDataErrCntr.LongName = 'Uart1 Diagnostic Maximum Data Received error counter';
Uart1DiagcRxMaxDataErrCntr.Description = [...
  'Uart1 Diagnostic Maximum Data Received error counter'];
Uart1DiagcRxMaxDataErrCntr.DocUnits = 'Cnt';
Uart1DiagcRxMaxDataErrCntr.EngDT = dt.u32;
Uart1DiagcRxMaxDataErrCntr.EngMin = 0;
Uart1DiagcRxMaxDataErrCntr.EngMax = 4294967295;
Uart1DiagcRxMaxDataErrCntr.InitRowCol = [1  1];


Uart1NrOfPnd100MilliSecFrmCnt = DataDict.PIM;
Uart1NrOfPnd100MilliSecFrmCnt.LongName = 'Uart1 Number Of Pending 100 Milli Second Frame Count';
Uart1NrOfPnd100MilliSecFrmCnt.Description = [...
  'Uart1 Number Of Pending 100 Milli Second Frame Count'];
Uart1NrOfPnd100MilliSecFrmCnt.DocUnits = 'Cnt';
Uart1NrOfPnd100MilliSecFrmCnt.EngDT = dt.u08;
Uart1NrOfPnd100MilliSecFrmCnt.EngMin = 0;
Uart1NrOfPnd100MilliSecFrmCnt.EngMax = 255;
Uart1NrOfPnd100MilliSecFrmCnt.InitRowCol = [1  1];


Uart1NrOfPnd10MilliSecFrmCnt = DataDict.PIM;
Uart1NrOfPnd10MilliSecFrmCnt.LongName = 'Uart1 Number Of Pending 10 Milli Second Frame Count';
Uart1NrOfPnd10MilliSecFrmCnt.Description = [...
  'Uart1 Number Of Pending 10 Milli Second Frame Count'];
Uart1NrOfPnd10MilliSecFrmCnt.DocUnits = 'Cnt';
Uart1NrOfPnd10MilliSecFrmCnt.EngDT = dt.u08;
Uart1NrOfPnd10MilliSecFrmCnt.EngMin = 0;
Uart1NrOfPnd10MilliSecFrmCnt.EngMax = 255;
Uart1NrOfPnd10MilliSecFrmCnt.InitRowCol = [1  1];


Uart1RxPrevLoopDataUnread = DataDict.PIM;
Uart1RxPrevLoopDataUnread.LongName = 'Uart1 Receive Previous Loop Data Unused';
Uart1RxPrevLoopDataUnread.Description = [...
  'Uart1 Receive Previous Loop Data Unused'];
Uart1RxPrevLoopDataUnread.DocUnits = 'Cnt';
Uart1RxPrevLoopDataUnread.EngDT = dt.u08;
Uart1RxPrevLoopDataUnread.EngMin = 0;
Uart1RxPrevLoopDataUnread.EngMax = 255;
Uart1RxPrevLoopDataUnread.InitRowCol = [1  1];



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
IMCARBN_FRMSIZE_CNT_U08.LongName = 'Uart1 Frame Size';
IMCARBN_FRMSIZE_CNT_U08.Description = 'Uart1 Frame Size';
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
IMCARBN_PATIDMASKVAL_CNT_U08.LongName = 'Uart1 Pattern Identification Mask';
IMCARBN_PATIDMASKVAL_CNT_U08.Description = 'Uart1 Pattern Identification Mask';
IMCARBN_PATIDMASKVAL_CNT_U08.DocUnits = 'Cnt';
IMCARBN_PATIDMASKVAL_CNT_U08.EngDT = dt.u08;
IMCARBN_PATIDMASKVAL_CNT_U08.EngVal = 224;
IMCARBN_PATIDMASKVAL_CNT_U08.Define = 'Global';


IMCARBN_PATIDN_CNT_U08 = DataDict.Constant;
IMCARBN_PATIDN_CNT_U08.LongName = 'Uart1 Pattern Identification';
IMCARBN_PATIDN_CNT_U08.Description = 'Uart1 Pattern Identification';
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


UART1RXMAXBUFSIZE_CNT_U08 = DataDict.Constant;
UART1RXMAXBUFSIZE_CNT_U08.LongName = 'Dma Receive Channel Transfer Count';
UART1RXMAXBUFSIZE_CNT_U08.Description = 'Dma Receive Channel Transfer Count';
UART1RXMAXBUFSIZE_CNT_U08.DocUnits = 'Cnt';
UART1RXMAXBUFSIZE_CNT_U08.EngDT = dt.u08;
UART1RXMAXBUFSIZE_CNT_U08.EngVal = 144;
UART1RXMAXBUFSIZE_CNT_U08.Define = 'Local';


UART1RXMAXTRFCNT_CNT_U16 = DataDict.Constant;
UART1RXMAXTRFCNT_CNT_U16.LongName = 'Dma Receive Channel Maximum Transfer Count';
UART1RXMAXTRFCNT_CNT_U16.Description = [...
  'Dma Receive Channel Maximum Transfer Count'];
UART1RXMAXTRFCNT_CNT_U16.DocUnits = 'Cnt';
UART1RXMAXTRFCNT_CNT_U16.EngDT = dt.u16;
UART1RXMAXTRFCNT_CNT_U16.EngVal = 1440;
UART1RXMAXTRFCNT_CNT_U16.Define = 'Local';


UART1SHIFTVAL_CNT_U08 = DataDict.Constant;
UART1SHIFTVAL_CNT_U08.LongName = 'UART1 Shift Value';
UART1SHIFTVAL_CNT_U08.Description = [...
  'Value used to extract 16 bits from DMA transfer count'];
UART1SHIFTVAL_CNT_U08.DocUnits = 'Cnt';
UART1SHIFTVAL_CNT_U08.EngDT = dt.u08;
UART1SHIFTVAL_CNT_U08.EngVal = 16;
UART1SHIFTVAL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
