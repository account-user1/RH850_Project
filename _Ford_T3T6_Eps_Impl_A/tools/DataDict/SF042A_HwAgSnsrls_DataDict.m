%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 24-Oct-2017 14:11:02       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF042A = DataDict.FDD;
SF042A.Version = '3.1.X';
SF042A.LongName = 'Handwheel Angle Sensorless';
SF042A.ShoName  = 'HwAgSnsrls';
SF042A.DesignASIL = 'D';
SF042A.Description = [...
  'This function determines whether the hand wheel should be autocentered' ...
  ' using a low or high speed algorithm, or the last stored pinion angle.' ...
  ' Once the correct algorithm is determined, it is used to center the ha' ...
  'ndwheel.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAgSnsrlsInit1 = DataDict.Runnable;
HwAgSnsrlsInit1.Context = 'Rte';
HwAgSnsrlsInit1.TimeStep = 0;
HwAgSnsrlsInit1.Description = [...
  'Initializing the filters and the timer, NVM reading.'];

HwAgSnsrlsPer1 = DataDict.Runnable;
HwAgSnsrlsPer1.Context = 'Rte';
HwAgSnsrlsPer1.TimeStep = 0.002;
HwAgSnsrlsPer1.Description = [...
  'Determining whether the handwheel should be autocentered using the alg' ...
  'orithms.'];

FSnsrlsHwCentr = DataDict.SrvRunnable;
FSnsrlsHwCentr.Context = 'Rte';
FSnsrlsHwCentr.Description = [...
  'When called, it enables force center.'];
FSnsrlsHwCentr.Return = DataDict.CSReturn;
FSnsrlsHwCentr.Return.Type = 'None';
FSnsrlsHwCentr.Return.Min = [];
FSnsrlsHwCentr.Return.Max = [];
FSnsrlsHwCentr.Return.TestTolerance = [];

RstSnsrlsHwCentr = DataDict.SrvRunnable;
RstSnsrlsHwCentr.Context = 'Rte';
RstSnsrlsHwCentr.Description = [...
  'When called, it resets the center, setting the NVM of Pinion Angle to ' ...
  '0 and Pinion Agnle Valid to false.'];
RstSnsrlsHwCentr.Return = DataDict.CSReturn;
RstSnsrlsHwCentr.Return.Type = 'None';
RstSnsrlsHwCentr.Return.Min = [];
RstSnsrlsHwCentr.Return.Max = [];
RstSnsrlsHwCentr.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwAgSnsrlsInit1'};
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
GetNtcQlfrSts.Arguments(2).TestTolerance = 999;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'Enum to indicate the state of NTC';


GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'HwAgSnsrlsInit1','HwAgSnsrlsPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'HwAgSnsrlsPer1'};
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


StordLstPrm_SetRamBlockStatus = DataDict.Client;
StordLstPrm_SetRamBlockStatus.CallLocation = {'HwAgSnsrlsInit1'};
StordLstPrm_SetRamBlockStatus.Description = [...
  'Client definition to update the NVM during ignition off'];
StordLstPrm_SetRamBlockStatus.Return = DataDict.CSReturn;
StordLstPrm_SetRamBlockStatus.Return.Type = 'Standard';
StordLstPrm_SetRamBlockStatus.Return.Min = 0;
StordLstPrm_SetRamBlockStatus.Return.Max = 1;
StordLstPrm_SetRamBlockStatus.Return.TestTolerance = 0;
StordLstPrm_SetRamBlockStatus.Return.Description = 'Standard Return';
StordLstPrm_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
StordLstPrm_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
StordLstPrm_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
StordLstPrm_SetRamBlockStatus.Arguments(1).EngMin = 0;
StordLstPrm_SetRamBlockStatus.Arguments(1).EngMax = 1;
StordLstPrm_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
StordLstPrm_SetRamBlockStatus.Arguments(1).Direction = 'In';
StordLstPrm_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
StordLstPrm_SetRamBlockStatus.Arguments(1).Description = [...
  'Boolean to indicate NVM Block changed'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
CmplncErrMotToPinion = DataDict.IpSignal;
CmplncErrMotToPinion.LongName = 'Compliance Error Motor to Pinion';
CmplncErrMotToPinion.Description = [...
  'Lost motion between motor and pinion'];
CmplncErrMotToPinion.DocUnits = 'HwDeg';
CmplncErrMotToPinion.EngDT = dt.float32;
CmplncErrMotToPinion.EngInit = 0;
CmplncErrMotToPinion.EngMin = -5;
CmplncErrMotToPinion.EngMax = 5;
CmplncErrMotToPinion.ReadIn = {'HwAgSnsrlsPer1'};
CmplncErrMotToPinion.ReadType = 'Rte';


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


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = [...
  'It is used to calculate the pinion torque.'];
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'HwAgSnsrlsPer1'};
HwTq.ReadType = 'Rte';


MotAgCumvAlgndCrf = DataDict.IpSignal;
MotAgCumvAlgndCrf.LongName = 'Motor Angle Cumulative Aligned Core Reference Frame';
MotAgCumvAlgndCrf.Description = [...
  'It is used to calculate the relative handwheel angle in the component.' ...
  ''];
MotAgCumvAlgndCrf.DocUnits = 'MotDeg';
MotAgCumvAlgndCrf.EngDT = dt.s18p13;
MotAgCumvAlgndCrf.EngInit = 0;
MotAgCumvAlgndCrf.EngMin = -262144;
MotAgCumvAlgndCrf.EngMax = 262143.998;
MotAgCumvAlgndCrf.ReadIn = {'HwAgSnsrlsPer1'};
MotAgCumvAlgndCrf.ReadType = 'Rte';


MotAgCumvAlgndVld = DataDict.IpSignal;
MotAgCumvAlgndVld.LongName = 'Motor Angle Cumulative Aligned Valid';
MotAgCumvAlgndVld.Description = [...
  'Signal indicating whether cummulative moto anle is valid or not.'];
MotAgCumvAlgndVld.DocUnits = 'Cnt';
MotAgCumvAlgndVld.EngDT = dt.lgc;
MotAgCumvAlgndVld.EngInit = 0;
MotAgCumvAlgndVld.EngMin = 0;
MotAgCumvAlgndVld.EngMax = 1;
MotAgCumvAlgndVld.ReadIn = {'HwAgSnsrlsPer1'};
MotAgCumvAlgndVld.ReadType = 'Rte';


MotAgMeclIdptSig = DataDict.IpSignal;
MotAgMeclIdptSig.LongName = 'Motor Angle Mechanical Independent Signal';
MotAgMeclIdptSig.Description = [...
  'It indicates the number of usable motor angle signal.'];
MotAgMeclIdptSig.DocUnits = 'Cnt';
MotAgMeclIdptSig.EngDT = dt.u08;
MotAgMeclIdptSig.EngInit = 3;
MotAgMeclIdptSig.EngMin = 0;
MotAgMeclIdptSig.EngMax = 3;
MotAgMeclIdptSig.ReadIn = {'HwAgSnsrlsPer1'};
MotAgMeclIdptSig.ReadType = 'Rte';


MotTqCmdCrf = DataDict.IpSignal;
MotTqCmdCrf.LongName = 'Motor Torque Command CRF';
MotTqCmdCrf.Description = [...
  'It is used to calculate the pinion torque.'];
MotTqCmdCrf.DocUnits = 'MotNwtMtr';
MotTqCmdCrf.EngDT = dt.float32;
MotTqCmdCrf.EngInit = 0;
MotTqCmdCrf.EngMin = -8.8;
MotTqCmdCrf.EngMax = 8.8;
MotTqCmdCrf.ReadIn = {'HwAgSnsrlsPer1'};
MotTqCmdCrf.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity CRF';
MotVelCrf.Description = [...
  'One of the five conditions enables vehicle dynamic timer 1.'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'HwAgSnsrlsPer1'};
MotVelCrf.ReadType = 'Rte';


PinionAg = DataDict.IpSignal;
PinionAg.LongName = 'Pinion Angle ';
PinionAg.Description = [...
  'Handwheel Angle in Pinion Coordinates after arbitrating between sensor' ...
  ' and sensorless handwheel angle.'];
PinionAg.DocUnits = 'HwDeg';
PinionAg.EngDT = dt.float32;
PinionAg.EngInit = 0;
PinionAg.EngMin = -1440;
PinionAg.EngMax = 1440;
PinionAg.ReadIn = {'HwAgSnsrlsPer1'};
PinionAg.ReadType = 'Rte';


PinionAgConf = DataDict.IpSignal;
PinionAgConf.LongName = 'Pinion Angle Confidence';
PinionAgConf.Description = [...
  'Handwheel Angle confidence of the Handwheel Angle calculated in pinion' ...
  ' coordiantes after arbitration between sensor and Sensorless signals.'];
PinionAgConf.DocUnits = 'Uls';
PinionAgConf.EngDT = dt.float32;
PinionAgConf.EngInit = 0;
PinionAgConf.EngMin = 0;
PinionAgConf.EngMax = 1;
PinionAgConf.ReadIn = {'HwAgSnsrlsPer1'};
PinionAgConf.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = [...
  'One of five conditions enables vehicle dynamic timer 1.'];
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'HwAgSnsrlsPer1'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = [...
  'One of the five conditions enables vehicle dynamic timer 1.'];
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'HwAgSnsrlsPer1'};
VehSpdVld.ReadType = 'Rte';


VehYawRate = DataDict.IpSignal;
VehYawRate.LongName = 'Vehicle Yaw Rate';
VehYawRate.Description = [...
  'One of the five condiions enables vehicle dynamic timer 1.'];
VehYawRate.DocUnits = 'VehDegPerSec';
VehYawRate.EngDT = dt.float32;
VehYawRate.EngInit = 0;
VehYawRate.EngMin = -120;
VehYawRate.EngMax = 120;
VehYawRate.ReadIn = {'HwAgSnsrlsPer1'};
VehYawRate.ReadType = 'Rte';


VehYawRateVld = DataDict.IpSignal;
VehYawRateVld.LongName = 'Vehicle Yaw Rate Valid';
VehYawRateVld.Description = [...
  'It indicates Yaw Rate is trusted when it is True.'];
VehYawRateVld.DocUnits = 'Cnt';
VehYawRateVld.EngDT = dt.lgc;
VehYawRateVld.EngInit = 0;
VehYawRateVld.EngMin = 0;
VehYawRateVld.EngMax = 1;
VehYawRateVld.ReadIn = {'HwAgSnsrlsPer1'};
VehYawRateVld.ReadType = 'Rte';


