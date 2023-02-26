%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 17-Jan-2017 10:41:10       %
%                                  Created with tool release: 2.52.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES011A = DataDict.FDD;
ES011A.Version = '1.3.x';
ES011A.LongName = 'Dual Ecu Identification';
ES011A.ShoName  = 'DualEcuIdn';
ES011A.DesignASIL = 'QM';
ES011A.Description = 'Identify ECU and Diagnostic';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DualEcuIdnInit1 = DataDict.Runnable;
DualEcuIdnInit1.Context = 'Rte';
DualEcuIdnInit1.TimeStep = 0;
DualEcuIdnInit1.Description = 'None';

DualEcuIdnPer1 = DataDict.Runnable;
DualEcuIdnPer1.Context = 'Rte';
DualEcuIdnPer1.TimeStep = 0.1;
DualEcuIdnPer1.Description = 'None';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetSigImcData_u08 = DataDict.Client;
GetSigImcData_u08.CallLocation = {'DualEcuIdnPer1'};
GetSigImcData_u08.Description = [...
  'Call to IMC Arbitrator to get the ECU Id requested'];
GetSigImcData_u08.Return = DataDict.CSReturn;
GetSigImcData_u08.Return.Type = 'Standard';
GetSigImcData_u08.Return.Min = 0;
GetSigImcData_u08.Return.Max = 1;
GetSigImcData_u08.Return.TestTolerance = 0;
GetSigImcData_u08.Return.Description = '';
GetSigImcData_u08.Arguments(1) = DataDict.CSArguments;
GetSigImcData_u08.Arguments(1).Name = 'SigId';
GetSigImcData_u08.Arguments(1).EngDT = dt.u16;
GetSigImcData_u08.Arguments(1).EngMin = 0;
GetSigImcData_u08.Arguments(1).EngMax = 65535;
GetSigImcData_u08.Arguments(1).Units = 'Cnt';
GetSigImcData_u08.Arguments(1).Direction = 'In';
GetSigImcData_u08.Arguments(1).InitRowCol = [1  1];
GetSigImcData_u08.Arguments(1).Description = 'SigId';
GetSigImcData_u08.Arguments(2) = DataDict.CSArguments;
GetSigImcData_u08.Arguments(2).Name = 'Data';
GetSigImcData_u08.Arguments(2).EngDT = dt.u08;
GetSigImcData_u08.Arguments(2).EngMin = 0;
GetSigImcData_u08.Arguments(2).EngMax = 255;
GetSigImcData_u08.Arguments(2).TestTolerance = 0;
GetSigImcData_u08.Arguments(2).Units = 'Cnt';
GetSigImcData_u08.Arguments(2).Direction = 'Out';
GetSigImcData_u08.Arguments(2).InitRowCol = [1  1];
GetSigImcData_u08.Arguments(2).Description = 'Data';
GetSigImcData_u08.Arguments(3) = DataDict.CSArguments;
GetSigImcData_u08.Arguments(3).Name = 'Sts';
GetSigImcData_u08.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_u08.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_u08.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_u08.Arguments(3).TestTolerance = 0;
GetSigImcData_u08.Arguments(3).Units = 'Cnt';
GetSigImcData_u08.Arguments(3).Direction = 'Out';
GetSigImcData_u08.Arguments(3).InitRowCol = [1  1];
GetSigImcData_u08.Arguments(3).Description = 'Status';


