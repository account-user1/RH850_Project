%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 09-Apr-2018 10:13:58       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CF076A = DataDict.FDD;
CF076A.Version = '2.0.X';
CF076A.LongName = 'Ford Handwheel Torque Conditioning';
CF076A.ShoName  = 'FordHwTqCdng';
CF076A.DesignASIL = 'B';
CF076A.Description = [...
  'This function will output various torques in HWNm. It will alsocalcula' ...
  'te a "direct boost curve", an "inverse boost curve" andoutput the perc' ...
  'ent of available torque for Ford In House Features.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordHwTqCdngInit1 = DataDict.Runnable;
FordHwTqCdngInit1.Context = 'Rte';
FordHwTqCdngInit1.TimeStep = 0;
FordHwTqCdngInit1.Description = 'Initialization Runnable';

FordHwTqCdngPer1 = DataDict.Runnable;
FordHwTqCdngPer1.Context = 'Rte';
FordHwTqCdngPer1.TimeStep = 0.004;
FordHwTqCdngPer1.Description = 'Periodic Runnable at 4 millisecs';

FordHwTqCdngPer2 = DataDict.Runnable;
FordHwTqCdngPer2.Context = 'Rte';
FordHwTqCdngPer2.TimeStep = 0.01;
FordHwTqCdngPer2.Description = 'Periodic Runnable at 10 millisecs';

%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'FordHwTqCdngPer1','FordHwTqCdngPer2'};
GetNtcQlfrSts.Description = [...
  'Client defintion to return NTC state'];
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = 'Standard Return';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = 'Enum definition of NTC numbers';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 0;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'Enum to indicate the state of NTC';


GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordHwTqCdngPer1','FordHwTqCdngPer2'};
GetRefTmr100MicroSec32bit.Description = [...
  'It captures simulation time fromthe SimnTi value obtained at root laye' ...
  'r of model and gives the RefTmr.'];
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
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 0;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'Reference time in 100 uSec';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'FordHwTqCdngPer1','FordHwTqCdngPer2'};
GetTiSpan100MicroSec32bit.Description = [...
  'It Captures simulation time fromSimnTi value, handles counter wrapping' ...
  ', and subtracts RefTmr,provides the TiSpan'];
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
GetTiSpan100MicroSec32bit.Arguments(1).Description = 'Reference time in 100 uSec';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Wrapped value of the current time';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AssiCmd = DataDict.IpSignal;
AssiCmd.LongName = 'Ford Assist Command';
AssiCmd.Description = [...
  'Assist Command used to display Filtered Boost Curve Assist Torque'];
AssiCmd.DocUnits = 'MotNwtMtr';
AssiCmd.EngDT = dt.float32;
AssiCmd.EngInit = 0;
AssiCmd.EngMin = -8.8;
AssiCmd.EngMax = 8.8;
AssiCmd.ReadIn = {'FordHwTqCdngPer2'};
AssiCmd.ReadType = 'Rte';


AssiCmdBas = DataDict.IpSignal;
AssiCmdBas.LongName = 'Ford Assist Command Base';
AssiCmdBas.Description = [...
  'Assist Command Base used to calculate Boost Curve Input Torque'];
AssiCmdBas.DocUnits = 'MotNwtMtr';
AssiCmdBas.EngDT = dt.float32;
AssiCmdBas.EngInit = 0;
AssiCmdBas.EngMin = -8.8;
AssiCmdBas.EngMax = 8.8;
AssiCmdBas.ReadIn = {'FordHwTqCdngPer1'};
AssiCmdBas.ReadType = 'Rte';


AvlMotTq = DataDict.IpSignal;
AvlMotTq.LongName = 'Available Motor Torque';
AvlMotTq.Description = [...
  'Available Motor Torque is used to calculate  '];
AvlMotTq.DocUnits = 'MotNwtMtr';
AvlMotTq.EngDT = dt.float32;
AvlMotTq.EngInit = 0;
AvlMotTq.EngMin = 0;
AvlMotTq.EngMax = 8.8;
AvlMotTq.ReadIn = {'FordHwTqCdngPer1'};
AvlMotTq.ReadType = 'Rte';


EcuId = DataDict.IpSignal;
EcuId.LongName = 'Ecu Identifier';
EcuId.Description = [...
  'Ecu Identifier is used to calculate  '];
