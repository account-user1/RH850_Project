%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 05-Apr-2018 13:01:23       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM056A = DataDict.FDD;
MM056A.Version = '1.0.X';
MM056A.LongName = 'Ford Message 091 Bus High Speed';
MM056A.ShoName  = 'FordMsg091BusHiSpd';
MM056A.DesignASIL = 'B';
MM056A.Description = [...
  'The purpose of the Ford Message 091 Bus High Speed function is to prov' ...
  'idethe Electric Power Steeringsystem with signal values for the Traffi' ...
  'c Jam Assist and Lane Center Assist functions from CAN. The Ford Messa' ...
  'ge 091 function will perform the missing message and signal invalid di' ...
  'agnostics aswell as provide a validity flag for the signal values and ' ...
  'received message.Detailed requirements have implemented the Ford DBC f' ...
  'ile for guidance. '];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg091BusHiSpdInit1 = DataDict.Runnable;
FordMsg091BusHiSpdInit1.Context = 'Rte';
FordMsg091BusHiSpdInit1.TimeStep = 0;
FordMsg091BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg091BusHiSpdPer1 = DataDict.Runnable;
FordMsg091BusHiSpdPer1.Context = 'Rte';
FordMsg091BusHiSpdPer1.TimeStep = 0.01;
FordMsg091BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds'];

ComIPduCallout_Yaw_Data_FD1 = DataDict.SrvRunnable;
ComIPduCallout_Yaw_Data_FD1.Context = 'NonRte';
ComIPduCallout_Yaw_Data_FD1.Description = [...
  'Server Runnable for Message reception '];
ComIPduCallout_Yaw_Data_FD1.Return = DataDict.CSReturn;
ComIPduCallout_Yaw_Data_FD1.Return.Type = 'None';
ComIPduCallout_Yaw_Data_FD1.Return.Min = [];
ComIPduCallout_Yaw_Data_FD1.Return.Max = [];
ComIPduCallout_Yaw_Data_FD1.Return.TestTolerance = [];
ComIPduCallout_Yaw_Data_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_Yaw_Data_FD1.Arguments(1).Name = 'Yaw';
ComIPduCallout_Yaw_Data_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_Yaw_Data_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_Yaw_Data_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_Yaw_Data_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_Yaw_Data_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_Yaw_Data_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_Yaw_Data_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_Yaw_Data_FD1.Arguments(1).Description = [...
  'Yaw is set to one when service is invoked'];

ComTimeoutNotification_VehYaw_W_Actl = DataDict.SrvRunnable;
ComTimeoutNotification_VehYaw_W_Actl.Context = 'NonRte';
ComTimeoutNotification_VehYaw_W_Actl.Description = [...
  'Server Runnable for Message Timeout '];
ComTimeoutNotification_VehYaw_W_Actl.Return = DataDict.CSReturn;
ComTimeoutNotification_VehYaw_W_Actl.Return.Type = 'None';
ComTimeoutNotification_VehYaw_W_Actl.Return.Min = [];
ComTimeoutNotification_VehYaw_W_Actl.Return.Max = [];
ComTimeoutNotification_VehYaw_W_Actl.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg091BusHiSpdInit1','FordMsg091BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg091BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg091BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg091BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 in order to Test Diagnostic NTC.Custome' ...
  'r datatype should be used. Data Type: Boolean with Min value “False”(0' ...
  '), Init value “True”(1) and Max value “True”(1)'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg091BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'Ford Electric Power Steering Life Cycle';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibration value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg091BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordLaneCentrAssiEnad = DataDict.IpSignal;
FordLaneCentrAssiEnad.LongName = 'Ford Lane Center Assist Enabled';
FordLaneCentrAssiEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required. Customer datatype should be used. Data ' ...
  'Type: Boolean with Min value “False”(0),Init value “False”(0) and Max ' ...
  'value “True”(1)'];
FordLaneCentrAssiEnad.DocUnits = 'Cnt';
FordLaneCentrAssiEnad.EngDT = dt.lgc;
FordLaneCentrAssiEnad.EngInit = 0;
FordLaneCentrAssiEnad.EngMin = 0;
FordLaneCentrAssiEnad.EngMax = 1;
FordLaneCentrAssiEnad.ReadIn = {'FordMsg091BusHiSpdPer1'};
FordLaneCentrAssiEnad.ReadType = 'Rte';


