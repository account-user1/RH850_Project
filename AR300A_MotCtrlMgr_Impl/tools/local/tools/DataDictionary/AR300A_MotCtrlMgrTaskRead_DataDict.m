%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jun-2016 11:15:34       %
%                                  Created with tool release: 2.41.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: czgng4 %          %
%%-----------------------------------------------------------------------%

AR300A = DataDict.FDD;
AR300A.Version = '1.0.X';
AR300A.LongName = 'Motor Control Manager Task Read';
AR300A.ShoName  = 'MotCtrlMgrTaskRead';
AR300A.DesignASIL = '';
AR300A.Description = '';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
TaskReadRunPer1 = DataDict.Runnable;
TaskReadRunPer1.Context = 'Rte';
TaskReadRunPer1.TimeStep = 0.002;
TaskReadRunPer1.Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

WriteMotCtrlReadMotCtrlReadTwoMsEnum = DataDict.IpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX XXXXX';
WriteMotCtrlReadMotCtrlReadTwoMsEnum.Description = '';
WriteMotCtrlReadMotCtrlReadTwoMsEnum.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsEnum.EngDT = enum.TestEnum_u16;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.EngInit = TestEnum_u16.TestEnum_u16_Element3;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.EngMax = 65535;
WriteMotCtrlReadMotCtrlReadTwoMsEnum.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsEnum.ReadType = 'Rte';


WriteMotCtrlReadMotCtrlReadTwoMsbool = DataDict.IpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsbool.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
WriteMotCtrlReadMotCtrlReadTwoMsbool.Description = '';
WriteMotCtrlReadMotCtrlReadTwoMsbool.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsbool.EngDT = dt.lgc;
WriteMotCtrlReadMotCtrlReadTwoMsbool.EngInit = 0;
WriteMotCtrlReadMotCtrlReadTwoMsbool.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsbool.EngMax = 1;
WriteMotCtrlReadMotCtrlReadTwoMsbool.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsbool.ReadType = 'Rte';


WriteMotCtrlReadMotCtrlReadTwoMsf32 = DataDict.IpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsf32.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
WriteMotCtrlReadMotCtrlReadTwoMsf32.Description = '';
WriteMotCtrlReadMotCtrlReadTwoMsf32.DocUnits = 'MotNwtMtr';
WriteMotCtrlReadMotCtrlReadTwoMsf32.EngDT = dt.float32;
WriteMotCtrlReadMotCtrlReadTwoMsf32.EngInit = 1;
WriteMotCtrlReadMotCtrlReadTwoMsf32.EngMin = -8.8;
WriteMotCtrlReadMotCtrlReadTwoMsf32.EngMax = 8.8;
WriteMotCtrlReadMotCtrlReadTwoMsf32.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsf32.ReadType = 'Rte';


WriteMotCtrlReadMotCtrlReadTwoMss08 = DataDict.IpSignal;
WriteMotCtrlReadMotCtrlReadTwoMss08.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 08';
WriteMotCtrlReadMotCtrlReadTwoMss08.Description = '';
WriteMotCtrlReadMotCtrlReadTwoMss08.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMss08.EngDT = dt.s08;
WriteMotCtrlReadMotCtrlReadTwoMss08.EngInit = -128;
WriteMotCtrlReadMotCtrlReadTwoMss08.EngMin = -128;
WriteMotCtrlReadMotCtrlReadTwoMss08.EngMax = 127;
WriteMotCtrlReadMotCtrlReadTwoMss08.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadMotCtrlReadTwoMss08.ReadType = 'Rte';


WriteMotCtrlReadMotCtrlReadTwoMss16 = DataDict.IpSignal;
WriteMotCtrlReadMotCtrlReadTwoMss16.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 16';
WriteMotCtrlReadMotCtrlReadTwoMss16.Description = '';
WriteMotCtrlReadMotCtrlReadTwoMss16.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMss16.EngDT = dt.s16;
WriteMotCtrlReadMotCtrlReadTwoMss16.EngInit = -32768;
WriteMotCtrlReadMotCtrlReadTwoMss16.EngMin = -32768;
WriteMotCtrlReadMotCtrlReadTwoMss16.EngMax = 32767;
WriteMotCtrlReadMotCtrlReadTwoMss16.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadMotCtrlReadTwoMss16.ReadType = 'Rte';


