%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jun-2016 17:43:08       %
%                                  Created with tool release: 2.41.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: czgng4 %          %
%%-----------------------------------------------------------------------%

AR300D = DataDict.FDD;
AR300D.Version = '1.0.X';
AR300D.LongName = 'Motor Control Manager Motor Control Read';
AR300D.ShoName  = 'MotCtrlMgrMotCtrlRead';
AR300D.DesignASIL = '';
AR300D.Description = '';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotCtrlReadRunPer1 = DataDict.Runnable;
MotCtrlReadRunPer1.Context = 'NonRte';
MotCtrlReadRunPer1.TimeStep = 'MotorControlx2';
MotCtrlReadRunPer1.Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotCtrlReadMotCtrlWriteMotCtrlEnum = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrlEnum.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrlEnum.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlEnum.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrlEnum.EngDT = enum.TestEnum_u08;
MotCtrlReadMotCtrlWriteMotCtrlEnum.EngInit = TestEnum_u08.TestEnum_u08_Element3;
MotCtrlReadMotCtrlWriteMotCtrlEnum.EngMin = 0;
MotCtrlReadMotCtrlWriteMotCtrlEnum.EngMax = 255;
MotCtrlReadMotCtrlWriteMotCtrlEnum.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlEnum.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlbool = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrlbool.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadMotCtrlWriteMotCtrlbool.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlbool.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrlbool.EngDT = dt.lgc;
MotCtrlReadMotCtrlWriteMotCtrlbool.EngInit = 0;
MotCtrlReadMotCtrlWriteMotCtrlbool.EngMin = 0;
MotCtrlReadMotCtrlWriteMotCtrlbool.EngMax = 1;
MotCtrlReadMotCtrlWriteMotCtrlbool.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlbool.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlf32 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrlf32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrlf32.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlf32.DocUnits = 'MotNwtMtr';
MotCtrlReadMotCtrlWriteMotCtrlf32.EngDT = dt.float32;
MotCtrlReadMotCtrlWriteMotCtrlf32.EngInit = 1;
MotCtrlReadMotCtrlWriteMotCtrlf32.EngMin = -8.8;
MotCtrlReadMotCtrlWriteMotCtrlf32.EngMax = 8.8;
MotCtrlReadMotCtrlWriteMotCtrlf32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlf32.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlf32Ary = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.DocUnits = 'MotNwtMtr';
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.EngDT = dt.float32;
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.EngInit =  ...
   [1                2                3                4];
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.EngMin = -8.8;
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.EngMax = 8.8;
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlf32Ary.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrls08 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrls08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrls08.Description = '';
MotCtrlReadMotCtrlWriteMotCtrls08.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrls08.EngDT = dt.s08;
MotCtrlReadMotCtrlWriteMotCtrls08.EngInit = -128;
MotCtrlReadMotCtrlWriteMotCtrls08.EngMin = -128;
MotCtrlReadMotCtrlWriteMotCtrls08.EngMax = 127;
MotCtrlReadMotCtrlWriteMotCtrls08.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrls08.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrls08Ary = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrls08Ary.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadMotCtrlWriteMotCtrls08Ary.Description = '';
MotCtrlReadMotCtrlWriteMotCtrls08Ary.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrls08Ary.EngDT = dt.s08;
MotCtrlReadMotCtrlWriteMotCtrls08Ary.EngInit =  ...
   [-128              127];
