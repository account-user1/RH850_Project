%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 15-Jun-2017 20:10:08       %
%                                  Created with tool release: 2.56.0     %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM101B = DataDict.FDD;
CM101B.Version = '1.3.X';
CM101B.LongName = 'Exception Handling';
CM101B.ShoName  = 'ExcpnHndlg';
CM101B.DesignASIL = 'D';
CM101B.Description = [...
  'Handles exceptions, FE server functions and sets pre OS start up fault' ...
  's'];


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
AlgnErrIrq = DataDict.Runnable;
AlgnErrIrq.Context = 'NonRte';
AlgnErrIrq.TimeStep = 'ISR';
AlgnErrIrq.Description = 'None';

ExcpnHndlgInit1 = DataDict.Runnable;
ExcpnHndlgInit1.Context = 'NonRte';
ExcpnHndlgInit1.TimeStep = 0;
ExcpnHndlgInit1.Description = 'None';

ExcpnHndlgInit2 = DataDict.Runnable;
ExcpnHndlgInit2.Context = 'Rte';
ExcpnHndlgInit2.TimeStep = 0;
ExcpnHndlgInit2.Description = 'None';

ExcpnHndlgPer1 = DataDict.Runnable;
ExcpnHndlgPer1.Context = 'Rte';
ExcpnHndlgPer1.TimeStep = 0.002;
ExcpnHndlgPer1.Description = 'None';

FpuErrIrq = DataDict.Runnable;
FpuErrIrq.Context = 'NonRte';
FpuErrIrq.TimeStep = 'ISR';
FpuErrIrq.Description = 'None';

ResdOperIrq = DataDict.Runnable;
ResdOperIrq.Context = 'NonRte';
ResdOperIrq.TimeStep = 'ISR';
ResdOperIrq.Description = 'None';

SysErrIrq = DataDict.Runnable;
SysErrIrq.Context = 'NonRte';
SysErrIrq.TimeStep = 'ISR';
SysErrIrq.Description = 'None';

ChkForStrtUpTest = DataDict.SrvRunnable;
ChkForStrtUpTest.Context = 'Both';
ChkForStrtUpTest.Description = 'None';
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
ChkForStrtUpTest.Arguments(1).Description = 'None';

FeNmiBusBrdgErr = DataDict.SrvRunnable;
FeNmiBusBrdgErr.Context = 'NonRte';
FeNmiBusBrdgErr.Description = 'None';
FeNmiBusBrdgErr.Return = DataDict.CSReturn;
FeNmiBusBrdgErr.Return.Type = 'None';
FeNmiBusBrdgErr.Return.Min = [];
FeNmiBusBrdgErr.Return.Max = [];
FeNmiBusBrdgErr.Return.TestTolerance = [];

FeNmiBusSngBitEccErr = DataDict.SrvRunnable;
FeNmiBusSngBitEccErr.Context = 'NonRte';
FeNmiBusSngBitEccErr.Description = 'None';
FeNmiBusSngBitEccErr.Return = DataDict.CSReturn;
FeNmiBusSngBitEccErr.Return.Type = 'None';
FeNmiBusSngBitEccErr.Return.Min = [];
FeNmiBusSngBitEccErr.Return.Max = [];
FeNmiBusSngBitEccErr.Return.TestTolerance = [];

FeNmiClkMonr0RtErr = DataDict.SrvRunnable;
FeNmiClkMonr0RtErr.Context = 'NonRte';
FeNmiClkMonr0RtErr.Description = 'Clock Monitor 0 Error';
FeNmiClkMonr0RtErr.Return = DataDict.CSReturn;
FeNmiClkMonr0RtErr.Return.Type = 'None';
FeNmiClkMonr0RtErr.Return.Min = [];
FeNmiClkMonr0RtErr.Return.Max = [];
FeNmiClkMonr0RtErr.Return.TestTolerance = [];

FeNmiClkMonr1RtErr = DataDict.SrvRunnable;
FeNmiClkMonr1RtErr.Context = 'NonRte';
FeNmiClkMonr1RtErr.Description = 'Clock Monitor 1 Error';
FeNmiClkMonr1RtErr.Return = DataDict.CSReturn;
FeNmiClkMonr1RtErr.Return.Type = 'None';
FeNmiClkMonr1RtErr.Return.Min = [];
FeNmiClkMonr1RtErr.Return.Max = [];
FeNmiClkMonr1RtErr.Return.TestTolerance = [];

FeNmiClkMonr2RtErr = DataDict.SrvRunnable;
FeNmiClkMonr2RtErr.Context = 'NonRte';
FeNmiClkMonr2RtErr.Description = 'Clock Monitor 2 Error';
FeNmiClkMonr2RtErr.Return = DataDict.CSReturn;
FeNmiClkMonr2RtErr.Return.Type = 'None';
FeNmiClkMonr2RtErr.Return.Min = [];
FeNmiClkMonr2RtErr.Return.Max = [];
FeNmiClkMonr2RtErr.Return.TestTolerance = [];

FeNmiClkMonr3RtErr = DataDict.SrvRunnable;
FeNmiClkMonr3RtErr.Context = 'NonRte';
FeNmiClkMonr3RtErr.Description = 'Clock Monitor 3 Error';
FeNmiClkMonr3RtErr.Return = DataDict.CSReturn;
FeNmiClkMonr3RtErr.Return.Type = 'None';
FeNmiClkMonr3RtErr.Return.Min = [];
FeNmiClkMonr3RtErr.Return.Max = [];
FeNmiClkMonr3RtErr.Return.TestTolerance = [];

FeNmiClkMonr5RtErr = DataDict.SrvRunnable;
FeNmiClkMonr5RtErr.Context = 'NonRte';
FeNmiClkMonr5RtErr.Description = 'Clock Monitor 5 Error';
FeNmiClkMonr5RtErr.Return = DataDict.CSReturn;
FeNmiClkMonr5RtErr.Return.Type = 'None';
FeNmiClkMonr5RtErr.Return.Min = [];
FeNmiClkMonr5RtErr.Return.Max = [];
FeNmiClkMonr5RtErr.Return.TestTolerance = [];

FeNmiCodFlsEccAdrOvfErr = DataDict.SrvRunnable;
FeNmiCodFlsEccAdrOvfErr.Context = 'NonRte';
FeNmiCodFlsEccAdrOvfErr.Description = 'None';
FeNmiCodFlsEccAdrOvfErr.Return = DataDict.CSReturn;
FeNmiCodFlsEccAdrOvfErr.Return.Type = 'None';
FeNmiCodFlsEccAdrOvfErr.Return.Min = [];
FeNmiCodFlsEccAdrOvfErr.Return.Max = [];
FeNmiCodFlsEccAdrOvfErr.Return.TestTolerance = [];

FeNmiCodFlsIllglAcsBySysBus = DataDict.SrvRunnable;
FeNmiCodFlsIllglAcsBySysBus.Context = 'NonRte';
FeNmiCodFlsIllglAcsBySysBus.Description = 'None';
FeNmiCodFlsIllglAcsBySysBus.Return = DataDict.CSReturn;
FeNmiCodFlsIllglAcsBySysBus.Return.Type = 'None';
FeNmiCodFlsIllglAcsBySysBus.Return.Min = [];
FeNmiCodFlsIllglAcsBySysBus.Return.Max = [];
FeNmiCodFlsIllglAcsBySysBus.Return.TestTolerance = [];

