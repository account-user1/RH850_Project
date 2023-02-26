%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 10-Nov-2017 11:30:38       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF045A = DataDict.FDD;
SF045A.Version = '1.1.X';
SF045A.LongName = 'Handwheel Angle System Arbitration';
SF045A.ShoName  = 'HwAgSysArbn';
SF045A.DesignASIL = 'D';
SF045A.Description = [...
  'This function accepts inputs from the various angle sources available ' ...
  'in the EPS system and selects the angle source to be used for the syst' ...
  'em handwheel angle value. It also provides for compliance compensation' ...
  ' of the angle value and determines the angle value and angle validity ' ...
  'to be output on the vehicle data bus.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAgSysArbnInit1 = DataDict.Runnable;
HwAgSysArbnInit1.Context = 'Rte';
HwAgSysArbnInit1.TimeStep = 0;
HwAgSysArbnInit1.Description = 'Initialization execution';

HwAgSysArbnPer1 = DataDict.Runnable;
HwAgSysArbnPer1.Context = 'Rte';
HwAgSysArbnPer1.TimeStep = 0.002;
HwAgSysArbnPer1.Description = 'Periodic execution';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'HwAgSysArbnPer1'};
FltInj_f32.Description = 'Fault Injection';
FltInj_f32.Return = DataDict.CSReturn;
FltInj_f32.Return.Type = 'None';
FltInj_f32.Return.Min = [];
FltInj_f32.Return.Max = [];
FltInj_f32.Return.TestTolerance = [];
FltInj_f32.Arguments(1) = DataDict.CSArguments;
FltInj_f32.Arguments(1).Name = 'SigPah';
FltInj_f32.Arguments(1).EngDT = dt.float32;
FltInj_f32.Arguments(1).EngMin = -1000000000;
FltInj_f32.Arguments(1).EngMax = 1000000000;
FltInj_f32.Arguments(1).TestTolerance = 999;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(1).Description = 'Input Signal';
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];
FltInj_f32.Arguments(2).Description = 'Fault Injection ID';


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwAgSysArbnPer1'};
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
GetRefTmr100MicroSec32bit.CallLocation = {'HwAgSysArbnPer1','HwAgSysArbnInit1'};
GetRefTmr100MicroSec32bit.Description = [...
  'Client definition to return the reference time in counts'];
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
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'Return reference time in counts';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'HwAgSysArbnPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'Client definition to determine elapse time'];
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
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Return elapsed time in counts';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwAgSysArbnPer1','HwAgSysArbnInit1'};
SetNtcSts.Description = [...
  'Client definition to set NTC status'];
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'Standard Return';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'Enum to define NTC number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = [...
  'Info regarding the bits to be set in the NTC'];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = [...
  'Enum indicating the status the NTC to be set to'];
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65500;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = [...
  'Debounce step indicating the delay time before settingNTC to either PA' ...
  'SSED or FAILED'];


GetSigImcData_f32 = DataDict.Client;
GetSigImcData_f32.CallLocation = {'ImcSigArbnPer2'};
GetSigImcData_f32.Description = [...
  'Get data from Imc Arbitration for a signal of type float32'];
GetSigImcData_f32.Return = DataDict.CSReturn;
GetSigImcData_f32.Return.Type = 'Standard';
GetSigImcData_f32.Return.Min = 0;
GetSigImcData_f32.Return.Max = 1;
GetSigImcData_f32.Return.TestTolerance = 0;
GetSigImcData_f32.Return.Description = [...
  'Signal returned from the Imc Arbitration based on Signal Id'];
GetSigImcData_f32.Arguments(1) = DataDict.CSArguments;
GetSigImcData_f32.Arguments(1).Name = 'SigId';
GetSigImcData_f32.Arguments(1).EngDT = dt.u16;
GetSigImcData_f32.Arguments(1).EngMin = 0;
GetSigImcData_f32.Arguments(1).EngMax = 65535;
GetSigImcData_f32.Arguments(1).Units = 'Cnt';
GetSigImcData_f32.Arguments(1).Direction = 'In';
GetSigImcData_f32.Arguments(1).InitRowCol = [1  1];
GetSigImcData_f32.Arguments(1).Description = [...
  'Defined by global constant to read the particular signal from Imc Arbi' ...
  'tration'];
GetSigImcData_f32.Arguments(2) = DataDict.CSArguments;
GetSigImcData_f32.Arguments(2).Name = 'Data';
GetSigImcData_f32.Arguments(2).EngDT = dt.float32;
GetSigImcData_f32.Arguments(2).EngMin = -32767.5;
GetSigImcData_f32.Arguments(2).EngMax = 32767.5;
GetSigImcData_f32.Arguments(2).TestTolerance = 0.1;
GetSigImcData_f32.Arguments(2).Units = 'HwDeg';
GetSigImcData_f32.Arguments(2).Direction = 'Out';
GetSigImcData_f32.Arguments(2).InitRowCol = [1  1];
GetSigImcData_f32.Arguments(2).Description = [...
  'Pointer to the location where Imc Arbitration need to update the value' ...
  ' of the signal mapped to the signal identifier'];
GetSigImcData_f32.Arguments(3) = DataDict.CSArguments;
GetSigImcData_f32.Arguments(3).Name = 'Sts';
GetSigImcData_f32.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_f32.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_f32.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_f32.Arguments(3).TestTolerance = 1;
GetSigImcData_f32.Arguments(3).Units = 'Cnt';
GetSigImcData_f32.Arguments(3).Direction = 'Out';
GetSigImcData_f32.Arguments(3).InitRowCol = [1  1];
GetSigImcData_f32.Arguments(3).Description = [...
  'Pointer to the location where Imc Arbitration needs to update particul' ...
  'ar signal reception status'];


%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
CmplncErrPinionToHw = DataDict.IpSignal;
CmplncErrPinionToHw.LongName = 'Compliance Error Pinion to Handwheel';
CmplncErrPinionToHw.Description = [...
  'Lost motion between Pinion and Handwheel'];
CmplncErrPinionToHw.DocUnits = 'HwDeg';
CmplncErrPinionToHw.EngDT = dt.float32;
CmplncErrPinionToHw.EngInit = 0;
CmplncErrPinionToHw.EngMin = -15;
CmplncErrPinionToHw.EngMax = 15;
CmplncErrPinionToHw.ReadIn = {'HwAgSysArbnPer1'};
CmplncErrPinionToHw.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = [...
  'Handwheel Angle without offset compensation applied'];
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'HwAgSysArbnPer1'};
HwAg.ReadType = 'Rte';


HwAgCorrd = DataDict.IpSignal;
HwAgCorrd.LongName = 'Handwheel Angle Corrected';
HwAgCorrd.Description = [...
  'Handwheel angle, after subtracting learned bias and limiting the resul' ...
  't.'];
HwAgCorrd.DocUnits = 'HwDeg';
HwAgCorrd.EngDT = dt.float32;
HwAgCorrd.EngInit = 0;
HwAgCorrd.EngMin = -1440;
HwAgCorrd.EngMax = 1440;
HwAgCorrd.ReadIn = {'HwAgSysArbnPer1'};
HwAgCorrd.ReadType = 'Rte';


HwAgIdptSig = DataDict.IpSignal;
HwAgIdptSig.LongName = 'Handwheel Angle Independent Signals';
HwAgIdptSig.Description = [...
  'Number of valid independent signals'];
HwAgIdptSig.DocUnits = 'Cnt';
HwAgIdptSig.EngDT = dt.u08;
HwAgIdptSig.EngInit = 2;
HwAgIdptSig.EngMin = 0;
HwAgIdptSig.EngMax = 2;
HwAgIdptSig.ReadIn = {'HwAgSysArbnPer1'};
HwAgIdptSig.ReadType = 'Rte';


HwAgSnsrls = DataDict.IpSignal;
HwAgSnsrls.LongName = 'Handwheel Angle Sensorless';
HwAgSnsrls.Description = 'Handwheel Angle Sensorless Signal';
HwAgSnsrls.DocUnits = 'HwDeg';
HwAgSnsrls.EngDT = dt.float32;
HwAgSnsrls.EngInit = 0;
HwAgSnsrls.EngMin = -1440;
HwAgSnsrls.EngMax = 1440;
HwAgSnsrls.ReadIn = {'HwAgSysArbnPer1'};
HwAgSnsrls.ReadType = 'Rte';


HwAgSnsrlsConf = DataDict.IpSignal;
HwAgSnsrlsConf.LongName = 'Handwheel Angle Sensorless Confidence';
HwAgSnsrlsConf.Description = [...
  'Handwheel Angle Sensorless Confidence'];
HwAgSnsrlsConf.DocUnits = 'Uls';
HwAgSnsrlsConf.EngDT = dt.float32;
HwAgSnsrlsConf.EngInit = 0;
HwAgSnsrlsConf.EngMin = 0;
HwAgSnsrlsConf.EngMax = 1;
HwAgSnsrlsConf.ReadIn = {'HwAgSysArbnPer1'};
HwAgSnsrlsConf.ReadType = 'Rte';


HwAgTrimPrfmd = DataDict.IpSignal;
HwAgTrimPrfmd.LongName = 'Handhweel Angle Trim Performed';
HwAgTrimPrfmd.Description = 'Handhweel Angle Trim Performed';
HwAgTrimPrfmd.DocUnits = 'Cnt';
HwAgTrimPrfmd.EngDT = dt.lgc;
HwAgTrimPrfmd.EngInit = 0;
HwAgTrimPrfmd.EngMin = 0;
HwAgTrimPrfmd.EngMax = 1;
HwAgTrimPrfmd.ReadIn = {'HwAgSysArbnPer1'};
HwAgTrimPrfmd.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque Signal';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'HwAgSysArbnPer1'};
HwTq.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity';
MotVelCrf.Description = 'Motor Velocity CRF';
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'HwAgSysArbnPer1'};
MotVelCrf.ReadType = 'Rte';


