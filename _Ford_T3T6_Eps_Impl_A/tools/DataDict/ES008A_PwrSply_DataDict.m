%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 17-Mar-2017 15:52:20       %
%                                  Created with tool release: 2.54.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES008A = DataDict.FDD;
ES008A.Version = '1.7.X';
ES008A.LongName = 'PowerSupply';
ES008A.ShoName  = 'PwrSply';
ES008A.DesignASIL = 'B';
ES008A.Description = 'Power Supply Diagnostics Function';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
PwrSplyInit1 = DataDict.Runnable;
PwrSplyInit1.Context = 'Rte';
PwrSplyInit1.TimeStep = 0;
PwrSplyInit1.Description = [...
  'Power Supply Initialization Function 1'];

PwrSplyPer1 = DataDict.Runnable;
PwrSplyPer1.Context = 'Rte';
PwrSplyPer1.TimeStep = 0.004;
PwrSplyPer1.Description = 'Power Supply Periodic 1';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
Spi_GetSequenceResult = DataDict.Client;
Spi_GetSequenceResult.CallLocation = {'PwrSplyPer1'};
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
Call_Spi_AsyncTransmit.CallLocation = {'PwrSplyPer1'};
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
Call_Spi_AsyncTransmit.Arguments(1).Description = 'Transmit SPI';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'PwrSplyPer1'};
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
SetNtcSts.Arguments(1).Description = 'Set NTC Status Main';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'Set NTC Status Main';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'Set NTC Status Main';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Set NTC Status Main';


Spi_GetSequenceResult = DataDict.Client;
Spi_GetSequenceResult.CallLocation = {'PwrSplyPer1'};
Spi_GetSequenceResult.Description = [...
  'Client Call for checking the sequence status before Tx or Rx from chan' ...
  'nel buffer '];
Spi_GetSequenceResult.Return = DataDict.CSReturn;
Spi_GetSequenceResult.Return.Type = 'None';
Spi_GetSequenceResult.Return.Min = [];
Spi_GetSequenceResult.Return.Max = [];
Spi_GetSequenceResult.Return.TestTolerance = [];


Spi_ReadIB = DataDict.Client;
Spi_ReadIB.CallLocation = {'PwrSplyPer1'};
Spi_ReadIB.Description = 'SPI Read';
Spi_ReadIB.Return = DataDict.CSReturn;
Spi_ReadIB.Return.Type = 'Standard';
Spi_ReadIB.Return.Min = 0;
Spi_ReadIB.Return.Max = 1;
Spi_ReadIB.Return.TestTolerance = 0;
Spi_ReadIB.Return.Description = 'SPI Read';
Spi_ReadIB.Arguments(1) = DataDict.CSArguments;
Spi_ReadIB.Arguments(1).Name = 'Channel';
Spi_ReadIB.Arguments(1).EngDT = dt.u08;
Spi_ReadIB.Arguments(1).EngMin = 0;
Spi_ReadIB.Arguments(1).EngMax = 255;
Spi_ReadIB.Arguments(1).Units = 'Cnt';
Spi_ReadIB.Arguments(1).Direction = 'In';
Spi_ReadIB.Arguments(1).InitRowCol = [1  1];
Spi_ReadIB.Arguments(1).Description = 'SPI Read';
Spi_ReadIB.Arguments(2) = DataDict.CSArguments;
Spi_ReadIB.Arguments(2).Name = 'DataBufferPointer';
Spi_ReadIB.Arguments(2).EngDT = dt.u16;
Spi_ReadIB.Arguments(2).EngMin = 0;
Spi_ReadIB.Arguments(2).EngMax = 65535;
Spi_ReadIB.Arguments(2).TestTolerance = 999;
Spi_ReadIB.Arguments(2).Units = 'Cnt';
Spi_ReadIB.Arguments(2).Direction = 'Out';
Spi_ReadIB.Arguments(2).InitRowCol = [1  1];
Spi_ReadIB.Arguments(2).Description = 'SPI Read';