FordTrfcJamAssiEnad = DataDict.IpSignal;
FordTrfcJamAssiEnad.LongName = 'Ford Traffic Jam Assist Enabled';
FordTrfcJamAssiEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required. Customer datatype should be used. Data ' ...
  'Type: Boolean with Min value “False”(0), Init value “False”(0) and Max' ...
  ' value “True”(1)'];
FordTrfcJamAssiEnad.DocUnits = 'Cnt';
FordTrfcJamAssiEnad.EngDT = dt.lgc;
FordTrfcJamAssiEnad.EngInit = 0;
FordTrfcJamAssiEnad.EngMin = 0;
FordTrfcJamAssiEnad.EngMax = 1;
FordTrfcJamAssiEnad.ReadIn = {'FordMsg091BusHiSpdPer1'};
FordTrfcJamAssiEnad.ReadType = 'Rte';


FordTrlrBackUpAssiEnad = DataDict.IpSignal;
FordTrlrBackUpAssiEnad.LongName = 'Ford Trailer Back Up Assist Enabled';
FordTrlrBackUpAssiEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required. Customer datatype should be used. Data ' ...
  'Type: Boolean with Min value “False”(0), Init value “False”(0) and Max' ...
  ' value “True”(1)'];
FordTrlrBackUpAssiEnad.DocUnits = 'Cnt';
FordTrlrBackUpAssiEnad.EngDT = dt.lgc;
FordTrlrBackUpAssiEnad.EngInit = 0;
FordTrlrBackUpAssiEnad.EngMin = 0;
FordTrlrBackUpAssiEnad.EngMax = 1;
FordTrlrBackUpAssiEnad.ReadIn = {'FordMsg091BusHiSpdPer1'};
FordTrlrBackUpAssiEnad.ReadType = 'Rte';


Ford_VehYaw_W_Actl = DataDict.IpSignal;
Ford_VehYaw_W_Actl.LongName = 'Ford_VehYaw_W_Actl';
Ford_VehYaw_W_Actl.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Customer Data type : Ford_VehYaw_W_Actl,Sourc' ...
  'esignal range: [0,65535], CxFFFE_NoDataExists(65534) and CxFFFF_Fault(' ...
  '65535).'];
Ford_VehYaw_W_Actl.DocUnits = 'Cnt';
Ford_VehYaw_W_Actl.EngDT = dt.u16;
Ford_VehYaw_W_Actl.EngInit = 65534;
Ford_VehYaw_W_Actl.EngMin = 0;
Ford_VehYaw_W_Actl.EngMax = 65535;
Ford_VehYaw_W_Actl.ReadIn = {'FordMsg091BusHiSpdPer1'};
Ford_VehYaw_W_Actl.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehYawRate = DataDict.OpSignal;
FordVehYawRate.LongName = 'Ford Vehicle Yaw Rate';
FordVehYawRate.Description = [...
  'Processed value of Ford Vehicle Yaw Rate to be used by EPS'];
FordVehYawRate.DocUnits = 'RadPerSec';
FordVehYawRate.SwcShoName = 'FordMsg091BusHiSpd';
FordVehYawRate.EngDT = dt.float32;
FordVehYawRate.EngInit = 6.6066;
FordVehYawRate.EngMin = -6.5;
FordVehYawRate.EngMax = 6.6066;
FordVehYawRate.TestTolerance = 0;
FordVehYawRate.WrittenIn = {'FordMsg091BusHiSpdPer1'};
FordVehYawRate.WriteType = 'Rte';


FordVehYawRateRaw = DataDict.OpSignal;
FordVehYawRateRaw.LongName = 'Ford Vehicle Yaw Rate Raw';
FordVehYawRateRaw.Description = [...
  'Ford_VehYaw_W_Actl value is assigned to  Ford Vehicle Yaw Rate Rawto b' ...
  'e used by EPS'];