MotVelVld = DataDict.IpSignal;
MotVelVld.LongName = 'Motot Velocity Valid';
MotVelVld.Description = 'Motot Velocity Signal';
MotVelVld.DocUnits = 'Cnt';
MotVelVld.EngDT = dt.lgc;
MotVelVld.EngInit = 0;
MotVelVld.EngMin = 0;
MotVelVld.EngMax = 1;
MotVelVld.ReadIn = {'HwAgSysArbnPer1'};
MotVelVld.ReadType = 'Rte';


EcuId = DataDict.IpSignal;
EcuId.LongName = 'ECU Identifier';
EcuId.Description = [...
  'This signal is useed to send infomation of all client server to FIH'];
EcuId.DocUnits = 'Cnt';
EcuId.EngDT = dt.u08;
EcuId.EngInit = 0;
EcuId.EngMin = 0;
EcuId.EngMax = 3;
EcuId.ReadIn = {'FIH_Read_Signal_Status','FIH_Read_Signal_Status2','FIH_Read_Signal_Status_PassThru'};
EcuId.ReadType = 'Rte';


%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAgFinal = DataDict.OpSignal;
HwAgFinal.LongName = 'Handwheel Angle Final';
HwAgFinal.Description = [...
  'Handwheel Angle in Handwheel Coordinates aftercompensating compliance ' ...
  'error between Pinion to Handwheel'];
HwAgFinal.DocUnits = 'HwDeg';
HwAgFinal.SwcShoName = 'HwAgSysArbn';
HwAgFinal.EngDT = dt.float32;
HwAgFinal.EngInit = 0;
HwAgFinal.EngMin = -1440;
HwAgFinal.EngMax = 1440;
HwAgFinal.TestTolerance = 0.005;
HwAgFinal.WrittenIn = {'HwAgSysArbnPer1'};
HwAgFinal.WriteType = 'Rte';


HwAgNotCorrd = DataDict.OpSignal;
HwAgNotCorrd.LongName = 'Handwheel Not Corrected';
HwAgNotCorrd.Description = [...
  'Handwheel Angle in pinion coordinates without correction offset applie' ...
  'd'];
HwAgNotCorrd.DocUnits = 'HwDeg';
HwAgNotCorrd.SwcShoName = 'HwAgSysArbn';
HwAgNotCorrd.EngDT = dt.float32;
HwAgNotCorrd.EngInit = 0;
HwAgNotCorrd.EngMin = -1440;
HwAgNotCorrd.EngMax = 1440;
HwAgNotCorrd.TestTolerance = 0.005;
HwAgNotCorrd.WrittenIn = {'HwAgSysArbnPer1'};
HwAgNotCorrd.WriteType = 'Rte';


HwAgToSerlCom = DataDict.OpSignal;
HwAgToSerlCom.LongName = 'Handwheel Angle to Serial Communication';
HwAgToSerlCom.Description = [...
  'Handwheel Angle in Pinion coordinates sent out on Serial com bus after' ...
  'arbitration between Sensor and Sensorless Handwheel Angle'];
HwAgToSerlCom.DocUnits = 'HwDeg';
HwAgToSerlCom.SwcShoName = 'HwAgSysArbn';
HwAgToSerlCom.EngDT = dt.float32;
HwAgToSerlCom.EngInit = 0;
HwAgToSerlCom.EngMin = -1440;
HwAgToSerlCom.EngMax = 1440;
HwAgToSerlCom.TestTolerance = 0.005;
HwAgToSerlCom.WrittenIn = {'HwAgSysArbnPer1'};
HwAgToSerlCom.WriteType = 'Rte';


HwAgVldToSerlCom = DataDict.OpSignal;
HwAgVldToSerlCom.LongName = 'Handwheel Angle Validity to Serial Communication';
HwAgVldToSerlCom.Description = [...
  'Handwheel Angle Validity sent on Serial Com indicating the validity of' ...
  ' Handwheel Angle in Pinion coordinates'];
HwAgVldToSerlCom.DocUnits = 'Cnt';
HwAgVldToSerlCom.SwcShoName = 'HwAgSysArbn';
HwAgVldToSerlCom.EngDT = dt.lgc;
HwAgVldToSerlCom.EngInit = 0;
HwAgVldToSerlCom.EngMin = 0;
HwAgVldToSerlCom.EngMax = 1;
HwAgVldToSerlCom.TestTolerance = 0;
HwAgVldToSerlCom.WrittenIn = {'HwAgSysArbnPer1'};
HwAgVldToSerlCom.WriteType = 'Rte';


HwVel = DataDict.OpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = 'Handwheel Velocity';
HwVel.DocUnits = 'HwRadPerSec';
HwVel.SwcShoName = 'HwAgSysArbn';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.TestTolerance = 0.009;
HwVel.WrittenIn = {'HwAgSysArbnPer1'};
HwVel.WriteType = 'Rte';


HwVelToSerlCom = DataDict.OpSignal;
HwVelToSerlCom.LongName = 'Handwheel Velocity to Serial Communication';
HwVelToSerlCom.Description = [...
  'Handwheel Velocity in Pinion coordinates sent out on Serial com bus af' ...
  'terarbitration between Sensor and Sensorless Handwheel Angle'];
HwVelToSerlCom.DocUnits = 'HwRadPerSec';
HwVelToSerlCom.SwcShoName = 'HwAgSysArbn';
HwVelToSerlCom.EngDT = dt.float32;
HwVelToSerlCom.EngInit = 0;
HwVelToSerlCom.EngMin = -42;
HwVelToSerlCom.EngMax = 42;
HwVelToSerlCom.TestTolerance = 0.005;
HwVelToSerlCom.WrittenIn = {'HwAgSysArbnPer1'};
HwVelToSerlCom.WriteType = 'Rte';


PinionAg = DataDict.OpSignal;
PinionAg.LongName = 'Pinion Angle';
PinionAg.Description = [...
  'Handwheel Angle in Pinion Coordinates after arbitrating between sensor' ...
  ' and Sensorless Handwheel angle'];
PinionAg.DocUnits = 'HwDeg';
PinionAg.SwcShoName = 'HwAgSysArbn';
PinionAg.EngDT = dt.float32;
PinionAg.EngInit = 0;
PinionAg.EngMin = -1440;
PinionAg.EngMax = 1440;
PinionAg.TestTolerance = 0.005;
PinionAg.WrittenIn = {'HwAgSysArbnPer1'};
PinionAg.WriteType = 'Rte';


PinionAgConf = DataDict.OpSignal;
PinionAgConf.LongName = 'Pinion Angle Confidence';
PinionAgConf.Description = [...
  'Handwheel Angle confidence of the Handwheel Angle calculated in pinion' ...
  ' coordiantes after arbitration between sensor and Sensorless signals'];
PinionAgConf.DocUnits = 'Uls';
PinionAgConf.SwcShoName = 'HwAgSysArbn';
PinionAgConf.EngDT = dt.float32;
PinionAgConf.EngInit = 0;
PinionAgConf.EngMin = 0;
PinionAgConf.EngMax = 1;
PinionAgConf.TestTolerance = 0.005;
PinionAgConf.WrittenIn = {'HwAgSysArbnPer1'};
PinionAgConf.WriteType = 'Rte';


PinionVel = DataDict.OpSignal;
PinionVel.LongName = 'Pinion Velocity';
PinionVel.Description = [...
  'Pinion Velocity in Pinion Coordinates after arbitrating between sensor' ...
  ' and Sensorless Handwheel angle'];
PinionVel.DocUnits = 'HwRadPerSec';
PinionVel.SwcShoName = 'HwAgSysArbn';
PinionVel.EngDT = dt.float32;
PinionVel.EngInit = 0;
PinionVel.EngMin = -42;
PinionVel.EngMax = 42;
PinionVel.TestTolerance = 0.005;
PinionVel.WrittenIn = {'HwAgSysArbnPer1'};
PinionVel.WriteType = 'Rte';


PinionVelConf = DataDict.OpSignal;
PinionVelConf.LongName = 'Pinion Velocity Confidence';
PinionVelConf.Description = [...
  'Handwheel Angle confidence of the Handwheel Angle calculated in pinion' ...
  ' coordiantes after arbitration between sensor and Sensorless signals'];
PinionVelConf.DocUnits = 'Uls';
PinionVelConf.SwcShoName = 'HwAgSysArbn';
PinionVelConf.EngDT = dt.float32;
PinionVelConf.EngInit = 0;
PinionVelConf.EngMin = 0;
PinionVelConf.EngMax = 1;
PinionVelConf.TestTolerance = 0.005;
PinionVelConf.WrittenIn = {'HwAgSysArbnPer1'};
PinionVelConf.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwAgSysArbnHwAgConf1Snsr = DataDict.Calibration;
HwAgSysArbnHwAgConf1Snsr.LongName = 'Handwheel Angle Confidence 1 Sensor';
HwAgSysArbnHwAgConf1Snsr.Description = [...
  'Handwheel Angle Confidence when one sensor is available'];
HwAgSysArbnHwAgConf1Snsr.DocUnits = 'Uls';
HwAgSysArbnHwAgConf1Snsr.EngDT = dt.float32;
HwAgSysArbnHwAgConf1Snsr.EngVal = 1;
HwAgSysArbnHwAgConf1Snsr.EngMin = 0;
HwAgSysArbnHwAgConf1Snsr.EngMax = 1;
HwAgSysArbnHwAgConf1Snsr.Cardinality = 'Cmn';
HwAgSysArbnHwAgConf1Snsr.CustomerVisible = false;
HwAgSysArbnHwAgConf1Snsr.Online = false;
HwAgSysArbnHwAgConf1Snsr.Impact = 'H';
HwAgSysArbnHwAgConf1Snsr.TuningOwner = 'CSE';
HwAgSysArbnHwAgConf1Snsr.GraphLink = {''};
HwAgSysArbnHwAgConf1Snsr.Monotony = 'None';
HwAgSysArbnHwAgConf1Snsr.MaxGrad = 999;
HwAgSysArbnHwAgConf1Snsr.PortName = 'HwAgSysArbnHwAgConf1Snsr';


HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd = DataDict.Calibration;
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.LongName = 'Handwheel Angle Confidence 1 Sensor Not Trimmed';
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.Description = [...
  'Handwheel Angle Confidence when one sensor is not trimmed'];
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.DocUnits = 'Uls';
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.EngDT = dt.float32;
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.EngVal = 0;
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.EngMin = 0;
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.EngMax = 1;
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.Cardinality = 'Cmn';
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.CustomerVisible = false;
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.Online = false;
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.Impact = 'H';
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.TuningOwner = 'CSE';
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.GraphLink = {''};
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.Monotony = 'None';
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.MaxGrad = 999;
HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd.PortName = 'HwAgSysArbnHwAgConf1SnsrHwAgTrimNotPrfmd';


HwAgSysArbnHwAgConf2Snsr = DataDict.Calibration;
HwAgSysArbnHwAgConf2Snsr.LongName = 'Handwheel Angle Confidence 2 Sensor';
HwAgSysArbnHwAgConf2Snsr.Description = [...
  'Handwheel Angle Confidence when two sensors are available'];
HwAgSysArbnHwAgConf2Snsr.DocUnits = 'Uls';
HwAgSysArbnHwAgConf2Snsr.EngDT = dt.float32;
HwAgSysArbnHwAgConf2Snsr.EngVal = 1;
HwAgSysArbnHwAgConf2Snsr.EngMin = 0;
HwAgSysArbnHwAgConf2Snsr.EngMax = 1;
HwAgSysArbnHwAgConf2Snsr.Cardinality = 'Cmn';
HwAgSysArbnHwAgConf2Snsr.CustomerVisible = false;
HwAgSysArbnHwAgConf2Snsr.Online = false;
HwAgSysArbnHwAgConf2Snsr.Impact = 'H';
HwAgSysArbnHwAgConf2Snsr.TuningOwner = 'CSE';
HwAgSysArbnHwAgConf2Snsr.GraphLink = {''};
HwAgSysArbnHwAgConf2Snsr.Monotony = 'None';
HwAgSysArbnHwAgConf2Snsr.MaxGrad = 999;
HwAgSysArbnHwAgConf2Snsr.PortName = 'HwAgSysArbnHwAgConf2Snsr';


HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd = DataDict.Calibration;
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.LongName = 'Handwheel Angle Confidence 2 Sensor Not Trimmed';
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.Description = [...
  'Handwheel Angle Confidence when one sensor is not trimmed'];
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.DocUnits = 'Uls';
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.EngDT = dt.float32;
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.EngVal = 0;
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.EngMin = 0;
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.EngMax = 1;
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.Cardinality = 'Cmn';
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.CustomerVisible = false;
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.Online = false;
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.Impact = 'H';
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.TuningOwner = 'CSE';
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.GraphLink = {''};
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.Monotony = 'None';
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.MaxGrad = 999;
HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd.PortName = 'HwAgSysArbnHwAgConf2SnsrHwAgTrimNotPrfmd';


HwAgSysArbnHwAgConfNoSnsr = DataDict.Calibration;
HwAgSysArbnHwAgConfNoSnsr.LongName = 'Handwheel Angle Confidence No Sensor';
HwAgSysArbnHwAgConfNoSnsr.Description = [...
  'Handwheel Angle Confidence when no sensors are available'];
HwAgSysArbnHwAgConfNoSnsr.DocUnits = 'Uls';
HwAgSysArbnHwAgConfNoSnsr.EngDT = dt.float32;
HwAgSysArbnHwAgConfNoSnsr.EngVal = 0;
HwAgSysArbnHwAgConfNoSnsr.EngMin = 0;
HwAgSysArbnHwAgConfNoSnsr.EngMax = 1;
HwAgSysArbnHwAgConfNoSnsr.Cardinality = 'Cmn';
HwAgSysArbnHwAgConfNoSnsr.CustomerVisible = false;
HwAgSysArbnHwAgConfNoSnsr.Online = false;
HwAgSysArbnHwAgConfNoSnsr.Impact = 'H';
HwAgSysArbnHwAgConfNoSnsr.TuningOwner = 'CSE';
HwAgSysArbnHwAgConfNoSnsr.GraphLink = {''};
HwAgSysArbnHwAgConfNoSnsr.Monotony = 'None';
HwAgSysArbnHwAgConfNoSnsr.MaxGrad = 999;
HwAgSysArbnHwAgConfNoSnsr.PortName = 'HwAgSysArbnHwAgConfNoSnsr';


HwAgSysArbnHwAgConfTiThd = DataDict.Calibration;
HwAgSysArbnHwAgConfTiThd.LongName = 'HandWheel Angle Confidence Timer';
HwAgSysArbnHwAgConfTiThd.Description = 'HandWheel Angle Confidence Timer';
HwAgSysArbnHwAgConfTiThd.DocUnits = 'MilliSec';
HwAgSysArbnHwAgConfTiThd.EngDT = dt.u16;
HwAgSysArbnHwAgConfTiThd.EngVal = 5000;
HwAgSysArbnHwAgConfTiThd.EngMin = 0;
HwAgSysArbnHwAgConfTiThd.EngMax = 6000;
HwAgSysArbnHwAgConfTiThd.Cardinality = 'Cmn';
HwAgSysArbnHwAgConfTiThd.CustomerVisible = false;
HwAgSysArbnHwAgConfTiThd.Online = false;
HwAgSysArbnHwAgConfTiThd.Impact = 'L';
HwAgSysArbnHwAgConfTiThd.TuningOwner = 'CSE';
HwAgSysArbnHwAgConfTiThd.GraphLink = {''};
HwAgSysArbnHwAgConfTiThd.Monotony = 'None';
HwAgSysArbnHwAgConfTiThd.MaxGrad = 0;
HwAgSysArbnHwAgConfTiThd.PortName = 'HwAgSysArbnHwAgConfTiThd';


HwAgSysArbnHwAgCorrdCorrlnThd = DataDict.Calibration;
HwAgSysArbnHwAgCorrdCorrlnThd.LongName = 'Handwheel Angle Corrected Correlation Threshold';
HwAgSysArbnHwAgCorrdCorrlnThd.Description = [...
  'Minimum Sensor based Handwheel Angle confidence required to perform th' ...
  'e correlation between sensor and sensorless handwheel angle signal'];
HwAgSysArbnHwAgCorrdCorrlnThd.DocUnits = 'Uls';
HwAgSysArbnHwAgCorrdCorrlnThd.EngDT = dt.float32;
HwAgSysArbnHwAgCorrdCorrlnThd.EngVal = 1;
HwAgSysArbnHwAgCorrdCorrlnThd.EngMin = 0;
HwAgSysArbnHwAgCorrdCorrlnThd.EngMax = 1;
HwAgSysArbnHwAgCorrdCorrlnThd.Cardinality = 'Cmn';
HwAgSysArbnHwAgCorrdCorrlnThd.CustomerVisible = false;
HwAgSysArbnHwAgCorrdCorrlnThd.Online = false;
HwAgSysArbnHwAgCorrdCorrlnThd.Impact = 'H';
HwAgSysArbnHwAgCorrdCorrlnThd.TuningOwner = 'CSE';
HwAgSysArbnHwAgCorrdCorrlnThd.GraphLink = {''};
HwAgSysArbnHwAgCorrdCorrlnThd.Monotony = 'None';
HwAgSysArbnHwAgCorrdCorrlnThd.MaxGrad = 999;
HwAgSysArbnHwAgCorrdCorrlnThd.PortName = 'HwAgSysArbnHwAgCorrdCorrlnThd';


HwAgSysArbnHwAgCorrlnFailDebStep = DataDict.Calibration;
HwAgSysArbnHwAgCorrlnFailDebStep.LongName = 'Handwheel Angle Correlation Fail Debounce Step';
HwAgSysArbnHwAgCorrlnFailDebStep.Description = [...
  'Debounce step count is determined based on delay time needed before se' ...
  'tting "HwAg to MotorAg Correlation" NTC to FAIL state. When execution ' ...
  'rate is 2msec, incrementing the debounce step count at a rate of 132 w' ...
  'ouldtake 500msec to reach value greater than 32767. Until then NTC rem' ...
  'ains inPREFAIL state and Once maximum step count is reached NTC is set' ...
  ' to FAIL'];
HwAgSysArbnHwAgCorrlnFailDebStep.DocUnits = 'Cnt';
HwAgSysArbnHwAgCorrlnFailDebStep.EngDT = dt.u16;
HwAgSysArbnHwAgCorrlnFailDebStep.EngVal = 132;
HwAgSysArbnHwAgCorrlnFailDebStep.EngMin = 0;
HwAgSysArbnHwAgCorrlnFailDebStep.EngMax = 65535;
HwAgSysArbnHwAgCorrlnFailDebStep.Cardinality = 'Cmn';
HwAgSysArbnHwAgCorrlnFailDebStep.CustomerVisible = false;
HwAgSysArbnHwAgCorrlnFailDebStep.Online = false;
HwAgSysArbnHwAgCorrlnFailDebStep.Impact = 'H';
HwAgSysArbnHwAgCorrlnFailDebStep.TuningOwner = 'CSE';
HwAgSysArbnHwAgCorrlnFailDebStep.GraphLink = {''};
HwAgSysArbnHwAgCorrlnFailDebStep.Monotony = 'None';
HwAgSysArbnHwAgCorrlnFailDebStep.MaxGrad = 999;
HwAgSysArbnHwAgCorrlnFailDebStep.PortName = 'HwAgSysArbnHwAgCorrlnFailDebStep';


HwAgSysArbnHwAgCorrlnPassDebStep = DataDict.Calibration;
HwAgSysArbnHwAgCorrlnPassDebStep.LongName = 'Handwheel Angle Correlation Pass Debounce Step';
HwAgSysArbnHwAgCorrlnPassDebStep.Description = [...
  'Debounce step count is determined based on delay time needed before se' ...
  'tting "HwAg to MotorAg Correlation" NTC to PASS state. When execution ' ...
  'rate is 2msec, step count of 132 every execution loop would take 500ms' ...
  ' toreach value step count of -32768.  Until then NTC remains inin PREP' ...
  'ASS state and Once maximum step count is reached, NTC is set to PASS'];