EcuId.DocUnits = 'Cnt';
EcuId.EngDT = dt.u08;
EcuId.EngInit = 0;
EcuId.EngMin = 0;
EcuId.EngMax = 3;
EcuId.ReadIn = {'FordHwTqCdngPer1','FordHwTqCdngPer2'};
EcuId.ReadType = 'Rte';


FordVehSpd = DataDict.IpSignal;
FordVehSpd.LongName = 'Ford Vehicle Speed';
FordVehSpd.Description = [...
  'Vehicle Speed is used to calculat Feature Direct BC Torque'];
FordVehSpd.DocUnits = 'Kph';
FordVehSpd.EngDT = dt.float32;
FordVehSpd.EngInit = 0;
FordVehSpd.EngMin = 0;
FordVehSpd.EngMax = 511;
FordVehSpd.ReadIn = {'FordHwTqCdngPer1'};
FordVehSpd.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = [...
  'Handwheel Torque is input to function Ford Handwheel Torque Conditioni' ...
  'ng used to calculate Boost Curve Input Torque'];
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'FordHwTqCdngPer1'};
HwTq.ReadType = 'Rte';


HwTqHysOvrl = DataDict.IpSignal;
HwTqHysOvrl.LongName = 'Handwheel Torque Hysteresis Overlay';
HwTqHysOvrl.Description = [...
  'Handwheel Torque Hysteresis Overlay is input to function Ford Handwhee' ...
  'l Torque Conditioning used to calculate summed Boost Curve Input Torqu' ...
  'e'];
HwTqHysOvrl.DocUnits = 'HwNwtMtr';
HwTqHysOvrl.EngDT = dt.float32;
HwTqHysOvrl.EngInit = 0;
HwTqHysOvrl.EngMin = -10;
HwTqHysOvrl.EngMax = 10;
HwTqHysOvrl.ReadIn = {'FordHwTqCdngPer1'};
HwTqHysOvrl.ReadType = 'Rte';


HwTqOvrl = DataDict.IpSignal;
HwTqOvrl.LongName = 'Handwheel Torque Overlay';
HwTqOvrl.Description = [...
  'Hysteresis Torque Overlay is input to function Ford Handwheel Torque C' ...
  'onditioning used to calculate summed Boost Curve Input Torque'];
HwTqOvrl.DocUnits = 'HwNwtMtr';
HwTqOvrl.EngDT = dt.float32;
HwTqOvrl.EngInit = 0;
HwTqOvrl.EngMin = -10;
HwTqOvrl.EngMax = 10;
HwTqOvrl.ReadIn = {'FordHwTqCdngPer1'};
HwTqOvrl.ReadType = 'Rte';


MotTqCmd = DataDict.IpSignal;
MotTqCmd.LongName = 'Motor Torque Command';
MotTqCmd.Description = [...
  'Motor Torque Command is used to calculate Requested Final Motor Torque' ...
  ''];
MotTqCmd.DocUnits = 'MotNwtMtr';
MotTqCmd.EngDT = dt.float32;
MotTqCmd.EngInit = 0;
MotTqCmd.EngMin = -8.8;
MotTqCmd.EngMax = 8.8;
MotTqCmd.ReadIn = {'FordHwTqCdngPer2'};
MotTqCmd.ReadType = 'Rte';


MotTqCmdPwrLimd = DataDict.IpSignal;
MotTqCmdPwrLimd.LongName = 'Motor Torque Command Power Limited';
MotTqCmdPwrLimd.Description = [...
  'Motor Torque Command Power Limited is used to calculate Applied Final ' ...
  'Motor Torque'];
MotTqCmdPwrLimd.DocUnits = 'MotNwtMtr';
MotTqCmdPwrLimd.EngDT = dt.float32;
MotTqCmdPwrLimd.EngInit = 0;
MotTqCmdPwrLimd.EngMin = -8.8;
MotTqCmdPwrLimd.EngMax = 8.8;
MotTqCmdPwrLimd.ReadIn = {'FordHwTqCdngPer2'};
MotTqCmdPwrLimd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordAppldFinalMotTq = DataDict.OpSignal;
FordAppldFinalMotTq.LongName = 'Ford Applied Final Motor Torque';
FordAppldFinalMotTq.Description = [...
  'Processed value of Applied Final Motor Torque'];
