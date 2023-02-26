
AR300A = DataDict.FDD;
AR300A.Version = '1.0.X';
AR300A.LongName = 'Motor Control Manager';
AR300A.ShoName  = 'MotCtrlMgr';
AR300A.DesignASIL = 'D';
AR300A.Description = [...
  'This component handles runnable scheduling of MotorControl and MotorCo' ...
  'ntrolx2 runnables.  This also defines all of the Motor Control related' ...
  ' data and is resposible for the runnables providing the data interface' ...
  ' to the RTE.'];
AR300A.Dependencies = ...
	{};
	
MotCtrlMgrPer1 = DataDict.Runnable;
MotCtrlMgrPer1.Context = 'Rte';
MotCtrlMgrPer1.TimeStep = 0.002;

MotCtrlMgrPer2 = DataDict.Runnable;
MotCtrlMgrPer2.Context = 'Rte';
MotCtrlMgrPer2.TimeStep = 0.002;

DmaEna2MilliSecToMotCtrlTrf = DataDict.Client;
DmaEna2MilliSecToMotCtrlTrf.CallLocation = {'MotCtrlMgrPer2'};
DmaEna2MilliSecToMotCtrlTrf.Return = DataDict.CSReturn;
DmaEna2MilliSecToMotCtrlTrf.Return.Type = 'None';
DmaEna2MilliSecToMotCtrlTrf.Return.Min = [];
DmaEna2MilliSecToMotCtrlTrf.Return.Max = [];
DmaEna2MilliSecToMotCtrlTrf.Return.TestTolerance = [];

DmaWaitForMotCtrlTo2MilliSecTrf = DataDict.Client;
DmaWaitForMotCtrlTo2MilliSecTrf.CallLocation = {'MotCtrlMgrPer1'};
DmaWaitForMotCtrlTo2MilliSecTrf.Return = DataDict.CSReturn;
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Type = 'Standard';
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Min = 0;
DmaWaitForMotCtrlTo2MilliSecTrf.Return.Max = 1;
DmaWaitForMotCtrlTo2MilliSecTrf.Return.TestTolerance = [];

%%%%% Uncomment after DataDictionary tools are updated to properly support the DMA Dynamically created structures... as of data dictionary tool release 2.46.0, these caused errors when running CreateDD utility %%%%%
% MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec = DataDict.IpSignal;
% MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.LongName = 'Two Millisecond from Motor Control Record';
% MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.DocUnits = 'Cnt';
% MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.EngDT = struct.TwoMilliSecFromMotCtrlRec1;
% MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.EngInit = [];
% MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.EngMin = [];
% MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.EngMax = [];
% MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MinReqdASIL = 'D';
% MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.ReadIn = {'MotCtrlMgrPer1'};
% MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.ReadType = 'NonRte';

% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec = DataDict.OpSignal;
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.LongName = 'Two Millisecond to Motor Control Record';
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.Description = 'Two Millisecond to Motor Control Record';
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.DocUnits = 'Cnt';
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.SwcShoName = 'MotCtrlMgr';
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.EngDT = struct.TwoMilliSecToMotCtrlRec1;
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.EngInit = [];
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.EngMin = [];
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.EngMax = [];
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.TestTolerance = 0;
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.WrittenIn = {'MotCtrlMgrPer2'};
% MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.WriteType = 'NonRte';

MotCurrDax = DataDict.OpSignal;
MotCurrDax.LongName = 'MotCurrDax';
MotCurrDax.Description = 'MotCurrDax';
MotCurrDax.DocUnits = 'Ampr';
MotCurrDax.SwcShoName = 'MotCtrlMgr';
MotCurrDax.EngDT = dt.float32;
MotCurrDax.EngInit = 0.0;
MotCurrDax.EngMin = -200;
MotCurrDax.EngMax = 200;
MotCurrDax.TestTolerance = 0;
MotCurrDax.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrDax.WriteType = 'Rte';
	
MotCurrQax = DataDict.OpSignal;
MotCurrQax.LongName = 'MotCurrQax';
MotCurrQax.Description = 'MotCurrQax';
MotCurrQax.DocUnits = 'Ampr';
MotCurrQax.SwcShoName = 'MotCtrlMgr';
MotCurrQax.EngDT = dt.float32;
MotCurrQax.EngInit = 0.0;
MotCurrQax.EngMin = -200;
MotCurrQax.EngMax = 200;
MotCurrQax.TestTolerance = 0;
MotCurrQax.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrQax.WriteType = 'Rte';
	
MotCurrCorrdA = DataDict.OpSignal;
MotCurrCorrdA.LongName = 'MotCurrCorrdA';
MotCurrCorrdA.Description = 'MotCurrCorrdA';
MotCurrCorrdA.DocUnits = 'Ampr';
MotCurrCorrdA.SwcShoName = 'MotCtrlMgr';
MotCurrCorrdA.EngDT = dt.float32;
MotCurrCorrdA.EngInit = 0.0;
MotCurrCorrdA.EngMin = -200;
MotCurrCorrdA.EngMax = 200;
MotCurrCorrdA.TestTolerance = 0;
MotCurrCorrdA.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrCorrdA.WriteType = 'Rte';
	
MotCurrCorrdB = DataDict.OpSignal;
MotCurrCorrdB.LongName = 'MotCurrCorrdB';
MotCurrCorrdB.Description = 'MotCurrCorrdB';
MotCurrCorrdB.DocUnits = 'Ampr';
MotCurrCorrdB.SwcShoName = 'MotCtrlMgr';
MotCurrCorrdB.EngDT = dt.float32;
MotCurrCorrdB.EngInit = 0.0;
MotCurrCorrdB.EngMin = -200;
MotCurrCorrdB.EngMax = 200;
MotCurrCorrdB.TestTolerance = 0;
MotCurrCorrdB.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrCorrdB.WriteType = 'Rte';
	
MotCurrCorrdC = DataDict.OpSignal;
MotCurrCorrdC.LongName = 'MotCurrCorrdC';
MotCurrCorrdC.Description = 'MotCurrCorrdC';
MotCurrCorrdC.DocUnits = 'Ampr';
MotCurrCorrdC.SwcShoName = 'MotCtrlMgr';
MotCurrCorrdC.EngDT = dt.float32;
MotCurrCorrdC.EngInit = 0.0;
MotCurrCorrdC.EngMin = -200;
MotCurrCorrdC.EngMax = 200;
MotCurrCorrdC.TestTolerance = 0;
MotCurrCorrdC.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrCorrdC.WriteType = 'Rte';
	
MotAg5Cos = DataDict.OpSignal;
MotAg5Cos.LongName = 'MotAg5Cos';
MotAg5Cos.Description = 'MotAg5Cos';
MotAg5Cos.DocUnits = 'MotRev';
MotAg5Cos.SwcShoName = 'MotCtrlMgr';
MotAg5Cos.EngDT = dt.float32;
MotAg5Cos.EngInit = 0.0;
MotAg5Cos.EngMin = 0;
MotAg5Cos.EngMax = 5;
MotAg5Cos.TestTolerance = 0;
MotAg5Cos.WrittenIn = {'MotCtrlMgrPer1'};
MotAg5Cos.WriteType = 'Rte';
	
