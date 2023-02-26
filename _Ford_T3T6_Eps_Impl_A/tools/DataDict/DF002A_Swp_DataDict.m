%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Nov-2016 16:15:42       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: 9 %           %
%                                  Derived by: %derived_by: zzjgh0 %          %
%%-----------------------------------------------------------------------%

DF002A = DataDict.FDD;
DF002A.Version = '1.8.X';
DF002A.LongName = 'Sweep';
DF002A.ShoName  = 'Swp';
DF002A.DesignASIL = 'QM';
DF002A.Description = [...
  'This function lets motor generate a sinusoidal chirp command using eit' ...
  'her a MTR (motor) configuration or HW (handwheel) configuration. This ' ...
  'commanded input along with torque-sensor output is used for system ide' ...
  'ntification of the steering gear.The Sweep function has various states' ...
  '. From the time sweep starts till it ends, "sweep state" passes throug' ...
  'hout these states.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
SwpInit1 = DataDict.Runnable;
SwpInit1.Context = 'Rte';
SwpInit1.TimeStep = 0;
SwpInit1.Description = 'Initialize the timers.';

SwpPer1 = DataDict.Runnable;
SwpPer1.Context = 'Rte';
SwpPer1.TimeStep = 0.002;
SwpPer1.Description = 'Periodic 1 Runnable';

SwpPer2 = DataDict.Runnable;
SwpPer2.Context = 'Rte';
SwpPer2.TimeStep = 0.002;
SwpPer2.Description = 'Periodic 2 Runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'SwpInit1','SwpPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'Client definition to return the reference time in counts.'];
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 999;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = '';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'SwpPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'Client definition to determine elapse time.'];
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(1).Description = '';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 999;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel torque as input.';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'SwpPer1'};
HwTq.ReadType = 'Rte';


MotTqCmd = DataDict.IpSignal;
MotTqCmd.LongName = 'Motor Torque Command';
MotTqCmd.Description = 'Motor torque command as input.';
MotTqCmd.DocUnits = 'MotNwtMtr';
MotTqCmd.EngDT = dt.float32;
MotTqCmd.EngInit = 0;
MotTqCmd.EngMin = -8.8;
MotTqCmd.EngMax = 8.8;
MotTqCmd.ReadIn = {'SwpPer2'};
MotTqCmd.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle speed as input.';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'SwpPer1'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = 'Vehicle speed valid as input';
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'SwpPer1'};
VehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTqSwp = DataDict.OpSignal;
HwTqSwp.LongName = 'Handwheel Torque Sweep';
HwTqSwp.Description = 'Output Handwheel Torque';
HwTqSwp.DocUnits = 'HwNwtMtr';
HwTqSwp.SwcShoName = 'Swp';
HwTqSwp.EngDT = dt.float32;
HwTqSwp.EngInit = 0;
HwTqSwp.EngMin = -10;
HwTqSwp.EngMax = 10;
HwTqSwp.TestTolerance = 0.0005;
HwTqSwp.WrittenIn = {'SwpPer1'};
HwTqSwp.WriteType = 'Rte';


MotTqCmdSwp = DataDict.OpSignal;
MotTqCmdSwp.LongName = 'Motor Torque Command Sweep';
MotTqCmdSwp.Description = 'Output Motor Torque Command';
MotTqCmdSwp.DocUnits = 'MotNwtMtr';
MotTqCmdSwp.SwcShoName = 'Swp';
MotTqCmdSwp.EngDT = dt.float32;
MotTqCmdSwp.EngInit = 0;
MotTqCmdSwp.EngMin = -8.8;
MotTqCmdSwp.EngMax = 8.8;
MotTqCmdSwp.TestTolerance = 0.0005;
MotTqCmdSwp.WrittenIn = {'SwpPer2'};
MotTqCmdSwp.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
SinHwTqSwp = DataDict.IRV;
SinHwTqSwp.LongName = 'Sine Handwheel Torque Sweep';
SinHwTqSwp.Description = [...
  'Sine of phase angle scaled and modified. Inter Runnable Variable betwe' ...
  'en Periodic 1 and 2'];