FeNmiDmaIllglAcsErr = DataDict.SrvRunnable;
FeNmiDmaIllglAcsErr.Context = 'NonRte';
FeNmiDmaIllglAcsErr.Description = 'None';
FeNmiDmaIllglAcsErr.Return = DataDict.CSReturn;
FeNmiDmaIllglAcsErr.Return.Type = 'None';
FeNmiDmaIllglAcsErr.Return.Min = [];
FeNmiDmaIllglAcsErr.Return.Max = [];
FeNmiDmaIllglAcsErr.Return.TestTolerance = [];

FeNmiDmaLockStepErrOrGblRamWrBufErr = DataDict.SrvRunnable;
FeNmiDmaLockStepErrOrGblRamWrBufErr.Context = 'NonRte';
FeNmiDmaLockStepErrOrGblRamWrBufErr.Description = 'None';
FeNmiDmaLockStepErrOrGblRamWrBufErr.Return = DataDict.CSReturn;
FeNmiDmaLockStepErrOrGblRamWrBufErr.Return.Type = 'None';
FeNmiDmaLockStepErrOrGblRamWrBufErr.Return.Min = [];
FeNmiDmaLockStepErrOrGblRamWrBufErr.Return.Max = [];
FeNmiDmaLockStepErrOrGblRamWrBufErr.Return.TestTolerance = [];

FeNmiDmaTrfErr = DataDict.SrvRunnable;
FeNmiDmaTrfErr.Context = 'NonRte';
FeNmiDmaTrfErr.Description = 'DMA Transfer Error';
FeNmiDmaTrfErr.Return = DataDict.CSReturn;
FeNmiDmaTrfErr.Return.Type = 'None';
FeNmiDmaTrfErr.Return.Min = [];
FeNmiDmaTrfErr.Return.Max = [];
FeNmiDmaTrfErr.Return.TestTolerance = [];

FeNmiDtsRamDblBitEccErr = DataDict.SrvRunnable;
FeNmiDtsRamDblBitEccErr.Context = 'NonRte';
FeNmiDtsRamDblBitEccErr.Description = 'None';
FeNmiDtsRamDblBitEccErr.Return = DataDict.CSReturn;
FeNmiDtsRamDblBitEccErr.Return.Type = 'None';
FeNmiDtsRamDblBitEccErr.Return.Min = [];
FeNmiDtsRamDblBitEccErr.Return.Max = [];
FeNmiDtsRamDblBitEccErr.Return.TestTolerance = [];

FeNmiEcmMstChkrErr = DataDict.SrvRunnable;
FeNmiEcmMstChkrErr.Context = 'NonRte';
FeNmiEcmMstChkrErr.Description = 'None';
FeNmiEcmMstChkrErr.Return = DataDict.CSReturn;
FeNmiEcmMstChkrErr.Return.Type = 'None';
FeNmiEcmMstChkrErr.Return.Min = [];
FeNmiEcmMstChkrErr.Return.Max = [];
FeNmiEcmMstChkrErr.Return.TestTolerance = [];

FeNmiFlsSeqErr = DataDict.SrvRunnable;
FeNmiFlsSeqErr.Context = 'NonRte';
FeNmiFlsSeqErr.Description = 'None';
FeNmiFlsSeqErr.Return = DataDict.CSReturn;
FeNmiFlsSeqErr.Return.Type = 'None';
FeNmiFlsSeqErr.Return.Min = [];
FeNmiFlsSeqErr.Return.Max = [];
FeNmiFlsSeqErr.Return.TestTolerance = [];

FeNmiGblRamIllglAcsByProcr = DataDict.SrvRunnable;
FeNmiGblRamIllglAcsByProcr.Context = 'NonRte';
FeNmiGblRamIllglAcsByProcr.Description = 'None';
FeNmiGblRamIllglAcsByProcr.Return = DataDict.CSReturn;
FeNmiGblRamIllglAcsByProcr.Return.Type = 'None';
FeNmiGblRamIllglAcsByProcr.Return.Min = [];
FeNmiGblRamIllglAcsByProcr.Return.Max = [];
FeNmiGblRamIllglAcsByProcr.Return.TestTolerance = [];

FeNmiGblRamIllglAcsBySysBus = DataDict.SrvRunnable;
FeNmiGblRamIllglAcsBySysBus.Context = 'NonRte';
FeNmiGblRamIllglAcsBySysBus.Description = 'None';
FeNmiGblRamIllglAcsBySysBus.Return = DataDict.CSReturn;
FeNmiGblRamIllglAcsBySysBus.Return.Type = 'None';
FeNmiGblRamIllglAcsBySysBus.Return.Min = [];
FeNmiGblRamIllglAcsBySysBus.Return.Max = [];
FeNmiGblRamIllglAcsBySysBus.Return.TestTolerance = [];

FeNmiGlbRamEccAdrOvfErr = DataDict.SrvRunnable;
FeNmiGlbRamEccAdrOvfErr.Context = 'NonRte';
FeNmiGlbRamEccAdrOvfErr.Description = 'None';
FeNmiGlbRamEccAdrOvfErr.Return = DataDict.CSReturn;
FeNmiGlbRamEccAdrOvfErr.Return.Type = 'None';
FeNmiGlbRamEccAdrOvfErr.Return.Min = [];
FeNmiGlbRamEccAdrOvfErr.Return.Max = [];
FeNmiGlbRamEccAdrOvfErr.Return.TestTolerance = [];

FeNmiGtmRamDblBitEccErr = DataDict.SrvRunnable;
FeNmiGtmRamDblBitEccErr.Context = 'NonRte';
FeNmiGtmRamDblBitEccErr.Description = 'None';
FeNmiGtmRamDblBitEccErr.Return = DataDict.CSReturn;
FeNmiGtmRamDblBitEccErr.Return.Type = 'None';
FeNmiGtmRamDblBitEccErr.Return.Min = [];
FeNmiGtmRamDblBitEccErr.Return.Max = [];
FeNmiGtmRamDblBitEccErr.Return.TestTolerance = [];

FeNmiLclRamEccAdrOvfErr = DataDict.SrvRunnable;
FeNmiLclRamEccAdrOvfErr.Context = 'NonRte';
FeNmiLclRamEccAdrOvfErr.Description = 'None';
FeNmiLclRamEccAdrOvfErr.Return = DataDict.CSReturn;
FeNmiLclRamEccAdrOvfErr.Return.Type = 'None';
FeNmiLclRamEccAdrOvfErr.Return.Min = [];
FeNmiLclRamEccAdrOvfErr.Return.Max = [];
FeNmiLclRamEccAdrOvfErr.Return.TestTolerance = [];

FeNmiModErrDbgActv = DataDict.SrvRunnable;
FeNmiModErrDbgActv.Context = 'NonRte';
FeNmiModErrDbgActv.Description = 'None';
FeNmiModErrDbgActv.Return = DataDict.CSReturn;
FeNmiModErrDbgActv.Return.Type = 'None';
FeNmiModErrDbgActv.Return.Min = [];
FeNmiModErrDbgActv.Return.Max = [];
FeNmiModErrDbgActv.Return.TestTolerance = [];

FeNmiModErrProgmModActv = DataDict.SrvRunnable;
FeNmiModErrProgmModActv.Context = 'NonRte';
FeNmiModErrProgmModActv.Description = 'None';
FeNmiModErrProgmModActv.Return = DataDict.CSReturn;
FeNmiModErrProgmModActv.Return.Type = 'None';
FeNmiModErrProgmModActv.Return.Min = [];
FeNmiModErrProgmModActv.Return.Max = [];
FeNmiModErrProgmModActv.Return.TestTolerance = [];