MotAg5Sin = DataDict.OpSignal;
MotAg5Sin.LongName = 'MotAg5Sin';
MotAg5Sin.Description = 'MotAg5Sin';
MotAg5Sin.DocUnits = 'MotRev';
MotAg5Sin.SwcShoName = 'MotCtrlMgr';
MotAg5Sin.EngDT = dt.float32;
MotAg5Sin.EngInit = 0.0;
MotAg5Sin.EngMin = 0;
MotAg5Sin.EngMax = 5;
MotAg5Sin.TestTolerance = 0;
MotAg5Sin.WrittenIn = {'MotCtrlMgrPer1'};
MotAg5Sin.WriteType = 'Rte';
	
MotAg6Cos = DataDict.OpSignal;
MotAg6Cos.LongName = 'MotAg6Cos';
MotAg6Cos.Description = 'MotAg6Cos';
MotAg6Cos.DocUnits = 'MotRev';
MotAg6Cos.SwcShoName = 'MotCtrlMgr';
MotAg6Cos.EngDT = dt.float32;
MotAg6Cos.EngInit = 0.0;
MotAg6Cos.EngMin = 0;
MotAg6Cos.EngMax = 5;
MotAg6Cos.TestTolerance = 0;
MotAg6Cos.WrittenIn = {'MotCtrlMgrPer1'};
MotAg6Cos.WriteType = 'Rte';
	
MotAg6Sin = DataDict.OpSignal;
MotAg6Sin.LongName = 'MotAg6Sin';
MotAg6Sin.Description = 'MotAg6Sin';
MotAg6Sin.DocUnits = 'MotRev';
MotAg6Sin.SwcShoName = 'MotCtrlMgr';
MotAg6Sin.EngDT = dt.float32;
MotAg6Sin.EngInit = 0.0;
MotAg6Sin.EngMin = 0;
MotAg6Sin.EngMax = 5;
MotAg6Sin.TestTolerance = 0;
MotAg6Sin.WrittenIn = {'MotCtrlMgrPer1'};
MotAg6Sin.WriteType = 'Rte';
	
MotCurrAdcVlyA = DataDict.OpSignal;
MotCurrAdcVlyA.LongName = 'MotCurrAdcVlyA';
MotCurrAdcVlyA.Description = 'MotCurrAdcVlyA';
MotCurrAdcVlyA.DocUnits = 'Volt';
MotCurrAdcVlyA.SwcShoName = 'MotCtrlMgr';
MotCurrAdcVlyA.EngDT = dt.float32;
MotCurrAdcVlyA.EngInit = 0.0;
MotCurrAdcVlyA.EngMin = 0;
MotCurrAdcVlyA.EngMax = 5;
MotCurrAdcVlyA.TestTolerance = 0;
MotCurrAdcVlyA.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrAdcVlyA.WriteType = 'Rte';
	
MotCurrAdcVlyB = DataDict.OpSignal;
MotCurrAdcVlyB.LongName = 'MotCurrAdcVlyB';
MotCurrAdcVlyB.Description = 'MotCurrAdcVlyB';
MotCurrAdcVlyB.DocUnits = 'Volt';
MotCurrAdcVlyB.SwcShoName = 'MotCtrlMgr';
MotCurrAdcVlyB.EngDT = dt.float32;
MotCurrAdcVlyB.EngInit = 0.0;
MotCurrAdcVlyB.EngMin = 0;
MotCurrAdcVlyB.EngMax = 5;
MotCurrAdcVlyB.TestTolerance = 0;
MotCurrAdcVlyB.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrAdcVlyB.WriteType = 'Rte';
	
MotCurrAdcVlyC = DataDict.OpSignal;
MotCurrAdcVlyC.LongName = 'MotCurrAdcVlyC';
MotCurrAdcVlyC.Description = 'MotCurrAdcVlyC';
MotCurrAdcVlyC.DocUnits = 'Volt';
MotCurrAdcVlyC.SwcShoName = 'MotCtrlMgr';
MotCurrAdcVlyC.EngDT = dt.float32;
MotCurrAdcVlyC.EngInit = 0.0;
MotCurrAdcVlyC.EngMin = 0;
MotCurrAdcVlyC.EngMax = 5;
MotCurrAdcVlyC.TestTolerance = 0;
MotCurrAdcVlyC.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrAdcVlyC.WriteType = 'Rte';
	
MotVltgDax = DataDict.OpSignal;
MotVltgDax.LongName = 'MotVltgDax';
MotVltgDax.Description = 'MotVltgDax';
MotVltgDax.DocUnits = 'Volt';
MotVltgDax.SwcShoName = 'MotCtrlMgr';
MotVltgDax.EngDT = dt.float32;
MotVltgDax.EngInit = 0.0;
MotVltgDax.EngMin = -26.5;
MotVltgDax.EngMax = 26.5;
MotVltgDax.TestTolerance = 0;
MotVltgDax.WrittenIn = {'MotCtrlMgrPer1'};
MotVltgDax.WriteType = 'Rte';
	
MotVltgQax = DataDict.OpSignal;
MotVltgQax.LongName = 'MotVltgQax';
MotVltgQax.Description = 'MotVltgQax';
MotVltgQax.DocUnits = 'Volt';
MotVltgQax.SwcShoName = 'MotCtrlMgr';
MotVltgQax.EngDT = dt.float32;
MotVltgQax.EngInit = 0.0;
MotVltgQax.EngMin = -26.5;
MotVltgQax.EngMax = 26.5;
MotVltgQax.TestTolerance = 0;
MotVltgQax.WrittenIn = {'MotCtrlMgrPer1'};
MotVltgQax.WriteType = 'Rte';
	
MotVltgDaxFild = DataDict.OpSignal;
MotVltgDaxFild.LongName = 'MotVltgDaxFild';
MotVltgDaxFild.Description = 'MotVltgDaxFild';
MotVltgDaxFild.DocUnits = 'Volt';
MotVltgDaxFild.SwcShoName = 'MotCtrlMgr';
MotVltgDaxFild.EngDT = dt.float32;
MotVltgDaxFild.EngInit = 0.0;
MotVltgDaxFild.EngMin = -26.5;
MotVltgDaxFild.EngMax = 26.5;
MotVltgDaxFild.TestTolerance = 0;
MotVltgDaxFild.WrittenIn = {'MotCtrlMgrPer1'};
MotVltgDaxFild.WriteType = 'Rte';
	
MotVltgQaxFild = DataDict.OpSignal;
MotVltgQaxFild.LongName = 'MotVltgQaxFild';
MotVltgQaxFild.Description = 'MotVltgQaxFild';
MotVltgQaxFild.DocUnits = 'Volt';
MotVltgQaxFild.SwcShoName = 'MotCtrlMgr';
MotVltgQaxFild.EngDT = dt.float32;
MotVltgQaxFild.EngInit = 0.0;
MotVltgQaxFild.EngMin = -26.5;
MotVltgQaxFild.EngMax = 26.5;
MotVltgQaxFild.TestTolerance = 0;
MotVltgQaxFild.WrittenIn = {'MotCtrlMgrPer1'};
MotVltgQaxFild.WriteType = 'Rte';
	