MotCtrlReadMotCtrlWriteMotCtrls08Ary.EngMin = -128;
MotCtrlReadMotCtrlWriteMotCtrls08Ary.EngMax = 127;
MotCtrlReadMotCtrlWriteMotCtrls08Ary.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrls08Ary.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrls16 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrls16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrls16.Description = '';
MotCtrlReadMotCtrlWriteMotCtrls16.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrls16.EngDT = dt.s16;
MotCtrlReadMotCtrlWriteMotCtrls16.EngInit = -32768;
MotCtrlReadMotCtrlWriteMotCtrls16.EngMin = -32768;
MotCtrlReadMotCtrlWriteMotCtrls16.EngMax = 32767;
MotCtrlReadMotCtrlWriteMotCtrls16.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrls16.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrls32 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrls32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrls32.Description = '';
MotCtrlReadMotCtrlWriteMotCtrls32.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrls32.EngDT = dt.s32;
MotCtrlReadMotCtrlWriteMotCtrls32.EngInit = -2147483647;
MotCtrlReadMotCtrlWriteMotCtrls32.EngMin = -2147483648;
MotCtrlReadMotCtrlWriteMotCtrls32.EngMax = 2147483647;
MotCtrlReadMotCtrlWriteMotCtrls32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrls32.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlu08 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrlu08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrlu08.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlu08.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrlu08.EngDT = dt.u08;
MotCtrlReadMotCtrlWriteMotCtrlu08.EngInit = 255;
MotCtrlReadMotCtrlWriteMotCtrlu08.EngMin = 0;
MotCtrlReadMotCtrlWriteMotCtrlu08.EngMax = 255;
MotCtrlReadMotCtrlWriteMotCtrlu08.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlu08.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlu16 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrlu16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrlu16.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlu16.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrlu16.EngDT = dt.u16;
MotCtrlReadMotCtrlWriteMotCtrlu16.EngInit = 65535;
MotCtrlReadMotCtrlWriteMotCtrlu16.EngMin = 0;
MotCtrlReadMotCtrlWriteMotCtrlu16.EngMax = 65535;
MotCtrlReadMotCtrlWriteMotCtrlu16.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlu16.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteMotCtrlu32 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteMotCtrlu32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteMotCtrlu32.Description = '';
MotCtrlReadMotCtrlWriteMotCtrlu32.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteMotCtrlu32.EngDT = dt.u32;
MotCtrlReadMotCtrlWriteMotCtrlu32.EngInit = 4294967295;
MotCtrlReadMotCtrlWriteMotCtrlu32.EngMin = 0;
MotCtrlReadMotCtrlWriteMotCtrlu32.EngMax = 4294967295;
MotCtrlReadMotCtrlWriteMotCtrlu32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteMotCtrlu32.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteNoneEnum = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteNoneEnum.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteNoneEnum.Description = '';
MotCtrlReadMotCtrlWriteNoneEnum.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteNoneEnum.EngDT = enum.TestEnum_u32;
MotCtrlReadMotCtrlWriteNoneEnum.EngInit = TestEnum_u32.TestEnum_u32_Element3;
MotCtrlReadMotCtrlWriteNoneEnum.EngMin = 0;
MotCtrlReadMotCtrlWriteNoneEnum.EngMax = 2147483647;
MotCtrlReadMotCtrlWriteNoneEnum.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteNoneEnum.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteNonebool = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteNonebool.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadMotCtrlWriteNonebool.Description = '';
MotCtrlReadMotCtrlWriteNonebool.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteNonebool.EngDT = dt.lgc;
MotCtrlReadMotCtrlWriteNonebool.EngInit = 1;
MotCtrlReadMotCtrlWriteNonebool.EngMin = 0;
MotCtrlReadMotCtrlWriteNonebool.EngMax = 1;
MotCtrlReadMotCtrlWriteNonebool.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteNonebool.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteNonef32 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteNonef32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadMotCtrlWriteNonef32.Description = '';
MotCtrlReadMotCtrlWriteNonef32.DocUnits = 'MotNwtMtr';
MotCtrlReadMotCtrlWriteNonef32.EngDT = dt.float32;
MotCtrlReadMotCtrlWriteNonef32.EngInit = 1;
MotCtrlReadMotCtrlWriteNonef32.EngMin = -8.8;
MotCtrlReadMotCtrlWriteNonef32.EngMax = 8.8;
MotCtrlReadMotCtrlWriteNonef32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteNonef32.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteNones08 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteNones08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadMotCtrlWriteNones08.Description = '';
MotCtrlReadMotCtrlWriteNones08.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteNones08.EngDT = dt.s08;
MotCtrlReadMotCtrlWriteNones08.EngInit = -128;
MotCtrlReadMotCtrlWriteNones08.EngMin = -128;
MotCtrlReadMotCtrlWriteNones08.EngMax = 127;
MotCtrlReadMotCtrlWriteNones08.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteNones08.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteNones16 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteNones16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlReadMotCtrlWriteNones16.Description = '';
MotCtrlReadMotCtrlWriteNones16.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteNones16.EngDT = dt.s16;
MotCtrlReadMotCtrlWriteNones16.EngInit = -32768;
MotCtrlReadMotCtrlWriteNones16.EngMin = -32768;
MotCtrlReadMotCtrlWriteNones16.EngMax = 32767;
MotCtrlReadMotCtrlWriteNones16.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteNones16.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteNones16Ary = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteNones16Ary.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlReadMotCtrlWriteNones16Ary.Description = '';
MotCtrlReadMotCtrlWriteNones16Ary.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteNones16Ary.EngDT = dt.s16;
MotCtrlReadMotCtrlWriteNones16Ary.EngInit =  ...
   [-32768            32767];
