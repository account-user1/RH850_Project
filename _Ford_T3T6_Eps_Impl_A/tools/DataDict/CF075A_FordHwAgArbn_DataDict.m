%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 09-Jan-2018 01:54:17       %
%                                  Created with tool release: 3.2.0      %
%                                  Synergy file: %version: 6 %           %
%                                  Derived by: %derived_by: fzg88y %          %
%%-----------------------------------------------------------------------%

CF075A = DataDict.FDD;
CF075A.Version = '1.1.X';
CF075A.LongName = 'Ford Handwheel Angle Arbitration';
CF075A.ShoName  = 'FordHwAgArbn';
CF075A.DesignASIL = 'B';
CF075A.Description = [...
  'The purpose of Ford Handwheel Angle Arbitration is to use brakes data ' ...
  'for position andcenter for Eletric Power Steering functionality.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordHwAgArbnInit1 = DataDict.Runnable;
FordHwAgArbnInit1.Context = 'Rte';
FordHwAgArbnInit1.TimeStep = 0;
FordHwAgArbnInit1.Description = 'Initialization Runnable';

FordHwAgArbnPer1 = DataDict.Runnable;
FordHwAgArbnPer1.Context = 'Rte';
FordHwAgArbnPer1.TimeStep = 0.001;
FordHwAgArbnPer1.Description = [...
  'Periodic Runnable at 1 milli-seconds'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordHwAgArbnInit1','FordHwAgArbnPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'It captures simulation time from the SimnTi value obtained at root lay' ...
  'er of model and gives the RefTmr.'];
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordHwAgArbnPer1'};
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


NonAbsOffsVldFlg_GetErrorStatus = DataDict.Client;
NonAbsOffsVldFlg_GetErrorStatus.CallLocation = {'FordHwAgArbnInit1'};
NonAbsOffsVldFlg_GetErrorStatus.Description = [...
  'It is used to determine if the data in the RAM shadow for a NVM block ' ...
  'is valid.'];
NonAbsOffsVldFlg_GetErrorStatus.Return = DataDict.CSReturn;
NonAbsOffsVldFlg_GetErrorStatus.Return.Type = 'Standard';
NonAbsOffsVldFlg_GetErrorStatus.Return.Min = 0;
NonAbsOffsVldFlg_GetErrorStatus.Return.Max = 1;
NonAbsOffsVldFlg_GetErrorStatus.Return.TestTolerance = 0;
NonAbsOffsVldFlg_GetErrorStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
NonAbsOffsVldFlg_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
NonAbsOffsVldFlg_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
NonAbsOffsVldFlg_GetErrorStatus.Arguments(1).EngDT = dt.u08;
NonAbsOffsVldFlg_GetErrorStatus.Arguments(1).EngMin = 0;
NonAbsOffsVldFlg_GetErrorStatus.Arguments(1).EngMax = 8;
NonAbsOffsVldFlg_GetErrorStatus.Arguments(1).TestTolerance = 0;
NonAbsOffsVldFlg_GetErrorStatus.Arguments(1).Units = 'Cnt';
NonAbsOffsVldFlg_GetErrorStatus.Arguments(1).Direction = 'Out';
NonAbsOffsVldFlg_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
NonAbsOffsVldFlg_GetErrorStatus.Arguments(1).Description = [...
  'Pointer to where the result shall be written.'];


NonAbsOffsVldFlg_SetRamBlockStatus = DataDict.Client;
NonAbsOffsVldFlg_SetRamBlockStatus.CallLocation = {'FordHwAgArbnInit1','FordHwAgArbnPer1'};
NonAbsOffsVldFlg_SetRamBlockStatus.Description = [...
  'It is used to notify NVM that the contents of the RAM shadow have chan' ...
  'ged and the components desire to save that data.'];
NonAbsOffsVldFlg_SetRamBlockStatus.Return = DataDict.CSReturn;
NonAbsOffsVldFlg_SetRamBlockStatus.Return.Type = 'Standard';
NonAbsOffsVldFlg_SetRamBlockStatus.Return.Min = 0;
NonAbsOffsVldFlg_SetRamBlockStatus.Return.Max = 1;
NonAbsOffsVldFlg_SetRamBlockStatus.Return.TestTolerance = 0;
NonAbsOffsVldFlg_SetRamBlockStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
NonAbsOffsVldFlg_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
NonAbsOffsVldFlg_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
NonAbsOffsVldFlg_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
NonAbsOffsVldFlg_SetRamBlockStatus.Arguments(1).EngMin = 0;
NonAbsOffsVldFlg_SetRamBlockStatus.Arguments(1).EngMax = 1;
NonAbsOffsVldFlg_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
NonAbsOffsVldFlg_SetRamBlockStatus.Arguments(1).Direction = 'In';
NonAbsOffsVldFlg_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
NonAbsOffsVldFlg_SetRamBlockStatus.Arguments(1).Description = [...
  'Boolean value to queue the NVM update during shutdown.'];


NonAbsOffs_GetErrorStatus = DataDict.Client;
NonAbsOffs_GetErrorStatus.CallLocation = {'FordHwAgArbnInit1'};
NonAbsOffs_GetErrorStatus.Description = [...
  'It is used to determine if the data in the RAM shadow for a NVM block ' ...
  'is valid.'];
NonAbsOffs_GetErrorStatus.Return = DataDict.CSReturn;
NonAbsOffs_GetErrorStatus.Return.Type = 'Standard';
NonAbsOffs_GetErrorStatus.Return.Min = 0;
NonAbsOffs_GetErrorStatus.Return.Max = 1;
NonAbsOffs_GetErrorStatus.Return.TestTolerance = 0;
NonAbsOffs_GetErrorStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
NonAbsOffs_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
NonAbsOffs_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
NonAbsOffs_GetErrorStatus.Arguments(1).EngDT = dt.u08;
NonAbsOffs_GetErrorStatus.Arguments(1).EngMin = 0;
NonAbsOffs_GetErrorStatus.Arguments(1).EngMax = 8;
NonAbsOffs_GetErrorStatus.Arguments(1).TestTolerance = 999;
NonAbsOffs_GetErrorStatus.Arguments(1).Units = 'Cnt';
NonAbsOffs_GetErrorStatus.Arguments(1).Direction = 'Out';
NonAbsOffs_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
NonAbsOffs_GetErrorStatus.Arguments(1).Description = [...
  'Pointer to where the result shall be written.'];


NonAbsOffs_SetRamBlockStatus = DataDict.Client;
NonAbsOffs_SetRamBlockStatus.CallLocation = {'FordHwAgArbnInit1','FordHwAgArbnPer1'};
NonAbsOffs_SetRamBlockStatus.Description = [...
  'It is used to notify NVM that the contents of the RAM shadow have chan' ...
  'ged and the components desire to save that data.'];
NonAbsOffs_SetRamBlockStatus.Return = DataDict.CSReturn;
NonAbsOffs_SetRamBlockStatus.Return.Type = 'Standard';
NonAbsOffs_SetRamBlockStatus.Return.Min = 0;
NonAbsOffs_SetRamBlockStatus.Return.Max = 1;
NonAbsOffs_SetRamBlockStatus.Return.TestTolerance = 0;
NonAbsOffs_SetRamBlockStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
NonAbsOffs_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
NonAbsOffs_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
NonAbsOffs_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
NonAbsOffs_SetRamBlockStatus.Arguments(1).EngMin = 0;
NonAbsOffs_SetRamBlockStatus.Arguments(1).EngMax = 1;
NonAbsOffs_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
NonAbsOffs_SetRamBlockStatus.Arguments(1).Direction = 'In';
NonAbsOffs_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
NonAbsOffs_SetRamBlockStatus.Arguments(1).Description = [...
  'Boolean value to queue the NVM update during shutdown.'];


PrevIgnCycVal_GetErrorStatus = DataDict.Client;
PrevIgnCycVal_GetErrorStatus.CallLocation = {'FordHwAgArbnInit1'};
PrevIgnCycVal_GetErrorStatus.Description = [...
  'It is used to determine if the data in the RAM shadow for a NVM block ' ...
  'is valid.'];
PrevIgnCycVal_GetErrorStatus.Return = DataDict.CSReturn;
PrevIgnCycVal_GetErrorStatus.Return.Type = 'Standard';
PrevIgnCycVal_GetErrorStatus.Return.Min = 0;
PrevIgnCycVal_GetErrorStatus.Return.Max = 1;
PrevIgnCycVal_GetErrorStatus.Return.TestTolerance = 0;
PrevIgnCycVal_GetErrorStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
PrevIgnCycVal_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
PrevIgnCycVal_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
PrevIgnCycVal_GetErrorStatus.Arguments(1).EngDT = dt.u08;
PrevIgnCycVal_GetErrorStatus.Arguments(1).EngMin = 0;
PrevIgnCycVal_GetErrorStatus.Arguments(1).EngMax = 8;
PrevIgnCycVal_GetErrorStatus.Arguments(1).TestTolerance = 999;
PrevIgnCycVal_GetErrorStatus.Arguments(1).Units = 'Cnt';
PrevIgnCycVal_GetErrorStatus.Arguments(1).Direction = 'Out';
PrevIgnCycVal_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
PrevIgnCycVal_GetErrorStatus.Arguments(1).Description = [...
  'Pointer to where the result shall be written.'];


PrevIgnCycVal_SetRamBlockStatus = DataDict.Client;
PrevIgnCycVal_SetRamBlockStatus.CallLocation = {'FordHwAgArbnPer1'};
PrevIgnCycVal_SetRamBlockStatus.Description = [...
  'It is used to notify NVM that the contents of the RAM shadow have chan' ...
  'ged and the components desire to save that data.'];
PrevIgnCycVal_SetRamBlockStatus.Return = DataDict.CSReturn;
PrevIgnCycVal_SetRamBlockStatus.Return.Type = 'Standard';
PrevIgnCycVal_SetRamBlockStatus.Return.Min = 0;
PrevIgnCycVal_SetRamBlockStatus.Return.Max = 1;
PrevIgnCycVal_SetRamBlockStatus.Return.TestTolerance = 0;
PrevIgnCycVal_SetRamBlockStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
PrevIgnCycVal_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
PrevIgnCycVal_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
PrevIgnCycVal_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
PrevIgnCycVal_SetRamBlockStatus.Arguments(1).EngMin = 0;
PrevIgnCycVal_SetRamBlockStatus.Arguments(1).EngMax = 1;
PrevIgnCycVal_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
PrevIgnCycVal_SetRamBlockStatus.Arguments(1).Direction = 'In';
PrevIgnCycVal_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
PrevIgnCycVal_SetRamBlockStatus.Arguments(1).Description = [...
  'Boolean value to queue the NVM update during shutdown.'];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'FordHwAgArbnInit1','FordHwAgArbnPer1'};