WriteMotCtrlReadMotCtrlReadTwoMss32 = DataDict.IpSignal;
WriteMotCtrlReadMotCtrlReadTwoMss32.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
WriteMotCtrlReadMotCtrlReadTwoMss32.Description = '';
WriteMotCtrlReadMotCtrlReadTwoMss32.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMss32.EngDT = dt.s32;
WriteMotCtrlReadMotCtrlReadTwoMss32.EngInit = -2147483647;
WriteMotCtrlReadMotCtrlReadTwoMss32.EngMin = -2147483648;
WriteMotCtrlReadMotCtrlReadTwoMss32.EngMax = 2147483647;
WriteMotCtrlReadMotCtrlReadTwoMss32.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadMotCtrlReadTwoMss32.ReadType = 'Rte';


WriteMotCtrlReadMotCtrlReadTwoMsu08 = DataDict.IpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsu08.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 08';
WriteMotCtrlReadMotCtrlReadTwoMsu08.Description = '';
WriteMotCtrlReadMotCtrlReadTwoMsu08.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsu08.EngDT = dt.u08;
WriteMotCtrlReadMotCtrlReadTwoMsu08.EngInit = 255;
WriteMotCtrlReadMotCtrlReadTwoMsu08.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu08.EngMax = 255;
WriteMotCtrlReadMotCtrlReadTwoMsu08.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsu08.ReadType = 'Rte';


WriteMotCtrlReadMotCtrlReadTwoMsu16 = DataDict.IpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsu16.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 16';
WriteMotCtrlReadMotCtrlReadTwoMsu16.Description = '';
WriteMotCtrlReadMotCtrlReadTwoMsu16.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsu16.EngDT = dt.u16;
WriteMotCtrlReadMotCtrlReadTwoMsu16.EngInit = 65535;
WriteMotCtrlReadMotCtrlReadTwoMsu16.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu16.EngMax = 65535;
WriteMotCtrlReadMotCtrlReadTwoMsu16.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsu16.ReadType = 'Rte';


WriteMotCtrlReadMotCtrlReadTwoMsu16Ary = DataDict.IpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.Description = '';
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngDT = dt.u16;
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngInit =  ...
   [0            65535];
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngMax = 65535;
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsu16Ary.ReadType = 'Rte';


WriteMotCtrlReadMotCtrlReadTwoMsu32 = DataDict.IpSignal;
WriteMotCtrlReadMotCtrlReadTwoMsu32.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
WriteMotCtrlReadMotCtrlReadTwoMsu32.Description = '';
WriteMotCtrlReadMotCtrlReadTwoMsu32.DocUnits = 'Cnt';
WriteMotCtrlReadMotCtrlReadTwoMsu32.EngDT = dt.u32;
WriteMotCtrlReadMotCtrlReadTwoMsu32.EngInit = 4294967295;
WriteMotCtrlReadMotCtrlReadTwoMsu32.EngMin = 0;
WriteMotCtrlReadMotCtrlReadTwoMsu32.EngMax = 4294967295;
WriteMotCtrlReadMotCtrlReadTwoMsu32.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadMotCtrlReadTwoMsu32.ReadType = 'Rte';


WriteMotCtrlReadTwoMsEnum = DataDict.IpSignal;
WriteMotCtrlReadTwoMsEnum.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX XXXXX';
WriteMotCtrlReadTwoMsEnum.Description = '';
WriteMotCtrlReadTwoMsEnum.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsEnum.EngDT = enum.TestEnum_u16;
WriteMotCtrlReadTwoMsEnum.EngInit = TestEnum_u16.TestEnum_u16_Element3;
WriteMotCtrlReadTwoMsEnum.EngMin = 0;
WriteMotCtrlReadTwoMsEnum.EngMax = 65535;
WriteMotCtrlReadTwoMsEnum.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadTwoMsEnum.ReadType = 'Rte';