FordVehYawRateRaw.DocUnits = 'Cnt';
FordVehYawRateRaw.SwcShoName = 'FordMsg091BusHiSpd';
FordVehYawRateRaw.EngDT = dt.u16;
FordVehYawRateRaw.EngInit = 65534;
FordVehYawRateRaw.EngMin = 0;
FordVehYawRateRaw.EngMax = 65535;
FordVehYawRateRaw.TestTolerance = 0;
FordVehYawRateRaw.WrittenIn = {'FordMsg091BusHiSpdPer1'};
FordVehYawRateRaw.WriteType = 'Rte';


FordVehYawRateRawVld = DataDict.OpSignal;
FordVehYawRateRawVld.LongName = 'Ford Vehicle Yaw Rate Raw Valid';
FordVehYawRateRawVld.Description = [...
  'This signal Check the validity of Ford Vehicle Yaw Rate Raw Valid is s' ...
  'ignal'];
FordVehYawRateRawVld.DocUnits = 'Cnt';
FordVehYawRateRawVld.SwcShoName = 'FordMsg091BusHiSpd';
FordVehYawRateRawVld.EngDT = dt.lgc;
FordVehYawRateRawVld.EngInit = 0;
FordVehYawRateRawVld.EngMin = 0;
FordVehYawRateRawVld.EngMax = 1;
FordVehYawRateRawVld.TestTolerance = 0;
FordVehYawRateRawVld.WrittenIn = {'FordMsg091BusHiSpdPer1'};
FordVehYawRateRawVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg091BusHiSpdInvldMsgFaildThd = DataDict.Calibration;
FordMsg091BusHiSpdInvldMsgFaildThd.LongName = 'Ford Message 091 Bus High Speed Invalid Message Failed Threshold';
FordMsg091BusHiSpdInvldMsgFaildThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg091BusHiSpdInvldMsgFaildThd.DocUnits = 'MilliSec';
FordMsg091BusHiSpdInvldMsgFaildThd.EngDT = dt.u16;
FordMsg091BusHiSpdInvldMsgFaildThd.EngVal = 0;
FordMsg091BusHiSpdInvldMsgFaildThd.EngMin = 0;
FordMsg091BusHiSpdInvldMsgFaildThd.EngMax = 6000;
FordMsg091BusHiSpdInvldMsgFaildThd.Cardinality = 'Cmn';
FordMsg091BusHiSpdInvldMsgFaildThd.CustomerVisible = false;
FordMsg091BusHiSpdInvldMsgFaildThd.Online = false;
FordMsg091BusHiSpdInvldMsgFaildThd.Impact = 'L';
FordMsg091BusHiSpdInvldMsgFaildThd.TuningOwner = 'EPDT';
FordMsg091BusHiSpdInvldMsgFaildThd.GraphLink = {''};
FordMsg091BusHiSpdInvldMsgFaildThd.Monotony = 'None';
FordMsg091BusHiSpdInvldMsgFaildThd.MaxGrad = 0;
FordMsg091BusHiSpdInvldMsgFaildThd.PortName = 'FordMsg091BusHiSpdInvldMsgFaildThd';


FordMsg091BusHiSpdInvldMsgPassdThd = DataDict.Calibration;
FordMsg091BusHiSpdInvldMsgPassdThd.LongName = 'Ford Message 091 Bus High Speed Invalid Message Passed Threshold';
FordMsg091BusHiSpdInvldMsgPassdThd.Description = [...
  'Threshold to clear the Invalid message NTC'];
FordMsg091BusHiSpdInvldMsgPassdThd.DocUnits = 'MilliSec';
FordMsg091BusHiSpdInvldMsgPassdThd.EngDT = dt.u16;
FordMsg091BusHiSpdInvldMsgPassdThd.EngVal = 0;
FordMsg091BusHiSpdInvldMsgPassdThd.EngMin = 0;
FordMsg091BusHiSpdInvldMsgPassdThd.EngMax = 6000;
FordMsg091BusHiSpdInvldMsgPassdThd.Cardinality = 'Cmn';
FordMsg091BusHiSpdInvldMsgPassdThd.CustomerVisible = false;
FordMsg091BusHiSpdInvldMsgPassdThd.Online = false;
FordMsg091BusHiSpdInvldMsgPassdThd.Impact = 'L';
FordMsg091BusHiSpdInvldMsgPassdThd.TuningOwner = 'EPDT';
FordMsg091BusHiSpdInvldMsgPassdThd.GraphLink = {''};
FordMsg091BusHiSpdInvldMsgPassdThd.Monotony = 'None';
FordMsg091BusHiSpdInvldMsgPassdThd.MaxGrad = 0;
FordMsg091BusHiSpdInvldMsgPassdThd.PortName = 'FordMsg091BusHiSpdInvldMsgPassdThd';