SetNtcSts.Description = 'Set the NTC status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'Returns the NTC Qualifier status';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'Contains NTC number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = [...
  'Provides the Parameter byte information'];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'Pass the current NTC Status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = [...
  'Used to Implements ISO based error accumulator strategy'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
FordAbsPrsnt = DataDict.IpSignal;
FordAbsPrsnt.LongName = 'Ford ABS Present';
FordAbsPrsnt.Description = [...
  'This signal is used to decide ABS feature is present or not'];
FordAbsPrsnt.DocUnits = 'Cnt';
FordAbsPrsnt.EngDT = dt.lgc;
FordAbsPrsnt.EngInit = 1;
FordAbsPrsnt.EngMin = 0;
FordAbsPrsnt.EngMax = 1;
FordAbsPrsnt.ReadIn = {'FordHwAgArbnPer1'};
FordAbsPrsnt.ReadType = 'Rte';


FordEngVehSpd = DataDict.IpSignal;
FordEngVehSpd.LongName = 'Ford Engine Vehicle Speed';
FordEngVehSpd.Description = [...
  'This signal is used to detect vehicle speed'];
FordEngVehSpd.DocUnits = 'Kph';
FordEngVehSpd.EngDT = dt.u08;
FordEngVehSpd.EngInit = 0;
FordEngVehSpd.EngMin = 0;
FordEngVehSpd.EngMax = 255;
FordEngVehSpd.ReadIn = {'FordHwAgArbnPer1'};
FordEngVehSpd.ReadType = 'Rte';


FordEpsEna = DataDict.IpSignal;
FordEpsEna.LongName = 'Ford EPS Enable';
FordEpsEna.Description = [...
  'This signal is used to decide EPS is enable or not'];
FordEpsEna.DocUnits = 'Cnt';
FordEpsEna.EngDT = dt.u08;
FordEpsEna.EngInit = 1;
FordEpsEna.EngMin = 0;
FordEpsEna.EngMax = 1;
FordEpsEna.ReadIn = {'FordHwAgArbnPer1'};
FordEpsEna.ReadType = 'Rte';