FordAppldFinalMotTq.DocUnits = 'HwNwtMtr';
FordAppldFinalMotTq.SwcShoName = 'FordHwTqCdng';
FordAppldFinalMotTq.EngDT = dt.s23pm8;
FordAppldFinalMotTq.EngInit = 0;
FordAppldFinalMotTq.EngMin = -8388608;
FordAppldFinalMotTq.EngMax = 8388352;
FordAppldFinalMotTq.TestTolerance = 0;
FordAppldFinalMotTq.WrittenIn = {'FordHwTqCdngPer2'};
FordAppldFinalMotTq.WriteType = 'Rte';


FordAppldFinalMotTqVld = DataDict.OpSignal;
FordAppldFinalMotTqVld.LongName = 'Ford Applied Final Motor Torque Valid';
FordAppldFinalMotTqVld.Description = [...
  'This signal checks the validity of Applied Final Motor Torque'];
FordAppldFinalMotTqVld.DocUnits = 'Cnt';
FordAppldFinalMotTqVld.SwcShoName = 'FordHwTqCdng';
FordAppldFinalMotTqVld.EngDT = dt.lgc;
FordAppldFinalMotTqVld.EngInit = 0;
FordAppldFinalMotTqVld.EngMin = 0;
FordAppldFinalMotTqVld.EngMax = 1;
FordAppldFinalMotTqVld.TestTolerance = 0;
FordAppldFinalMotTqVld.WrittenIn = {'FordHwTqCdngPer2'};
FordAppldFinalMotTqVld.WriteType = 'Rte';


FordBoostCrvAssiTq = DataDict.OpSignal;
FordBoostCrvAssiTq.LongName = 'Ford Boost Curve Assist Torque';
FordBoostCrvAssiTq.Description = [...
  'Processed value of Boost Curve Assist Torque'];
FordBoostCrvAssiTq.DocUnits = 'HwNwtMtr';
FordBoostCrvAssiTq.SwcShoName = 'FordHwTqCdng';
FordBoostCrvAssiTq.EngDT = dt.s8p7;
FordBoostCrvAssiTq.EngInit = 0;
FordBoostCrvAssiTq.EngMin = -256;
FordBoostCrvAssiTq.EngMax = 255.98;
FordBoostCrvAssiTq.TestTolerance = 0;
FordBoostCrvAssiTq.WrittenIn = {'FordHwTqCdngPer1'};
FordBoostCrvAssiTq.WriteType = 'Rte';


FordBoostCrvInpTq = DataDict.OpSignal;
FordBoostCrvInpTq.LongName = 'Ford Boost Curve Input Torque';
FordBoostCrvInpTq.Description = [...
  'Processed value of Boost Curve Input Torque'];
FordBoostCrvInpTq.DocUnits = 'HwNwtMtr';
FordBoostCrvInpTq.SwcShoName = 'FordHwTqCdng';
FordBoostCrvInpTq.EngDT = dt.s5p10;
FordBoostCrvInpTq.EngInit = 0;
FordBoostCrvInpTq.EngMin = -32;
FordBoostCrvInpTq.EngMax = 31.999;
FordBoostCrvInpTq.TestTolerance = 0;
FordBoostCrvInpTq.WrittenIn = {'FordHwTqCdngPer1'};
FordBoostCrvInpTq.WriteType = 'Rte';


FordInpTqRaw = DataDict.OpSignal;
FordInpTqRaw.LongName = 'Ford Input Torque Raw';
FordInpTqRaw.Description = [...
  'Processed value of Input Torque Raw'];
FordInpTqRaw.DocUnits = 'HwNwtMtr';
FordInpTqRaw.SwcShoName = 'FordHwTqCdng';
FordInpTqRaw.EngDT = dt.s5p10;
FordInpTqRaw.EngInit = 0;
FordInpTqRaw.EngMin = -32;
FordInpTqRaw.EngMax = 31.999;
FordInpTqRaw.TestTolerance = 0;
FordInpTqRaw.WrittenIn = {'FordHwTqCdngPer1'};
FordInpTqRaw.WriteType = 'Rte';