FordMsg091BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg091BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 091 Bus High Speed Missing Message Failed Threshold';
FordMsg091BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg091BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg091BusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg091BusHiSpdMissMsgFaildThd.EngVal = 100;
FordMsg091BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg091BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg091BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg091BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg091BusHiSpdMissMsgFaildThd.Online = false;
FordMsg091BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg091BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg091BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg091BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg091BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg091BusHiSpdMissMsgFaildThd.PortName = 'FordMsg091BusHiSpdMissMsgFaildThd';


FordMsg091BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg091BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 091 Bus High Speed Missing Message Passed Threshold';
FordMsg091BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to clear the Missing message NTC'];
FordMsg091BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg091BusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg091BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg091BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg091BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg091BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg091BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg091BusHiSpdMissMsgPassdThd.Online = false;
FordMsg091BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg091BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg091BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg091BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg091BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg091BusHiSpdMissMsgPassdThd.PortName = 'FordMsg091BusHiSpdMissMsgPassdThd';


FordMsg091BusHiSpdYawRateRawVldMissFaildThd = DataDict.Calibration;
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.LongName = 'Ford Message 091 Bus High Speed Yaw Rate Raw Valid Missing Failed Threshold';
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.Description = [...
  'Threshold to set the output Ford Vehicle Yaw Rate Raw Valid to False'];
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.DocUnits = 'MilliSec';
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.EngDT = dt.u16;
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.EngVal = 100;
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.EngMin = 0;
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.EngMax = 6000;
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.Cardinality = 'Cmn';
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.CustomerVisible = false;
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.Online = false;
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.Impact = 'H';
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.TuningOwner = 'EPDT';
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.GraphLink = {''};
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.Monotony = 'None';
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.MaxGrad = Inf;
FordMsg091BusHiSpdYawRateRawVldMissFaildThd.PortName = 'FordMsg091BusHiSpdYawRateRawVldMissFaildThd';


FordMsg091BusHiSpdYawRateRawVldSigFaildThd = DataDict.Calibration;
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.LongName = 'Ford Message 091 Bus High Speed Yaw Rate Raw Valid Signal Failed Threshold';
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.Description = [...
  'Threshold to set the output Ford Vehicle Yaw Rate Raw Valid to False'];
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.DocUnits = 'MilliSec';
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.EngDT = dt.u16;
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.EngVal = 0;
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.EngMin = 0;
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.EngMax = 6000;
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.Cardinality = 'Cmn';
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.CustomerVisible = false;
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.Online = false;
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.Impact = 'H';
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.TuningOwner = 'EPDT';
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.GraphLink = {''};
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.Monotony = 'None';
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.MaxGrad = 0;
FordMsg091BusHiSpdYawRateRawVldSigFaildThd.PortName = 'FordMsg091BusHiSpdYawRateRawVldSigFaildThd';


FordMsg091BusHiSpdYawRateRawVldSigPassdThd = DataDict.Calibration;
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.LongName = 'Ford Message 091 Bus High Speed Yaw Rate Raw Valid Signal Passed Threshold';
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.Description = [...
  'Threshold to set the output Ford Vehicle Yaw Rate Raw Valid to True'];
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.DocUnits = 'MilliSec';
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.EngDT = dt.u16;
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.EngVal = 5000;
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.EngMin = 0;
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.EngMax = 6000;
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.Cardinality = 'Cmn';
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.CustomerVisible = false;
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.Online = false;
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.Impact = 'H';
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.TuningOwner = 'EPDT';
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.GraphLink = {''};
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.Monotony = 'None';
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.MaxGrad = 0;
FordMsg091BusHiSpdYawRateRawVldSigPassdThd.PortName = 'FordMsg091BusHiSpdYawRateRawVldSigPassdThd';



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
ClrDiagcFlgProxyPrev.LongName = 'Clear Diagnostic Flag Proxy Previous';
ClrDiagcFlgProxyPrev.Description = 'Clear Diagc Flag Proxy Previous';
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


