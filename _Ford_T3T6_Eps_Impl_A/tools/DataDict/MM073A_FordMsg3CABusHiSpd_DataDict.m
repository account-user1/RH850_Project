%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 28-Mar-2018 14:15:36       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM073A = DataDict.FDD;
MM073A.Version = '2.0.X';
MM073A.LongName = 'Ford Message 3CA Bus High Speed';
MM073A.ShoName  = 'FordMsg3CABusHiSpd';
MM073A.DesignASIL = 'B';
MM073A.Description = [...
  'The purpose of the Ford Message 3CA Bus Hish Speed function isto provi' ...
  'de the Electric Power Steering system with signal values for Lane Dete' ...
  'ction Warning and Lane Keep Assist functions form CAN.The Ford Message' ...
  ' 3CA function will perform the missing message and signal invalid diag' ...
  'nostics as well as provide a validity signal for the signal values and' ...
  ' received message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg3CABusHiSpdInit1 = DataDict.Runnable;
FordMsg3CABusHiSpdInit1.Context = 'Rte';
FordMsg3CABusHiSpdInit1.TimeStep = 0;
FordMsg3CABusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg3CABusHiSpdPer1 = DataDict.Runnable;
FordMsg3CABusHiSpdPer1.Context = 'Rte';
FordMsg3CABusHiSpdPer1.TimeStep = 0.01;
FordMsg3CABusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds'];

ComIPduCallout_Lane_Assist_Data1_FD1 = DataDict.SrvRunnable;
ComIPduCallout_Lane_Assist_Data1_FD1.Context = 'NonRte';
ComIPduCallout_Lane_Assist_Data1_FD1.Description = [...
  'Server Runnable for Message Reception'];
ComIPduCallout_Lane_Assist_Data1_FD1.Return = DataDict.CSReturn;
ComIPduCallout_Lane_Assist_Data1_FD1.Return.Type = 'None';
ComIPduCallout_Lane_Assist_Data1_FD1.Return.Min = [];
ComIPduCallout_Lane_Assist_Data1_FD1.Return.Max = [];
ComIPduCallout_Lane_Assist_Data1_FD1.Return.TestTolerance = [];
ComIPduCallout_Lane_Assist_Data1_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_Lane_Assist_Data1_FD1.Arguments(1).Name = 'Lane_Assist_Data1';
ComIPduCallout_Lane_Assist_Data1_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_Lane_Assist_Data1_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_Lane_Assist_Data1_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_Lane_Assist_Data1_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_Lane_Assist_Data1_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_Lane_Assist_Data1_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_Lane_Assist_Data1_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_Lane_Assist_Data1_FD1.Arguments(1).Description = [...
  'Argument Lane_Assist_Data1 set to true once this server runnable is ca' ...
  'lled'];

ComTimeoutNotification_LaCurvature_No_Calc = DataDict.SrvRunnable;
ComTimeoutNotification_LaCurvature_No_Calc.Context = 'NonRte';
ComTimeoutNotification_LaCurvature_No_Calc.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_LaCurvature_No_Calc.Return = DataDict.CSReturn;
ComTimeoutNotification_LaCurvature_No_Calc.Return.Type = 'None';
ComTimeoutNotification_LaCurvature_No_Calc.Return.Min = [];
ComTimeoutNotification_LaCurvature_No_Calc.Return.Max = [];
ComTimeoutNotification_LaCurvature_No_Calc.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg3CABusHiSpdInit1','FordMsg3CABusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg3CABusHiSpdPer1'};
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


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'FordMsg3CABusHiSpdPer1'};
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
ClrDiagcFlgProxy = DataDict.IpSignal;
ClrDiagcFlgProxy.LongName = 'Clear Diagnostic Flag Proxy';
ClrDiagcFlgProxy.Description = [...
  'When ClrDiagcFlgProxy is True, Diagnostic test is performed'];
ClrDiagcFlgProxy.DocUnits = 'Cnt';
ClrDiagcFlgProxy.EngDT = dt.u08;
ClrDiagcFlgProxy.EngInit = 0;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.ReadIn = {'FordMsg3CABusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to false in order to Test Diagnostic NTC,Cus' ...
  'tomer datatype should be used. Data Type: Boolean with Min value "Fals' ...
  'e"(0), Init value "True"(0) and Max value "True"(1)'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg3CABusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'Ford EPS Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibration value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg3CABusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordLaneDetnWarnEnad = DataDict.IpSignal;
FordLaneDetnWarnEnad.LongName = 'Ford Lane Detection Warning Enabled';
FordLaneDetnWarnEnad.Description = [...
  'This signal is set to 1 in order to set the missing NTC to pass or fai' ...
  'l.Customer datatype should be used. Data Type: Boolean with Min value ' ...
  '"False"(0), Init value "False"(0) and Max value "True"(1)'];
FordLaneDetnWarnEnad.DocUnits = 'Cnt';
FordLaneDetnWarnEnad.EngDT = dt.lgc;
FordLaneDetnWarnEnad.EngInit = 0;
FordLaneDetnWarnEnad.EngMin = 0;
FordLaneDetnWarnEnad.EngMax = 1;
FordLaneDetnWarnEnad.ReadIn = {'FordMsg3CABusHiSpdPer1'};
FordLaneDetnWarnEnad.ReadType = 'Rte';


FordLaneKeepAssiEnad = DataDict.IpSignal;
FordLaneKeepAssiEnad.LongName = 'Ford Lane Keep Assist Enabled';
FordLaneKeepAssiEnad.Description = [...
  'This signal is set to 1 in order to set the missing NTC to pass or fai' ...
  'l.Customer datatype should be used. Data Type: Boolean with Min value ' ...
  '"False"(0), Init value "False"(0) and Max value "True"(1)'];
FordLaneKeepAssiEnad.DocUnits = 'Cnt';
FordLaneKeepAssiEnad.EngDT = dt.lgc;
FordLaneKeepAssiEnad.EngInit = 0;
FordLaneKeepAssiEnad.EngMin = 0;
FordLaneKeepAssiEnad.EngMax = 1;
FordLaneKeepAssiEnad.ReadIn = {'FordMsg3CABusHiSpdPer1'};
FordLaneKeepAssiEnad.ReadType = 'Rte';


Ford_LaCurvature_No_Calc = DataDict.IpSignal;
Ford_LaCurvature_No_Calc.LongName = 'Ford Lane Keep System Curvature';
Ford_LaCurvature_No_Calc.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed.'];
Ford_LaCurvature_No_Calc.DocUnits = 'Cnt';
Ford_LaCurvature_No_Calc.EngDT = dt.u16;
Ford_LaCurvature_No_Calc.EngInit = 0;
Ford_LaCurvature_No_Calc.EngMin = 0;
Ford_LaCurvature_No_Calc.EngMax = 4095;
Ford_LaCurvature_No_Calc.ReadIn = {'FordMsg3CABusHiSpdPer1'};
Ford_LaCurvature_No_Calc.ReadType = 'Rte';


Ford_LaRampType_B_Req1 = DataDict.IpSignal;
Ford_LaRampType_B_Req1.LongName = 'Ford Lane Keep System Ramp';
Ford_LaRampType_B_Req1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed.Customer datatype should be used. Datatype: Ford_LaRampType_B_' ...
  'Req. Elements are: 0 - "Cx0_Smooth", 1 - "Cx1_Quick'];
Ford_LaRampType_B_Req1.DocUnits = 'Cnt';
Ford_LaRampType_B_Req1.EngDT = enum.Ford_LaRampType_B_Req;
Ford_LaRampType_B_Req1.EngInit = Ford_LaRampType_B_Req.Cx0_Smooth;
Ford_LaRampType_B_Req1.EngMin = Ford_LaRampType_B_Req.Cx0_Smooth;
Ford_LaRampType_B_Req1.EngMax = Ford_LaRampType_B_Req.Cx1_Quick;
Ford_LaRampType_B_Req1.ReadIn = {'FordMsg3CABusHiSpdPer1'};
Ford_LaRampType_B_Req1.ReadType = 'Rte';


