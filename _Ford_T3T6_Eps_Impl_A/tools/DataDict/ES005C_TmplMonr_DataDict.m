%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 27-Mar-2017 10:59:32       %
%                                  Created with tool release: 2.54.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES005C = DataDict.FDD;
ES005C.Version = '1.1.X';
ES005C.LongName = 'TemporalMonitor';
ES005C.ShoName  = 'TmplMonr';
ES005C.DesignASIL = 'D';
ES005C.Description = 'Temporal Monitor Function';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
TmplMonrInit1 = DataDict.Runnable;
TmplMonrInit1.Context = 'Rte';
TmplMonrInit1.TimeStep = 0;
TmplMonrInit1.Description = 'Init';

TmplMonrPer1 = DataDict.Runnable;
TmplMonrPer1.Context = 'Rte';
TmplMonrPer1.TimeStep = 0.002;
TmplMonrPer1.Description = [...
  'Normal processing, also turns on Temporal Monitor Pin'];

TmplMonrPer2 = DataDict.Runnable;
TmplMonrPer2.Context = 'Rte';
TmplMonrPer2.TimeStep = 0.002;
TmplMonrPer2.Description = 'Turns off Temporal Monitor Pin';

TmplMonrPer3 = DataDict.Runnable;
TmplMonrPer3.Context = 'Rte';
TmplMonrPer3.TimeStep = 0.002;
TmplMonrPer3.Description = [...
  'Periodic 3 is used to keep temporal monitor watchdog functioning durin' ...
  'g Shutdown Mechanism'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
Spi_GetSequenceResult = DataDict.Client;
Spi_GetSequenceResult.CallLocation = {'TmplMonrPer1'};
Spi_GetSequenceResult.Description = [...
  'Client Call for checking the sequence status before Tx or Rx from channel buffer '];
Spi_GetSequenceResult.Return = DataDict.CSReturn;
Spi_GetSequenceResult.Return.Type = 'Spi_SeqResultType';
Spi_GetSequenceResult.Return.Min = 0;
Spi_GetSequenceResult.Return.Max = 3;
Spi_GetSequenceResult.Return.TestTolerance = [];
Spi_GetSequenceResult.Return.Description = 'SPI_SEQ_OK(0), SPI_SEQ_PENDING(1), SPI_SEQ_FAILED(2), SPI_SEQ_CANCELED(3)';
Spi_GetSequenceResult.Arguments(1) = DataDict.CSArguments;
Spi_GetSequenceResult.Arguments(1).Name = 'Sequence';
Spi_GetSequenceResult.Arguments(1).EngDT = dt.u08;
Spi_GetSequenceResult.Arguments(1).EngMin = 0;
Spi_GetSequenceResult.Arguments(1).EngMax = 255;
Spi_GetSequenceResult.Arguments(1).Units = 'Cnt';
Spi_GetSequenceResult.Arguments(1).Direction = 'In';
Spi_GetSequenceResult.Arguments(1).InitRowCol = [1  1];
Spi_GetSequenceResult.Arguments(1).Description = 'Sequence';

Call_Spi_AsyncTransmit = DataDict.Client;
Call_Spi_AsyncTransmit.CallLocation = {'TmplMonrPer1'};
Call_Spi_AsyncTransmit.Description = 'Transmit SPI';
Call_Spi_AsyncTransmit.Return = DataDict.CSReturn;
Call_Spi_AsyncTransmit.Return.Type = 'Standard';
Call_Spi_AsyncTransmit.Return.Min = 0;
Call_Spi_AsyncTransmit.Return.Max = 1;
Call_Spi_AsyncTransmit.Return.TestTolerance = 0;
Call_Spi_AsyncTransmit.Return.Description = 'Transmit SPI';
Call_Spi_AsyncTransmit.Arguments(1) = DataDict.CSArguments;
Call_Spi_AsyncTransmit.Arguments(1).Name = 'Sequence';
Call_Spi_AsyncTransmit.Arguments(1).EngDT = dt.u08;
Call_Spi_AsyncTransmit.Arguments(1).EngMin = 0;
Call_Spi_AsyncTransmit.Arguments(1).EngMax = 255;
Call_Spi_AsyncTransmit.Arguments(1).Units = 'Cnt';
Call_Spi_AsyncTransmit.Arguments(1).Direction = 'In';
Call_Spi_AsyncTransmit.Arguments(1).InitRowCol = [1  1];
Call_Spi_AsyncTransmit.Arguments(1).Description = 'Sequence';


CtrlErrOut = DataDict.Client;
CtrlErrOut.CallLocation = {'TmplMonrPer1'};
CtrlErrOut.Description = 'CtrlErrOut Client Call';
CtrlErrOut.Return = DataDict.CSReturn;
CtrlErrOut.Return.Type = 'None';
CtrlErrOut.Return.Min = [];
CtrlErrOut.Return.Max = [];
CtrlErrOut.Return.TestTolerance = [];
CtrlErrOut.Arguments(1) = DataDict.CSArguments;
CtrlErrOut.Arguments(1).Name = 'PinSt';
CtrlErrOut.Arguments(1).EngDT = dt.lgc;
CtrlErrOut.Arguments(1).EngMin = 0;
CtrlErrOut.Arguments(1).EngMax = 1;
CtrlErrOut.Arguments(1).Units = 'Cnt';
CtrlErrOut.Arguments(1).Direction = 'In';
CtrlErrOut.Arguments(1).InitRowCol = [1  1];
CtrlErrOut.Arguments(1).Description = 'PinSt';
CtrlErrOut.Arguments(2) = DataDict.CSArguments;
CtrlErrOut.Arguments(2).Name = 'TrigReg';
CtrlErrOut.Arguments(2).EngDT = enum.TrigReg1;
CtrlErrOut.Arguments(2).EngMin = 0;
CtrlErrOut.Arguments(2).EngMax = 255;
CtrlErrOut.Arguments(2).Units = 'Cnt';
CtrlErrOut.Arguments(2).Direction = 'In';
CtrlErrOut.Arguments(2).InitRowCol = [1  1];
CtrlErrOut.Arguments(2).Description = 'TrigReg';


GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'TmplMonrPer1','TmplMonrPer3'};
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
GetTiSpan1MicroSec32bit.CallLocation = {'TmplMonrPer2','TmplMonrPer3'};
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


