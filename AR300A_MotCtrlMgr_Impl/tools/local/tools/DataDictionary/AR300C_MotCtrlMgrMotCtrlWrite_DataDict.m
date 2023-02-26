%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jun-2016 12:24:26       %
%                                  Created with tool release: 2.41.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: czgng4 %          %
%%-----------------------------------------------------------------------%

AR300C = DataDict.FDD;
AR300C.Version = '1.0.X';
AR300C.LongName = 'Motor Control Manager Motor Control Write';
AR300C.ShoName  = 'MotCtrlMgrMotCtrlWrite';
AR300C.DesignASIL = '';
AR300C.Description = '';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotCtrlWriteRunPer1 = DataDict.Runnable;
MotCtrlWriteRunPer1.Context = 'NonRte';
MotCtrlWriteRunPer1.TimeStep = 'MotorControl';
MotCtrlWriteRunPer1.Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCtrlReadMotCtrlWriteMotCtrlEnum = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrlEnum.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrlEnum.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlEnum.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrlEnum.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrlEnum.EngDT = enum.TestEnum_u08;
MotCtrlReadMotCtrlWriteMotCtrlEnum.EngInit = TestEnum_u08.TestEnum_u08_Element3;
MotCtrlReadMotCtrlWriteMotCtrlEnum.EngMin = 0;
MotCtrlReadMotCtrlWriteMotCtrlEnum.EngMax = 255;
MotCtrlReadMotCtrlWriteMotCtrlEnum.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrlEnum.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlEnum.WriteType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlbool = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrlbool.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadMotCtrlWriteMotCtrlbool.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlbool.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrlbool.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrlbool.EngDT = dt.lgc;
MotCtrlReadMotCtrlWriteMotCtrlbool.EngInit = 0;
MotCtrlReadMotCtrlWriteMotCtrlbool.EngMin = 0;
MotCtrlReadMotCtrlWriteMotCtrlbool.EngMax = 1;
MotCtrlReadMotCtrlWriteMotCtrlbool.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrlbool.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlbool.WriteType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlf32 = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrlf32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrlf32.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlf32.DocUnits = 'MotNwtMtr';
MotCtrlReadMotCtrlWriteMotCtrlf32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrlf32.EngDT = dt.float32;
MotCtrlReadMotCtrlWriteMotCtrlf32.EngInit = 1;
MotCtrlReadMotCtrlWriteMotCtrlf32.EngMin = -8.8;
MotCtrlReadMotCtrlWriteMotCtrlf32.EngMax = 8.8;
MotCtrlReadMotCtrlWriteMotCtrlf32.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrlf32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlf32.WriteType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlf32Ary = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.DocUnits = 'MotNwtMtr';
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.EngDT = dt.float32;
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.EngInit =  ...
   [1                2                3                4];
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.EngMin = -8.8;
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.EngMax = 8.8;
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.WriteType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrls08 = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrls08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrls08.Description = '';
MotCtrlReadMotCtrlWriteMotCtrls08.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrls08.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrls08.EngDT = dt.s08;
MotCtrlReadMotCtrlWriteMotCtrls08.EngInit = -128;
MotCtrlReadMotCtrlWriteMotCtrls08.EngMin = -128;
MotCtrlReadMotCtrlWriteMotCtrls08.EngMax = 127;
MotCtrlReadMotCtrlWriteMotCtrls08.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrls08.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrls08.WriteType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrls08Ary = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrls08Ary.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadMotCtrlWriteMotCtrls08Ary.Description = '';
MotCtrlReadMotCtrlWriteMotCtrls08Ary.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrls08Ary.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrls08Ary.EngDT = dt.s08;
MotCtrlReadMotCtrlWriteMotCtrls08Ary.EngInit =  ...
   [-128              127];