FeNmiModErrTestModActv = DataDict.SrvRunnable;
FeNmiModErrTestModActv.Context = 'NonRte';
FeNmiModErrTestModActv.Description = 'None';
FeNmiModErrTestModActv.Return = DataDict.CSReturn;
FeNmiModErrTestModActv.Return.Type = 'None';
FeNmiModErrTestModActv.Return.Min = [];
FeNmiModErrTestModActv.Return.Max = [];
FeNmiModErrTestModActv.Return.TestTolerance = [];

FeNmiModErrUsrModInactv = DataDict.SrvRunnable;
FeNmiModErrUsrModInactv.Context = 'NonRte';
FeNmiModErrUsrModInactv.Description = 'None';
FeNmiModErrUsrModInactv.Return = DataDict.CSReturn;
FeNmiModErrUsrModInactv.Return.Type = 'None';
FeNmiModErrUsrModInactv.Return.Min = [];
FeNmiModErrUsrModInactv.Return.Max = [];
FeNmiModErrUsrModInactv.Return.TestTolerance = [];

FeNmiPegErr = DataDict.SrvRunnable;
FeNmiPegErr.Context = 'NonRte';
FeNmiPegErr.Description = 'None';
FeNmiPegErr.Return = DataDict.CSReturn;
FeNmiPegErr.Return.Type = 'None';
FeNmiPegErr.Return.Min = [];
FeNmiPegErr.Return.Max = [];
FeNmiPegErr.Return.TestTolerance = [];

FeNmiProcrLockStepErr = DataDict.SrvRunnable;
FeNmiProcrLockStepErr.Context = 'NonRte';
FeNmiProcrLockStepErr.Description = 'None';
FeNmiProcrLockStepErr.Return = DataDict.CSReturn;
FeNmiProcrLockStepErr.Return.Type = 'None';
FeNmiProcrLockStepErr.Return.Min = [];
FeNmiProcrLockStepErr.Return.Max = [];
FeNmiProcrLockStepErr.Return.TestTolerance = [];

FeNmiPrphlRamEccAdrOvfErr = DataDict.SrvRunnable;
FeNmiPrphlRamEccAdrOvfErr.Context = 'NonRte';
FeNmiPrphlRamEccAdrOvfErr.Description = 'None';
FeNmiPrphlRamEccAdrOvfErr.Return = DataDict.CSReturn;
FeNmiPrphlRamEccAdrOvfErr.Return.Type = 'None';
FeNmiPrphlRamEccAdrOvfErr.Return.Min = [];
FeNmiPrphlRamEccAdrOvfErr.Return.Max = [];
FeNmiPrphlRamEccAdrOvfErr.Return.TestTolerance = [];

FeNmiResdAreaIllglAcsByHiSpdBus = DataDict.SrvRunnable;
FeNmiResdAreaIllglAcsByHiSpdBus.Context = 'NonRte';
FeNmiResdAreaIllglAcsByHiSpdBus.Description = 'None';
FeNmiResdAreaIllglAcsByHiSpdBus.Return = DataDict.CSReturn;
FeNmiResdAreaIllglAcsByHiSpdBus.Return.Type = 'None';
FeNmiResdAreaIllglAcsByHiSpdBus.Return.Min = [];
FeNmiResdAreaIllglAcsByHiSpdBus.Return.Max = [];
FeNmiResdAreaIllglAcsByHiSpdBus.Return.TestTolerance = [];

FeNmiWdgErr = DataDict.SrvRunnable;
FeNmiWdgErr.Context = 'NonRte';
FeNmiWdgErr.Description = 'None';
FeNmiWdgErr.Return = DataDict.CSReturn;
FeNmiWdgErr.Return.Type = 'None';
FeNmiWdgErr.Return.Min = [];
FeNmiWdgErr.Return.Max = [];
FeNmiWdgErr.Return.TestTolerance = [];

GetMcuDiagcIdnData = DataDict.SrvRunnable;
GetMcuDiagcIdnData.Context = 'NonRte';
GetMcuDiagcIdnData.Description = 'None';
GetMcuDiagcIdnData.Return = DataDict.CSReturn;
GetMcuDiagcIdnData.Return.Type = 'None';
GetMcuDiagcIdnData.Return.Min = [];
GetMcuDiagcIdnData.Return.Max = [];
GetMcuDiagcIdnData.Return.TestTolerance = [];
GetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
GetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
GetMcuDiagcIdnData.Arguments(1).EngDT = enum.P1mcDiagc1;
GetMcuDiagcIdnData.Arguments(1).EngMin = 0;
GetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
GetMcuDiagcIdnData.Arguments(1).TestTolerance = 0;
GetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
GetMcuDiagcIdnData.Arguments(1).Direction = 'Out';
GetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
GetMcuDiagcIdnData.Arguments(1).Description = 'None';

GetMcuDiagcSpplData = DataDict.SrvRunnable;
GetMcuDiagcSpplData.Context = 'Rte';
GetMcuDiagcSpplData.Description = 'None';
GetMcuDiagcSpplData.Return = DataDict.CSReturn;
GetMcuDiagcSpplData.Return.Type = 'None';
GetMcuDiagcSpplData.Return.Min = [];
GetMcuDiagcSpplData.Return.Max = [];
GetMcuDiagcSpplData.Return.TestTolerance = [];
GetMcuDiagcSpplData.Arguments(1) = DataDict.CSArguments;
GetMcuDiagcSpplData.Arguments(1).Name = 'McuDiagcData1';
GetMcuDiagcSpplData.Arguments(1).EngDT = dt.u32;
GetMcuDiagcSpplData.Arguments(1).EngMin = 0;
GetMcuDiagcSpplData.Arguments(1).EngMax = 4294967295;
GetMcuDiagcSpplData.Arguments(1).TestTolerance = 0;
GetMcuDiagcSpplData.Arguments(1).Units = 'Cnt';
GetMcuDiagcSpplData.Arguments(1).Direction = 'Out';
GetMcuDiagcSpplData.Arguments(1).InitRowCol = [1  1];
GetMcuDiagcSpplData.Arguments(1).Description = 'None';

ProcMpuExcpnErr = DataDict.SrvRunnable;
ProcMpuExcpnErr.Context = 'NonRte';
ProcMpuExcpnErr.Description = 'None';
ProcMpuExcpnErr.Return = DataDict.CSReturn;
ProcMpuExcpnErr.Return.Type = 'None';
ProcMpuExcpnErr.Return.Min = [];
ProcMpuExcpnErr.Return.Max = [];
ProcMpuExcpnErr.Return.TestTolerance = [];
ProcMpuExcpnErr.Arguments(1) = DataDict.CSArguments;
ProcMpuExcpnErr.Arguments(1).Name = 'McuDiagcData1';
ProcMpuExcpnErr.Arguments(1).EngDT = dt.u32;
ProcMpuExcpnErr.Arguments(1).EngMin = 0;
ProcMpuExcpnErr.Arguments(1).EngMax = 4294967295;
ProcMpuExcpnErr.Arguments(1).Units = 'Cnt';
ProcMpuExcpnErr.Arguments(1).Direction = 'In';
ProcMpuExcpnErr.Arguments(1).InitRowCol = [1  1];
ProcMpuExcpnErr.Arguments(1).Description = 'None';