IoHwAb_GetGpioPwrOutpEnaFb = DataDict.Client;
IoHwAb_GetGpioPwrOutpEnaFb.CallLocation = {'TmplMonrPer1'};
IoHwAb_GetGpioPwrOutpEnaFb.Description = 'PwrOutpEnaFb GPIO Read';
IoHwAb_GetGpioPwrOutpEnaFb.Return = DataDict.CSReturn;
IoHwAb_GetGpioPwrOutpEnaFb.Return.Type = 'Standard';
IoHwAb_GetGpioPwrOutpEnaFb.Return.Min = 0;
IoHwAb_GetGpioPwrOutpEnaFb.Return.Max = 1;
IoHwAb_GetGpioPwrOutpEnaFb.Return.TestTolerance = 0;
IoHwAb_GetGpioPwrOutpEnaFb.Return.Description = 'PwrOutpEnaFb GPIO Read';
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1) = DataDict.CSArguments;
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).Name = 'PinSt';
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).EngDT = dt.lgc;
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).EngMin = 0;
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).EngMax = 1;
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).TestTolerance = 0;
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).Units = 'Cnt';
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).Direction = 'Out';
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).InitRowCol = [1  1];
IoHwAb_GetGpioPwrOutpEnaFb.Arguments(1).Description = 'PinSt';


IoHwAb_SetGpioTmplMonrWdg = DataDict.Client;
IoHwAb_SetGpioTmplMonrWdg.CallLocation = {'TmplMonrPer1','TmplMonrPer2'};
IoHwAb_SetGpioTmplMonrWdg.Description = 'Read Wdg Monitor Function';
IoHwAb_SetGpioTmplMonrWdg.Return = DataDict.CSReturn;
IoHwAb_SetGpioTmplMonrWdg.Return.Type = 'Standard';
IoHwAb_SetGpioTmplMonrWdg.Return.Min = 0;
IoHwAb_SetGpioTmplMonrWdg.Return.Max = 1;
IoHwAb_SetGpioTmplMonrWdg.Return.TestTolerance = 0;
IoHwAb_SetGpioTmplMonrWdg.Return.Description = [...
  'Read Wdg Monitor Function Arguments'];