WriteMotCtrlReadTwoMsbool = DataDict.IpSignal;
WriteMotCtrlReadTwoMsbool.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
WriteMotCtrlReadTwoMsbool.Description = '';
WriteMotCtrlReadTwoMsbool.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsbool.EngDT = dt.lgc;
WriteMotCtrlReadTwoMsbool.EngInit = 1;
WriteMotCtrlReadTwoMsbool.EngMin = 0;
WriteMotCtrlReadTwoMsbool.EngMax = 1;
WriteMotCtrlReadTwoMsbool.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadTwoMsbool.ReadType = 'Rte';


WriteMotCtrlReadTwoMsf32 = DataDict.IpSignal;
WriteMotCtrlReadTwoMsf32.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
WriteMotCtrlReadTwoMsf32.Description = '';
WriteMotCtrlReadTwoMsf32.DocUnits = 'MotNwtMtr';
WriteMotCtrlReadTwoMsf32.EngDT = dt.float32;
WriteMotCtrlReadTwoMsf32.EngInit = 1;
WriteMotCtrlReadTwoMsf32.EngMin = -8.8;
WriteMotCtrlReadTwoMsf32.EngMax = 8.8;
WriteMotCtrlReadTwoMsf32.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadTwoMsf32.ReadType = 'Rte';


WriteMotCtrlReadTwoMss08 = DataDict.IpSignal;
WriteMotCtrlReadTwoMss08.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 08';
WriteMotCtrlReadTwoMss08.Description = '';
WriteMotCtrlReadTwoMss08.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMss08.EngDT = dt.s08;
WriteMotCtrlReadTwoMss08.EngInit = -128;
WriteMotCtrlReadTwoMss08.EngMin = -128;
WriteMotCtrlReadTwoMss08.EngMax = 127;
WriteMotCtrlReadTwoMss08.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadTwoMss08.ReadType = 'Rte';


WriteMotCtrlReadTwoMss16 = DataDict.IpSignal;
WriteMotCtrlReadTwoMss16.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 16';
WriteMotCtrlReadTwoMss16.Description = '';
WriteMotCtrlReadTwoMss16.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMss16.EngDT = dt.s16;
WriteMotCtrlReadTwoMss16.EngInit = -32768;
WriteMotCtrlReadTwoMss16.EngMin = -32768;
WriteMotCtrlReadTwoMss16.EngMax = 32767;
WriteMotCtrlReadTwoMss16.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadTwoMss16.ReadType = 'Rte';


WriteMotCtrlReadTwoMss32 = DataDict.IpSignal;
WriteMotCtrlReadTwoMss32.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
WriteMotCtrlReadTwoMss32.Description = '';
WriteMotCtrlReadTwoMss32.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMss32.EngDT = dt.s32;
WriteMotCtrlReadTwoMss32.EngInit = -2147483647;
WriteMotCtrlReadTwoMss32.EngMin = -2147483648;
WriteMotCtrlReadTwoMss32.EngMax = 2147483647;
WriteMotCtrlReadTwoMss32.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadTwoMss32.ReadType = 'Rte';


WriteMotCtrlReadTwoMsu08 = DataDict.IpSignal;
WriteMotCtrlReadTwoMsu08.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 08';
WriteMotCtrlReadTwoMsu08.Description = '';
WriteMotCtrlReadTwoMsu08.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsu08.EngDT = dt.u08;
WriteMotCtrlReadTwoMsu08.EngInit = 255;
WriteMotCtrlReadTwoMsu08.EngMin = 0;
WriteMotCtrlReadTwoMsu08.EngMax = 255;
WriteMotCtrlReadTwoMsu08.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadTwoMsu08.ReadType = 'Rte';