SinHwTqSwp.DocUnits = 'HwNwtMtr';
SinHwTqSwp.EngDT = dt.float32;
SinHwTqSwp.EngInit = 0;
SinHwTqSwp.EngMin = -10;
SinHwTqSwp.EngMax = 10;
SinHwTqSwp.ReadIn = {'SwpPer2'};
SinHwTqSwp.WrittenIn = {'SwpPer1'};



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
SwpCfg = DataDict.PIM;
SwpCfg.LongName = 'Sweep Configuration';
SwpCfg.Description = [...
  'User Manipulated Parameter. Switch to select type of sweep between mot' ...
  'or (default) and handwheel configuration'];
SwpCfg.DocUnits = 'Cnt';
SwpCfg.EngDT = dt.u08;
SwpCfg.EngMin = 1;
SwpCfg.EngMax = 2;
SwpCfg.InitRowCol = [1  1];


SwpCosTq = DataDict.PIM;
SwpCosTq.LongName = 'Cosine Torque';
SwpCosTq.Description = [...
  'Cosine of phase angle scaled and modified. This signal is used by eToo' ...
  'l for post-processing data to get frequency response'];
SwpCosTq.DocUnits = 'HwNwtMtr';
SwpCosTq.EngDT = dt.float32;
SwpCosTq.EngMin = -10;
SwpCosTq.EngMax = 10;
SwpCosTq.InitRowCol = [1  1];


SwpDwellStrtTi = DataDict.PIM;
SwpDwellStrtTi.LongName = 'Sweep Dwell Start Time';
SwpDwellStrtTi.Description = [...
  'Reference start time for dwell state'];
SwpDwellStrtTi.DocUnits = 'Cnt';
SwpDwellStrtTi.EngDT = dt.u32;
SwpDwellStrtTi.EngMin = 0;
SwpDwellStrtTi.EngMax = 4294967295;
SwpDwellStrtTi.InitRowCol = [1  1];


SwpDwellTi = DataDict.PIM;
SwpDwellTi.LongName = 'Sweep Dwell Time';
SwpDwellTi.Description = [...
  'User Manipulated Parameter.One-dimensional table for dwell time at eac' ...
  'h frequency'];
SwpDwellTi.DocUnits = 'MilliSec';
SwpDwellTi.EngDT = dt.u16;
SwpDwellTi.EngMin = 0;
SwpDwellTi.EngMax = 65535;
SwpDwellTi.InitRowCol = [1  100];


SwpFrqIdx = DataDict.PIM;
SwpFrqIdx.LongName = 'Sweep Frequency Index';
SwpFrqIdx.Description = 'Index of the Frequency being used.';
SwpFrqIdx.DocUnits = 'Cnt';
SwpFrqIdx.EngDT = dt.u08;
SwpFrqIdx.EngMin = 0;
SwpFrqIdx.EngMax = 100;
SwpFrqIdx.InitRowCol = [1  1];


SwpFrqList = DataDict.PIM;
SwpFrqList.LongName = 'Sweep Frequency List';
SwpFrqList.Description = [...
  'User Manipulated Parameter. One-dimensional table for sweep frequencie' ...
  's'];
SwpFrqList.DocUnits = 'Hz';
SwpFrqList.EngDT = dt.float32;
SwpFrqList.EngMin = 0;
SwpFrqList.EngMax = 127;
SwpFrqList.InitRowCol = [1  100];


SwpGain = DataDict.PIM;
SwpGain.LongName = 'Sweep SwpGain';
SwpGain.Description = [...
  'User Manipulated Parameter. For default (MTR) sweep mode, sweep torque' ...
  ' gets multiplied with sweep SwpGain value to get final output motor torqu' ...
  'e'];
SwpGain.DocUnits = 'MotNwtMtrPerHwNwtMtr';
SwpGain.EngDT = dt.float32;
SwpGain.EngMin = 0;
SwpGain.EngMax = 1;
SwpGain.InitRowCol = [1  1];


SwpHwTqEna = DataDict.PIM;
SwpHwTqEna.LongName = 'Sweep Handwheel Torque Enable';
SwpHwTqEna.Description = [...
  'User Manipulated Parameter. Starts actual sweep process when activated' ...
  ' (1) and stops sweep process when deactivated (0: default). Also, goes' ...
  ' to 0 value when sweep is complete.'];
SwpHwTqEna.DocUnits = 'Cnt';
SwpHwTqEna.EngDT = dt.lgc;
SwpHwTqEna.EngMin = 0;
SwpHwTqEna.EngMax = 1;
SwpHwTqEna.InitRowCol = [1  1];