IoHwAb_GetGpioEcuIdnPin1 = DataDict.Client;
IoHwAb_GetGpioEcuIdnPin1.CallLocation = {'DualEcuIdnInit1'};
IoHwAb_GetGpioEcuIdnPin1.Description = 'EcuIdnPin1 GPIO Read';
IoHwAb_GetGpioEcuIdnPin1.Return = DataDict.CSReturn;
IoHwAb_GetGpioEcuIdnPin1.Return.Type = 'Standard';
IoHwAb_GetGpioEcuIdnPin1.Return.Min = 0;
IoHwAb_GetGpioEcuIdnPin1.Return.Max = 1;
IoHwAb_GetGpioEcuIdnPin1.Return.TestTolerance = 0;
IoHwAb_GetGpioEcuIdnPin1.Return.Description = 'EcuIdnPin1 GPIO Read';
IoHwAb_GetGpioEcuIdnPin1.Arguments(1) = DataDict.CSArguments;
IoHwAb_GetGpioEcuIdnPin1.Arguments(1).Name = 'PinSt';
IoHwAb_GetGpioEcuIdnPin1.Arguments(1).EngDT = dt.lgc;
IoHwAb_GetGpioEcuIdnPin1.Arguments(1).EngMin = 0;
IoHwAb_GetGpioEcuIdnPin1.Arguments(1).EngMax = 1;
IoHwAb_GetGpioEcuIdnPin1.Arguments(1).TestTolerance = 0;
IoHwAb_GetGpioEcuIdnPin1.Arguments(1).Units = 'Cnt';
IoHwAb_GetGpioEcuIdnPin1.Arguments(1).Direction = 'Out';
IoHwAb_GetGpioEcuIdnPin1.Arguments(1).InitRowCol = [1  1];
IoHwAb_GetGpioEcuIdnPin1.Arguments(1).Description = 'PinSt';


IoHwAb_GetGpioEcuIdnPin2 = DataDict.Client;
IoHwAb_GetGpioEcuIdnPin2.CallLocation = {'DualEcuIdnInit1'};
IoHwAb_GetGpioEcuIdnPin2.Description = 'EcuIdnPin2 GPIO Read';
IoHwAb_GetGpioEcuIdnPin2.Return = DataDict.CSReturn;
IoHwAb_GetGpioEcuIdnPin2.Return.Type = 'Standard';
IoHwAb_GetGpioEcuIdnPin2.Return.Min = 0;
IoHwAb_GetGpioEcuIdnPin2.Return.Max = 1;
IoHwAb_GetGpioEcuIdnPin2.Return.TestTolerance = 0;
IoHwAb_GetGpioEcuIdnPin2.Return.Description = 'EcuIdnPin2 GPIO Read';
IoHwAb_GetGpioEcuIdnPin2.Arguments(1) = DataDict.CSArguments;
IoHwAb_GetGpioEcuIdnPin2.Arguments(1).Name = 'PinSt';
IoHwAb_GetGpioEcuIdnPin2.Arguments(1).EngDT = dt.lgc;
IoHwAb_GetGpioEcuIdnPin2.Arguments(1).EngMin = 0;
IoHwAb_GetGpioEcuIdnPin2.Arguments(1).EngMax = 1;
IoHwAb_GetGpioEcuIdnPin2.Arguments(1).TestTolerance = 0;
IoHwAb_GetGpioEcuIdnPin2.Arguments(1).Units = 'Cnt';
IoHwAb_GetGpioEcuIdnPin2.Arguments(1).Direction = 'Out';
IoHwAb_GetGpioEcuIdnPin2.Arguments(1).InitRowCol = [1  1];
IoHwAb_GetGpioEcuIdnPin2.Arguments(1).Description = 'PinSt';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'DualEcuIdnPer1'};
SetNtcSts.Description = 'Set NTC Status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'None';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NTC Number';
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
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'NTC Status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Debounce Step';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EcuComTiOut = DataDict.IpSignal;
EcuComTiOut.LongName = 'Ecu Communication Time Out';
EcuComTiOut.Description = 'Ecu IMC Link is broken Timeout ';
EcuComTiOut.DocUnits = 'Cnt';
EcuComTiOut.EngDT = dt.lgc;
EcuComTiOut.EngInit = 0;
EcuComTiOut.EngMin = 0;
EcuComTiOut.EngMax = 1;
EcuComTiOut.ReadIn = {'DualEcuIdnPer1'};
EcuComTiOut.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
EcuId = DataDict.OpSignal;
EcuId.LongName = 'ECU Identifier';
EcuId.Description = [...
  'ECU Identifier of the ECU as an output'];
