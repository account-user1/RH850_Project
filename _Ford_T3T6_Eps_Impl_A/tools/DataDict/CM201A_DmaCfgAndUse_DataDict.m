%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 07-Dec-2017 11:06:07       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 4 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM201A = DataDict.FDD;
CM201A.Version = '1.2.X';
CM201A.LongName = 'DMA Configuration And Usage';
CM201A.ShoName  = 'DmaCfgAndUse';
CM201A.DesignASIL = 'D';
CM201A.Description = 'DMA Configuration and Usage';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DmaCfgAndUseInit1 = DataDict.Runnable;
DmaCfgAndUseInit1.Context = 'Rte';
DmaCfgAndUseInit1.TimeStep = 0;
DmaCfgAndUseInit1.Description = 'Initialize DMAC peripherial registers';

DmaCfgAndUsePer1 = DataDict.Runnable;
DmaCfgAndUsePer1.Context = 'Rte';
DmaCfgAndUsePer1.TimeStep = 0.002;
DmaCfgAndUsePer1.Description = 'Trigger ADCD1 conversion and enable DMAC1-6';

DmaEna2MilliSecToMotCtrlTrf = DataDict.SrvRunnable;
DmaEna2MilliSecToMotCtrlTrf.Context = 'Rte';
DmaEna2MilliSecToMotCtrlTrf.Description = 'Enable DMAC1-1 transfer';
DmaEna2MilliSecToMotCtrlTrf.Return = DataDict.CSReturn;
DmaEna2MilliSecToMotCtrlTrf.Return.Type = 'None';
DmaEna2MilliSecToMotCtrlTrf.Return.Min = [];
DmaEna2MilliSecToMotCtrlTrf.Return.Max = [];
DmaEna2MilliSecToMotCtrlTrf.Return.TestTolerance = [];

DmaWaitForMotCtrlTo2MilliSecTrf = DataDict.SrvRunnable;
DmaWaitForMotCtrlTo2MilliSecTrf.Context = 'Rte';
DmaWaitForMotCtrlTo2MilliSecTrf.Description = 'Wait for DMAC1-7 transfer complete';
DmaWaitForMotCtrlTo2MilliSecTrf.Return = DataDict.CSReturn;
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Type = 'Standard';
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Min = 0;
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Max = 1;
DmaWaitForMotCtrlTo2MilliSecTrf.Return.TestTolerance = [];
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Description = 'AUTOSAR Return Type value';

InjDmaErr = DataDict.SrvRunnable;
InjDmaErr.Context = 'NonRte';
InjDmaErr.Description = '';
InjDmaErr.Return = DataDict.CSReturn;
InjDmaErr.Return.Type = 'None';
InjDmaErr.Return.Min = [];
InjDmaErr.Return.Max = [];
InjDmaErr.Return.TestTolerance = [];

InjMcuDiagcErr = DataDict.SrvRunnable;
InjMcuDiagcErr.Context = 'NonRte';
InjMcuDiagcErr.Description = '';
InjMcuDiagcErr.Return = DataDict.CSReturn;
InjMcuDiagcErr.Return.Type = 'None';
InjMcuDiagcErr.Return.Min = [];
InjMcuDiagcErr.Return.Max = [];
InjMcuDiagcErr.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
Adc1CfgAndUseAdc1EnaCnvn = DataDict.Client;
Adc1CfgAndUseAdc1EnaCnvn.CallLocation = {'DmaCfgAndUsePer1'};
Adc1CfgAndUseAdc1EnaCnvn.Description = '';
Adc1CfgAndUseAdc1EnaCnvn.Return = DataDict.CSReturn;
Adc1CfgAndUseAdc1EnaCnvn.Return.Type = 'None';
Adc1CfgAndUseAdc1EnaCnvn.Return.Min = [];
Adc1CfgAndUseAdc1EnaCnvn.Return.Max = [];
Adc1CfgAndUseAdc1EnaCnvn.Return.TestTolerance = [];


ClrErrInjReg = DataDict.Client;
ClrErrInjReg.CallLocation = {'InjDmaErr','InjMcuDiagcErr'};
ClrErrInjReg.Description = 'Clear BRAMDAT2';
ClrErrInjReg.Return = DataDict.CSReturn;
ClrErrInjReg.Return.Type = 'None';
ClrErrInjReg.Return.Min = [];
ClrErrInjReg.Return.Max = [];
ClrErrInjReg.Return.TestTolerance = [];


GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'DmaCfgAndUsePer1'};
GetRefTmr1MicroSec32bit.Description = '';
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
GetTiSpan1MicroSec32bit.CallLocation = {'DmaWaitForMotCtrlTo2MilliSecTrf'};
GetTiSpan1MicroSec32bit.Description = '';
GetTiSpan1MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan1MicroSec32bit.Return.Type = 'Standard';
GetTiSpan1MicroSec32bit.Return.Min = 0;
GetTiSpan1MicroSec32bit.Return.Max = 1;
GetTiSpan1MicroSec32bit.Return.TestTolerance = 0;
GetTiSpan1MicroSec32bit.Return.Description = '';
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


ReadErrInjReg = DataDict.Client;
ReadErrInjReg.CallLocation = {'DmaEna2MilliSecToMotCtrlTrf','InjDmaErr','InjMcuDiagcErr'};
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
ReadErrInjReg.Arguments(1).TestTolerance = 999;
ReadErrInjReg.Arguments(1).Units = 'Cnt';
ReadErrInjReg.Arguments(1).Direction = 'Out';
ReadErrInjReg.Arguments(1).InitRowCol = [1  1];
ReadErrInjReg.Arguments(1).Description = 'None';


StrtErrInjCntr = DataDict.Client;
StrtErrInjCntr.CallLocation = {'DmaEna2MilliSecToMotCtrlTrf'};
StrtErrInjCntr.Description = 'Start Error Injection Counter';
StrtErrInjCntr.Return = DataDict.CSReturn;
StrtErrInjCntr.Return.Type = 'None';
StrtErrInjCntr.Return.Min = [];
StrtErrInjCntr.Return.Max = [];
StrtErrInjCntr.Return.TestTolerance = [];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DmaAdc0ResTrig = DataDict.IpSignal;
DmaAdc0ResTrig.LongName = 'DMA Adc0 Results Trigger';
DmaAdc0ResTrig.Description = '';
DmaAdc0ResTrig.DocUnits = 'Cnt';
DmaAdc0ResTrig.EngDT = dt.lgc;
DmaAdc0ResTrig.EngInit = 0;
DmaAdc0ResTrig.EngMin = 0;
DmaAdc0ResTrig.EngMax = 1;
DmaAdc0ResTrig.ReadIn = {'DmaCfgAndUseInit1'};
DmaAdc0ResTrig.ReadType = 'Phy';


DmaAdc1ResTrig = DataDict.IpSignal;
DmaAdc1ResTrig.LongName = 'DMA Adc1 Results Trigger';
DmaAdc1ResTrig.Description = '';
DmaAdc1ResTrig.DocUnits = 'Cnt';
DmaAdc1ResTrig.EngDT = dt.lgc;
DmaAdc1ResTrig.EngInit = 0;
DmaAdc1ResTrig.EngMin = 0;
DmaAdc1ResTrig.EngMax = 1;
DmaAdc1ResTrig.ReadIn = {'DmaCfgAndUseInit1'};
DmaAdc1ResTrig.ReadType = 'Phy';


DmaTwoMiliSecToMotCtrlTrig = DataDict.IpSignal;
DmaTwoMiliSecToMotCtrlTrig.LongName = 'DMA Two Milisceconds to Motor Control Manager Trigger';
DmaTwoMiliSecToMotCtrlTrig.Description = '';
DmaTwoMiliSecToMotCtrlTrig.DocUnits = 'Cnt';
DmaTwoMiliSecToMotCtrlTrig.EngDT = dt.lgc;
DmaTwoMiliSecToMotCtrlTrig.EngInit = 0;
DmaTwoMiliSecToMotCtrlTrig.EngMin = 0;
DmaTwoMiliSecToMotCtrlTrig.EngMax = 1;
DmaTwoMiliSecToMotCtrlTrig.ReadIn = {'DmaCfgAndUseInit1'};
DmaTwoMiliSecToMotCtrlTrig.ReadType = 'Phy';


MotCtrlMgr_MotCtrlToTwoMilliSec_Rec = DataDict.IpSignal;
MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.LongName = 'Motor Control Manager 2ms to Motor Control Record';
MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.Description = '';
MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.DocUnits = 'Cnt';
MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.EngDT = struct.MotCtrlToTwoMilliSecRec1;
MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.EngInit = [];
MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.EngMin = 0;
MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.EngMax = 0;
MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.ReadIn = {'DmaCfgAndUseInit1'};
MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.ReadType = 'NonRte';