HwAgSysArbnHwAgCorrlnPassDebStep.DocUnits = 'Cnt';
HwAgSysArbnHwAgCorrlnPassDebStep.EngDT = dt.u16;
HwAgSysArbnHwAgCorrlnPassDebStep.EngVal = 132;
HwAgSysArbnHwAgCorrlnPassDebStep.EngMin = 0;
HwAgSysArbnHwAgCorrlnPassDebStep.EngMax = 65535;
HwAgSysArbnHwAgCorrlnPassDebStep.Cardinality = 'Cmn';
HwAgSysArbnHwAgCorrlnPassDebStep.CustomerVisible = false;
HwAgSysArbnHwAgCorrlnPassDebStep.Online = false;
HwAgSysArbnHwAgCorrlnPassDebStep.Impact = 'H';
HwAgSysArbnHwAgCorrlnPassDebStep.TuningOwner = 'CSE';
HwAgSysArbnHwAgCorrlnPassDebStep.GraphLink = {''};
HwAgSysArbnHwAgCorrlnPassDebStep.Monotony = 'None';
HwAgSysArbnHwAgCorrlnPassDebStep.MaxGrad = 999;
HwAgSysArbnHwAgCorrlnPassDebStep.PortName = 'HwAgSysArbnHwAgCorrlnPassDebStep';


HwAgSysArbnHwAgCorrlnRng = DataDict.Calibration;
HwAgSysArbnHwAgCorrlnRng.LongName = 'Handwheel Angle Correlation Range';
HwAgSysArbnHwAgCorrlnRng.Description = [...
  'The Sensor based Handwheel Angle and Handwheel Angle Sensorless signal' ...
  's are considered correlated when difference between them are within th' ...
  'is Calibration Range.'];
HwAgSysArbnHwAgCorrlnRng.DocUnits = 'HwDeg';
HwAgSysArbnHwAgCorrlnRng.EngDT = dt.float32;
HwAgSysArbnHwAgCorrlnRng.EngVal = 5;
HwAgSysArbnHwAgCorrlnRng.EngMin = 0;
HwAgSysArbnHwAgCorrlnRng.EngMax = 100;
HwAgSysArbnHwAgCorrlnRng.Cardinality = 'Cmn';
HwAgSysArbnHwAgCorrlnRng.CustomerVisible = false;
HwAgSysArbnHwAgCorrlnRng.Online = false;
HwAgSysArbnHwAgCorrlnRng.Impact = 'H';
HwAgSysArbnHwAgCorrlnRng.TuningOwner = 'CSE';
HwAgSysArbnHwAgCorrlnRng.GraphLink = {''};
HwAgSysArbnHwAgCorrlnRng.Monotony = 'None';
HwAgSysArbnHwAgCorrlnRng.MaxGrad = 999;
HwAgSysArbnHwAgCorrlnRng.PortName = 'HwAgSysArbnHwAgCorrlnRng';


HwAgSysArbnImcHwAgCorrlnRng = DataDict.Calibration;
HwAgSysArbnImcHwAgCorrlnRng.LongName = 'IMC Handwheel Angle Correlation Range';
HwAgSysArbnImcHwAgCorrlnRng.Description = [...
  'The Sensor based IMC Handwheel Angle and Handwheel Angle Sensorless signal' ...
  's are considered correlated when difference between them are within th' ...
  'is Calibration Range.'];
HwAgSysArbnImcHwAgCorrlnRng.DocUnits = 'HwDeg';
HwAgSysArbnImcHwAgCorrlnRng.EngDT = dt.float32;
HwAgSysArbnImcHwAgCorrlnRng.EngVal = 5;
HwAgSysArbnImcHwAgCorrlnRng.EngMin = 0;
HwAgSysArbnImcHwAgCorrlnRng.EngMax = 100;
HwAgSysArbnImcHwAgCorrlnRng.Cardinality = 'Cmn';
HwAgSysArbnImcHwAgCorrlnRng.CustomerVisible = false;
HwAgSysArbnImcHwAgCorrlnRng.Online = false;
HwAgSysArbnImcHwAgCorrlnRng.Impact = 'H';
HwAgSysArbnImcHwAgCorrlnRng.TuningOwner = 'CSE';
HwAgSysArbnImcHwAgCorrlnRng.GraphLink = {''};
HwAgSysArbnImcHwAgCorrlnRng.Monotony = 'None';
HwAgSysArbnImcHwAgCorrlnRng.MaxGrad = 999;
HwAgSysArbnImcHwAgCorrlnRng.PortName = 'HwAgSysArbnImcHwAgCorrlnRng';


HwAgSysArbnHwAgIdptSigLim = DataDict.Calibration;
HwAgSysArbnHwAgIdptSigLim.LongName = 'Handwheel Angle Independant Signal Limit';
HwAgSysArbnHwAgIdptSigLim.Description = [...
  'NTC Handwheel position Signal Low is set to Failed when HandwheelAngle' ...
  ' Independant Signal is less than Cal Handwheel Angle IndependantSignal' ...
  ' Limit'];
HwAgSysArbnHwAgIdptSigLim.DocUnits = 'Cnt';
HwAgSysArbnHwAgIdptSigLim.EngDT = dt.u08;
HwAgSysArbnHwAgIdptSigLim.EngVal = 1;
HwAgSysArbnHwAgIdptSigLim.EngMin = 0;
HwAgSysArbnHwAgIdptSigLim.EngMax = 2;
HwAgSysArbnHwAgIdptSigLim.Cardinality = 'Cmn';
HwAgSysArbnHwAgIdptSigLim.CustomerVisible = false;
HwAgSysArbnHwAgIdptSigLim.Online = false;
HwAgSysArbnHwAgIdptSigLim.Impact = 'H';
HwAgSysArbnHwAgIdptSigLim.TuningOwner = 'CSE';
HwAgSysArbnHwAgIdptSigLim.GraphLink = {''};
HwAgSysArbnHwAgIdptSigLim.Monotony = 'None';
HwAgSysArbnHwAgIdptSigLim.MaxGrad = 999;
HwAgSysArbnHwAgIdptSigLim.PortName = 'HwAgSysArbnHwAgIdptSigLim';


HwAgSysArbnHwAgSlewRate = DataDict.Calibration;
HwAgSysArbnHwAgSlewRate.LongName = 'Handwheel Angle Slew Rate';
HwAgSysArbnHwAgSlewRate.Description = [...
  'Governs the rate of change of Handwheel Angle when switchinghandwheel ' ...
  'angle sources'];
HwAgSysArbnHwAgSlewRate.DocUnits = 'HwDegPerSec';
HwAgSysArbnHwAgSlewRate.EngDT = dt.float32;
HwAgSysArbnHwAgSlewRate.EngVal = 100;
HwAgSysArbnHwAgSlewRate.EngMin = 1;
HwAgSysArbnHwAgSlewRate.EngMax = 1400000;
HwAgSysArbnHwAgSlewRate.Cardinality = 'Cmn';
HwAgSysArbnHwAgSlewRate.CustomerVisible = false;
HwAgSysArbnHwAgSlewRate.Online = false;
HwAgSysArbnHwAgSlewRate.Impact = 'H';
HwAgSysArbnHwAgSlewRate.TuningOwner = 'CSE';
HwAgSysArbnHwAgSlewRate.GraphLink = {''};
HwAgSysArbnHwAgSlewRate.Monotony = 'None';
HwAgSysArbnHwAgSlewRate.MaxGrad = 999;
HwAgSysArbnHwAgSlewRate.PortName = 'HwAgSysArbnHwAgSlewRate';


HwAgSysArbnHwAgSnsrlsCorrlnThd = DataDict.Calibration;
HwAgSysArbnHwAgSnsrlsCorrlnThd.LongName = 'Handwheel Angle Sensorless Correlation Threshold';
HwAgSysArbnHwAgSnsrlsCorrlnThd.Description = [...
  'Minimum Handwheel Angle sensorless confidence required to perform the ' ...
  'correlation between sensor and sensorless handwheel angle signal'];
HwAgSysArbnHwAgSnsrlsCorrlnThd.DocUnits = 'Uls';
HwAgSysArbnHwAgSnsrlsCorrlnThd.EngDT = dt.float32;
HwAgSysArbnHwAgSnsrlsCorrlnThd.EngVal = 1;
HwAgSysArbnHwAgSnsrlsCorrlnThd.EngMin = 0;
HwAgSysArbnHwAgSnsrlsCorrlnThd.EngMax = 1;
HwAgSysArbnHwAgSnsrlsCorrlnThd.Cardinality = 'Cmn';
HwAgSysArbnHwAgSnsrlsCorrlnThd.CustomerVisible = false;
HwAgSysArbnHwAgSnsrlsCorrlnThd.Online = false;
HwAgSysArbnHwAgSnsrlsCorrlnThd.Impact = 'H';
HwAgSysArbnHwAgSnsrlsCorrlnThd.TuningOwner = 'CSE';
HwAgSysArbnHwAgSnsrlsCorrlnThd.GraphLink = {''};
HwAgSysArbnHwAgSnsrlsCorrlnThd.Monotony = 'None';
HwAgSysArbnHwAgSnsrlsCorrlnThd.MaxGrad = 999;
HwAgSysArbnHwAgSnsrlsCorrlnThd.PortName = 'HwAgSysArbnHwAgSnsrlsCorrlnThd';


HwAgSysArbnHwAgSnsrlsKineThd = DataDict.Calibration;
HwAgSysArbnHwAgSnsrlsKineThd.LongName = 'Handwheel Angle Sensorless Threshold';
HwAgSysArbnHwAgSnsrlsKineThd.Description = [...
  'Handwheel Angle Threshold limit to determine the Kinematic Integrity F' ...
  'ault'];
