%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jun-2016 12:47:53       %
%                                  Created with tool release: 2.41.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: czgng4 %          %
%%-----------------------------------------------------------------------%

AR300B = DataDict.FDD;
AR300B.Version = '1.0.X';
AR300B.LongName = 'Motor Control Manager Task Write';
AR300B.ShoName  = 'MotCtrlMgrTaskWrite';
AR300B.DesignASIL = '';
AR300B.Description = '';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
TaskWriteRunPer1 = DataDict.Runnable;
TaskWriteRunPer1.Context = 'Rte';
TaskWriteRunPer1.TimeStep = 0.01;
TaskWriteRunPer1.Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
ReadMotCtrlWriteTwoMsEnum = DataDict.OpSignal;
ReadMotCtrlWriteTwoMsEnum.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
ReadMotCtrlWriteTwoMsEnum.Description = '';
ReadMotCtrlWriteTwoMsEnum.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMsEnum.SwcShoName = '';
ReadMotCtrlWriteTwoMsEnum.EngDT = enum.TestEnum_u32;
ReadMotCtrlWriteTwoMsEnum.EngInit = TestEnum_u32.TestEnum_u32_Element3;
ReadMotCtrlWriteTwoMsEnum.EngMin = 0;
ReadMotCtrlWriteTwoMsEnum.EngMax = 2147483647;
ReadMotCtrlWriteTwoMsEnum.TestTolerance = 999;
ReadMotCtrlWriteTwoMsEnum.WrittenIn = {'TaskWriteRunPer1'};
ReadMotCtrlWriteTwoMsEnum.WriteType = 'Rte';


ReadMotCtrlWriteTwoMsbool = DataDict.OpSignal;
ReadMotCtrlWriteTwoMsbool.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
ReadMotCtrlWriteTwoMsbool.Description = '';
ReadMotCtrlWriteTwoMsbool.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMsbool.SwcShoName = '';
ReadMotCtrlWriteTwoMsbool.EngDT = dt.lgc;
ReadMotCtrlWriteTwoMsbool.EngInit = 0;
ReadMotCtrlWriteTwoMsbool.EngMin = 0;
ReadMotCtrlWriteTwoMsbool.EngMax = 1;
ReadMotCtrlWriteTwoMsbool.TestTolerance = 999;
ReadMotCtrlWriteTwoMsbool.WrittenIn = {'TaskWriteRunPer1'};
ReadMotCtrlWriteTwoMsbool.WriteType = 'Rte';


ReadMotCtrlWriteTwoMsf32 = DataDict.OpSignal;
ReadMotCtrlWriteTwoMsf32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
ReadMotCtrlWriteTwoMsf32.Description = '';
ReadMotCtrlWriteTwoMsf32.DocUnits = 'MotNwtMtr';
ReadMotCtrlWriteTwoMsf32.SwcShoName = '';
ReadMotCtrlWriteTwoMsf32.EngDT = dt.float32;
ReadMotCtrlWriteTwoMsf32.EngInit = 1;
ReadMotCtrlWriteTwoMsf32.EngMin = -8.8;
ReadMotCtrlWriteTwoMsf32.EngMax = 8.8;
ReadMotCtrlWriteTwoMsf32.TestTolerance = 999;
ReadMotCtrlWriteTwoMsf32.WrittenIn = {'TaskWriteRunPer1'};
ReadMotCtrlWriteTwoMsf32.WriteType = 'Rte';


ReadMotCtrlWriteTwoMss08 = DataDict.OpSignal;
ReadMotCtrlWriteTwoMss08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
ReadMotCtrlWriteTwoMss08.Description = '';
ReadMotCtrlWriteTwoMss08.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMss08.SwcShoName = '';
ReadMotCtrlWriteTwoMss08.EngDT = dt.s08;
ReadMotCtrlWriteTwoMss08.EngInit = -128;
ReadMotCtrlWriteTwoMss08.EngMin = -128;
ReadMotCtrlWriteTwoMss08.EngMax = 127;
ReadMotCtrlWriteTwoMss08.TestTolerance = 999;
ReadMotCtrlWriteTwoMss08.WrittenIn = {'TaskWriteRunPer1'};
ReadMotCtrlWriteTwoMss08.WriteType = 'Rte';


ReadMotCtrlWriteTwoMss16 = DataDict.OpSignal;
ReadMotCtrlWriteTwoMss16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
ReadMotCtrlWriteTwoMss16.Description = '';
ReadMotCtrlWriteTwoMss16.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMss16.SwcShoName = '';
ReadMotCtrlWriteTwoMss16.EngDT = dt.s16;
ReadMotCtrlWriteTwoMss16.EngInit = -32768;
ReadMotCtrlWriteTwoMss16.EngMin = -32768;
ReadMotCtrlWriteTwoMss16.EngMax = 32767;
ReadMotCtrlWriteTwoMss16.TestTolerance = 999;
ReadMotCtrlWriteTwoMss16.WrittenIn = {'TaskWriteRunPer1'};
ReadMotCtrlWriteTwoMss16.WriteType = 'Rte';