IoHwAb_SetGpioTmplMonrWdg.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).EngMin = 0;
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).EngMax = 1;
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).Direction = 'In';
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioTmplMonrWdg.Arguments(1).Description = 'PinSt';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'TmplMonrPer1'};
SetNtcSts.Description = 'Set NTC Status Main';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'Set NTC Status Main';
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
SetNtcSts.Arguments(2).Description = 'NtcStInfo';
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


Spi_ReadIB = DataDict.Client;
Spi_ReadIB.CallLocation = {'TmplMonrPer1'};
Spi_ReadIB.Description = 'SPI Read Main';
Spi_ReadIB.Return = DataDict.CSReturn;
Spi_ReadIB.Return.Type = 'Standard';
Spi_ReadIB.Return.Min = 0;
Spi_ReadIB.Return.Max = 1;
Spi_ReadIB.Return.TestTolerance = 0;
Spi_ReadIB.Return.Description = 'SPI Read Arguments Main';
Spi_ReadIB.Arguments(1) = DataDict.CSArguments;
Spi_ReadIB.Arguments(1).Name = 'Channel';
Spi_ReadIB.Arguments(1).EngDT = dt.u08;
Spi_ReadIB.Arguments(1).EngMin = 0;
Spi_ReadIB.Arguments(1).EngMax = 255;
Spi_ReadIB.Arguments(1).Units = 'Cnt';
Spi_ReadIB.Arguments(1).Direction = 'In';
Spi_ReadIB.Arguments(1).InitRowCol = [1  1];
Spi_ReadIB.Arguments(1).Description = 'Channel';
Spi_ReadIB.Arguments(2) = DataDict.CSArguments;
Spi_ReadIB.Arguments(2).Name = 'DataBufferPointer';
Spi_ReadIB.Arguments(2).EngDT = dt.u16;
Spi_ReadIB.Arguments(2).EngMin = 0;
Spi_ReadIB.Arguments(2).EngMax = 65535;
Spi_ReadIB.Arguments(2).TestTolerance = 0;
Spi_ReadIB.Arguments(2).Units = 'Cnt';
Spi_ReadIB.Arguments(2).Direction = 'Out';
Spi_ReadIB.Arguments(2).InitRowCol = [1  1];
Spi_ReadIB.Arguments(2).Description = 'DataBufferPointer';


Spi_WriteIB = DataDict.Client;
Spi_WriteIB.CallLocation = {'TmplMonrPer1'};
Spi_WriteIB.Description = 'SPI Main';
Spi_WriteIB.Return = DataDict.CSReturn;
Spi_WriteIB.Return.Type = 'Standard';
Spi_WriteIB.Return.Min = 0;
Spi_WriteIB.Return.Max = 1;
Spi_WriteIB.Return.TestTolerance = 0;
Spi_WriteIB.Return.Description = 'SPI Return Arguments';
Spi_WriteIB.Arguments(1) = DataDict.CSArguments;
Spi_WriteIB.Arguments(1).Name = 'Channel';
Spi_WriteIB.Arguments(1).EngDT = dt.u08;
Spi_WriteIB.Arguments(1).EngMin = 0;
Spi_WriteIB.Arguments(1).EngMax = 255;
Spi_WriteIB.Arguments(1).Units = 'Cnt';
Spi_WriteIB.Arguments(1).Direction = 'In';
Spi_WriteIB.Arguments(1).InitRowCol = [1  1];
Spi_WriteIB.Arguments(1).Description = 'Channel';
Spi_WriteIB.Arguments(2) = DataDict.CSArguments;
Spi_WriteIB.Arguments(2).Name = 'DataBufferPtr';
Spi_WriteIB.Arguments(2).EngDT = dt.u16;
Spi_WriteIB.Arguments(2).EngMin = 0;
Spi_WriteIB.Arguments(2).EngMax = 65535;
Spi_WriteIB.Arguments(2).Units = 'Cnt';
Spi_WriteIB.Arguments(2).Direction = 'InPtr';
Spi_WriteIB.Arguments(2).InitRowCol = [1  1];
Spi_WriteIB.Arguments(2).Description = 'DataBufferPtr';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
StrtUpSt = DataDict.IpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.Description = 'Start Up State';
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;
StrtUpSt.EngMax = 255;
StrtUpSt.ReadIn = {'TmplMonrPer1'};
StrtUpSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = [...
  'Flag indicating the state of the system'];
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'TmplMonrPer3'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
TmplMonrIninTestCmpl = DataDict.OpSignal;
TmplMonrIninTestCmpl.LongName = 'Temporal Monitor Initialization Test Complete';
TmplMonrIninTestCmpl.Description = [...
  'Output flag to indicate Temporal Monitor Initialization Test Status'];