MotCtrlReadMotCtrlWriteNones16Ary.EngMin = -32768;
MotCtrlReadMotCtrlWriteNones16Ary.EngMax = 32767;
MotCtrlReadMotCtrlWriteNones16Ary.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteNones16Ary.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteNones32 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteNones32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadMotCtrlWriteNones32.Description = '';
MotCtrlReadMotCtrlWriteNones32.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteNones32.EngDT = dt.s32;
MotCtrlReadMotCtrlWriteNones32.EngInit = -2147483647;
MotCtrlReadMotCtrlWriteNones32.EngMin = -2147483648;
MotCtrlReadMotCtrlWriteNones32.EngMax = 2147483647;
MotCtrlReadMotCtrlWriteNones32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteNones32.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteNoneu08 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteNoneu08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadMotCtrlWriteNoneu08.Description = '';
MotCtrlReadMotCtrlWriteNoneu08.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteNoneu08.EngDT = dt.u08;
MotCtrlReadMotCtrlWriteNoneu08.EngInit = 255;
MotCtrlReadMotCtrlWriteNoneu08.EngMin = 0;
MotCtrlReadMotCtrlWriteNoneu08.EngMax = 255;
MotCtrlReadMotCtrlWriteNoneu08.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteNoneu08.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteNoneu16 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteNoneu16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlReadMotCtrlWriteNoneu16.Description = '';
MotCtrlReadMotCtrlWriteNoneu16.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteNoneu16.EngDT = dt.u16;
MotCtrlReadMotCtrlWriteNoneu16.EngInit = 65535;
MotCtrlReadMotCtrlWriteNoneu16.EngMin = 0;
MotCtrlReadMotCtrlWriteNoneu16.EngMax = 65535;
MotCtrlReadMotCtrlWriteNoneu16.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteNoneu16.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteNoneu32 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteNoneu32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadMotCtrlWriteNoneu32.Description = '';
MotCtrlReadMotCtrlWriteNoneu32.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteNoneu32.EngDT = dt.u32;
MotCtrlReadMotCtrlWriteNoneu32.EngInit = 4294967295;
MotCtrlReadMotCtrlWriteNoneu32.EngMin = 0;
MotCtrlReadMotCtrlWriteNoneu32.EngMax = 4294967295;
MotCtrlReadMotCtrlWriteNoneu32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteNoneu32.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteTwoMsEnum = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteTwoMsEnum.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlReadMotCtrlWriteTwoMsEnum.Description = '';
MotCtrlReadMotCtrlWriteTwoMsEnum.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteTwoMsEnum.EngDT = enum.TestEnum_u32;
MotCtrlReadMotCtrlWriteTwoMsEnum.EngInit = TestEnum_u32.TestEnum_u32_Element3;
MotCtrlReadMotCtrlWriteTwoMsEnum.EngMin = 0;
MotCtrlReadMotCtrlWriteTwoMsEnum.EngMax = 2147483647;
MotCtrlReadMotCtrlWriteTwoMsEnum.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteTwoMsEnum.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteTwoMsbool = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteTwoMsbool.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadMotCtrlWriteTwoMsbool.Description = '';
MotCtrlReadMotCtrlWriteTwoMsbool.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteTwoMsbool.EngDT = dt.lgc;
MotCtrlReadMotCtrlWriteTwoMsbool.EngInit = 0;
MotCtrlReadMotCtrlWriteTwoMsbool.EngMin = 0;
MotCtrlReadMotCtrlWriteTwoMsbool.EngMax = 1;
MotCtrlReadMotCtrlWriteTwoMsbool.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteTwoMsbool.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteTwoMsf32 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteTwoMsf32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadMotCtrlWriteTwoMsf32.Description = '';
MotCtrlReadMotCtrlWriteTwoMsf32.DocUnits = 'MotNwtMtr';
MotCtrlReadMotCtrlWriteTwoMsf32.EngDT = dt.float32;
MotCtrlReadMotCtrlWriteTwoMsf32.EngInit = 1;
MotCtrlReadMotCtrlWriteTwoMsf32.EngMin = -8.8;
MotCtrlReadMotCtrlWriteTwoMsf32.EngMax = 8.8;
MotCtrlReadMotCtrlWriteTwoMsf32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteTwoMsf32.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteTwoMss08 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteTwoMss08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadMotCtrlWriteTwoMss08.Description = '';
MotCtrlReadMotCtrlWriteTwoMss08.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteTwoMss08.EngDT = dt.s08;
MotCtrlReadMotCtrlWriteTwoMss08.EngInit = -128;
MotCtrlReadMotCtrlWriteTwoMss08.EngMin = -128;
MotCtrlReadMotCtrlWriteTwoMss08.EngMax = 127;
MotCtrlReadMotCtrlWriteTwoMss08.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteTwoMss08.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteTwoMss16 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteTwoMss16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlReadMotCtrlWriteTwoMss16.Description = '';
MotCtrlReadMotCtrlWriteTwoMss16.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteTwoMss16.EngDT = dt.s16;
MotCtrlReadMotCtrlWriteTwoMss16.EngInit = -32768;
MotCtrlReadMotCtrlWriteTwoMss16.EngMin = -32768;
MotCtrlReadMotCtrlWriteTwoMss16.EngMax = 32767;
MotCtrlReadMotCtrlWriteTwoMss16.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteTwoMss16.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteTwoMss32 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteTwoMss32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadMotCtrlWriteTwoMss32.Description = '';
MotCtrlReadMotCtrlWriteTwoMss32.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteTwoMss32.EngDT = dt.s32;
MotCtrlReadMotCtrlWriteTwoMss32.EngInit = -2147483647;
MotCtrlReadMotCtrlWriteTwoMss32.EngMin = -2147483648;
MotCtrlReadMotCtrlWriteTwoMss32.EngMax = 2147483647;
MotCtrlReadMotCtrlWriteTwoMss32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteTwoMss32.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteTwoMss32Ary = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteTwoMss32Ary.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadMotCtrlWriteTwoMss32Ary.Description = '';
MotCtrlReadMotCtrlWriteTwoMss32Ary.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteTwoMss32Ary.EngDT = dt.s32;
MotCtrlReadMotCtrlWriteTwoMss32Ary.EngInit =  ...
   [-2147483647       2147483647];