Ford_LaRefAng_No_Req = DataDict.IpSignal;
Ford_LaRefAng_No_Req.LongName = 'Ford Lane Keep System Requested Angle';
Ford_LaRefAng_No_Req.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed.'];
Ford_LaRefAng_No_Req.DocUnits = 'Cnt';
Ford_LaRefAng_No_Req.EngDT = dt.u16;
Ford_LaRefAng_No_Req.EngInit = 0;
Ford_LaRefAng_No_Req.EngMin = 0;
Ford_LaRefAng_No_Req.EngMax = 4095;
Ford_LaRefAng_No_Req.ReadIn = {'FordMsg3CABusHiSpdPer1'};
Ford_LaRefAng_No_Req.ReadType = 'Rte';


Ford_LdwActvIntns_D_Req1 = DataDict.IpSignal;
Ford_LdwActvIntns_D_Req1.LongName = 'Ford Lane Detection Warning Intensity';
Ford_LdwActvIntns_D_Req1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed.Customer datatype should be used. Datatype: Ford_LdwActvIntns_' ...
  'D_Req. Elements are: 0 - "Cx0_None", 1 - "Cx1_Low", 2- "Cx2_Medium", 3' ...
  ' - "Cx3_High"'];
Ford_LdwActvIntns_D_Req1.DocUnits = 'Cnt';
Ford_LdwActvIntns_D_Req1.EngDT = enum.Ford_LdwActvIntns_D_Req;
Ford_LdwActvIntns_D_Req1.EngInit = Ford_LdwActvIntns_D_Req.Cx0_None;
Ford_LdwActvIntns_D_Req1.EngMin = Ford_LdwActvIntns_D_Req.Cx0_None;
Ford_LdwActvIntns_D_Req1.EngMax = Ford_LdwActvIntns_D_Req.Cx3_High;
Ford_LdwActvIntns_D_Req1.ReadIn = {'FordMsg3CABusHiSpdPer1'};
Ford_LdwActvIntns_D_Req1.ReadType = 'Rte';


Ford_LdwActvStats_D_Req1 = DataDict.IpSignal;
Ford_LdwActvStats_D_Req1.LongName = 'Ford Lane Detection Warning Status';
Ford_LdwActvStats_D_Req1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed.Customer datatype should be used. Datatype: Ford_LdwActvStats_' ...
  'D_Req. Elements are: 0 - "Cx0_LDW_Idle", 1 - "Cx1_Not_Used1", 2- "Cx2_' ...
  'LDW_Warning_Left", 3 - "Cx3_LDW_Suppress_Left,"4 - "Cx4_LDW_Warning_Ri' ...
  'ght",5 - "Cx5_LDW_Suppress_Right",6 - "Cx6_Not_Used2",7 - "Cx7_LDW_Sup' ...
  'press_Right_Left"'];
Ford_LdwActvStats_D_Req1.DocUnits = 'Cnt';
Ford_LdwActvStats_D_Req1.EngDT = enum.Ford_LdwActvStats_D_Req;
Ford_LdwActvStats_D_Req1.EngInit = Ford_LdwActvStats_D_Req.Cx0_LDW_Idle;
Ford_LdwActvStats_D_Req1.EngMin = Ford_LdwActvStats_D_Req.Cx0_LDW_Idle;
Ford_LdwActvStats_D_Req1.EngMax = Ford_LdwActvStats_D_Req.Cx7_LDW_Suppress_Right_Left;
Ford_LdwActvStats_D_Req1.ReadIn = {'FordMsg3CABusHiSpdPer1'};
Ford_LdwActvStats_D_Req1.ReadType = 'Rte';


Ford_LkaActvStats_D2_Req1 = DataDict.IpSignal;
Ford_LkaActvStats_D2_Req1.LongName = 'Ford Lane Keep System Status';
Ford_LkaActvStats_D2_Req1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed.Customer datatype should be used. Datatype: Ford_LkaActvStats_' ...
  'D2_Req. Elements are: 0 - "Cx0_LkaNoInterv", 1 - "Cx1_LkaIncrIntervLef' ...
  't", 2- "Cx2_LkaStandIntervLeft", 3 - "Cx3_LkaSupperLeft"4 - "Cx4_LkaSt' ...
  'andIntervRight",5 - "Cx5_LkaSupperRight",6 - "Cx6_LkaIncrIntervRight",' ...
  '7 - "Cx7_NotUsed"'];
Ford_LkaActvStats_D2_Req1.DocUnits = 'Cnt';
Ford_LkaActvStats_D2_Req1.EngDT = enum.Ford_LkaActvStats_D2_Req;
Ford_LkaActvStats_D2_Req1.EngInit = Ford_LkaActvStats_D2_Req.Cx0_LkaNoInterv;
Ford_LkaActvStats_D2_Req1.EngMin = Ford_LkaActvStats_D2_Req.Cx0_LkaNoInterv;
Ford_LkaActvStats_D2_Req1.EngMax = Ford_LkaActvStats_D2_Req.Cx7_NotUsed;
Ford_LkaActvStats_D2_Req1.ReadIn = {'FordMsg3CABusHiSpdPer1'};
Ford_LkaActvStats_D2_Req1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehLaneAssiImgProcgModlAVld = DataDict.OpSignal;
FordVehLaneAssiImgProcgModlAVld.LongName = 'Ford Vehicle Lane Assist Image Processing Module A Valid';
FordVehLaneAssiImgProcgModlAVld.Description = [...
  'This signal Check the validity of Ford Vehicle Turn Signal'];
FordVehLaneAssiImgProcgModlAVld.DocUnits = 'Cnt';
FordVehLaneAssiImgProcgModlAVld.SwcShoName = 'FordMsg3CABusHiSpd';
FordVehLaneAssiImgProcgModlAVld.EngDT = dt.lgc;
FordVehLaneAssiImgProcgModlAVld.EngInit = 0;
FordVehLaneAssiImgProcgModlAVld.EngMin = 0;
FordVehLaneAssiImgProcgModlAVld.EngMax = 1;
FordVehLaneAssiImgProcgModlAVld.TestTolerance = 0;
FordVehLaneAssiImgProcgModlAVld.WrittenIn = {'FordMsg3CABusHiSpdPer1'};
FordVehLaneAssiImgProcgModlAVld.WriteType = 'Rte';


FordVehLaneDetnWarnInten = DataDict.OpSignal;
FordVehLaneDetnWarnInten.LongName = 'Ford Vehicle Lane Detection Warning Intensity';
FordVehLaneDetnWarnInten.Description = [...
  'Vehicle Lane Detection Warning Intensity is assigned to Ford Vehicle L' ...
  'aneDetection Warning Status'];
FordVehLaneDetnWarnInten.DocUnits = 'Cnt';
FordVehLaneDetnWarnInten.SwcShoName = 'FordMsg3CABusHiSpd';
FordVehLaneDetnWarnInten.EngDT = enum.Ford_LdwActvIntns_D_Req;
FordVehLaneDetnWarnInten.EngInit = Ford_LdwActvIntns_D_Req.Cx0_None;
FordVehLaneDetnWarnInten.EngMin = Ford_LdwActvIntns_D_Req.Cx0_None;
FordVehLaneDetnWarnInten.EngMax = Ford_LdwActvIntns_D_Req.Cx3_High;
FordVehLaneDetnWarnInten.TestTolerance = 0;
FordVehLaneDetnWarnInten.WrittenIn = {'FordMsg3CABusHiSpdPer1'};
FordVehLaneDetnWarnInten.WriteType = 'Rte';


FordVehLaneDetnWarnSts = DataDict.OpSignal;
FordVehLaneDetnWarnSts.LongName = 'Ford Vehicle Lane Detection Warning Status';
FordVehLaneDetnWarnSts.Description = [...
  'Vehicle Lane Detection Warning Status is assigned to Ford Vehicle Lane' ...
  'Detection warning Status'];