FordInpTqRawVld = DataDict.OpSignal;
FordInpTqRawVld.LongName = 'Ford Input Torque Raw Valid';
FordInpTqRawVld.Description = [...
  'This signal checks the validity of Input Torque Raw'];
FordInpTqRawVld.DocUnits = 'Cnt';
FordInpTqRawVld.SwcShoName = 'FordHwTqCdng';
FordInpTqRawVld.EngDT = dt.lgc;
FordInpTqRawVld.EngInit = 0;
FordInpTqRawVld.EngMin = 0;
FordInpTqRawVld.EngMax = 1;
FordInpTqRawVld.TestTolerance = 0;
FordInpTqRawVld.WrittenIn = {'FordHwTqCdngPer1'};
FordInpTqRawVld.WriteType = 'Rte';


FordMaxAsscTq = DataDict.OpSignal;
FordMaxAsscTq.LongName = 'Maximum Assistance Torque';
FordMaxAsscTq.Description = [...
  'Processed value of Maximum Assistance Torque'];
FordMaxAsscTq.DocUnits = 'Perc';
FordMaxAsscTq.SwcShoName = 'FordHwTqCdng';
FordMaxAsscTq.EngDT = dt.float32;
FordMaxAsscTq.EngInit = 0;
FordMaxAsscTq.EngMin = 0;
FordMaxAsscTq.EngMax = 100;
FordMaxAsscTq.TestTolerance = 0;
FordMaxAsscTq.WrittenIn = {'FordHwTqCdngPer1'};
FordMaxAsscTq.WriteType = 'Rte';


FordReqdFinalMotTq = DataDict.OpSignal;
FordReqdFinalMotTq.LongName = 'Ford Requested Final Motor Torque';
FordReqdFinalMotTq.Description = [...
  'Processed value of Requested Final Motor Torque'];
FordReqdFinalMotTq.DocUnits = 'HwNwtMtr';
FordReqdFinalMotTq.SwcShoName = 'FordHwTqCdng';
FordReqdFinalMotTq.EngDT = dt.s23pm8;
FordReqdFinalMotTq.EngInit = 0;
FordReqdFinalMotTq.EngMin = -8388608;
FordReqdFinalMotTq.EngMax = 8388352;
FordReqdFinalMotTq.TestTolerance = 0;
FordReqdFinalMotTq.WrittenIn = {'FordHwTqCdngPer2'};
FordReqdFinalMotTq.WriteType = 'Rte';



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordHwTqCdngAppldFinalMotTqVldTiThd = DataDict.Calibration;
FordHwTqCdngAppldFinalMotTqVldTiThd.LongName = 'Ford Handwheel Torque Conditioning Applied Final Motor Torque Valid Time Threshold';
FordHwTqCdngAppldFinalMotTqVldTiThd.Description = [...
  'Threshold to set Applied Final Motor Torque Valid'];
FordHwTqCdngAppldFinalMotTqVldTiThd.DocUnits = 'MilliSec';
FordHwTqCdngAppldFinalMotTqVldTiThd.EngDT = dt.u16p0;
FordHwTqCdngAppldFinalMotTqVldTiThd.EngVal = 0;
FordHwTqCdngAppldFinalMotTqVldTiThd.EngMin = 0;
FordHwTqCdngAppldFinalMotTqVldTiThd.EngMax = 65535;
FordHwTqCdngAppldFinalMotTqVldTiThd.Cardinality = 'Cmn';
FordHwTqCdngAppldFinalMotTqVldTiThd.CustomerVisible = false;
FordHwTqCdngAppldFinalMotTqVldTiThd.Online = false;
FordHwTqCdngAppldFinalMotTqVldTiThd.Impact = 'H';
FordHwTqCdngAppldFinalMotTqVldTiThd.TuningOwner = 'CSE';
FordHwTqCdngAppldFinalMotTqVldTiThd.GraphLink = {''};
FordHwTqCdngAppldFinalMotTqVldTiThd.Monotony = 'None';
FordHwTqCdngAppldFinalMotTqVldTiThd.MaxGrad = 0;
FordHwTqCdngAppldFinalMotTqVldTiThd.PortName = 'FordHwTqCdngAppldFinalMotTqVldTiThd';