MotAgTiBuf = DataDict.OpSignal;
MotAgTiBuf.LongName = 'MotAgTiBuf';
MotAgTiBuf.Description = 'MotAgTiBuf';
MotAgTiBuf.DocUnits = 'MicroSec';
MotAgTiBuf.SwcShoName = 'MotCtrlMgr';
MotAgTiBuf.EngDT = dt.u32;
MotAgTiBuf.EngInit = [0 62 125 187 250 312 375 437];
MotAgTiBuf.EngMin = 0;
MotAgTiBuf.EngMax = 4294967295;
MotAgTiBuf.TestTolerance = 0;
MotAgTiBuf.WrittenIn = {'MotCtrlMgrPer1'};
MotAgTiBuf.WriteType = 'Rte';
	
PhaOnTiSumA = DataDict.OpSignal;
PhaOnTiSumA.LongName = 'PhaOnTiSumA';
PhaOnTiSumA.Description = 'PhaOnTiSumA';
PhaOnTiSumA.DocUnits = 'NanoSec';
PhaOnTiSumA.SwcShoName = 'MotCtrlMgr';
PhaOnTiSumA.EngDT = dt.u32;
PhaOnTiSumA.EngInit = 0;
PhaOnTiSumA.EngMin = 0;
PhaOnTiSumA.EngMax = 4294967295;
PhaOnTiSumA.TestTolerance = 0;
PhaOnTiSumA.WrittenIn = {'MotCtrlMgrPer1'};
PhaOnTiSumA.WriteType = 'Rte';
	
PhaOnTiSumB = DataDict.OpSignal;
PhaOnTiSumB.LongName = 'PhaOnTiSumB';
PhaOnTiSumB.Description = 'PhaOnTiSumB';
PhaOnTiSumB.DocUnits = 'NanoSec';
PhaOnTiSumB.SwcShoName = 'MotCtrlMgr';
PhaOnTiSumB.EngDT = dt.u32;
PhaOnTiSumB.EngInit = 0;
PhaOnTiSumB.EngMin = 0;
PhaOnTiSumB.EngMax = 4294967295;
PhaOnTiSumB.TestTolerance = 0;
PhaOnTiSumB.WrittenIn = {'MotCtrlMgrPer1'};
PhaOnTiSumB.WriteType = 'Rte';
	
PhaOnTiSumC = DataDict.OpSignal;
PhaOnTiSumC.LongName = 'PhaOnTiSumC';
PhaOnTiSumC.Description = 'PhaOnTiSumC';
PhaOnTiSumC.DocUnits = 'NanoSec';
PhaOnTiSumC.SwcShoName = 'MotCtrlMgr';
PhaOnTiSumC.EngDT = dt.u32;
PhaOnTiSumC.EngInit = 0;
PhaOnTiSumC.EngMin = 0;
PhaOnTiSumC.EngMax = 4294967295;
PhaOnTiSumC.TestTolerance = 0;
PhaOnTiSumC.WrittenIn = {'MotCtrlMgrPer1'};
PhaOnTiSumC.WriteType = 'Rte';
	
MotAgCumvAlgndMrfRev = DataDict.OpSignal;
MotAgCumvAlgndMrfRev.LongName = 'MotAgCumvAlgndMrfRev';
MotAgCumvAlgndMrfRev.Description = 'MotAgCumvAlgndMrfRev';
MotAgCumvAlgndMrfRev.DocUnits = 'MotRev';
MotAgCumvAlgndMrfRev.SwcShoName = 'MotCtrlMgr';
MotAgCumvAlgndMrfRev.EngDT = dt.s32;
MotAgCumvAlgndMrfRev.EngInit = 0;
MotAgCumvAlgndMrfRev.EngMin = -32768;
MotAgCumvAlgndMrfRev.EngMax = 32767.99998;
MotAgCumvAlgndMrfRev.TestTolerance = 0;
MotAgCumvAlgndMrfRev.WrittenIn = {'MotCtrlMgrPer1'};
MotAgCumvAlgndMrfRev.WriteType = 'Rte';
	
Ntc5DErrCnt = DataDict.OpSignal;
Ntc5DErrCnt.LongName = 'Ntc5DErrCnt';
Ntc5DErrCnt.Description = 'Ntc5DErrCnt';
Ntc5DErrCnt.DocUnits = 'Cnt';
Ntc5DErrCnt.SwcShoName = 'MotCtrlMgr';
Ntc5DErrCnt.EngDT = dt.u16;
Ntc5DErrCnt.EngInit = 0;
Ntc5DErrCnt.EngMin = 0;
Ntc5DErrCnt.EngMax = 65535;
Ntc5DErrCnt.TestTolerance = 0;
Ntc5DErrCnt.WrittenIn = {'MotCtrlMgrPer1'};
Ntc5DErrCnt.WriteType = 'Rte';
	
FastLoopCntr = DataDict.OpSignal;
FastLoopCntr.LongName = 'FastLoopCntr';
FastLoopCntr.Description = 'FastLoopCntr';
FastLoopCntr.DocUnits = 'Cnt';
FastLoopCntr.SwcShoName = 'MotCtrlMgr';
FastLoopCntr.EngDT = dt.u16;
FastLoopCntr.EngInit = 0;
FastLoopCntr.EngMin = 0;
FastLoopCntr.EngMax = 65535;
FastLoopCntr.TestTolerance = 0;
FastLoopCntr.WrittenIn = {'MotCtrlMgrPer1'};
FastLoopCntr.WriteType = 'Rte';
	
SlowLoopCntr = DataDict.OpSignal;
SlowLoopCntr.LongName = 'SlowLoopCntr';
SlowLoopCntr.Description = 'SlowLoopCntr';
SlowLoopCntr.DocUnits = 'Cnt';
SlowLoopCntr.SwcShoName = 'MotCtrlMgr';
SlowLoopCntr.EngDT = dt.u16;
SlowLoopCntr.EngInit = 0;
SlowLoopCntr.EngMin = 0;
SlowLoopCntr.EngMax = 65535;
SlowLoopCntr.TestTolerance = 0;
SlowLoopCntr.WrittenIn = {'MotCtrlMgrPer1'};
SlowLoopCntr.WriteType = 'Rte';
	
MotAgBuf = DataDict.OpSignal;
MotAgBuf.LongName = 'MotAgBuf';
MotAgBuf.Description = 'MotAgBuf';
MotAgBuf.DocUnits = 'MotRev';
MotAgBuf.SwcShoName = 'MotCtrlMgr';
MotAgBuf.EngDT = dt.u16;
MotAgBuf.EngInit = [0 0 0 0 0 0 0 0];
MotAgBuf.EngMin = 0;
MotAgBuf.EngMax = 0.9999847412;
MotAgBuf.TestTolerance = 0;
MotAgBuf.WrittenIn = {'MotCtrlMgrPer1'};
MotAgBuf.WriteType = 'Rte';
	
MotAg5RawMecl = DataDict.OpSignal;
MotAg5RawMecl.LongName = 'MotAg5RawMecl';
MotAg5RawMecl.Description = 'MotAg5RawMecl';
MotAg5RawMecl.DocUnits = 'MotRev';
MotAg5RawMecl.SwcShoName = 'MotCtrlMgr';
MotAg5RawMecl.EngDT = dt.u16;
MotAg5RawMecl.EngInit = 0;
MotAg5RawMecl.EngMin = 0;
MotAg5RawMecl.EngMax = 0.9999847412;
MotAg5RawMecl.TestTolerance = 0;
MotAg5RawMecl.WrittenIn = {'MotCtrlMgrPer1'};
MotAg5RawMecl.WriteType = 'Rte';
	