MotCtrlReadMotCtrlWriteTwoMss32Ary.EngMin = -2147483648;
MotCtrlReadMotCtrlWriteTwoMss32Ary.EngMax = 2147483647;
MotCtrlReadMotCtrlWriteTwoMss32Ary.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteTwoMss32Ary.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteTwoMsu08 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteTwoMsu08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlReadMotCtrlWriteTwoMsu08.Description = '';
MotCtrlReadMotCtrlWriteTwoMsu08.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteTwoMsu08.EngDT = dt.u08;
MotCtrlReadMotCtrlWriteTwoMsu08.EngInit = 255;
MotCtrlReadMotCtrlWriteTwoMsu08.EngMin = 0;
MotCtrlReadMotCtrlWriteTwoMsu08.EngMax = 255;
MotCtrlReadMotCtrlWriteTwoMsu08.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteTwoMsu08.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteTwoMsu16 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteTwoMsu16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlReadMotCtrlWriteTwoMsu16.Description = '';
MotCtrlReadMotCtrlWriteTwoMsu16.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteTwoMsu16.EngDT = dt.u16;
MotCtrlReadMotCtrlWriteTwoMsu16.EngInit = 65535;
MotCtrlReadMotCtrlWriteTwoMsu16.EngMin = 0;
MotCtrlReadMotCtrlWriteTwoMsu16.EngMax = 65535;
MotCtrlReadMotCtrlWriteTwoMsu16.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteTwoMsu16.ReadType = 'NonRte';


MotCtrlReadMotCtrlWriteTwoMsu32 = DataDict.IpSignal;
MotCtrlReadMotCtrlWriteTwoMsu32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlReadMotCtrlWriteTwoMsu32.Description = '';
MotCtrlReadMotCtrlWriteTwoMsu32.DocUnits = 'Cnt';
MotCtrlReadMotCtrlWriteTwoMsu32.EngDT = dt.u32;
MotCtrlReadMotCtrlWriteTwoMsu32.EngInit = 4294967295;
MotCtrlReadMotCtrlWriteTwoMsu32.EngMin = 0;
MotCtrlReadMotCtrlWriteTwoMsu32.EngMax = 4294967295;
MotCtrlReadMotCtrlWriteTwoMsu32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlReadMotCtrlWriteTwoMsu32.ReadType = 'NonRte';


MotCtrlSignalB = DataDict.IpSignal;
MotCtrlSignalB.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlSignalB.Description = '';
MotCtrlSignalB.DocUnits = 'Cnt';
MotCtrlSignalB.EngDT = dt.lgc;
MotCtrlSignalB.EngInit = 0;
MotCtrlSignalB.EngMin = 0;
MotCtrlSignalB.EngMax = 1;
MotCtrlSignalB.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlSignalB.ReadType = 'NonRte';