ProcNonCritOsErr = DataDict.SrvRunnable;
ProcNonCritOsErr.Context = 'NonRte';
ProcNonCritOsErr.Description = 'None';
ProcNonCritOsErr.Return = DataDict.CSReturn;
ProcNonCritOsErr.Return.Type = 'None';
ProcNonCritOsErr.Return.Min = [];
ProcNonCritOsErr.Return.Max = [];
ProcNonCritOsErr.Return.TestTolerance = [];
ProcNonCritOsErr.Arguments(1) = DataDict.CSArguments;
ProcNonCritOsErr.Arguments(1).Name = 'McuDiagcData1';
ProcNonCritOsErr.Arguments(1).EngDT = dt.u32;
ProcNonCritOsErr.Arguments(1).EngMin = 0;
ProcNonCritOsErr.Arguments(1).EngMax = 4294967295;
ProcNonCritOsErr.Arguments(1).Units = 'Cnt';
ProcNonCritOsErr.Arguments(1).Direction = 'In';
ProcNonCritOsErr.Arguments(1).InitRowCol = [1  1];
ProcNonCritOsErr.Arguments(1).Description = 'None';

ProcPrmntOsErr = DataDict.SrvRunnable;
ProcPrmntOsErr.Context = 'NonRte';
ProcPrmntOsErr.Description = 'None';
ProcPrmntOsErr.Return = DataDict.CSReturn;
ProcPrmntOsErr.Return.Type = 'None';
ProcPrmntOsErr.Return.Min = [];
ProcPrmntOsErr.Return.Max = [];
ProcPrmntOsErr.Return.TestTolerance = [];
ProcPrmntOsErr.Arguments(1) = DataDict.CSArguments;
ProcPrmntOsErr.Arguments(1).Name = 'McuDiagcData1';
ProcPrmntOsErr.Arguments(1).EngDT = dt.u32;
ProcPrmntOsErr.Arguments(1).EngMin = 0;
ProcPrmntOsErr.Arguments(1).EngMax = 4294967295;
ProcPrmntOsErr.Arguments(1).Units = 'Cnt';
ProcPrmntOsErr.Arguments(1).Direction = 'In';
ProcPrmntOsErr.Arguments(1).InitRowCol = [1  1];
ProcPrmntOsErr.Arguments(1).Description = 'None';

ProcPrvlgdInstrExcpnErr = DataDict.SrvRunnable;
ProcPrvlgdInstrExcpnErr.Context = 'NonRte';
ProcPrvlgdInstrExcpnErr.Description = 'None';
ProcPrvlgdInstrExcpnErr.Return = DataDict.CSReturn;
ProcPrvlgdInstrExcpnErr.Return.Type = 'None';
ProcPrvlgdInstrExcpnErr.Return.Min = [];
ProcPrvlgdInstrExcpnErr.Return.Max = [];
ProcPrvlgdInstrExcpnErr.Return.TestTolerance = [];
ProcPrvlgdInstrExcpnErr.Arguments(1) = DataDict.CSArguments;
ProcPrvlgdInstrExcpnErr.Arguments(1).Name = 'McuDiagcData1';
ProcPrvlgdInstrExcpnErr.Arguments(1).EngDT = dt.u32;
ProcPrvlgdInstrExcpnErr.Arguments(1).EngMin = 0;
ProcPrvlgdInstrExcpnErr.Arguments(1).EngMax = 4294967295;
ProcPrvlgdInstrExcpnErr.Arguments(1).Units = 'Cnt';
ProcPrvlgdInstrExcpnErr.Arguments(1).Direction = 'In';
ProcPrvlgdInstrExcpnErr.Arguments(1).InitRowCol = [1  1];
ProcPrvlgdInstrExcpnErr.Arguments(1).Description = 'None';

ProcUkwnExcpnErr = DataDict.SrvRunnable;
ProcUkwnExcpnErr.Context = 'NonRte';
ProcUkwnExcpnErr.Description = 'None';
ProcUkwnExcpnErr.Return = DataDict.CSReturn;
ProcUkwnExcpnErr.Return.Type = 'None';
ProcUkwnExcpnErr.Return.Min = [];
ProcUkwnExcpnErr.Return.Max = [];
ProcUkwnExcpnErr.Return.TestTolerance = [];
ProcUkwnExcpnErr.Arguments(1) = DataDict.CSArguments;
ProcUkwnExcpnErr.Arguments(1).Name = 'McuDiagcData1';
ProcUkwnExcpnErr.Arguments(1).EngDT = dt.u32;
ProcUkwnExcpnErr.Arguments(1).EngMin = 0;
ProcUkwnExcpnErr.Arguments(1).EngMax = 4294967295;
ProcUkwnExcpnErr.Arguments(1).Units = 'Cnt';
ProcUkwnExcpnErr.Arguments(1).Direction = 'In';
ProcUkwnExcpnErr.Arguments(1).InitRowCol = [1  1];
ProcUkwnExcpnErr.Arguments(1).Description = 'None';

SetMcuDiagcIdnData = DataDict.SrvRunnable;
SetMcuDiagcIdnData.Context = 'NonRte';
SetMcuDiagcIdnData.Description = 'None';
SetMcuDiagcIdnData.Return = DataDict.CSReturn;
SetMcuDiagcIdnData.Return.Type = 'None';
SetMcuDiagcIdnData.Return.Min = [];
SetMcuDiagcIdnData.Return.Max = [];
SetMcuDiagcIdnData.Return.TestTolerance = [];
SetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
SetMcuDiagcIdnData.Arguments(1).EngDT = enum.P1mcDiagc1;
SetMcuDiagcIdnData.Arguments(1).EngMin = 0;
SetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(1).Direction = 'In';
SetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
SetMcuDiagcIdnData.Arguments(1).Description = 'None';
SetMcuDiagcIdnData.Arguments(2) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(2).Name = 'McuDiagcData1';
SetMcuDiagcIdnData.Arguments(2).EngDT = dt.u32;
SetMcuDiagcIdnData.Arguments(2).EngMin = 0;
SetMcuDiagcIdnData.Arguments(2).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(2).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(2).Direction = 'In';
SetMcuDiagcIdnData.Arguments(2).InitRowCol = [1  1];
SetMcuDiagcIdnData.Arguments(2).Description = 'None';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'ExcpnHndlgInit2'};
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