Spi_WriteIB = DataDict.Client;
Spi_WriteIB.CallLocation = {'PwrSplyPer1'};
Spi_WriteIB.Description = 'SPI Write';
Spi_WriteIB.Return = DataDict.CSReturn;
Spi_WriteIB.Return.Type = 'Standard';
Spi_WriteIB.Return.Min = 0;
Spi_WriteIB.Return.Max = 1;
Spi_WriteIB.Return.TestTolerance = 0;
Spi_WriteIB.Return.Description = 'SPI Write';
Spi_WriteIB.Arguments(1) = DataDict.CSArguments;
Spi_WriteIB.Arguments(1).Name = 'Channel';
Spi_WriteIB.Arguments(1).EngDT = dt.u08;
Spi_WriteIB.Arguments(1).EngMin = 0;
Spi_WriteIB.Arguments(1).EngMax = 255;
Spi_WriteIB.Arguments(1).Units = 'Cnt';
Spi_WriteIB.Arguments(1).Direction = 'In';
Spi_WriteIB.Arguments(1).InitRowCol = [1  1];
Spi_WriteIB.Arguments(1).Description = 'SPI Write';
Spi_WriteIB.Arguments(2) = DataDict.CSArguments;
Spi_WriteIB.Arguments(2).Name = 'DataBufferPtr';
Spi_WriteIB.Arguments(2).EngDT = dt.u16;
Spi_WriteIB.Arguments(2).EngMin = 0;
Spi_WriteIB.Arguments(2).EngMax = 65535;
Spi_WriteIB.Arguments(2).Units = 'Cnt';
Spi_WriteIB.Arguments(2).Direction = 'InPtr';
Spi_WriteIB.Arguments(2).InitRowCol = [1  1];
Spi_WriteIB.Arguments(2).Description = 'SPI Write';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
PhyElecPwrSteerEna = DataDict.IpSignal;
PhyElecPwrSteerEna.LongName = 'Physical Electric Power Steering Enable';
PhyElecPwrSteerEna.Description = [...
  'Physical Electric Power Steering Enable'];
PhyElecPwrSteerEna.DocUnits = 'Volt';
PhyElecPwrSteerEna.EngDT = dt.Phy;
PhyElecPwrSteerEna.EngInit = 0;
PhyElecPwrSteerEna.EngMin = 0;
PhyElecPwrSteerEna.EngMax = 12;
PhyElecPwrSteerEna.ReadIn = {'PwrSplyPer1'};
PhyElecPwrSteerEna.ReadType = 'Phy';


PhyTurnOffDly = DataDict.IpSignal;
PhyTurnOffDly.LongName = 'Physical Turn Off Delay';
PhyTurnOffDly.Description = 'Physical Turn Off Delay';
PhyTurnOffDly.DocUnits = 'Cnt';
PhyTurnOffDly.EngDT = dt.Phy;
PhyTurnOffDly.EngInit = 0;
PhyTurnOffDly.EngMin = 0;
PhyTurnOffDly.EngMax = 1;
PhyTurnOffDly.ReadIn = {'PwrSplyPer1'};
PhyTurnOffDly.ReadType = 'Phy';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'The New System State';
SysSt.Description = 'The New System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'PwrSplyPer1'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
NPwrOnRst = DataDict.OpSignal;
NPwrOnRst.LongName = 'Power on Reset';
NPwrOnRst.Description = 'Power On Reset';
NPwrOnRst.DocUnits = 'Cnt';
NPwrOnRst.SwcShoName = 'PwrSply';
NPwrOnRst.EngDT = dt.Phy;
NPwrOnRst.EngInit = 0;
NPwrOnRst.EngMin = 0;
NPwrOnRst.EngMax = 1;
NPwrOnRst.TestTolerance = 0;
NPwrOnRst.WrittenIn = {''};
NPwrOnRst.WriteType = 'Phy';


Phy1Pt3Volt = DataDict.OpSignal;
Phy1Pt3Volt.LongName = 'Physical 1PT3 Volt';
Phy1Pt3Volt.Description = 'Physical 1.3 Volt';
Phy1Pt3Volt.DocUnits = 'Volt';
Phy1Pt3Volt.SwcShoName = 'PwrSply';
Phy1Pt3Volt.EngDT = dt.Phy;
Phy1Pt3Volt.EngInit = 0;
Phy1Pt3Volt.EngMin = 0;
Phy1Pt3Volt.EngMax = 3.3;
Phy1Pt3Volt.TestTolerance = 0;
Phy1Pt3Volt.WrittenIn = {''};
Phy1Pt3Volt.WriteType = 'Phy';


Phy3Pt3Volt = DataDict.OpSignal;
Phy3Pt3Volt.LongName = 'Physical 3PT3 Volt';
Phy3Pt3Volt.Description = 'Physical 3.3 Volt';
Phy3Pt3Volt.DocUnits = 'Volt';
Phy3Pt3Volt.SwcShoName = 'PwrSply';
Phy3Pt3Volt.EngDT = dt.Phy;
Phy3Pt3Volt.EngInit = 0;
Phy3Pt3Volt.EngMin = 0;
Phy3Pt3Volt.EngMax = 3.3;
Phy3Pt3Volt.TestTolerance = 0;
Phy3Pt3Volt.WrittenIn = {''};
Phy3Pt3Volt.WriteType = 'Phy';