MotCtrlMgr_TwoMilliSecToMotCtrl_Rec = DataDict.IpSignal;
MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.LongName = 'Motor Control Manager 2ms to Motor Control Record';
MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.Description = '';
MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.DocUnits = 'Cnt';
MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.EngDT = struct.TwoMilliSecToMotCtrlRec1;
MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.EngInit = [];
MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.EngMin = 0;
MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.EngMax = 0;
MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadIn = {'DmaCfgAndUseInit1'};
MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCtrlAdc0RawRes = DataDict.OpSignal;
MotCtrlAdc0RawRes.LongName = 'Motor Control ADC 0 Raw Result';
MotCtrlAdc0RawRes.Description = 'DMA ADC 0 Raw Destination Address';
MotCtrlAdc0RawRes.DocUnits = 'Cnt';
MotCtrlAdc0RawRes.SwcShoName = 'DmaCfgAndUse';
MotCtrlAdc0RawRes.EngDT = dt.u16;
MotCtrlAdc0RawRes.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
MotCtrlAdc0RawRes.EngMin = 0;
MotCtrlAdc0RawRes.EngMax = 4095;
MotCtrlAdc0RawRes.TestTolerance = 0;
MotCtrlAdc0RawRes.WrittenIn = {'DmaCfgAndUseInit1'};
MotCtrlAdc0RawRes.WriteType = 'NonRte';


MotCtrlAdc1RawRes = DataDict.OpSignal;
MotCtrlAdc1RawRes.LongName = 'Motor Control ADC 1 Raw Result';
MotCtrlAdc1RawRes.Description = 'Motor Control ADC 1 Destination';
MotCtrlAdc1RawRes.DocUnits = 'Cnt';
MotCtrlAdc1RawRes.SwcShoName = 'DmaCfgAndUse';
MotCtrlAdc1RawRes.EngDT = dt.u16;
MotCtrlAdc1RawRes.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
MotCtrlAdc1RawRes.EngMin = 0;
MotCtrlAdc1RawRes.EngMax = 4095;
MotCtrlAdc1RawRes.TestTolerance = 0;
MotCtrlAdc1RawRes.WrittenIn = {'DmaCfgAndUseInit1'};
MotCtrlAdc1RawRes.WriteType = 'NonRte';


MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec = DataDict.OpSignal;
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.LongName = 'Motor Control Mgr Motor Control from 2ms';
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.Description = 'Motor Control from 2ms ';
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.DocUnits = 'Cnt';
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.SwcShoName = 'DmaCfgAndUse';
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.EngDT = struct.MotCtrlFromTwoMilliSecRec1;
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.EngInit = [];
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.EngMin = 0;
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.EngMax = 0;
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.TestTolerance = 0;
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.WrittenIn = {'DmaCfgAndUseInit1'};
MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.WriteType = 'NonRte';


MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec = DataDict.OpSignal;
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.LongName = 'Motor Control Mgr 2ms from Motor Control';
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.Description = '2ms from Motor Control';
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.DocUnits = 'Cnt';
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.SwcShoName = 'DmaCfgAndUse';
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.EngDT = struct.TwoMilliSecFromMotCtrlRec1;
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.EngInit = [];
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.EngMin = 0;
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.EngMax = 0;
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.TestTolerance = 0;
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WrittenIn = {'DmaCfgAndUseInit1'};
MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteType = 'NonRte';



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
d2MilliSecAdcActDmaTrfTi = DataDict.Display;
d2MilliSecAdcActDmaTrfTi.LongName = '2ms ADC Actual Dma Transfer time';
d2MilliSecAdcActDmaTrfTi.Description = [...
  'Display variable used to help understand the Actual Dma Transfer time'];
d2MilliSecAdcActDmaTrfTi.DocUnits = 'Cnt';
d2MilliSecAdcActDmaTrfTi.EngDT = dt.u32;
d2MilliSecAdcActDmaTrfTi.EngMin = 0;
d2MilliSecAdcActDmaTrfTi.EngMax = 4294967295;
d2MilliSecAdcActDmaTrfTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi = DataDict.PIM;
DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi.LongName = 'Dma Configuration and Use 2ms ADC Maximum Dma Transfer time';
DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi.Description = [...
  'PIM used to hold the Maximum Dma Transfer time'];
DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi.DocUnits = 'Cnt';
DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi.EngDT = dt.u32;
DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi.EngMin = 0;
DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi.EngMax = 4294967295;
DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi.InitRowCol = [1  1];


DmaCfgAndUse2MilliSecAdcStrtTi = DataDict.PIM;
DmaCfgAndUse2MilliSecAdcStrtTi.LongName = 'Dma Configuration and Use 2ms ADC Start Time';
DmaCfgAndUse2MilliSecAdcStrtTi.Description = 'ADC Conversion transfer start time';
DmaCfgAndUse2MilliSecAdcStrtTi.DocUnits = 'Cnt';
DmaCfgAndUse2MilliSecAdcStrtTi.EngDT = dt.u32;
DmaCfgAndUse2MilliSecAdcStrtTi.EngMin = 0;
DmaCfgAndUse2MilliSecAdcStrtTi.EngMax = 4294967295;
DmaCfgAndUse2MilliSecAdcStrtTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
DMACFGANDUSE_MAXWAIT_MICROSEC_U32 = DataDict.Constant;
DMACFGANDUSE_MAXWAIT_MICROSEC_U32.LongName = 'Max Wait';
DMACFGANDUSE_MAXWAIT_MICROSEC_U32.Description = [...
  'Max wait time allowed for ADC transfer Complete '];