FordVehLaneDetnWarnSts.DocUnits = 'Cnt';
FordVehLaneDetnWarnSts.SwcShoName = 'FordMsg3CABusHiSpd';
FordVehLaneDetnWarnSts.EngDT = enum.Ford_LdwActvStats_D_Req;
FordVehLaneDetnWarnSts.EngInit = Ford_LdwActvStats_D_Req.Cx0_LDW_Idle;
FordVehLaneDetnWarnSts.EngMin = Ford_LdwActvStats_D_Req.Cx0_LDW_Idle;
FordVehLaneDetnWarnSts.EngMax = Ford_LdwActvStats_D_Req.Cx7_LDW_Suppress_Right_Left;
FordVehLaneDetnWarnSts.TestTolerance = 0;
FordVehLaneDetnWarnSts.WrittenIn = {'FordMsg3CABusHiSpdPer1'};
FordVehLaneDetnWarnSts.WriteType = 'Rte';


FordVehLaneKeepSysCrvt = DataDict.OpSignal;
FordVehLaneKeepSysCrvt.LongName = 'Ford Vehicle Lane Keep System Curvature';
FordVehLaneKeepSysCrvt.Description = [...
  'Processed value of Lane Keep System Curvature to be used by Ford Vehic' ...
  'le System Curvature Quality'];
FordVehLaneKeepSysCrvt.DocUnits = 'IvsMtr';
FordVehLaneKeepSysCrvt.SwcShoName = 'FordMsg3CABusHiSpd';
FordVehLaneKeepSysCrvt.EngDT = dt.float32;
FordVehLaneKeepSysCrvt.EngInit = 0;
FordVehLaneKeepSysCrvt.EngMin = -0.01024;
FordVehLaneKeepSysCrvt.EngMax = 0.01023;
FordVehLaneKeepSysCrvt.TestTolerance = 0;
FordVehLaneKeepSysCrvt.WrittenIn = {'FordMsg3CABusHiSpdPer1'};
FordVehLaneKeepSysCrvt.WriteType = 'Rte';


FordVehLaneKeepSysCrvtRaw = DataDict.OpSignal;
FordVehLaneKeepSysCrvtRaw.LongName = 'Ford Vehicle Lane Keep System Curvature Raw';
FordVehLaneKeepSysCrvtRaw.Description = [...
  'Lane Keep System Curvature is assigned to Ford Vehicle Lane Keep Syste' ...
  'm Curevature Raw'];
FordVehLaneKeepSysCrvtRaw.DocUnits = 'Cnt';
FordVehLaneKeepSysCrvtRaw.SwcShoName = 'FordMsg3CABusHiSpd';
FordVehLaneKeepSysCrvtRaw.EngDT = dt.u16;
FordVehLaneKeepSysCrvtRaw.EngInit = 2048;
FordVehLaneKeepSysCrvtRaw.EngMin = 0;
FordVehLaneKeepSysCrvtRaw.EngMax = 4095;
FordVehLaneKeepSysCrvtRaw.TestTolerance = 0;
FordVehLaneKeepSysCrvtRaw.WrittenIn = {'FordMsg3CABusHiSpdPer1'};
FordVehLaneKeepSysCrvtRaw.WriteType = 'Rte';


FordVehLaneKeepSysRampTyp = DataDict.OpSignal;
FordVehLaneKeepSysRampTyp.LongName = 'Ford Vehicle Lane Keep System Ramp Type';
FordVehLaneKeepSysRampTyp.Description = [...
  'Lane Keep System Ramp is assigned to Ford Vehicle Lane Keep System Ram' ...
  'p Type'];
FordVehLaneKeepSysRampTyp.DocUnits = 'Cnt';
FordVehLaneKeepSysRampTyp.SwcShoName = 'FordMsg3CABusHiSpd';
FordVehLaneKeepSysRampTyp.EngDT = enum.Ford_LaRampType_B_Req;
FordVehLaneKeepSysRampTyp.EngInit = Ford_LaRampType_B_Req.Cx0_Smooth;
FordVehLaneKeepSysRampTyp.EngMin = Ford_LaRampType_B_Req.Cx0_Smooth;
FordVehLaneKeepSysRampTyp.EngMax = Ford_LaRampType_B_Req.Cx1_Quick;
FordVehLaneKeepSysRampTyp.TestTolerance = 0;
FordVehLaneKeepSysRampTyp.WrittenIn = {'FordMsg3CABusHiSpdPer1'};
FordVehLaneKeepSysRampTyp.WriteType = 'Rte';


FordVehLaneKeepSysReqdAg = DataDict.OpSignal;
FordVehLaneKeepSysReqdAg.LongName = 'Ford Vehicle Lane Keep System Requested Angle';
FordVehLaneKeepSysReqdAg.Description = [...
  'Processed value of Lane Keep System Requested Angle to be used byFord ' ...
  'Vehicle System Requested Angle Quality'];
FordVehLaneKeepSysReqdAg.DocUnits = 'MilliRad';
FordVehLaneKeepSysReqdAg.SwcShoName = 'FordMsg3CABusHiSpd';
FordVehLaneKeepSysReqdAg.EngDT = dt.float32;
FordVehLaneKeepSysReqdAg.EngInit = 0;
FordVehLaneKeepSysReqdAg.EngMin = -102.4;
FordVehLaneKeepSysReqdAg.EngMax = 102.3;
FordVehLaneKeepSysReqdAg.TestTolerance = 0;
FordVehLaneKeepSysReqdAg.WrittenIn = {'FordMsg3CABusHiSpdPer1'};
FordVehLaneKeepSysReqdAg.WriteType = 'Rte';


FordVehLaneKeepSysReqdAgRaw = DataDict.OpSignal;
FordVehLaneKeepSysReqdAgRaw.LongName = 'Ford Vehicle Lane Keep System Requested Angle Raw';
FordVehLaneKeepSysReqdAgRaw.Description = [...
  'Lane Keep System Requested angle is assigned to Ford Vehicle Lane Keep' ...
  'Requested Angle Raw'];
FordVehLaneKeepSysReqdAgRaw.DocUnits = 'Cnt';
FordVehLaneKeepSysReqdAgRaw.SwcShoName = 'FordMsg3CABusHiSpd';
FordVehLaneKeepSysReqdAgRaw.EngDT = dt.u16;
FordVehLaneKeepSysReqdAgRaw.EngInit = 2048;
FordVehLaneKeepSysReqdAgRaw.EngMin = 0;
FordVehLaneKeepSysReqdAgRaw.EngMax = 4095;
FordVehLaneKeepSysReqdAgRaw.TestTolerance = 0;
FordVehLaneKeepSysReqdAgRaw.WrittenIn = {'FordMsg3CABusHiSpdPer1'};
FordVehLaneKeepSysReqdAgRaw.WriteType = 'Rte';


FordVehLaneKeepSysSts = DataDict.OpSignal;
FordVehLaneKeepSysSts.LongName = 'Ford Vehicle Lane Keep System Status';
FordVehLaneKeepSysSts.Description = [...
  'Lane Keep System Status is assigned to Ford Vehicle Lane Keep SystemSt' ...
  'atus'];
FordVehLaneKeepSysSts.DocUnits = 'Cnt';
FordVehLaneKeepSysSts.SwcShoName = 'FordMsg3CABusHiSpd';
FordVehLaneKeepSysSts.EngDT = enum.Ford_LkaActvStats_D2_Req;
FordVehLaneKeepSysSts.EngInit = Ford_LkaActvStats_D2_Req.Cx0_LkaNoInterv;
FordVehLaneKeepSysSts.EngMin = Ford_LkaActvStats_D2_Req.Cx0_LkaNoInterv;
FordVehLaneKeepSysSts.EngMax = Ford_LkaActvStats_D2_Req.Cx7_NotUsed;
FordVehLaneKeepSysSts.TestTolerance = 0;
FordVehLaneKeepSysSts.WrittenIn = {'FordMsg3CABusHiSpdPer1'};
FordVehLaneKeepSysSts.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd = DataDict.Calibration;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.LongName = 'Ford Message 3 C A Bus High Speed Lane Assist Image Module A Failed Curvature Time Threshold';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.Description = [...
  'Threshold to set Ford Vehicle Lane Assist Image Module A to False'];
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.DocUnits = 'MilliSec';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.EngDT = dt.u16;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.EngVal = 0;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.EngMin = 0;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.EngMax = 6000;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.Cardinality = 'Cmn';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.CustomerVisible = false;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.Online = false;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.Impact = 'H';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.TuningOwner = 'EPDT';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.GraphLink = {''};
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.Monotony = 'None';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.MaxGrad = 0;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd.PortName = 'FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd';


FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd = DataDict.Calibration;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.LongName = 'Ford Message 3 C A Bus High Speed Lane Assist Image Module A Failed Requested Angle Time Threshold';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.Description = [...
  'Threshold to set Ford Vehicle Lane Assist Image Module A to False'];
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.DocUnits = 'MilliSec';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.EngDT = dt.u16;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.EngVal = 0;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.EngMin = 0;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.EngMax = 6000;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.Cardinality = 'Cmn';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.CustomerVisible = false;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.Online = false;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.Impact = 'H';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.TuningOwner = 'EPDT';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.GraphLink = {''};
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.Monotony = 'None';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.MaxGrad = 0;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd.PortName = 'FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd';


FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd = DataDict.Calibration;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.LongName = 'Ford Message 3 C A Bus High Speed Lane Assist Image Module A Passed Time Threshold';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.Description = [...
  'Threshold to set Ford Vehicle Lane Assist Image Module A to True'];
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.DocUnits = 'MilliSec';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.EngDT = dt.u16;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.EngVal = 5000;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.EngMin = 0;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.EngMax = 6000;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.Cardinality = 'Cmn';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.CustomerVisible = false;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.Online = false;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.Impact = 'H';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.TuningOwner = 'EPDT';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.GraphLink = {''};
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.Monotony = 'None';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.MaxGrad = 0;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd.PortName = 'FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd';


FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd = DataDict.Calibration;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.LongName = 'Ford Message 3CA Bus High Speed Lane Assist Image Module A Valid Missing Time Threshold';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.Description = [...
  'Threshold to set Ford Vehicle Lane Assist Image Module A Valid to Fals' ...
  'e '];
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.DocUnits = 'MilliSec';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.EngDT = dt.u16;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.EngVal = 1000;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.EngMin = 0;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.EngMax = 6000;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.Cardinality = 'Cmn';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.CustomerVisible = false;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.Online = false;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.Impact = 'H';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.TuningOwner = 'EPDT';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.GraphLink = {''};
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.Monotony = 'None';
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.MaxGrad = 0;
FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd.PortName = 'FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd';


FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd = DataDict.Calibration;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.LongName = 'Ford Message 3 C A Bus High Speed Lane Keep System Curvature Invalid Failed Time Threshold';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.Description = [...
  'Threshold to set invalid message NTC'];
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.DocUnits = 'MilliSec';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.EngDT = dt.u16;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.EngVal = 0;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.EngMin = 0;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.EngMax = 6000;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.Cardinality = 'Cmn';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.CustomerVisible = false;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.Online = false;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.Impact = 'L';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.TuningOwner = 'EPDT';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.GraphLink = {''};
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.Monotony = 'None';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.MaxGrad = 0;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd.PortName = 'FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd';


FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd = DataDict.Calibration;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.LongName = 'Ford Message 3 C A Bus High Speed Lane Keep System Curvature Invalid Passed Time Threshold';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.Description = [...
  'Threshold to Reset invalid message NTC'];
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.DocUnits = 'MilliSec';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.EngDT = dt.u16;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.EngVal = 0;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.EngMin = 0;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.EngMax = 6000;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.Cardinality = 'Cmn';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.CustomerVisible = false;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.Online = false;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.Impact = 'L';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.TuningOwner = 'EPDT';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.GraphLink = {''};
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.Monotony = 'None';
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.MaxGrad = 0;
FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd.PortName = 'FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd';


FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd = DataDict.Calibration;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.LongName = 'Ford Message 3 C A Bus High Speed Lane Keep System Requested Angle Invalid Failed Time Threshold';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.Description = [...
  'Threshold to set the invalid message NTC'];
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.DocUnits = 'MilliSec';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.EngDT = dt.u16;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.EngVal = 0;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.EngMin = 0;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.EngMax = 6000;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.Cardinality = 'Cmn';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.CustomerVisible = false;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.Online = false;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.Impact = 'L';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.TuningOwner = 'EPDT';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.GraphLink = {''};
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.Monotony = 'None';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.MaxGrad = 0;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd.PortName = 'FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd';


FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd = DataDict.Calibration;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.LongName = 'Ford Message 3 C A Bus High Speed Lane Keep System Requested Angle Invalid Passed Time Threshold';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.Description = [...
  'Threshold to Reset the inavlid message NTC'];
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.DocUnits = 'MilliSec';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.EngDT = dt.u16;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.EngVal = 0;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.EngMin = 0;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.EngMax = 6000;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.Cardinality = 'Cmn';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.CustomerVisible = false;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.Online = false;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.Impact = 'L';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.TuningOwner = 'EPDT';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.GraphLink = {''};
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.Monotony = 'None';
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.MaxGrad = 0;
FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd.PortName = 'FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd';


FordMsg3CABusHiSpdMissMsgFaildTiThd = DataDict.Calibration;
FordMsg3CABusHiSpdMissMsgFaildTiThd.LongName = 'Ford Message 3 C A Bus High Speed Missing Message Failed Time Threshold';
FordMsg3CABusHiSpdMissMsgFaildTiThd.Description = [...
  'Threshold to set the missing message NTC'];
FordMsg3CABusHiSpdMissMsgFaildTiThd.DocUnits = 'MilliSec';
FordMsg3CABusHiSpdMissMsgFaildTiThd.EngDT = dt.u16;
FordMsg3CABusHiSpdMissMsgFaildTiThd.EngVal = 1000;
FordMsg3CABusHiSpdMissMsgFaildTiThd.EngMin = 0;
FordMsg3CABusHiSpdMissMsgFaildTiThd.EngMax = 6000;
FordMsg3CABusHiSpdMissMsgFaildTiThd.Cardinality = 'Cmn';
FordMsg3CABusHiSpdMissMsgFaildTiThd.CustomerVisible = false;
FordMsg3CABusHiSpdMissMsgFaildTiThd.Online = false;
FordMsg3CABusHiSpdMissMsgFaildTiThd.Impact = 'L';
FordMsg3CABusHiSpdMissMsgFaildTiThd.TuningOwner = 'EPDT';
FordMsg3CABusHiSpdMissMsgFaildTiThd.GraphLink = {''};
FordMsg3CABusHiSpdMissMsgFaildTiThd.Monotony = 'None';
FordMsg3CABusHiSpdMissMsgFaildTiThd.MaxGrad = 0;
FordMsg3CABusHiSpdMissMsgFaildTiThd.PortName = 'FordMsg3CABusHiSpdMissMsgFaildTiThd';


FordMsg3CABusHiSpdMissMsgPassdTiThd = DataDict.Calibration;
FordMsg3CABusHiSpdMissMsgPassdTiThd.LongName = 'Ford Message 3CA Bus High Speed Missing Message Passed Time Threshold';
FordMsg3CABusHiSpdMissMsgPassdTiThd.Description = 'Threshold to reset the NTC';
FordMsg3CABusHiSpdMissMsgPassdTiThd.DocUnits = 'MilliSec';
FordMsg3CABusHiSpdMissMsgPassdTiThd.EngDT = dt.u16;
FordMsg3CABusHiSpdMissMsgPassdTiThd.EngVal = 0;
FordMsg3CABusHiSpdMissMsgPassdTiThd.EngMin = 0;
FordMsg3CABusHiSpdMissMsgPassdTiThd.EngMax = 6000;
FordMsg3CABusHiSpdMissMsgPassdTiThd.Cardinality = 'Cmn';
FordMsg3CABusHiSpdMissMsgPassdTiThd.CustomerVisible = false;
FordMsg3CABusHiSpdMissMsgPassdTiThd.Online = false;
FordMsg3CABusHiSpdMissMsgPassdTiThd.Impact = 'L';
FordMsg3CABusHiSpdMissMsgPassdTiThd.TuningOwner = 'EPDT';
FordMsg3CABusHiSpdMissMsgPassdTiThd.GraphLink = {''};
FordMsg3CABusHiSpdMissMsgPassdTiThd.Monotony = 'None';
FordMsg3CABusHiSpdMissMsgPassdTiThd.MaxGrad = 0;
FordMsg3CABusHiSpdMissMsgPassdTiThd.PortName = 'FordMsg3CABusHiSpdMissMsgPassdTiThd';



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
ClrDiagcFlgProxyPrev = DataDict.PIM;
ClrDiagcFlgProxyPrev.LongName = 'Clear Diagc Flag Proxy Previous';
ClrDiagcFlgProxyPrev.Description = 'Clear Diagc Flag Proxy';
ClrDiagcFlgProxyPrev.DocUnits = 'Cnt';
ClrDiagcFlgProxyPrev.EngDT = dt.u08;
ClrDiagcFlgProxyPrev.EngMin = 0;
ClrDiagcFlgProxyPrev.EngMax = 1;
ClrDiagcFlgProxyPrev.InitRowCol = [1  1];