Phy5VoltNotProtd1 = DataDict.OpSignal;
Phy5VoltNotProtd1.LongName = 'Physical 5 Volt Not Protected 1';
Phy5VoltNotProtd1.Description = 'Physical 5 Volt Not Protected 1';
Phy5VoltNotProtd1.DocUnits = 'Volt';
Phy5VoltNotProtd1.SwcShoName = 'PwrSply';
Phy5VoltNotProtd1.EngDT = dt.Phy;
Phy5VoltNotProtd1.EngInit = 0;
Phy5VoltNotProtd1.EngMin = 0;
Phy5VoltNotProtd1.EngMax = 5;
Phy5VoltNotProtd1.TestTolerance = 0;
Phy5VoltNotProtd1.WrittenIn = {''};
Phy5VoltNotProtd1.WriteType = 'Phy';


Phy5VoltNotProtd2 = DataDict.OpSignal;
Phy5VoltNotProtd2.LongName = 'Physical 5 Volt Not Protected 2';
Phy5VoltNotProtd2.Description = 'Physical 5 Volt Not Protected 2';
Phy5VoltNotProtd2.DocUnits = 'Volt';
Phy5VoltNotProtd2.SwcShoName = 'PwrSply';
Phy5VoltNotProtd2.EngDT = dt.Phy;
Phy5VoltNotProtd2.EngInit = 0;
Phy5VoltNotProtd2.EngMin = 0;
Phy5VoltNotProtd2.EngMax = 5;
Phy5VoltNotProtd2.TestTolerance = 0;
Phy5VoltNotProtd2.WrittenIn = {''};
Phy5VoltNotProtd2.WriteType = 'Phy';


Phy5VoltNotProtd3 = DataDict.OpSignal;
Phy5VoltNotProtd3.LongName = 'Physical 5 Volt Not Protected 3';
Phy5VoltNotProtd3.Description = [...
  'Physical 5 Volt Not Protected 3 used for V5CAN'];
Phy5VoltNotProtd3.DocUnits = 'Volt';
Phy5VoltNotProtd3.SwcShoName = 'PwrSply';
Phy5VoltNotProtd3.EngDT = dt.Phy;
Phy5VoltNotProtd3.EngInit = 0;
Phy5VoltNotProtd3.EngMin = 0;
Phy5VoltNotProtd3.EngMax = 5;
Phy5VoltNotProtd3.TestTolerance = 0;
Phy5VoltNotProtd3.WrittenIn = {''};
Phy5VoltNotProtd3.WriteType = 'Phy';


Phy5VoltProtd1 = DataDict.OpSignal;
Phy5VoltProtd1.LongName = 'Physical 5 Volt Protected 1';
Phy5VoltProtd1.Description = 'Physical 5 Volt Protected 1';
Phy5VoltProtd1.DocUnits = 'Volt';
Phy5VoltProtd1.SwcShoName = 'PwrSply';
Phy5VoltProtd1.EngDT = dt.Phy;
Phy5VoltProtd1.EngInit = 0;
Phy5VoltProtd1.EngMin = 0;
Phy5VoltProtd1.EngMax = 5;
Phy5VoltProtd1.TestTolerance = 0;
Phy5VoltProtd1.WrittenIn = {''};
Phy5VoltProtd1.WriteType = 'Phy';


Phy5VoltProtd2 = DataDict.OpSignal;
Phy5VoltProtd2.LongName = 'Physical 5 Volt Protected 2';
Phy5VoltProtd2.Description = 'Physical 5 Volt Protected 2';
Phy5VoltProtd2.DocUnits = 'Volt';
Phy5VoltProtd2.SwcShoName = 'PwrSply';
Phy5VoltProtd2.EngDT = dt.Phy;
Phy5VoltProtd2.EngInit = 0;
Phy5VoltProtd2.EngMin = 0;
Phy5VoltProtd2.EngMax = 5;
Phy5VoltProtd2.TestTolerance = 0;
Phy5VoltProtd2.WrittenIn = {''};
Phy5VoltProtd2.WriteType = 'Phy';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
PwrSplyNtc0x07BFailStep = DataDict.Calibration;
PwrSplyNtc0x07BFailStep.LongName = 'Power Supply Ntc 7B Fail Step';
PwrSplyNtc0x07BFailStep.Description = 'Power Supply Ntc 7B Fail Step';
PwrSplyNtc0x07BFailStep.DocUnits = 'Cnt';
PwrSplyNtc0x07BFailStep.EngDT = dt.u16;
PwrSplyNtc0x07BFailStep.EngVal = 52424;
PwrSplyNtc0x07BFailStep.EngMin = 0;
PwrSplyNtc0x07BFailStep.EngMax = 65535;
PwrSplyNtc0x07BFailStep.Cardinality = 'Cmn';
PwrSplyNtc0x07BFailStep.CustomerVisible = false;
PwrSplyNtc0x07BFailStep.Online = false;
PwrSplyNtc0x07BFailStep.Impact = 'M';
PwrSplyNtc0x07BFailStep.TuningOwner = 'FDD';
PwrSplyNtc0x07BFailStep.GraphLink = {''};
PwrSplyNtc0x07BFailStep.Monotony = 'None';
PwrSplyNtc0x07BFailStep.MaxGrad = 0;
PwrSplyNtc0x07BFailStep.PortName = 'PwrSplyNtc0x07BFailStep';