MotCtrlSignalX = DataDict.IpSignal;
MotCtrlSignalX.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlSignalX.Description = '';
MotCtrlSignalX.DocUnits = 'Cnt';
MotCtrlSignalX.EngDT = dt.s08;
MotCtrlSignalX.EngInit = -128;
MotCtrlSignalX.EngMin = -128;
MotCtrlSignalX.EngMax = 127;
MotCtrlSignalX.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlSignalX.ReadType = 'NonRte';



MotCtrlSignalZ = DataDict.IpSignal;
MotCtrlSignalZ.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlSignalZ.Description = '';
MotCtrlSignalZ.DocUnits = 'Cnt';
MotCtrlSignalZ.EngDT = dt.u16;
MotCtrlSignalZ.EngInit = 65535;
MotCtrlSignalZ.EngMin = 0;
MotCtrlSignalZ.EngMax = 65535;
MotCtrlSignalZ.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlSignalZ.ReadType = 'NonRte';

MotCtrlSignalW = DataDict.IpSignal;
MotCtrlSignalW.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlSignalW.Description = '';
MotCtrlSignalW.DocUnits = 'Cnt';
MotCtrlSignalW.EngDT = dt.s08;
MotCtrlSignalW.EngInit = -128;
MotCtrlSignalW.EngMin = -128;
MotCtrlSignalW.EngMax = 127;
MotCtrlSignalW.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlSignalW.ReadType = 'NonRte';

MotCtrlSignalU = DataDict.IpSignal;
MotCtrlSignalU.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlSignalU.Description = '';
MotCtrlSignalU.DocUnits = 'Cnt';
MotCtrlSignalU.EngDT = dt.lgc;
MotCtrlSignalU.EngInit = 0;
MotCtrlSignalU.EngMin = 0;
MotCtrlSignalU.EngMax = 1;
MotCtrlSignalU.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlSignalU.ReadType = 'NonRte';

MotCtrlSignal4 = DataDict.IpSignal;
MotCtrlSignal4.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlSignal4.Description = '';
MotCtrlSignal4.DocUnits = 'Cnt';
MotCtrlSignal4.EngDT = dt.s08;
MotCtrlSignal4.EngInit = -128;
MotCtrlSignal4.EngMin = -128;
MotCtrlSignal4.EngMax = 127;
MotCtrlSignal4.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlSignal4.ReadType = 'NonRte';

MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum = DataDict.IpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.LongName = 'XXXXX Motor Control Read XXXXX XXXXX XXXXX';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.EngDT = enum.TestEnum_u16;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.EngInit = TestEnum_u16.TestEnum_u16_Element3;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.EngMax = 65535;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum.ReadType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool = DataDict.IpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.EngDT = dt.lgc;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.EngInit = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.EngMax = 1;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool.ReadType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32 = DataDict.IpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.DocUnits = 'MotNwtMtr';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.EngDT = dt.float32;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.EngInit = 1;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.EngMin = -8.8;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.EngMax = 8.8;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32.ReadType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08 = DataDict.IpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.EngDT = dt.s08;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.EngInit = -128;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.EngMin = -128;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.EngMax = 127;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08.ReadType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16 = DataDict.IpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.EngDT = dt.s16;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.EngInit = -32768;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.EngMin = -32768;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.EngMax = 32767;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16.ReadType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32 = DataDict.IpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.EngDT = dt.s32;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.EngInit = -2147483647;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.EngMin = -2147483648;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.EngMax = 2147483647;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32.ReadType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08 = DataDict.IpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 08';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.EngDT = dt.u08;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.EngInit = 255;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.EngMax = 255;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08.ReadType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16 = DataDict.IpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 16';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.EngDT = dt.u16;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.EngInit = 65535;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.EngMax = 65535;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16.ReadType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary = DataDict.IpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.LongName = 'Motor Control XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngDT = dt.u16;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngInit =  ...
   [0            65535];
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.EngMax = 65535;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary.ReadType = 'NonRte';


MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32 = DataDict.IpSignal;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.LongName = 'XXXXX Motor Control Read XXXXX XXXXX 32';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.Description = '';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.DocUnits = 'Cnt';
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.EngDT = dt.u32;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.EngInit = 4294967295;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.EngMin = 0;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.EngMax = 4294967295;
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.ReadIn = {'MotCtrlReadRunPer1'};
MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32.ReadType = 'NonRte';



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
