
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

WriteMotCtrlReadMotCtrlReadTwoMsf32 = DataDict.OpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsf32.LongName = 'WriteMotCtrlReadMotCtrlReadTwoMsf32';
WriteMotCtrlReadMotCtrlReadTwoMsf32.Description = 'WriteMotCtrlReadMotCtrlReadTwoMsf32';
WriteMotCtrlReadMotCtrlReadTwoMsf32.DocUnits = 'MotNwtMtr';
WriteMotCtrlReadMotCtrlReadTwoMsf32.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadMotCtrlReadTwoMsf32.EngDT = dt.float32;
WriteMotCtrlReadMotCtrlReadTwoMsf32.EngInit = 1.0;
WriteMotCtrlReadMotCtrlReadTwoMsf32.EngMin = -8.8;
WriteMotCtrlReadMotCtrlReadTwoMsf32.EngMax = 8.8;
WriteMotCtrlReadMotCtrlReadTwoMsf32.TestTolerance = 0;
WriteMotCtrlReadMotCtrlReadTwoMsf32.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsf32.WriteType = 'Rte';
	
WriteMotCtrlReadTwoMsf32 = DataDict.OpSignal;
WriteMotCtrlReadTwoMsf32.LongName = 'WriteMotCtrlReadTwoMsf32';
WriteMotCtrlReadTwoMsf32.Description = 'WriteMotCtrlReadTwoMsf32';
WriteMotCtrlReadTwoMsf32.DocUnits = 'MotNwtMtr';
WriteMotCtrlReadTwoMsf32.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadTwoMsf32.EngDT = dt.float32;
WriteMotCtrlReadTwoMsf32.EngInit = 1.0;
WriteMotCtrlReadTwoMsf32.EngMin = -8.8;
WriteMotCtrlReadTwoMsf32.EngMax = 8.8;
WriteMotCtrlReadTwoMsf32.TestTolerance = 0;
WriteMotCtrlReadTwoMsf32.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadTwoMsf32.WriteType = 'Rte';
	
WriteMotCtrlReadMotCtrlReadTwoMsu32 = DataDict.OpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsu32.LongName = 'WriteMotCtrlReadMotCtrlReadTwoMsu32';
WriteMotCtrlReadMotCtrlReadTwoMsu32.Description = 'WriteMotCtrlReadMotCtrlReadTwoMsu32';
WriteMotCtrlReadMotCtrlReadTwoMsu32.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsu32.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadMotCtrlReadTwoMsu32.EngDT = dt.u32;
WriteMotCtrlReadMotCtrlReadTwoMsu32.EngInit = 4294967295;
WriteMotCtrlReadMotCtrlReadTwoMsu32.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu32.EngMax = 4294967295;
WriteMotCtrlReadMotCtrlReadTwoMsu32.TestTolerance = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu32.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsu32.WriteType = 'Rte';
	
WriteMotCtrlReadTwoMsu32 = DataDict.OpSignal;
WriteMotCtrlReadTwoMsu32.LongName = 'WriteMotCtrlReadTwoMsu32';
WriteMotCtrlReadTwoMsu32.Description = 'WriteMotCtrlReadTwoMsu32';
WriteMotCtrlReadTwoMsu32.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsu32.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadTwoMsu32.EngDT = dt.u32;
WriteMotCtrlReadTwoMsu32.EngInit = 4294967295;
WriteMotCtrlReadTwoMsu32.EngMin = 0;
WriteMotCtrlReadTwoMsu32.EngMax = 4294967295;
WriteMotCtrlReadTwoMsu32.TestTolerance = 0;
WriteMotCtrlReadTwoMsu32.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadTwoMsu32.WriteType = 'Rte';
	
WriteMotCtrlReadTwoMsu32Ary = DataDict.OpSignal;
WriteMotCtrlReadTwoMsu32Ary.LongName = 'WriteMotCtrlReadTwoMsu32Ary';
WriteMotCtrlReadTwoMsu32Ary.Description = 'WriteMotCtrlReadTwoMsu32Ary';
WriteMotCtrlReadTwoMsu32Ary.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsu32Ary.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadTwoMsu32Ary.EngDT = dt.u32;
WriteMotCtrlReadTwoMsu32Ary.EngInit = [0 4294967295];
WriteMotCtrlReadTwoMsu32Ary.EngMin = 0;
WriteMotCtrlReadTwoMsu32Ary.EngMax = 4294967295;
WriteMotCtrlReadTwoMsu32Ary.TestTolerance = 0;
WriteMotCtrlReadTwoMsu32Ary.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadTwoMsu32Ary.WriteType = 'Rte';
	