PwrSplyNtc0x07BPassStep = DataDict.Calibration;
PwrSplyNtc0x07BPassStep.LongName = 'Power Supply Ntc 7B Pass Step';
PwrSplyNtc0x07BPassStep.Description = 'Power Supply Ntc 7B Pass Step';
PwrSplyNtc0x07BPassStep.DocUnits = 'Cnt';
PwrSplyNtc0x07BPassStep.EngDT = dt.u16;
PwrSplyNtc0x07BPassStep.EngVal = 13106;
PwrSplyNtc0x07BPassStep.EngMin = 0;
PwrSplyNtc0x07BPassStep.EngMax = 65535;
PwrSplyNtc0x07BPassStep.Cardinality = 'Cmn';
PwrSplyNtc0x07BPassStep.CustomerVisible = false;
PwrSplyNtc0x07BPassStep.Online = false;
PwrSplyNtc0x07BPassStep.Impact = 'M';
PwrSplyNtc0x07BPassStep.TuningOwner = 'FDD';
PwrSplyNtc0x07BPassStep.GraphLink = {''};
PwrSplyNtc0x07BPassStep.Monotony = 'None';
PwrSplyNtc0x07BPassStep.MaxGrad = 0;
PwrSplyNtc0x07BPassStep.PortName = 'PwrSplyNtc0x07BPassStep';


PwrSplyNtc0x07CFailStep = DataDict.Calibration;
PwrSplyNtc0x07CFailStep.LongName = 'Power Supply Ntc 7C Fail Step';
PwrSplyNtc0x07CFailStep.Description = 'Power Supply Ntc 7C Fail Step';
PwrSplyNtc0x07CFailStep.DocUnits = 'Cnt';
PwrSplyNtc0x07CFailStep.EngDT = dt.u16;
PwrSplyNtc0x07CFailStep.EngVal = 52424;
PwrSplyNtc0x07CFailStep.EngMin = 0;
PwrSplyNtc0x07CFailStep.EngMax = 65535;
PwrSplyNtc0x07CFailStep.Cardinality = 'Cmn';
PwrSplyNtc0x07CFailStep.CustomerVisible = false;
PwrSplyNtc0x07CFailStep.Online = false;
PwrSplyNtc0x07CFailStep.Impact = 'M';
PwrSplyNtc0x07CFailStep.TuningOwner = 'FDD';
PwrSplyNtc0x07CFailStep.GraphLink = {''};
PwrSplyNtc0x07CFailStep.Monotony = 'None';
PwrSplyNtc0x07CFailStep.MaxGrad = 0;
PwrSplyNtc0x07CFailStep.PortName = 'PwrSplyNtc0x07CFailStep';


PwrSplyNtc0x07CPassStep = DataDict.Calibration;
PwrSplyNtc0x07CPassStep.LongName = 'Power Supply Ntc 7C Pass Step';
PwrSplyNtc0x07CPassStep.Description = 'Power Supply Ntc 7C Pass Step';
PwrSplyNtc0x07CPassStep.DocUnits = 'Cnt';
PwrSplyNtc0x07CPassStep.EngDT = dt.u16;
PwrSplyNtc0x07CPassStep.EngVal = 13106;
PwrSplyNtc0x07CPassStep.EngMin = 0;
PwrSplyNtc0x07CPassStep.EngMax = 65535;
PwrSplyNtc0x07CPassStep.Cardinality = 'Cmn';
PwrSplyNtc0x07CPassStep.CustomerVisible = false;
PwrSplyNtc0x07CPassStep.Online = false;
PwrSplyNtc0x07CPassStep.Impact = 'M';
PwrSplyNtc0x07CPassStep.TuningOwner = 'FDD';
PwrSplyNtc0x07CPassStep.GraphLink = {''};
PwrSplyNtc0x07CPassStep.Monotony = 'None';
PwrSplyNtc0x07CPassStep.MaxGrad = 0;
PwrSplyNtc0x07CPassStep.PortName = 'PwrSplyNtc0x07CPassStep';