FirstTranVldFlg = DataDict.PIM;
FirstTranVldFlg.LongName = 'First Transition Valid Flag';
FirstTranVldFlg.Description = [...
  'This flag is used to indicate the reception of first message'];
FirstTranVldFlg.DocUnits = 'Cnt';
FirstTranVldFlg.EngDT = dt.lgc;
FirstTranVldFlg.EngMin = 0;
FirstTranVldFlg.EngMax = 1;
FirstTranVldFlg.InitRowCol = [1  1];


FordVehLaneAssiImgProcgModlAVldPrev = DataDict.PIM;
FordVehLaneAssiImgProcgModlAVldPrev.LongName = 'Ford Vehicle Vehicle Assist Image Processing Moule A Valid Previous';
FordVehLaneAssiImgProcgModlAVldPrev.Description = [...
  'Holds previous value of FordVehLaneAssilmgProcgModlAVld when FOrdMsg3C' ...
  'A message is missing'];
FordVehLaneAssiImgProcgModlAVldPrev.DocUnits = 'Cnt';
FordVehLaneAssiImgProcgModlAVldPrev.EngDT = dt.lgc;
FordVehLaneAssiImgProcgModlAVldPrev.EngMin = 0;
FordVehLaneAssiImgProcgModlAVldPrev.EngMax = 1;
FordVehLaneAssiImgProcgModlAVldPrev.InitRowCol = [1  1];


FordVehLaneDetnWarnIntenPrev = DataDict.PIM;
FordVehLaneDetnWarnIntenPrev.LongName = 'Ford Vehicle Lane Detection Warning Intensity Previous';
FordVehLaneDetnWarnIntenPrev.Description = [...
  'Holds Previous value of FordVehLaneDetnWarnInten when FordMsg3CA messa' ...
  'ge is missing'];
FordVehLaneDetnWarnIntenPrev.DocUnits = 'Cnt';
FordVehLaneDetnWarnIntenPrev.EngDT = enum.Ford_LdwActvIntns_D_Req;
FordVehLaneDetnWarnIntenPrev.EngMin = Ford_LdwActvIntns_D_Req.Cx0_None;
FordVehLaneDetnWarnIntenPrev.EngMax = Ford_LdwActvIntns_D_Req.Cx3_High;
FordVehLaneDetnWarnIntenPrev.InitRowCol = [1  1];


FordVehLaneDetnWarnStsPrev = DataDict.PIM;
FordVehLaneDetnWarnStsPrev.LongName = 'Ford Vehicle Lane Detection Warning Status Previous';
FordVehLaneDetnWarnStsPrev.Description = [...
  'Holds Previous value of FordVehLaneDetnWarnSts when FordMsg3Ca message' ...
  ' is missing'];
FordVehLaneDetnWarnStsPrev.DocUnits = 'Cnt';
FordVehLaneDetnWarnStsPrev.EngDT = enum.Ford_LdwActvStats_D_Req;
FordVehLaneDetnWarnStsPrev.EngMin = Ford_LdwActvStats_D_Req.Cx0_LDW_Idle;
FordVehLaneDetnWarnStsPrev.EngMax = Ford_LdwActvStats_D_Req.Cx7_LDW_Suppress_Right_Left;
FordVehLaneDetnWarnStsPrev.InitRowCol = [1  1];


FordVehLaneKeepSysCrvtInvldFaildRefTi = DataDict.PIM;
FordVehLaneKeepSysCrvtInvldFaildRefTi.LongName = 'Ford Vehicle Lane Keep System Curvature Invalid Failed Reference Time';
FordVehLaneKeepSysCrvtInvldFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons '];
FordVehLaneKeepSysCrvtInvldFaildRefTi.DocUnits = 'MilliSec';
FordVehLaneKeepSysCrvtInvldFaildRefTi.EngDT = dt.u32;
FordVehLaneKeepSysCrvtInvldFaildRefTi.EngMin = 0;
FordVehLaneKeepSysCrvtInvldFaildRefTi.EngMax = 4294967295;
FordVehLaneKeepSysCrvtInvldFaildRefTi.InitRowCol = [1  1];


FordVehLaneKeepSysCrvtInvldPassdRefTi = DataDict.PIM;
FordVehLaneKeepSysCrvtInvldPassdRefTi.LongName = 'Ford Vehicle Lane Keep System Curvature Invalid Passed Reference Time';
FordVehLaneKeepSysCrvtInvldPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehLaneKeepSysCrvtInvldPassdRefTi.DocUnits = 'MilliSec';
FordVehLaneKeepSysCrvtInvldPassdRefTi.EngDT = dt.u32;
FordVehLaneKeepSysCrvtInvldPassdRefTi.EngMin = 0;
FordVehLaneKeepSysCrvtInvldPassdRefTi.EngMax = 4294967295;
FordVehLaneKeepSysCrvtInvldPassdRefTi.InitRowCol = [1  1];


FordVehLaneKeepSysCrvtPrev = DataDict.PIM;
FordVehLaneKeepSysCrvtPrev.LongName = 'Ford Vehicle Lane Keep System Curvature Previous';
FordVehLaneKeepSysCrvtPrev.Description = [...
  'Holds previous value of FordVehLaneKeepSysCrvt when FOrdMsg3CA message' ...
  ' is missing '];
FordVehLaneKeepSysCrvtPrev.DocUnits = 'IvsMtr';
FordVehLaneKeepSysCrvtPrev.EngDT = dt.float32;
FordVehLaneKeepSysCrvtPrev.EngMin = -0.01024;
FordVehLaneKeepSysCrvtPrev.EngMax = 0.01023;
FordVehLaneKeepSysCrvtPrev.InitRowCol = [1  1];


FordVehLaneKeepSysCrvtRawPrev = DataDict.PIM;
FordVehLaneKeepSysCrvtRawPrev.LongName = 'Ford Vehicle Lane Keep System Curvature Raw Previous';
FordVehLaneKeepSysCrvtRawPrev.Description = [...
  'Holds previous value of FordVehLaneKeepSysCrvtRaw when FOrdMsg3CA mess' ...
  'age is missing'];
FordVehLaneKeepSysCrvtRawPrev.DocUnits = 'Cnt';
FordVehLaneKeepSysCrvtRawPrev.EngDT = dt.u16;
FordVehLaneKeepSysCrvtRawPrev.EngMin = 0;
FordVehLaneKeepSysCrvtRawPrev.EngMax = 4095;
FordVehLaneKeepSysCrvtRawPrev.InitRowCol = [1  1];


FordVehLaneKeepSysRampTypPrev = DataDict.PIM;
FordVehLaneKeepSysRampTypPrev.LongName = 'Ford Vehicle Lane Keep System Ramp Type Previous';
FordVehLaneKeepSysRampTypPrev.Description = [...
  'Holds previous value of FordVehLaneKeepSysRamp when FOrdMsg3CA message' ...
  ' is missing'];
FordVehLaneKeepSysRampTypPrev.DocUnits = 'Cnt';
FordVehLaneKeepSysRampTypPrev.EngDT = enum.Ford_LaRampType_B_Req;
FordVehLaneKeepSysRampTypPrev.EngMin = Ford_LaRampType_B_Req.Cx0_Smooth;
FordVehLaneKeepSysRampTypPrev.EngMax = Ford_LaRampType_B_Req.Cx1_Quick;
FordVehLaneKeepSysRampTypPrev.InitRowCol = [1  1];