FordInpTq = DataDict.IpSignal;
FordInpTq.LongName = 'Ford Input Torque';
FordInpTq.Description = [...
  'This signal is used to detect input torque value'];
FordInpTq.DocUnits = 'HwNwtMtr';
FordInpTq.EngDT = dt.float32;
FordInpTq.EngInit = 0;
FordInpTq.EngMin = -10;
FordInpTq.EngMax = 10;
FordInpTq.ReadIn = {'FordHwAgArbnPer1'};
FordInpTq.ReadType = 'Rte';


FordMotPosn = DataDict.IpSignal;
FordMotPosn.LongName = 'Ford Motor Position';
FordMotPosn.Description = 'This signal is used to detect ';
FordMotPosn.DocUnits = 'MotDeg';
FordMotPosn.EngDT = dt.float32;
FordMotPosn.EngInit = 0;
FordMotPosn.EngMin = -65535;
FordMotPosn.EngMax = 65535;
FordMotPosn.ReadIn = {'FordHwAgArbnPer1'};
FordMotPosn.ReadType = 'Rte';


FordMotVelVld = DataDict.IpSignal;
FordMotVelVld.LongName = 'Ford Motor Velocity Valid';
FordMotVelVld.Description = [...
  'This signal is used to check the validity of Motor Velocity'];
FordMotVelVld.DocUnits = 'Cnt';
FordMotVelVld.EngDT = dt.lgc;
FordMotVelVld.EngInit = 0;
FordMotVelVld.EngMin = 0;
FordMotVelVld.EngMax = 1;
FordMotVelVld.ReadIn = {'FordHwAgArbnPer1'};
FordMotVelVld.ReadType = 'Rte';


FordSnsrInp = DataDict.IpSignal;
FordSnsrInp.LongName = 'Ford Sensor Input';
FordSnsrInp.Description = [...
  'This signal is used to detect input sensor value'];
FordSnsrInp.DocUnits = 'HwDeg';
FordSnsrInp.EngDT = dt.float32;
FordSnsrInp.EngInit = 0;
FordSnsrInp.EngMin = -65535;
FordSnsrInp.EngMax = 65535;
FordSnsrInp.ReadIn = {'FordHwAgArbnPer1'};
FordSnsrInp.ReadType = 'Rte';


FordSteerAgClrFlg = DataDict.IpSignal;
FordSteerAgClrFlg.LongName = 'Ford Steering Angle Clear Flag';
FordSteerAgClrFlg.Description = 'This signal is used to ';
FordSteerAgClrFlg.DocUnits = 'Cnt';
FordSteerAgClrFlg.EngDT = dt.lgc;
FordSteerAgClrFlg.EngInit = 1;
FordSteerAgClrFlg.EngMin = 0;
FordSteerAgClrFlg.EngMax = 1;
FordSteerAgClrFlg.ReadIn = {'FordHwAgArbnPer1'};
FordSteerAgClrFlg.ReadType = 'Rte';


FordSteerPinionOffs = DataDict.IpSignal;
FordSteerPinionOffs.LongName = 'Ford Steering Pinion Offset';
FordSteerPinionOffs.Description = [...
  'This signal is used to detect Steering Pinion Offset Value'];
FordSteerPinionOffs.DocUnits = 'HwDeg';
FordSteerPinionOffs.EngDT = dt.float32;
FordSteerPinionOffs.EngInit = 0;
FordSteerPinionOffs.EngMin = -65535;
FordSteerPinionOffs.EngMax = 65535;
FordSteerPinionOffs.ReadIn = {'FordHwAgArbnPer1'};
FordSteerPinionOffs.ReadType = 'Rte';


FordSteerPinionOffsSts = DataDict.IpSignal;
FordSteerPinionOffsSts.LongName = 'Ford Steering Pinion Offset Status';
FordSteerPinionOffsSts.Description = [...
  'This Signal is used to check the status of Steering Pinion Offset.'];
FordSteerPinionOffsSts.DocUnits = 'Cnt';
FordSteerPinionOffsSts.EngDT = enum.Ford_StePinOffst_D_Stat;
FordSteerPinionOffsSts.EngInit = Ford_StePinOffst_D_Stat.Cx0_OffsetNotCalculated;
FordSteerPinionOffsSts.EngMin = Ford_StePinOffst_D_Stat.Cx0_OffsetNotCalculated;
FordSteerPinionOffsSts.EngMax = Ford_StePinOffst_D_Stat.Cx3_FineOffset;
FordSteerPinionOffsSts.ReadIn = {'FordHwAgArbnPer1'};
FordSteerPinionOffsSts.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordCmpdHwPosn = DataDict.OpSignal;
FordCmpdHwPosn.LongName = 'Ford Compensated Handwheel Position';
FordCmpdHwPosn.Description = [...
  'This signal indicate the Compensated Handwheel Position'];
FordCmpdHwPosn.DocUnits = 'HwDeg';
FordCmpdHwPosn.SwcShoName = 'FordHwAgArbn';
FordCmpdHwPosn.EngDT = dt.float32;
FordCmpdHwPosn.EngInit = 0;
FordCmpdHwPosn.EngMin = -65535;
FordCmpdHwPosn.EngMax = 65535;
FordCmpdHwPosn.TestTolerance = 0.0005;
FordCmpdHwPosn.WrittenIn = {'FordHwAgArbnPer1'};
FordCmpdHwPosn.WriteType = 'Rte';


FordCmpdHwPosnQlyFac = DataDict.OpSignal;
FordCmpdHwPosnQlyFac.LongName = 'Ford Compensated Handwheel Position Quality Factor';
FordCmpdHwPosnQlyFac.Description = [...
  'This signal indicate the quality factor of Compensated Handwheel Posit' ...
  'ion'];
FordCmpdHwPosnQlyFac.DocUnits = 'Cnt';
FordCmpdHwPosnQlyFac.SwcShoName = 'FordHwAgArbn';
FordCmpdHwPosnQlyFac.EngDT = enum.Ford_StePinCompAnEst_D_Qf;
FordCmpdHwPosnQlyFac.EngInit = Ford_StePinCompAnEst_D_Qf.Cx1_No_Data_Exists;
FordCmpdHwPosnQlyFac.EngMin = Ford_StePinCompAnEst_D_Qf.Cx0_Faulty;
FordCmpdHwPosnQlyFac.EngMax = Ford_StePinCompAnEst_D_Qf.Cx3_OK;
FordCmpdHwPosnQlyFac.TestTolerance = 0;
FordCmpdHwPosnQlyFac.WrittenIn = {'FordHwAgArbnPer1'};
FordCmpdHwPosnQlyFac.WriteType = 'Rte';