PwrSplyNtc0x07DFailStep = DataDict.Calibration;
PwrSplyNtc0x07DFailStep.LongName = 'Power Supply Ntc 7D Fail Step';
PwrSplyNtc0x07DFailStep.Description = 'Power Supply Ntc 7D Fail Step';
PwrSplyNtc0x07DFailStep.DocUnits = 'Cnt';
PwrSplyNtc0x07DFailStep.EngDT = dt.u16;
PwrSplyNtc0x07DFailStep.EngVal = 52424;
PwrSplyNtc0x07DFailStep.EngMin = 0;
PwrSplyNtc0x07DFailStep.EngMax = 65535;
PwrSplyNtc0x07DFailStep.Cardinality = 'Cmn';
PwrSplyNtc0x07DFailStep.CustomerVisible = false;
PwrSplyNtc0x07DFailStep.Online = false;
PwrSplyNtc0x07DFailStep.Impact = 'M';
PwrSplyNtc0x07DFailStep.TuningOwner = 'FDD';
PwrSplyNtc0x07DFailStep.GraphLink = {''};
PwrSplyNtc0x07DFailStep.Monotony = 'None';
PwrSplyNtc0x07DFailStep.MaxGrad = 0;
PwrSplyNtc0x07DFailStep.PortName = 'PwrSplyNtc0x07DFailStep';


PwrSplyNtc0x07DPassStep = DataDict.Calibration;
PwrSplyNtc0x07DPassStep.LongName = 'Power Supply Ntc 7D Pass Step';
PwrSplyNtc0x07DPassStep.Description = 'Power Supply Ntc 7D Pass Step';
PwrSplyNtc0x07DPassStep.DocUnits = 'Cnt';
PwrSplyNtc0x07DPassStep.EngDT = dt.u16;
PwrSplyNtc0x07DPassStep.EngVal = 13106;
PwrSplyNtc0x07DPassStep.EngMin = 0;
PwrSplyNtc0x07DPassStep.EngMax = 65535;
PwrSplyNtc0x07DPassStep.Cardinality = 'Cmn';
PwrSplyNtc0x07DPassStep.CustomerVisible = false;
PwrSplyNtc0x07DPassStep.Online = false;
PwrSplyNtc0x07DPassStep.Impact = 'M';
PwrSplyNtc0x07DPassStep.TuningOwner = 'FDD';
PwrSplyNtc0x07DPassStep.GraphLink = {''};
PwrSplyNtc0x07DPassStep.Monotony = 'None';
PwrSplyNtc0x07DPassStep.MaxGrad = 0;
PwrSplyNtc0x07DPassStep.PortName = 'PwrSplyNtc0x07DPassStep';



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
ReadWrOrderFlg1 = DataDict.PIM;
ReadWrOrderFlg1.LongName = 'Power Supply Read Write Order Flag';
ReadWrOrderFlg1.Description = 'Power Supply Read Write Order Flag';
ReadWrOrderFlg1.DocUnits = 'Cnt';
ReadWrOrderFlg1.EngDT = dt.lgc;
ReadWrOrderFlg1.EngMin = 0;
ReadWrOrderFlg1.EngMax = 1;
ReadWrOrderFlg1.InitRowCol = [1  1];


ReadWrOrderFlg2 = DataDict.PIM;
ReadWrOrderFlg2.LongName = 'Power Supply Read Write Order Flag';
ReadWrOrderFlg2.Description = 'Power Supply Read Write Order Flag';
ReadWrOrderFlg2.DocUnits = 'Cnt';
ReadWrOrderFlg2.EngDT = dt.lgc;
ReadWrOrderFlg2.EngMin = 0;
ReadWrOrderFlg2.EngMax = 1;
ReadWrOrderFlg2.InitRowCol = [1  1];


SpiTrsmErrCntr = DataDict.PIM;
SpiTrsmErrCntr.LongName = 'Power Supply SPI transmission error counter';
SpiTrsmErrCntr.Description = [...
  'Power Supply SPI transmission error counter'];
SpiTrsmErrCntr.DocUnits = 'Cnt';
SpiTrsmErrCntr.EngDT = dt.u16;
SpiTrsmErrCntr.EngMin = 0;
SpiTrsmErrCntr.EngMax = 65535;
SpiTrsmErrCntr.InitRowCol = [1  1];


StrtUpSelfTestCmpl = DataDict.PIM;
StrtUpSelfTestCmpl.LongName = 'Power Supply Start Up Self Test Complete Flag';
StrtUpSelfTestCmpl.Description = [...
  'Power Supply Start Up Self Test Complete Flag'];
StrtUpSelfTestCmpl.DocUnits = 'Cnt';
StrtUpSelfTestCmpl.EngDT = dt.lgc;
StrtUpSelfTestCmpl.EngMin = 0;
StrtUpSelfTestCmpl.EngMax = 1;
StrtUpSelfTestCmpl.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
PWRSPLYDIAGREG0READVAL_CNT_U16 = DataDict.Constant;
PWRSPLYDIAGREG0READVAL_CNT_U16.LongName = 'Power Supply Diag Register 0 Read Value';
PWRSPLYDIAGREG0READVAL_CNT_U16.Description = [...
  'Power Supply Diag Register 0 Read ValueDec = 3072 Bin = 00011 0 0 0000' ...
  '0000'];