SetNtcStsAndSnpshtData = DataDict.Client;
SetNtcStsAndSnpshtData.CallLocation = {'ExcpnHndlgInit2','ExcpnHndlgPer1'};
SetNtcStsAndSnpshtData.Description = 'Set NTC Status And Snapshot Data X';
SetNtcStsAndSnpshtData.Return = DataDict.CSReturn;
SetNtcStsAndSnpshtData.Return.Type = 'Standard';
SetNtcStsAndSnpshtData.Return.Min = 0;
SetNtcStsAndSnpshtData.Return.Max = 1;
SetNtcStsAndSnpshtData.Return.TestTolerance = 0;
SetNtcStsAndSnpshtData.Return.Description = 'None';
SetNtcStsAndSnpshtData.Arguments(1) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(1).Name = 'NtcNr';
SetNtcStsAndSnpshtData.Arguments(1).EngDT = enum.NtcNr1;
SetNtcStsAndSnpshtData.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcStsAndSnpshtData.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcStsAndSnpshtData.Arguments(1).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(1).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(1).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(1).Description = 'NTC Number';
SetNtcStsAndSnpshtData.Arguments(2) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(2).Name = 'NtcStInfo';
SetNtcStsAndSnpshtData.Arguments(2).EngDT = dt.u08;
SetNtcStsAndSnpshtData.Arguments(2).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(2).EngMax = 255;
SetNtcStsAndSnpshtData.Arguments(2).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(2).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(2).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(2).Description = 'NTC State Info';
SetNtcStsAndSnpshtData.Arguments(3) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(3).Name = 'NtcSts';
SetNtcStsAndSnpshtData.Arguments(3).EngDT = enum.NtcSts1;
SetNtcStsAndSnpshtData.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcStsAndSnpshtData.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcStsAndSnpshtData.Arguments(3).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(3).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(3).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(3).Description = 'NTC Status';
SetNtcStsAndSnpshtData.Arguments(4) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(4).Name = 'DebStep';
SetNtcStsAndSnpshtData.Arguments(4).EngDT = dt.u16;
SetNtcStsAndSnpshtData.Arguments(4).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(4).EngMax = 65535;
SetNtcStsAndSnpshtData.Arguments(4).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(4).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(4).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(4).Description = 'Debounce Step';
SetNtcStsAndSnpshtData.Arguments(5) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(5).Name = 'SpclSnpshtData0';
SetNtcStsAndSnpshtData.Arguments(5).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(5).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(5).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(5).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(5).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(5).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(5).Description = 'Special Snapshot Data 0';
SetNtcStsAndSnpshtData.Arguments(6) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(6).Name = 'SpclSnpshtData1';
SetNtcStsAndSnpshtData.Arguments(6).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(6).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(6).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(6).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(6).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(6).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(6).Description = 'Special Snapshot Data 1';
SetNtcStsAndSnpshtData.Arguments(7) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(7).Name = 'SpclSnpshtData2';
SetNtcStsAndSnpshtData.Arguments(7).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(7).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(7).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(7).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(7).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(7).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(7).Description = 'Special Snapshot Data 2';


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
BackUpRam = DataDict.PIM;
BackUpRam.LongName = 'Back Up RAM';
BackUpRam.Description = [...
  'To be placed in the 1KB Back Up RAM section of the Local RAM (which does not get reset on an application reset) to store the reset information. Address range: 0xFEDF FFFF to FEDF FC00. 4Bytes*256 = 1KB'];
BackUpRam.DocUnits = 'Cnt';
BackUpRam.EngDT = dt.u32;
BackUpRam.EngMin = 0;
BackUpRam.EngMax = 4294967295;
BackUpRam.InitRowCol = [256  1];

ExcpnHndlgOsErrCod = DataDict.PIM;
ExcpnHndlgOsErrCod.LongName = 'Operating System Error Code';
ExcpnHndlgOsErrCod.Description = [...
  'Operating System Error Code - Must be placed in Global Shared Memory to prevent MPU violations, because it is written by a server runnable that can be called by the OS when in any application.'];
ExcpnHndlgOsErrCod.DocUnits = 'Cnt';
ExcpnHndlgOsErrCod.EngDT = dt.u16;
ExcpnHndlgOsErrCod.EngMin = 0;
ExcpnHndlgOsErrCod.EngMax = 65535;
ExcpnHndlgOsErrCod.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
ClkMonrFlt = DataDict.NTC;
ClkMonrFlt.NtcNr = NtcNr1.NTCNR_0X023;
ClkMonrFlt.NtcTyp = 'None';
ClkMonrFlt.LongName = 'Clock Monitor Fault';
ClkMonrFlt.Description = 'Clock Monitor Faults';
ClkMonrFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
ClkMonrFlt.NtcStInfo.Bit0Descr = 'Clock Monitor 0 Fault';
ClkMonrFlt.NtcStInfo.Bit1Descr = 'Clock Monitor 1 Fault';
ClkMonrFlt.NtcStInfo.Bit2Descr = 'Clock Monitor 2 Fault';
ClkMonrFlt.NtcStInfo.Bit3Descr = 'Clock Monitor 3 Fault';
ClkMonrFlt.NtcStInfo.Bit4Descr = 'Unused';
ClkMonrFlt.NtcStInfo.Bit5Descr = 'Clock Monitor 5 Fault';
ClkMonrFlt.NtcStInfo.Bit6Descr = 'Unused';
ClkMonrFlt.NtcStInfo.Bit7Descr = 'Unused';


CodFlsHardFlt = DataDict.NTC;
CodFlsHardFlt.NtcNr = NtcNr1.NTCNR_0X003;
CodFlsHardFlt.NtcTyp = 'None';
CodFlsHardFlt.LongName = 'Flash Memory Code Flash Double Bit Fault';
CodFlsHardFlt.Description = 'Hard failure for code flash from ECC';
CodFlsHardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
CodFlsHardFlt.NtcStInfo.Bit0Descr = 'Unused';
CodFlsHardFlt.NtcStInfo.Bit1Descr = 'Code Flash Address Parity Or Data ECC Double Bit Detection';
CodFlsHardFlt.NtcStInfo.Bit2Descr = 'Flash Sequencer Error';
CodFlsHardFlt.NtcStInfo.Bit3Descr = 'Unused';
CodFlsHardFlt.NtcStInfo.Bit4Descr = 'Unused';
CodFlsHardFlt.NtcStInfo.Bit5Descr = 'Unused';
CodFlsHardFlt.NtcStInfo.Bit6Descr = 'Unused';
CodFlsHardFlt.NtcStInfo.Bit7Descr = 'Unused';


CoreVltgMonrStrtUpFlt = DataDict.NTC;
CoreVltgMonrStrtUpFlt.NtcNr = NtcNr1.NTCNR_0X048;
CoreVltgMonrStrtUpFlt.NtcTyp = 'None';
CoreVltgMonrStrtUpFlt.LongName = 'Core Voltage Monitor Start Up Fault';
CoreVltgMonrStrtUpFlt.Description = 'Start up Fault for uC core voltage monitor';
CoreVltgMonrStrtUpFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit0Descr = 'CVM Over Voltage Startup Test Failure';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit1Descr = 'CVM Under Voltage Startup Test Failure';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit2Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit3Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit4Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit5Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit6Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit7Descr = 'Unused';


DbgRst = DataDict.NTC;
DbgRst.NtcNr = NtcNr1.NTCNR_0X02F;
DbgRst.NtcTyp = 'None';
DbgRst.LongName = 'Debug Reset';
DbgRst.Description = 'Debug Reset';
DbgRst.NtcStInfo = DataDict.NtcStInfoBitPacked;
DbgRst.NtcStInfo.Bit0Descr = 'Debuger Attached';
DbgRst.NtcStInfo.Bit1Descr = 'Unused';
DbgRst.NtcStInfo.Bit2Descr = 'Unused';
DbgRst.NtcStInfo.Bit3Descr = 'Unused';
DbgRst.NtcStInfo.Bit4Descr = 'Unused';
DbgRst.NtcStInfo.Bit5Descr = 'Unused';
DbgRst.NtcStInfo.Bit6Descr = 'Unused';
DbgRst.NtcStInfo.Bit7Descr = 'Unused';


DmaFlt = DataDict.NTC;
DmaFlt.NtcNr = NtcNr1.NTCNR_0X036;
DmaFlt.NtcTyp = 'None';
DmaFlt.LongName = 'DMA Fault';
DmaFlt.Description = 'DMA Fault';
DmaFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
DmaFlt.NtcStInfo.Bit0Descr = 'DMA Transfer Error';
DmaFlt.NtcStInfo.Bit1Descr = 'DMA Illegal Access Error';
DmaFlt.NtcStInfo.Bit2Descr = 'Unused';
DmaFlt.NtcStInfo.Bit3Descr = 'Unused';
DmaFlt.NtcStInfo.Bit4Descr = 'Unused';
DmaFlt.NtcStInfo.Bit5Descr = 'Unused';
DmaFlt.NtcStInfo.Bit6Descr = 'Unused';
DmaFlt.NtcStInfo.Bit7Descr = 'Unused';