FordHwVelVld = DataDict.OpSignal;
FordHwVelVld.LongName = 'Ford Handwheel Velocity Valid';
FordHwVelVld.Description = [...
  'This signal is used to check the validity of Handwheel Velocity'];
FordHwVelVld.DocUnits = 'Cnt';
FordHwVelVld.SwcShoName = 'FordHwAgArbn';
FordHwVelVld.EngDT = dt.lgc;
FordHwVelVld.EngInit = 0;
FordHwVelVld.EngMin = 0;
FordHwVelVld.EngMax = 1;
FordHwVelVld.TestTolerance = 0;
FordHwVelVld.WrittenIn = {'FordHwAgArbnPer1'};
FordHwVelVld.WriteType = 'Rte';


FordPosnOffsVld = DataDict.OpSignal;
FordPosnOffsVld.LongName = 'Ford Position Offset Valid';
FordPosnOffsVld.Description = [...
  'This signal is used to check the validity of Position Offset'];
FordPosnOffsVld.DocUnits = 'Cnt';
FordPosnOffsVld.SwcShoName = 'FordHwAgArbn';
FordPosnOffsVld.EngDT = dt.lgc;
FordPosnOffsVld.EngInit = 0;
FordPosnOffsVld.EngMin = 0;
FordPosnOffsVld.EngMax = 1;
FordPosnOffsVld.TestTolerance = 0;
FordPosnOffsVld.WrittenIn = {'FordHwAgArbnPer1'};
FordPosnOffsVld.WriteType = 'Rte';


FordRelHwPosn = DataDict.OpSignal;
FordRelHwPosn.LongName = 'Ford Relative Handwheel Position';
FordRelHwPosn.Description = [...
  'This signal indicate the Relative Handwheel Position'];
FordRelHwPosn.DocUnits = 'HwDeg';
FordRelHwPosn.SwcShoName = 'FordHwAgArbn';
FordRelHwPosn.EngDT = dt.float32;
FordRelHwPosn.EngInit = 0;
FordRelHwPosn.EngMin = -65535;
FordRelHwPosn.EngMax = 65535;
FordRelHwPosn.TestTolerance = 0.0005;
FordRelHwPosn.WrittenIn = {'FordHwAgArbnPer1'};
FordRelHwPosn.WriteType = 'Rte';


FordRelHwPosnVld = DataDict.OpSignal;
FordRelHwPosnVld.LongName = 'Ford Relative Handwheel Position Valid';
FordRelHwPosnVld.Description = [...
  'This signal is used to check the validity of Relative Handwheel Positi' ...
  'on'];