WriteMotCtrlReadMotCtrlReadTwoMss32 = DataDict.OpSignal;
WriteMotCtrlReadMotCtrlReadTwoMss32.LongName = 'WriteMotCtrlReadMotCtrlReadTwoMss32';
WriteMotCtrlReadMotCtrlReadTwoMss32.Description = 'WriteMotCtrlReadMotCtrlReadTwoMss32';
WriteMotCtrlReadMotCtrlReadTwoMss32.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMss32.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadMotCtrlReadTwoMss32.EngDT = dt.s32;
WriteMotCtrlReadMotCtrlReadTwoMss32.EngInit = -2147483647;
WriteMotCtrlReadMotCtrlReadTwoMss32.EngMin = -2147483648;
WriteMotCtrlReadMotCtrlReadTwoMss32.EngMax = 2147483647;
WriteMotCtrlReadMotCtrlReadTwoMss32.TestTolerance = 0;
WriteMotCtrlReadMotCtrlReadTwoMss32.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadMotCtrlReadTwoMss32.WriteType = 'Rte';
	
WriteMotCtrlReadTwoMss32 = DataDict.OpSignal;
WriteMotCtrlReadTwoMss32.LongName = 'WriteMotCtrlReadTwoMss32';
WriteMotCtrlReadTwoMss32.Description = 'WriteMotCtrlReadTwoMss32';
WriteMotCtrlReadTwoMss32.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMss32.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadTwoMss32.EngDT = dt.s32;
WriteMotCtrlReadTwoMss32.EngInit = -2147483647;
WriteMotCtrlReadTwoMss32.EngMin = -2147483648;
WriteMotCtrlReadTwoMss32.EngMax = 2147483647;
WriteMotCtrlReadTwoMss32.TestTolerance = 0;
WriteMotCtrlReadTwoMss32.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadTwoMss32.WriteType = 'Rte';
	
WriteMotCtrlReadMotCtrlReadTwoMsu16 = DataDict.OpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsu16.LongName = 'WriteMotCtrlReadMotCtrlReadTwoMsu16';
WriteMotCtrlReadMotCtrlReadTwoMsu16.Description = 'WriteMotCtrlReadMotCtrlReadTwoMsu16';
WriteMotCtrlReadMotCtrlReadTwoMsu16.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsu16.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadMotCtrlReadTwoMsu16.EngDT = dt.u16;
WriteMotCtrlReadMotCtrlReadTwoMsu16.EngInit = 65535;
WriteMotCtrlReadMotCtrlReadTwoMsu16.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu16.EngMax = 65535;
WriteMotCtrlReadMotCtrlReadTwoMsu16.TestTolerance = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu16.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsu16.WriteType = 'Rte';
	
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary = DataDict.OpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.LongName = 'WriteMotCtrlReadMotCtrlReadTwoMsu16Ary';
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.Description = 'WriteMotCtrlReadMotCtrlReadTwoMsu16Ary';
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngDT = dt.u16;
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngInit = [0 65535];
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngMax = 65535;
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.TestTolerance = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.WriteType = 'Rte';
	
WriteMotCtrlReadTwoMsu16 = DataDict.OpSignal;
WriteMotCtrlReadTwoMsu16.LongName = 'WriteMotCtrlReadTwoMsu16';
WriteMotCtrlReadTwoMsu16.Description = 'WriteMotCtrlReadTwoMsu16';
WriteMotCtrlReadTwoMsu16.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsu16.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadTwoMsu16.EngDT = dt.u16;
WriteMotCtrlReadTwoMsu16.EngInit = 65535;
WriteMotCtrlReadTwoMsu16.EngMin = 0;
WriteMotCtrlReadTwoMsu16.EngMax = 65535;
WriteMotCtrlReadTwoMsu16.TestTolerance = 0;
WriteMotCtrlReadTwoMsu16.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadTwoMsu16.WriteType = 'Rte';
	