MotAg6RawMecl = DataDict.OpSignal;
MotAg6RawMecl.LongName = 'MotAg6RawMecl';
MotAg6RawMecl.Description = 'MotAg6RawMecl';
MotAg6RawMecl.DocUnits = 'MotRev';
MotAg6RawMecl.SwcShoName = 'MotCtrlMgr';
MotAg6RawMecl.EngDT = dt.u16;
MotAg6RawMecl.EngInit = 0;
MotAg6RawMecl.EngMin = 0;
MotAg6RawMecl.EngMax = 0.9999847412;
MotAg6RawMecl.TestTolerance = 0;
MotAg6RawMecl.WrittenIn = {'MotCtrlMgrPer1'};
MotAg6RawMecl.WriteType = 'Rte';
	
MotCurrRollgCntr1 = DataDict.OpSignal;
MotCurrRollgCntr1.LongName = 'MotCurrRollgCntr1';
MotCurrRollgCntr1.Description = 'MotCurrRollgCntr1';
MotCurrRollgCntr1.DocUnits = 'Cnt';
MotCurrRollgCntr1.SwcShoName = 'MotCtrlMgr';
MotCurrRollgCntr1.EngDT = dt.u08;
MotCurrRollgCntr1.EngInit = 0;
MotCurrRollgCntr1.EngMin = 0;
MotCurrRollgCntr1.EngMax = 255;
MotCurrRollgCntr1.TestTolerance = 0;
MotCurrRollgCntr1.WrittenIn = {'MotCtrlMgrPer1'};
MotCurrRollgCntr1.WriteType = 'Rte';
	
MotAgBufIdx = DataDict.OpSignal;
MotAgBufIdx.LongName = 'MotAgBufIdx';
MotAgBufIdx.Description = 'MotAgBufIdx';
MotAgBufIdx.DocUnits = 'Cnt';
MotAgBufIdx.SwcShoName = 'MotCtrlMgr';
MotAgBufIdx.EngDT = dt.u08;
MotAgBufIdx.EngInit = 0;
MotAgBufIdx.EngMin = 0;
MotAgBufIdx.EngMax = 7;
MotAgBufIdx.TestTolerance = 0;
MotAgBufIdx.WrittenIn = {'MotCtrlMgrPer1'};
MotAgBufIdx.WriteType = 'Rte';
	
MotAgCumvInid = DataDict.OpSignal;
MotAgCumvInid.LongName = 'MotAgCumvInid';
MotAgCumvInid.Description = 'MotAgCumvInid';
MotAgCumvInid.DocUnits = 'Cnt';
MotAgCumvInid.SwcShoName = 'MotCtrlMgr';
MotAgCumvInid.EngDT = dt.lgc;
MotAgCumvInid.EngInit = 0;
MotAgCumvInid.EngMin = 0;
MotAgCumvInid.EngMax = 1;
MotAgCumvInid.TestTolerance = 0;
MotAgCumvInid.WrittenIn = {'MotCtrlMgrPer1'};
MotAgCumvInid.WriteType = 'Rte';



MotAgElecDlyRpl = DataDict.IpSignal;
MotAgElecDlyRpl.LongName = 'MotAgElecDlyRpl';
MotAgElecDlyRpl.DocUnits = 'MotRad';
MotAgElecDlyRpl.EngDT = dt.float32;
MotAgElecDlyRpl.EngInit = 0.0;
MotAgElecDlyRpl.EngMin = -1.62;
MotAgElecDlyRpl.EngMax = 1.62;
MotAgElecDlyRpl.ReadIn = {'MotCtrlMgrPer2'};
MotAgElecDlyRpl.ReadType = 'Rte';
	
MotCurrQaxToMotTqGain = DataDict.IpSignal;
MotCurrQaxToMotTqGain.LongName = 'MotCurrQaxToMotTqGain';
MotCurrQaxToMotTqGain.DocUnits = 'VoltPerMotRadPerSec';
MotCurrQaxToMotTqGain.EngDT = dt.float32;
MotCurrQaxToMotTqGain.EngInit = 0.021651;
MotCurrQaxToMotTqGain.EngMin = 0.021651;
MotCurrQaxToMotTqGain.EngMax = 0.406952;
MotCurrQaxToMotTqGain.ReadIn = {'MotCtrlMgrPer2'};
MotCurrQaxToMotTqGain.ReadType = 'Rte';
	
MotTqRplCoggOrder1Mgn = DataDict.IpSignal;
MotTqRplCoggOrder1Mgn.LongName = 'MotTqRplCoggOrder1Mgn';
MotTqRplCoggOrder1Mgn.DocUnits = 'MotNwtMtr';
MotTqRplCoggOrder1Mgn.EngDT = dt.float32;
MotTqRplCoggOrder1Mgn.EngInit = 0.0;
MotTqRplCoggOrder1Mgn.EngMin = 0;
MotTqRplCoggOrder1Mgn.EngMax = 0.5;
MotTqRplCoggOrder1Mgn.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder1Mgn.ReadType = 'Rte';
	
MotTqRplCoggOrder1Pha = DataDict.IpSignal;
MotTqRplCoggOrder1Pha.LongName = 'MotTqRplCoggOrder1Pha';
MotTqRplCoggOrder1Pha.DocUnits = 'MotRad';
MotTqRplCoggOrder1Pha.EngDT = dt.float32;
MotTqRplCoggOrder1Pha.EngInit = 0.0;
MotTqRplCoggOrder1Pha.EngMin = 0;
MotTqRplCoggOrder1Pha.EngMax = 6.2831853;
MotTqRplCoggOrder1Pha.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder1Pha.ReadType = 'Rte';
	
MotTqRplCoggOrder2Mgn = DataDict.IpSignal;
MotTqRplCoggOrder2Mgn.LongName = 'MotTqRplCoggOrder2Mgn';
MotTqRplCoggOrder2Mgn.DocUnits = 'MotNwtMtr';
MotTqRplCoggOrder2Mgn.EngDT = dt.float32;
MotTqRplCoggOrder2Mgn.EngInit = 0.0;
MotTqRplCoggOrder2Mgn.EngMin = 0;
MotTqRplCoggOrder2Mgn.EngMax = 0.5;
MotTqRplCoggOrder2Mgn.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder2Mgn.ReadType = 'Rte';
	
MotTqRplCoggOrder2Pha = DataDict.IpSignal;
MotTqRplCoggOrder2Pha.LongName = 'MotTqRplCoggOrder2Pha';
MotTqRplCoggOrder2Pha.DocUnits = 'MotRad';
MotTqRplCoggOrder2Pha.EngDT = dt.float32;
MotTqRplCoggOrder2Pha.EngInit = 0.0;
MotTqRplCoggOrder2Pha.EngMin = 0;
MotTqRplCoggOrder2Pha.EngMax = 6.2831853;
MotTqRplCoggOrder2Pha.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder2Pha.ReadType = 'Rte';
	
MotTqRplCoggOrder3Mgn = DataDict.IpSignal;
MotTqRplCoggOrder3Mgn.LongName = 'MotTqRplCoggOrder3Mgn';
MotTqRplCoggOrder3Mgn.DocUnits = 'MotNwtMtr';
MotTqRplCoggOrder3Mgn.EngDT = dt.float32;
MotTqRplCoggOrder3Mgn.EngInit = 0.0;
MotTqRplCoggOrder3Mgn.EngMin = 0;
MotTqRplCoggOrder3Mgn.EngMax = 0.5;
MotTqRplCoggOrder3Mgn.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder3Mgn.ReadType = 'Rte';
	