FordRelHwPosnVld.DocUnits = 'Cnt';
FordRelHwPosnVld.SwcShoName = 'FordHwAgArbn';
FordRelHwPosnVld.EngDT = dt.lgc;
FordRelHwPosnVld.EngInit = 0;
FordRelHwPosnVld.EngMin = 0;
FordRelHwPosnVld.EngMax = 1;
FordRelHwPosnVld.TestTolerance = 0;
FordRelHwPosnVld.WrittenIn = {'FordHwAgArbnPer1'};
FordRelHwPosnVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
FordSnsrOutp = DataDict.IRV;
FordSnsrOutp.LongName = 'Ford Sensor Output';
FordSnsrOutp.Description = 'Ford Sensor Output';
FordSnsrOutp.DocUnits = 'MotNwtMtr';
FordSnsrOutp.EngDT = dt.float32;
FordSnsrOutp.EngInit = 0;
FordSnsrOutp.EngMin = -65535;
FordSnsrOutp.EngMax = 65535;
FordSnsrOutp.ReadIn = {'FordHwAgArbnPer1'};
FordSnsrOutp.WrittenIn = {'FordHwAgArbnInit1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordHwAgArbnMotVelVldFlgRcvrTiThd = DataDict.Calibration;
FordHwAgArbnMotVelVldFlgRcvrTiThd.LongName = 'Motor Velocity Valid Flag Recover Time Threshold';
FordHwAgArbnMotVelVldFlgRcvrTiThd.Description = [...
  'Threshold to set Motor Velocity Valid Flag to true'];
FordHwAgArbnMotVelVldFlgRcvrTiThd.DocUnits = 'MilliSec';
FordHwAgArbnMotVelVldFlgRcvrTiThd.EngDT = dt.u16;
FordHwAgArbnMotVelVldFlgRcvrTiThd.EngVal = 30000;
FordHwAgArbnMotVelVldFlgRcvrTiThd.EngMin = 0;
FordHwAgArbnMotVelVldFlgRcvrTiThd.EngMax = 65535;
FordHwAgArbnMotVelVldFlgRcvrTiThd.Cardinality = 'Cmn';
FordHwAgArbnMotVelVldFlgRcvrTiThd.CustomerVisible = false;
FordHwAgArbnMotVelVldFlgRcvrTiThd.Online = false;
FordHwAgArbnMotVelVldFlgRcvrTiThd.Impact = 'H';
FordHwAgArbnMotVelVldFlgRcvrTiThd.TuningOwner = 'EPDT';
FordHwAgArbnMotVelVldFlgRcvrTiThd.GraphLink = {''};
FordHwAgArbnMotVelVldFlgRcvrTiThd.Monotony = 'None';
FordHwAgArbnMotVelVldFlgRcvrTiThd.MaxGrad = 0;
FordHwAgArbnMotVelVldFlgRcvrTiThd.PortName = 'FordHwAgArbnMotVelVldFlgRcvrTiThd';


FordHwAgArbnNonAbsCentrNotDetdTiThd = DataDict.Calibration;
FordHwAgArbnNonAbsCentrNotDetdTiThd.LongName = 'Non Abs Center Not Detected Timer Threshold';
FordHwAgArbnNonAbsCentrNotDetdTiThd.Description = [...
  'Timer Threshold to check the conditions for Ntc0x0E1 Fail for callibra' ...
  'table time'];
FordHwAgArbnNonAbsCentrNotDetdTiThd.DocUnits = 'MilliSec';
FordHwAgArbnNonAbsCentrNotDetdTiThd.EngDT = dt.u16;
FordHwAgArbnNonAbsCentrNotDetdTiThd.EngVal = 30000;
FordHwAgArbnNonAbsCentrNotDetdTiThd.EngMin = 0;
FordHwAgArbnNonAbsCentrNotDetdTiThd.EngMax = 65535;
FordHwAgArbnNonAbsCentrNotDetdTiThd.Cardinality = 'Cmn';
FordHwAgArbnNonAbsCentrNotDetdTiThd.CustomerVisible = false;
FordHwAgArbnNonAbsCentrNotDetdTiThd.Online = false;
FordHwAgArbnNonAbsCentrNotDetdTiThd.Impact = 'H';
FordHwAgArbnNonAbsCentrNotDetdTiThd.TuningOwner = 'EPDT';
FordHwAgArbnNonAbsCentrNotDetdTiThd.GraphLink = {''};
FordHwAgArbnNonAbsCentrNotDetdTiThd.Monotony = 'None';
FordHwAgArbnNonAbsCentrNotDetdTiThd.MaxGrad = 0;
FordHwAgArbnNonAbsCentrNotDetdTiThd.PortName = 'FordHwAgArbnNonAbsCentrNotDetdTiThd';


FordHwAgArbnPhyRackTrvlThd = DataDict.Calibration;
FordHwAgArbnPhyRackTrvlThd.LongName = 'Physical Rack Travel Threshold';
FordHwAgArbnPhyRackTrvlThd.Description = 'Threshold to set the NTC 0xE0';
FordHwAgArbnPhyRackTrvlThd.DocUnits = 'HwDeg';
FordHwAgArbnPhyRackTrvlThd.EngDT = dt.float32;
FordHwAgArbnPhyRackTrvlThd.EngVal = 65535;
FordHwAgArbnPhyRackTrvlThd.EngMin = 0;
FordHwAgArbnPhyRackTrvlThd.EngMax = 65535;
FordHwAgArbnPhyRackTrvlThd.Cardinality = 'Cmn';
FordHwAgArbnPhyRackTrvlThd.CustomerVisible = false;
FordHwAgArbnPhyRackTrvlThd.Online = false;
FordHwAgArbnPhyRackTrvlThd.Impact = 'H';
FordHwAgArbnPhyRackTrvlThd.TuningOwner = 'EPDT';
FordHwAgArbnPhyRackTrvlThd.GraphLink = {''};
FordHwAgArbnPhyRackTrvlThd.Monotony = 'None';
FordHwAgArbnPhyRackTrvlThd.MaxGrad = 0;
FordHwAgArbnPhyRackTrvlThd.PortName = 'FordHwAgArbnPhyRackTrvlThd';


FordHwAgArbnRelPosnVldFlgRcvryTiThd = DataDict.Calibration;
FordHwAgArbnRelPosnVldFlgRcvryTiThd.LongName = 'Relative Position Valid Flag Recovery Time Threshold';
FordHwAgArbnRelPosnVldFlgRcvryTiThd.Description = [...
  'Threshold to set Relative Handwheel Position Valid Flag to true.'];
FordHwAgArbnRelPosnVldFlgRcvryTiThd.DocUnits = 'MilliSec';
FordHwAgArbnRelPosnVldFlgRcvryTiThd.EngDT = dt.u16;
FordHwAgArbnRelPosnVldFlgRcvryTiThd.EngVal = 0;
FordHwAgArbnRelPosnVldFlgRcvryTiThd.EngMin = 0;
FordHwAgArbnRelPosnVldFlgRcvryTiThd.EngMax = 65535;
FordHwAgArbnRelPosnVldFlgRcvryTiThd.Cardinality = 'Cmn';
FordHwAgArbnRelPosnVldFlgRcvryTiThd.CustomerVisible = false;
FordHwAgArbnRelPosnVldFlgRcvryTiThd.Online = false;
FordHwAgArbnRelPosnVldFlgRcvryTiThd.Impact = 'H';
FordHwAgArbnRelPosnVldFlgRcvryTiThd.TuningOwner = 'EPDT';
FordHwAgArbnRelPosnVldFlgRcvryTiThd.GraphLink = {''};
FordHwAgArbnRelPosnVldFlgRcvryTiThd.Monotony = 'None';
FordHwAgArbnRelPosnVldFlgRcvryTiThd.MaxGrad = 0;
FordHwAgArbnRelPosnVldFlgRcvryTiThd.PortName = 'FordHwAgArbnRelPosnVldFlgRcvryTiThd';



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
  'SysGlbPrmSysKineRat is used to convert from Motor Newton Meters to Han' ...
  'dwheel Newton Meters'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
NonAbsOffs = DataDict.NVM;
NonAbsOffs.LongName = 'Non ABS Offset';
NonAbsOffs.Description = [...
  'It is used to derive output FordCmpdHwPosn when NonABSOfstVldFlgSts is' ...
  ' true'];
NonAbsOffs.DocUnits = 'HwDeg';
NonAbsOffs.EngDT = dt.float32;
NonAbsOffs.EngInit = 0;
NonAbsOffs.EngMin = -65535;
NonAbsOffs.EngMax = 65535;
NonAbsOffs.CustomerVisible = false;
NonAbsOffs.Impact = 'H';
NonAbsOffs.TuningOwner = 'EPDT';
NonAbsOffs.InitRowCol = [1  1];


NonAbsOffsVldFlg = DataDict.NVM;
NonAbsOffsVldFlg.LongName = 'Non ABS Offset Valid flag';
NonAbsOffsVldFlg.Description = [...
  'It is used to derive output FordCmpdHwPosn when NonABSOfstVldFlgSts is' ...
  ' true'];
NonAbsOffsVldFlg.DocUnits = 'Cnt';
NonAbsOffsVldFlg.EngDT = dt.lgc;
NonAbsOffsVldFlg.EngInit = 0;
NonAbsOffsVldFlg.EngMin = 0;
NonAbsOffsVldFlg.EngMax = 1;
NonAbsOffsVldFlg.CustomerVisible = false;
NonAbsOffsVldFlg.Impact = 'H';
NonAbsOffsVldFlg.TuningOwner = 'EPDT';
NonAbsOffsVldFlg.InitRowCol = [1  1];


PrevIgnCycVal = DataDict.NVM;
PrevIgnCycVal.LongName = 'Previous Ignition Cycle Value';
PrevIgnCycVal.Description = [...
  'Relative Handwheel Position shall be carried over from the previous ig' ...
  'nition cycle'];
PrevIgnCycVal.DocUnits = 'HwDeg';
PrevIgnCycVal.EngDT = dt.float32;
PrevIgnCycVal.EngInit = 0;
PrevIgnCycVal.EngMin = -65535;
PrevIgnCycVal.EngMax = 65535;
PrevIgnCycVal.CustomerVisible = false;
PrevIgnCycVal.Impact = 'H';
PrevIgnCycVal.TuningOwner = 'EPDT';
PrevIgnCycVal.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
FirstTranVldFlg = DataDict.PIM;
FirstTranVldFlg.LongName = 'First Transition Valid Flag';
FirstTranVldFlg.Description = [...
  'This flag is used to indicate the reception of first message'];
FirstTranVldFlg.DocUnits = 'Cnt';
FirstTranVldFlg.EngDT = dt.lgc;
FirstTranVldFlg.EngMin = 0;
FirstTranVldFlg.EngMax = 1;
FirstTranVldFlg.InitRowCol = [1  1];


FordCmpdHwPosnPrev = DataDict.PIM;
FordCmpdHwPosnPrev.LongName = 'Ford Compensated Handwheel Position Previous';
FordCmpdHwPosnPrev.Description = [...
  'Previous value of Compensated Handwheel Position'];
FordCmpdHwPosnPrev.DocUnits = 'HwDeg';
FordCmpdHwPosnPrev.EngDT = dt.float32;
FordCmpdHwPosnPrev.EngMin = -65535;
FordCmpdHwPosnPrev.EngMax = 65535;
FordCmpdHwPosnPrev.InitRowCol = [1  1];


FordCmpdHwPosnQlyFacPrev = DataDict.PIM;
FordCmpdHwPosnQlyFacPrev.LongName = 'Compensated Handwheel Position Quality Factor Previous';
FordCmpdHwPosnQlyFacPrev.Description = [...
  'Previous value of Compensated Handwheel Position Quality Factor'];
FordCmpdHwPosnQlyFacPrev.DocUnits = 'Cnt';
FordCmpdHwPosnQlyFacPrev.EngDT = enum.Ford_StePinCompAnEst_D_Qf;
FordCmpdHwPosnQlyFacPrev.EngMin = Ford_StePinCompAnEst_D_Qf.Cx0_Faulty;
FordCmpdHwPosnQlyFacPrev.EngMax = Ford_StePinCompAnEst_D_Qf.Cx3_OK;
FordCmpdHwPosnQlyFacPrev.InitRowCol = [1  1];


FordSteerPinionOffsStsPrev = DataDict.PIM;
FordSteerPinionOffsStsPrev.LongName = 'Ford Steering Pinion Offset Status Previous';
FordSteerPinionOffsStsPrev.Description = [...
  'Previous value of Input Ford Steering Pinion Offset Status.'];
FordSteerPinionOffsStsPrev.DocUnits = 'Cnt';
FordSteerPinionOffsStsPrev.EngDT = enum.Ford_StePinOffst_D_Stat;
FordSteerPinionOffsStsPrev.EngMin = Ford_StePinOffst_D_Stat.Cx0_OffsetNotCalculated;
FordSteerPinionOffsStsPrev.EngMax = Ford_StePinOffst_D_Stat.Cx3_FineOffset;
FordSteerPinionOffsStsPrev.InitRowCol = [1  1];


MotVelVldTrueTi = DataDict.PIM;
MotVelVldTrueTi.LongName = 'Motor Velocity Valid True Time';
MotVelVldTrueTi.Description = [...
  'Timer to set Handwheel Velocity Valid to true after initialization'];
MotVelVldTrueTi.DocUnits = 'MilliSec';
MotVelVldTrueTi.EngDT = dt.u32;
MotVelVldTrueTi.EngMin = 0;
MotVelVldTrueTi.EngMax = 4294967295;
MotVelVldTrueTi.InitRowCol = [1  1];


NoDataExistFlg = DataDict.PIM;
NoDataExistFlg.LongName = 'No Data Exist Flag';
NoDataExistFlg.Description = [...
  'This flag is used to indicate Compensated Handwheel Position Quality F' ...
  'actor is equal to "No Data Exists" due to the Relative Position Loss F' ...
  'lag'];
NoDataExistFlg.DocUnits = 'Cnt';
NoDataExistFlg.EngDT = dt.lgc;
NoDataExistFlg.EngMin = 0;
NoDataExistFlg.EngMax = 1;
NoDataExistFlg.InitRowCol = [1  1];


NonAbsCentrNotDetdTi = DataDict.PIM;
NonAbsCentrNotDetdTi.LongName = 'Non Abs Center Not Detected Timer';
NonAbsCentrNotDetdTi.Description = 'Timer to set NTC 0xE1';
NonAbsCentrNotDetdTi.DocUnits = 'Sec';
NonAbsCentrNotDetdTi.EngDT = dt.u32;
NonAbsCentrNotDetdTi.EngMin = 0;
NonAbsCentrNotDetdTi.EngMax = 4294967295;
NonAbsCentrNotDetdTi.InitRowCol = [1  1];


RelHwPosnPrev = DataDict.PIM;
RelHwPosnPrev.LongName = 'Relative Handwheel Position Previous';
RelHwPosnPrev.Description = [...
  'Previous value of relative Handwheel Position'];
RelHwPosnPrev.DocUnits = 'HwDeg';
RelHwPosnPrev.EngDT = dt.float32;
RelHwPosnPrev.EngMin = -65535;
RelHwPosnPrev.EngMax = 65535;
RelHwPosnPrev.InitRowCol = [1  1];


RelHwPosnVld = DataDict.PIM;
RelHwPosnVld.LongName = 'Relative Handwheel Position Valid';
RelHwPosnVld.Description = [...
  'Flag to set the state of Relative Handwheel Position'];
RelHwPosnVld.DocUnits = 'Cnt';
RelHwPosnVld.EngDT = dt.lgc;
RelHwPosnVld.EngMin = 0;
RelHwPosnVld.EngMax = 1;
RelHwPosnVld.InitRowCol = [1  1];


RelPosnLossFlg = DataDict.PIM;
RelPosnLossFlg.LongName = 'Relative Position Loss Flag';
RelPosnLossFlg.Description = [...
  'Flag to set the state of Compensated Handwheel Position Quality Factor' ...
  ' '];
RelPosnLossFlg.DocUnits = 'Cnt';
RelPosnLossFlg.EngDT = dt.lgc;
RelPosnLossFlg.EngMin = 0;
RelPosnLossFlg.EngMax = 1;
RelPosnLossFlg.InitRowCol = [1  1];


RelPosnVldFlgRcvryTi = DataDict.PIM;
RelPosnVldFlgRcvryTi.LongName = 'Valid Flag Recovery Time';
RelPosnVldFlgRcvryTi.Description = 'Valid Flag Recovery Time';
RelPosnVldFlgRcvryTi.DocUnits = 'MilliSec';
RelPosnVldFlgRcvryTi.EngDT = dt.u32;
RelPosnVldFlgRcvryTi.EngMin = 0;
RelPosnVldFlgRcvryTi.EngMax = 4294967295;
RelPosnVldFlgRcvryTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ACCURACY_HWDEG_F32 = DataDict.Constant;
ACCURACY_HWDEG_F32.LongName = 'Accuracy';
ACCURACY_HWDEG_F32.Description = [...
  'Constant used to check accuracy of Relative Handwheel Position and Com' ...
  'pensated Handwheel Position'];
ACCURACY_HWDEG_F32.DocUnits = 'HwDeg';
ACCURACY_HWDEG_F32.EngDT = dt.float32;
ACCURACY_HWDEG_F32.EngVal = 4;
ACCURACY_HWDEG_F32.Define = 'Local';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


CNVMILLISECTOCNT_CNTPERMILLISEC_U16 = DataDict.Constant;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Millisecond to Count';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ueis multiplied by this constant to convert millisecond to count'];
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngDT = dt.u16;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngVal = 10;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Define = 'Local';