PWRSPLYDIAGREG0READVAL_CNT_U16.DocUnits = 'Cnt';
PWRSPLYDIAGREG0READVAL_CNT_U16.EngDT = dt.u16;
PWRSPLYDIAGREG0READVAL_CNT_U16.EngVal = 3072;
PWRSPLYDIAGREG0READVAL_CNT_U16.Define = 'Local';


PWRSPLYDIAGREG1READVAL_CNT_U16 = DataDict.Constant;
PWRSPLYDIAGREG1READVAL_CNT_U16.LongName = 'Power Supply Diag Register 1 Read Value';
PWRSPLYDIAGREG1READVAL_CNT_U16.Description = [...
  'Power Supply Diag Register 1 Read ValueDec = 4096Bin = 00100 0 0 00000' ...
  '000'];
PWRSPLYDIAGREG1READVAL_CNT_U16.DocUnits = 'Cnt';
PWRSPLYDIAGREG1READVAL_CNT_U16.EngDT = dt.u16;
PWRSPLYDIAGREG1READVAL_CNT_U16.EngVal = 4096;
PWRSPLYDIAGREG1READVAL_CNT_U16.Define = 'Local';


PWRSPLYOUTPENAWRVAL_CNT_U16 = DataDict.Constant;
PWRSPLYOUTPENAWRVAL_CNT_U16.LongName = 'Power Supply Output Enable Write Value';
PWRSPLYOUTPENAWRVAL_CNT_U16.Description = [...
  'Power Supply Output Enable Write ValueDec = 6656,Bin = 00110 1 0 00000' ...
  '000'];
PWRSPLYOUTPENAWRVAL_CNT_U16.DocUnits = 'Cnt';
PWRSPLYOUTPENAWRVAL_CNT_U16.EngDT = dt.u16;
PWRSPLYOUTPENAWRVAL_CNT_U16.EngVal = 6656;
PWRSPLYOUTPENAWRVAL_CNT_U16.Define = 'Local';


PWRSPLYVRFYRESREG0READVAL_CNT_U16 = DataDict.Constant;
PWRSPLYVRFYRESREG0READVAL_CNT_U16.LongName = 'Power Supply Diag Register 1 Read Value';
PWRSPLYVRFYRESREG0READVAL_CNT_U16.Description = [...
  'Power Supply Diag Register 1 Read ValueDec = 4096Bin = 00100 0 0 00000' ...
  '000'];
PWRSPLYVRFYRESREG0READVAL_CNT_U16.DocUnits = 'Cnt';
PWRSPLYVRFYRESREG0READVAL_CNT_U16.EngDT = dt.u16;
PWRSPLYVRFYRESREG0READVAL_CNT_U16.EngVal = 10240;
PWRSPLYVRFYRESREG0READVAL_CNT_U16.Define = 'Local';


PWRSPLYVRFYRESREG1READVAL_CNT_U16 = DataDict.Constant;
PWRSPLYVRFYRESREG1READVAL_CNT_U16.LongName = 'Power Supply Diag Register 1 Read Value';
PWRSPLYVRFYRESREG1READVAL_CNT_U16.Description = [...
  'Power Supply Diag Register 1 Read ValueDec = 4096Bin = 00100 0 0 00000' ...
  '000'];
PWRSPLYVRFYRESREG1READVAL_CNT_U16.DocUnits = 'Cnt';
PWRSPLYVRFYRESREG1READVAL_CNT_U16.EngDT = dt.u16;
PWRSPLYVRFYRESREG1READVAL_CNT_U16.EngVal = 11264;
PWRSPLYVRFYRESREG1READVAL_CNT_U16.Define = 'Local';


SpiConf_SpiChannel_PwrSplyCh1 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh1.LongName = 'Power Supply Diagnostics Channel 1';
SpiConf_SpiChannel_PwrSplyCh1.Description = 'Power Supply Diagnostics Channel 1';
SpiConf_SpiChannel_PwrSplyCh1.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh1.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh1.EngVal = 57;
SpiConf_SpiChannel_PwrSplyCh1.Define = 'Global';


SpiConf_SpiChannel_PwrSplyCh2 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh2.LongName = 'Power Supply Diagnostics Channel 2';
SpiConf_SpiChannel_PwrSplyCh2.Description = [...
  'Power Supply Diagnostics Channel 2. '];
SpiConf_SpiChannel_PwrSplyCh2.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh2.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh2.EngVal = 58;
SpiConf_SpiChannel_PwrSplyCh2.Define = 'Global';