TmplMonrIninTestCmpl.DocUnits = 'Cnt';
TmplMonrIninTestCmpl.SwcShoName = 'TmplMonr';
TmplMonrIninTestCmpl.EngDT = dt.lgc;
TmplMonrIninTestCmpl.EngInit = 0;
TmplMonrIninTestCmpl.EngMin = 0;
TmplMonrIninTestCmpl.EngMax = 1;
TmplMonrIninTestCmpl.TestTolerance = 0;
TmplMonrIninTestCmpl.WrittenIn = {'TmplMonrInit1','TmplMonrPer1'};
TmplMonrIninTestCmpl.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
ElpdTiMicroSec = DataDict.IRV;
ElpdTiMicroSec.LongName = 'Elapsed Time Micro Second';
ElpdTiMicroSec.Description = 'Elapsed Time Micro Second ';
ElpdTiMicroSec.DocUnits = 'Cnt';
ElpdTiMicroSec.EngDT = dt.u32;
ElpdTiMicroSec.EngInit = 0;
ElpdTiMicroSec.EngMin = 0;
ElpdTiMicroSec.EngMax = 4294967295;
ElpdTiMicroSec.ReadIn = {'TmplMonrPer2'};
ElpdTiMicroSec.WrittenIn = {'TmplMonrPer1'};



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
AvrgElpdTiMicroSec = DataDict.PIM;
AvrgElpdTiMicroSec.LongName = 'Average Elapsed Time Microsec';
AvrgElpdTiMicroSec.Description = 'Average Elapsed Time Microsec';
AvrgElpdTiMicroSec.DocUnits = 'Cnt';
AvrgElpdTiMicroSec.EngDT = dt.u32;
AvrgElpdTiMicroSec.EngMin = 0;
AvrgElpdTiMicroSec.EngMax = 4294967295;
AvrgElpdTiMicroSec.InitRowCol = [1  1];


TmplMonrIninCntr = DataDict.PIM;
TmplMonrIninCntr.LongName = 'Temporal Monitor Intialization Counter';
TmplMonrIninCntr.Description = [...
  'Counter for Temporal Monitor Initialization Signal Generation'];
TmplMonrIninCntr.DocUnits = 'Cnt';
TmplMonrIninCntr.EngDT = dt.u08;
TmplMonrIninCntr.EngMin = 0;
TmplMonrIninCntr.EngMax = 255;
TmplMonrIninCntr.InitRowCol = [1  1];


TmplMonrIninTestCmplFlg = DataDict.PIM;
TmplMonrIninTestCmplFlg.LongName = 'Temporal Monitor Initialization Test Complete Flag';
TmplMonrIninTestCmplFlg.Description = [...
  'Temporal Monitor Initialization Test Complete Flag'];
TmplMonrIninTestCmplFlg.DocUnits = 'Cnt';
TmplMonrIninTestCmplFlg.EngDT = dt.lgc;
TmplMonrIninTestCmplFlg.EngMin = 0;
TmplMonrIninTestCmplFlg.EngMax = 1;
TmplMonrIninTestCmplFlg.InitRowCol = [1  1];


TmplMonrNtc40PrmByte = DataDict.PIM;
TmplMonrNtc40PrmByte.LongName = 'Temporal Monitor Ntc 40 Parameter Bytes';
TmplMonrNtc40PrmByte.Description = [...
  'Temporal Monitor Ntc 40 Parameter Bytes'];
TmplMonrNtc40PrmByte.DocUnits = 'Cnt';
TmplMonrNtc40PrmByte.EngDT = dt.u08;
TmplMonrNtc40PrmByte.EngMin = 0;
TmplMonrNtc40PrmByte.EngMax = 255;
TmplMonrNtc40PrmByte.InitRowCol = [1  1];