DEBSTEP_CNT_U16 = DataDict.Constant;
DEBSTEP_CNT_U16.LongName = 'Debounce Step';
DEBSTEP_CNT_U16.Description = [...
  'Constant use to indicate debounce stepsize as 65535'];
DEBSTEP_CNT_U16.DocUnits = 'Cnt';
DEBSTEP_CNT_U16.EngDT = dt.u16;
DEBSTEP_CNT_U16.EngVal = 65535;
DEBSTEP_CNT_U16.Define = 'Local';


ENGVEHSPDVALLIM_KPH_U08 = DataDict.Constant;
ENGVEHSPDVALLIM_KPH_U08.LongName = 'Engine Vehicle Speed Value Limit';
ENGVEHSPDVALLIM_KPH_U08.Description = [...
  'Constant used to compare Engine Vehicle Speed Value to set NTC 0xE1'];
ENGVEHSPDVALLIM_KPH_U08.DocUnits = 'Kph';
ENGVEHSPDVALLIM_KPH_U08.EngDT = dt.u08;
ENGVEHSPDVALLIM_KPH_U08.EngVal = 40;
ENGVEHSPDVALLIM_KPH_U08.Define = 'Local';


FAULTY_HWDEG_F32 = DataDict.Constant;
FAULTY_HWDEG_F32.LongName = 'Faulty';
FAULTY_HWDEG_F32.Description = [...
  'Constant used to set Relative Handwheel Position and Steering Pinion O' ...
  'ffset to faulty'];