SwpHwTqOffs = DataDict.PIM;
SwpHwTqOffs.LongName = 'Sweep Handwheel Torque Offset';
SwpHwTqOffs.Description = [...
  'User Manipulated Parameter.Offset for the generated sweep torque in Hw' ...
  'NwtMtr.'];
SwpHwTqOffs.DocUnits = 'HwNwtMtr';
SwpHwTqOffs.EngDT = dt.float32;
SwpHwTqOffs.EngMin = -10;
SwpHwTqOffs.EngMax = 10;
SwpHwTqOffs.InitRowCol = [1  1];


SwpInstsFrq = DataDict.PIM;
SwpInstsFrq.LongName = 'Sweep Instantaneous Frequency';
SwpInstsFrq.Description = ' Current Frequency of the sinusoid';
SwpInstsFrq.DocUnits = 'Hz';
SwpInstsFrq.EngDT = dt.float32;
SwpInstsFrq.EngMin = 0;
SwpInstsFrq.EngMax = 128;
SwpInstsFrq.InitRowCol = [1  1];


SwpLstStSinAg = DataDict.PIM;
SwpLstStSinAg.LongName = 'Sweep Last State Sine Angle';
SwpLstStSinAg.Description = [...
  'Phase angle (from last state) for sin calculation.'];
SwpLstStSinAg.DocUnits = 'MatRad';
SwpLstStSinAg.EngDT = dt.float32;
SwpLstStSinAg.EngMin = 0;
SwpLstStSinAg.EngMax = 11000000;
SwpLstStSinAg.InitRowCol = [1  1];


SwpModEna = DataDict.PIM;
SwpModEna.LongName = 'Sweep Mode Enable';
SwpModEna.Description = [...
  'User Manipulated Parameter. Enables the sweep mode when value is one (' ...
  'no assist condition). Value of zero (default) disables sweep mode.'];
SwpModEna.DocUnits = 'Cnt';
SwpModEna.EngDT = dt.lgc;
SwpModEna.EngMin = 0;
SwpModEna.EngMax = 1;
SwpModEna.InitRowCol = [1  1];


SwpSinAmp = DataDict.PIM;
SwpSinAmp.LongName = 'Sweep Sine Amplitude';
SwpSinAmp.Description = [...
  'User Manipulated Parameter. Amplitude of the sinusoidal signal in gene' ...
  'rated sweep torque in HwNwtMtr.'];
SwpSinAmp.DocUnits = 'HwNwtMtr';
SwpSinAmp.EngDT = dt.float32;
SwpSinAmp.EngMin = 0;
SwpSinAmp.EngMax = 10;
SwpSinAmp.InitRowCol = [1  1];


SwpSinTq = DataDict.PIM;
SwpSinTq.LongName = 'Sweep Sine Torque';
SwpSinTq.Description = [...
  'Sine of phase angle scaled and modified. Inter Runnable Variable betwe' ...
  'en Periodic 1 and 2'];
SwpSinTq.DocUnits = 'HwNwtMtr';
SwpSinTq.EngDT = dt.float32;
SwpSinTq.EngMin = -10;
SwpSinTq.EngMax = 10;
SwpSinTq.InitRowCol = [1  1];


SwpSwtSt = DataDict.PIM;
SwpSwtSt.LongName = 'Sweep Switch State';
SwpSwtSt.Description = 'Sweep State Counter';
SwpSwtSt.DocUnits = 'Cnt';
SwpSwtSt.EngDT = dt.u08;
SwpSwtSt.EngMin = 0;
SwpSwtSt.EngMax = 5;
SwpSwtSt.InitRowCol = [1  1];


SwpTranStrtTi = DataDict.PIM;
SwpTranStrtTi.LongName = 'Sweep Transition Start Time';
SwpTranStrtTi.Description = [...
  'Reference start time for transition state'];
SwpTranStrtTi.DocUnits = 'Cnt';
SwpTranStrtTi.EngDT = dt.u32;
SwpTranStrtTi.EngMin = 0;
SwpTranStrtTi.EngMax = 4294967295;
SwpTranStrtTi.InitRowCol = [1  1];


SwpTranTi = DataDict.PIM;
SwpTranTi.LongName = 'Sweep Transition Time';
SwpTranTi.Description = [...
  'User Manipulated Parameter. One-dimensional table for transition time ' ...
  'between the frequencies'];