WhlFrqVld = DataDict.IpSignal;
WhlFrqVld.LongName = 'Wheel Frequency Valid';
WhlFrqVld.Description = [...
  'It indicates the wheel frequency is valid.'];
WhlFrqVld.DocUnits = 'Cnt';
WhlFrqVld.EngDT = dt.lgc;
WhlFrqVld.EngInit = 0;
WhlFrqVld.EngMin = 0;
WhlFrqVld.EngMax = 1;
WhlFrqVld.ReadIn = {'HwAgSnsrlsPer1'};
WhlFrqVld.ReadType = 'Rte';


WhlLeFrq = DataDict.IpSignal;
WhlLeFrq.LongName = 'Left Wheel Frequency';
WhlLeFrq.Description = 'Left Wheel Frequency';
WhlLeFrq.DocUnits = 'Hz';
WhlLeFrq.EngDT = dt.float32;
WhlLeFrq.EngInit = 0.01;
WhlLeFrq.EngMin = 0.01;
WhlLeFrq.EngMax = 60;
WhlLeFrq.ReadIn = {'HwAgSnsrlsPer1'};
WhlLeFrq.ReadType = 'Rte';


WhlRiFrq = DataDict.IpSignal;
WhlRiFrq.LongName = 'Right Wheel Frequency';
WhlRiFrq.Description = 'Right Wheel Frequency';
WhlRiFrq.DocUnits = 'Hz';
WhlRiFrq.EngDT = dt.float32;
WhlRiFrq.EngInit = 0.01;
WhlRiFrq.EngMin = 0.01;
WhlRiFrq.EngMax = 60;
WhlRiFrq.ReadIn = {'HwAgSnsrlsPer1'};
WhlRiFrq.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAgSnsrls = DataDict.OpSignal;
HwAgSnsrls.LongName = 'Handwheel Angle Sensorless';
HwAgSnsrls.Description = [...
  'Handwheel Angle calculated from the sensorless algorithm.'];
HwAgSnsrls.DocUnits = 'HwDeg';
HwAgSnsrls.SwcShoName = 'HwAgSnsrls';
HwAgSnsrls.EngDT = dt.float32;
HwAgSnsrls.EngInit = 0;
HwAgSnsrls.EngMin = -1440;
HwAgSnsrls.EngMax = 1440;
HwAgSnsrls.TestTolerance = 0.005;
HwAgSnsrls.WrittenIn = {'HwAgSnsrlsPer1'};
HwAgSnsrls.WriteType = 'Rte';


HwAgSnsrlsConf = DataDict.OpSignal;
HwAgSnsrlsConf.LongName = 'Handwheel Angle Sensorless Confidence';
HwAgSnsrlsConf.Description = [...
  'Handwheel Angle Confidence from the sensorless algorithm.'];
HwAgSnsrlsConf.DocUnits = 'Uls';
HwAgSnsrlsConf.SwcShoName = 'HwAgSnsrls';
HwAgSnsrlsConf.EngDT = dt.float32;
HwAgSnsrlsConf.EngInit = 0;
HwAgSnsrlsConf.EngMin = 0;
HwAgSnsrlsConf.EngMax = 1;
HwAgSnsrlsConf.TestTolerance = 0.004;
HwAgSnsrlsConf.WrittenIn = {'HwAgSnsrlsPer1'};
HwAgSnsrlsConf.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
StordHwAg = DataDict.IRV;
StordHwAg.LongName = 'Stored Handwheel Angle';
StordHwAg.Description = [...
  'Stored handwheel angle from Init1 to Per1.'];
StordHwAg.DocUnits = 'HwDeg';
StordHwAg.EngDT = dt.float32;
StordHwAg.EngInit = 0;
StordHwAg.EngMin = -1440;
StordHwAg.EngMax = 1440;
StordHwAg.ReadIn = {'HwAgSnsrlsPer1'};
StordHwAg.WrittenIn = {'HwAgSnsrlsInit1'};


StordHwConf = DataDict.IRV;
StordHwConf.LongName = 'Stored Handwheel Confidence';
StordHwConf.Description = [...
  'Stored handwheel angle confidence from Init1 to Per1.'];