SpiConf_SpiChannel_PwrSplyCh3 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh3.LongName = 'Power Supply Diagnostics Channel 3';
SpiConf_SpiChannel_PwrSplyCh3.Description = 'Power Supply Diagnostics Channel 3';
SpiConf_SpiChannel_PwrSplyCh3.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh3.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh3.EngVal = 59;
SpiConf_SpiChannel_PwrSplyCh3.Define = 'Global';


SpiConf_SpiChannel_PwrSplyCh4 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh4.LongName = 'Power Supply Diagnostics Channel 4';
SpiConf_SpiChannel_PwrSplyCh4.Description = 'Power Supply Diagnostics Channel 4';
SpiConf_SpiChannel_PwrSplyCh4.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh4.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh4.EngVal = 60;
SpiConf_SpiChannel_PwrSplyCh4.Define = 'Global';


SpiConf_SpiChannel_PwrSplyCh5 = DataDict.Constant;
SpiConf_SpiChannel_PwrSplyCh5.LongName = 'Power Supply Diagnostics Channel 5';
SpiConf_SpiChannel_PwrSplyCh5.Description = 'Power Supply Diagnostics Channel 5';
SpiConf_SpiChannel_PwrSplyCh5.DocUnits = 'Cnt';
SpiConf_SpiChannel_PwrSplyCh5.EngDT = dt.u08;
SpiConf_SpiChannel_PwrSplyCh5.EngVal = 61;
SpiConf_SpiChannel_PwrSplyCh5.Define = 'Global';


SpiConf_SpiSequence_PwrSplySeq1 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq1.LongName = 'Power Supply Sequence 1';
SpiConf_SpiSequence_PwrSplySeq1.Description = 'Power Supply Sequence 1';
SpiConf_SpiSequence_PwrSplySeq1.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq1.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq1.EngVal = 57;
SpiConf_SpiSequence_PwrSplySeq1.Define = 'Global';


SpiConf_SpiSequence_PwrSplySeq2 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq2.LongName = 'Power Supply Sequence 2';
SpiConf_SpiSequence_PwrSplySeq2.Description = 'Power Supply Sequence 2';
SpiConf_SpiSequence_PwrSplySeq2.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq2.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq2.EngVal = 58;
SpiConf_SpiSequence_PwrSplySeq2.Define = 'Global';


SpiConf_SpiSequence_PwrSplySeq3 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq3.LongName = 'Power Supply Sequence 3';
SpiConf_SpiSequence_PwrSplySeq3.Description = 'Power Supply Sequence 3';
SpiConf_SpiSequence_PwrSplySeq3.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq3.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq3.EngVal = 59;
SpiConf_SpiSequence_PwrSplySeq3.Define = 'Global';


SpiConf_SpiSequence_PwrSplySeq4 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq4.LongName = 'Power Supply Sequence 4';
SpiConf_SpiSequence_PwrSplySeq4.Description = 'Power Supply Sequence 4';
SpiConf_SpiSequence_PwrSplySeq4.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq4.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq4.EngVal = 60;
SpiConf_SpiSequence_PwrSplySeq4.Define = 'Global';


SpiConf_SpiSequence_PwrSplySeq5 = DataDict.Constant;
SpiConf_SpiSequence_PwrSplySeq5.LongName = 'Power Supply Sequence 5';
SpiConf_SpiSequence_PwrSplySeq5.Description = 'Power Supply Sequence 5';
SpiConf_SpiSequence_PwrSplySeq5.DocUnits = 'Cnt';
SpiConf_SpiSequence_PwrSplySeq5.EngDT = dt.u08;
SpiConf_SpiSequence_PwrSplySeq5.EngVal = 61;
SpiConf_SpiSequence_PwrSplySeq5.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
DiagcReg0Err = DataDict.NTC;
DiagcReg0Err.NtcNr = NtcNr1.NTCNR_0X07C;
DiagcReg0Err.NtcTyp = 'Deb';
DiagcReg0Err.LongName = 'Diagnostic Register 0 Error';
DiagcReg0Err.Description = 'Power Supply Diagnostic Register 0 Error';
DiagcReg0Err.NtcStInfo = DataDict.NtcStInfoBitPacked;
DiagcReg0Err.NtcStInfo.Bit0Descr = 'V5B Under Voltage';
DiagcReg0Err.NtcStInfo.Bit1Descr = 'V5B Over Voltage';
DiagcReg0Err.NtcStInfo.Bit2Descr = 'V5P Under Voltage';
DiagcReg0Err.NtcStInfo.Bit3Descr = 'V5P Over Voltage';
DiagcReg0Err.NtcStInfo.Bit4Descr = 'V5CAN Under Voltage';
DiagcReg0Err.NtcStInfo.Bit5Descr = 'V5CAN Over Voltage';
DiagcReg0Err.NtcStInfo.Bit6Descr = 'V5A Under Voltage';
DiagcReg0Err.NtcStInfo.Bit7Descr = 'V5A Over Voltage';