SwpTranTi.DocUnits = 'MilliSec';
SwpTranTi.EngDT = dt.u16;
SwpTranTi.EngMin = 0;
SwpTranTi.EngMax = 65535;
SwpTranTi.InitRowCol = [1  100];


SwpVehSpdChkEna = DataDict.PIM;
SwpVehSpdChkEna.LongName = 'Enable Vehicle Speed Check';
SwpVehSpdChkEna.Description = [...
  'User Manipulated Parameter. Checks if vehicle speed is below maximum a' ...
  'llowed when activated'];
SwpVehSpdChkEna.DocUnits = 'Cnt';
SwpVehSpdChkEna.EngDT = dt.lgc;
SwpVehSpdChkEna.EngMin = 0;
SwpVehSpdChkEna.EngMax = 1;
SwpVehSpdChkEna.InitRowCol = [1  1];


SwpVehSpdMax = DataDict.PIM;
SwpVehSpdMax.LongName = 'Maximum Vehicle Speed';
SwpVehSpdMax.Description = [...
  'User Manipulated Parameter. Vehicle speed (Kph) below which vehicle ca' ...
  'n do sweep process'];
SwpVehSpdMax.DocUnits = 'Kph';
SwpVehSpdMax.EngDT = dt.float32;
SwpVehSpdMax.EngMin = 0;
SwpVehSpdMax.EngMax = 511;
SwpVehSpdMax.InitRowCol = [1  1];

%%----------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


MICROSEC100TOMILLISEC_ULS_F32 = DataDict.Constant;
MICROSEC100TOMILLISEC_ULS_F32.LongName = '100 Micro Second to Milli Second';
MICROSEC100TOMILLISEC_ULS_F32.Description = [...
  'Convert 100 Microsecond to Millisecond to compare the time span with t' ...
  'he timer threshold.'];
MICROSEC100TOMILLISEC_ULS_F32.DocUnits = 'Uls';
MICROSEC100TOMILLISEC_ULS_F32.EngDT = dt.float32;
MICROSEC100TOMILLISEC_ULS_F32.EngVal = 0.1;
MICROSEC100TOMILLISEC_ULS_F32.Define = 'Local';


MILLISECTOSEC_ULS_F32 = DataDict.Constant;
MILLISECTOSEC_ULS_F32.LongName = 'Milli Second to Second';
MILLISECTOSEC_ULS_F32.Description = 'Convert Millisecond to Second.';
MILLISECTOSEC_ULS_F32.DocUnits = 'Uls';
MILLISECTOSEC_ULS_F32.EngDT = dt.float32;
MILLISECTOSEC_ULS_F32.EngVal = 0.001;
MILLISECTOSEC_ULS_F32.Define = 'Local';


ONEOVERTWO_ULS_F32 = DataDict.Constant;
ONEOVERTWO_ULS_F32.LongName = 'One Over Two';
ONEOVERTWO_ULS_F32.Description = '1 divided by 2';
ONEOVERTWO_ULS_F32.DocUnits = 'Uls';
ONEOVERTWO_ULS_F32.EngDT = dt.float32;
ONEOVERTWO_ULS_F32.EngVal = 0.5;
ONEOVERTWO_ULS_F32.Define = 'Local';


SWPDONEST_CNT_U08 = DataDict.Constant;
SWPDONEST_CNT_U08.LongName = 'Sweep Done State';
SWPDONEST_CNT_U08.Description = [...
  'It is the constant used to indicate it is in the Done state.'];
SWPDONEST_CNT_U08.DocUnits = 'Cnt';
SWPDONEST_CNT_U08.EngDT = dt.u08;
SWPDONEST_CNT_U08.EngVal = 5;
SWPDONEST_CNT_U08.Define = 'Local';


SWPDWELLST_CNT_U08 = DataDict.Constant;
SWPDWELLST_CNT_U08.LongName = 'Sweep Dwell State';
SWPDWELLST_CNT_U08.Description = [...
  'It is the constant used to indicate it is in the Dwell state.'];
SWPDWELLST_CNT_U08.DocUnits = 'Cnt';
SWPDWELLST_CNT_U08.EngDT = dt.u08;
SWPDWELLST_CNT_U08.EngVal = 2;
SWPDWELLST_CNT_U08.Define = 'Local';