EcuId.DocUnits = 'Cnt';
EcuId.SwcShoName = 'DualEcuIdn';
EcuId.EngDT = dt.u08;
EcuId.EngInit = 0;
EcuId.EngMin = 0;
EcuId.EngMax = 3;
EcuId.TestTolerance = 0;
EcuId.WrittenIn = {'DualEcuIdnInit1'};
EcuId.WriteType = 'Rte';



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
EcuIdInt = DataDict.PIM;
EcuIdInt.LongName = 'Ecu Id Internal';
EcuIdInt.Description = [...
  'Ecu Identification Signal of the Same ECU'];
EcuIdInt.DocUnits = 'Cnt';
EcuIdInt.EngDT = dt.u08;
EcuIdInt.EngMin = 0;
EcuIdInt.EngMax = 3;
EcuIdInt.InitRowCol = [1  1];


EcuIdnEvlnCmpl = DataDict.PIM;
EcuIdnEvlnCmpl.LongName = 'ECU Identification Evaluation Complete';
EcuIdnEvlnCmpl.Description = [...
  'ECU Identification Evaluation Complete of the Self ECU (Primary ECU)'];
EcuIdnEvlnCmpl.DocUnits = 'Cnt';
EcuIdnEvlnCmpl.EngDT = dt.lgc;
EcuIdnEvlnCmpl.EngMin = 0;
EcuIdnEvlnCmpl.EngMax = 1;
EcuIdnEvlnCmpl.InitRowCol = [1  1];


SecdryEcuIdnReqTiOutCntr = DataDict.PIM;
SecdryEcuIdnReqTiOutCntr.LongName = 'Secondary ECU Identification Request Time Out Counter';
SecdryEcuIdnReqTiOutCntr.Description = [...
  'Counter used to increment its value every periodic until a threshold i' ...
  's reached after which the ECU stops requesting for Secondary ECU"s Id.' ...
  ''];
SecdryEcuIdnReqTiOutCntr.DocUnits = 'Cnt';
SecdryEcuIdnReqTiOutCntr.EngDT = dt.u08;
SecdryEcuIdnReqTiOutCntr.EngMin = 0;
SecdryEcuIdnReqTiOutCntr.EngMax = 10;
SecdryEcuIdnReqTiOutCntr.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ECUCOMTIOUTFLT_CNT_U08 = DataDict.Constant;
ECUCOMTIOUTFLT_CNT_U08.LongName = 'Ecu Communication Time Out Fault';
ECUCOMTIOUTFLT_CNT_U08.Description = 'Ecu Communication Time Out Fault';
ECUCOMTIOUTFLT_CNT_U08.DocUnits = 'Cnt';
ECUCOMTIOUTFLT_CNT_U08.EngDT = dt.u08;
ECUCOMTIOUTFLT_CNT_U08.EngVal = 64;
ECUCOMTIOUTFLT_CNT_U08.Define = 'Local';


ECUID1_CNT_U08 = DataDict.Constant;
ECUID1_CNT_U08.LongName = 'Ecu Identifier 1';
ECUID1_CNT_U08.Description = 'Ecu Identifier 1';
ECUID1_CNT_U08.DocUnits = 'Cnt';
ECUID1_CNT_U08.EngDT = dt.u08;
ECUID1_CNT_U08.EngVal = 1;
ECUID1_CNT_U08.Define = 'Local';


ECUID2_CNT_U08 = DataDict.Constant;
ECUID2_CNT_U08.LongName = 'Ecu Identifier 2';
ECUID2_CNT_U08.Description = 'Ecu Identifier 2';
ECUID2_CNT_U08.DocUnits = 'Cnt';
ECUID2_CNT_U08.EngDT = dt.u08;
ECUID2_CNT_U08.EngVal = 2;
ECUID2_CNT_U08.Define = 'Local';