DtsRamDblBitFlt = DataDict.NTC;
DtsRamDblBitFlt.NtcNr = NtcNr1.NTCNR_0X016;
DtsRamDblBitFlt.NtcTyp = 'None';
DtsRamDblBitFlt.LongName = 'DTS RAM Double Bit Fault';
DtsRamDblBitFlt.Description = 'DTS RAM Double Bit Fault';
DtsRamDblBitFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
DtsRamDblBitFlt.NtcStInfo.Bit0Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit1Descr = 'DTS ECC Double Bit (Hard Fault)';
DtsRamDblBitFlt.NtcStInfo.Bit2Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit3Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit4Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit5Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit6Descr = 'Unused';
DtsRamDblBitFlt.NtcStInfo.Bit7Descr = 'Unused';


EccErrAdrOvf = DataDict.NTC;
EccErrAdrOvf.NtcNr = NtcNr1.NTCNR_0X014;
EccErrAdrOvf.NtcTyp = 'None';
EccErrAdrOvf.LongName = 'Ecc Error Address Overflow';
EccErrAdrOvf.Description = 'Ecc Error Address Overflow';
EccErrAdrOvf.NtcStInfo = DataDict.NtcStInfoBitPacked;
EccErrAdrOvf.NtcStInfo.Bit0Descr = 'Local RAM ECC Error Address Overflow';
EccErrAdrOvf.NtcStInfo.Bit1Descr = 'Global RAM ECC Error Address Overflow';
EccErrAdrOvf.NtcStInfo.Bit2Descr = 'Code Flash ECC Error Address Overflow';
EccErrAdrOvf.NtcStInfo.Bit3Descr = 'FlexRay RAM ECC Error Address Overflow';
EccErrAdrOvf.NtcStInfo.Bit4Descr = 'CSIH RAM ECC Error Address Overflow';
EccErrAdrOvf.NtcStInfo.Bit5Descr = 'CAN RAM ECC Error Address Overflow';
EccErrAdrOvf.NtcStInfo.Bit6Descr = 'GTM RAM ECC Error Address Overflow';
EccErrAdrOvf.NtcStInfo.Bit7Descr = 'Unused';


EcmMstChkrFlt = DataDict.NTC;
EcmMstChkrFlt.NtcNr = NtcNr1.NTCNR_0X026;
EcmMstChkrFlt.NtcTyp = 'None';
EcmMstChkrFlt.LongName = 'ECM Master Checker Fault';
EcmMstChkrFlt.Description = 'ECM Fault';
EcmMstChkrFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
EcmMstChkrFlt.NtcStInfo.Bit0Descr = 'ECM Master or Checker Start Up Fault';
EcmMstChkrFlt.NtcStInfo.Bit1Descr = 'Unused';
EcmMstChkrFlt.NtcStInfo.Bit2Descr = 'Configure Output Control Fault';
EcmMstChkrFlt.NtcStInfo.Bit3Descr = 'EI Interrupt Start Up Fault';
EcmMstChkrFlt.NtcStInfo.Bit4Descr = 'Unused';
EcmMstChkrFlt.NtcStInfo.Bit5Descr = 'Master or Checker Output Control Fault';
EcmMstChkrFlt.NtcStInfo.Bit6Descr = 'Unused';
EcmMstChkrFlt.NtcStInfo.Bit7Descr = 'ECM Runtime Master Checker Runtime Fault';


FpuFlt = DataDict.NTC;
FpuFlt.NtcNr = NtcNr1.NTCNR_0X028;
FpuFlt.NtcTyp = 'None';
FpuFlt.LongName = 'Floating Point Unit Faultt';
FpuFlt.Description = 'ECM Fault';
FpuFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
FpuFlt.NtcStInfo.Bit0Descr = 'Unused';
FpuFlt.NtcStInfo.Bit1Descr = 'FPU Invalid Operation (V Bit)';
FpuFlt.NtcStInfo.Bit2Descr = 'FPU Divide by Zero (Z Bit)';
FpuFlt.NtcStInfo.Bit3Descr = 'FPU Overflow (O Bit)';
FpuFlt.NtcStInfo.Bit4Descr = 'FPU Unknown Error';
FpuFlt.NtcStInfo.Bit5Descr = 'Unused';
FpuFlt.NtcStInfo.Bit6Descr = 'Unused';
FpuFlt.NtcStInfo.Bit7Descr = 'Unused';


IllglAreaAcsErr = DataDict.NTC;
IllglAreaAcsErr.NtcNr = NtcNr1.NTCNR_0X015;
IllglAreaAcsErr.NtcTyp = 'None';
IllglAreaAcsErr.LongName = 'Illegal Area Access Error';
IllglAreaAcsErr.Description = 'Illegal Area Access Error';
IllglAreaAcsErr.NtcStInfo = DataDict.NtcStInfoBitPacked;
IllglAreaAcsErr.NtcStInfo.Bit0Descr = 'Global RAM Illegal Access By Processor';
IllglAreaAcsErr.NtcStInfo.Bit1Descr = 'Code Flash Illegal Access By Global VCIE - System Interconnect';
IllglAreaAcsErr.NtcStInfo.Bit2Descr = 'Global RAM Illegal Access By Global VCIE - System Interconnect';
IllglAreaAcsErr.NtcStInfo.Bit3Descr = 'Reserved Area Illegal Access By H-Bus';
IllglAreaAcsErr.NtcStInfo.Bit4Descr = 'Unused';
IllglAreaAcsErr.NtcStInfo.Bit5Descr = 'Unused';
IllglAreaAcsErr.NtcStInfo.Bit6Descr = 'Unused';
IllglAreaAcsErr.NtcStInfo.Bit7Descr = 'Unused';


LoglBistStrtUpFlt = DataDict.NTC;
LoglBistStrtUpFlt.NtcNr = NtcNr1.NTCNR_0X021;
LoglBistStrtUpFlt.NtcTyp = 'None';
LoglBistStrtUpFlt.LongName = 'Logical Built In Self Test Startup Fault';
LoglBistStrtUpFlt.Description = 'Start-Up tests associated with Logic BIST';
LoglBistStrtUpFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoglBistStrtUpFlt.NtcStInfo.Bit0Descr = 'BIST Code ECC Failure';
LoglBistStrtUpFlt.NtcStInfo.Bit1Descr = 'BIST Not Complete';
LoglBistStrtUpFlt.NtcStInfo.Bit2Descr = 'LBIST Startup Test Failure';
LoglBistStrtUpFlt.NtcStInfo.Bit3Descr = 'Unused';
LoglBistStrtUpFlt.NtcStInfo.Bit4Descr = 'Unused';
LoglBistStrtUpFlt.NtcStInfo.Bit5Descr = 'Unused';
LoglBistStrtUpFlt.NtcStInfo.Bit6Descr = 'Unused';
LoglBistStrtUpFlt.NtcStInfo.Bit7Descr = 'FACI Reset Transfer Error';