DiagcReg1Err = DataDict.NTC;
DiagcReg1Err.NtcNr = NtcNr1.NTCNR_0X07B;
DiagcReg1Err.NtcTyp = 'Deb';
DiagcReg1Err.LongName = 'Diagnostic Register 1 Error';
DiagcReg1Err.Description = 'Power Supply Diagnostic Register 1 Error';
DiagcReg1Err.NtcStInfo = DataDict.NtcStInfoBitPacked;
DiagcReg1Err.NtcStInfo.Bit0Descr = 'Buck Under Voltage';
DiagcReg1Err.NtcStInfo.Bit1Descr = 'Buck Over Voltage';
DiagcReg1Err.NtcStInfo.Bit2Descr = '3V3 Under Voltage';
DiagcReg1Err.NtcStInfo.Bit3Descr = '3V3 Over Voltage';
DiagcReg1Err.NtcStInfo.Bit4Descr = 'VREG Under Voltage';
DiagcReg1Err.NtcStInfo.Bit5Descr = 'VREG Over Voltage';
DiagcReg1Err.NtcStInfo.Bit6Descr = 'Unused';
DiagcReg1Err.NtcStInfo.Bit7Descr = 'Unused';


SerlErr = DataDict.NTC;
SerlErr.NtcNr = NtcNr1.NTCNR_0X07D;
SerlErr.NtcTyp = 'Deb';
SerlErr.LongName = 'Serial Error';
SerlErr.Description = 'Power Supply Serial Error';
SerlErr.NtcStInfo = DataDict.NtcStInfoIdx;
SerlErr.NtcStInfo.Idx(1).EngVal = 1;
SerlErr.NtcStInfo.Idx(1).Descr = 'Serial Communication Loss';


StrtUpSelfTestReg0Err = DataDict.NTC;
StrtUpSelfTestReg0Err.NtcNr = NtcNr1.NTCNR_0X07E;
StrtUpSelfTestReg0Err.NtcTyp = 'Deb';
StrtUpSelfTestReg0Err.LongName = 'Verify Result Register 0 Error';
StrtUpSelfTestReg0Err.Description = 'Power Supply Start up Self Test Error';
StrtUpSelfTestReg0Err.NtcStInfo = DataDict.NtcStInfoBitPacked;
StrtUpSelfTestReg0Err.NtcStInfo.Bit0Descr = 'V5B UV Self Test Failed';
StrtUpSelfTestReg0Err.NtcStInfo.Bit1Descr = 'V5B OV Self Test Failed';
StrtUpSelfTestReg0Err.NtcStInfo.Bit2Descr = 'V5P UV Self Test Failed';
StrtUpSelfTestReg0Err.NtcStInfo.Bit3Descr = 'V5P OV Self Test Failed';
StrtUpSelfTestReg0Err.NtcStInfo.Bit4Descr = 'V5CAN UV Self Test Failed';
StrtUpSelfTestReg0Err.NtcStInfo.Bit5Descr = 'V5CAN OV Self Test Failed';
StrtUpSelfTestReg0Err.NtcStInfo.Bit6Descr = 'V5A UV Self Test Failed';
StrtUpSelfTestReg0Err.NtcStInfo.Bit7Descr = 'V5A OV Self Test Failed';


StrtUpSelfTestReg1Err = DataDict.NTC;
StrtUpSelfTestReg1Err.NtcNr = NtcNr1.NTCNR_0X07F;
StrtUpSelfTestReg1Err.NtcTyp = 'Deb';
StrtUpSelfTestReg1Err.LongName = 'Verify Result Register 1 Error';
StrtUpSelfTestReg1Err.Description = 'Power Supply Start up Self Test Error';
StrtUpSelfTestReg1Err.NtcStInfo = DataDict.NtcStInfoBitPacked;
StrtUpSelfTestReg1Err.NtcStInfo.Bit0Descr = 'BUCK UV Self Test Failed';
StrtUpSelfTestReg1Err.NtcStInfo.Bit1Descr = 'BUCK OV Self Test Failed';
StrtUpSelfTestReg1Err.NtcStInfo.Bit2Descr = '3V3 UV Self Test Failed';
StrtUpSelfTestReg1Err.NtcStInfo.Bit3Descr = '3V3 OV Self Test Failed';
StrtUpSelfTestReg1Err.NtcStInfo.Bit4Descr = 'VREG UV Self Test Failed';
StrtUpSelfTestReg1Err.NtcStInfo.Bit5Descr = 'VREG OV Self Test Failed';
StrtUpSelfTestReg1Err.NtcStInfo.Bit6Descr = 'Unused';
StrtUpSelfTestReg1Err.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