TmplMonrSpiReadWrOrderFlg1 = DataDict.PIM;
TmplMonrSpiReadWrOrderFlg1.LongName = 'Temporal Monitor SPI Read Write Order Flag 1';
TmplMonrSpiReadWrOrderFlg1.Description = [...
  'Temporal Monitor SPI Read Write Order Flag 2'];
TmplMonrSpiReadWrOrderFlg1.DocUnits = 'Cnt';
TmplMonrSpiReadWrOrderFlg1.EngDT = dt.lgc;
TmplMonrSpiReadWrOrderFlg1.EngMin = 0;
TmplMonrSpiReadWrOrderFlg1.EngMax = 1;
TmplMonrSpiReadWrOrderFlg1.InitRowCol = [1  1];


TmplMonrSpiReadWrOrderFlg2 = DataDict.PIM;
TmplMonrSpiReadWrOrderFlg2.LongName = 'Temporal Monitor SPI Read Write Order Flag 2';
TmplMonrSpiReadWrOrderFlg2.Description = [...
  'Temporal Monitor SPI Read Write Order Flag 2'];
TmplMonrSpiReadWrOrderFlg2.DocUnits = 'Cnt';
TmplMonrSpiReadWrOrderFlg2.EngDT = dt.lgc;
TmplMonrSpiReadWrOrderFlg2.EngMin = 0;
TmplMonrSpiReadWrOrderFlg2.EngMax = 1;
TmplMonrSpiReadWrOrderFlg2.InitRowCol = [1  1];


TmplMonrWdgRstrtCnt = DataDict.PIM;
TmplMonrWdgRstrtCnt.LongName = 'Temporal Monitor Watchdog Restart Count';
TmplMonrWdgRstrtCnt.Description = [...
  'Temporal Monitor Watchdog Restart Count'];
TmplMonrWdgRstrtCnt.DocUnits = 'Cnt';
TmplMonrWdgRstrtCnt.EngDT = dt.u08;
TmplMonrWdgRstrtCnt.EngMin = 0;
TmplMonrWdgRstrtCnt.EngMax = 255;
TmplMonrWdgRstrtCnt.InitRowCol = [1  1];


TrsmErrCntr = DataDict.PIM;
TrsmErrCntr.LongName = 'Transmission Error Counter';
TrsmErrCntr.Description = 'Transmission Error Counter';
TrsmErrCntr.DocUnits = 'Cnt';
TrsmErrCntr.EngDT = dt.u16;
TrsmErrCntr.EngMin = 0;
TrsmErrCntr.EngMax = 65535;
TrsmErrCntr.InitRowCol = [1  1];


TrsmErrNtcThd = DataDict.PIM;
TrsmErrNtcThd.LongName = 'Transmission NTC Threshold';
TrsmErrNtcThd.Description = 'Transmission NTC Threshold';
TrsmErrNtcThd.DocUnits = 'Cnt';
TrsmErrNtcThd.EngDT = dt.u08;
TrsmErrNtcThd.EngMin = 0;
TrsmErrNtcThd.EngMax = 250;
TrsmErrNtcThd.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.LongName = 'StartUp State - Temporal Monitor Initialization Start';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Temporal Monitor Initialization'];
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngVal = 40;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Define = 'Global';


STD_HIGH = DataDict.Constant;
STD_HIGH.LongName = 'Standard High';
STD_HIGH.Description = [...
  'AUTOSAR value representing a physical high state.  To be used as a alt' ...
  'ernative to TRUE/FALSE as appropriate.'];
STD_HIGH.DocUnits = 'Cnt';
STD_HIGH.EngDT = dt.u08;
STD_HIGH.EngVal = 1;
STD_HIGH.Define = 'Global';


STD_LOW = DataDict.Constant;
STD_LOW.LongName = 'Standard Low';
STD_LOW.Description = [...
  'AUTOSAR value representing a physical low state.  To be used as a alte' ...
  'rnative to TRUE/FALSE as appropriate.'];
STD_LOW.DocUnits = 'Cnt';
STD_LOW.EngDT = dt.u08;
STD_LOW.EngVal = 0;
STD_LOW.Define = 'Global';