MotTqRplCoggOrder3Pha = DataDict.IpSignal;
MotTqRplCoggOrder3Pha.LongName = 'MotTqRplCoggOrder3Pha';
MotTqRplCoggOrder3Pha.DocUnits = 'MotRad';
MotTqRplCoggOrder3Pha.EngDT = dt.float32;
MotTqRplCoggOrder3Pha.EngInit = 0.0;
MotTqRplCoggOrder3Pha.EngMin = 0;
MotTqRplCoggOrder3Pha.EngMax = 6.2831853;
MotTqRplCoggOrder3Pha.ReadIn = {'MotCtrlMgrPer2'};
MotTqRplCoggOrder3Pha.ReadType = 'Rte';
	
MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'MotVelMrf';
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0.0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'MotCtrlMgrPer2'};
MotVelMrf.ReadType = 'Rte';
	
BrdgVltg = DataDict.IpSignal;
BrdgVltg.LongName = 'BrdgVltg';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6.0;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.ReadIn = {'MotCtrlMgrPer2'};
BrdgVltg.ReadType = 'Rte';
	
EcuTFild = DataDict.IpSignal;
EcuTFild.LongName = 'EcuTFild';
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 25.0;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.ReadIn = {'MotCtrlMgrPer2'};
EcuTFild.ReadType = 'Rte';
	
MotAgElecDly = DataDict.IpSignal;
MotAgElecDly.LongName = 'MotAgElecDly';
MotAgElecDly.DocUnits = 'MotRad';
MotAgElecDly.EngDT = dt.float32;
MotAgElecDly.EngInit = 0.0;
MotAgElecDly.EngMin = -1.5;
MotAgElecDly.EngMax = 1.5;
MotAgElecDly.ReadIn = {'MotCtrlMgrPer2'};
MotAgElecDly.ReadType = 'Rte';
	
MotBackEmfVltg = DataDict.IpSignal;
MotBackEmfVltg.LongName = 'MotBackEmfVltg';
MotBackEmfVltg.DocUnits = 'Volt';
MotBackEmfVltg.EngDT = dt.float32;
MotBackEmfVltg.EngInit = 0.0;
MotBackEmfVltg.EngMin = -101.25;
MotBackEmfVltg.EngMax = 101.25;
MotBackEmfVltg.ReadIn = {'MotCtrlMgrPer2'};
MotBackEmfVltg.ReadType = 'Rte';
	
MotCurrDaxCmd = DataDict.IpSignal;
MotCurrDaxCmd.LongName = 'MotCurrDaxCmd';
MotCurrDaxCmd.DocUnits = 'Ampr';
MotCurrDaxCmd.EngDT = dt.float32;
MotCurrDaxCmd.EngInit = 0.0;
MotCurrDaxCmd.EngMin = 0;
MotCurrDaxCmd.EngMax = 220;
MotCurrDaxCmd.ReadIn = {'MotCtrlMgrPer2'};
MotCurrDaxCmd.ReadType = 'Rte';
	
MotCurrDaxMax = DataDict.IpSignal;
MotCurrDaxMax.LongName = 'MotCurrDaxMax';
MotCurrDaxMax.DocUnits = 'Ampr';
MotCurrDaxMax.EngDT = dt.float32;
MotCurrDaxMax.EngInit = 0.0;
MotCurrDaxMax.EngMin = 0;
MotCurrDaxMax.EngMax = 220;
MotCurrDaxMax.ReadIn = {'MotCtrlMgrPer2'};
MotCurrDaxMax.ReadType = 'Rte';
	
MotCurrQaxCmd = DataDict.IpSignal;
MotCurrQaxCmd.LongName = 'MotCurrQaxCmd';
MotCurrQaxCmd.DocUnits = 'Ampr';
MotCurrQaxCmd.EngDT = dt.float32;
MotCurrQaxCmd.EngInit = 0.0;
MotCurrQaxCmd.EngMin = -220;
MotCurrQaxCmd.EngMax = 220;
MotCurrQaxCmd.ReadIn = {'MotCtrlMgrPer2'};
MotCurrQaxCmd.ReadType = 'Rte';
	
MotDampgDax = DataDict.IpSignal;
MotDampgDax.LongName = 'MotDampgDax';
MotDampgDax.DocUnits = 'Ohm';
MotDampgDax.EngDT = dt.float32;
MotDampgDax.EngInit = 0.0;
MotDampgDax.EngMin = -0.11;
MotDampgDax.EngMax = 5.5;
MotDampgDax.ReadIn = {'MotCtrlMgrPer2'};
MotDampgDax.ReadType = 'Rte';
	
MotDampgQax = DataDict.IpSignal;
MotDampgQax.LongName = 'MotDampgQax';
MotDampgQax.DocUnits = 'Ohm';
MotDampgQax.EngDT = dt.float32;
MotDampgQax.EngInit = 0.0;
MotDampgQax.EngMin = -0.11;
MotDampgQax.EngMax = 5.5;
MotDampgQax.ReadIn = {'MotCtrlMgrPer2'};
MotDampgQax.ReadType = 'Rte';
	
MotInduDaxEstimdIvs = DataDict.IpSignal;
MotInduDaxEstimdIvs.LongName = 'MotInduDaxEstimdIvs';
MotInduDaxEstimdIvs.DocUnits = 'IvsHenry';
MotInduDaxEstimdIvs.EngDT = dt.float32;
MotInduDaxEstimdIvs.EngInit = 8412.0;
MotInduDaxEstimdIvs.EngMin = 2440;
MotInduDaxEstimdIvs.EngMax = 33334;
MotInduDaxEstimdIvs.ReadIn = {'MotCtrlMgrPer2'};
MotInduDaxEstimdIvs.ReadType = 'Rte';
	
MotInduQaxEstimdIvs = DataDict.IpSignal;
MotInduQaxEstimdIvs.LongName = 'MotInduQaxEstimdIvs';
MotInduQaxEstimdIvs.DocUnits = 'IvsHenry';
MotInduQaxEstimdIvs.EngDT = dt.float32;
MotInduQaxEstimdIvs.EngInit = 8412.0;
MotInduQaxEstimdIvs.EngMin = 2440;
MotInduQaxEstimdIvs.EngMax = 33334;
MotInduQaxEstimdIvs.ReadIn = {'MotCtrlMgrPer2'};
MotInduQaxEstimdIvs.ReadType = 'Rte';
	
MotIntglGainDax = DataDict.IpSignal;
MotIntglGainDax.LongName = 'MotIntglGainDax';
MotIntglGainDax.DocUnits = 'Ohm';
MotIntglGainDax.EngDT = dt.float32;
MotIntglGainDax.EngInit = 0.0;
MotIntglGainDax.EngMin = 0;
MotIntglGainDax.EngMax = 0.6;
MotIntglGainDax.ReadIn = {'MotCtrlMgrPer2'};
MotIntglGainDax.ReadType = 'Rte';
	
MotIntglGainQax = DataDict.IpSignal;
MotIntglGainQax.LongName = 'MotIntglGainQax';
MotIntglGainQax.DocUnits = 'Ohm';
MotIntglGainQax.EngDT = dt.float32;
MotIntglGainQax.EngInit = 0.0;
MotIntglGainQax.EngMin = 0;
MotIntglGainQax.EngMax = 0.6;
MotIntglGainQax.ReadIn = {'MotCtrlMgrPer2'};
MotIntglGainQax.ReadType = 'Rte';
	