FordVehMsg091Miss = DataDict.PIM;
FordVehMsg091Miss.LongName = 'Ford Vehicle Message 091 Missing';
FordVehMsg091Miss.Description = [...
  'Used to hold value of Ford Vehicle message 091 miss'];
FordVehMsg091Miss.DocUnits = 'Cnt';
FordVehMsg091Miss.EngDT = dt.lgc;
FordVehMsg091Miss.EngMin = 0;
FordVehMsg091Miss.EngMax = 1;
FordVehMsg091Miss.InitRowCol = [1  1];


FordVehYawRatePrev = DataDict.PIM;
FordVehYawRatePrev.LongName = 'Ford Vehicle Yaw Rate Previous';
FordVehYawRatePrev.Description = [...
  'Hold the Previous value of Ford Vehicle Yaw Rate'];
FordVehYawRatePrev.DocUnits = 'RadPerSec';
FordVehYawRatePrev.EngDT = dt.float32;
FordVehYawRatePrev.EngMin = -6.5;
FordVehYawRatePrev.EngMax = 6.6066;
FordVehYawRatePrev.InitRowCol = [1  1];


FordVehYawRateRawPrev = DataDict.PIM;
FordVehYawRateRawPrev.LongName = 'Ford Vehicle Yaw Rate Raw Previous';
FordVehYawRateRawPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Yaw Rate Raw'];
FordVehYawRateRawPrev.DocUnits = 'Cnt';
FordVehYawRateRawPrev.EngDT = dt.u16;
FordVehYawRateRawPrev.EngMin = 0;
FordVehYawRateRawPrev.EngMax = 65535;
FordVehYawRateRawPrev.InitRowCol = [1  1];


FordVehYawRateRawVldFaildRefTi = DataDict.PIM;
FordVehYawRateRawVldFaildRefTi.LongName = 'Ford Vehicle Yaw Rate Raw Valid Failed Reference Time';
FordVehYawRateRawVldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Yaw Rate Raw Valid Failed Reference Time will i' ...
  'ncrement or reset based on the conditions'];
FordVehYawRateRawVldFaildRefTi.DocUnits = 'MilliSec';
FordVehYawRateRawVldFaildRefTi.EngDT = dt.u32;
FordVehYawRateRawVldFaildRefTi.EngMin = 0;
FordVehYawRateRawVldFaildRefTi.EngMax = 4294967295;
FordVehYawRateRawVldFaildRefTi.InitRowCol = [1  1];


FordVehYawRateRawVldMissRefTi = DataDict.PIM;
FordVehYawRateRawVldMissRefTi.LongName = 'Ford Vehicle Yaw Rate Raw Valid Missing Reference Time';
FordVehYawRateRawVldMissRefTi.Description = [...
  'Timer for Ford Vehicle Yaw Rate Raw Valid Missing Reference Time will ' ...
  'incrementor reset based on the conditions'];
FordVehYawRateRawVldMissRefTi.DocUnits = 'MilliSec';
FordVehYawRateRawVldMissRefTi.EngDT = dt.u32;
FordVehYawRateRawVldMissRefTi.EngMin = 0;
FordVehYawRateRawVldMissRefTi.EngMax = 4294967295;
FordVehYawRateRawVldMissRefTi.InitRowCol = [1  1];


FordVehYawRateRawVldPassdRefTi = DataDict.PIM;
FordVehYawRateRawVldPassdRefTi.LongName = 'Ford Vehicle Yaw Rate Raw Valid Passed Reference Time';
FordVehYawRateRawVldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Yaw Rate Raw Valid Passed Reference Time will i' ...
  'ncrement or reset based on the conditions'];