WriteMotCtrlReadMotCtrlReadTwoMss16 = DataDict.OpSignal;
WriteMotCtrlReadMotCtrlReadTwoMss16.LongName = 'WriteMotCtrlReadMotCtrlReadTwoMss16';
WriteMotCtrlReadMotCtrlReadTwoMss16.Description = 'WriteMotCtrlReadMotCtrlReadTwoMss16';
WriteMotCtrlReadMotCtrlReadTwoMss16.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMss16.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadMotCtrlReadTwoMss16.EngDT = dt.s16;
WriteMotCtrlReadMotCtrlReadTwoMss16.EngInit = -32768;
WriteMotCtrlReadMotCtrlReadTwoMss16.EngMin = -32768;
WriteMotCtrlReadMotCtrlReadTwoMss16.EngMax = 32767;
WriteMotCtrlReadMotCtrlReadTwoMss16.TestTolerance = 0;
WriteMotCtrlReadMotCtrlReadTwoMss16.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadMotCtrlReadTwoMss16.WriteType = 'Rte';
	
WriteMotCtrlReadTwoMss16 = DataDict.OpSignal;
WriteMotCtrlReadTwoMss16.LongName = 'WriteMotCtrlReadTwoMss16';
WriteMotCtrlReadTwoMss16.Description = 'WriteMotCtrlReadTwoMss16';
WriteMotCtrlReadTwoMss16.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMss16.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadTwoMss16.EngDT = dt.s16;
WriteMotCtrlReadTwoMss16.EngInit = -32768;
WriteMotCtrlReadTwoMss16.EngMin = -32768;
WriteMotCtrlReadTwoMss16.EngMax = 32767;
WriteMotCtrlReadTwoMss16.TestTolerance = 0;
WriteMotCtrlReadTwoMss16.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadTwoMss16.WriteType = 'Rte';
	
WriteMotCtrlReadMotCtrlReadTwoMsu08 = DataDict.OpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsu08.LongName = 'WriteMotCtrlReadMotCtrlReadTwoMsu08';
WriteMotCtrlReadMotCtrlReadTwoMsu08.Description = 'WriteMotCtrlReadMotCtrlReadTwoMsu08';
WriteMotCtrlReadMotCtrlReadTwoMsu08.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsu08.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadMotCtrlReadTwoMsu08.EngDT = dt.u08;
WriteMotCtrlReadMotCtrlReadTwoMsu08.EngInit = 255;
WriteMotCtrlReadMotCtrlReadTwoMsu08.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu08.EngMax = 255;
WriteMotCtrlReadMotCtrlReadTwoMsu08.TestTolerance = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu08.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsu08.WriteType = 'Rte';
	
WriteMotCtrlReadTwoMsu08 = DataDict.OpSignal;
WriteMotCtrlReadTwoMsu08.LongName = 'WriteMotCtrlReadTwoMsu08';
WriteMotCtrlReadTwoMsu08.Description = 'WriteMotCtrlReadTwoMsu08';
WriteMotCtrlReadTwoMsu08.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsu08.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadTwoMsu08.EngDT = dt.u08;
WriteMotCtrlReadTwoMsu08.EngInit = 255;
WriteMotCtrlReadTwoMsu08.EngMin = 0;
WriteMotCtrlReadTwoMsu08.EngMax = 255;
WriteMotCtrlReadTwoMsu08.TestTolerance = 0;
WriteMotCtrlReadTwoMsu08.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadTwoMsu08.WriteType = 'Rte';
	
Signal3 = DataDict.OpSignal;
Signal3.LongName = 'Signal3';
Signal3.Description = 'Signal3';
Signal3.DocUnits = 'Cnt';
Signal3.SwcShoName = 'MotCtrlMgr';
Signal3.EngDT = dt.s08;
Signal3.EngInit = -128;
Signal3.EngMin = -128;
Signal3.EngMax = 127;
Signal3.TestTolerance = 0;
Signal3.WrittenIn = {'MotCtrlMgrPer1'};
Signal3.WriteType = 'Rte';