FordHwTqCdngInpTqRawVldTiThd = DataDict.Calibration;
FordHwTqCdngInpTqRawVldTiThd.LongName = 'Ford Handwheel Torque Conditioning Input Torque Raw Valid Time Threshold';
FordHwTqCdngInpTqRawVldTiThd.Description = [...
  'Threshold to set Input Torque Raw Valid'];
FordHwTqCdngInpTqRawVldTiThd.DocUnits = 'MilliSec';
FordHwTqCdngInpTqRawVldTiThd.EngDT = dt.u16p0;
FordHwTqCdngInpTqRawVldTiThd.EngVal = 0;
FordHwTqCdngInpTqRawVldTiThd.EngMin = 0;
FordHwTqCdngInpTqRawVldTiThd.EngMax = 65535;
FordHwTqCdngInpTqRawVldTiThd.Cardinality = 'Cmn';
FordHwTqCdngInpTqRawVldTiThd.CustomerVisible = false;
FordHwTqCdngInpTqRawVldTiThd.Online = false;
FordHwTqCdngInpTqRawVldTiThd.Impact = 'H';
FordHwTqCdngInpTqRawVldTiThd.TuningOwner = 'CSE';
FordHwTqCdngInpTqRawVldTiThd.GraphLink = {''};
FordHwTqCdngInpTqRawVldTiThd.Monotony = 'None';
FordHwTqCdngInpTqRawVldTiThd.MaxGrad = 0;
FordHwTqCdngInpTqRawVldTiThd.PortName = 'FordHwTqCdngInpTqRawVldTiThd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

PwrLimrStdOperMotEnvlpY = DataDict.ImprtdCal;
PwrLimrStdOperMotEnvlpY.DocUnits = 'MotNwtMtr';
PwrLimrStdOperMotEnvlpY.EngDT = dt.u4p12;
PwrLimrStdOperMotEnvlpY.EngVal =  ...
   [4.63208          4.63208         3.552979         2.927002         2.199951                0];
PwrLimrStdOperMotEnvlpY.EngMin = 0;
PwrLimrStdOperMotEnvlpY.EngMax = 8.8;
PwrLimrStdOperMotEnvlpY.PortName = 'PwrLimrStdOperMotEnvlpY';
PwrLimrStdOperMotEnvlpY.Description = [...
  'Table to determine motor velocity dependent torque limit at minimum St' ...
  'andard Operating Conditions Voltage.'];


SysGlbPrmSysKineRat = DataDict.ImprtdCal;
SysGlbPrmSysKineRat.DocUnits = 'MotDegPerHwDeg';
SysGlbPrmSysKineRat.EngDT = dt.float32;
SysGlbPrmSysKineRat.EngVal = 22;
SysGlbPrmSysKineRat.EngMin = 10;
SysGlbPrmSysKineRat.EngMax = 40;
SysGlbPrmSysKineRat.PortName = 'SysGlbPrmSysKineRat';
SysGlbPrmSysKineRat.Description = [...
  'SysGlbPrmSysKineRat is used to convert from Motor Newton Meters to Han' ...
  'dwheel Newton Meters'];




%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dFordHwTqCdngFildBoostCrvAssiTq = DataDict.Display;
dFordHwTqCdngFildBoostCrvAssiTq.LongName = 'Ford Handwheel Torque Conditioning Filtered Boost Curve Assist Torque';
dFordHwTqCdngFildBoostCrvAssiTq.Description = [...
  'Display Ford Handwheel Torque Conditioning Filtered Boost Curve Assist' ...
  ' Torque'];
dFordHwTqCdngFildBoostCrvAssiTq.DocUnits = 'HwNwtMtr';
dFordHwTqCdngFildBoostCrvAssiTq.EngDT = dt.float32;
dFordHwTqCdngFildBoostCrvAssiTq.EngMin = -247.793;
dFordHwTqCdngFildBoostCrvAssiTq.EngMax = 247.793;
dFordHwTqCdngFildBoostCrvAssiTq.InitRowCol = [1  1];

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AppldFinalMotTqVldRefTi = DataDict.PIM;
AppldFinalMotTqVldRefTi.LongName = 'Applied Final Motor Torque Valid Reference Time';
AppldFinalMotTqVldRefTi.Description = [...
  'Timer for Valid Reference Time will increment or reset based on the co' ...
  'nditions'];