FordVehYawRateRawVldPassdRefTi.DocUnits = 'MilliSec';
FordVehYawRateRawVldPassdRefTi.EngDT = dt.u32;
FordVehYawRateRawVldPassdRefTi.EngMin = 0;
FordVehYawRateRawVldPassdRefTi.EngMax = 4294967295;
FordVehYawRateRawVldPassdRefTi.InitRowCol = [1  1];


FordVehYawRateRawVldPrev = DataDict.PIM;
FordVehYawRateRawVldPrev.LongName = 'Ford Vehicle Yaw Rate Raw Valid Previous';
FordVehYawRateRawVldPrev.Description = [...
  'Previous Value of Ford Vehicle Yaw Rate Raw Valid'];
FordVehYawRateRawVldPrev.DocUnits = 'Cnt';
FordVehYawRateRawVldPrev.EngDT = dt.lgc;
FordVehYawRateRawVldPrev.EngMin = 0;
FordVehYawRateRawVldPrev.EngMax = 1;
FordVehYawRateRawVldPrev.InitRowCol = [1  1];


InvldMsgFaildRefTi = DataDict.PIM;
InvldMsgFaildRefTi.LongName = 'Invalid Message Failed Reference Time';
InvldMsgFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
InvldMsgFaildRefTi.DocUnits = 'MilliSec';
InvldMsgFaildRefTi.EngDT = dt.u32;
InvldMsgFaildRefTi.EngMin = 0;
InvldMsgFaildRefTi.EngMax = 4294967295;
InvldMsgFaildRefTi.InitRowCol = [1  1];


InvldMsgPassdRefTi = DataDict.PIM;
InvldMsgPassdRefTi.LongName = 'Invalid Message Passed Reference Time';
InvldMsgPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
InvldMsgPassdRefTi.DocUnits = 'MilliSec';
InvldMsgPassdRefTi.EngDT = dt.u32;
InvldMsgPassdRefTi.EngMin = 0;
InvldMsgPassdRefTi.EngMax = 4294967295;
InvldMsgPassdRefTi.InitRowCol = [1  1];


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
CNVCNTTORADPERSEC_RADPERSECPERCNT_F32 = DataDict.Constant;
CNVCNTTORADPERSEC_RADPERSECPERCNT_F32.LongName = 'Covert Count to Radian Per Second';
CNVCNTTORADPERSEC_RADPERSECPERCNT_F32.Description = [...
  'Used to convert Ford Vehicle Yaw Rate Raw to Ford Vehicle Yaw Rate'];
CNVCNTTORADPERSEC_RADPERSECPERCNT_F32.DocUnits = 'RadPerSecPerCnt';
CNVCNTTORADPERSEC_RADPERSECPERCNT_F32.EngDT = dt.float32;
CNVCNTTORADPERSEC_RADPERSECPERCNT_F32.EngVal = 0.0002;
CNVCNTTORADPERSEC_RADPERSECPERCNT_F32.Define = 'Local';


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


FIXDVAL_MILLISEC_U16 = DataDict.Constant;
FIXDVAL_MILLISEC_U16.LongName = 'Fixed Value';
FIXDVAL_MILLISEC_U16.Description = [...
  'Pass constant value 5000 if EpsLifeCycMod is one'];
FIXDVAL_MILLISEC_U16.DocUnits = 'MilliSec';
FIXDVAL_MILLISEC_U16.EngDT = dt.u16;
FIXDVAL_MILLISEC_U16.EngVal = 5000;
FIXDVAL_MILLISEC_U16.Define = 'Local';


FORDVEHYAWRATERAWFLT_CNT_U16 = DataDict.Constant;
FORDVEHYAWRATERAWFLT_CNT_U16.LongName = 'Vehicle Yaw Rate Raw Fault';
FORDVEHYAWRATERAWFLT_CNT_U16.Description = [...
  'Threshold for Ford Vehicle Yaw Rate Raw to set Ford Vehicle Yaw Rate R' ...
  'aw Valid'];