WriteMotCtrlReadMotCtrlReadTwoMss08 = DataDict.OpSignal;
WriteMotCtrlReadMotCtrlReadTwoMss08.LongName = 'WriteMotCtrlReadMotCtrlReadTwoMss08';
WriteMotCtrlReadMotCtrlReadTwoMss08.Description = 'WriteMotCtrlReadMotCtrlReadTwoMss08';
WriteMotCtrlReadMotCtrlReadTwoMss08.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMss08.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadMotCtrlReadTwoMss08.EngDT = dt.s08;
WriteMotCtrlReadMotCtrlReadTwoMss08.EngInit = -128;
WriteMotCtrlReadMotCtrlReadTwoMss08.EngMin = -128;
WriteMotCtrlReadMotCtrlReadTwoMss08.EngMax = 127;
WriteMotCtrlReadMotCtrlReadTwoMss08.TestTolerance = 0;
WriteMotCtrlReadMotCtrlReadTwoMss08.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadMotCtrlReadTwoMss08.WriteType = 'Rte';

WriteMotCtrlReadTwoMss08 = DataDict.OpSignal;
WriteMotCtrlReadTwoMss08.LongName = 'WriteMotCtrlReadTwoMss08';
WriteMotCtrlReadTwoMss08.Description = 'WriteMotCtrlReadTwoMss08';
WriteMotCtrlReadTwoMss08.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMss08.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadTwoMss08.EngDT = dt.s08;
WriteMotCtrlReadTwoMss08.EngInit = -128;
WriteMotCtrlReadTwoMss08.EngMin = -128;
WriteMotCtrlReadTwoMss08.EngMax = 127;
WriteMotCtrlReadTwoMss08.TestTolerance = 0;
WriteMotCtrlReadTwoMss08.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadTwoMss08.WriteType = 'Rte';

WriteMotCtrlReadMotCtrlReadTwoMsbool = DataDict.OpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsbool.LongName = 'WriteMotCtrlReadMotCtrlReadTwoMsbool';
WriteMotCtrlReadMotCtrlReadTwoMsbool.Description = 'WriteMotCtrlReadMotCtrlReadTwoMsbool';
WriteMotCtrlReadMotCtrlReadTwoMsbool.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsbool.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadMotCtrlReadTwoMsbool.EngDT = dt.lgc;
WriteMotCtrlReadMotCtrlReadTwoMsbool.EngInit = 0;
WriteMotCtrlReadMotCtrlReadTwoMsbool.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsbool.EngMax = 1;
WriteMotCtrlReadMotCtrlReadTwoMsbool.TestTolerance = 0;
WriteMotCtrlReadMotCtrlReadTwoMsbool.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsbool.WriteType = 'Rte';

WriteMotCtrlReadTwoMsbool = DataDict.OpSignal;
WriteMotCtrlReadTwoMsbool.LongName = 'WriteMotCtrlReadTwoMsbool';
WriteMotCtrlReadTwoMsbool.Description = 'WriteMotCtrlReadTwoMsbool';
WriteMotCtrlReadTwoMsbool.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsbool.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadTwoMsbool.EngDT = dt.lgc;
WriteMotCtrlReadTwoMsbool.EngInit = 1;
WriteMotCtrlReadTwoMsbool.EngMin = 0;
WriteMotCtrlReadTwoMsbool.EngMax = 1;
WriteMotCtrlReadTwoMsbool.TestTolerance = 0;
WriteMotCtrlReadTwoMsbool.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadTwoMsbool.WriteType = 'Rte';

WriteMotCtrlReadMotCtrlReadTwoMsEnum = DataDict.OpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.LongName = 'WriteMotCtrlReadMotCtrlReadTwoMsEnum';
WriteMotCtrlReadMotCtrlReadTwoMsEnum.Description = 'WriteMotCtrlReadMotCtrlReadTwoMsEnum';
WriteMotCtrlReadMotCtrlReadTwoMsEnum.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsEnum.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadMotCtrlReadTwoMsEnum.EngDT = enum.TestEnum_u16;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.EngInit = TestEnum_u16.TestEnum_u16_Element3;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.EngMax = 65535;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.TestTolerance = 0;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsEnum.WriteType = 'Rte';