HwAgSysArbnHwAgSnsrlsKineThd.DocUnits = 'HwDeg';
HwAgSysArbnHwAgSnsrlsKineThd.EngDT = dt.float32;
HwAgSysArbnHwAgSnsrlsKineThd.EngVal = 1500;
HwAgSysArbnHwAgSnsrlsKineThd.EngMin = 0;
HwAgSysArbnHwAgSnsrlsKineThd.EngMax = 2880;
HwAgSysArbnHwAgSnsrlsKineThd.Cardinality = 'Cmn';
HwAgSysArbnHwAgSnsrlsKineThd.CustomerVisible = false;
HwAgSysArbnHwAgSnsrlsKineThd.Online = false;
HwAgSysArbnHwAgSnsrlsKineThd.Impact = 'H';
HwAgSysArbnHwAgSnsrlsKineThd.TuningOwner = 'CSE';
HwAgSysArbnHwAgSnsrlsKineThd.GraphLink = {''};
HwAgSysArbnHwAgSnsrlsKineThd.Monotony = 'None';
HwAgSysArbnHwAgSnsrlsKineThd.MaxGrad = 999;
HwAgSysArbnHwAgSnsrlsKineThd.PortName = 'HwAgSysArbnHwAgSnsrlsKineThd';


% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim = DataDict.Calibration;
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.LongName = 'Handwheel Angle to Motor Angle Correlation Elapsed Time Limit';
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.Description = [...
%   'Calibration to limit the duration until which sensorless handwheel ang' ...
%   'le can be transmitted on Serial Com Bus since last correlation occured' ...
%   ' between Handwheel Angle sensor and Handwheel Angle sensorless signal.' ...
%   'The value of 86400 seconds is equivalent to time period of one day'];
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.DocUnits = 'Sec';
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.EngDT = dt.u32;
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.EngVal = 86400;
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.EngMin = 0;
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.EngMax = 259200;
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.Cardinality = 'Cmn';
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.CustomerVisible = false;
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.Online = false;
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.Impact = 'H';
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.TuningOwner = 'CSE';
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.GraphLink = {''};
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.Monotony = 'None';
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.MaxGrad = 999;
% HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim.PortName = 'HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim';


HwAgSysArbnSerlComHwAgCorrdConf = DataDict.Calibration;
HwAgSysArbnSerlComHwAgCorrdConf.LongName = ' Serial Com Handwheel Angle Corrected Confidence';
HwAgSysArbnSerlComHwAgCorrdConf.Description = [...
  'Sensor based Handwheel Angle confidence compared against this calibrat' ...
  'ion valueto determine the validity status of Handwheel Angle to be sen' ...
  't on the Serial Com'];
HwAgSysArbnSerlComHwAgCorrdConf.DocUnits = 'Uls';
HwAgSysArbnSerlComHwAgCorrdConf.EngDT = dt.float32;
HwAgSysArbnSerlComHwAgCorrdConf.EngVal = 1;
HwAgSysArbnSerlComHwAgCorrdConf.EngMin = 0;
HwAgSysArbnSerlComHwAgCorrdConf.EngMax = 1;
HwAgSysArbnSerlComHwAgCorrdConf.Cardinality = 'Cmn';
HwAgSysArbnSerlComHwAgCorrdConf.CustomerVisible = false;
HwAgSysArbnSerlComHwAgCorrdConf.Online = false;
HwAgSysArbnSerlComHwAgCorrdConf.Impact = 'H';
HwAgSysArbnSerlComHwAgCorrdConf.TuningOwner = 'CSE';
HwAgSysArbnSerlComHwAgCorrdConf.GraphLink = {''};
HwAgSysArbnSerlComHwAgCorrdConf.Monotony = 'None';
HwAgSysArbnSerlComHwAgCorrdConf.MaxGrad = 999;
HwAgSysArbnSerlComHwAgCorrdConf.PortName = 'HwAgSysArbnSerlComHwAgCorrdConf';


HwAgSysArbnSerlComHwAgSnsrlsConf = DataDict.Calibration;
HwAgSysArbnSerlComHwAgSnsrlsConf.LongName = 'Handwheel Angle 1 Serial Communication Confidence';
HwAgSysArbnSerlComHwAgSnsrlsConf.Description = [...
  'Handwheel Angle sensorless confidence compared against this calibratio' ...
  'n value to determine the validity status of Handwheel Angle to be sent' ...
  ' on the Serial Com'];
HwAgSysArbnSerlComHwAgSnsrlsConf.DocUnits = 'Uls';
HwAgSysArbnSerlComHwAgSnsrlsConf.EngDT = dt.float32;
HwAgSysArbnSerlComHwAgSnsrlsConf.EngVal = 1;
HwAgSysArbnSerlComHwAgSnsrlsConf.EngMin = 0;
HwAgSysArbnSerlComHwAgSnsrlsConf.EngMax = 1;
HwAgSysArbnSerlComHwAgSnsrlsConf.Cardinality = 'Cmn';
HwAgSysArbnSerlComHwAgSnsrlsConf.CustomerVisible = false;
HwAgSysArbnSerlComHwAgSnsrlsConf.Online = false;
HwAgSysArbnSerlComHwAgSnsrlsConf.Impact = 'H';
HwAgSysArbnSerlComHwAgSnsrlsConf.TuningOwner = 'CSE';
HwAgSysArbnSerlComHwAgSnsrlsConf.GraphLink = {''};
HwAgSysArbnSerlComHwAgSnsrlsConf.Monotony = 'None';
HwAgSysArbnSerlComHwAgSnsrlsConf.MaxGrad = 999;
HwAgSysArbnSerlComHwAgSnsrlsConf.PortName = 'HwAgSysArbnSerlComHwAgSnsrlsConf';


HwAgSysArbnSlewRateTmr = DataDict.Calibration;
HwAgSysArbnSlewRateTmr.LongName = 'Slew Rate Timer';
HwAgSysArbnSlewRateTmr.Description = [...
  'Calibration to limit output slewing to a field configuration maximum d' ...
  'uration'];
HwAgSysArbnSlewRateTmr.DocUnits = 'MilliSec';
HwAgSysArbnSlewRateTmr.EngDT = dt.float32;
HwAgSysArbnSlewRateTmr.EngVal = 10000;
HwAgSysArbnSlewRateTmr.EngMin = 0;
HwAgSysArbnSlewRateTmr.EngMax = 15000;
HwAgSysArbnSlewRateTmr.Cardinality = 'Cmn';
HwAgSysArbnSlewRateTmr.CustomerVisible = false;
HwAgSysArbnSlewRateTmr.Online = false;
HwAgSysArbnSlewRateTmr.Impact = 'H';
HwAgSysArbnSlewRateTmr.TuningOwner = 'CSE';
HwAgSysArbnSlewRateTmr.GraphLink = {''};
HwAgSysArbnSlewRateTmr.Monotony = 'None';
HwAgSysArbnSlewRateTmr.MaxGrad = 999;
HwAgSysArbnSlewRateTmr.PortName = 'HwAgSysArbnSlewRateTmr';


HwAgSysArbnTqSnsrVelFilFrq = DataDict.Calibration;
HwAgSysArbnTqSnsrVelFilFrq.LongName = 'Handhweel Angle Torque Sensor Velocity Filter Frequency';
HwAgSysArbnTqSnsrVelFilFrq.Description = [...
  'Corner/cutoff frequency for low-pass filter on torque sensor velocity ' ...
  'calculation'];
HwAgSysArbnTqSnsrVelFilFrq.DocUnits = 'Hz';
HwAgSysArbnTqSnsrVelFilFrq.EngDT = dt.float32;
HwAgSysArbnTqSnsrVelFilFrq.EngVal = 20;
HwAgSysArbnTqSnsrVelFilFrq.EngMin = 0.1;
HwAgSysArbnTqSnsrVelFilFrq.EngMax = 100;
HwAgSysArbnTqSnsrVelFilFrq.Cardinality = 'Inin';
HwAgSysArbnTqSnsrVelFilFrq.CustomerVisible = false;
HwAgSysArbnTqSnsrVelFilFrq.Online = false;
HwAgSysArbnTqSnsrVelFilFrq.Impact = 'M';
HwAgSysArbnTqSnsrVelFilFrq.TuningOwner = 'CSE';
HwAgSysArbnTqSnsrVelFilFrq.GraphLink = {''};
HwAgSysArbnTqSnsrVelFilFrq.Monotony = 'None';
HwAgSysArbnTqSnsrVelFilFrq.MaxGrad = 99.9;
HwAgSysArbnTqSnsrVelFilFrq.PortName = 'HwAgSysArbnTqSnsrVelFilFrq';


HwAgSysArbnPinionAgConfThd = DataDict.Calibration;
HwAgSysArbnPinionAgConfThd.LongName = 'Pinion Angle Confidence ';
HwAgSysArbnPinionAgConfThd.Description = [...
  'Minimum Pinion Angle confidence required to provide the ' ...
  'Pinion Velocity ,Handhwheel Velocity and Pinion Confidence signal'];
HwAgSysArbnPinionAgConfThd.DocUnits = 'Uls';
HwAgSysArbnPinionAgConfThd.EngDT = dt.float32;
HwAgSysArbnPinionAgConfThd.EngVal = 1;
HwAgSysArbnPinionAgConfThd.EngMin = 0;
HwAgSysArbnPinionAgConfThd.EngMax = 1;
HwAgSysArbnPinionAgConfThd.Cardinality = 'Cmn';
HwAgSysArbnPinionAgConfThd.CustomerVisible = false;
HwAgSysArbnPinionAgConfThd.Online = false;
HwAgSysArbnPinionAgConfThd.Impact = 'H';
HwAgSysArbnPinionAgConfThd.TuningOwner = 'CSE';
HwAgSysArbnPinionAgConfThd.GraphLink = {''};
HwAgSysArbnPinionAgConfThd.Monotony = 'None';
HwAgSysArbnPinionAgConfThd.MaxGrad = 999;
HwAgSysArbnPinionAgConfThd.PortName = 'HwAgSysArbnPinionAgConfThd';