StordHwConf.DocUnits = 'Uls';
StordHwConf.EngDT = dt.float32;
StordHwConf.EngInit = 0;
StordHwConf.EngMin = 0;
StordHwConf.EngMax = 1;
StordHwConf.ReadIn = {'HwAgSnsrlsPer1'};
StordHwConf.WrittenIn = {'HwAgSnsrlsInit1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwAgSnsrlsCorrdPinionAgConfThd = DataDict.Calibration;
HwAgSnsrlsCorrdPinionAgConfThd.LongName = 'Corrected Pinion Angle Confidence Threshold';
HwAgSnsrlsCorrdPinionAgConfThd.Description = [...
  'It enables the Corrected Pinion Angle method if the Pinion Angle Confi' ...
  'dence is greater than or equal to the threshold.'];
HwAgSnsrlsCorrdPinionAgConfThd.DocUnits = 'Uls';
HwAgSnsrlsCorrdPinionAgConfThd.EngDT = dt.float32;
HwAgSnsrlsCorrdPinionAgConfThd.EngVal = 0.9;
HwAgSnsrlsCorrdPinionAgConfThd.EngMin = 0;
HwAgSnsrlsCorrdPinionAgConfThd.EngMax = 1;
HwAgSnsrlsCorrdPinionAgConfThd.Cardinality = 'Cmn';
HwAgSnsrlsCorrdPinionAgConfThd.CustomerVisible = false;
HwAgSnsrlsCorrdPinionAgConfThd.Online = false;
HwAgSnsrlsCorrdPinionAgConfThd.Impact = 'H';
HwAgSnsrlsCorrdPinionAgConfThd.TuningOwner = 'CSE';
HwAgSnsrlsCorrdPinionAgConfThd.GraphLink = {''};
HwAgSnsrlsCorrdPinionAgConfThd.Monotony = 'None';
HwAgSnsrlsCorrdPinionAgConfThd.MaxGrad = Inf;
HwAgSnsrlsCorrdPinionAgConfThd.PortName = 'HwAgSnsrlsCorrdPinionAgConfThd';


HwAgSnsrlsCorrdPinionAgHwConf = DataDict.Calibration;
HwAgSnsrlsCorrdPinionAgHwConf.LongName = 'Corrected Pinion Angle Handwheel Confidence';
HwAgSnsrlsCorrdPinionAgHwConf.Description = [...
  'When corrected pinion angle is learned, it is the handwheel confidence' ...
  '.'];
HwAgSnsrlsCorrdPinionAgHwConf.DocUnits = 'Uls';
HwAgSnsrlsCorrdPinionAgHwConf.EngDT = dt.float32;
HwAgSnsrlsCorrdPinionAgHwConf.EngVal = 1;
HwAgSnsrlsCorrdPinionAgHwConf.EngMin = 0;
HwAgSnsrlsCorrdPinionAgHwConf.EngMax = 1;
HwAgSnsrlsCorrdPinionAgHwConf.Cardinality = 'Cmn';
HwAgSnsrlsCorrdPinionAgHwConf.CustomerVisible = false;
HwAgSnsrlsCorrdPinionAgHwConf.Online = false;
HwAgSnsrlsCorrdPinionAgHwConf.Impact = 'H';
HwAgSnsrlsCorrdPinionAgHwConf.TuningOwner = 'CSE';
HwAgSnsrlsCorrdPinionAgHwConf.GraphLink = {''};
HwAgSnsrlsCorrdPinionAgHwConf.Monotony = 'None';
HwAgSnsrlsCorrdPinionAgHwConf.MaxGrad = Inf;
HwAgSnsrlsCorrdPinionAgHwConf.PortName = 'HwAgSnsrlsCorrdPinionAgHwConf';


HwAgSnsrlsFCentrHwConf = DataDict.Calibration;
HwAgSnsrlsFCentrHwConf.LongName = 'Focrce Center Handwheel Confidence';
HwAgSnsrlsFCentrHwConf.Description = [...
  'When force center is enabled, use the value as the handwheel confidenc' ...
  'e.'];
HwAgSnsrlsFCentrHwConf.DocUnits = 'Uls';
HwAgSnsrlsFCentrHwConf.EngDT = dt.float32;
HwAgSnsrlsFCentrHwConf.EngVal = 1;
HwAgSnsrlsFCentrHwConf.EngMin = 0;
HwAgSnsrlsFCentrHwConf.EngMax = 1;
HwAgSnsrlsFCentrHwConf.Cardinality = 'Cmn';
HwAgSnsrlsFCentrHwConf.CustomerVisible = false;
HwAgSnsrlsFCentrHwConf.Online = false;
HwAgSnsrlsFCentrHwConf.Impact = 'H';
HwAgSnsrlsFCentrHwConf.TuningOwner = 'CSE';
HwAgSnsrlsFCentrHwConf.GraphLink = {''};
HwAgSnsrlsFCentrHwConf.Monotony = 'None';
HwAgSnsrlsFCentrHwConf.MaxGrad = Inf;
HwAgSnsrlsFCentrHwConf.PortName = 'HwAgSnsrlsFCentrHwConf';


HwAgSnsrlsFeatEna = DataDict.Calibration;
HwAgSnsrlsFeatEna.LongName = 'Feature Enable';
HwAgSnsrlsFeatEna.Description = [...
  'When Feature Enable is enabled, use the IMC pinion angle and IMC pinion' ...
  'angle confidence to determine corrected pinion angle handwheel angle offset.'];
HwAgSnsrlsFeatEna.DocUnits = 'Cnt';
HwAgSnsrlsFeatEna.EngDT = dt.lgc;
HwAgSnsrlsFeatEna.EngVal = 0;
HwAgSnsrlsFeatEna.EngMin = 0;
HwAgSnsrlsFeatEna.EngMax = 1;
HwAgSnsrlsFeatEna.Cardinality = 'Inin';
HwAgSnsrlsFeatEna.CustomerVisible = false;
HwAgSnsrlsFeatEna.Online = false;
HwAgSnsrlsFeatEna.Impact = 'M';
HwAgSnsrlsFeatEna.TuningOwner = 'CSE';
HwAgSnsrlsFeatEna.GraphLink = {''};
HwAgSnsrlsFeatEna.Monotony = 'None';
HwAgSnsrlsFeatEna.MaxGrad = 1;
HwAgSnsrlsFeatEna.PortName = 'HwAgSnsrlsFeatEna';

HwAgSnsrlsMotAgIdptSigThd = DataDict.Calibration;
HwAgSnsrlsMotAgIdptSigThd.LongName = 'Motor Angle Independent Signal Threshold';
HwAgSnsrlsMotAgIdptSigThd.Description = [...
  'The Handwheel Angle Confidence will be overriden to 0 if the Motor Ang' ...
  'le Mechanical Independent Signal is less or equal to the threshold.'];
HwAgSnsrlsMotAgIdptSigThd.DocUnits = 'Cnt';
HwAgSnsrlsMotAgIdptSigThd.EngDT = dt.u08;
HwAgSnsrlsMotAgIdptSigThd.EngVal = 1;
HwAgSnsrlsMotAgIdptSigThd.EngMin = 0;
HwAgSnsrlsMotAgIdptSigThd.EngMax = 3;
HwAgSnsrlsMotAgIdptSigThd.Cardinality = 'Cmn';
HwAgSnsrlsMotAgIdptSigThd.CustomerVisible = false;
HwAgSnsrlsMotAgIdptSigThd.Online = false;
HwAgSnsrlsMotAgIdptSigThd.Impact = 'H';
HwAgSnsrlsMotAgIdptSigThd.TuningOwner = 'CSE';
HwAgSnsrlsMotAgIdptSigThd.GraphLink = {''};
HwAgSnsrlsMotAgIdptSigThd.Monotony = 'None';
HwAgSnsrlsMotAgIdptSigThd.MaxGrad = Inf;
HwAgSnsrlsMotAgIdptSigThd.PortName = 'HwAgSnsrlsMotAgIdptSigThd';


HwAgSnsrlsPinionTqFilFrq = DataDict.Calibration;
HwAgSnsrlsPinionTqFilFrq.LongName = 'Pinion Torque Filter Frequency';
HwAgSnsrlsPinionTqFilFrq.Description = [...
  'Pinion Torque lowpass filter cutoff frequency.'];
HwAgSnsrlsPinionTqFilFrq.DocUnits = 'Hz';
HwAgSnsrlsPinionTqFilFrq.EngDT = dt.float32;
HwAgSnsrlsPinionTqFilFrq.EngVal = 0.035;
HwAgSnsrlsPinionTqFilFrq.EngMin = 0.0002;
HwAgSnsrlsPinionTqFilFrq.EngMax = 0.1;
HwAgSnsrlsPinionTqFilFrq.Cardinality = 'Cmn';
HwAgSnsrlsPinionTqFilFrq.CustomerVisible = false;
HwAgSnsrlsPinionTqFilFrq.Online = false;
HwAgSnsrlsPinionTqFilFrq.Impact = 'H';
HwAgSnsrlsPinionTqFilFrq.TuningOwner = 'CSE';
HwAgSnsrlsPinionTqFilFrq.GraphLink = {''};
HwAgSnsrlsPinionTqFilFrq.Monotony = 'None';
HwAgSnsrlsPinionTqFilFrq.MaxGrad = 998;
HwAgSnsrlsPinionTqFilFrq.PortName = 'HwAgSnsrlsPinionTqFilFrq';


HwAgSnsrlsRelHwAgFil1Frq = DataDict.Calibration;
HwAgSnsrlsRelHwAgFil1Frq.LongName = 'Relative Handwheel Angle Filter 1 Frequency';
HwAgSnsrlsRelHwAgFil1Frq.Description = [...
  'Relative Handwheel Angle lowpass filter 1 cutoff frequency.'];
HwAgSnsrlsRelHwAgFil1Frq.DocUnits = 'Hz';
HwAgSnsrlsRelHwAgFil1Frq.EngDT = dt.float32;
HwAgSnsrlsRelHwAgFil1Frq.EngVal = 0.025;
HwAgSnsrlsRelHwAgFil1Frq.EngMin = 0.0002;
HwAgSnsrlsRelHwAgFil1Frq.EngMax = 0.1;
HwAgSnsrlsRelHwAgFil1Frq.Cardinality = 'Cmn';
HwAgSnsrlsRelHwAgFil1Frq.CustomerVisible = false;
HwAgSnsrlsRelHwAgFil1Frq.Online = false;
HwAgSnsrlsRelHwAgFil1Frq.Impact = 'H';
HwAgSnsrlsRelHwAgFil1Frq.TuningOwner = 'CSE';
HwAgSnsrlsRelHwAgFil1Frq.GraphLink = {''};
HwAgSnsrlsRelHwAgFil1Frq.Monotony = 'None';
HwAgSnsrlsRelHwAgFil1Frq.MaxGrad = Inf;
HwAgSnsrlsRelHwAgFil1Frq.PortName = 'HwAgSnsrlsRelHwAgFil1Frq';


HwAgSnsrlsRelHwAgFil2Frq = DataDict.Calibration;
HwAgSnsrlsRelHwAgFil2Frq.LongName = 'Relative Handwheel Angle Filter 2 Frequency';
HwAgSnsrlsRelHwAgFil2Frq.Description = [...
  'Relative Handwheel Angle lowpass filter 2 cutoff frequency.'];
HwAgSnsrlsRelHwAgFil2Frq.DocUnits = 'Hz';
HwAgSnsrlsRelHwAgFil2Frq.EngDT = dt.float32;
HwAgSnsrlsRelHwAgFil2Frq.EngVal = 0.025;
HwAgSnsrlsRelHwAgFil2Frq.EngMin = 0.0002;
HwAgSnsrlsRelHwAgFil2Frq.EngMax = 0.1;
HwAgSnsrlsRelHwAgFil2Frq.Cardinality = 'Cmn';
HwAgSnsrlsRelHwAgFil2Frq.CustomerVisible = false;
HwAgSnsrlsRelHwAgFil2Frq.Online = false;
HwAgSnsrlsRelHwAgFil2Frq.Impact = 'H';
HwAgSnsrlsRelHwAgFil2Frq.TuningOwner = 'CSE';
HwAgSnsrlsRelHwAgFil2Frq.GraphLink = {''};
HwAgSnsrlsRelHwAgFil2Frq.Monotony = 'None';
HwAgSnsrlsRelHwAgFil2Frq.MaxGrad = Inf;
HwAgSnsrlsRelHwAgFil2Frq.PortName = 'HwAgSnsrlsRelHwAgFil2Frq';


HwAgSnsrlsSmotngCoeff = DataDict.Calibration;
HwAgSnsrlsSmotngCoeff.LongName = 'Smoothing Coefficient';
HwAgSnsrlsSmotngCoeff.Description = [...
  'Coeffient used in the smoothing function.'];
HwAgSnsrlsSmotngCoeff.DocUnits = 'Uls';
HwAgSnsrlsSmotngCoeff.EngDT = dt.float32;
HwAgSnsrlsSmotngCoeff.EngVal = 0.2;
HwAgSnsrlsSmotngCoeff.EngMin = 0.1;
HwAgSnsrlsSmotngCoeff.EngMax = 1;
HwAgSnsrlsSmotngCoeff.Cardinality = 'Cmn';
HwAgSnsrlsSmotngCoeff.CustomerVisible = false;
HwAgSnsrlsSmotngCoeff.Online = false;
HwAgSnsrlsSmotngCoeff.Impact = 'H';
HwAgSnsrlsSmotngCoeff.TuningOwner = 'CSE';
HwAgSnsrlsSmotngCoeff.GraphLink = {''};
HwAgSnsrlsSmotngCoeff.Monotony = 'None';
HwAgSnsrlsSmotngCoeff.MaxGrad = Inf;
HwAgSnsrlsSmotngCoeff.PortName = 'HwAgSnsrlsSmotngCoeff';


HwAgSnsrlsSmotngStepThd = DataDict.Calibration;
HwAgSnsrlsSmotngStepThd.LongName = 'Smoothing Step Threshold';
HwAgSnsrlsSmotngStepThd.Description = [...
  'Change step threshold used in the smoothing function.'];
HwAgSnsrlsSmotngStepThd.DocUnits = 'HwDeg';
HwAgSnsrlsSmotngStepThd.EngDT = dt.float32;
HwAgSnsrlsSmotngStepThd.EngVal = 5;
HwAgSnsrlsSmotngStepThd.EngMin = 0;
HwAgSnsrlsSmotngStepThd.EngMax = 45;
HwAgSnsrlsSmotngStepThd.Cardinality = 'Cmn';
HwAgSnsrlsSmotngStepThd.CustomerVisible = false;
HwAgSnsrlsSmotngStepThd.Online = false;
HwAgSnsrlsSmotngStepThd.Impact = 'H';
HwAgSnsrlsSmotngStepThd.TuningOwner = 'CSE';
HwAgSnsrlsSmotngStepThd.GraphLink = {''};
HwAgSnsrlsSmotngStepThd.Monotony = 'None';
HwAgSnsrlsSmotngStepThd.MaxGrad = Inf;
HwAgSnsrlsSmotngStepThd.PortName = 'HwAgSnsrlsSmotngStepThd';


HwAgSnsrlsStordPinionConf = DataDict.Calibration;
HwAgSnsrlsStordPinionConf.LongName = 'Stored Pinion Confidence';
HwAgSnsrlsStordPinionConf.Description = [...
  'When NVM is available, it is the pinion confidence from the Init.'];
HwAgSnsrlsStordPinionConf.DocUnits = 'Uls';
HwAgSnsrlsStordPinionConf.EngDT = dt.float32;
HwAgSnsrlsStordPinionConf.EngVal = 0.1;
HwAgSnsrlsStordPinionConf.EngMin = 0;
HwAgSnsrlsStordPinionConf.EngMax = 1;
HwAgSnsrlsStordPinionConf.Cardinality = 'Cmn';
HwAgSnsrlsStordPinionConf.CustomerVisible = false;
HwAgSnsrlsStordPinionConf.Online = false;
HwAgSnsrlsStordPinionConf.Impact = 'H';
HwAgSnsrlsStordPinionConf.TuningOwner = 'CSE';
HwAgSnsrlsStordPinionConf.GraphLink = {''};
HwAgSnsrlsStordPinionConf.Monotony = 'None';
HwAgSnsrlsStordPinionConf.MaxGrad = Inf;
HwAgSnsrlsStordPinionConf.PortName = 'HwAgSnsrlsStordPinionConf';


HwAgSnsrlsStordPinionConfThd = DataDict.Calibration;
HwAgSnsrlsStordPinionConfThd.LongName = 'Stored Pinion Confidence Threshold';
HwAgSnsrlsStordPinionConfThd.Description = [...
  'When the pinion angle confidence is good, store the pinion angle.'];
HwAgSnsrlsStordPinionConfThd.DocUnits = 'Uls';
HwAgSnsrlsStordPinionConfThd.EngDT = dt.float32;
HwAgSnsrlsStordPinionConfThd.EngVal = 0.1;
HwAgSnsrlsStordPinionConfThd.EngMin = 0;
HwAgSnsrlsStordPinionConfThd.EngMax = 1;
HwAgSnsrlsStordPinionConfThd.Cardinality = 'Cmn';
HwAgSnsrlsStordPinionConfThd.CustomerVisible = false;
HwAgSnsrlsStordPinionConfThd.Online = false;
HwAgSnsrlsStordPinionConfThd.Impact = 'H';
HwAgSnsrlsStordPinionConfThd.TuningOwner = 'CSE';
HwAgSnsrlsStordPinionConfThd.GraphLink = {''};
HwAgSnsrlsStordPinionConfThd.Monotony = 'None';
HwAgSnsrlsStordPinionConfThd.MaxGrad = Inf;
HwAgSnsrlsStordPinionConfThd.PortName = 'HwAgSnsrlsStordPinionConfThd';


HwAgSnsrlsVehDynDifThd = DataDict.Calibration;
HwAgSnsrlsVehDynDifThd.LongName = 'Vehicle Dynamic Difference Threshold';
HwAgSnsrlsVehDynDifThd.Description = [...
  'It is the threshold of the difference between Filtered Relative Pinion' ...
  ' Angle 1 and Relative Pinion Angle. When the difference is over the th' ...
  'reshold, the vehicle dynamic timer 2 is disabled.'];
HwAgSnsrlsVehDynDifThd.DocUnits = 'HwDeg';
HwAgSnsrlsVehDynDifThd.EngDT = dt.float32;
HwAgSnsrlsVehDynDifThd.EngVal = 5;
HwAgSnsrlsVehDynDifThd.EngMin = 0;
HwAgSnsrlsVehDynDifThd.EngMax = 100;
HwAgSnsrlsVehDynDifThd.Cardinality = 'Cmn';
HwAgSnsrlsVehDynDifThd.CustomerVisible = false;
HwAgSnsrlsVehDynDifThd.Online = false;
HwAgSnsrlsVehDynDifThd.Impact = 'H';
HwAgSnsrlsVehDynDifThd.TuningOwner = 'CSE';
HwAgSnsrlsVehDynDifThd.GraphLink = {''};
HwAgSnsrlsVehDynDifThd.Monotony = 'None';
HwAgSnsrlsVehDynDifThd.MaxGrad = Inf;
HwAgSnsrlsVehDynDifThd.PortName = 'HwAgSnsrlsVehDynDifThd';


HwAgSnsrlsVehDynHwConf = DataDict.Calibration;
HwAgSnsrlsVehDynHwConf.LongName = 'Vehicle Dynamic Handwheel Confidence';
HwAgSnsrlsVehDynHwConf.Description = [...
  'Output the handwheel angle confidence when vehicle dynamic algorithm i' ...
  's used.'];
HwAgSnsrlsVehDynHwConf.DocUnits = 'Uls';
HwAgSnsrlsVehDynHwConf.EngDT = dt.float32;
HwAgSnsrlsVehDynHwConf.EngVal = 0;
HwAgSnsrlsVehDynHwConf.EngMin = 0;
HwAgSnsrlsVehDynHwConf.EngMax = 1;
HwAgSnsrlsVehDynHwConf.Cardinality = 'Cmn';
HwAgSnsrlsVehDynHwConf.CustomerVisible = false;
HwAgSnsrlsVehDynHwConf.Online = false;
HwAgSnsrlsVehDynHwConf.Impact = 'H';
HwAgSnsrlsVehDynHwConf.TuningOwner = 'CSE';
HwAgSnsrlsVehDynHwConf.GraphLink = {''};
HwAgSnsrlsVehDynHwConf.Monotony = 'None';
HwAgSnsrlsVehDynHwConf.MaxGrad = Inf;
HwAgSnsrlsVehDynHwConf.PortName = 'HwAgSnsrlsVehDynHwConf';


HwAgSnsrlsVehDynMotVelThd = DataDict.Calibration;
HwAgSnsrlsVehDynMotVelThd.LongName = 'Vehicle Dynamic Motor Velocity Threshold';
HwAgSnsrlsVehDynMotVelThd.Description = [...
  'Motor Velocity threshold, when Motor Velocity is less than this value,' ...
  ' enabling criteria for vehicle dynamic autocentering'];
HwAgSnsrlsVehDynMotVelThd.DocUnits = 'MotRadPerSec';
HwAgSnsrlsVehDynMotVelThd.EngDT = dt.float32;
HwAgSnsrlsVehDynMotVelThd.EngVal = 20;
HwAgSnsrlsVehDynMotVelThd.EngMin = 0;
HwAgSnsrlsVehDynMotVelThd.EngMax = 700;
HwAgSnsrlsVehDynMotVelThd.Cardinality = 'Cmn';
HwAgSnsrlsVehDynMotVelThd.CustomerVisible = false;
HwAgSnsrlsVehDynMotVelThd.Online = false;
HwAgSnsrlsVehDynMotVelThd.Impact = 'H';
HwAgSnsrlsVehDynMotVelThd.TuningOwner = 'CSE';
HwAgSnsrlsVehDynMotVelThd.GraphLink = {''};
HwAgSnsrlsVehDynMotVelThd.Monotony = 'None';
HwAgSnsrlsVehDynMotVelThd.MaxGrad = 998;
HwAgSnsrlsVehDynMotVelThd.PortName = 'HwAgSnsrlsVehDynMotVelThd';


HwAgSnsrlsVehDynPinionTqThd = DataDict.Calibration;
HwAgSnsrlsVehDynPinionTqThd.LongName = 'Vehicle Dynamic Pinion Torque Threshold';
HwAgSnsrlsVehDynPinionTqThd.Description = [...
  'Pinion Torque threshold, when Pinion Torque is less than the value, en' ...
  'abling criteria for vehicle dynamic autocentering'];
HwAgSnsrlsVehDynPinionTqThd.DocUnits = 'HwNwtMtr';
HwAgSnsrlsVehDynPinionTqThd.EngDT = dt.float32;
HwAgSnsrlsVehDynPinionTqThd.EngVal = 3;
HwAgSnsrlsVehDynPinionTqThd.EngMin = 0;
HwAgSnsrlsVehDynPinionTqThd.EngMax = 20;
HwAgSnsrlsVehDynPinionTqThd.Cardinality = 'Cmn';
HwAgSnsrlsVehDynPinionTqThd.CustomerVisible = false;
HwAgSnsrlsVehDynPinionTqThd.Online = false;
HwAgSnsrlsVehDynPinionTqThd.Impact = 'H';
HwAgSnsrlsVehDynPinionTqThd.TuningOwner = 'CSE';
HwAgSnsrlsVehDynPinionTqThd.GraphLink = {''};
HwAgSnsrlsVehDynPinionTqThd.Monotony = 'None';
HwAgSnsrlsVehDynPinionTqThd.MaxGrad = 998;
HwAgSnsrlsVehDynPinionTqThd.PortName = 'HwAgSnsrlsVehDynPinionTqThd';


HwAgSnsrlsVehDynTmr1Thd = DataDict.Calibration;
HwAgSnsrlsVehDynTmr1Thd.LongName = 'Vehicle Dynamic Timer 1 Threshold';
HwAgSnsrlsVehDynTmr1Thd.Description = [...
  'Time threshold, when the time span is over the value, enabling criteri' ...
  'a for filter 1 in vehicle dynamic function.'];
HwAgSnsrlsVehDynTmr1Thd.DocUnits = 'MilliSec';
HwAgSnsrlsVehDynTmr1Thd.EngDT = dt.u32;
HwAgSnsrlsVehDynTmr1Thd.EngVal = 1500;
HwAgSnsrlsVehDynTmr1Thd.EngMin = 0;
HwAgSnsrlsVehDynTmr1Thd.EngMax = 60000;
HwAgSnsrlsVehDynTmr1Thd.Cardinality = 'Cmn';
HwAgSnsrlsVehDynTmr1Thd.CustomerVisible = false;
HwAgSnsrlsVehDynTmr1Thd.Online = false;
HwAgSnsrlsVehDynTmr1Thd.Impact = 'H';
HwAgSnsrlsVehDynTmr1Thd.TuningOwner = 'CSE';
HwAgSnsrlsVehDynTmr1Thd.GraphLink = {''};
HwAgSnsrlsVehDynTmr1Thd.Monotony = 'None';
HwAgSnsrlsVehDynTmr1Thd.MaxGrad = Inf;
HwAgSnsrlsVehDynTmr1Thd.PortName = 'HwAgSnsrlsVehDynTmr1Thd';


HwAgSnsrlsVehDynTmr2Thd = DataDict.Calibration;
HwAgSnsrlsVehDynTmr2Thd.LongName = 'Vehicle Dynamic Timer 2 Threshold';
HwAgSnsrlsVehDynTmr2Thd.Description = [...
  'Time threshold, when the time span is over the value, enabling criteri' ...
  'a for filter 2 in vehicle dynamic function.'];
HwAgSnsrlsVehDynTmr2Thd.DocUnits = 'MilliSec';
HwAgSnsrlsVehDynTmr2Thd.EngDT = dt.u32;
HwAgSnsrlsVehDynTmr2Thd.EngVal = 2000;
HwAgSnsrlsVehDynTmr2Thd.EngMin = 0;
HwAgSnsrlsVehDynTmr2Thd.EngMax = 60000;
HwAgSnsrlsVehDynTmr2Thd.Cardinality = 'Cmn';
HwAgSnsrlsVehDynTmr2Thd.CustomerVisible = false;
HwAgSnsrlsVehDynTmr2Thd.Online = false;
HwAgSnsrlsVehDynTmr2Thd.Impact = 'H';
HwAgSnsrlsVehDynTmr2Thd.TuningOwner = 'CSE';
HwAgSnsrlsVehDynTmr2Thd.GraphLink = {''};
HwAgSnsrlsVehDynTmr2Thd.Monotony = 'None';
HwAgSnsrlsVehDynTmr2Thd.MaxGrad = Inf;
HwAgSnsrlsVehDynTmr2Thd.PortName = 'HwAgSnsrlsVehDynTmr2Thd';


HwAgSnsrlsVehDynVehSpdThd = DataDict.Calibration;
HwAgSnsrlsVehDynVehSpdThd.LongName = 'Vehicle Dynamic Vehicle Speed Threshold';
HwAgSnsrlsVehDynVehSpdThd.Description = [...
  'Vehicle Speed threshold, when Vehicle Speed is over the value, enablin' ...
  'g criteria for vehicle dynamic autocentering.'];
HwAgSnsrlsVehDynVehSpdThd.DocUnits = 'Kph';
HwAgSnsrlsVehDynVehSpdThd.EngDT = dt.float32;
HwAgSnsrlsVehDynVehSpdThd.EngVal = 65;
HwAgSnsrlsVehDynVehSpdThd.EngMin = 0;
HwAgSnsrlsVehDynVehSpdThd.EngMax = 511;
HwAgSnsrlsVehDynVehSpdThd.Cardinality = 'Inin';
HwAgSnsrlsVehDynVehSpdThd.CustomerVisible = false;
HwAgSnsrlsVehDynVehSpdThd.Online = false;
HwAgSnsrlsVehDynVehSpdThd.Impact = 'H';
HwAgSnsrlsVehDynVehSpdThd.TuningOwner = 'CSE';
HwAgSnsrlsVehDynVehSpdThd.GraphLink = {''};
HwAgSnsrlsVehDynVehSpdThd.Monotony = 'None';
HwAgSnsrlsVehDynVehSpdThd.MaxGrad = Inf;
HwAgSnsrlsVehDynVehSpdThd.PortName = 'HwAgSnsrlsVehDynVehSpdThd';


HwAgSnsrlsVehDynYawRateThd = DataDict.Calibration;
HwAgSnsrlsVehDynYawRateThd.LongName = 'Vehicle Dynamic Yaw Rate Threshold';
HwAgSnsrlsVehDynYawRateThd.Description = [...
  'Yaw Rate threshold, when the absolute Yaw Rate is less than the value,' ...
  ' enabling criteria for high speed auto centering.'];
HwAgSnsrlsVehDynYawRateThd.DocUnits = 'VehDegPerSec';
HwAgSnsrlsVehDynYawRateThd.EngDT = dt.float32;
HwAgSnsrlsVehDynYawRateThd.EngVal = 1;
HwAgSnsrlsVehDynYawRateThd.EngMin = 0;
HwAgSnsrlsVehDynYawRateThd.EngMax = 128;
HwAgSnsrlsVehDynYawRateThd.Cardinality = 'Inin';
HwAgSnsrlsVehDynYawRateThd.CustomerVisible = false;
HwAgSnsrlsVehDynYawRateThd.Online = false;
HwAgSnsrlsVehDynYawRateThd.Impact = 'H';
HwAgSnsrlsVehDynYawRateThd.TuningOwner = 'CSE';
HwAgSnsrlsVehDynYawRateThd.GraphLink = {''};
HwAgSnsrlsVehDynYawRateThd.Monotony = 'None';
HwAgSnsrlsVehDynYawRateThd.MaxGrad = Inf;
HwAgSnsrlsVehDynYawRateThd.PortName = 'HwAgSnsrlsVehDynYawRateThd';


HwAgSnsrlsWhlFrqThd = DataDict.Calibration;
HwAgSnsrlsWhlFrqThd.LongName = 'Wheel Frequency Threshold';
HwAgSnsrlsWhlFrqThd.Description = [...
  'When wheel frequency is over the threshold, enable the calculation of ' ...
  'wheel speed ratio.'];
HwAgSnsrlsWhlFrqThd.DocUnits = 'Hz';
HwAgSnsrlsWhlFrqThd.EngDT = dt.float32;
HwAgSnsrlsWhlFrqThd.EngVal = 0.2;
HwAgSnsrlsWhlFrqThd.EngMin = 0;
HwAgSnsrlsWhlFrqThd.EngMax = 3;
HwAgSnsrlsWhlFrqThd.Cardinality = 'Cmn';
HwAgSnsrlsWhlFrqThd.CustomerVisible = false;
HwAgSnsrlsWhlFrqThd.Online = false;
HwAgSnsrlsWhlFrqThd.Impact = 'H';
HwAgSnsrlsWhlFrqThd.TuningOwner = 'CSE';
HwAgSnsrlsWhlFrqThd.GraphLink = {''};
HwAgSnsrlsWhlFrqThd.Monotony = 'None';
HwAgSnsrlsWhlFrqThd.MaxGrad = Inf;
HwAgSnsrlsWhlFrqThd.PortName = 'HwAgSnsrlsWhlFrqThd';


HwAgSnsrlsWhlSpdHwAgCoeff1 = DataDict.Calibration;
HwAgSnsrlsWhlSpdHwAgCoeff1.LongName = 'Wheel Speed Handwheel Angle Coefficient 1';
HwAgSnsrlsWhlSpdHwAgCoeff1.Description = [...
  'It is the coefficient used in handwheel angle learning based on wheel ' ...
  'speed.'];
HwAgSnsrlsWhlSpdHwAgCoeff1.DocUnits = 'HwDeg';
HwAgSnsrlsWhlSpdHwAgCoeff1.EngDT = dt.float32;
HwAgSnsrlsWhlSpdHwAgCoeff1.EngVal = 4000;
HwAgSnsrlsWhlSpdHwAgCoeff1.EngMin = 100;
HwAgSnsrlsWhlSpdHwAgCoeff1.EngMax = 10000;
HwAgSnsrlsWhlSpdHwAgCoeff1.Cardinality = 'Cmn';
HwAgSnsrlsWhlSpdHwAgCoeff1.CustomerVisible = false;
HwAgSnsrlsWhlSpdHwAgCoeff1.Online = false;
HwAgSnsrlsWhlSpdHwAgCoeff1.Impact = 'H';
HwAgSnsrlsWhlSpdHwAgCoeff1.TuningOwner = 'CSE';
HwAgSnsrlsWhlSpdHwAgCoeff1.GraphLink = {''};
HwAgSnsrlsWhlSpdHwAgCoeff1.Monotony = 'None';
HwAgSnsrlsWhlSpdHwAgCoeff1.MaxGrad = Inf;
HwAgSnsrlsWhlSpdHwAgCoeff1.PortName = 'HwAgSnsrlsWhlSpdHwAgCoeff1';


HwAgSnsrlsWhlSpdHwAgCoeff2 = DataDict.Calibration;
HwAgSnsrlsWhlSpdHwAgCoeff2.LongName = 'Wheel Speed Handwheel Angle Coefficient 2';
HwAgSnsrlsWhlSpdHwAgCoeff2.Description = [...
  'It is the coefficient used in handwheel angle learning based on wheel ' ...
  'speed.'];
HwAgSnsrlsWhlSpdHwAgCoeff2.DocUnits = 'HwDeg';
HwAgSnsrlsWhlSpdHwAgCoeff2.EngDT = dt.float32;
HwAgSnsrlsWhlSpdHwAgCoeff2.EngVal = 0;
HwAgSnsrlsWhlSpdHwAgCoeff2.EngMin = -360;
HwAgSnsrlsWhlSpdHwAgCoeff2.EngMax = 360;
HwAgSnsrlsWhlSpdHwAgCoeff2.Cardinality = 'Cmn';
HwAgSnsrlsWhlSpdHwAgCoeff2.CustomerVisible = false;
HwAgSnsrlsWhlSpdHwAgCoeff2.Online = false;
HwAgSnsrlsWhlSpdHwAgCoeff2.Impact = 'H';
HwAgSnsrlsWhlSpdHwAgCoeff2.TuningOwner = 'CSE';
HwAgSnsrlsWhlSpdHwAgCoeff2.GraphLink = {''};
HwAgSnsrlsWhlSpdHwAgCoeff2.Monotony = 'None';
HwAgSnsrlsWhlSpdHwAgCoeff2.MaxGrad = Inf;
HwAgSnsrlsWhlSpdHwAgCoeff2.PortName = 'HwAgSnsrlsWhlSpdHwAgCoeff2';


HwAgSnsrlsWhlSpdHwAgThd = DataDict.Calibration;
HwAgSnsrlsWhlSpdHwAgThd.LongName = 'Wheel Speed Handwheel Angle Threshold';
HwAgSnsrlsWhlSpdHwAgThd.Description = [...
  'When calculated handwheel angle based on wheel speed is over the thres' ...
  'hold, disable the handwheel angle offset learning based on the wheel s' ...
  'peed.'];
HwAgSnsrlsWhlSpdHwAgThd.DocUnits = 'HwDeg';
HwAgSnsrlsWhlSpdHwAgThd.EngDT = dt.float32;
HwAgSnsrlsWhlSpdHwAgThd.EngVal = 600;
HwAgSnsrlsWhlSpdHwAgThd.EngMin = 300;
HwAgSnsrlsWhlSpdHwAgThd.EngMax = 1000;
HwAgSnsrlsWhlSpdHwAgThd.Cardinality = 'Cmn';
HwAgSnsrlsWhlSpdHwAgThd.CustomerVisible = false;
HwAgSnsrlsWhlSpdHwAgThd.Online = false;
HwAgSnsrlsWhlSpdHwAgThd.Impact = 'H';
HwAgSnsrlsWhlSpdHwAgThd.TuningOwner = 'CSE';
HwAgSnsrlsWhlSpdHwAgThd.GraphLink = {''};
HwAgSnsrlsWhlSpdHwAgThd.Monotony = 'None';
HwAgSnsrlsWhlSpdHwAgThd.MaxGrad = Inf;
HwAgSnsrlsWhlSpdHwAgThd.PortName = 'HwAgSnsrlsWhlSpdHwAgThd';


HwAgSnsrlsWhlSpdHwConf = DataDict.Calibration;
HwAgSnsrlsWhlSpdHwConf.LongName = 'Wheel Speed Handwheel Confidence';
HwAgSnsrlsWhlSpdHwConf.Description = [...
  'When handwheel angle is learned from wheel speed, it is the handwheel ' ...
  'confidence.'];
HwAgSnsrlsWhlSpdHwConf.DocUnits = 'Uls';
HwAgSnsrlsWhlSpdHwConf.EngDT = dt.float32;
HwAgSnsrlsWhlSpdHwConf.EngVal = 0.2;
HwAgSnsrlsWhlSpdHwConf.EngMin = 0;
HwAgSnsrlsWhlSpdHwConf.EngMax = 1;
HwAgSnsrlsWhlSpdHwConf.Cardinality = 'Cmn';
HwAgSnsrlsWhlSpdHwConf.CustomerVisible = false;
HwAgSnsrlsWhlSpdHwConf.Online = false;
HwAgSnsrlsWhlSpdHwConf.Impact = 'H';
HwAgSnsrlsWhlSpdHwConf.TuningOwner = 'CSE';
HwAgSnsrlsWhlSpdHwConf.GraphLink = {''};
HwAgSnsrlsWhlSpdHwConf.Monotony = 'None';
HwAgSnsrlsWhlSpdHwConf.MaxGrad = Inf;
HwAgSnsrlsWhlSpdHwConf.PortName = 'HwAgSnsrlsWhlSpdHwConf';


HwAgSnsrlsWhlSpdRatThd = DataDict.Calibration;
HwAgSnsrlsWhlSpdRatThd.LongName = 'Wheel Speed Ratio Threshold';
HwAgSnsrlsWhlSpdRatThd.Description = [...
  'When wheel speed ratio is less than the threshold, disable the handwhe' ...
  'el angle learning based on wheel speed.'];
HwAgSnsrlsWhlSpdRatThd.DocUnits = 'Uls';
HwAgSnsrlsWhlSpdRatThd.EngDT = dt.float32;
HwAgSnsrlsWhlSpdRatThd.EngVal = 1e-05;
HwAgSnsrlsWhlSpdRatThd.EngMin = 0;
HwAgSnsrlsWhlSpdRatThd.EngMax = 1;
HwAgSnsrlsWhlSpdRatThd.Cardinality = 'Cmn';
HwAgSnsrlsWhlSpdRatThd.CustomerVisible = false;
HwAgSnsrlsWhlSpdRatThd.Online = false;
HwAgSnsrlsWhlSpdRatThd.Impact = 'H';
HwAgSnsrlsWhlSpdRatThd.TuningOwner = 'CSE';
HwAgSnsrlsWhlSpdRatThd.GraphLink = {''};
HwAgSnsrlsWhlSpdRatThd.Monotony = 'None';
HwAgSnsrlsWhlSpdRatThd.MaxGrad = Inf;
HwAgSnsrlsWhlSpdRatThd.PortName = 'HwAgSnsrlsWhlSpdRatThd';


HwAgSnsrlsWhlSpdTmrThd = DataDict.Calibration;
HwAgSnsrlsWhlSpdTmrThd.LongName = 'Wheel Speed Timer Threshold';
HwAgSnsrlsWhlSpdTmrThd.Description = [...
  'When the time span is over the threshold, set wheel speed vehicle spee' ...
  'd enable to true.'];
HwAgSnsrlsWhlSpdTmrThd.DocUnits = 'MilliSec';
HwAgSnsrlsWhlSpdTmrThd.EngDT = dt.u32;
HwAgSnsrlsWhlSpdTmrThd.EngVal = 500;
HwAgSnsrlsWhlSpdTmrThd.EngMin = 0;
HwAgSnsrlsWhlSpdTmrThd.EngMax = 60000;
HwAgSnsrlsWhlSpdTmrThd.Cardinality = 'Cmn';
HwAgSnsrlsWhlSpdTmrThd.CustomerVisible = false;
HwAgSnsrlsWhlSpdTmrThd.Online = false;
HwAgSnsrlsWhlSpdTmrThd.Impact = 'H';
HwAgSnsrlsWhlSpdTmrThd.TuningOwner = 'CSE';
HwAgSnsrlsWhlSpdTmrThd.GraphLink = {''};
HwAgSnsrlsWhlSpdTmrThd.Monotony = 'None';
HwAgSnsrlsWhlSpdTmrThd.MaxGrad = Inf;
HwAgSnsrlsWhlSpdTmrThd.PortName = 'HwAgSnsrlsWhlSpdTmrThd';


HwAgSnsrlsWhlSpdVehSpdThd = DataDict.Calibration;
HwAgSnsrlsWhlSpdVehSpdThd.LongName = 'Wheel Speed Vehicle Speed Threshold';
HwAgSnsrlsWhlSpdVehSpdThd.Description = [...
  'When vehicle speed is over the threshold, meaning vehicle starts, enab' ...
  'le the wheel speed timer.'];
HwAgSnsrlsWhlSpdVehSpdThd.DocUnits = 'Kph';
HwAgSnsrlsWhlSpdVehSpdThd.EngDT = dt.float32;
HwAgSnsrlsWhlSpdVehSpdThd.EngVal = 0.1;
HwAgSnsrlsWhlSpdVehSpdThd.EngMin = 0;
HwAgSnsrlsWhlSpdVehSpdThd.EngMax = 50;
HwAgSnsrlsWhlSpdVehSpdThd.Cardinality = 'Cmn';
HwAgSnsrlsWhlSpdVehSpdThd.CustomerVisible = false;
HwAgSnsrlsWhlSpdVehSpdThd.Online = false;
HwAgSnsrlsWhlSpdVehSpdThd.Impact = 'H';
HwAgSnsrlsWhlSpdVehSpdThd.TuningOwner = 'CSE';
HwAgSnsrlsWhlSpdVehSpdThd.GraphLink = {''};
HwAgSnsrlsWhlSpdVehSpdThd.Monotony = 'None';
HwAgSnsrlsWhlSpdVehSpdThd.MaxGrad = Inf;
HwAgSnsrlsWhlSpdVehSpdThd.PortName = 'HwAgSnsrlsWhlSpdVehSpdThd';


HwAgSnsrlsYawRateFilFrq = DataDict.Calibration;
HwAgSnsrlsYawRateFilFrq.LongName = 'Yaw Rate Filter Frequency';
HwAgSnsrlsYawRateFilFrq.Description = [...
  'Lowpass filter frequency for Yaw Rate signal.'];
HwAgSnsrlsYawRateFilFrq.DocUnits = 'Hz';
HwAgSnsrlsYawRateFilFrq.EngDT = dt.float32;
HwAgSnsrlsYawRateFilFrq.EngVal = 3;
HwAgSnsrlsYawRateFilFrq.EngMin = 0.1;
HwAgSnsrlsYawRateFilFrq.EngMax = 100;
HwAgSnsrlsYawRateFilFrq.Cardinality = 'Inin';
HwAgSnsrlsYawRateFilFrq.CustomerVisible = false;
HwAgSnsrlsYawRateFilFrq.Online = false;
HwAgSnsrlsYawRateFilFrq.Impact = 'H';
HwAgSnsrlsYawRateFilFrq.TuningOwner = 'CSE';
HwAgSnsrlsYawRateFilFrq.GraphLink = {''};
HwAgSnsrlsYawRateFilFrq.Monotony = 'None';
HwAgSnsrlsYawRateFilFrq.MaxGrad = Inf;
HwAgSnsrlsYawRateFilFrq.PortName = 'HwAgSnsrlsYawRateFilFrq';



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
SysGlbPrmSysKineRat.Description = [...
  'Kinematic ratio between handwheel and motor.'];


SysGlbPrmSysTqRat = DataDict.ImprtdCal;
SysGlbPrmSysTqRat.DocUnits = 'HwNwtMtrPerMotNwtMtr';
SysGlbPrmSysTqRat.EngDT = dt.float32;
SysGlbPrmSysTqRat.EngVal = 20;
SysGlbPrmSysTqRat.EngMin = 10;
SysGlbPrmSysTqRat.EngMax = 40;
SysGlbPrmSysTqRat.PortName = 'SysGlbPrmSysTqRat';
SysGlbPrmSysTqRat.Description = [...
  'Ratio between handwheel torque and motor torque.'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
StordLstPrm = DataDict.NVM;
StordLstPrm.LongName = 'Stored Last Parameters';
StordLstPrm.Description = [...
  'It stores the last valid pinion angle and the valid status.'];
StordLstPrm.DocUnits = 'Cnt';
StordLstPrm.EngDT = struct.StordLstPrmRec1;
StordLstPrm.EngInit = [struct('PinionAg',0,'PinionAgVld',0)];
StordLstPrm.EngMin = [struct('PinionAg',-1440,'PinionAgVld',0)];
StordLstPrm.EngMax = [struct('PinionAg',1440,'PinionAgVld',1)];
StordLstPrm.CustomerVisible = false;
StordLstPrm.Impact = 'H';
StordLstPrm.TuningOwner = 'CSE';
StordLstPrm.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHwAgSnsrlsStordHwAg = DataDict.Display;
dHwAgSnsrlsStordHwAg.LongName = 'Stored Handwheel Angle';
dHwAgSnsrlsStordHwAg.Description = [...
  'It shows the handwheel angle from the NVM.'];
dHwAgSnsrlsStordHwAg.DocUnits = 'HwDeg';
dHwAgSnsrlsStordHwAg.EngDT = dt.float32;
dHwAgSnsrlsStordHwAg.EngMin = -1440;
dHwAgSnsrlsStordHwAg.EngMax = 1440;
dHwAgSnsrlsStordHwAg.InitRowCol = [1  1];


dHwAgSnsrlsStordHwConf = DataDict.Display;
dHwAgSnsrlsStordHwConf.LongName = 'Stored Handwheel Confidence';
dHwAgSnsrlsStordHwConf.Description = [...
  'It shows the handwheel angle confidence when NVM is read.'];
dHwAgSnsrlsStordHwConf.DocUnits = 'Uls';
dHwAgSnsrlsStordHwConf.EngDT = dt.float32;
dHwAgSnsrlsStordHwConf.EngMin = 0;
dHwAgSnsrlsStordHwConf.EngMax = 1;
dHwAgSnsrlsStordHwConf.InitRowCol = [1  1];


dHwAgSnsrlsVehDynHwConf = DataDict.Display;
dHwAgSnsrlsVehDynHwConf.LongName = 'Vehicle Dynamic Handwheel Confidence';
dHwAgSnsrlsVehDynHwConf.Description = [...
  'It shows the handwheel angle confidence from vehicle dynamic algorithm' ...
  '.'];
dHwAgSnsrlsVehDynHwConf.DocUnits = 'Uls';
dHwAgSnsrlsVehDynHwConf.EngDT = dt.float32;
dHwAgSnsrlsVehDynHwConf.EngMin = 0;
dHwAgSnsrlsVehDynHwConf.EngMax = 1;
dHwAgSnsrlsVehDynHwConf.InitRowCol = [1  1];


dHwAgSnsrlsWhlSpdHwConf = DataDict.Display;
dHwAgSnsrlsWhlSpdHwConf.LongName = 'Wheel Speed Handwheel Confidence';
dHwAgSnsrlsWhlSpdHwConf.Description = [...
  'It shows the handwheel angle confidence learned from wheel speed.'];
dHwAgSnsrlsWhlSpdHwConf.DocUnits = 'Uls';
dHwAgSnsrlsWhlSpdHwConf.EngDT = dt.float32;
dHwAgSnsrlsWhlSpdHwConf.EngMin = 0;
dHwAgSnsrlsWhlSpdHwConf.EngMax = 1;
dHwAgSnsrlsWhlSpdHwConf.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
CorrdPinionAgHwAgOffs = DataDict.PIM;
CorrdPinionAgHwAgOffs.LongName = 'Corrected Pinion Angle Handwheel Angle Offset';
CorrdPinionAgHwAgOffs.Description = [...
  'It is the offset of the external pinion angle and the relative handwhe' ...
  'el angle. When sensors are lost, use this offset and the motor positio' ...
  'n to calculate the handwheel angle.'];
CorrdPinionAgHwAgOffs.DocUnits = 'HwDeg';
CorrdPinionAgHwAgOffs.EngDT = dt.float32;
CorrdPinionAgHwAgOffs.EngMin = -2880;
CorrdPinionAgHwAgOffs.EngMax = 2880;
CorrdPinionAgHwAgOffs.InitRowCol = [1  1];


CorrdPinionAgHwConf = DataDict.PIM;
CorrdPinionAgHwConf.LongName = 'Corrected Pinion Angle Handwheel Confidence';
CorrdPinionAgHwConf.Description = [...
  'It is the the confidence of the corrected pinion angle, which determin' ...
  'es whether use corrected pinion angle offset or not.'];
CorrdPinionAgHwConf.DocUnits = 'Uls';
CorrdPinionAgHwConf.EngDT = dt.float32;
CorrdPinionAgHwConf.EngMin = 0;
CorrdPinionAgHwConf.EngMax = 1;
CorrdPinionAgHwConf.InitRowCol = [1  1];


FCentrHwAgEna = DataDict.PIM;
FCentrHwAgEna.LongName = 'Force Center Handwheel Angle Enable';
FCentrHwAgEna.Description = [...
  'When force sensorless handwheel center is called, set it to true.'];
FCentrHwAgEna.DocUnits = 'Cnt';
FCentrHwAgEna.EngDT = dt.lgc;
FCentrHwAgEna.EngMin = 0;
FCentrHwAgEna.EngMax = 1;
FCentrHwAgEna.InitRowCol = [1  1];


FCentrHwAgOffs = DataDict.PIM;
FCentrHwAgOffs.LongName = 'Force Center Handwheel Angle Offset';
FCentrHwAgOffs.Description = [...
  'Keep the handwheel angle offset learned in force center.'];
FCentrHwAgOffs.DocUnits = 'HwDeg';
FCentrHwAgOffs.EngDT = dt.float32;
FCentrHwAgOffs.EngMin = -1440;
FCentrHwAgOffs.EngMax = 1440;
FCentrHwAgOffs.InitRowCol = [1  1];


FCentrHwConf = DataDict.PIM;
FCentrHwConf.LongName = 'Force Center Handwheel Confidence';
FCentrHwConf.Description = [...
  'Keep the handwheel angle confidence learned in force center.'];
FCentrHwConf.DocUnits = 'Uls';
FCentrHwConf.EngDT = dt.float32;
FCentrHwConf.EngMin = 0;
FCentrHwConf.EngMax = 1;
FCentrHwConf.InitRowCol = [1  1];


MotAgOffs = DataDict.PIM;
MotAgOffs.LongName = 'Motor Angle Offset';
MotAgOffs.Description = [...
  'Capture the initial motor angle at key on. It is subtracted from motor' ...
  ' angle cumulative aligned CRF to make the relative handwheel angle sta' ...
  'rt from 0.'];
MotAgOffs.DocUnits = 'MotDeg';
MotAgOffs.EngDT = dt.float32;
MotAgOffs.EngMin = -262144;
MotAgOffs.EngMax = 262143.998;
MotAgOffs.InitRowCol = [1  1];


MotAgOffsEna = DataDict.PIM;
MotAgOffsEna.LongName = 'Motor Angle Offset Enable';
MotAgOffsEna.Description = [...
  'It enables to capture the first valid motor angle as the motor angle o' ...
  'ffset.'];
MotAgOffsEna.DocUnits = 'Cnt';
MotAgOffsEna.EngDT = dt.lgc;
MotAgOffsEna.EngMin = 0;
MotAgOffsEna.EngMax = 1;
MotAgOffsEna.InitRowCol = [1  1];


PinionTqFil = DataDict.PIM;
PinionTqFil.LongName = 'Pinion Torque Filter';
PinionTqFil.Description = [...
  'State variable for Pinion Torque lowpass filter.'];
PinionTqFil.DocUnits = 'Uls';
PinionTqFil.EngDT = struct.FilLpRec1;
PinionTqFil.EngMin = [struct('FilSt',-98,'FilGain',0)];
PinionTqFil.EngMax = [struct('FilSt',362,'FilGain',0.0012)];
PinionTqFil.InitRowCol = [1  1];


PrevFildRelHwAg1 = DataDict.PIM;
PrevFildRelHwAg1.LongName = 'Previous Filtered Relative Handwheel Angle 1';
PrevFildRelHwAg1.Description = [...
  'It is the previous filtered relative handwheel angle 1 used when the n' ...
  'ew one is not available.'];
PrevFildRelHwAg1.DocUnits = 'HwDeg';
PrevFildRelHwAg1.EngDT = dt.float32;
PrevFildRelHwAg1.EngMin = -1440;
PrevFildRelHwAg1.EngMax = 1440;
PrevFildRelHwAg1.InitRowCol = [1  1];


PrevHwAgOffs = DataDict.PIM;
PrevHwAgOffs.LongName = 'Previous Handwheel Angle Offset';
PrevHwAgOffs.Description = [...
  'The Handwheel Angle Offset used to calculate the Handwheel Angle in th' ...
  'e last loop.'];
PrevHwAgOffs.DocUnits = 'HwDeg';
PrevHwAgOffs.EngDT = dt.float32;
PrevHwAgOffs.EngMin = -2400;
PrevHwAgOffs.EngMax = 2400;
PrevHwAgOffs.InitRowCol = [1  1];


PrevMaxHwConf = DataDict.PIM;
PrevMaxHwConf.LongName = 'Previous Maximum Handwheel Confidence';
PrevMaxHwConf.Description = [...
  'Maximum Handwheel Angle Confidence in the last loop.'];
PrevMaxHwConf.DocUnits = 'Uls';
PrevMaxHwConf.EngDT = dt.float32;
PrevMaxHwConf.EngMin = 0;
PrevMaxHwConf.EngMax = 1;
PrevMaxHwConf.InitRowCol = [1  1];


PrevSmotngHwAg = DataDict.PIM;
PrevSmotngHwAg.LongName = 'Previous Smoothing Handwheel Angle';
PrevSmotngHwAg.Description = [...
  'It is the previous smoothing handwheel angle used in the smoothing fun' ...
  'ction.'];
PrevSmotngHwAg.DocUnits = 'HwDeg';
PrevSmotngHwAg.EngDT = dt.float32;
PrevSmotngHwAg.EngMin = -4000;
PrevSmotngHwAg.EngMax = 4000;
PrevSmotngHwAg.InitRowCol = [1  1];


PrevSmotngSt = DataDict.PIM;
PrevSmotngSt.LongName = 'Previous Smoothing State';
PrevSmotngSt.Description = [...
  'It is used in the Smoothing function as a flag. If it is true, limit t' ...
  'he change rate of the HwAg; otherwise, output the HwAg directly.'];
PrevSmotngSt.DocUnits = 'Cnt';
PrevSmotngSt.EngDT = dt.lgc;
PrevSmotngSt.EngMin = 0;
PrevSmotngSt.EngMax = 1;
PrevSmotngSt.InitRowCol = [1  1];


PrevVehDynFil1Ena = DataDict.PIM;
PrevVehDynFil1Ena.LongName = 'Previous Vehicle Dynamic Filter 1 Enable';
PrevVehDynFil1Ena.Description = [...
  'It is the previous boolean value of vehicle dynamic filter 1 enable st' ...
  'atus.'];
PrevVehDynFil1Ena.DocUnits = 'Cnt';
PrevVehDynFil1Ena.EngDT = dt.lgc;
PrevVehDynFil1Ena.EngMin = 0;
PrevVehDynFil1Ena.EngMax = 1;
PrevVehDynFil1Ena.InitRowCol = [1  1];


PrevVehDynFil2Ena = DataDict.PIM;
PrevVehDynFil2Ena.LongName = 'Previous Vehicle Dynamic Filter 2 Enable';
PrevVehDynFil2Ena.Description = [...
  'It is the previous boolean value of vehicle dynamic filter 2 enable st' ...
  'atus.'];
PrevVehDynFil2Ena.DocUnits = 'Cnt';
PrevVehDynFil2Ena.EngDT = dt.lgc;
PrevVehDynFil2Ena.EngMin = 0;
PrevVehDynFil2Ena.EngMax = 1;
PrevVehDynFil2Ena.InitRowCol = [1  1];


RelHwAgFil1 = DataDict.PIM;
RelHwAgFil1.LongName = 'Relative Handwheel Angle Filter 1';
RelHwAgFil1.Description = [...
  'State Varible for Realtive Handwheel Angle lowpass filter 1.'];
RelHwAgFil1.DocUnits = 'Uls';
RelHwAgFil1.EngDT = struct.FilLpRec1;
RelHwAgFil1.EngMin = [struct('FilSt',-1440,'FilGain',0)];
RelHwAgFil1.EngMax = [struct('FilSt',1440,'FilGain',0.0012)];
RelHwAgFil1.InitRowCol = [1  1];


RelHwAgFil2 = DataDict.PIM;
RelHwAgFil2.LongName = 'Relative Handwheel Angle Filtered 2';
RelHwAgFil2.Description = [...
  'State Varible for Realtive Handwheel Angle lowpass filter 2.'];
RelHwAgFil2.DocUnits = 'Uls';
RelHwAgFil2.EngDT = struct.FilLpRec1;
RelHwAgFil2.EngMin = [struct('FilSt',-1440,'FilGain',0)];
RelHwAgFil2.EngMax = [struct('FilSt',1440,'FilGain',0.0012)];
RelHwAgFil2.InitRowCol = [1  1];


SelnCaseSt = DataDict.PIM;
SelnCaseSt.LongName = 'Selection Case State';
SelnCaseSt.Description = [...
  'It is used to indicate whether two consecutive loop use the value from' ...
  ' the same method.'];
SelnCaseSt.DocUnits = 'Cnt';
SelnCaseSt.EngDT = enum.SelnCaseSt1;
SelnCaseSt.EngMin = SelnCaseSt1.SELNCASEST_FCENTR;
SelnCaseSt.EngMax = SelnCaseSt1.SELNCASEST_CORRDPINIONAG;
SelnCaseSt.InitRowCol = [1  1];


VehDynHwAgOffs = DataDict.PIM;
VehDynHwAgOffs.LongName = 'Vehicle Dynamic Handwheel Angle Offset';
VehDynHwAgOffs.Description = [...
  'Handwheel Angle Offset learned in Vehicle Dynamic Auto Centering metho' ...
  'd.'];
VehDynHwAgOffs.DocUnits = 'HwDeg';
VehDynHwAgOffs.EngDT = dt.float32;
VehDynHwAgOffs.EngMin = -1440;
VehDynHwAgOffs.EngMax = 1440;
VehDynHwAgOffs.InitRowCol = [1  1];


VehDynRefTmr1 = DataDict.PIM;
VehDynRefTmr1.LongName = 'Vehicle Dynamic Reference Timer 1';
VehDynRefTmr1.Description = [...
  'Reference timer 1 used to record the time span of timer 1.'];
VehDynRefTmr1.DocUnits = 'Cnt';
VehDynRefTmr1.EngDT = dt.u32;
VehDynRefTmr1.EngMin = 0;
VehDynRefTmr1.EngMax = 4294967295;
VehDynRefTmr1.InitRowCol = [1  1];


VehDynRefTmr2 = DataDict.PIM;
VehDynRefTmr2.LongName = 'Vehicle Dynamic Reference Timer 2';
VehDynRefTmr2.Description = [...
  'Reference timer 2 used to record the time span of timer 2.'];
VehDynRefTmr2.DocUnits = 'Cnt';
VehDynRefTmr2.EngDT = dt.u32;
VehDynRefTmr2.EngMin = 0;
VehDynRefTmr2.EngMax = 4294967295;
VehDynRefTmr2.InitRowCol = [1  1];


WhlSpdHwAgLrndEna = DataDict.PIM;
WhlSpdHwAgLrndEna.LongName = 'Wheel Speed Handwheel Angle Learned Enable';
WhlSpdHwAgLrndEna.Description = [...
  'When set to false, disable the handwheel angle learning based on wheel' ...
  ' speed.'];
WhlSpdHwAgLrndEna.DocUnits = 'Cnt';
WhlSpdHwAgLrndEna.EngDT = dt.lgc;
WhlSpdHwAgLrndEna.EngMin = 0;
WhlSpdHwAgLrndEna.EngMax = 1;
WhlSpdHwAgLrndEna.InitRowCol = [1  1];


WhlSpdHwAgOffs = DataDict.PIM;
WhlSpdHwAgOffs.LongName = 'Wheel Speed Handwheel Angle Offset';
WhlSpdHwAgOffs.Description = [...
  'Once the handwheel angle offset learned based on wheel speed, store th' ...
  'e hanwheel angle in PIM.'];
WhlSpdHwAgOffs.DocUnits = 'HwDeg';
WhlSpdHwAgOffs.EngDT = dt.float32;
WhlSpdHwAgOffs.EngMin = -2440;
WhlSpdHwAgOffs.EngMax = 2440;
WhlSpdHwAgOffs.InitRowCol = [1  1];


WhlSpdHwConf = DataDict.PIM;
WhlSpdHwConf.LongName = 'Wheel Speed Handwheel Confidence';
WhlSpdHwConf.Description = [...
  'Once the handwheel angle offset learned based on wheel speed, store th' ...
  'e handwheel angle confidence in PIM.'];
WhlSpdHwConf.DocUnits = 'Uls';
WhlSpdHwConf.EngDT = dt.float32;
WhlSpdHwConf.EngMin = 0;
WhlSpdHwConf.EngMax = 1;
WhlSpdHwConf.InitRowCol = [1  1];


WhlSpdRefTmr = DataDict.PIM;
WhlSpdRefTmr.LongName = 'Wheel Speed Reference Timer';
WhlSpdRefTmr.Description = [...
  'Reference timer used to record the time span of timer for vehicle spee' ...
  'd check.'];
WhlSpdRefTmr.DocUnits = 'Cnt';
WhlSpdRefTmr.EngDT = dt.u32;
WhlSpdRefTmr.EngMin = 0;
WhlSpdRefTmr.EngMax = 4294967295;
WhlSpdRefTmr.InitRowCol = [1  1];


YawRateFil = DataDict.PIM;
YawRateFil.LongName = 'Yaw Rate Filter';
YawRateFil.Description = [...
  'State variable for Vehicle Yaw Rate lowpass filter.'];
YawRateFil.DocUnits = 'Uls';
YawRateFil.EngDT = struct.FilLpRec1;
YawRateFil.EngMin = [struct('FilSt',-120,'FilGain',0.0013)];
YawRateFil.EngMax = [struct('FilSt',120,'FilGain',0.7154)];
YawRateFil.InitRowCol = [1  1];



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


HWAGHILIM_HWDEG_F32 = DataDict.Constant;
HWAGHILIM_HWDEG_F32.LongName = 'Handwheel Angle High Limit';
HWAGHILIM_HWDEG_F32.Description = [...
  'It is the high limit for Handwheel Angle used in the application.'];
HWAGHILIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGHILIM_HWDEG_F32.EngDT = dt.float32;
HWAGHILIM_HWDEG_F32.EngVal = 1440;
HWAGHILIM_HWDEG_F32.Define = 'Local';


HWAGLOLIM_HWDEG_F32 = DataDict.Constant;
HWAGLOLIM_HWDEG_F32.LongName = 'Handwheel Angle Low Limit';
HWAGLOLIM_HWDEG_F32.Description = [...
  'It is the low limit for Handwheel Angle used in the application.'];
HWAGLOLIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGLOLIM_HWDEG_F32.EngDT = dt.float32;
HWAGLOLIM_HWDEG_F32.EngVal = -1440;
HWAGLOLIM_HWDEG_F32.Define = 'Local';


HWCONFHILIM_ULS_F32 = DataDict.Constant;
HWCONFHILIM_ULS_F32.LongName = 'Handwheel Confidence High Limit';
HWCONFHILIM_ULS_F32.Description = [...
  'It is the high limit for Handwheel angle confidence used in the applic' ...
  'ation.'];
HWCONFHILIM_ULS_F32.DocUnits = 'Uls';
HWCONFHILIM_ULS_F32.EngDT = dt.float32;
HWCONFHILIM_ULS_F32.EngVal = 1;
HWCONFHILIM_ULS_F32.Define = 'Local';


HWCONFLOLIM_ULS_F32 = DataDict.Constant;
HWCONFLOLIM_ULS_F32.LongName = 'Handwheel Confidence Low Limit';
HWCONFLOLIM_ULS_F32.Description = [...
  'It is the low limit for Handwheel angle confidence used in the applica' ...
  'tion.'];
HWCONFLOLIM_ULS_F32.DocUnits = 'Uls';
HWCONFLOLIM_ULS_F32.EngDT = dt.float32;
HWCONFLOLIM_ULS_F32.EngVal = 0;
HWCONFLOLIM_ULS_F32.Define = 'Local';


IMCARBN_HWAGSNSRLSPINIONAGCONF_CNT_U16 = DataDict.Constant;
IMCARBN_HWAGSNSRLSPINIONAGCONF_CNT_U16.LongName = 'Inter Micro Communication Pinion Angle Confidence';
IMCARBN_HWAGSNSRLSPINIONAGCONF_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_HWAGSNSRLSPINIONAGCONF_CNT_U16.DocUnits = 'Cnt';
IMCARBN_HWAGSNSRLSPINIONAGCONF_CNT_U16.EngDT = dt.u16;
IMCARBN_HWAGSNSRLSPINIONAGCONF_CNT_U16.EngVal = 80;
IMCARBN_HWAGSNSRLSPINIONAGCONF_CNT_U16.Define = 'Global';


IMCARBN_HWAGSNSRLSPINIONAG_CNT_U16 = DataDict.Constant;
IMCARBN_HWAGSNSRLSPINIONAG_CNT_U16.LongName = 'Inter Micro Communication Pinion Angle';
IMCARBN_HWAGSNSRLSPINIONAG_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_HWAGSNSRLSPINIONAG_CNT_U16.DocUnits = 'Cnt';
IMCARBN_HWAGSNSRLSPINIONAG_CNT_U16.EngDT = dt.u16;
IMCARBN_HWAGSNSRLSPINIONAG_CNT_U16.EngVal = 11;
IMCARBN_HWAGSNSRLSPINIONAG_CNT_U16.Define = 'Global';


MILLISECTO100MICROSEC_ULS_U32 = DataDict.Constant;
MILLISECTO100MICROSEC_ULS_U32.LongName = 'Milli Second to 100 Micro Second';
MILLISECTO100MICROSEC_ULS_U32.Description = [...
  'Convert Millisecond to 100 Microsecond to compare the time span with t' ...
  'he timer threshold.'];
MILLISECTO100MICROSEC_ULS_U32.DocUnits = 'Uls';
MILLISECTO100MICROSEC_ULS_U32.EngDT = dt.u32;
MILLISECTO100MICROSEC_ULS_U32.EngVal = 10;
MILLISECTO100MICROSEC_ULS_U32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