WriteMotCtrlReadTwoMsEnum = DataDict.OpSignal;
WriteMotCtrlReadTwoMsEnum.LongName = 'WriteMotCtrlReadTwoMsEnum';
WriteMotCtrlReadTwoMsEnum.Description = 'WriteMotCtrlReadTwoMsEnum';
WriteMotCtrlReadTwoMsEnum.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsEnum.SwcShoName = 'MotCtrlMgr';
WriteMotCtrlReadTwoMsEnum.EngDT = enum.TestEnum_u16;
WriteMotCtrlReadTwoMsEnum.EngInit = TestEnum_u16.TestEnum_u16_Element3;
WriteMotCtrlReadTwoMsEnum.EngMin = 0;
WriteMotCtrlReadTwoMsEnum.EngMax = 65535;
WriteMotCtrlReadTwoMsEnum.TestTolerance = 0;
WriteMotCtrlReadTwoMsEnum.WrittenIn = {'MotCtrlMgrPer1'};
WriteMotCtrlReadTwoMsEnum.WriteType = 'Rte';



ReadMotCtrlWriteTwoMsf32 = DataDict.IpSignal;
ReadMotCtrlWriteTwoMsf32.LongName = 'ReadMotCtrlWriteTwoMsf32';
ReadMotCtrlWriteTwoMsf32.DocUnits = 'MotNwtMtr';
ReadMotCtrlWriteTwoMsf32.EngDT = dt.float32;
ReadMotCtrlWriteTwoMsf32.EngInit = 1.0;
ReadMotCtrlWriteTwoMsf32.EngMin = -8.8;
ReadMotCtrlWriteTwoMsf32.EngMax = 8.8;
ReadMotCtrlWriteTwoMsf32.ReadIn = {'MotCtrlMgrPer2'};
ReadMotCtrlWriteTwoMsf32.ReadType = 'Rte';
	
ReadMotCtrlWriteTwoMsu32 = DataDict.IpSignal;
ReadMotCtrlWriteTwoMsu32.LongName = 'ReadMotCtrlWriteTwoMsu32';
ReadMotCtrlWriteTwoMsu32.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMsu32.EngDT = dt.u32;
ReadMotCtrlWriteTwoMsu32.EngInit = 4294967295;
ReadMotCtrlWriteTwoMsu32.EngMin = 0;
ReadMotCtrlWriteTwoMsu32.EngMax = 4294967295;
ReadMotCtrlWriteTwoMsu32.ReadIn = {'MotCtrlMgrPer2'};
ReadMotCtrlWriteTwoMsu32.ReadType = 'Rte';
	
ReadMotCtrlWriteTwoMss32 = DataDict.IpSignal;
ReadMotCtrlWriteTwoMss32.LongName = 'ReadMotCtrlWriteTwoMss32';
ReadMotCtrlWriteTwoMss32.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMss32.EngDT = dt.s32;
ReadMotCtrlWriteTwoMss32.EngInit = -2147483647;
ReadMotCtrlWriteTwoMss32.EngMin = -2147483648;
ReadMotCtrlWriteTwoMss32.EngMax = 2147483647;
ReadMotCtrlWriteTwoMss32.ReadIn = {'MotCtrlMgrPer2'};
ReadMotCtrlWriteTwoMss32.ReadType = 'Rte';
	
ReadMotCtrlWriteTwoMss32Ary = DataDict.IpSignal;
ReadMotCtrlWriteTwoMss32Ary.LongName = 'ReadMotCtrlWriteTwoMss32Ary';
ReadMotCtrlWriteTwoMss32Ary.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMss32Ary.EngDT = dt.s32;
ReadMotCtrlWriteTwoMss32Ary.EngInit = [-2147483647 2147483647];
ReadMotCtrlWriteTwoMss32Ary.EngMin = -2147483648;
ReadMotCtrlWriteTwoMss32Ary.EngMax = 2147483647;
ReadMotCtrlWriteTwoMss32Ary.ReadIn = {'MotCtrlMgrPer2'};
ReadMotCtrlWriteTwoMss32Ary.ReadType = 'Rte';
	