SpiConf_SpiChannel_TmplMonrCh1 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh1.LongName = 'Temporal Monitor Channel 1';
SpiConf_SpiChannel_TmplMonrCh1.Description = [...
  'Temporal Monitor Channel 1. Can be used for any register'];
SpiConf_SpiChannel_TmplMonrCh1.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh1.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh1.EngVal = 52;
SpiConf_SpiChannel_TmplMonrCh1.Define = 'Global';


SpiConf_SpiChannel_TmplMonrCh2 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh2.LongName = 'Temporal Monitor Channel 2';
SpiConf_SpiChannel_TmplMonrCh2.Description = [...
  'Temporal Monitor Channel 2. Can be used for any register'];
SpiConf_SpiChannel_TmplMonrCh2.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh2.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh2.EngVal = 53;
SpiConf_SpiChannel_TmplMonrCh2.Define = 'Global';


SpiConf_SpiChannel_TmplMonrCh3 = DataDict.Constant;
SpiConf_SpiChannel_TmplMonrCh3.LongName = 'Temporal Monitor Channel 3';
SpiConf_SpiChannel_TmplMonrCh3.Description = [...
  'Temporal Monitor Channel 3. Can be used for any register'];
SpiConf_SpiChannel_TmplMonrCh3.DocUnits = 'Cnt';
SpiConf_SpiChannel_TmplMonrCh3.EngDT = dt.u08;
SpiConf_SpiChannel_TmplMonrCh3.EngVal = 54;
SpiConf_SpiChannel_TmplMonrCh3.Define = 'Global';


SpiConf_SpiSequence_TmplMonrSeq1 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq1.LongName = 'Temporal Monitor Sequence 1';
SpiConf_SpiSequence_TmplMonrSeq1.Description = [...
  'Temporal Monitor Sequence 1. Tied with Temporal Monitor Channel 1'];
SpiConf_SpiSequence_TmplMonrSeq1.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq1.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq1.EngVal = 52;
SpiConf_SpiSequence_TmplMonrSeq1.Define = 'Global';


SpiConf_SpiSequence_TmplMonrSeq2 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq2.LongName = 'Temporal Monitor Sequence 2';
SpiConf_SpiSequence_TmplMonrSeq2.Description = [...
  'Temporal Monitor Sequence 2. Tied with Temporal Monitor Channel 2'];
SpiConf_SpiSequence_TmplMonrSeq2.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq2.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq2.EngVal = 53;
SpiConf_SpiSequence_TmplMonrSeq2.Define = 'Global';


SpiConf_SpiSequence_TmplMonrSeq3 = DataDict.Constant;
SpiConf_SpiSequence_TmplMonrSeq3.LongName = 'Temporal Monitor Sequence 3';
SpiConf_SpiSequence_TmplMonrSeq3.Description = [...
  'Temporal Monitor Sequence 3. Tied with Temporal Monitor Channel 3'];
SpiConf_SpiSequence_TmplMonrSeq3.DocUnits = 'Cnt';
SpiConf_SpiSequence_TmplMonrSeq3.EngDT = dt.u08;
SpiConf_SpiSequence_TmplMonrSeq3.EngVal = 54;
SpiConf_SpiSequence_TmplMonrSeq3.Define = 'Global';


TMPLMONR50MICROSECTHD_CNT_U08 = DataDict.Constant;
TMPLMONR50MICROSECTHD_CNT_U08.LongName = 'Temporal Monitor 50 Micro Second Threshold';
TMPLMONR50MICROSECTHD_CNT_U08.Description = [...
  'Temporal Monitor 50 Micro Second Threshold '];
TMPLMONR50MICROSECTHD_CNT_U08.DocUnits = 'Cnt';
TMPLMONR50MICROSECTHD_CNT_U08.EngDT = dt.u08;
TMPLMONR50MICROSECTHD_CNT_U08.EngVal = 50;
TMPLMONR50MICROSECTHD_CNT_U08.Define = 'Local';


TMPLMONRAVRGCON_CNT_U08 = DataDict.Constant;
TMPLMONRAVRGCON_CNT_U08.LongName = 'Temporal Monitor Averaging Constant';
TMPLMONRAVRGCON_CNT_U08.Description = [...
  'Constant used to calculate average of two values'];