FORDVEHYAWRATERAWFLT_CNT_U16.DocUnits = 'Cnt';
FORDVEHYAWRATERAWFLT_CNT_U16.EngDT = dt.u16;
FORDVEHYAWRATERAWFLT_CNT_U16.EngVal = 65535;
FORDVEHYAWRATERAWFLT_CNT_U16.Define = 'Local';


FORDVEHYAWRATERAWNODATA_CNT_U16 = DataDict.Constant;
FORDVEHYAWRATERAWNODATA_CNT_U16.LongName = 'Ford Vehicle Yaw Rate Raw No Data';
FORDVEHYAWRATERAWNODATA_CNT_U16.Description = [...
  'Threshold for Ford Vehicle Yaw Rate Raw to set Ford Vehicle Yaw Rate R' ...
  'aw Valid'];
FORDVEHYAWRATERAWNODATA_CNT_U16.DocUnits = 'Cnt';
FORDVEHYAWRATERAWNODATA_CNT_U16.EngDT = dt.u16;
FORDVEHYAWRATERAWNODATA_CNT_U16.EngVal = 65534;
FORDVEHYAWRATERAWNODATA_CNT_U16.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


VEHYAWRATEVAL_RADPERSEC_F32 = DataDict.Constant;
VEHYAWRATEVAL_RADPERSEC_F32.LongName = 'Vehicle Yaw Rate Value';
VEHYAWRATEVAL_RADPERSEC_F32.Description = [...
  'Used to convert Ford Vehicle Yaw Rate Raw to Ford Vehicle Yaw Rate'];
VEHYAWRATEVAL_RADPERSEC_F32.DocUnits = 'RadPerSec';
VEHYAWRATEVAL_RADPERSEC_F32.EngDT = dt.float32;
VEHYAWRATEVAL_RADPERSEC_F32.EngVal = 6.5;
VEHYAWRATEVAL_RADPERSEC_F32.Define = 'Local';


VEHYAWRATE_RADPERSEC_F32 = DataDict.Constant;
VEHYAWRATE_RADPERSEC_F32.LongName = 'Vehicle Yaw Rate';
VEHYAWRATE_RADPERSEC_F32.Description = 'Used to set Ford Vehicle Yaw Rate';
VEHYAWRATE_RADPERSEC_F32.DocUnits = 'RadPerSec';
VEHYAWRATE_RADPERSEC_F32.EngDT = dt.float32;
VEHYAWRATE_RADPERSEC_F32.EngVal = 6.6066;
VEHYAWRATE_RADPERSEC_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg091MissMsg = DataDict.NTC;
FordMsg091MissMsg.NtcNr = NtcNr1.NTCNR_0X11A;
FordMsg091MissMsg.NtcTyp = 'None';
FordMsg091MissMsg.LongName = 'Ford Message 091 Missing Message';
FordMsg091MissMsg.Description = 'Ford Message 091 Missing Message Diagnostic';
FordMsg091MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg091MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg091MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg091MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg091MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg091MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg091MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg091MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg091MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg091MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehYawRateInvldMsg = DataDict.NTC;
FordVehYawRateInvldMsg.NtcNr = NtcNr1.NTCNR_0X11B;
FordVehYawRateInvldMsg.NtcTyp = 'None';
FordVehYawRateInvldMsg.LongName = 'Ford Vehicle Yaw Rate Invalid Message';
FordVehYawRateInvldMsg.Description = 'Ford Message 091 Invalid Message';
FordVehYawRateInvldMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehYawRateInvldMsg.NtcStInfo.Bit0Descr = 'Unused';
FordVehYawRateInvldMsg.NtcStInfo.Bit1Descr = 'Unused';
FordVehYawRateInvldMsg.NtcStInfo.Bit2Descr = 'Unused';
FordVehYawRateInvldMsg.NtcStInfo.Bit3Descr = 'Unused';
FordVehYawRateInvldMsg.NtcStInfo.Bit4Descr = 'Unused';
FordVehYawRateInvldMsg.NtcStInfo.Bit5Descr = 'Unused';
FordVehYawRateInvldMsg.NtcStInfo.Bit6Descr = 'Unused';
FordVehYawRateInvldMsg.NtcStInfo.Bit7Descr = 'Unused';
FordVehYawRateInvldMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