HwAgSysArbn2PinionPosSnsrAvl = DataDict.Calibration;
HwAgSysArbn2PinionPosSnsrAvl.LongName = '2 Pinion Position Sensor Available';
HwAgSysArbn2PinionPosSnsrAvl.Description = [...
  'When true, implies that the system has 2 pinion position sensor sources']; 
HwAgSysArbn2PinionPosSnsrAvl.DocUnits = 'Cnt';
HwAgSysArbn2PinionPosSnsrAvl.EngDT = dt.lgc;
HwAgSysArbn2PinionPosSnsrAvl.EngVal = 1;
HwAgSysArbn2PinionPosSnsrAvl.EngMin = 0;
HwAgSysArbn2PinionPosSnsrAvl.EngMax = 1;
HwAgSysArbn2PinionPosSnsrAvl.Cardinality = 'Inin';
HwAgSysArbn2PinionPosSnsrAvl.CustomerVisible = false;
HwAgSysArbn2PinionPosSnsrAvl.Online = false;
HwAgSysArbn2PinionPosSnsrAvl.Impact = 'M';
HwAgSysArbn2PinionPosSnsrAvl.TuningOwner = 'CSE';
HwAgSysArbn2PinionPosSnsrAvl.GraphLink = {''};
HwAgSysArbn2PinionPosSnsrAvl.Monotony = 'None';
HwAgSysArbn2PinionPosSnsrAvl.MaxGrad = 1;
HwAgSysArbn2PinionPosSnsrAvl.PortName = 'HwAgSysArbn2PinionPosSnsrAvl';

%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmSysKineRat = DataDict.ImprtdCal;
SysGlbPrmSysKineRat.DocUnits = 'MotDegPerHwDeg';
SysGlbPrmSysKineRat.EngDT = dt.float32;
SysGlbPrmSysKineRat.EngVal = 22;
SysGlbPrmSysKineRat.EngMin = 10;
SysGlbPrmSysKineRat.EngMax = 40;
SysGlbPrmSysKineRat.PortName = 'SysGlbPrmSysKineRat';
SysGlbPrmSysKineRat.Description = '';


SysGlbPrmTorsBarStfn = DataDict.ImprtdCal;
SysGlbPrmTorsBarStfn.DocUnits = 'HwNwtMtrPerHwDeg';
SysGlbPrmTorsBarStfn.EngDT = dt.float32;
SysGlbPrmTorsBarStfn.EngVal = 2.5;
SysGlbPrmTorsBarStfn.EngMin = 0.5;
SysGlbPrmTorsBarStfn.EngMax = 10;
SysGlbPrmTorsBarStfn.PortName = 'SysGlbPrmTorsBarStfn';
SysGlbPrmTorsBarStfn.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwAgConfRefTi = DataDict.PIM;
HwAgConfRefTi.LongName = 'Handhweel Angle Conf Reference Timer';
HwAgConfRefTi.Description = [...
  'Handhweel Angle Conf Reference Timer'];
HwAgConfRefTi.DocUnits = 'Cnt';
HwAgConfRefTi.EngDT = dt.u32;
HwAgConfRefTi.EngMin = 0;
HwAgConfRefTi.EngMax = 4294967295;
HwAgConfRefTi.InitRowCol = [1  1];


HwAgKineFlt = DataDict.PIM;
HwAgKineFlt.LongName = 'Handwheel Angle Kinematic Fault';
HwAgKineFlt.Description = [...
  'Flag is set to TRUE when Kinematic Integrity fault occurs'];
HwAgKineFlt.DocUnits = 'Cnt';
HwAgKineFlt.EngDT = dt.lgc;
HwAgKineFlt.EngMin = 0;
HwAgKineFlt.EngMax = 1;
HwAgKineFlt.InitRowCol = [1  1];


HwAgLtch = DataDict.PIM;
HwAgLtch.LongName = 'Handwheel Angle Latch';
HwAgLtch.Description = [...
  'Latch the first non zero state for Handhwheel Angle'];
HwAgLtch.DocUnits = 'Uls';
HwAgLtch.EngDT = dt.lgc;
HwAgLtch.EngMin = 0;
HwAgLtch.EngMax = 1;
HwAgLtch.InitRowCol = [1  1];


PinionAgPrev = DataDict.PIM;
PinionAgPrev.LongName = ' Pinion Angle Previous';
PinionAgPrev.Description = [...
  'Previous sample value of Pinion angle'];
PinionAgPrev.DocUnits = 'HwDeg';
PinionAgPrev.EngDT = dt.float32;
PinionAgPrev.EngMin = -1440;
PinionAgPrev.EngMax = 1440;
PinionAgPrev.InitRowCol = [1  1];


HwAgToMotAgCorrln = DataDict.PIM;
HwAgToMotAgCorrln.LongName = 'Handwheel Angle to Motor Angle Correlation';
HwAgToMotAgCorrln.Description = [...
  'Flag is set to TRUE when Handwheel Angle to Motor Angle correlation is' ...
  ' TRUE'];
HwAgToMotAgCorrln.DocUnits = 'Cnt';
HwAgToMotAgCorrln.EngDT = dt.lgc;
HwAgToMotAgCorrln.EngMin = 0;
HwAgToMotAgCorrln.EngMax = 1;
HwAgToMotAgCorrln.InitRowCol = [1  1];


% HwAgToMotAgCorrlnDurnRefTmr = DataDict.PIM;
% HwAgToMotAgCorrlnDurnRefTmr.LongName = 'Handwheel Angle to Motor Angle Correlation Duration Reference Timer';
% HwAgToMotAgCorrlnDurnRefTmr.Description = [...
%   'Reference timer to calculate the duration of elapsed time once Handwhe' ...
%   'el Angle to Motor Angle Correlation occurs'];
% HwAgToMotAgCorrlnDurnRefTmr.DocUnits = 'Cnt';
% HwAgToMotAgCorrlnDurnRefTmr.EngDT = dt.u32;
% HwAgToMotAgCorrlnDurnRefTmr.EngMin = 0;
% HwAgToMotAgCorrlnDurnRefTmr.EngMax = 4294967295;
% HwAgToMotAgCorrlnDurnRefTmr.InitRowCol = [1  1];


PrevHwAgNotCorrd = DataDict.PIM;
PrevHwAgNotCorrd.LongName = 'Previous Handwheel Angle Not Corrected';
PrevHwAgNotCorrd.Description = [...
  'Store the previous output of the Untrimmed Handwheel angle'];
PrevHwAgNotCorrd.DocUnits = 'HwDeg';
PrevHwAgNotCorrd.EngDT = dt.float32;
PrevHwAgNotCorrd.EngMin = -1440;
PrevHwAgNotCorrd.EngMax = 1440;
PrevHwAgNotCorrd.InitRowCol = [1  1];


PrevPinionAgConf = DataDict.PIM;
PrevPinionAgConf.LongName = 'Previous Pinion Angle Confidence';
PrevPinionAgConf.Description = [...
  'Retain previous value of Pinion Angle Confidence until slewing is comp' ...
  'lete'];
PrevPinionAgConf.DocUnits = 'Uls';
PrevPinionAgConf.EngDT = dt.float32;
PrevPinionAgConf.EngMin = 0;
PrevPinionAgConf.EngMax = 1;
PrevPinionAgConf.InitRowCol = [1  1];


PrevSeldHwAg = DataDict.PIM;
PrevSeldHwAg.LongName = 'Previous Handwheel Angle Output';
PrevSeldHwAg.Description = [...
  'Store the previous output of the Handwheel angle while performing Slew' ...
  'ing'];
PrevSeldHwAg.DocUnits = 'HwDeg';
PrevSeldHwAg.EngDT = dt.float32;
PrevSeldHwAg.EngMin = -1440;
PrevSeldHwAg.EngMax = 1440;
PrevSeldHwAg.InitRowCol = [1  1];


PrevSrcSeln = DataDict.PIM;
PrevSrcSeln.LongName = 'Previous Source Selection';
PrevSrcSeln.Description = [...
  'Store the previous source selected to determine source change'];
PrevSrcSeln.DocUnits = 'Uls';
PrevSrcSeln.EngDT = dt.s08;
PrevSrcSeln.EngMin = -1;
PrevSrcSeln.EngMax = 1;
PrevSrcSeln.InitRowCol = [1  1];


SeldHwAgConf = DataDict.PIM;
SeldHwAgConf.LongName = 'Selected Pinion Angle Confidence';
SeldHwAgConf.Description = [...
  'Hold present value of Pinion Angle Confidence to be used during slewin' ...
  'g'];
SeldHwAgConf.DocUnits = 'Uls';
SeldHwAgConf.EngDT = dt.float32;
SeldHwAgConf.EngMin = 0;
SeldHwAgConf.EngMax = 1;
SeldHwAgConf.InitRowCol = [1  1];


SlewElpdRefTmr = DataDict.PIM;
SlewElpdRefTmr.LongName = 'Slew Elapsed Reference Timer';
SlewElpdRefTmr.Description = [...
  'Reference time to calculate the Slewing time elapsed'];
SlewElpdRefTmr.DocUnits = 'Cnt';
SlewElpdRefTmr.EngDT = dt.u32;
SlewElpdRefTmr.EngMin = 0;
SlewElpdRefTmr.EngMax = 4294967295;
SlewElpdRefTmr.InitRowCol = [1  1];


SlewSts = DataDict.PIM;
SlewSts.LongName = 'Slew Status';
SlewSts.Description = [...
  'Flag to determine whether Slew is in progress or not. If Slewing is in' ...
  'progress then set the PIM to constant "SLEW_IN_PROGRESS" else set to "' ...
  'SLEW_NOT_IN_PROGRESS"'];
SlewSts.DocUnits = 'Cnt';
SlewSts.EngDT = dt.lgc;
SlewSts.EngMin = 0;
SlewSts.EngMax = 1;
SlewSts.InitRowCol = [1  1];


TqSnsrAgPrev = DataDict.PIM;
TqSnsrAgPrev.LongName = ' Torque Sensor Angle Previous';
TqSnsrAgPrev.Description = [...
  'Previous sample value of Tbar (torque sensor) angle'];