FAULTY_HWDEG_F32.DocUnits = 'HwDeg';
FAULTY_HWDEG_F32.EngDT = dt.float32;
FAULTY_HWDEG_F32.EngVal = 65534;
FAULTY_HWDEG_F32.Define = 'Local';


FORDCMPDHWPOSNMAX_HWDEG_F32 = DataDict.Constant;
FORDCMPDHWPOSNMAX_HWDEG_F32.LongName = 'Ford Compensated Handwheel Position Maximum';
FORDCMPDHWPOSNMAX_HWDEG_F32.Description = [...
  'Maximum limit value for Ford Compensated Handwheel Position'];
FORDCMPDHWPOSNMAX_HWDEG_F32.DocUnits = 'HwDeg';
FORDCMPDHWPOSNMAX_HWDEG_F32.EngDT = dt.float32;
FORDCMPDHWPOSNMAX_HWDEG_F32.EngVal = 65535;
FORDCMPDHWPOSNMAX_HWDEG_F32.Define = 'Local';


FORDCMPDHWPOSNMIN_HWDEG_F32 = DataDict.Constant;
FORDCMPDHWPOSNMIN_HWDEG_F32.LongName = 'Ford Compensated Handwheel Position Minimum';
FORDCMPDHWPOSNMIN_HWDEG_F32.Description = [...
  'Minimum limit value for Ford Compensated Handwheel Position'];
FORDCMPDHWPOSNMIN_HWDEG_F32.DocUnits = 'HwDeg';
FORDCMPDHWPOSNMIN_HWDEG_F32.EngDT = dt.float32;
FORDCMPDHWPOSNMIN_HWDEG_F32.EngVal = -65535;
FORDCMPDHWPOSNMIN_HWDEG_F32.Define = 'Local';


FORDRELHWPOSNMAX_HWDEG_F32 = DataDict.Constant;
FORDRELHWPOSNMAX_HWDEG_F32.LongName = 'Ford Relative Handwheel Position Maximum';
FORDRELHWPOSNMAX_HWDEG_F32.Description = [...
  'Maximum limit value for Ford Relative Handwheel Position'];
FORDRELHWPOSNMAX_HWDEG_F32.DocUnits = 'HwDeg';
FORDRELHWPOSNMAX_HWDEG_F32.EngDT = dt.float32;
FORDRELHWPOSNMAX_HWDEG_F32.EngVal = 65535;
FORDRELHWPOSNMAX_HWDEG_F32.Define = 'Local';


FORDRELHWPOSNMIN_HWDEG_F32 = DataDict.Constant;
FORDRELHWPOSNMIN_HWDEG_F32.LongName = 'Ford Relative Handwheel Position Minimum';
FORDRELHWPOSNMIN_HWDEG_F32.Description = [...
  'Minimum limit value for Ford Relative Handwheel Position'];
FORDRELHWPOSNMIN_HWDEG_F32.DocUnits = 'HwDeg';
FORDRELHWPOSNMIN_HWDEG_F32.EngDT = dt.float32;
FORDRELHWPOSNMIN_HWDEG_F32.EngVal = -65535;
FORDRELHWPOSNMIN_HWDEG_F32.Define = 'Local';


INPTQVALLIM_HWNWTMTR_F32 = DataDict.Constant;
INPTQVALLIM_HWNWTMTR_F32.LongName = 'Input Torque Value Limit';
INPTQVALLIM_HWNWTMTR_F32.Description = [...
  'Constant used to compare Input Torque Value to set NTC 0xE1'];
INPTQVALLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
INPTQVALLIM_HWNWTMTR_F32.EngDT = dt.float32;
INPTQVALLIM_HWNWTMTR_F32.EngVal = 1.5;
INPTQVALLIM_HWNWTMTR_F32.Define = 'Local';