FordVehLaneKeepSysReqdAgInvldPassdRefTi = DataDict.PIM;
FordVehLaneKeepSysReqdAgInvldPassdRefTi.LongName = 'Ford Vehicle Lane Keep System Requested Angle Invalid Passed Reference Time';
FordVehLaneKeepSysReqdAgInvldPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehLaneKeepSysReqdAgInvldPassdRefTi.DocUnits = 'MilliSec';
FordVehLaneKeepSysReqdAgInvldPassdRefTi.EngDT = dt.u32;
FordVehLaneKeepSysReqdAgInvldPassdRefTi.EngMin = 0;
FordVehLaneKeepSysReqdAgInvldPassdRefTi.EngMax = 4294967295;
FordVehLaneKeepSysReqdAgInvldPassdRefTi.InitRowCol = [1  1];


FordVehLaneKeepSysReqdAgPrev = DataDict.PIM;
FordVehLaneKeepSysReqdAgPrev.LongName = 'Ford Vehicle Lane Keep System Requested Angle Previous';
FordVehLaneKeepSysReqdAgPrev.Description = [...
  'Holds previous value of FordVehLaneKeepSysReqdAg when FOrdMsg3CA messa' ...
  'ge is missing'];
FordVehLaneKeepSysReqdAgPrev.DocUnits = 'MilliRad';
FordVehLaneKeepSysReqdAgPrev.EngDT = dt.float32;
FordVehLaneKeepSysReqdAgPrev.EngMin = -102.4;
FordVehLaneKeepSysReqdAgPrev.EngMax = 102.3;
FordVehLaneKeepSysReqdAgPrev.InitRowCol = [1  1];


FordVehLaneKeepSysReqdAgRawPrev = DataDict.PIM;
FordVehLaneKeepSysReqdAgRawPrev.LongName = 'Ford Vehicle Lane Keep System Requested Angle Raw Previous';
FordVehLaneKeepSysReqdAgRawPrev.Description = [...
  'Holds previous value of FordVehLaneKeepSysReqdAgRaw when FOrdMsg3CA me' ...
  'ssage is missing'];
FordVehLaneKeepSysReqdAgRawPrev.DocUnits = 'Cnt';
FordVehLaneKeepSysReqdAgRawPrev.EngDT = dt.u16;
FordVehLaneKeepSysReqdAgRawPrev.EngMin = 0;
FordVehLaneKeepSysReqdAgRawPrev.EngMax = 4095;
FordVehLaneKeepSysReqdAgRawPrev.InitRowCol = [1  1];


FordVehLaneKeepSysStsPrev = DataDict.PIM;
FordVehLaneKeepSysStsPrev.LongName = 'Ford Vehicle Lane Keep System Status Previous';
FordVehLaneKeepSysStsPrev.Description = [...
  'Holds previous value of FordVehLaneKeepSysSts when FOrdMsg3CA message ' ...
  'is missing'];
FordVehLaneKeepSysStsPrev.DocUnits = 'Cnt';
FordVehLaneKeepSysStsPrev.EngDT = enum.Ford_LkaActvStats_D2_Req;
FordVehLaneKeepSysStsPrev.EngMin = Ford_LkaActvStats_D2_Req.Cx0_LkaNoInterv;
FordVehLaneKeepSysStsPrev.EngMax = Ford_LkaActvStats_D2_Req.Cx7_NotUsed;
FordVehLaneKeepSysStsPrev.InitRowCol = [1  1];


FordVehMsg3CAMiss = DataDict.PIM;
FordVehMsg3CAMiss.LongName = 'Ford Vehicle Message 3CA Missing';
FordVehMsg3CAMiss.Description = [...
  'Flag for missing message diagnostics, it is true when message is missi' ...
  'ng'];
FordVehMsg3CAMiss.DocUnits = 'Cnt';
FordVehMsg3CAMiss.EngDT = dt.lgc;
FordVehMsg3CAMiss.EngMin = 0;
FordVehMsg3CAMiss.EngMax = 1;
FordVehMsg3CAMiss.InitRowCol = [1  1];


LaneAssiImgProcgModlAFaildCrvtTiThd = DataDict.PIM;
LaneAssiImgProcgModlAFaildCrvtTiThd.LongName = 'Lane Assist Image Module A Valid Failed Curvature Reference Time';
LaneAssiImgProcgModlAFaildCrvtTiThd.Description = [...
  'Timer to update Ford Vehicle Lane Assist Image Processing Module A Val' ...
  'id signal as true or false based on calibration'];
LaneAssiImgProcgModlAFaildCrvtTiThd.DocUnits = 'MilliSec';
LaneAssiImgProcgModlAFaildCrvtTiThd.EngDT = dt.u32;
LaneAssiImgProcgModlAFaildCrvtTiThd.EngMin = 0;
LaneAssiImgProcgModlAFaildCrvtTiThd.EngMax = 4294967295;
LaneAssiImgProcgModlAFaildCrvtTiThd.InitRowCol = [1  1];


LaneAssiImgProcgModlAFaildReqdAgTiThd = DataDict.PIM;
LaneAssiImgProcgModlAFaildReqdAgTiThd.LongName = 'Lane Assist Image Module A Valid Failed Reference Time';
LaneAssiImgProcgModlAFaildReqdAgTiThd.Description = [...
  'Timer to update Ford Vehicle Lane Assist Image Processing Module A Val' ...
  'id signal as true or false based on calibration'];
LaneAssiImgProcgModlAFaildReqdAgTiThd.DocUnits = 'MilliSec';
LaneAssiImgProcgModlAFaildReqdAgTiThd.EngDT = dt.u32;
LaneAssiImgProcgModlAFaildReqdAgTiThd.EngMin = 0;
LaneAssiImgProcgModlAFaildReqdAgTiThd.EngMax = 4294967295;
LaneAssiImgProcgModlAFaildReqdAgTiThd.InitRowCol = [1  1];


LaneAssiImgProcgModlAVldMissRefTi = DataDict.PIM;
LaneAssiImgProcgModlAVldMissRefTi.LongName = 'Lane Assist Image  Module A Valid Missing Reference Time';
LaneAssiImgProcgModlAVldMissRefTi.Description = [...
  'Timer for valid message will increment or reset based on the condition' ...
  's'];
LaneAssiImgProcgModlAVldMissRefTi.DocUnits = 'MilliSec';
LaneAssiImgProcgModlAVldMissRefTi.EngDT = dt.u32;
LaneAssiImgProcgModlAVldMissRefTi.EngMin = 0;
LaneAssiImgProcgModlAVldMissRefTi.EngMax = 4294967295;
LaneAssiImgProcgModlAVldMissRefTi.InitRowCol = [1  1];


LaneAssiImgProcgModlAVldPassdRefTi = DataDict.PIM;
LaneAssiImgProcgModlAVldPassdRefTi.LongName = 'Lane Assist Image Module A Valid Passed Reference Time';
LaneAssiImgProcgModlAVldPassdRefTi.Description = [...
  'Timer for valid message will increment or reset based on the condition' ...
  's'];
LaneAssiImgProcgModlAVldPassdRefTi.DocUnits = 'MilliSec';
LaneAssiImgProcgModlAVldPassdRefTi.EngDT = dt.u32;
LaneAssiImgProcgModlAVldPassdRefTi.EngMin = 0;
LaneAssiImgProcgModlAVldPassdRefTi.EngMax = 4294967295;
LaneAssiImgProcgModlAVldPassdRefTi.InitRowCol = [1  1];


LaneKeepSysReqdAgInvldFaildRefTi = DataDict.PIM;
LaneKeepSysReqdAgInvldFaildRefTi.LongName = 'Lane Keep System Requested Angle Invalid Failed Reference Time';
LaneKeepSysReqdAgInvldFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
LaneKeepSysReqdAgInvldFaildRefTi.DocUnits = 'MilliSec';
LaneKeepSysReqdAgInvldFaildRefTi.EngDT = dt.u32;
LaneKeepSysReqdAgInvldFaildRefTi.EngMin = 0;
LaneKeepSysReqdAgInvldFaildRefTi.EngMax = 4294967295;
LaneKeepSysReqdAgInvldFaildRefTi.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Reference Time';
MissMsgFaildRefTi.Description = [...
  'Timer for missing message will increment or reset based on the conditi' ...
  'ons'];