TqSnsrAgPrev.DocUnits = 'HwDeg';
TqSnsrAgPrev.EngDT = dt.float32;
TqSnsrAgPrev.EngMin = -20;
TqSnsrAgPrev.EngMax = 20;
TqSnsrAgPrev.InitRowCol = [1  1];


TqSnsrVelFil = DataDict.PIM;
TqSnsrVelFil.LongName = 'Torque Sensor Velocity Filter';
TqSnsrVelFil.Description = [...
  'State variable for torque sensor velocity low-pass filter'];
TqSnsrVelFil.DocUnits = 'HwDegPerSec';
TqSnsrVelFil.EngDT = struct.FilLpRec1;
TqSnsrVelFil.EngMin = [struct('FilSt',-20000,'FilGain',0)];
TqSnsrVelFil.EngMax = [struct('FilSt',20000,'FilGain',0.7154)];
TqSnsrVelFil.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


ARCHGLBPRM_PIOVER180_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVER180_ULS_F32.LongName = 'Pi Over 180 Degrees';
ARCHGLBPRM_PIOVER180_ULS_F32.Description = 'Pi divided by 180 ';
ARCHGLBPRM_PIOVER180_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVER180_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVER180_ULS_F32.EngVal = 0.017453293;
ARCHGLBPRM_PIOVER180_ULS_F32.Define = 'Global';


CNVMILLISECTOCNT_CNTPERMILLISEC_U16 = DataDict.Constant;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Millisecond to Count';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ueis multiplied by this constant to convert millisecond to count'];
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngDT = dt.u16;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngVal = 10;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Define = 'Local';


% CNVSECTOCNT_ULS_U32 = DataDict.Constant;
% CNVSECTOCNT_ULS_U32.LongName = 'Convert Second to Count';
% CNVSECTOCNT_ULS_U32.Description = [...
%   'Multiply by this constant to convert Second to Count'];
% CNVSECTOCNT_ULS_U32.DocUnits = 'Uls';
% CNVSECTOCNT_ULS_U32.EngDT = dt.u32;
% CNVSECTOCNT_ULS_U32.EngVal = 10000;
% CNVSECTOCNT_ULS_U32.Define = 'Local';


CNVTOMILLISEC_MILLISECPERCNT_F32 = DataDict.Constant;
CNVTOMILLISEC_MILLISECPERCNT_F32.LongName = 'Convert to Milliseconds';
CNVTOMILLISEC_MILLISECPERCNT_F32.Description = [...
  'Multiply by this constant to convert count to milliseconds'];
CNVTOMILLISEC_MILLISECPERCNT_F32.DocUnits = 'MilliSecPerCnt';
CNVTOMILLISEC_MILLISECPERCNT_F32.EngDT = dt.float32;
CNVTOMILLISEC_MILLISECPERCNT_F32.EngVal = 0.1;
CNVTOMILLISEC_MILLISECPERCNT_F32.Define = 'Local';


FLTINJENA = DataDict.ConfigParam;
FLTINJENA.LongName = 'Fault Injection Enable';
FLTINJENA.Description = [...
  'This is false for production builds.  It is set to true at compile tim' ...
  'e only for s/w special builds with fault injection active.'];
FLTINJENA.IsBuildPrm = false;
FLTINJENA.DocUnits = 'Cnt';
FLTINJENA.EngDT = dt.lgc;
FLTINJENA.EngVal = 0;
FLTINJENA.EngMin = 0;
FLTINJENA.EngMax = 1;
FLTINJENA.Define = 'Global';


FLTINJ_HWAGSYSARBN_HWAG = DataDict.Constant;
FLTINJ_HWAGSYSARBN_HWAG.LongName = 'Fault Injection Handwheel Angle System Arbitration Handwheel Angle';
FLTINJ_HWAGSYSARBN_HWAG.Description = [...
  'Output signal of Handwheel Angle System Arbitration.'];
FLTINJ_HWAGSYSARBN_HWAG.DocUnits = 'Uls';
FLTINJ_HWAGSYSARBN_HWAG.EngDT = dt.u16;
FLTINJ_HWAGSYSARBN_HWAG.EngVal = 23;
FLTINJ_HWAGSYSARBN_HWAG.Define = 'Global';


FLTINJ_HWAGSYSARBN_SERLCOMHWAG = DataDict.Constant;
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.LongName = 'Fault Injection Handwheel Angle Arbitration Serial Communication Handwheel Angle';
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.Description = [...
  'Output signal of Handwheel Angle Arbitration.'];
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.DocUnits = 'Uls';
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.EngDT = dt.u16;
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.EngVal = 37;
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.Define = 'Global';


HWAGTHD_ULS_FLOAT32 = DataDict.Constant;
HWAGTHD_ULS_FLOAT32.LongName = 'Handwheel Angle Threshold';
HWAGTHD_ULS_FLOAT32.Description = [...
  'Compare rate limiter Pinion Angle output to threshold constant to dete' ...
  'rmine slewing is complete or not'];
HWAGTHD_ULS_FLOAT32.DocUnits = 'Uls';
HWAGTHD_ULS_FLOAT32.EngDT = dt.float32;
HWAGTHD_ULS_FLOAT32.EngVal = 0.001;
HWAGTHD_ULS_FLOAT32.Define = 'Local';


HWVELHILIM_HWRADPERSEC_F32 = DataDict.Constant;
HWVELHILIM_HWRADPERSEC_F32.LongName = 'Handwheel Velocity High Limit';
HWVELHILIM_HWRADPERSEC_F32.Description = [...
  'Limit on high value of Handwheel Velocity'];
HWVELHILIM_HWRADPERSEC_F32.DocUnits = 'HwRadPerSec';
HWVELHILIM_HWRADPERSEC_F32.EngDT = dt.float32;
HWVELHILIM_HWRADPERSEC_F32.EngVal = 42;
HWVELHILIM_HWRADPERSEC_F32.Define = 'Local';


HWVELLOWLIM_HWRADPERSEC_F32 = DataDict.Constant;
HWVELLOWLIM_HWRADPERSEC_F32.LongName = 'Handwheel Velocity Low Limit';
HWVELLOWLIM_HWRADPERSEC_F32.Description = [...
  'Limit on low value of Handwheel Velocity'];
HWVELLOWLIM_HWRADPERSEC_F32.DocUnits = 'HwRadPerSec';
HWVELLOWLIM_HWRADPERSEC_F32.EngDT = dt.float32;
HWVELLOWLIM_HWRADPERSEC_F32.EngVal = -42;
HWVELLOWLIM_HWRADPERSEC_F32.Define = 'Local';


INVLDSRC_CNT_S08 = DataDict.Constant;
INVLDSRC_CNT_S08.LongName = 'Invalid Source';
INVLDSRC_CNT_S08.Description = [...
  'Flag to show the source selected is not VALID'];
INVLDSRC_CNT_S08.DocUnits = 'Cnt';
INVLDSRC_CNT_S08.EngDT = dt.s08;
INVLDSRC_CNT_S08.EngVal = -1;
INVLDSRC_CNT_S08.Define = 'Local';


LRGSLEW_HWDEGPERSEC_F32 = DataDict.Constant;
LRGSLEW_HWDEGPERSEC_F32.LongName = 'Large Slew';
LRGSLEW_HWDEGPERSEC_F32.Description = [...
  'Slew Rate Value Large Enough to Go from -1400 to 1400 or +1400 to -140' ...
  '0 in 2ms'];
LRGSLEW_HWDEGPERSEC_F32.DocUnits = 'HwDegPerSec';
LRGSLEW_HWDEGPERSEC_F32.EngDT = dt.float32;
LRGSLEW_HWDEGPERSEC_F32.EngVal = 1400000;
LRGSLEW_HWDEGPERSEC_F32.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = [...
  'Step used when No debouncing is required'];
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


PINIONAGCONFHILIM_ULS_F32 = DataDict.Constant;
PINIONAGCONFHILIM_ULS_F32.LongName = 'Pinion Angle Confidence High Limit';
PINIONAGCONFHILIM_ULS_F32.Description = [...
  'Limit on high value of Pinion Angle Confidence'];
PINIONAGCONFHILIM_ULS_F32.DocUnits = 'Uls';
PINIONAGCONFHILIM_ULS_F32.EngDT = dt.float32;
PINIONAGCONFHILIM_ULS_F32.EngVal = 1;
PINIONAGCONFHILIM_ULS_F32.Define = 'Local';


PINIONAGCONFLOWLIM_ULS_F32 = DataDict.Constant;
PINIONAGCONFLOWLIM_ULS_F32.LongName = 'Pinion Angle Confidence Low Limit';
PINIONAGCONFLOWLIM_ULS_F32.Description = [...
  'Limit on low value of Pinion Angle Confidence'];
PINIONAGCONFLOWLIM_ULS_F32.DocUnits = 'Uls';
PINIONAGCONFLOWLIM_ULS_F32.EngDT = dt.float32;
PINIONAGCONFLOWLIM_ULS_F32.EngVal = 0;
PINIONAGCONFLOWLIM_ULS_F32.Define = 'Local';


PINIONAGHILIM_HWDEG_F32 = DataDict.Constant;
PINIONAGHILIM_HWDEG_F32.LongName = 'Pinion Angle High Limit';
PINIONAGHILIM_HWDEG_F32.Description = [...
  'Limit on high value of Pinion Angle'];
PINIONAGHILIM_HWDEG_F32.DocUnits = 'HwDeg';
PINIONAGHILIM_HWDEG_F32.EngDT = dt.float32;
PINIONAGHILIM_HWDEG_F32.EngVal = 1440;
PINIONAGHILIM_HWDEG_F32.Define = 'Local';


PINIONAGLOWLIM_HWDEG_F32 = DataDict.Constant;
PINIONAGLOWLIM_HWDEG_F32.LongName = 'Pinion Angle Low Limit';
PINIONAGLOWLIM_HWDEG_F32.Description = 'Limit on low value of Pinion Angle';
PINIONAGLOWLIM_HWDEG_F32.DocUnits = 'HwDeg';
PINIONAGLOWLIM_HWDEG_F32.EngDT = dt.float32;
PINIONAGLOWLIM_HWDEG_F32.EngVal = -1440;
PINIONAGLOWLIM_HWDEG_F32.Define = 'Local';