ReadMotCtrlWriteTwoMsu16 = DataDict.IpSignal;
ReadMotCtrlWriteTwoMsu16.LongName = 'ReadMotCtrlWriteTwoMsu16';
ReadMotCtrlWriteTwoMsu16.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMsu16.EngDT = dt.u16;
ReadMotCtrlWriteTwoMsu16.EngInit = 65535;
ReadMotCtrlWriteTwoMsu16.EngMin = 0;
ReadMotCtrlWriteTwoMsu16.EngMax = 65535;
ReadMotCtrlWriteTwoMsu16.ReadIn = {'MotCtrlMgrPer2'};
ReadMotCtrlWriteTwoMsu16.ReadType = 'Rte';
	
ReadMotCtrlWriteTwoMss16 = DataDict.IpSignal;
ReadMotCtrlWriteTwoMss16.LongName = 'ReadMotCtrlWriteTwoMss16';
ReadMotCtrlWriteTwoMss16.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMss16.EngDT = dt.s16;
ReadMotCtrlWriteTwoMss16.EngInit = -32768;
ReadMotCtrlWriteTwoMss16.EngMin = -32768;
ReadMotCtrlWriteTwoMss16.EngMax = 32767;
ReadMotCtrlWriteTwoMss16.ReadIn = {'MotCtrlMgrPer2'};
ReadMotCtrlWriteTwoMss16.ReadType = 'Rte';
	
ReadMotCtrlWriteTwoMsu08 = DataDict.IpSignal;
ReadMotCtrlWriteTwoMsu08.LongName = 'ReadMotCtrlWriteTwoMsu08';
ReadMotCtrlWriteTwoMsu08.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMsu08.EngDT = dt.u08;
ReadMotCtrlWriteTwoMsu08.EngInit = 255;
ReadMotCtrlWriteTwoMsu08.EngMin = 0;
ReadMotCtrlWriteTwoMsu08.EngMax = 255;
ReadMotCtrlWriteTwoMsu08.ReadIn = {'MotCtrlMgrPer2'};
ReadMotCtrlWriteTwoMsu08.ReadType = 'Rte';
	
ReadMotCtrlWriteTwoMss08 = DataDict.IpSignal;
ReadMotCtrlWriteTwoMss08.LongName = 'ReadMotCtrlWriteTwoMss08';
ReadMotCtrlWriteTwoMss08.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMss08.EngDT = dt.s08;
ReadMotCtrlWriteTwoMss08.EngInit = -128;
ReadMotCtrlWriteTwoMss08.EngMin = -128;
ReadMotCtrlWriteTwoMss08.EngMax = 127;
ReadMotCtrlWriteTwoMss08.ReadIn = {'MotCtrlMgrPer2'};
ReadMotCtrlWriteTwoMss08.ReadType = 'Rte';

ReadMotCtrlWriteTwoMsbool = DataDict.IpSignal;
ReadMotCtrlWriteTwoMsbool.LongName = 'ReadMotCtrlWriteTwoMsbool';
ReadMotCtrlWriteTwoMsbool.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMsbool.EngDT = dt.lgc;
ReadMotCtrlWriteTwoMsbool.EngInit = 0;
ReadMotCtrlWriteTwoMsbool.EngMin = 0;
ReadMotCtrlWriteTwoMsbool.EngMax = 1;
ReadMotCtrlWriteTwoMsbool.ReadIn = {'MotCtrlMgrPer2'};
ReadMotCtrlWriteTwoMsbool.ReadType = 'Rte';

ReadMotCtrlWriteTwoMsEnum = DataDict.IpSignal;
ReadMotCtrlWriteTwoMsEnum.LongName = 'ReadMotCtrlWriteTwoMsEnum';
ReadMotCtrlWriteTwoMsEnum.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMsEnum.EngDT = enum.TestEnum_u32;
ReadMotCtrlWriteTwoMsEnum.EngInit = TestEnum_u32.TestEnum_u32_Element3;
ReadMotCtrlWriteTwoMsEnum.EngMin = 0;
ReadMotCtrlWriteTwoMsEnum.EngMax = 2147483647;
ReadMotCtrlWriteTwoMsEnum.ReadIn = {'MotCtrlMgrPer2'};
ReadMotCtrlWriteTwoMsEnum.ReadType = 'Rte';