AppldFinalMotTqVldRefTi.DocUnits = 'HwNwtMtr';
AppldFinalMotTqVldRefTi.EngDT = dt.u32;
AppldFinalMotTqVldRefTi.EngMin = 0;
AppldFinalMotTqVldRefTi.EngMax = 4294967295;
AppldFinalMotTqVldRefTi.InitRowCol = [1  1];


InpTqRawVldRefTi = DataDict.PIM;
InpTqRawVldRefTi.LongName = 'Input Torque Raw Valid Reference Time';
InpTqRawVldRefTi.Description = [...
  'Timer for Valid Reference Time will increment or reset based on the co' ...
  'nditions'];
InpTqRawVldRefTi.DocUnits = 'Cnt';
InpTqRawVldRefTi.EngDT = dt.u32;
InpTqRawVldRefTi.EngMin = 0;
InpTqRawVldRefTi.EngMax = 4294967295;
InpTqRawVldRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
BOOSTCRVASSITQMAXLIM_HWNWTMTR_S16 = DataDict.Constant;
BOOSTCRVASSITQMAXLIM_HWNWTMTR_S16.LongName = 'Boost Curve Assist Torque Maximum Limit';
BOOSTCRVASSITQMAXLIM_HWNWTMTR_S16.Description = [...
  'Max Range Limit for Boost Curve Assist Torque output'];
BOOSTCRVASSITQMAXLIM_HWNWTMTR_S16.DocUnits = 'HwNwtMtr';
BOOSTCRVASSITQMAXLIM_HWNWTMTR_S16.EngDT = dt.s8p7;
BOOSTCRVASSITQMAXLIM_HWNWTMTR_S16.EngVal = 255.98;
BOOSTCRVASSITQMAXLIM_HWNWTMTR_S16.Define = 'Local';


BOOSTCRVASSITQMINLIM_HWNWTMTR_S16 = DataDict.Constant;
BOOSTCRVASSITQMINLIM_HWNWTMTR_S16.LongName = 'Boost Curve Assist Torque Minimum Limit';
BOOSTCRVASSITQMINLIM_HWNWTMTR_S16.Description = [...
  'Min Range Limit for Boost Curve Assist Torque output'];
BOOSTCRVASSITQMINLIM_HWNWTMTR_S16.DocUnits = 'HwNwtMtr';
BOOSTCRVASSITQMINLIM_HWNWTMTR_S16.EngDT = dt.s8p7;
BOOSTCRVASSITQMINLIM_HWNWTMTR_S16.EngVal = -256;
BOOSTCRVASSITQMINLIM_HWNWTMTR_S16.Define = 'Local';


CNVMILLISECTOCNT_CNTPERMILLISEC_U16 = DataDict.Constant;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Millisecond to Count';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ueis multiplied by this constant to convert millisecond to count'];
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngDT = dt.u16;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngVal = 10;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Define = 'Local';


ECUID1_CNT_U08 = DataDict.Constant;
ECUID1_CNT_U08.LongName = 'Ecu Identifier 1';
ECUID1_CNT_U08.Description = 'Ecu Identifier 1';
ECUID1_CNT_U08.DocUnits = 'Cnt';
ECUID1_CNT_U08.EngDT = dt.u08;
ECUID1_CNT_U08.EngVal = 1;
ECUID1_CNT_U08.Define = 'Local';


FINALMOTTQMAXLIM_HWNWTMTR_S32 = DataDict.Constant;
FINALMOTTQMAXLIM_HWNWTMTR_S32.LongName = 'Requested Final Motor Torque Maximum Limit';
FINALMOTTQMAXLIM_HWNWTMTR_S32.Description = [...
  'Maximum value of Requested Final Motor Torque'];
FINALMOTTQMAXLIM_HWNWTMTR_S32.DocUnits = 'HwNwtMtr';
FINALMOTTQMAXLIM_HWNWTMTR_S32.EngDT = dt.s23pm8;
FINALMOTTQMAXLIM_HWNWTMTR_S32.EngVal = 8388352;
FINALMOTTQMAXLIM_HWNWTMTR_S32.Define = 'Local';


FINALMOTTQMINLIM_HWNWTMTR_S32 = DataDict.Constant;
FINALMOTTQMINLIM_HWNWTMTR_S32.LongName = 'Requested Final Motor Torque Minimum Limit';
FINALMOTTQMINLIM_HWNWTMTR_S32.Description = [...
  'Minimum value of Requested Final Motor Torque'];