DMACFGANDUSE_MAXWAIT_MICROSEC_U32.DocUnits = 'Cnt';
DMACFGANDUSE_MAXWAIT_MICROSEC_U32.EngDT = dt.u32;
DMACFGANDUSE_MAXWAIT_MICROSEC_U32.EngVal = 400;
DMACFGANDUSE_MAXWAIT_MICROSEC_U32.Define = 'Local';


E_NOT_OK = DataDict.Constant;
E_NOT_OK.LongName = 'E Not Ok';
E_NOT_OK.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
E_NOT_OK.DocUnits = 'Cnt';
E_NOT_OK.EngDT = dt.u08;
E_NOT_OK.EngVal = 1;
E_NOT_OK.Define = 'Global';


E_OK = DataDict.Constant;
E_OK.LongName = 'E Ok';
E_OK.Description = [...
  'AUTOSAR Standard Return Type OK value'];
E_OK.DocUnits = 'Cnt';
E_OK.EngDT = dt.u08;
E_OK.EngVal = 0;
E_OK.Define = 'Global';


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


MCUERRINJ_NTC002BBIT00CASE01_CNT_U32 = DataDict.Constant;
MCUERRINJ_NTC002BBIT00CASE01_CNT_U32.LongName = 'MCU Error Injeciton - NTC 0x002B Bit 0 Case 1';
MCUERRINJ_NTC002BBIT00CASE01_CNT_U32.Description = [...
  'MCU Error Injeciton - NTC 0x002B Bit 0 Case 1'];
MCUERRINJ_NTC002BBIT00CASE01_CNT_U32.DocUnits = 'Cnt';
MCUERRINJ_NTC002BBIT00CASE01_CNT_U32.EngDT = dt.u32;
MCUERRINJ_NTC002BBIT00CASE01_CNT_U32.EngVal = 2818305;
MCUERRINJ_NTC002BBIT00CASE01_CNT_U32.Define = 'Global';


MCUERRINJ_NTC002BBIT01CASE01_CNT_U32 = DataDict.Constant;
MCUERRINJ_NTC002BBIT01CASE01_CNT_U32.LongName = 'MCU Error Injeciton - NTC 0x002B Bit 1 Case 1';
MCUERRINJ_NTC002BBIT01CASE01_CNT_U32.Description = [...
  'MCU Error Injeciton - NTC 0x002B Bit 1 Case 1'];
MCUERRINJ_NTC002BBIT01CASE01_CNT_U32.DocUnits = 'Cnt';
MCUERRINJ_NTC002BBIT01CASE01_CNT_U32.EngDT = dt.u32;
MCUERRINJ_NTC002BBIT01CASE01_CNT_U32.EngVal = 2818561;
MCUERRINJ_NTC002BBIT01CASE01_CNT_U32.Define = 'Global';


MCUERRINJ_NTC0036BIT00CASE01_CNT_U32 = DataDict.Constant;
MCUERRINJ_NTC0036BIT00CASE01_CNT_U32.LongName = 'MCU Error Injeciton - NTC 0x0036 Bit 0 Case 1';
MCUERRINJ_NTC0036BIT00CASE01_CNT_U32.Description = [...
  'MCU Error Injeciton - NTC 0x0036 Bit 0 Case 1'];
MCUERRINJ_NTC0036BIT00CASE01_CNT_U32.DocUnits = 'Cnt';
MCUERRINJ_NTC0036BIT00CASE01_CNT_U32.EngDT = dt.u32;
MCUERRINJ_NTC0036BIT00CASE01_CNT_U32.EngVal = 3539201;
MCUERRINJ_NTC0036BIT00CASE01_CNT_U32.Define = 'Global';


MCUERRINJ_NTC0036BIT01CASE01_CNT_U32 = DataDict.Constant;
MCUERRINJ_NTC0036BIT01CASE01_CNT_U32.LongName = 'MCU Error Injeciton - NTC 0x0036 Bit 1 Case 1';
MCUERRINJ_NTC0036BIT01CASE01_CNT_U32.Description = [...
  'MCU Error Injeciton - NTC 0x0036 Bit 1 Case 1'];
MCUERRINJ_NTC0036BIT01CASE01_CNT_U32.DocUnits = 'Cnt';
MCUERRINJ_NTC0036BIT01CASE01_CNT_U32.EngDT = dt.u32;
MCUERRINJ_NTC0036BIT01CASE01_CNT_U32.EngVal = 3539457;
MCUERRINJ_NTC0036BIT01CASE01_CNT_U32.Define = 'Global';


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
%end of Data Dictionary