McuVltgMonrFlt = DataDict.NTC;
McuVltgMonrFlt.NtcNr = NtcNr1.NTCNR_0X049;
McuVltgMonrFlt.NtcTyp = 'None';
McuVltgMonrFlt.LongName = 'Microcontroller Voltage Monitor Fault';
McuVltgMonrFlt.Description = 'Core voltage monitor fault / reset';
McuVltgMonrFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
McuVltgMonrFlt.NtcStInfo.Bit0Descr = 'Internal CVM Over Voltage Monitor Fault';
McuVltgMonrFlt.NtcStInfo.Bit1Descr = 'Internal CVM Under Voltage Monitor Fault';
McuVltgMonrFlt.NtcStInfo.Bit2Descr = 'Unused';
McuVltgMonrFlt.NtcStInfo.Bit3Descr = 'Unused';
McuVltgMonrFlt.NtcStInfo.Bit4Descr = 'Unused';
McuVltgMonrFlt.NtcStInfo.Bit5Descr = 'Unused';
McuVltgMonrFlt.NtcStInfo.Bit6Descr = 'Unused';
McuVltgMonrFlt.NtcStInfo.Bit7Descr = 'External Voltage Monitor Fault';


MemBistStrtUpFlt = DataDict.NTC;
MemBistStrtUpFlt.NtcNr = NtcNr1.NTCNR_0X010;
MemBistStrtUpFlt.NtcTyp = 'None';
MemBistStrtUpFlt.LongName = 'Memory Built In Self Test Startup Fault';
MemBistStrtUpFlt.Description = 'Start-Up tests associated with Memory BIST';
MemBistStrtUpFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MemBistStrtUpFlt.NtcStInfo.Bit0Descr = 'MBIST Startup Test Failure';
MemBistStrtUpFlt.NtcStInfo.Bit1Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit2Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit3Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit4Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit5Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit6Descr = 'Unused';
MemBistStrtUpFlt.NtcStInfo.Bit7Descr = 'Unused';


MemProtnFlt = DataDict.NTC;
MemProtnFlt.NtcNr = NtcNr1.NTCNR_0X025;
MemProtnFlt.NtcTyp = 'None';
MemProtnFlt.LongName = 'Memory Protection Fault';
MemProtnFlt.Description = 'Memory Protection Fault';
MemProtnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
MemProtnFlt.NtcStInfo.Bit0Descr = 'MPU Violation (this convers MDP and MIP Exception)';
MemProtnFlt.NtcStInfo.Bit1Descr = 'Privilege Instruction Execution';
MemProtnFlt.NtcStInfo.Bit2Descr = 'Unused';
MemProtnFlt.NtcStInfo.Bit3Descr = 'Unused';
MemProtnFlt.NtcStInfo.Bit4Descr = 'Unused';
MemProtnFlt.NtcStInfo.Bit5Descr = 'Unused';
MemProtnFlt.NtcStInfo.Bit6Descr = 'Unused';
MemProtnFlt.NtcStInfo.Bit7Descr = 'Unused';


ModErr = DataDict.NTC;
ModErr.NtcNr = NtcNr1.NTCNR_0X024;
ModErr.NtcTyp = 'None';
ModErr.LongName = 'Mode Error';
ModErr.Description = 'Mode Error';
ModErr.NtcStInfo = DataDict.NtcStInfoBitPacked;
ModErr.NtcStInfo.Bit0Descr = 'Unintended User Mode Inactive';
ModErr.NtcStInfo.Bit1Descr = 'Unintended Programming Mode Active';
ModErr.NtcStInfo.Bit2Descr = 'Unintended Debug Mode Active';
ModErr.NtcStInfo.Bit3Descr = 'Unintended Test Mode Active';
ModErr.NtcStInfo.Bit4Descr = 'Unused';
ModErr.NtcStInfo.Bit5Descr = 'Unused';
ModErr.NtcStInfo.Bit6Descr = 'Unused';
ModErr.NtcStInfo.Bit7Descr = 'Unused';


OsPrmntGenericFlt = DataDict.NTC;
OsPrmntGenericFlt.NtcNr = NtcNr1.NTCNR_0X030;
OsPrmntGenericFlt.NtcTyp = 'None';
OsPrmntGenericFlt.LongName = 'Operating System Permanent Generic Fault';
OsPrmntGenericFlt.Description = 'Fatal OS error';
OsPrmntGenericFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
OsPrmntGenericFlt.NtcStInfo.Bit0Descr = 'General OS fatal error';
OsPrmntGenericFlt.NtcStInfo.Bit1Descr = 'Unhandled Exception';
OsPrmntGenericFlt.NtcStInfo.Bit2Descr = 'Unused';
OsPrmntGenericFlt.NtcStInfo.Bit3Descr = 'Unused';
OsPrmntGenericFlt.NtcStInfo.Bit4Descr = 'Unused';
OsPrmntGenericFlt.NtcStInfo.Bit5Descr = 'Unused';
OsPrmntGenericFlt.NtcStInfo.Bit6Descr = 'Unused';
OsPrmntGenericFlt.NtcStInfo.Bit7Descr = 'Unused';


OsTmpGenericFlt = DataDict.NTC;
OsTmpGenericFlt.NtcNr = NtcNr1.NTCNR_0X031;
OsTmpGenericFlt.NtcTyp = 'None';
OsTmpGenericFlt.LongName = 'Operating System Temporary Generic Fault';
OsTmpGenericFlt.Description = 'General OS non-fatal error';
OsTmpGenericFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
OsTmpGenericFlt.NtcStInfo.Bit0Descr = 'General OS non-fatal (temporary) error';
OsTmpGenericFlt.NtcStInfo.Bit1Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit2Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit3Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit4Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit5Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit6Descr = 'Unused';
OsTmpGenericFlt.NtcStInfo.Bit7Descr = 'Unused';


ProgSeqFlt = DataDict.NTC;
ProgSeqFlt.NtcNr = NtcNr1.NTCNR_0X02A;
ProgSeqFlt.NtcTyp = 'None';
ProgSeqFlt.LongName = 'Program Sequence Fault';
ProgSeqFlt.Description = 'Faults related to program sequencing and completion';
ProgSeqFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
ProgSeqFlt.NtcStInfo.Bit0Descr = 'Program Flow';
ProgSeqFlt.NtcStInfo.Bit1Descr = 'Deadline Monitor';
ProgSeqFlt.NtcStInfo.Bit2Descr = 'Alive Monitor';
ProgSeqFlt.NtcStInfo.Bit3Descr = 'Unused';
ProgSeqFlt.NtcStInfo.Bit4Descr = 'Unused';
ProgSeqFlt.NtcStInfo.Bit5Descr = 'Unused';
ProgSeqFlt.NtcStInfo.Bit6Descr = 'Unused';
ProgSeqFlt.NtcStInfo.Bit7Descr = 'Unused';


PrphlBusDataParFlt = DataDict.NTC;
PrphlBusDataParFlt.NtcNr = NtcNr1.NTCNR_0X037;
PrphlBusDataParFlt.NtcTyp = 'None';
PrphlBusDataParFlt.LongName = 'Peripheral Bus Data Parity Fault';
PrphlBusDataParFlt.Description = 'P-Bus Data Parity Fault (Safety Peripheral)';
PrphlBusDataParFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
PrphlBusDataParFlt.NtcStInfo.Bit0Descr = 'P-Bus Address Data ECC Error';
PrphlBusDataParFlt.NtcStInfo.Bit1Descr = 'Peripheral Unmapped Area Accessed';
PrphlBusDataParFlt.NtcStInfo.Bit2Descr = 'H Bus Unmapped Area Accessed';
PrphlBusDataParFlt.NtcStInfo.Bit3Descr = 'Bus Bridge Error - Arbiter Error';
PrphlBusDataParFlt.NtcStInfo.Bit4Descr = 'Bus Single Bit Error';
PrphlBusDataParFlt.NtcStInfo.Bit5Descr = 'Unused';
PrphlBusDataParFlt.NtcStInfo.Bit6Descr = 'Unused';
PrphlBusDataParFlt.NtcStInfo.Bit7Descr = 'Unused';