MissMsgFaildRefTi.DocUnits = 'MilliSec';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Reference Time';
MissMsgPassdRefTi.Description = [...
  'Timer for missing message will increment or reset based on the conditi' ...
  'ons'];
MissMsgPassdRefTi.DocUnits = 'MilliSec';
MissMsgPassdRefTi.EngDT = dt.u32;
MissMsgPassdRefTi.EngMin = 0;
MissMsgPassdRefTi.EngMax = 4294967295;
MissMsgPassdRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
BUSHISPDFIXDTITHD_MILLISEC_U16 = DataDict.Constant;
BUSHISPDFIXDTITHD_MILLISEC_U16.LongName = 'Bus High Speed Fixed Time Threshold';
BUSHISPDFIXDTITHD_MILLISEC_U16.Description = 'It is constant threshold of 5000ms';
BUSHISPDFIXDTITHD_MILLISEC_U16.DocUnits = 'MilliSec';
BUSHISPDFIXDTITHD_MILLISEC_U16.EngDT = dt.u16;
BUSHISPDFIXDTITHD_MILLISEC_U16.EngVal = 5000;
BUSHISPDFIXDTITHD_MILLISEC_U16.Define = 'Local';


CNVMILLISECTOCNT_CNTPERMILLISEC_U16 = DataDict.Constant;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Millisecond to Count';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ue is multiplied by this constant to convert millisecond to count'];
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


FLT_CNT_U16 = DataDict.Constant;
FLT_CNT_U16.LongName = 'Fault';
FLT_CNT_U16.Description = [...
  'It is value for fault for signals FordVehLaneKeepSysCrvtRaw and FordVe' ...
  'hLaneKeepSysReqdAgRaw'];
FLT_CNT_U16.DocUnits = 'Cnt';
FLT_CNT_U16.EngDT = dt.u16;
FLT_CNT_U16.EngVal = 4094;
FLT_CNT_U16.Define = 'Local';


LANEKEEPSYSCRVTMAX_IVSMTR_F32 = DataDict.Constant;
LANEKEEPSYSCRVTMAX_IVSMTR_F32.LongName = 'Lane Keep System Curvature Maximum';
LANEKEEPSYSCRVTMAX_IVSMTR_F32.Description = [...
  'Maximum value of Ford Vehicle Lane System System Curvature signal'];
LANEKEEPSYSCRVTMAX_IVSMTR_F32.DocUnits = 'IvsMtr';
LANEKEEPSYSCRVTMAX_IVSMTR_F32.EngDT = dt.float32;
LANEKEEPSYSCRVTMAX_IVSMTR_F32.EngVal = 0.01023;
LANEKEEPSYSCRVTMAX_IVSMTR_F32.Define = 'Local';


LANEKEEPSYSCRVTMIN_IVSMTR_F32 = DataDict.Constant;
LANEKEEPSYSCRVTMIN_IVSMTR_F32.LongName = 'Lane Keep System Curvature Minimum';
LANEKEEPSYSCRVTMIN_IVSMTR_F32.Description = [...
  'Minimum value of Ford Vehicle Lane System System Curvature signal'];
LANEKEEPSYSCRVTMIN_IVSMTR_F32.DocUnits = 'IvsMtr';
LANEKEEPSYSCRVTMIN_IVSMTR_F32.EngDT = dt.float32;
LANEKEEPSYSCRVTMIN_IVSMTR_F32.EngVal = -0.01024;
LANEKEEPSYSCRVTMIN_IVSMTR_F32.Define = 'Local';


LANEKEEPSYSCRVTRAWINITVAL_CNT_U16 = DataDict.Constant;
LANEKEEPSYSCRVTRAWINITVAL_CNT_U16.LongName = 'Lane Keep System Curvature Raw Init value';
LANEKEEPSYSCRVTRAWINITVAL_CNT_U16.Description = [...
  'Constant used to initalize Ford Vehicle Lane Curvature Raw 2048'];
LANEKEEPSYSCRVTRAWINITVAL_CNT_U16.DocUnits = 'Cnt';
LANEKEEPSYSCRVTRAWINITVAL_CNT_U16.EngDT = dt.u16;
LANEKEEPSYSCRVTRAWINITVAL_CNT_U16.EngVal = 2048;
LANEKEEPSYSCRVTRAWINITVAL_CNT_U16.Define = 'Local';


LANEKEEPSYSCRVTRAWMAX_CNT_U16 = DataDict.Constant;
LANEKEEPSYSCRVTRAWMAX_CNT_U16.LongName = 'Lane Keep System Curvature Raw Maximum';
LANEKEEPSYSCRVTRAWMAX_CNT_U16.Description = [...
  'Maximum value of Ford Vehicle Lane System System Curvature Raw signal'];
LANEKEEPSYSCRVTRAWMAX_CNT_U16.DocUnits = 'Cnt';
LANEKEEPSYSCRVTRAWMAX_CNT_U16.EngDT = dt.u16;
LANEKEEPSYSCRVTRAWMAX_CNT_U16.EngVal = 4095;
LANEKEEPSYSCRVTRAWMAX_CNT_U16.Define = 'Local';


LANEKEEPSYSCRVTRAWMIN_CNT_U16 = DataDict.Constant;
LANEKEEPSYSCRVTRAWMIN_CNT_U16.LongName = 'Lane Keep System Curvature Raw Minimum';
LANEKEEPSYSCRVTRAWMIN_CNT_U16.Description = [...
  'Minimum value of Ford Vehicle Lane System System Curvature Raw signal'];
LANEKEEPSYSCRVTRAWMIN_CNT_U16.DocUnits = 'Cnt';
LANEKEEPSYSCRVTRAWMIN_CNT_U16.EngDT = dt.u16;
LANEKEEPSYSCRVTRAWMIN_CNT_U16.EngVal = 0;
LANEKEEPSYSCRVTRAWMIN_CNT_U16.Define = 'Local';


LANEKEEPSYSCRVTSCAGFAC_IVSMTRPERCNT_F32 = DataDict.Constant;
LANEKEEPSYSCRVTSCAGFAC_IVSMTRPERCNT_F32.LongName = 'Lane Keep System Curvature Scaling Factor';
LANEKEEPSYSCRVTSCAGFAC_IVSMTRPERCNT_F32.Description = [...
  'Constant used to convert Lane Keep System Curvature into engineering u' ...
  'nits'];
LANEKEEPSYSCRVTSCAGFAC_IVSMTRPERCNT_F32.DocUnits = 'IvsMtrPerCnt';
LANEKEEPSYSCRVTSCAGFAC_IVSMTRPERCNT_F32.EngDT = dt.float32;
LANEKEEPSYSCRVTSCAGFAC_IVSMTRPERCNT_F32.EngVal = 5e-06;
LANEKEEPSYSCRVTSCAGFAC_IVSMTRPERCNT_F32.Define = 'Local';


LANEKEEPSYSCRVTSOFFS_IVSMTR_F32 = DataDict.Constant;
LANEKEEPSYSCRVTSOFFS_IVSMTR_F32.LongName = 'Lane Keep System Curvature Offset';
LANEKEEPSYSCRVTSOFFS_IVSMTR_F32.Description = [...
  'Constant used to convert Lane Keep System Curvature into engineering u' ...
  'nits'];
LANEKEEPSYSCRVTSOFFS_IVSMTR_F32.DocUnits = 'IvsMtr';
LANEKEEPSYSCRVTSOFFS_IVSMTR_F32.EngDT = dt.float32;
LANEKEEPSYSCRVTSOFFS_IVSMTR_F32.EngVal = 0.01024;
LANEKEEPSYSCRVTSOFFS_IVSMTR_F32.Define = 'Local';


LANEKEEPSYSREQDAGMAX_MILLIRAD_F32 = DataDict.Constant;
LANEKEEPSYSREQDAGMAX_MILLIRAD_F32.LongName = 'Lane Keep System Requested Angle Maximum';
LANEKEEPSYSREQDAGMAX_MILLIRAD_F32.Description = [...
  'Maximum value of Lane Keep System Required Angle'];