PINIONVELHILIM_HWRADPERSEC_F32 = DataDict.Constant;
PINIONVELHILIM_HWRADPERSEC_F32.LongName = 'Pinion Velocity High Limit';
PINIONVELHILIM_HWRADPERSEC_F32.Description = [...
  'Limit on high value of Pinion Velocity'];
PINIONVELHILIM_HWRADPERSEC_F32.DocUnits = 'HwRadPerSec';
PINIONVELHILIM_HWRADPERSEC_F32.EngDT = dt.float32;
PINIONVELHILIM_HWRADPERSEC_F32.EngVal = 42;
PINIONVELHILIM_HWRADPERSEC_F32.Define = 'Local';


PINIONVELLOWLIM_HWRADPERSEC_F32 = DataDict.Constant;
PINIONVELLOWLIM_HWRADPERSEC_F32.LongName = 'Pinion Velocity Low Limit';
PINIONVELLOWLIM_HWRADPERSEC_F32.Description = [...
  'Limit on low value of Pinion Velocity'];
PINIONVELLOWLIM_HWRADPERSEC_F32.DocUnits = 'HwRadPerSec';
PINIONVELLOWLIM_HWRADPERSEC_F32.EngDT = dt.float32;
PINIONVELLOWLIM_HWRADPERSEC_F32.EngVal = -42;
PINIONVELLOWLIM_HWRADPERSEC_F32.Define = 'Local';


SLEWINPROGS_CNT_LGC = DataDict.Constant;
SLEWINPROGS_CNT_LGC.LongName = 'Slew in Progress';
SLEWINPROGS_CNT_LGC.Description = 'Flag to show Slew is in progress';
SLEWINPROGS_CNT_LGC.DocUnits = 'Cnt';
SLEWINPROGS_CNT_LGC.EngDT = dt.lgc;
SLEWINPROGS_CNT_LGC.EngVal = 1;
SLEWINPROGS_CNT_LGC.Define = 'Local';


SLEWNOTINPROGS_CNT_LGC = DataDict.Constant;
SLEWNOTINPROGS_CNT_LGC.LongName = 'Slew Not in Progress';
SLEWNOTINPROGS_CNT_LGC.Description = [...
  'Flag to show Slew is not in progress'];
SLEWNOTINPROGS_CNT_LGC.DocUnits = 'Cnt';
SLEWNOTINPROGS_CNT_LGC.EngDT = dt.lgc;
SLEWNOTINPROGS_CNT_LGC.EngVal = 0;
SLEWNOTINPROGS_CNT_LGC.Define = 'Local';


SNSRDATASRCSELD_CNT_S08 = DataDict.Constant;
SNSRDATASRCSELD_CNT_S08.LongName = 'Sensor Data Source Selected';
SNSRDATASRCSELD_CNT_S08.Description = [...
  'Flag to indicate Handwheel Angle corrected source is selected'];
SNSRDATASRCSELD_CNT_S08.DocUnits = 'Cnt';
SNSRDATASRCSELD_CNT_S08.EngDT = dt.s08;
SNSRDATASRCSELD_CNT_S08.EngVal = 0;
SNSRDATASRCSELD_CNT_S08.Define = 'Local';


SNSRLSDATASRCSELD_CNT_S08 = DataDict.Constant;
SNSRLSDATASRCSELD_CNT_S08.LongName = 'Sensorless Data Source Selected';
SNSRLSDATASRCSELD_CNT_S08.Description = [...
  'Flag to indicate Sensorless Handwheel Angle source is selected'];
SNSRLSDATASRCSELD_CNT_S08.DocUnits = 'Cnt';
SNSRLSDATASRCSELD_CNT_S08.EngDT = dt.s08;
SNSRLSDATASRCSELD_CNT_S08.EngVal = 1;
SNSRLSDATASRCSELD_CNT_S08.Define = 'Local';


STD_ON = DataDict.Constant;
STD_ON.LongName = 'Standard On';
STD_ON.Description = [...
  'AUTOSAR value representing something that is On.  To be used as a alte' ...
  'rnative to TRUE/FALSE as appropriate.'];
STD_ON.DocUnits = 'Cnt';
STD_ON.EngDT = dt.u08;
STD_ON.EngVal = 1;
STD_ON.Define = 'Global';


ZEROTMR_MILLISEC_F32 = DataDict.Constant;
ZEROTMR_MILLISEC_F32.LongName = 'Zero Timer';
ZEROTMR_MILLISEC_F32.Description = [...
  'When Slewing is not required, Timer is set to 0'];
ZEROTMR_MILLISEC_F32.DocUnits = 'MilliSec';
ZEROTMR_MILLISEC_F32.EngDT = dt.float32;
ZEROTMR_MILLISEC_F32.EngVal = 0;
ZEROTMR_MILLISEC_F32.Define = 'Local';


IMCARBN_HWAGSYSARBNPINIONAGCONF_CNT_U16 = DataDict.Constant;
IMCARBN_HWAGSYSARBNPINIONAGCONF_CNT_U16.LongName = 'Inter Micro Communication Pinion Angle Confidence';
IMCARBN_HWAGSYSARBNPINIONAGCONF_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_HWAGSYSARBNPINIONAGCONF_CNT_U16.DocUnits = 'Cnt';
IMCARBN_HWAGSYSARBNPINIONAGCONF_CNT_U16.EngDT = dt.u16;
IMCARBN_HWAGSYSARBNPINIONAGCONF_CNT_U16.EngVal = 80;
IMCARBN_HWAGSYSARBNPINIONAGCONF_CNT_U16.Define = 'Global';


IMCARBN_HWAGSYSARBNPINIONAG_CNT_U16 = DataDict.Constant;
IMCARBN_HWAGSYSARBNPINIONAG_CNT_U16.LongName = 'Inter Micro Communication Pinion Angle';
IMCARBN_HWAGSYSARBNPINIONAG_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_HWAGSYSARBNPINIONAG_CNT_U16.DocUnits = 'Cnt';
IMCARBN_HWAGSYSARBNPINIONAG_CNT_U16.EngDT = dt.u16;
IMCARBN_HWAGSYSARBNPINIONAG_CNT_U16.EngVal = 11;
IMCARBN_HWAGSYSARBNPINIONAG_CNT_U16.Define = 'Global';


%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwAgCorrlnFlt = DataDict.NTC;
HwAgCorrlnFlt.NtcNr = NtcNr1.NTCNR_0X0A6;
HwAgCorrlnFlt.NtcTyp = 'Deb';
HwAgCorrlnFlt.LongName = 'Nexteer Trouble Code Number 0X0A6';
HwAgCorrlnFlt.Description = ' HwAg to Motor Angle Corrrelation';
HwAgCorrlnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAgCorrlnFlt.NtcStInfo.Bit0Descr = 'Unused';
HwAgCorrlnFlt.NtcStInfo.Bit1Descr = 'Unused';
HwAgCorrlnFlt.NtcStInfo.Bit2Descr = 'Unused';
HwAgCorrlnFlt.NtcStInfo.Bit3Descr = 'Unused';
HwAgCorrlnFlt.NtcStInfo.Bit4Descr = 'Unused';
HwAgCorrlnFlt.NtcStInfo.Bit5Descr = 'Unused';
HwAgCorrlnFlt.NtcStInfo.Bit6Descr = 'Unused';
HwAgCorrlnFlt.NtcStInfo.Bit7Descr = 'Unused';
HwAgCorrlnFlt.NtcStsLockdThisIgnCyc = 0;


HwAgSnsrlsThdExcdd = DataDict.NTC;
HwAgSnsrlsThdExcdd.NtcNr = NtcNr1.NTCNR_0X0A1;
HwAgSnsrlsThdExcdd.NtcTyp = 'None';
HwAgSnsrlsThdExcdd.LongName = 'Nexteer Trouble Code Number 0X0A1';
HwAgSnsrlsThdExcdd.Description = 'Kinematic Integrity Fault';
HwAgSnsrlsThdExcdd.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAgSnsrlsThdExcdd.NtcStInfo.Bit0Descr = 'Unused';
HwAgSnsrlsThdExcdd.NtcStInfo.Bit1Descr = 'Unused';
HwAgSnsrlsThdExcdd.NtcStInfo.Bit2Descr = 'Unused';
HwAgSnsrlsThdExcdd.NtcStInfo.Bit3Descr = 'Unused';
HwAgSnsrlsThdExcdd.NtcStInfo.Bit4Descr = 'Unused';
HwAgSnsrlsThdExcdd.NtcStInfo.Bit5Descr = 'Unused';
HwAgSnsrlsThdExcdd.NtcStInfo.Bit6Descr = 'Unused';
HwAgSnsrlsThdExcdd.NtcStInfo.Bit7Descr = 'Unused';
HwAgSnsrlsThdExcdd.NtcStsLockdThisIgnCyc = 0;


HwPosnSigLo = DataDict.NTC;
HwPosnSigLo.NtcNr = NtcNr1.NTCNR_0X09C;
HwPosnSigLo.NtcTyp = 'None';
HwPosnSigLo.LongName = 'Nexteer Trouble Code Number 0X09C';
HwPosnSigLo.Description = 'Kinematic Integrity Fault';
HwPosnSigLo.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwPosnSigLo.NtcStInfo.Bit0Descr = 'Unused';
HwPosnSigLo.NtcStInfo.Bit1Descr = 'Unused';
HwPosnSigLo.NtcStInfo.Bit2Descr = 'Unused';
HwPosnSigLo.NtcStInfo.Bit3Descr = 'Unused';
HwPosnSigLo.NtcStInfo.Bit4Descr = 'Unused';
HwPosnSigLo.NtcStInfo.Bit5Descr = 'Unused';
HwPosnSigLo.NtcStInfo.Bit6Descr = 'Unused';
HwPosnSigLo.NtcStInfo.Bit7Descr = 'Unused';
HwPosnSigLo.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