SWPDWELLTIINIVAL_MILLISEC_U16 = DataDict.Constant;
SWPDWELLTIINIVAL_MILLISEC_U16.LongName = 'Sweep Dwell Time Initial Value';
SWPDWELLTIINIVAL_MILLISEC_U16.Description = [...
  'Initial value of the Sweep Dwell Time.'];
SWPDWELLTIINIVAL_MILLISEC_U16.DocUnits = 'MilliSec';
SWPDWELLTIINIVAL_MILLISEC_U16.EngDT = dt.u16;
SWPDWELLTIINIVAL_MILLISEC_U16.EngVal =  ...
   [0            32000            18333            10714             9375             8333             7500             6667             6000             5455             4667             4308             3714             3467             3000             2824             2667             2526             2400             2286             2182             2087             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000             2000];
SWPDWELLTIINIVAL_MILLISEC_U16.Define = 'Local';


SWPFRQLISTINIVAL_HZ_F32 = DataDict.Constant;
SWPFRQLISTINIVAL_HZ_F32.LongName = 'Sweep Frequency List Initial Value';
SWPFRQLISTINIVAL_HZ_F32.Description = [...
  'Initial value of the Sweep Frequency List.'];
SWPFRQLISTINIVAL_HZ_F32.DocUnits = 'Hz';
SWPFRQLISTINIVAL_HZ_F32.EngDT = dt.float32;
SWPFRQLISTINIVAL_HZ_F32.EngVal =  ...
   [0                1              1.2              1.4              1.6              1.8                2             2.25              2.5             2.75                3             3.25              3.5             3.75                4             4.25              4.5             4.75                5             5.25              5.5             5.75                6             6.25              6.5             6.75                7             7.25              7.5             7.75                8             8.25              8.5             8.75                9             9.25              9.5             9.75               10            10.25             10.5            10.75               11            11.25             11.5            11.75               12            12.25             12.5            12.75               13            13.25             13.5            13.75               14            14.25             14.5            14.75               15             15.5               16             16.5               17             17.5               18             18.5               19             19.5               20               21               22               23               24               25               26               27               28               29               30               32               34               36               38               40               42               44               46               48               50               55               60               65               70               75               80               85               90               95              100              105];
SWPFRQLISTINIVAL_HZ_F32.Define = 'Local';


SWPGAININIVAL_ULS_F32 = DataDict.Constant;
SWPGAININIVAL_ULS_F32.LongName = 'Sweep Gain Initial Value';
SWPGAININIVAL_ULS_F32.Description = 'Initial value of the Sweep Gain.';
SWPGAININIVAL_ULS_F32.DocUnits = 'Uls';
SWPGAININIVAL_ULS_F32.EngDT = dt.float32;
SWPGAININIVAL_ULS_F32.EngVal = 0.45;
SWPGAININIVAL_ULS_F32.Define = 'Local';


SWPHWTQCFG_CNT_U08 = DataDict.Constant;
SWPHWTQCFG_CNT_U08.LongName = 'Sweep Handwheel Torque Configuration';
SWPHWTQCFG_CNT_U08.Description = [...
  'It is used to select the Sweep Handwheel Torque.'];
SWPHWTQCFG_CNT_U08.DocUnits = 'Cnt';
SWPHWTQCFG_CNT_U08.EngDT = dt.u08;
SWPHWTQCFG_CNT_U08.EngVal = 2;
SWPHWTQCFG_CNT_U08.Define = 'Local';


SWPHWTQHILIM_HWNWTMTR_F32 = DataDict.Constant;
SWPHWTQHILIM_HWNWTMTR_F32.LongName = 'Sweep Handwheel Torque High Limit';
SWPHWTQHILIM_HWNWTMTR_F32.Description = [...
  'High limit on handwheel torque output signal.'];
SWPHWTQHILIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
SWPHWTQHILIM_HWNWTMTR_F32.EngDT = dt.float32;
SWPHWTQHILIM_HWNWTMTR_F32.EngVal = 10;
SWPHWTQHILIM_HWNWTMTR_F32.Define = 'Local';


SWPHWTQLOLIM_HWNWTMTR_F32 = DataDict.Constant;
SWPHWTQLOLIM_HWNWTMTR_F32.LongName = 'Sweep Handwheel Torque Low Limit';
SWPHWTQLOLIM_HWNWTMTR_F32.Description = [...
  'Low limit on handwheel torque output signal.'];
SWPHWTQLOLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
SWPHWTQLOLIM_HWNWTMTR_F32.EngDT = dt.float32;
SWPHWTQLOLIM_HWNWTMTR_F32.EngVal = -10;
SWPHWTQLOLIM_HWNWTMTR_F32.Define = 'Local';


SWPMOTTQCFG_CNT_U08 = DataDict.Constant;
SWPMOTTQCFG_CNT_U08.LongName = 'Sweep Motor Torque Configuration';
SWPMOTTQCFG_CNT_U08.Description = [...
  'It is used to select the Sweep Motor Torque.'];
SWPMOTTQCFG_CNT_U08.DocUnits = 'Cnt';
SWPMOTTQCFG_CNT_U08.EngDT = dt.u08;
SWPMOTTQCFG_CNT_U08.EngVal = 1;
SWPMOTTQCFG_CNT_U08.Define = 'Local';


SWPRAMPST_CNT_U08 = DataDict.Constant;
SWPRAMPST_CNT_U08.LongName = 'Sweep Ramp State';
SWPRAMPST_CNT_U08.Description = [...
  'It is the constant used to indicate it is in the Ramp state.'];
SWPRAMPST_CNT_U08.DocUnits = 'Cnt';
SWPRAMPST_CNT_U08.EngDT = dt.u08;
SWPRAMPST_CNT_U08.EngVal = 4;
SWPRAMPST_CNT_U08.Define = 'Local';


SWPSINAMPINIVAL_HWNWTMTR_F32 = DataDict.Constant;
SWPSINAMPINIVAL_HWNWTMTR_F32.LongName = 'Sweep Sine Amplitude Initial Value';
SWPSINAMPINIVAL_HWNWTMTR_F32.Description = [...
  'Initial value of the Sweep Sine Amplitude.'];
SWPSINAMPINIVAL_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
SWPSINAMPINIVAL_HWNWTMTR_F32.EngDT = dt.float32;
SWPSINAMPINIVAL_HWNWTMTR_F32.EngVal = 0.5;
SWPSINAMPINIVAL_HWNWTMTR_F32.Define = 'Local';


SWPSTOPST_CNT_U08 = DataDict.Constant;
SWPSTOPST_CNT_U08.LongName = 'Sweep Stop State';
SWPSTOPST_CNT_U08.Description = [...
  'It is the constant used to indicate it is in the Stop state.'];
SWPSTOPST_CNT_U08.DocUnits = 'Cnt';
SWPSTOPST_CNT_U08.EngDT = dt.u08;
SWPSTOPST_CNT_U08.EngVal = 3;
SWPSTOPST_CNT_U08.Define = 'Local';


SWPSTRTST_CNT_U08 = DataDict.Constant;
SWPSTRTST_CNT_U08.LongName = 'Sweep Start State';
SWPSTRTST_CNT_U08.Description = [...
  'It is the constant used to indicate it is in the Start state.'];
SWPSTRTST_CNT_U08.DocUnits = 'Cnt';
SWPSTRTST_CNT_U08.EngDT = dt.u08;
SWPSTRTST_CNT_U08.EngVal = 0;
SWPSTRTST_CNT_U08.Define = 'Local';


SWPTRANST_CNT_U08 = DataDict.Constant;
SWPTRANST_CNT_U08.LongName = 'Sweep Transition State';
SWPTRANST_CNT_U08.Description = [...
  'It is the constant used to indicate it is in the Transition state.'];
SWPTRANST_CNT_U08.DocUnits = 'Cnt';
SWPTRANST_CNT_U08.EngDT = dt.u08;
SWPTRANST_CNT_U08.EngVal = 1;
SWPTRANST_CNT_U08.Define = 'Local';


SWPTRANTIINIVAL_MILLISEC_U16 = DataDict.Constant;
SWPTRANTIINIVAL_MILLISEC_U16.LongName = 'Sweep Transition Time Initial Value';
SWPTRANTIINIVAL_MILLISEC_U16.Description = [...
  'Initial value of the Sweep Transition Time.'];
SWPTRANTIINIVAL_MILLISEC_U16.DocUnits = 'MilliSec';
SWPTRANTIINIVAL_MILLISEC_U16.EngDT = dt.u16;
SWPTRANTIINIVAL_MILLISEC_U16.EngVal =  ...
   [2000              500              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250              250             1000];
SWPTRANTIINIVAL_MILLISEC_U16.Define = 'Local';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