TMPLMONRAVRGCON_CNT_U08.DocUnits = 'Cnt';
TMPLMONRAVRGCON_CNT_U08.EngDT = dt.u08;
TMPLMONRAVRGCON_CNT_U08.EngVal = 2;
TMPLMONRAVRGCON_CNT_U08.Define = 'Local';


TMPLMONRCFGREG1READVAL_CNT_U16 = DataDict.Constant;
TMPLMONRCFGREG1READVAL_CNT_U16.LongName = 'Temporal Monitor Configuration Register 1 Read Value';
TMPLMONRCFGREG1READVAL_CNT_U16.Description = [...
  'Temporal Monitor Configuration Register 1 Read Value Dec = 9216, Bin =' ...
  ' 10010000000000'];
TMPLMONRCFGREG1READVAL_CNT_U16.DocUnits = 'Cnt';
TMPLMONRCFGREG1READVAL_CNT_U16.EngDT = dt.u16;
TMPLMONRCFGREG1READVAL_CNT_U16.EngVal = 9216;
TMPLMONRCFGREG1READVAL_CNT_U16.Define = 'Local';


TMPLMONRCFGREG1WRVAL_CNT_U16 = DataDict.Constant;
TMPLMONRCFGREG1WRVAL_CNT_U16.LongName = 'Temporal Monitor Configuration Register 1 Write Value';
TMPLMONRCFGREG1WRVAL_CNT_U16.Description = [...
  'Temporal Monitor Configuration Register 1 Write Value Dec = 9739, Bin ' ...
  '= 01001 1 0 00001011'];
TMPLMONRCFGREG1WRVAL_CNT_U16.DocUnits = 'Cnt';
TMPLMONRCFGREG1WRVAL_CNT_U16.EngDT = dt.u16;
TMPLMONRCFGREG1WRVAL_CNT_U16.EngVal = 9739;
TMPLMONRCFGREG1WRVAL_CNT_U16.Define = 'Local';


TMPLMONRSPITRSMNTCTHD_CNT_U08 = DataDict.Constant;
TMPLMONRSPITRSMNTCTHD_CNT_U08.LongName = 'Temporal Monitor SPI Transmission NTC Threshlod';
TMPLMONRSPITRSMNTCTHD_CNT_U08.Description = [...
  'Temporal Monitor Watchdog Mode Key Word 3: DEC=7885, BIN = 11110110011' ...
  '01'];
TMPLMONRSPITRSMNTCTHD_CNT_U08.DocUnits = 'Cnt';
TMPLMONRSPITRSMNTCTHD_CNT_U08.EngDT = dt.u08;
TMPLMONRSPITRSMNTCTHD_CNT_U08.EngVal = 250;
TMPLMONRSPITRSMNTCTHD_CNT_U08.Define = 'Local';


TMPLMONRSTSREG2READVAL_CNT_U16 = DataDict.Constant;
TMPLMONRSTSREG2READVAL_CNT_U16.LongName = 'Temporal Monitor Status Register 2 Read Value';
TMPLMONRSTSREG2READVAL_CNT_U16.Description = [...
  'Temporal Monitor Status Register 2 (to read WD State) Read Value Dec =' ...
  ' 2048,Bin = 000100000000000'];
TMPLMONRSTSREG2READVAL_CNT_U16.DocUnits = 'Cnt';
TMPLMONRSTSREG2READVAL_CNT_U16.EngDT = dt.u16;
TMPLMONRSTSREG2READVAL_CNT_U16.EngVal = 2048;
TMPLMONRSTSREG2READVAL_CNT_U16.Define = 'Local';


TMPLMONRWDGMODKEYWORD1_CNT_U16 = DataDict.Constant;
TMPLMONRWDGMODKEYWORD1_CNT_U16.LongName = 'Temporal Monitor Watchdog Mode Key Word 1';
TMPLMONRWDGMODKEYWORD1_CNT_U16.Description = [...
  'Temporal Monitor Watchdog Mode Key Word 1: DEC=7891, BIN = 11110110100' ...
  '11'];