ECUIDINVLD_CNT_U08 = DataDict.Constant;
ECUIDINVLD_CNT_U08.LongName = 'Ecu Identifier Invalid';
ECUIDINVLD_CNT_U08.Description = 'Ecu Invalid Constant';
ECUIDINVLD_CNT_U08.DocUnits = 'Cnt';
ECUIDINVLD_CNT_U08.EngDT = dt.u08;
ECUIDINVLD_CNT_U08.EngVal = 3;
ECUIDINVLD_CNT_U08.Define = 'Local';


IDENTCLECUIDNFLT_CNT_U08 = DataDict.Constant;
IDENTCLECUIDNFLT_CNT_U08.LongName = 'Identical ECU Identification Fault';
IDENTCLECUIDNFLT_CNT_U08.Description = 'Identical ECU Identification Fault';
IDENTCLECUIDNFLT_CNT_U08.DocUnits = 'Cnt';
IDENTCLECUIDNFLT_CNT_U08.EngDT = dt.u08;
IDENTCLECUIDNFLT_CNT_U08.EngVal = 1;
IDENTCLECUIDNFLT_CNT_U08.Define = 'Local';


IMCARBN_DUALECUIDNSECDRYECUIDN_CNT_U16 = DataDict.Constant;
IMCARBN_DUALECUIDNSECDRYECUIDN_CNT_U16.LongName = 'IMC Arbitration Dual ECU Identification Secondary ECU Id';
IMCARBN_DUALECUIDNSECDRYECUIDN_CNT_U16.Description = [...
  'Constant that is passed to the function GetSigImcData_s08 as an input.' ...
  ' Value of this constant does not matter.'];
IMCARBN_DUALECUIDNSECDRYECUIDN_CNT_U16.DocUnits = 'Cnt';
IMCARBN_DUALECUIDNSECDRYECUIDN_CNT_U16.EngDT = dt.u16;
IMCARBN_DUALECUIDNSECDRYECUIDN_CNT_U16.EngVal = 42;
IMCARBN_DUALECUIDNSECDRYECUIDN_CNT_U16.Define = 'Global';


PRIMECUIDNOTREADFLT_CNT_U08 = DataDict.Constant;
PRIMECUIDNOTREADFLT_CNT_U08.LongName = 'Primary ECU Identifier Not Read Fault';
PRIMECUIDNOTREADFLT_CNT_U08.Description = [...
  'Primary ECU Identifier Not Read Fault'];
PRIMECUIDNOTREADFLT_CNT_U08.DocUnits = 'Cnt';
PRIMECUIDNOTREADFLT_CNT_U08.EngDT = dt.u08;
PRIMECUIDNOTREADFLT_CNT_U08.EngVal = 8;
PRIMECUIDNOTREADFLT_CNT_U08.Define = 'Local';


PRIMECUINVLDIDFLT_CNT_U08 = DataDict.Constant;
PRIMECUINVLDIDFLT_CNT_U08.LongName = 'Primary ECU Invalid Identifier Fault';
PRIMECUINVLDIDFLT_CNT_U08.Description = [...
  'Primary ECU Invalid Identifier Fault'];
PRIMECUINVLDIDFLT_CNT_U08.DocUnits = 'Cnt';
PRIMECUINVLDIDFLT_CNT_U08.EngDT = dt.u08;
PRIMECUINVLDIDFLT_CNT_U08.EngVal = 2;
PRIMECUINVLDIDFLT_CNT_U08.Define = 'Local';


SECDRYECUIDNOTREADFLT_CNT_U08 = DataDict.Constant;
SECDRYECUIDNOTREADFLT_CNT_U08.LongName = 'Secondary ECU Identifier Not Read Fault';
SECDRYECUIDNOTREADFLT_CNT_U08.Description = [...
  'Secondary ECU Identifier Not Read Fault'];
SECDRYECUIDNOTREADFLT_CNT_U08.DocUnits = 'Cnt';
SECDRYECUIDNOTREADFLT_CNT_U08.EngDT = dt.u08;
SECDRYECUIDNOTREADFLT_CNT_U08.EngVal = 16;
SECDRYECUIDNOTREADFLT_CNT_U08.Define = 'Local';