MotCtrlReadMotCtrlWriteMotCtrls08Ary.EngMin = -128;
MotCtrlReadMotCtrlWriteMotCtrls08Ary.EngMax = 127;
MotCtrlReadMotCtrlWriteMotCtrls08Ary.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrls08Ary.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrls08Ary.WriteType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrls16 = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrls16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrls16.Description = '';
MotCtrlReadMotCtrlWriteMotCtrls16.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrls16.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrls16.EngDT = dt.s16;
MotCtrlReadMotCtrlWriteMotCtrls16.EngInit = -32768;
MotCtrlReadMotCtrlWriteMotCtrls16.EngMin = -32768;
MotCtrlReadMotCtrlWriteMotCtrls16.EngMax = 32767;
MotCtrlReadMotCtrlWriteMotCtrls16.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrls16.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrls16.WriteType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrls32 = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrls32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrls32.Description = '';
MotCtrlReadMotCtrlWriteMotCtrls32.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrls32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrls32.EngDT = dt.s32;
MotCtrlReadMotCtrlWriteMotCtrls32.EngInit = -2147483647;
MotCtrlReadMotCtrlWriteMotCtrls32.EngMin = -2147483648;
MotCtrlReadMotCtrlWriteMotCtrls32.EngMax = 2147483647;
MotCtrlReadMotCtrlWriteMotCtrls32.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrls32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrls32.WriteType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlu08 = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrlu08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrlu08.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlu08.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrlu08.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrlu08.EngDT = dt.u08;
MotCtrlReadMotCtrlWriteMotCtrlu08.EngInit = 255;
MotCtrlReadMotCtrlWriteMotCtrlu08.EngMin = 0;
MotCtrlReadMotCtrlWriteMotCtrlu08.EngMax = 255;
MotCtrlReadMotCtrlWriteMotCtrlu08.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrlu08.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlu08.WriteType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlu16 = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrlu16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrlu16.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlu16.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrlu16.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrlu16.EngDT = dt.u16;
MotCtrlReadMotCtrlWriteMotCtrlu16.EngInit = 65535;
MotCtrlReadMotCtrlWriteMotCtrlu16.EngMin = 0;
MotCtrlReadMotCtrlWriteMotCtrlu16.EngMax = 65535;
MotCtrlReadMotCtrlWriteMotCtrlu16.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrlu16.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlu16.WriteType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlu32 = DataDict.OpSignal;
MotCtrlReadMotCtrlWriteMotCtrlu32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrlu32.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlu32.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrlu32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadMotCtrlWriteMotCtrlu32.EngDT = dt.u32;
MotCtrlReadMotCtrlWriteMotCtrlu32.EngInit = 4294967295;
MotCtrlReadMotCtrlWriteMotCtrlu32.EngMin = 0;
MotCtrlReadMotCtrlWriteMotCtrlu32.EngMax = 4294967295;
MotCtrlReadMotCtrlWriteMotCtrlu32.TestTolerance = 999;
MotCtrlReadMotCtrlWriteMotCtrlu32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlu32.WriteType = 'NonRte';


MotCtrlReadNoneWriteMotCtrlEnum = DataDict.OpSignal;
MotCtrlReadNoneWriteMotCtrlEnum.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadNoneWriteMotCtrlEnum.Description = '';
MotCtrlReadNoneWriteMotCtrlEnum.DocUnits = 'Cnt';
MotCtrlReadNoneWriteMotCtrlEnum.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadNoneWriteMotCtrlEnum.EngDT = enum.TestEnum_u08;
MotCtrlReadNoneWriteMotCtrlEnum.EngInit = TestEnum_u08.TestEnum_u08_Element3;
MotCtrlReadNoneWriteMotCtrlEnum.EngMin = 0;
MotCtrlReadNoneWriteMotCtrlEnum.EngMax = 255;
MotCtrlReadNoneWriteMotCtrlEnum.TestTolerance = 999;
MotCtrlReadNoneWriteMotCtrlEnum.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadNoneWriteMotCtrlEnum.WriteType = 'NonRte';


MotCtrlReadNoneWriteMotCtrlbool = DataDict.OpSignal;
MotCtrlReadNoneWriteMotCtrlbool.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadNoneWriteMotCtrlbool.Description = '';
MotCtrlReadNoneWriteMotCtrlbool.DocUnits = 'Cnt';
MotCtrlReadNoneWriteMotCtrlbool.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadNoneWriteMotCtrlbool.EngDT = dt.lgc;
MotCtrlReadNoneWriteMotCtrlbool.EngInit = 1;
MotCtrlReadNoneWriteMotCtrlbool.EngMin = 0;
MotCtrlReadNoneWriteMotCtrlbool.EngMax = 1;
MotCtrlReadNoneWriteMotCtrlbool.TestTolerance = 999;
MotCtrlReadNoneWriteMotCtrlbool.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadNoneWriteMotCtrlbool.WriteType = 'NonRte';