FINALMOTTQMINLIM_HWNWTMTR_S32.DocUnits = 'HwNwtMtr';
FINALMOTTQMINLIM_HWNWTMTR_S32.EngDT = dt.s23pm8;
FINALMOTTQMINLIM_HWNWTMTR_S32.EngVal = -8388608;
FINALMOTTQMINLIM_HWNWTMTR_S32.Define = 'Local';


INPTQMAXLIM_HWNWTMTR_S16 = DataDict.Constant;
INPTQMAXLIM_HWNWTMTR_S16.LongName = 'Handwheel Torque Maximum Range';
INPTQMAXLIM_HWNWTMTR_S16.Description = [...
  'Max Range Limit for Hw Trq function output'];
INPTQMAXLIM_HWNWTMTR_S16.DocUnits = 'HwNwtMtr';
INPTQMAXLIM_HWNWTMTR_S16.EngDT = dt.s5p10;
INPTQMAXLIM_HWNWTMTR_S16.EngVal = 31.999;
INPTQMAXLIM_HWNWTMTR_S16.Define = 'Local';


INPTQMINLIM_HWNWTMTR_S16 = DataDict.Constant;
INPTQMINLIM_HWNWTMTR_S16.LongName = 'Boost Curve Input Torque Minimum Limit';
INPTQMINLIM_HWNWTMTR_S16.Description = [...
  'Min Range Limit for Boost Curve Input Torque output'];
INPTQMINLIM_HWNWTMTR_S16.DocUnits = 'HwNwtMtr';
INPTQMINLIM_HWNWTMTR_S16.EngDT = dt.s5p10;
INPTQMINLIM_HWNWTMTR_S16.EngVal = -32;
INPTQMINLIM_HWNWTMTR_S16.Define = 'Local';


ITERATIONLIMIT_CNT_U08 = DataDict.Constant;
ITERATIONLIMIT_CNT_U08.LongName = 'Torque Correlation Status';
ITERATIONLIMIT_CNT_U08.Description = [...
  'Constant used for comparision with Torque Correlation Status'];
ITERATIONLIMIT_CNT_U08.DocUnits = 'Cnt';
ITERATIONLIMIT_CNT_U08.EngDT = dt.u08;
ITERATIONLIMIT_CNT_U08.EngVal = 240;
ITERATIONLIMIT_CNT_U08.Define = 'Local';


MAXASSCTQMAXLIM_PERC_F32 = DataDict.Constant;
MAXASSCTQMAXLIM_PERC_F32.LongName = 'Maximum Assistance Torque Minimum Limit';
MAXASSCTQMAXLIM_PERC_F32.Description = [...
  'Maximum value Maximum Assistance Torque'];
MAXASSCTQMAXLIM_PERC_F32.DocUnits = 'Perc';
MAXASSCTQMAXLIM_PERC_F32.EngDT = dt.float32;
MAXASSCTQMAXLIM_PERC_F32.EngVal = 100;
MAXASSCTQMAXLIM_PERC_F32.Define = 'Local';


MAXASSCTQMINLIM_PERC_F32 = DataDict.Constant;
MAXASSCTQMINLIM_PERC_F32.LongName = 'Minimum Assistance Torque Minimum Limit';
MAXASSCTQMINLIM_PERC_F32.Description = [...
  'Minimum value Maximum Assistance Torque'];
MAXASSCTQMINLIM_PERC_F32.DocUnits = 'Perc';
MAXASSCTQMINLIM_PERC_F32.EngDT = dt.float32;
MAXASSCTQMINLIM_PERC_F32.EngVal = 0;
MAXASSCTQMINLIM_PERC_F32.Define = 'Local';


SCAGFAC_ULS_F32 = DataDict.Constant;
SCAGFAC_ULS_F32.LongName = 'Scaling Factor';
SCAGFAC_ULS_F32.Description = [...
  'Scaling Factor used to convert Available Motor Torque into Maximum Ass' ...
  'istance Torque'];
SCAGFAC_ULS_F32.DocUnits = 'Uls';
SCAGFAC_ULS_F32.EngDT = dt.float32;
SCAGFAC_ULS_F32.EngVal = 100;
SCAGFAC_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