LANEKEEPSYSREQDAGMAX_MILLIRAD_F32.DocUnits = 'MilliRad';
LANEKEEPSYSREQDAGMAX_MILLIRAD_F32.EngDT = dt.float32;
LANEKEEPSYSREQDAGMAX_MILLIRAD_F32.EngVal = 102.3;
LANEKEEPSYSREQDAGMAX_MILLIRAD_F32.Define = 'Local';


LANEKEEPSYSREQDAGMIN_MILLIRAD_F32 = DataDict.Constant;
LANEKEEPSYSREQDAGMIN_MILLIRAD_F32.LongName = 'Lane Keep System Requested Angle Minimum';
LANEKEEPSYSREQDAGMIN_MILLIRAD_F32.Description = [...
  'Maximum value of Lane Keep System Required Angle'];
LANEKEEPSYSREQDAGMIN_MILLIRAD_F32.DocUnits = 'MilliRad';
LANEKEEPSYSREQDAGMIN_MILLIRAD_F32.EngDT = dt.float32;
LANEKEEPSYSREQDAGMIN_MILLIRAD_F32.EngVal = -102.4;
LANEKEEPSYSREQDAGMIN_MILLIRAD_F32.Define = 'Local';


LANEKEEPSYSREQDAGOFFS_MILLIRAD_F32 = DataDict.Constant;
LANEKEEPSYSREQDAGOFFS_MILLIRAD_F32.LongName = 'Lane Keep System Requested Angle Offset';
LANEKEEPSYSREQDAGOFFS_MILLIRAD_F32.Description = [...
  'Constant used to convert Lane Keep System Requested Angle into enginee' ...
  'ring units'];
LANEKEEPSYSREQDAGOFFS_MILLIRAD_F32.DocUnits = 'MilliRad';
LANEKEEPSYSREQDAGOFFS_MILLIRAD_F32.EngDT = dt.float32;
LANEKEEPSYSREQDAGOFFS_MILLIRAD_F32.EngVal = 102.4;
LANEKEEPSYSREQDAGOFFS_MILLIRAD_F32.Define = 'Local';


LANEKEEPSYSREQDAGRAWINITVAL_CNT_U16 = DataDict.Constant;
LANEKEEPSYSREQDAGRAWINITVAL_CNT_U16.LongName = 'Lane Keep System Requested Angle Init Value';
LANEKEEPSYSREQDAGRAWINITVAL_CNT_U16.Description = [...
  'Constant used to initalize Ford Vehicle Lane Curvature Raw 2048'];
LANEKEEPSYSREQDAGRAWINITVAL_CNT_U16.DocUnits = 'Cnt';
LANEKEEPSYSREQDAGRAWINITVAL_CNT_U16.EngDT = dt.u16;
LANEKEEPSYSREQDAGRAWINITVAL_CNT_U16.EngVal = 2048;
LANEKEEPSYSREQDAGRAWINITVAL_CNT_U16.Define = 'Local';


LANEKEEPSYSREQDAGRAWMAX_CNT_U16 = DataDict.Constant;
LANEKEEPSYSREQDAGRAWMAX_CNT_U16.LongName = 'Lane Keep System Requested Angle Raw Maximum';
LANEKEEPSYSREQDAGRAWMAX_CNT_U16.Description = [...
  'Maximum value of Lane Keep System Requested Angle Raw'];
LANEKEEPSYSREQDAGRAWMAX_CNT_U16.DocUnits = 'Cnt';
LANEKEEPSYSREQDAGRAWMAX_CNT_U16.EngDT = dt.u16;
LANEKEEPSYSREQDAGRAWMAX_CNT_U16.EngVal = 4095;
LANEKEEPSYSREQDAGRAWMAX_CNT_U16.Define = 'Local';


LANEKEEPSYSREQDAGRAWMIN_CNT_U16 = DataDict.Constant;
LANEKEEPSYSREQDAGRAWMIN_CNT_U16.LongName = 'Lane Keep System Requested Angle Raw Minimum';
LANEKEEPSYSREQDAGRAWMIN_CNT_U16.Description = [...
  'Minimum value of Lane Keep System Requested Angle Raw'];
LANEKEEPSYSREQDAGRAWMIN_CNT_U16.DocUnits = 'Cnt';
LANEKEEPSYSREQDAGRAWMIN_CNT_U16.EngDT = dt.u16;
LANEKEEPSYSREQDAGRAWMIN_CNT_U16.EngVal = 0;
LANEKEEPSYSREQDAGRAWMIN_CNT_U16.Define = 'Local';


LANEKEEPSYSREQDAGSCAGFAC_MILLIRADPERCNT_F32 = DataDict.Constant;
LANEKEEPSYSREQDAGSCAGFAC_MILLIRADPERCNT_F32.LongName = 'Lane Keep System Requested Angle Scaling Factor';
LANEKEEPSYSREQDAGSCAGFAC_MILLIRADPERCNT_F32.Description = [...
  'Constant used to convert Lane Keep System Requested Angle into enginee' ...
  'ring units'];
LANEKEEPSYSREQDAGSCAGFAC_MILLIRADPERCNT_F32.DocUnits = 'MilliRadPerCnt';
LANEKEEPSYSREQDAGSCAGFAC_MILLIRADPERCNT_F32.EngDT = dt.float32;
LANEKEEPSYSREQDAGSCAGFAC_MILLIRADPERCNT_F32.EngVal = 0.05;
LANEKEEPSYSREQDAGSCAGFAC_MILLIRADPERCNT_F32.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg3CAMissMsg = DataDict.NTC;
FordMsg3CAMissMsg.NtcNr = NtcNr1.NTCNR_0X14A;
FordMsg3CAMissMsg.NtcTyp = 'None';
FordMsg3CAMissMsg.LongName = 'Ford Message 3CA Missing Message';
FordMsg3CAMissMsg.Description = 'Ford Message 3CA Missing Message Diagnostic';
FordMsg3CAMissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg3CAMissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg3CAMissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg3CAMissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg3CAMissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg3CAMissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg3CAMissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg3CAMissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg3CAMissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg3CAMissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehLaneKeepSysCrvtInvld = DataDict.NTC;
FordVehLaneKeepSysCrvtInvld.NtcNr = NtcNr1.NTCNR_0X14C;
FordVehLaneKeepSysCrvtInvld.NtcTyp = 'None';
FordVehLaneKeepSysCrvtInvld.LongName = 'Ford Vehicle Lane Keep System Curvature Invalid';
FordVehLaneKeepSysCrvtInvld.Description = 'Ford Message 3CA Invalid Message Diagnostic';
FordVehLaneKeepSysCrvtInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehLaneKeepSysCrvtInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehLaneKeepSysCrvtInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehLaneKeepSysCrvtInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehLaneKeepSysCrvtInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehLaneKeepSysCrvtInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehLaneKeepSysCrvtInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehLaneKeepSysCrvtInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehLaneKeepSysCrvtInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehLaneKeepSysCrvtInvld.NtcStsLockdThisIgnCyc = 0;


FordVehLaneKeepSysReqdAgInvld = DataDict.NTC;
FordVehLaneKeepSysReqdAgInvld.NtcNr = NtcNr1.NTCNR_0X14B;
FordVehLaneKeepSysReqdAgInvld.NtcTyp = 'None';
FordVehLaneKeepSysReqdAgInvld.LongName = 'Ford Vehicle Lane Keep System Requested Angle Invalid';
FordVehLaneKeepSysReqdAgInvld.Description = 'Ford Message 3CA Invalid Message Diagnostic';
FordVehLaneKeepSysReqdAgInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehLaneKeepSysReqdAgInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehLaneKeepSysReqdAgInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehLaneKeepSysReqdAgInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehLaneKeepSysReqdAgInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehLaneKeepSysReqdAgInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehLaneKeepSysReqdAgInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehLaneKeepSysReqdAgInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehLaneKeepSysReqdAgInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehLaneKeepSysReqdAgInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