MotCtrlReadNoneWriteMotCtrlf32 = DataDict.OpSignal;
MotCtrlReadNoneWriteMotCtrlf32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadNoneWriteMotCtrlf32.Description = '';
MotCtrlReadNoneWriteMotCtrlf32.DocUnits = 'MotNwtMtr';
MotCtrlReadNoneWriteMotCtrlf32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadNoneWriteMotCtrlf32.EngDT = dt.float32;
MotCtrlReadNoneWriteMotCtrlf32.EngInit = 1;
MotCtrlReadNoneWriteMotCtrlf32.EngMin = -8.8;
MotCtrlReadNoneWriteMotCtrlf32.EngMax = 8.8;
MotCtrlReadNoneWriteMotCtrlf32.TestTolerance = 999;
MotCtrlReadNoneWriteMotCtrlf32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadNoneWriteMotCtrlf32.WriteType = 'NonRte';


MotCtrlReadNoneWriteMotCtrls08 = DataDict.OpSignal;
MotCtrlReadNoneWriteMotCtrls08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadNoneWriteMotCtrls08.Description = '';
MotCtrlReadNoneWriteMotCtrls08.DocUnits = 'Cnt';
MotCtrlReadNoneWriteMotCtrls08.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadNoneWriteMotCtrls08.EngDT = dt.s08;
MotCtrlReadNoneWriteMotCtrls08.EngInit = -128;
MotCtrlReadNoneWriteMotCtrls08.EngMin = -128;
MotCtrlReadNoneWriteMotCtrls08.EngMax = 127;
MotCtrlReadNoneWriteMotCtrls08.TestTolerance = 999;
MotCtrlReadNoneWriteMotCtrls08.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadNoneWriteMotCtrls08.WriteType = 'NonRte';


MotCtrlReadNoneWriteMotCtrls16 = DataDict.OpSignal;
MotCtrlReadNoneWriteMotCtrls16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlReadNoneWriteMotCtrls16.Description = '';
MotCtrlReadNoneWriteMotCtrls16.DocUnits = 'Cnt';
MotCtrlReadNoneWriteMotCtrls16.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadNoneWriteMotCtrls16.EngDT = dt.s16;
MotCtrlReadNoneWriteMotCtrls16.EngInit = -32768;
MotCtrlReadNoneWriteMotCtrls16.EngMin = -32768;
MotCtrlReadNoneWriteMotCtrls16.EngMax = 32767;
MotCtrlReadNoneWriteMotCtrls16.TestTolerance = 999;
MotCtrlReadNoneWriteMotCtrls16.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadNoneWriteMotCtrls16.WriteType = 'NonRte';


MotCtrlReadNoneWriteMotCtrls32 = DataDict.OpSignal;
MotCtrlReadNoneWriteMotCtrls32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadNoneWriteMotCtrls32.Description = '';
MotCtrlReadNoneWriteMotCtrls32.DocUnits = 'Cnt';
MotCtrlReadNoneWriteMotCtrls32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadNoneWriteMotCtrls32.EngDT = dt.s32;
MotCtrlReadNoneWriteMotCtrls32.EngInit = -2147483647;
MotCtrlReadNoneWriteMotCtrls32.EngMin = -2147483648;
MotCtrlReadNoneWriteMotCtrls32.EngMax = 2147483647;
MotCtrlReadNoneWriteMotCtrls32.TestTolerance = 999;
MotCtrlReadNoneWriteMotCtrls32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadNoneWriteMotCtrls32.WriteType = 'NonRte';


MotCtrlReadNoneWriteMotCtrlu08 = DataDict.OpSignal;
MotCtrlReadNoneWriteMotCtrlu08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadNoneWriteMotCtrlu08.Description = '';
MotCtrlReadNoneWriteMotCtrlu08.DocUnits = 'Cnt';
MotCtrlReadNoneWriteMotCtrlu08.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadNoneWriteMotCtrlu08.EngDT = dt.u08;
MotCtrlReadNoneWriteMotCtrlu08.EngInit = 255;
MotCtrlReadNoneWriteMotCtrlu08.EngMin = 0;
MotCtrlReadNoneWriteMotCtrlu08.EngMax = 255;
MotCtrlReadNoneWriteMotCtrlu08.TestTolerance = 999;
MotCtrlReadNoneWriteMotCtrlu08.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadNoneWriteMotCtrlu08.WriteType = 'NonRte';


MotCtrlReadNoneWriteMotCtrlu08Ary = DataDict.OpSignal;
MotCtrlReadNoneWriteMotCtrlu08Ary.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadNoneWriteMotCtrlu08Ary.Description = '';
MotCtrlReadNoneWriteMotCtrlu08Ary.DocUnits = 'Cnt';
MotCtrlReadNoneWriteMotCtrlu08Ary.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadNoneWriteMotCtrlu08Ary.EngDT = dt.u08;
MotCtrlReadNoneWriteMotCtrlu08Ary.EngInit =  ...
   [0              255];