NODATAEXIST_HWDEG_F32 = DataDict.Constant;
NODATAEXIST_HWDEG_F32.LongName = 'No Data Exist';
NODATAEXIST_HWDEG_F32.Description = [...
  'Constant used to set Relative Handwheel Position and Steering Pinion O' ...
  'ffset to No Data Exists'];
NODATAEXIST_HWDEG_F32.DocUnits = 'HwDeg';
NODATAEXIST_HWDEG_F32.EngDT = dt.float32;
NODATAEXIST_HWDEG_F32.EngVal = 65535;
NODATAEXIST_HWDEG_F32.Define = 'Local';


POSCORRLNFLT_CNT_U08 = DataDict.Constant;
POSCORRLNFLT_CNT_U08.LongName = 'Position Correlation Fault';
POSCORRLNFLT_CNT_U08.Description = [...
  'NTC0x0E0 Status Info byte value of Position Correlation Fault'];
POSCORRLNFLT_CNT_U08.DocUnits = 'Cnt';
POSCORRLNFLT_CNT_U08.EngDT = dt.u08;
POSCORRLNFLT_CNT_U08.EngVal = 2;
POSCORRLNFLT_CNT_U08.Define = 'Local';


RACKTRVLEXCDDCMPD_CNT_U08 = DataDict.Constant;
RACKTRVLEXCDDCMPD_CNT_U08.LongName = 'Rack Travel Exceeded Compensated';
RACKTRVLEXCDDCMPD_CNT_U08.Description = [...
  'NTC0x0E0 Status Info byte value of Rack Travel Exceeded Compensated Fa' ...
  'ult'];
RACKTRVLEXCDDCMPD_CNT_U08.DocUnits = 'Cnt';
RACKTRVLEXCDDCMPD_CNT_U08.EngDT = dt.u08;
RACKTRVLEXCDDCMPD_CNT_U08.EngVal = 3;
RACKTRVLEXCDDCMPD_CNT_U08.Define = 'Local';


RACKTRVLEXCDDREL_CNT_U08 = DataDict.Constant;
RACKTRVLEXCDDREL_CNT_U08.LongName = 'Rack Travel Exceeded Realative';
RACKTRVLEXCDDREL_CNT_U08.Description = [...
  'NTC0x0E0 Status Info byte value of Rack Travel Exceeded Realative Faul' ...
  't'];
RACKTRVLEXCDDREL_CNT_U08.DocUnits = 'Cnt';
RACKTRVLEXCDDREL_CNT_U08.EngDT = dt.u08;
RACKTRVLEXCDDREL_CNT_U08.EngVal = 1;
RACKTRVLEXCDDREL_CNT_U08.Define = 'Local';


RELHWPOSNDE_HWDEG_F32 = DataDict.Constant;
RELHWPOSNDE_HWDEG_F32.LongName = 'Relative Handwheel Position Deviation';
RELHWPOSNDE_HWDEG_F32.Description = [...
  'Constant used to check deviation of Measured Relative Handwheel Positi' ...
  'on with calculated value by Motor Position '];
RELHWPOSNDE_HWDEG_F32.DocUnits = 'HwDeg';
RELHWPOSNDE_HWDEG_F32.EngDT = dt.float32;
RELHWPOSNDE_HWDEG_F32.EngVal = 20;
RELHWPOSNDE_HWDEG_F32.Define = 'Local';


RELHWPOSNLIM_HWDEG_F32 = DataDict.Constant;
RELHWPOSNLIM_HWDEG_F32.LongName = 'Relative Handwheel Position Limit';
RELHWPOSNLIM_HWDEG_F32.Description = [...
  'Constant used to compare Relative Handwheel Position Value to set NTC ' ...
  '0xE1'];
RELHWPOSNLIM_HWDEG_F32.DocUnits = 'HwDeg';
RELHWPOSNLIM_HWDEG_F32.EngDT = dt.float32;
RELHWPOSNLIM_HWDEG_F32.EngVal = 5;
RELHWPOSNLIM_HWDEG_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
NonAbsCentrNotDetd = DataDict.NTC;
NonAbsCentrNotDetd.NtcNr = NtcNr1.NTCNR_0X0E1;
NonAbsCentrNotDetd.NtcTyp = 'None';
NonAbsCentrNotDetd.LongName = 'Non ABS Center Not Detected';
NonAbsCentrNotDetd.Description = 'Non ABS Center Not Found Diagnostic';
NonAbsCentrNotDetd.NtcStInfo = DataDict.NtcStInfoBitPacked;
NonAbsCentrNotDetd.NtcStInfo.Bit0Descr = 'Unused';
NonAbsCentrNotDetd.NtcStInfo.Bit1Descr = 'Unused';
NonAbsCentrNotDetd.NtcStInfo.Bit2Descr = 'Unused';
NonAbsCentrNotDetd.NtcStInfo.Bit3Descr = 'Unused';
NonAbsCentrNotDetd.NtcStInfo.Bit4Descr = 'Unused';
NonAbsCentrNotDetd.NtcStInfo.Bit5Descr = 'Unused';
NonAbsCentrNotDetd.NtcStInfo.Bit6Descr = 'Unused';
NonAbsCentrNotDetd.NtcStInfo.Bit7Descr = 'Unused';
NonAbsCentrNotDetd.NtcStsLockdThisIgnCyc = 0;


SteerAgFlt = DataDict.NTC;
SteerAgFlt.NtcNr = NtcNr1.NTCNR_0X0E0;
SteerAgFlt.NtcTyp = 'None';
SteerAgFlt.LongName = 'Steering Angle Fault';
SteerAgFlt.Description = 'Steering Angle Fault Diagnostic';
SteerAgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
SteerAgFlt.NtcStInfo.Bit0Descr = 'Rack Travel Exceeded-Relative';
SteerAgFlt.NtcStInfo.Bit1Descr = 'Position Correlation Fault';
SteerAgFlt.NtcStInfo.Bit2Descr = 'Rack Travel Exceeded-Compensated';
SteerAgFlt.NtcStInfo.Bit3Descr = 'Unused';
SteerAgFlt.NtcStInfo.Bit4Descr = 'Unused';
SteerAgFlt.NtcStInfo.Bit5Descr = 'Unused';
SteerAgFlt.NtcStInfo.Bit6Descr = 'Unused';
SteerAgFlt.NtcStInfo.Bit7Descr = 'Unused';
SteerAgFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