MotPropGainDax = DataDict.IpSignal;
MotPropGainDax.LongName = 'MotPropGainDax';
MotPropGainDax.DocUnits = 'Ohm';
MotPropGainDax.EngDT = dt.float32;
MotPropGainDax.EngInit = 0.0;
MotPropGainDax.EngMin = 0;
MotPropGainDax.EngMax = 2.25;
MotPropGainDax.ReadIn = {'MotCtrlMgrPer2'};
MotPropGainDax.ReadType = 'Rte';
	
MotPropGainQax = DataDict.IpSignal;
MotPropGainQax.LongName = 'MotPropGainQax';
MotPropGainQax.DocUnits = 'Ohm';
MotPropGainQax.EngDT = dt.float32;
MotPropGainQax.EngInit = 0.0;
MotPropGainQax.EngMin = 0;
MotPropGainQax.EngMax = 2.25;
MotPropGainQax.ReadIn = {'MotCtrlMgrPer2'};
MotPropGainQax.ReadType = 'Rte';
	
MotReacncDax = DataDict.IpSignal;
MotReacncDax.LongName = 'MotReacncDax';
MotReacncDax.DocUnits = 'Ohm';
MotReacncDax.EngDT = dt.float32;
MotReacncDax.EngInit = 0.0;
MotReacncDax.EngMin = -2.87607;
MotReacncDax.EngMax = 2.87607;
MotReacncDax.ReadIn = {'MotCtrlMgrPer2'};
MotReacncDax.ReadType = 'Rte';
	
MotReacncQax = DataDict.IpSignal;
MotReacncQax.LongName = 'MotReacncQax';
MotReacncQax.DocUnits = 'Ohm';
MotReacncQax.EngDT = dt.float32;
MotReacncQax.EngInit = 0.0;
MotReacncQax.EngMin = -2.87607;
MotReacncQax.EngMax = 2.87607;
MotReacncQax.ReadIn = {'MotCtrlMgrPer2'};
MotReacncQax.ReadType = 'Rte';
	
MotREstimd = DataDict.IpSignal;
MotREstimd.LongName = 'MotREstimd';
MotREstimd.DocUnits = 'Ohm';
MotREstimd.EngDT = dt.float32;
MotREstimd.EngInit = 0.005;
MotREstimd.EngMin = 0.005;
MotREstimd.EngMax = 0.12565;
MotREstimd.ReadIn = {'MotCtrlMgrPer2'};
MotREstimd.ReadType = 'Rte';
	
MotVltgDaxFf = DataDict.IpSignal;
MotVltgDaxFf.LongName = 'MotVltgDaxFf';
MotVltgDaxFf.DocUnits = 'Volt';
MotVltgDaxFf.EngDT = dt.float32;
MotVltgDaxFf.EngInit = 0.0;
MotVltgDaxFf.EngMin = -26.5;
MotVltgDaxFf.EngMax = 26.5;
MotVltgDaxFf.ReadIn = {'MotCtrlMgrPer2'};
MotVltgDaxFf.ReadType = 'Rte';
	
MotVltgQaxFf = DataDict.IpSignal;
MotVltgQaxFf.LongName = 'MotVltgQaxFf';
MotVltgQaxFf.DocUnits = 'Volt';
MotVltgQaxFf.EngDT = dt.float32;
MotVltgQaxFf.EngInit = 0.0;
MotVltgQaxFf.EngMin = -101.25;
MotVltgQaxFf.EngMax = 101.25;
MotVltgQaxFf.ReadIn = {'MotCtrlMgrPer2'};
MotVltgQaxFf.ReadType = 'Rte';
	
MotAg5CosRtAmpRecpr = DataDict.IpSignal;
MotAg5CosRtAmpRecpr.LongName = 'MotAg5CosRtAmpRecpr';
MotAg5CosRtAmpRecpr.DocUnits = 'IvsVolt';
MotAg5CosRtAmpRecpr.EngDT = dt.float32;
MotAg5CosRtAmpRecpr.EngInit = 1.0;
MotAg5CosRtAmpRecpr.EngMin = 0.32;
MotAg5CosRtAmpRecpr.EngMax = 5.1;
MotAg5CosRtAmpRecpr.ReadIn = {'MotCtrlMgrPer2'};
MotAg5CosRtAmpRecpr.ReadType = 'Rte';
	
MotAg5CosRtOffs = DataDict.IpSignal;
MotAg5CosRtOffs.LongName = 'MotAg5CosRtOffs';
MotAg5CosRtOffs.DocUnits = 'Volt';
MotAg5CosRtOffs.EngDT = dt.float32;
MotAg5CosRtOffs.EngInit = 2.5;
MotAg5CosRtOffs.EngMin = 0.25;
MotAg5CosRtOffs.EngMax = 3.75;
MotAg5CosRtOffs.ReadIn = {'MotCtrlMgrPer2'};
MotAg5CosRtOffs.ReadType = 'Rte';
	
MotAg5SinRtAmpRecpr = DataDict.IpSignal;
MotAg5SinRtAmpRecpr.LongName = 'MotAg5SinRtAmpRecpr';
MotAg5SinRtAmpRecpr.DocUnits = 'IvsVolt';
MotAg5SinRtAmpRecpr.EngDT = dt.float32;
MotAg5SinRtAmpRecpr.EngInit = 1.0;
MotAg5SinRtAmpRecpr.EngMin = 0.32;
MotAg5SinRtAmpRecpr.EngMax = 5.1;
MotAg5SinRtAmpRecpr.ReadIn = {'MotCtrlMgrPer2'};
MotAg5SinRtAmpRecpr.ReadType = 'Rte';
	
MotAg5SinRtOffs = DataDict.IpSignal;
MotAg5SinRtOffs.LongName = 'MotAg5SinRtOffs';
MotAg5SinRtOffs.DocUnits = 'Volt';
MotAg5SinRtOffs.EngDT = dt.float32;
MotAg5SinRtOffs.EngInit = 2.5;
MotAg5SinRtOffs.EngMin = 0.25;
MotAg5SinRtOffs.EngMax = 3.75;
MotAg5SinRtOffs.ReadIn = {'MotCtrlMgrPer2'};
MotAg5SinRtOffs.ReadType = 'Rte';
	
MotAg6CosRtAmpRecpr = DataDict.IpSignal;
MotAg6CosRtAmpRecpr.LongName = 'MotAg6CosRtAmpRecpr';
MotAg6CosRtAmpRecpr.DocUnits = 'IvsVolt';
MotAg6CosRtAmpRecpr.EngDT = dt.float32;
MotAg6CosRtAmpRecpr.EngInit = 1.0;
MotAg6CosRtAmpRecpr.EngMin = 0.32;
MotAg6CosRtAmpRecpr.EngMax = 5.1;
MotAg6CosRtAmpRecpr.ReadIn = {'MotCtrlMgrPer2'};
MotAg6CosRtAmpRecpr.ReadType = 'Rte';
	