SECDRYECUIDNREQTIOUTVAL_CNT_U08 = DataDict.Constant;
SECDRYECUIDNREQTIOUTVAL_CNT_U08.LongName = 'Secondary ECU Identification Request Time Out Value';
SECDRYECUIDNREQTIOUTVAL_CNT_U08.Description = [...
  'Secondary ECU Identification Request Time Out Value'];
SECDRYECUIDNREQTIOUTVAL_CNT_U08.DocUnits = 'Cnt';
SECDRYECUIDNREQTIOUTVAL_CNT_U08.EngDT = dt.u08;
SECDRYECUIDNREQTIOUTVAL_CNT_U08.EngVal = 10;
SECDRYECUIDNREQTIOUTVAL_CNT_U08.Define = 'Local';


SECDRYECUINVLDIDFLT_CNT_U08 = DataDict.Constant;
SECDRYECUINVLDIDFLT_CNT_U08.LongName = 'Secondary ECU Invalid Identifier Fault';
SECDRYECUINVLDIDFLT_CNT_U08.Description = [...
  'Secondary ECU Invalid Identifier Fault'];
SECDRYECUINVLDIDFLT_CNT_U08.DocUnits = 'Cnt';
SECDRYECUINVLDIDFLT_CNT_U08.EngDT = dt.u08;
SECDRYECUINVLDIDFLT_CNT_U08.EngVal = 4;
SECDRYECUINVLDIDFLT_CNT_U08.Define = 'Local';


SECDRYECUREQIDTIOUTFLT_CNT_U08 = DataDict.Constant;
SECDRYECUREQIDTIOUTFLT_CNT_U08.LongName = 'Secondary Ecu Request Identifier Time Out Fault';
SECDRYECUREQIDTIOUTFLT_CNT_U08.Description = [...
  'Secondary Ecu Request Identifier Time Out Fault'];
SECDRYECUREQIDTIOUTFLT_CNT_U08.DocUnits = 'Cnt';
SECDRYECUREQIDTIOUTFLT_CNT_U08.EngDT = dt.u08;
SECDRYECUREQIDTIOUTFLT_CNT_U08.EngVal = 32;
SECDRYECUREQIDTIOUTFLT_CNT_U08.Define = 'Local';


VLDECUID_CNT_U08 = DataDict.Constant;
VLDECUID_CNT_U08.LongName = 'Valid Ecu Identifier';
VLDECUID_CNT_U08.Description = 'Valid Ecu Identifier';
VLDECUID_CNT_U08.DocUnits = 'Cnt';
VLDECUID_CNT_U08.EngDT = dt.u08;
VLDECUID_CNT_U08.EngVal = 0;
VLDECUID_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
EcuIdnFlt = DataDict.NTC;
EcuIdnFlt.NtcNr = NtcNr1.NTCNR_0X0B9;
EcuIdnFlt.NtcTyp = 'None';
EcuIdnFlt.LongName = 'ECU Identification Fault';
EcuIdnFlt.Description = 'ECU Identificaiton Fault. Fault is set when either Primary or Secondary ECU Id is not read/identified.';
EcuIdnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
EcuIdnFlt.NtcStInfo.Bit0Descr = 'Identical ECU Identification Fault';
EcuIdnFlt.NtcStInfo.Bit1Descr = 'Primary ECU Invalid Identifier Fault';
EcuIdnFlt.NtcStInfo.Bit2Descr = 'Secondary ECU Invalid Identifier Fault';
EcuIdnFlt.NtcStInfo.Bit3Descr = 'Primary ECU Identifier Not Read Fault';
EcuIdnFlt.NtcStInfo.Bit4Descr = 'Secondary ECU Identifier Not Read Fault';
EcuIdnFlt.NtcStInfo.Bit5Descr = 'Secondary Ecu Request Identifier Time Out Fault';
EcuIdnFlt.NtcStInfo.Bit6Descr = 'Ecu Communication Time Out Fault';
EcuIdnFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