MotCtrlReadNoneWriteMotCtrlu08Ary.EngMin = 0;
MotCtrlReadNoneWriteMotCtrlu08Ary.EngMax = 255;
MotCtrlReadNoneWriteMotCtrlu08Ary.TestTolerance = 999;
MotCtrlReadNoneWriteMotCtrlu08Ary.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadNoneWriteMotCtrlu08Ary.WriteType = 'NonRte';


MotCtrlReadNoneWriteMotCtrlu16 = DataDict.OpSignal;
MotCtrlReadNoneWriteMotCtrlu16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlReadNoneWriteMotCtrlu16.Description = '';
MotCtrlReadNoneWriteMotCtrlu16.DocUnits = 'Cnt';
MotCtrlReadNoneWriteMotCtrlu16.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadNoneWriteMotCtrlu16.EngDT = dt.u16;
MotCtrlReadNoneWriteMotCtrlu16.EngInit = 65535;
MotCtrlReadNoneWriteMotCtrlu16.EngMin = 0;
MotCtrlReadNoneWriteMotCtrlu16.EngMax = 65535;
MotCtrlReadNoneWriteMotCtrlu16.TestTolerance = 999;
MotCtrlReadNoneWriteMotCtrlu16.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadNoneWriteMotCtrlu16.WriteType = 'NonRte';


MotCtrlReadNoneWriteMotCtrlu32 = DataDict.OpSignal;
MotCtrlReadNoneWriteMotCtrlu32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadNoneWriteMotCtrlu32.Description = '';
MotCtrlReadNoneWriteMotCtrlu32.DocUnits = 'Cnt';
MotCtrlReadNoneWriteMotCtrlu32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlReadNoneWriteMotCtrlu32.EngDT = dt.u32;
MotCtrlReadNoneWriteMotCtrlu32.EngInit = 4294967295;
MotCtrlReadNoneWriteMotCtrlu32.EngMin = 0;
MotCtrlReadNoneWriteMotCtrlu32.EngMax = 4294967295;
MotCtrlReadNoneWriteMotCtrlu32.TestTolerance = 999;
MotCtrlReadNoneWriteMotCtrlu32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlReadNoneWriteMotCtrlu32.WriteType = 'NonRte';


MotCtrlSignal1 = DataDict.OpSignal;
MotCtrlSignal1.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlSignal1.Description = '';
MotCtrlSignal1.DocUnits = 'Cnt';
MotCtrlSignal1.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlSignal1.EngDT = dt.u16;
MotCtrlSignal1.EngInit = 65535;
MotCtrlSignal1.EngMin = 0;
MotCtrlSignal1.EngMax = 65535;
MotCtrlSignal1.TestTolerance = 999;
MotCtrlSignal1.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlSignal1.WriteType = 'NonRte';


MotCtrlSignal2 = DataDict.OpSignal;
MotCtrlSignal2.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlSignal2.Description = '';
MotCtrlSignal2.DocUnits = 'Cnt';
MotCtrlSignal2.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlSignal2.EngDT = dt.s08;
MotCtrlSignal2.EngInit = -128;
MotCtrlSignal2.EngMin = -128;
MotCtrlSignal2.EngMax = 127;
MotCtrlSignal2.TestTolerance = 999;
MotCtrlSignal2.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlSignal2.WriteType = 'NonRte';

MotCtrlSignal3 = DataDict.OpSignal;
MotCtrlSignal3.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlSignal3.Description = '';
MotCtrlSignal3.DocUnits = 'Cnt';
MotCtrlSignal3.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlSignal3.EngDT = dt.s08;
MotCtrlSignal3.EngInit = -128;
MotCtrlSignal3.EngMin = -128;
MotCtrlSignal3.EngMax = 127;
MotCtrlSignal3.TestTolerance = 999;
MotCtrlSignal3.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlSignal3.WriteType = 'NonRte';

MotCtrlSignal4 = DataDict.OpSignal;
MotCtrlSignal4.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlSignal4.Description = '';
MotCtrlSignal4.DocUnits = 'Cnt';
MotCtrlSignal4.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlSignal4.EngDT = dt.s08;
MotCtrlSignal4.EngInit = -128;
MotCtrlSignal4.EngMin = -128;
MotCtrlSignal4.EngMax = 127;
MotCtrlSignal4.TestTolerance = 999;
MotCtrlSignal4.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlSignal4.WriteType = 'NonRte';

MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.EngDT = enum.TestEnum_u16;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.EngInit = TestEnum_u16.TestEnum_u16_Element3;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.EngMax = 65535;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.TestTolerance = 999;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.EngDT = dt.lgc;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.EngInit = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.EngMax = 1;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.TestTolerance = 999;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.DocUnits = 'MotNwtMtr';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.EngDT = dt.float32;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.EngInit = 1;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.EngMin = -8.8;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.EngMax = 8.8;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.TestTolerance = 999;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.EngDT = dt.s08;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.EngInit = -128;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.EngMin = -128;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.EngMax = 127;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.TestTolerance = 999;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.EngDT = dt.s16;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.EngInit = -32768;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.EngMin = -32768;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.EngMax = 32767;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.TestTolerance = 999;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.EngDT = dt.s32;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.EngInit = -2147483647;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.EngMin = -2147483648;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.EngMax = 2147483647;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.TestTolerance = 999;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.EngDT = dt.u08;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.EngInit = 255;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.EngMax = 255;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.TestTolerance = 999;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.EngDT = dt.u16;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.EngInit = 65535;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.EngMax = 65535;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.TestTolerance = 999;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngDT = dt.u16;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngInit =  ...
   [0            65535];
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngMax = 65535;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.TestTolerance = 999;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.EngDT = dt.u32;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.EngInit = 4294967295;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.EngMax = 4294967295;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.TestTolerance = 999;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadTwoMsEnum = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadTwoMsEnum.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlWriteMotCtrlReadTwoMsEnum.Description = '';
MotCtrlWriteMotCtrlReadTwoMsEnum.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadTwoMsEnum.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadTwoMsEnum.EngDT = enum.TestEnum_u16;
MotCtrlWriteMotCtrlReadTwoMsEnum.EngInit = TestEnum_u16.TestEnum_u16_Element3;
MotCtrlWriteMotCtrlReadTwoMsEnum.EngMin = 0;
MotCtrlWriteMotCtrlReadTwoMsEnum.EngMax = 65535;
MotCtrlWriteMotCtrlReadTwoMsEnum.TestTolerance = 999;
MotCtrlWriteMotCtrlReadTwoMsEnum.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadTwoMsEnum.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadTwoMsbool = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadTwoMsbool.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlWriteMotCtrlReadTwoMsbool.Description = '';
MotCtrlWriteMotCtrlReadTwoMsbool.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadTwoMsbool.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadTwoMsbool.EngDT = dt.lgc;
MotCtrlWriteMotCtrlReadTwoMsbool.EngInit = 1;
MotCtrlWriteMotCtrlReadTwoMsbool.EngMin = 0;
MotCtrlWriteMotCtrlReadTwoMsbool.EngMax = 1;
MotCtrlWriteMotCtrlReadTwoMsbool.TestTolerance = 999;
MotCtrlWriteMotCtrlReadTwoMsbool.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadTwoMsbool.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadTwoMsf32 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadTwoMsf32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadTwoMsf32.Description = '';
MotCtrlWriteMotCtrlReadTwoMsf32.DocUnits = 'MotNwtMtr';
MotCtrlWriteMotCtrlReadTwoMsf32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadTwoMsf32.EngDT = dt.float32;
MotCtrlWriteMotCtrlReadTwoMsf32.EngInit = 1;
MotCtrlWriteMotCtrlReadTwoMsf32.EngMin = -8.8;
MotCtrlWriteMotCtrlReadTwoMsf32.EngMax = 8.8;
MotCtrlWriteMotCtrlReadTwoMsf32.TestTolerance = 999;
MotCtrlWriteMotCtrlReadTwoMsf32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadTwoMsf32.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadTwoMss08 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadTwoMss08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlWriteMotCtrlReadTwoMss08.Description = '';
MotCtrlWriteMotCtrlReadTwoMss08.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadTwoMss08.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadTwoMss08.EngDT = dt.s08;
MotCtrlWriteMotCtrlReadTwoMss08.EngInit = -128;
MotCtrlWriteMotCtrlReadTwoMss08.EngMin = -128;
MotCtrlWriteMotCtrlReadTwoMss08.EngMax = 127;
MotCtrlWriteMotCtrlReadTwoMss08.TestTolerance = 999;
MotCtrlWriteMotCtrlReadTwoMss08.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadTwoMss08.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadTwoMss16 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadTwoMss16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlWriteMotCtrlReadTwoMss16.Description = '';
MotCtrlWriteMotCtrlReadTwoMss16.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadTwoMss16.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadTwoMss16.EngDT = dt.s16;
MotCtrlWriteMotCtrlReadTwoMss16.EngInit = -32768;
MotCtrlWriteMotCtrlReadTwoMss16.EngMin = -32768;
MotCtrlWriteMotCtrlReadTwoMss16.EngMax = 32767;
MotCtrlWriteMotCtrlReadTwoMss16.TestTolerance = 999;
MotCtrlWriteMotCtrlReadTwoMss16.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadTwoMss16.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadTwoMss32 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadTwoMss32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadTwoMss32.Description = '';
MotCtrlWriteMotCtrlReadTwoMss32.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadTwoMss32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadTwoMss32.EngDT = dt.s32;
MotCtrlWriteMotCtrlReadTwoMss32.EngInit = -2147483647;
MotCtrlWriteMotCtrlReadTwoMss32.EngMin = -2147483648;
MotCtrlWriteMotCtrlReadTwoMss32.EngMax = 2147483647;
MotCtrlWriteMotCtrlReadTwoMss32.TestTolerance = 999;
MotCtrlWriteMotCtrlReadTwoMss32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadTwoMss32.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadTwoMsu08 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadTwoMsu08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlWriteMotCtrlReadTwoMsu08.Description = '';
MotCtrlWriteMotCtrlReadTwoMsu08.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadTwoMsu08.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadTwoMsu08.EngDT = dt.u08;
MotCtrlWriteMotCtrlReadTwoMsu08.EngInit = 255;
MotCtrlWriteMotCtrlReadTwoMsu08.EngMin = 0;
MotCtrlWriteMotCtrlReadTwoMsu08.EngMax = 255;
MotCtrlWriteMotCtrlReadTwoMsu08.TestTolerance = 999;
MotCtrlWriteMotCtrlReadTwoMsu08.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadTwoMsu08.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadTwoMsu16 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadTwoMsu16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlWriteMotCtrlReadTwoMsu16.Description = '';
MotCtrlWriteMotCtrlReadTwoMsu16.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadTwoMsu16.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadTwoMsu16.EngDT = dt.u16;
MotCtrlWriteMotCtrlReadTwoMsu16.EngInit = 65535;
MotCtrlWriteMotCtrlReadTwoMsu16.EngMin = 0;
MotCtrlWriteMotCtrlReadTwoMsu16.EngMax = 65535;
MotCtrlWriteMotCtrlReadTwoMsu16.TestTolerance = 999;
MotCtrlWriteMotCtrlReadTwoMsu16.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadTwoMsu16.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadTwoMsu32 = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadTwoMsu32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadTwoMsu32.Description = '';
MotCtrlWriteMotCtrlReadTwoMsu32.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadTwoMsu32.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadTwoMsu32.EngDT = dt.u32;
MotCtrlWriteMotCtrlReadTwoMsu32.EngInit = 4294967295;
MotCtrlWriteMotCtrlReadTwoMsu32.EngMin = 0;
MotCtrlWriteMotCtrlReadTwoMsu32.EngMax = 4294967295;
MotCtrlWriteMotCtrlReadTwoMsu32.TestTolerance = 999;
MotCtrlWriteMotCtrlReadTwoMsu32.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadTwoMsu32.WriteType = 'NonRte';


MotCtrlWriteMotCtrlReadTwoMsu32Ary = DataDict.OpSignal;
MotCtrlWriteMotCtrlReadTwoMsu32Ary.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadTwoMsu32Ary.Description = '';
MotCtrlWriteMotCtrlReadTwoMsu32Ary.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadTwoMsu32Ary.SwcShoName = 'MotCtrlMgrMotCtrlWrite';
MotCtrlWriteMotCtrlReadTwoMsu32Ary.EngDT = dt.u32;
MotCtrlWriteMotCtrlReadTwoMsu32Ary.EngInit =  ...
   [0       4294967295];
MotCtrlWriteMotCtrlReadTwoMsu32Ary.EngMin = 0;
MotCtrlWriteMotCtrlReadTwoMsu32Ary.EngMax = 4294967295;
MotCtrlWriteMotCtrlReadTwoMsu32Ary.TestTolerance = 999;
MotCtrlWriteMotCtrlReadTwoMsu32Ary.WrittenIn = {'MotCtrlWriteRunPer1'};
MotCtrlWriteMotCtrlReadTwoMsu32Ary.WriteType = 'NonRte';



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

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