MotAg6CosRtOffs = DataDict.IpSignal;
MotAg6CosRtOffs.LongName = 'MotAg6CosRtOffs';
MotAg6CosRtOffs.DocUnits = 'Volt';
MotAg6CosRtOffs.EngDT = dt.float32;
MotAg6CosRtOffs.EngInit = 2.5;
MotAg6CosRtOffs.EngMin = 0.25;
MotAg6CosRtOffs.EngMax = 3.75;
MotAg6CosRtOffs.ReadIn = {'MotCtrlMgrPer2'};
MotAg6CosRtOffs.ReadType = 'Rte';
	
MotAg6SinRtAmpRecpr = DataDict.IpSignal;
MotAg6SinRtAmpRecpr.LongName = 'MotAg6SinRtAmpRecpr';
MotAg6SinRtAmpRecpr.DocUnits = 'IvsVolt';
MotAg6SinRtAmpRecpr.EngDT = dt.float32;
MotAg6SinRtAmpRecpr.EngInit = 1.0;
MotAg6SinRtAmpRecpr.EngMin = 0.32;
MotAg6SinRtAmpRecpr.EngMax = 5.1;
MotAg6SinRtAmpRecpr.ReadIn = {'MotCtrlMgrPer2'};
MotAg6SinRtAmpRecpr.ReadType = 'Rte';
	
MotAg6SinRtOffs = DataDict.IpSignal;
MotAg6SinRtOffs.LongName = 'MotAg6SinRtOffs';
MotAg6SinRtOffs.DocUnits = 'Volt';
MotAg6SinRtOffs.EngDT = dt.float32;
MotAg6SinRtOffs.EngInit = 2.5;
MotAg6SinRtOffs.EngMin = 0.25;
MotAg6SinRtOffs.EngMax = 3.75;
MotAg6SinRtOffs.ReadIn = {'MotCtrlMgrPer2'};
MotAg6SinRtOffs.ReadType = 'Rte';
	
VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'VehSpd';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0.0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'MotCtrlMgrPer2'};
VehSpd.ReadType = 'Rte';
	
MotAg2Cos = DataDict.IpSignal;
MotAg2Cos.LongName = 'MotAg2Cos';
MotAg2Cos.DocUnits = 'MotRev';
MotAg2Cos.EngDT = dt.float32;
MotAg2Cos.EngInit = 0.0;
MotAg2Cos.EngMin = 0;
MotAg2Cos.EngMax = 5;
MotAg2Cos.ReadIn = {'MotCtrlMgrPer2'};
MotAg2Cos.ReadType = 'Rte';
	
MotAg2Sin = DataDict.IpSignal;
MotAg2Sin.LongName = 'MotAg2Sin';
MotAg2Sin.DocUnits = 'MotRev';
MotAg2Sin.EngDT = dt.float32;
MotAg2Sin.EngInit = 0.0;
MotAg2Sin.EngMin = 0;
MotAg2Sin.EngMax = 5;
MotAg2Sin.ReadIn = {'MotCtrlMgrPer2'};
MotAg2Sin.ReadType = 'Rte';
	
LoopCntr2MilliSec = DataDict.IpSignal;
LoopCntr2MilliSec.LongName = 'LoopCntr2MilliSec';
LoopCntr2MilliSec.DocUnits = 'Cnt';
LoopCntr2MilliSec.EngDT = dt.u16;
LoopCntr2MilliSec.EngInit = 0;
LoopCntr2MilliSec.EngMin = 0;
LoopCntr2MilliSec.EngMax = 65535;
LoopCntr2MilliSec.ReadIn = {'MotCtrlMgrPer2'};
LoopCntr2MilliSec.ReadType = 'Rte';
	
CurrMeasCorrlnSts = DataDict.IpSignal;
CurrMeasCorrlnSts.LongName = 'CurrMeasCorrlnSts';
CurrMeasCorrlnSts.DocUnits = 'Cnt';
CurrMeasCorrlnSts.EngDT = dt.u08;
CurrMeasCorrlnSts.EngInit = 63;
CurrMeasCorrlnSts.EngMin = 0;
CurrMeasCorrlnSts.EngMax = 63;
CurrMeasCorrlnSts.ReadIn = {'MotCtrlMgrPer2'};
CurrMeasCorrlnSts.ReadType = 'Rte';
	
MotAndThermProtnLoaMod = DataDict.IpSignal;
MotAndThermProtnLoaMod.LongName = 'MotAndThermProtnLoaMod';
MotAndThermProtnLoaMod.DocUnits = 'Cnt';
MotAndThermProtnLoaMod.EngDT = dt.u08;
MotAndThermProtnLoaMod.EngInit = 0;
MotAndThermProtnLoaMod.EngMin = 0;
MotAndThermProtnLoaMod.EngMax = 7;
MotAndThermProtnLoaMod.ReadIn = {'MotCtrlMgrPer2'};
MotAndThermProtnLoaMod.ReadType = 'Rte';
	
MotElecMeclPolarity = DataDict.IpSignal;
MotElecMeclPolarity.LongName = 'MotElecMeclPolarity';
MotElecMeclPolarity.DocUnits = 'Uls';
MotElecMeclPolarity.EngDT = dt.s08;
MotElecMeclPolarity.EngInit = 1;
MotElecMeclPolarity.EngMin = -1;
MotElecMeclPolarity.EngMax = 1;
MotElecMeclPolarity.ReadIn = {'MotCtrlMgrPer2'};
MotElecMeclPolarity.ReadType = 'Rte';

CurrMeasWrmIninTestCmpl = DataDict.IpSignal;
CurrMeasWrmIninTestCmpl.LongName = 'CurrMeasWrmIninTestCmpl';
CurrMeasWrmIninTestCmpl.DocUnits = 'Cnt';
CurrMeasWrmIninTestCmpl.EngDT = dt.lgc;
CurrMeasWrmIninTestCmpl.EngInit = 0;
CurrMeasWrmIninTestCmpl.EngMin = 0;
CurrMeasWrmIninTestCmpl.EngMax = 1;
CurrMeasWrmIninTestCmpl.ReadIn = {'MotCtrlMgrPer2'};
CurrMeasWrmIninTestCmpl.ReadType = 'Rte';

MotCurrAdcVlyAAdcFaild = DataDict.IpSignal;
MotCurrAdcVlyAAdcFaild.LongName = 'MotCurrAdcVlyAAdcFaild';
MotCurrAdcVlyAAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyAAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyAAdcFaild.EngInit = 0;
MotCurrAdcVlyAAdcFaild.EngMin = 0;
MotCurrAdcVlyAAdcFaild.EngMax = 1;
MotCurrAdcVlyAAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotCurrAdcVlyAAdcFaild.ReadType = 'Rte';

MotCurrAdcVlyBAdcFaild = DataDict.IpSignal;
MotCurrAdcVlyBAdcFaild.LongName = 'MotCurrAdcVlyBAdcFaild';
MotCurrAdcVlyBAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyBAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyBAdcFaild.EngInit = 0;
MotCurrAdcVlyBAdcFaild.EngMin = 0;
MotCurrAdcVlyBAdcFaild.EngMax = 1;
MotCurrAdcVlyBAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotCurrAdcVlyBAdcFaild.ReadType = 'Rte';