TMPLMONRWDGMODKEYWORD1_CNT_U16.DocUnits = 'Cnt';
TMPLMONRWDGMODKEYWORD1_CNT_U16.EngDT = dt.u16;
TMPLMONRWDGMODKEYWORD1_CNT_U16.EngVal = 7891;
TMPLMONRWDGMODKEYWORD1_CNT_U16.Define = 'Local';


TMPLMONRWDGMODKEYWORD2_CNT_U16 = DataDict.Constant;
TMPLMONRWDGMODKEYWORD2_CNT_U16.LongName = 'Temporal Monitor Watchdog Mode Key Word 2';
TMPLMONRWDGMODKEYWORD2_CNT_U16.Description = [...
  'Temporal Monitor Watchdog Mode Key Word 2: DEC=7731, BIN = 11110001100' ...
  '11'];
TMPLMONRWDGMODKEYWORD2_CNT_U16.DocUnits = 'Cnt';
TMPLMONRWDGMODKEYWORD2_CNT_U16.EngDT = dt.u16;
TMPLMONRWDGMODKEYWORD2_CNT_U16.EngVal = 7731;
TMPLMONRWDGMODKEYWORD2_CNT_U16.Define = 'Local';


TMPLMONRWDGMODKEYWORD3_CNT_U16 = DataDict.Constant;
TMPLMONRWDGMODKEYWORD3_CNT_U16.LongName = 'Temporal Monitor Watchdog Mode Key Word 3';
TMPLMONRWDGMODKEYWORD3_CNT_U16.Description = [...
  'Temporal Monitor Watchdog Mode Key Word 3: DEC=7885, BIN = 11110110011' ...
  '01'];
TMPLMONRWDGMODKEYWORD3_CNT_U16.DocUnits = 'Cnt';
TMPLMONRWDGMODKEYWORD3_CNT_U16.EngDT = dt.u16;
TMPLMONRWDGMODKEYWORD3_CNT_U16.EngVal = 7885;
TMPLMONRWDGMODKEYWORD3_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
IninFlt = DataDict.NTC;
IninFlt.NtcNr = NtcNr2.NTCNR_0X040;
IninFlt.NtcTyp = 'None';
IninFlt.LongName = 'Initialization Fault';
IninFlt.Description = 'Temporal Monitor Initialization Fault *** NOTE- We have SPI Driver Transmission error if all the bits are set(parambyte = 255)***';
IninFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
IninFlt.NtcStInfo.Bit0Descr = 'Fault Occured Between TmplMonrInitCntr =  10 ~ 11';
IninFlt.NtcStInfo.Bit1Descr = 'Fault Occured Between TmplMonrInitCntr = 13';
IninFlt.NtcStInfo.Bit2Descr = 'Fault Occured Between TmplMonrInitCntr = 15 ~ 16';
IninFlt.NtcStInfo.Bit3Descr = 'Fault Occured at TmplMonrInitCntr = 18  (POE Fault)';
IninFlt.NtcStInfo.Bit4Descr = 'Fault Occured at TmplMonrInitCntr = 19 (WD_STATE Fault)';
IninFlt.NtcStInfo.Bit5Descr = 'Fault Occured at TmplMonrInitCntr = 21 (Edge/Valid Write Fault)';
IninFlt.NtcStInfo.Bit6Descr = 'Fault Occured at TmplMonrInitCntr = 53 (POE + Non-WD Fault)';
IninFlt.NtcStInfo.Bit7Descr = 'Fault Occured at TmplMonrInitCntr = 53 (POE + WD Fault) ';


RtFlt = DataDict.NTC;
RtFlt.NtcNr = NtcNr2.NTCNR_0X041;
RtFlt.NtcTyp = 'None';
RtFlt.LongName = 'Runtime Fault';
RtFlt.Description = 'Temporal Monitor Runtime Fault';
RtFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
RtFlt.NtcStInfo.Bit0Descr = 'WD type Failure';
RtFlt.NtcStInfo.Bit1Descr = 'Non-WD type Failure';
RtFlt.NtcStInfo.Bit2Descr = 'Unused';
RtFlt.NtcStInfo.Bit3Descr = 'Unused';
RtFlt.NtcStInfo.Bit4Descr = 'Unused';
RtFlt.NtcStInfo.Bit5Descr = 'Unused';
RtFlt.NtcStInfo.Bit6Descr = 'Unused';
RtFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