WriteMotCtrlReadTwoMsu16 = DataDict.IpSignal;
WriteMotCtrlReadTwoMsu16.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 16';
WriteMotCtrlReadTwoMsu16.Description = '';
WriteMotCtrlReadTwoMsu16.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsu16.EngDT = dt.u16;
WriteMotCtrlReadTwoMsu16.EngInit = 65535;
WriteMotCtrlReadTwoMsu16.EngMin = 0;
WriteMotCtrlReadTwoMsu16.EngMax = 65535;
WriteMotCtrlReadTwoMsu16.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadTwoMsu16.ReadType = 'Rte';


WriteMotCtrlReadTwoMsu32 = DataDict.IpSignal;
WriteMotCtrlReadTwoMsu32.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
WriteMotCtrlReadTwoMsu32.Description = '';
WriteMotCtrlReadTwoMsu32.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsu32.EngDT = dt.u32;
WriteMotCtrlReadTwoMsu32.EngInit = 4294967295;
WriteMotCtrlReadTwoMsu32.EngMin = 0;
WriteMotCtrlReadTwoMsu32.EngMax = 4294967295;
WriteMotCtrlReadTwoMsu32.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadTwoMsu32.ReadType = 'Rte';


WriteMotCtrlReadTwoMsu32Ary = DataDict.IpSignal;
WriteMotCtrlReadTwoMsu32Ary.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
WriteMotCtrlReadTwoMsu32Ary.Description = '';
WriteMotCtrlReadTwoMsu32Ary.DocUnits = 'Cnt';
WriteMotCtrlReadTwoMsu32Ary.EngDT = dt.u32;
WriteMotCtrlReadTwoMsu32Ary.EngInit =  ...
   [0       4294967295];
WriteMotCtrlReadTwoMsu32Ary.EngMin = 0;
WriteMotCtrlReadTwoMsu32Ary.EngMax = 4294967295;
WriteMotCtrlReadTwoMsu32Ary.ReadIn = {'TaskReadRunPer1'};
WriteMotCtrlReadTwoMsu32Ary.ReadType = 'Rte';

SignalA = DataDict.IpSignal;
SignalA.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
SignalA.Description = '';
SignalA.DocUnits = 'Cnt';
SignalA.EngDT = dt.lgc;
SignalA.EngInit = 0;
SignalA.EngMin = 0;
SignalA.EngMax = 1;
SignalA.ReadIn = {'TaskReadRunPer1'};
SignalA.ReadType = 'Rte';

SignalY = DataDict.IpSignal;
SignalY.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
SignalY.Description = '';
SignalY.DocUnits = 'Cnt';
SignalY.EngDT = dt.s08;
SignalY.EngInit = -128;
SignalY.EngMin = -128;
SignalY.EngMax = 127;
SignalY.ReadIn = {'TaskReadRunPer1'};
SignalY.ReadType = 'Rte';

Signal3 = DataDict.IpSignal;
Signal3.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
Signal3.Description = '';
Signal3.DocUnits = 'Cnt';
Signal3.EngDT = dt.s08;
Signal3.EngInit = -128;
Signal3.EngMin = -128;
Signal3.EngMax = 127;
Signal3.ReadIn = {'TaskReadRunPer1'};
Signal3.ReadType = 'Rte';

Signal5 = DataDict.IpSignal;
Signal5.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
Signal5.Description = '';
Signal5.DocUnits = 'Cnt';
Signal5.EngDT = dt.lgc;
Signal5.EngInit = 0;
Signal5.EngMin = 0;
Signal5.EngMax = 1;
Signal5.ReadIn = {'TaskReadRunPer1'};
Signal5.ReadType = 'Rte';

SignalV = DataDict.IpSignal;
SignalV.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
SignalV.Description = '';
SignalV.DocUnits = 'Cnt';
SignalV.EngDT = dt.s08;
SignalV.EngInit = -128;
SignalV.EngMin = -128;
SignalV.EngMax = 127;
SignalV.ReadIn = {'TaskReadRunPer1'};
SignalV.ReadType = 'Rte';

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

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