MotCurrAdcVlyCAdcFaild = DataDict.IpSignal;
MotCurrAdcVlyCAdcFaild.LongName = 'MotCurrAdcVlyCAdcFaild';
MotCurrAdcVlyCAdcFaild.DocUnits = 'Cnt';
MotCurrAdcVlyCAdcFaild.EngDT = dt.lgc;
MotCurrAdcVlyCAdcFaild.EngInit = 0;
MotCurrAdcVlyCAdcFaild.EngMin = 0;
MotCurrAdcVlyCAdcFaild.EngMax = 1;
MotCurrAdcVlyCAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotCurrAdcVlyCAdcFaild.ReadType = 'Rte';

DiagcStsIvtr1Inactv = DataDict.IpSignal;
DiagcStsIvtr1Inactv.LongName = 'DiagcStsIvtr1Inactv';
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.ReadIn = {'MotCtrlMgrPer2'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';

DualEcuMotCtrlMtgtnEna = DataDict.IpSignal;
DualEcuMotCtrlMtgtnEna.LongName = 'DualEcuMotCtrlMtgtnEna';
DualEcuMotCtrlMtgtnEna.DocUnits = 'Cnt';
DualEcuMotCtrlMtgtnEna.EngDT = dt.lgc;
DualEcuMotCtrlMtgtnEna.EngInit = 0;
DualEcuMotCtrlMtgtnEna.EngMin = 0;
DualEcuMotCtrlMtgtnEna.EngMax = 1;
DualEcuMotCtrlMtgtnEna.ReadIn = {'MotCtrlMgrPer2'};
DualEcuMotCtrlMtgtnEna.ReadType = 'Rte';

MotAg2CosAdcFaild = DataDict.IpSignal;
MotAg2CosAdcFaild.LongName = 'MotAg2CosAdcFaild';
MotAg2CosAdcFaild.DocUnits = 'Cnt';
MotAg2CosAdcFaild.EngDT = dt.lgc;
MotAg2CosAdcFaild.EngInit = 0;
MotAg2CosAdcFaild.EngMin = 0;
MotAg2CosAdcFaild.EngMax = 1;
MotAg2CosAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotAg2CosAdcFaild.ReadType = 'Rte';

MotAg2SinAdcFaild = DataDict.IpSignal;
MotAg2SinAdcFaild.LongName = 'MotAg2SinAdcFaild';
MotAg2SinAdcFaild.DocUnits = 'Cnt';
MotAg2SinAdcFaild.EngDT = dt.lgc;
MotAg2SinAdcFaild.EngInit = 0;
MotAg2SinAdcFaild.EngMin = 0;
MotAg2SinAdcFaild.EngMax = 1;
MotAg2SinAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotAg2SinAdcFaild.ReadType = 'Rte';

MotAg5CosAdcFaild = DataDict.IpSignal;
MotAg5CosAdcFaild.LongName = 'MotAg5CosAdcFaild';
MotAg5CosAdcFaild.DocUnits = 'Cnt';
MotAg5CosAdcFaild.EngDT = dt.lgc;
MotAg5CosAdcFaild.EngInit = 0;
MotAg5CosAdcFaild.EngMin = 0;
MotAg5CosAdcFaild.EngMax = 1;
MotAg5CosAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotAg5CosAdcFaild.ReadType = 'Rte';

MotAg5SinAdcFaild = DataDict.IpSignal;
MotAg5SinAdcFaild.LongName = 'MotAg5SinAdcFaild';
MotAg5SinAdcFaild.DocUnits = 'Cnt';
MotAg5SinAdcFaild.EngDT = dt.lgc;
MotAg5SinAdcFaild.EngInit = 0;
MotAg5SinAdcFaild.EngMin = 0;
MotAg5SinAdcFaild.EngMax = 1;
MotAg5SinAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotAg5SinAdcFaild.ReadType = 'Rte';

MotAg6CosAdcFaild = DataDict.IpSignal;
MotAg6CosAdcFaild.LongName = 'MotAg6CosAdcFaild';
MotAg6CosAdcFaild.DocUnits = 'Cnt';
MotAg6CosAdcFaild.EngDT = dt.lgc;
MotAg6CosAdcFaild.EngInit = 0;
MotAg6CosAdcFaild.EngMin = 0;
MotAg6CosAdcFaild.EngMax = 1;
MotAg6CosAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotAg6CosAdcFaild.ReadType = 'Rte';

MotAg6SinAdcFaild = DataDict.IpSignal;
MotAg6SinAdcFaild.LongName = 'MotAg6SinAdcFaild';
MotAg6SinAdcFaild.DocUnits = 'Cnt';
MotAg6SinAdcFaild.EngDT = dt.lgc;
MotAg6SinAdcFaild.EngInit = 0;
MotAg6SinAdcFaild.EngMin = 0;
MotAg6SinAdcFaild.EngMax = 1;
MotAg6SinAdcFaild.ReadIn = {'MotCtrlMgrPer2'};
MotAg6SinAdcFaild.ReadType = 'Rte';

MotCurrQlfr1 = DataDict.IpSignal;
MotCurrQlfr1.LongName = 'MotCurrQlfr1';
MotCurrQlfr1.DocUnits = 'Cnt';
MotCurrQlfr1.EngDT = enum.SigQlfr1;
MotCurrQlfr1.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCurrQlfr1.EngMin = 0;
MotCurrQlfr1.EngMax = 2;
MotCurrQlfr1.ReadIn = {'MotCtrlMgrPer2'};
MotCurrQlfr1.ReadType = 'Rte';

SysSt = DataDict.IpSignal;
SysSt.LongName = 'SysSt';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = 0;
SysSt.EngMax = 3;
SysSt.ReadIn = {'MotCtrlMgrPer2'};
SysSt.ReadType = 'Rte';

IvtrFetFltPha = DataDict.IpSignal;
IvtrFetFltPha.LongName = 'IvtrFetFltPha';
IvtrFetFltPha.DocUnits = 'Cnt';
IvtrFetFltPha.EngDT = enum.IvtrFetFltPha1;
IvtrFetFltPha.EngInit = IvtrFetFltPha1.IVTRFETFLTPHA_NOPHASNGFETFLT;
IvtrFetFltPha.EngMin = 0;
IvtrFetFltPha.EngMax = 4;
IvtrFetFltPha.ReadIn = {'MotCtrlMgrPer2'};
IvtrFetFltPha.ReadType = 'Rte';

IvtrFetFltTyp = DataDict.IpSignal;
IvtrFetFltTyp.LongName = 'IvtrFetFltTyp';
IvtrFetFltTyp.DocUnits = 'Cnt';
IvtrFetFltTyp.EngDT = enum.IvtrFetFltTyp1;
IvtrFetFltTyp.EngInit = IvtrFetFltTyp1.IVTRFETFLTTYP_NOFETFLT;
IvtrFetFltTyp.EngMin = 0;
IvtrFetFltTyp.EngMax = 4;
IvtrFetFltTyp.ReadIn = {'MotCtrlMgrPer2'};
IvtrFetFltTyp.ReadType = 'Rte';

MotCurrEolCalSt = DataDict.IpSignal;
MotCurrEolCalSt.LongName = 'MotCurrEolCalSt';
MotCurrEolCalSt.DocUnits = 'Cnt';
MotCurrEolCalSt.EngDT = enum.MotCurrEolCalSt2;
MotCurrEolCalSt.EngInit = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMin = 0;
MotCurrEolCalSt.EngMax = 8;
MotCurrEolCalSt.ReadIn = {'MotCtrlMgrPer2'};
MotCurrEolCalSt.ReadType = 'Rte';