PrphlGuardFlt = DataDict.NTC;
PrphlGuardFlt.NtcNr = NtcNr1.NTCNR_0X02D;
PrphlGuardFlt.NtcTyp = 'None';
PrphlGuardFlt.LongName = 'Peripheral Guard Fault';
PrphlGuardFlt.Description = 'Peripheral Guard Fault';
PrphlGuardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
PrphlGuardFlt.NtcStInfo.Bit0Descr = 'PBG RunTime Write Error';
PrphlGuardFlt.NtcStInfo.Bit1Descr = 'IPG RunTime Fault';
PrphlGuardFlt.NtcStInfo.Bit2Descr = 'PBG RunTime Read Error';
PrphlGuardFlt.NtcStInfo.Bit3Descr = 'H Bus Guard RunTime Error';
PrphlGuardFlt.NtcStInfo.Bit4Descr = 'Code Flash Guard Error';
PrphlGuardFlt.NtcStInfo.Bit5Descr = 'Global RAM Guard Error';
PrphlGuardFlt.NtcStInfo.Bit6Descr = 'PEG Error';
PrphlGuardFlt.NtcStInfo.Bit7Descr = 'Unused';


RamHardFlt = DataDict.NTC;
RamHardFlt.NtcNr = NtcNr1.NTCNR_0X013;
RamHardFlt.NtcTyp = 'None';
RamHardFlt.LongName = 'RAM Hard Fault';
RamHardFlt.Description = 'ECC Hard Failure on Local RAM';
RamHardFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
RamHardFlt.NtcStInfo.Bit0Descr = 'Unused';
RamHardFlt.NtcStInfo.Bit1Descr = 'Local RAM ECC Double Bit (Hard Fault)';
RamHardFlt.NtcStInfo.Bit2Descr = 'Global RAM ECC Error';
RamHardFlt.NtcStInfo.Bit3Descr = 'GTM RAM Double Bit ECC Error';
RamHardFlt.NtcStInfo.Bit4Descr = 'Unused';
RamHardFlt.NtcStInfo.Bit5Descr = 'Unused';
RamHardFlt.NtcStInfo.Bit6Descr = 'Unused';
RamHardFlt.NtcStInfo.Bit7Descr = 'Invalid RAM Area';


RtFlt = DataDict.NTC;
RtFlt.NtcNr = NtcNr1.NTCNR_0X022;
RtFlt.NtcTyp = 'None';
RtFlt.LongName = 'Runtime Fault';
RtFlt.Description = 'Runtime Fault - Includes lock step, alignment and reserved instruction';
RtFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
RtFlt.NtcStInfo.Bit0Descr = 'CPU Core Mis-compare';
RtFlt.NtcStInfo.Bit1Descr = 'Processor Lockstep Error';
RtFlt.NtcStInfo.Bit2Descr = 'DMA Lock Step Or Global RAM Write Buffer Error';
RtFlt.NtcStInfo.Bit3Descr = 'Memory Misalignment - Write';
RtFlt.NtcStInfo.Bit4Descr = 'Memory Misalignment - Read';
RtFlt.NtcStInfo.Bit5Descr = 'Reserved Operation';
RtFlt.NtcStInfo.Bit6Descr = 'Code Flash Instruction Fetch Error';
RtFlt.NtcStInfo.Bit7Descr = 'Non-Code Flash Instruction Fetch Error';


UkwnStrtUpDetdFlt = DataDict.NTC;
UkwnStrtUpDetdFlt.NtcNr = NtcNr1.NTCNR_0X029;
UkwnStrtUpDetdFlt.NtcTyp = 'None';
UkwnStrtUpDetdFlt.LongName = 'Unknown Start Up Detected';
UkwnStrtUpDetdFlt.Description = 'Start up reason not identified';
UkwnStrtUpDetdFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
UkwnStrtUpDetdFlt.NtcStInfo.Bit0Descr = 'Unknown ECM Reset';
UkwnStrtUpDetdFlt.NtcStInfo.Bit1Descr = 'Reset Unknown';
UkwnStrtUpDetdFlt.NtcStInfo.Bit2Descr = 'Pre OS Exception';
UkwnStrtUpDetdFlt.NtcStInfo.Bit3Descr = 'Incorrect pattern in BackUpRam Register';
UkwnStrtUpDetdFlt.NtcStInfo.Bit4Descr = 'Unknown Software Reset';
UkwnStrtUpDetdFlt.NtcStInfo.Bit5Descr = 'Unused';
UkwnStrtUpDetdFlt.NtcStInfo.Bit6Descr = 'Unused';
UkwnStrtUpDetdFlt.NtcStInfo.Bit7Descr = 'Unused';


WdgFlt = DataDict.NTC;
WdgFlt.NtcNr = NtcNr1.NTCNR_0X02C;
WdgFlt.NtcTyp = 'None';
WdgFlt.LongName = 'Watchdog Fault';
WdgFlt.Description = 'Internal microcontroller watchdog timeout';
WdgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
WdgFlt.NtcStInfo.Bit0Descr = 'Watchdog Timeout';
WdgFlt.NtcStInfo.Bit1Descr = 'Unused';
WdgFlt.NtcStInfo.Bit2Descr = 'Unused';
WdgFlt.NtcStInfo.Bit3Descr = 'Unused';
WdgFlt.NtcStInfo.Bit4Descr = 'Unused';
WdgFlt.NtcStInfo.Bit5Descr = 'Unused';
WdgFlt.NtcStInfo.Bit6Descr = 'Unused';
WdgFlt.NtcStInfo.Bit7Descr = 'Unused';

ProtnAndCtrlRegWrErr = DataDict.NTC;
ProtnAndCtrlRegWrErr.NtcNr = NtcNr1.NTCNR_0X02E;
ProtnAndCtrlRegWrErr.NtcTyp = 'None';
ProtnAndCtrlRegWrErr.LongName = 'Protection and Control Register Write Error';
ProtnAndCtrlRegWrErr.Description = 'Trigger an NTC when writing to protection registers during runtime';
ProtnAndCtrlRegWrErr.NtcStInfo = DataDict.NtcStInfoBitPacked;
ProtnAndCtrlRegWrErr.NtcStInfo.Bit0Descr = 'SysErr Function Control Register Write in User Mode';
ProtnAndCtrlRegWrErr.NtcStInfo.Bit1Descr = 'IPG Protection Register Write in User Mode';
ProtnAndCtrlRegWrErr.NtcStInfo.Bit2Descr = 'Unused';
ProtnAndCtrlRegWrErr.NtcStInfo.Bit3Descr = 'Unused';
ProtnAndCtrlRegWrErr.NtcStInfo.Bit4Descr = 'Unused';
ProtnAndCtrlRegWrErr.NtcStInfo.Bit5Descr = 'Unused';
ProtnAndCtrlRegWrErr.NtcStInfo.Bit6Descr = 'Unused';
ProtnAndCtrlRegWrErr.NtcStInfo.Bit7Descr = 'Unused';

%end of Data Dictionary