ReadMotCtrlWriteTwoMss32 = DataDict.OpSignal;
ReadMotCtrlWriteTwoMss32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
ReadMotCtrlWriteTwoMss32.Description = '';
ReadMotCtrlWriteTwoMss32.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMss32.SwcShoName = '';
ReadMotCtrlWriteTwoMss32.EngDT = dt.s32;
ReadMotCtrlWriteTwoMss32.EngInit = -2147483647;
ReadMotCtrlWriteTwoMss32.EngMin = -2147483648;
ReadMotCtrlWriteTwoMss32.EngMax = 2147483647;
ReadMotCtrlWriteTwoMss32.TestTolerance = 999;
ReadMotCtrlWriteTwoMss32.WrittenIn = {'TaskWriteRunPer1'};
ReadMotCtrlWriteTwoMss32.WriteType = 'Rte';


ReadMotCtrlWriteTwoMss32Ary = DataDict.OpSignal;
ReadMotCtrlWriteTwoMss32Ary.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
ReadMotCtrlWriteTwoMss32Ary.Description = '';
ReadMotCtrlWriteTwoMss32Ary.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMss32Ary.SwcShoName = '';
ReadMotCtrlWriteTwoMss32Ary.EngDT = dt.s32;
ReadMotCtrlWriteTwoMss32Ary.EngInit =  ...
   [-2147483647       2147483647];
ReadMotCtrlWriteTwoMss32Ary.EngMin = -2147483648;
ReadMotCtrlWriteTwoMss32Ary.EngMax = 2147483647;
ReadMotCtrlWriteTwoMss32Ary.TestTolerance = 999;
ReadMotCtrlWriteTwoMss32Ary.WrittenIn = {'TaskWriteRunPer1'};
ReadMotCtrlWriteTwoMss32Ary.WriteType = 'Rte';


ReadMotCtrlWriteTwoMsu08 = DataDict.OpSignal;
ReadMotCtrlWriteTwoMsu08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
ReadMotCtrlWriteTwoMsu08.Description = '';
ReadMotCtrlWriteTwoMsu08.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMsu08.SwcShoName = '';
ReadMotCtrlWriteTwoMsu08.EngDT = dt.u08;
ReadMotCtrlWriteTwoMsu08.EngInit = 255;
ReadMotCtrlWriteTwoMsu08.EngMin = 0;
ReadMotCtrlWriteTwoMsu08.EngMax = 255;
ReadMotCtrlWriteTwoMsu08.TestTolerance = 999;
ReadMotCtrlWriteTwoMsu08.WrittenIn = {'TaskWriteRunPer1'};
ReadMotCtrlWriteTwoMsu08.WriteType = 'Rte';


ReadMotCtrlWriteTwoMsu16 = DataDict.OpSignal;
ReadMotCtrlWriteTwoMsu16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
ReadMotCtrlWriteTwoMsu16.Description = '';
ReadMotCtrlWriteTwoMsu16.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMsu16.SwcShoName = '';
ReadMotCtrlWriteTwoMsu16.EngDT = dt.u16;
ReadMotCtrlWriteTwoMsu16.EngInit = 65535;
ReadMotCtrlWriteTwoMsu16.EngMin = 0;
ReadMotCtrlWriteTwoMsu16.EngMax = 65535;
ReadMotCtrlWriteTwoMsu16.TestTolerance = 999;
ReadMotCtrlWriteTwoMsu16.WrittenIn = {'TaskWriteRunPer1'};
ReadMotCtrlWriteTwoMsu16.WriteType = 'Rte';


ReadMotCtrlWriteTwoMsu32 = DataDict.OpSignal;
ReadMotCtrlWriteTwoMsu32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
ReadMotCtrlWriteTwoMsu32.Description = '';
ReadMotCtrlWriteTwoMsu32.DocUnits = 'Cnt';
ReadMotCtrlWriteTwoMsu32.SwcShoName = '';
ReadMotCtrlWriteTwoMsu32.EngDT = dt.u32;
ReadMotCtrlWriteTwoMsu32.EngInit = 4294967295;
ReadMotCtrlWriteTwoMsu32.EngMin = 0;
ReadMotCtrlWriteTwoMsu32.EngMax = 4294967295;
ReadMotCtrlWriteTwoMsu32.TestTolerance = 999;
ReadMotCtrlWriteTwoMsu32.WrittenIn = {'TaskWriteRunPer1'};
ReadMotCtrlWriteTwoMsu32.WriteType = 'Rte';


Signal0 = DataDict.OpSignal;
Signal0.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
Signal0.Description = '';
Signal0.DocUnits = 'Cnt';
Signal0.SwcShoName = '';
Signal0.EngDT = dt.lgc;
Signal0.EngInit = 0;
Signal0.EngMin = 0;
Signal0.EngMax = 1;
Signal0.TestTolerance = 999;
Signal0.WrittenIn = {'TaskWriteRunPer1'};
Signal0.WriteType = 'Rte';

Signal5 = DataDict.OpSignal;
Signal5.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
Signal5.Description = '';
Signal5.DocUnits = 'Cnt';
Signal5.SwcShoName = '';
Signal5.EngDT = dt.lgc;
Signal5.EngInit = 0;
Signal5.EngMin = 0;
Signal5.EngMax = 1;
Signal5.TestTolerance = 999;
Signal5.WrittenIn = {'TaskWriteRunPer1'};
Signal5.WriteType = 'Rte';

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
