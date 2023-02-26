%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 23-Mar-2018 17:57:34       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM070A = DataDict.FDD;
MM070A.Version = '2.0.X';
MM070A.LongName = 'Ford Message 414 Bus High Speed';
MM070A.ShoName  = 'FordMsg414BusHiSpd';
MM070A.DesignASIL = 'B';
MM070A.Description = [...
  'The purpose of the Ford Message 414 Bus High Speed function isto provi' ...
  'de the Electric Power Steering system with signal valuesfor base elect' ...
  'ric power steering functionalityDetailed requirements have implemented' ...
  ' the Ford DBC file for guidance.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg414BusHiSpdInit1 = DataDict.Runnable;
FordMsg414BusHiSpdInit1.Context = 'Rte';
FordMsg414BusHiSpdInit1.TimeStep = 0;
FordMsg414BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg414BusHiSpdPer1 = DataDict.Runnable;
FordMsg414BusHiSpdPer1.Context = 'Rte';
FordMsg414BusHiSpdPer1.TimeStep = 0.01;
FordMsg414BusHiSpdPer1.Description = 'Periodic Runnable at 0.01 sec';

ComIPduCallout_BrakeSnData_6_FD1 = DataDict.SrvRunnable;
ComIPduCallout_BrakeSnData_6_FD1.Context = 'NonRte';
ComIPduCallout_BrakeSnData_6_FD1.Description = [...
  'Server Runnable for Message Reception'];
ComIPduCallout_BrakeSnData_6_FD1.Return = DataDict.CSReturn;
ComIPduCallout_BrakeSnData_6_FD1.Return.Type = 'None';
ComIPduCallout_BrakeSnData_6_FD1.Return.Min = [];
ComIPduCallout_BrakeSnData_6_FD1.Return.Max = [];
ComIPduCallout_BrakeSnData_6_FD1.Return.TestTolerance = [];
ComIPduCallout_BrakeSnData_6_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_BrakeSnData_6_FD1.Arguments(1).Name = 'BrakeSnData';
ComIPduCallout_BrakeSnData_6_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_BrakeSnData_6_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_BrakeSnData_6_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_BrakeSnData_6_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_BrakeSnData_6_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_BrakeSnData_6_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_BrakeSnData_6_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_BrakeSnData_6_FD1.Arguments(1).Description = [...
  'Argument BrakeSnData set to true once this server runnable is called'];

ComTimeoutNotification_Ford_StePinOffst_D_Stat = DataDict.SrvRunnable;
ComTimeoutNotification_Ford_StePinOffst_D_Stat.Context = 'NonRte';
ComTimeoutNotification_Ford_StePinOffst_D_Stat.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_Ford_StePinOffst_D_Stat.Return = DataDict.CSReturn;
ComTimeoutNotification_Ford_StePinOffst_D_Stat.Return.Type = 'None';
ComTimeoutNotification_Ford_StePinOffst_D_Stat.Return.Min = [];
ComTimeoutNotification_Ford_StePinOffst_D_Stat.Return.Max = [];
ComTimeoutNotification_Ford_StePinOffst_D_Stat.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg414BusHiSpdInit1','FordMsg414BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg414BusHiSpdPer1'};
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
Ford_StePinOffst_An_Est = DataDict.IpSignal;
Ford_StePinOffst_An_Est.LongName = 'Ford Steering Pinion Offset Estimation';
Ford_StePinOffst_An_Est.Description = [...
  'This signal is used to scale signal Ford Vehicle Steering Pinion Angle' ...
  ' Offset'];
Ford_StePinOffst_An_Est.DocUnits = 'Cnt';
Ford_StePinOffst_An_Est.EngDT = dt.u16;
Ford_StePinOffst_An_Est.EngInit = 32000;
Ford_StePinOffst_An_Est.EngMin = 0;
Ford_StePinOffst_An_Est.EngMax = 65535;
Ford_StePinOffst_An_Est.ReadIn = {'FordMsg414BusHiSpdPer1'};
Ford_StePinOffst_An_Est.ReadType = 'Rte';


Ford_StePinOffst_D_Stat1 = DataDict.IpSignal;
Ford_StePinOffst_D_Stat1.LongName = 'Ford Steering Pinion Offset Status';
Ford_StePinOffst_D_Stat1.Description = [...
  'This signal is used to update signal Ford Vehicle Steering PinionOffse' ...
  't Status'];
Ford_StePinOffst_D_Stat1.DocUnits = 'Cnt';
Ford_StePinOffst_D_Stat1.EngDT = enum.Ford_StePinOffst_D_Stat;
Ford_StePinOffst_D_Stat1.EngInit = Ford_StePinOffst_D_Stat.Cx0_OffsetNotCalculated;
Ford_StePinOffst_D_Stat1.EngMin = Ford_StePinOffst_D_Stat.Cx0_OffsetNotCalculated;
Ford_StePinOffst_D_Stat1.EngMax = Ford_StePinOffst_D_Stat.Cx3_FineOffset;
Ford_StePinOffst_D_Stat1.ReadIn = {'FordMsg414BusHiSpdPer1'};
Ford_StePinOffst_D_Stat1.ReadType = 'Rte';


Ford_StePinOffst_No_Cnt = DataDict.IpSignal;
Ford_StePinOffst_No_Cnt.LongName = 'Ford Steering Pinion Offset Count';
Ford_StePinOffst_No_Cnt.Description = [...
  'This signal is used to update signal Ford Vehicle Steering PinionOffse' ...
  't Status'];
Ford_StePinOffst_No_Cnt.DocUnits = 'Cnt';
Ford_StePinOffst_No_Cnt.EngDT = dt.u08;
Ford_StePinOffst_No_Cnt.EngInit = 0;
Ford_StePinOffst_No_Cnt.EngMin = 0;
Ford_StePinOffst_No_Cnt.EngMax = 15;
Ford_StePinOffst_No_Cnt.ReadIn = {'FordMsg414BusHiSpdPer1'};
Ford_StePinOffst_No_Cnt.ReadType = 'Rte';


Ford_StePinOffst_No_Cs = DataDict.IpSignal;
Ford_StePinOffst_No_Cs.LongName = 'Ford Steering Pinion Offset CS';
Ford_StePinOffst_No_Cs.Description = [...
  'This signal is used to update signal Ford Vehicle Steering PinionOffse' ...
  't Checksum'];
Ford_StePinOffst_No_Cs.DocUnits = 'Cnt';
Ford_StePinOffst_No_Cs.EngDT = dt.u08;
Ford_StePinOffst_No_Cs.EngInit = 0;
Ford_StePinOffst_No_Cs.EngMin = 0;
Ford_StePinOffst_No_Cs.EngMax = 255;
Ford_StePinOffst_No_Cs.ReadIn = {'FordMsg414BusHiSpdPer1'};
Ford_StePinOffst_No_Cs.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehSteerPinionAgOffs = DataDict.OpSignal;
FordVehSteerPinionAgOffs.LongName = 'Ford Vehicle Steering Pinion Angle Offset';
FordVehSteerPinionAgOffs.Description = [...
  'Processed value of Ford Steering Pinion Offset Estimation to be used b' ...
  'yEPS'];
FordVehSteerPinionAgOffs.DocUnits = 'HwDeg';
FordVehSteerPinionAgOffs.SwcShoName = 'FordMsg414BusHiSpd';
FordVehSteerPinionAgOffs.EngDT = dt.float32;
FordVehSteerPinionAgOffs.EngInit = 0;
FordVehSteerPinionAgOffs.EngMin = -3200;
FordVehSteerPinionAgOffs.EngMax = 3353.5;
FordVehSteerPinionAgOffs.TestTolerance = 0.05;
FordVehSteerPinionAgOffs.WrittenIn = {'FordMsg414BusHiSpdPer1'};
FordVehSteerPinionAgOffs.WriteType = 'Rte';


FordVehSteerPinionAgOffsRaw = DataDict.OpSignal;
FordVehSteerPinionAgOffsRaw.LongName = 'Ford Vehicle Steering Pinion Angle Offset Raw';
FordVehSteerPinionAgOffsRaw.Description = [...
  'Steering Pinion Offset Estimation is assigned to Ford Vehicle Steering' ...
  'Pinion Angle Offset Raw to be used by EPS'];
FordVehSteerPinionAgOffsRaw.DocUnits = 'Cnt';
FordVehSteerPinionAgOffsRaw.SwcShoName = 'FordMsg414BusHiSpd';
FordVehSteerPinionAgOffsRaw.EngDT = dt.u16;
FordVehSteerPinionAgOffsRaw.EngInit = 32000;
FordVehSteerPinionAgOffsRaw.EngMin = 0;
FordVehSteerPinionAgOffsRaw.EngMax = 65535;
FordVehSteerPinionAgOffsRaw.TestTolerance = 0;
FordVehSteerPinionAgOffsRaw.WrittenIn = {'FordMsg414BusHiSpdPer1'};
FordVehSteerPinionAgOffsRaw.WriteType = 'Rte';


FordVehSteerPinionAgOffsVld = DataDict.OpSignal;
FordVehSteerPinionAgOffsVld.LongName = 'Ford Vehicle Steering Pinion Angle Offset Valid';
FordVehSteerPinionAgOffsVld.Description = [...
  'This output tells if the value for Ford Vehicle Steering Pinion AngleO' ...
  'ffset is valid or not'];
FordVehSteerPinionAgOffsVld.DocUnits = 'Cnt';
FordVehSteerPinionAgOffsVld.SwcShoName = 'FordMsg414BusHiSpd';
FordVehSteerPinionAgOffsVld.EngDT = dt.lgc;
FordVehSteerPinionAgOffsVld.EngInit = 0;
FordVehSteerPinionAgOffsVld.EngMin = 0;
FordVehSteerPinionAgOffsVld.EngMax = 1;
FordVehSteerPinionAgOffsVld.TestTolerance = 0;
FordVehSteerPinionAgOffsVld.WrittenIn = {'FordMsg414BusHiSpdPer1'};
FordVehSteerPinionAgOffsVld.WriteType = 'Rte';


FordVehSteerPinionChksVld = DataDict.OpSignal;
FordVehSteerPinionChksVld.LongName = 'Ford Vehicle Steering Pinion Checksum Valid';
FordVehSteerPinionChksVld.Description = [...
  'This output tells if the value for Ford Vehicle Steering Pinion Checks' ...
  'um is valid or not'];
FordVehSteerPinionChksVld.DocUnits = 'Cnt';
FordVehSteerPinionChksVld.SwcShoName = 'FordMsg414BusHiSpd';
FordVehSteerPinionChksVld.EngDT = dt.lgc;
FordVehSteerPinionChksVld.EngInit = 0;
FordVehSteerPinionChksVld.EngMin = 0;
FordVehSteerPinionChksVld.EngMax = 1;
FordVehSteerPinionChksVld.TestTolerance = 0;
FordVehSteerPinionChksVld.WrittenIn = {'FordMsg414BusHiSpdPer1'};
FordVehSteerPinionChksVld.WriteType = 'Rte';


FordVehSteerPinionCntrVld = DataDict.OpSignal;
FordVehSteerPinionCntrVld.LongName = 'Ford Vehicle Steering Pinion Counter Valid';
FordVehSteerPinionCntrVld.Description = [...
  'This output tells if the value for Ford Vehicle Steering Pinion Counte' ...
  'r is valid or not'];
FordVehSteerPinionCntrVld.DocUnits = 'Cnt';
FordVehSteerPinionCntrVld.SwcShoName = 'FordMsg414BusHiSpd';
FordVehSteerPinionCntrVld.EngDT = dt.lgc;
FordVehSteerPinionCntrVld.EngInit = 0;
FordVehSteerPinionCntrVld.EngMin = 0;
FordVehSteerPinionCntrVld.EngMax = 1;
FordVehSteerPinionCntrVld.TestTolerance = 0;
FordVehSteerPinionCntrVld.WrittenIn = {'FordMsg414BusHiSpdPer1'};
FordVehSteerPinionCntrVld.WriteType = 'Rte';


FordVehSteerPinionOffsChks = DataDict.OpSignal;
FordVehSteerPinionOffsChks.LongName = 'Ford Vehicle Steering Pinion Offset Checksum';
FordVehSteerPinionOffsChks.Description = [...
  'Calculated by using the least significant 8 bits of the sum of the lea' ...
  'st significant 8 bits of Ford_StePinOffst_An_Est signal checksum andle' ...
  'ast significant 8 bits of the  Ford_StePinOffst_D_Stat signal checksum' ...
  'and the least significant 8 bits of the Ford_StePinOffst_No_Cnt'];
FordVehSteerPinionOffsChks.DocUnits = 'Cnt';
FordVehSteerPinionOffsChks.SwcShoName = 'FordMsg414BusHiSpd';
FordVehSteerPinionOffsChks.EngDT = dt.u08;
FordVehSteerPinionOffsChks.EngInit = 0;
FordVehSteerPinionOffsChks.EngMin = 0;
FordVehSteerPinionOffsChks.EngMax = 255;
FordVehSteerPinionOffsChks.TestTolerance = 0;
FordVehSteerPinionOffsChks.WrittenIn = {'FordMsg414BusHiSpdPer1'};
FordVehSteerPinionOffsChks.WriteType = 'Rte';


FordVehSteerPinionOffsCnt = DataDict.OpSignal;
FordVehSteerPinionOffsCnt.LongName = 'Ford Vehicle Steering Pinion Offset Count';
FordVehSteerPinionOffsCnt.Description = [...
  'Steering Pinion Offset Count is assigned to Ford Vehicle SteeringPinio' ...
  'n Offset Count to be used by EPS'];
FordVehSteerPinionOffsCnt.DocUnits = 'Cnt';
FordVehSteerPinionOffsCnt.SwcShoName = 'FordMsg414BusHiSpd';
FordVehSteerPinionOffsCnt.EngDT = dt.u08;
FordVehSteerPinionOffsCnt.EngInit = 0;
FordVehSteerPinionOffsCnt.EngMin = 0;
FordVehSteerPinionOffsCnt.EngMax = 15;
FordVehSteerPinionOffsCnt.TestTolerance = 0;
FordVehSteerPinionOffsCnt.WrittenIn = {'FordMsg414BusHiSpdPer1'};
FordVehSteerPinionOffsCnt.WriteType = 'Rte';


FordVehSteerPinionOffsSts = DataDict.OpSignal;
FordVehSteerPinionOffsSts.LongName = 'Ford Vehicle Steering Pinion Offset Status';
FordVehSteerPinionOffsSts.Description = [...
  'Processed value of Steering Pinion Offset Status to be used by EPS'];
FordVehSteerPinionOffsSts.DocUnits = 'Cnt';
FordVehSteerPinionOffsSts.SwcShoName = 'FordMsg414BusHiSpd';
FordVehSteerPinionOffsSts.EngDT = enum.Ford_StePinOffst_D_Stat;
FordVehSteerPinionOffsSts.EngInit = Ford_StePinOffst_D_Stat.Cx0_OffsetNotCalculated;
FordVehSteerPinionOffsSts.EngMin = Ford_StePinOffst_D_Stat.Cx0_OffsetNotCalculated;
FordVehSteerPinionOffsSts.EngMax = Ford_StePinOffst_D_Stat.Cx3_FineOffset;
FordVehSteerPinionOffsSts.TestTolerance = 0;
FordVehSteerPinionOffsSts.WrittenIn = {'FordMsg414BusHiSpdPer1'};
FordVehSteerPinionOffsSts.WriteType = 'Rte';


FordVehSteerPinionOffsStsRaw = DataDict.OpSignal;
FordVehSteerPinionOffsStsRaw.LongName = 'Ford Vehicle Steering Pinion Offset Status Raw';
FordVehSteerPinionOffsStsRaw.Description = [...
  'Ford Steering Pinion Offset Status is assigned to Ford VehicleSteering' ...
  ' Pinion Offset Status Raw to be used by EPS'];
FordVehSteerPinionOffsStsRaw.DocUnits = 'Cnt';
FordVehSteerPinionOffsStsRaw.SwcShoName = 'FordMsg414BusHiSpd';
FordVehSteerPinionOffsStsRaw.EngDT = dt.u08;
FordVehSteerPinionOffsStsRaw.EngInit = 0;
FordVehSteerPinionOffsStsRaw.EngMin = 0;
FordVehSteerPinionOffsStsRaw.EngMax = 3;
FordVehSteerPinionOffsStsRaw.TestTolerance = 0;
FordVehSteerPinionOffsStsRaw.WrittenIn = {'FordMsg414BusHiSpdPer1'};
FordVehSteerPinionOffsStsRaw.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg414BusHiSpdAgOffsVldFaildThd = DataDict.Calibration;
FordMsg414BusHiSpdAgOffsVldFaildThd.LongName = 'Ford Message 414 Bus High Speed Angle Offset Valid Failed Threshold';
FordMsg414BusHiSpdAgOffsVldFaildThd.Description = [...
  'Threshold to set the output Ford Vehicle Angle Offset Validto False'];
FordMsg414BusHiSpdAgOffsVldFaildThd.DocUnits = 'MilliSec';
FordMsg414BusHiSpdAgOffsVldFaildThd.EngDT = dt.u16;
FordMsg414BusHiSpdAgOffsVldFaildThd.EngVal = 0;
FordMsg414BusHiSpdAgOffsVldFaildThd.EngMin = 0;
FordMsg414BusHiSpdAgOffsVldFaildThd.EngMax = 6000;
FordMsg414BusHiSpdAgOffsVldFaildThd.Cardinality = 'Cmn';
FordMsg414BusHiSpdAgOffsVldFaildThd.CustomerVisible = false;
FordMsg414BusHiSpdAgOffsVldFaildThd.Online = false;
FordMsg414BusHiSpdAgOffsVldFaildThd.Impact = 'H';
FordMsg414BusHiSpdAgOffsVldFaildThd.TuningOwner = 'EPDT';
FordMsg414BusHiSpdAgOffsVldFaildThd.GraphLink = {''};
FordMsg414BusHiSpdAgOffsVldFaildThd.Monotony = 'None';
FordMsg414BusHiSpdAgOffsVldFaildThd.MaxGrad = 0;
FordMsg414BusHiSpdAgOffsVldFaildThd.PortName = 'FordMsg414BusHiSpdAgOffsVldFaildThd';


FordMsg414BusHiSpdAgOffsVldMissThd = DataDict.Calibration;
FordMsg414BusHiSpdAgOffsVldMissThd.LongName = 'Ford Message 414 Bus High Speed Angle Offset Valid Missing Threshold';
FordMsg414BusHiSpdAgOffsVldMissThd.Description = [...
  'Threshold to set the output Ford Vehicle Angle Offset Validto False'];
FordMsg414BusHiSpdAgOffsVldMissThd.DocUnits = 'MilliSec';
FordMsg414BusHiSpdAgOffsVldMissThd.EngDT = dt.u16;
FordMsg414BusHiSpdAgOffsVldMissThd.EngVal = 1000;
FordMsg414BusHiSpdAgOffsVldMissThd.EngMin = 0;
FordMsg414BusHiSpdAgOffsVldMissThd.EngMax = 6000;
FordMsg414BusHiSpdAgOffsVldMissThd.Cardinality = 'Cmn';
FordMsg414BusHiSpdAgOffsVldMissThd.CustomerVisible = false;
FordMsg414BusHiSpdAgOffsVldMissThd.Online = false;
FordMsg414BusHiSpdAgOffsVldMissThd.Impact = 'H';
FordMsg414BusHiSpdAgOffsVldMissThd.TuningOwner = 'EPDT';
FordMsg414BusHiSpdAgOffsVldMissThd.GraphLink = {''};
FordMsg414BusHiSpdAgOffsVldMissThd.Monotony = 'None';
FordMsg414BusHiSpdAgOffsVldMissThd.MaxGrad = 0;
FordMsg414BusHiSpdAgOffsVldMissThd.PortName = 'FordMsg414BusHiSpdAgOffsVldMissThd';


FordMsg414BusHiSpdAgOffsVldPassdThd = DataDict.Calibration;
FordMsg414BusHiSpdAgOffsVldPassdThd.LongName = 'Ford Message 414 Bus High Speed Angle Offset Valid Passed Threshold';
FordMsg414BusHiSpdAgOffsVldPassdThd.Description = [...
  'Threshold to set the output Ford Vehicle Angle Offset Validto True'];
FordMsg414BusHiSpdAgOffsVldPassdThd.DocUnits = 'MilliSec';
FordMsg414BusHiSpdAgOffsVldPassdThd.EngDT = dt.u16;
FordMsg414BusHiSpdAgOffsVldPassdThd.EngVal = 0;
FordMsg414BusHiSpdAgOffsVldPassdThd.EngMin = 0;
FordMsg414BusHiSpdAgOffsVldPassdThd.EngMax = 6000;
FordMsg414BusHiSpdAgOffsVldPassdThd.Cardinality = 'Cmn';
FordMsg414BusHiSpdAgOffsVldPassdThd.CustomerVisible = false;
FordMsg414BusHiSpdAgOffsVldPassdThd.Online = false;
FordMsg414BusHiSpdAgOffsVldPassdThd.Impact = 'H';
FordMsg414BusHiSpdAgOffsVldPassdThd.TuningOwner = 'EPDT';
FordMsg414BusHiSpdAgOffsVldPassdThd.GraphLink = {''};
FordMsg414BusHiSpdAgOffsVldPassdThd.Monotony = 'None';
FordMsg414BusHiSpdAgOffsVldPassdThd.MaxGrad = 0;
FordMsg414BusHiSpdAgOffsVldPassdThd.PortName = 'FordMsg414BusHiSpdAgOffsVldPassdThd';


FordMsg414BusHiSpdChksVldFaildThd = DataDict.Calibration;
FordMsg414BusHiSpdChksVldFaildThd.LongName = 'Ford Message 414 Bus High Speed Checksum Valid Failed Threshold';
FordMsg414BusHiSpdChksVldFaildThd.Description = [...
  'Threshold to set the output Ford Vehicle Checksum Validto False'];
FordMsg414BusHiSpdChksVldFaildThd.DocUnits = 'MilliSec';
FordMsg414BusHiSpdChksVldFaildThd.EngDT = dt.u16;
FordMsg414BusHiSpdChksVldFaildThd.EngVal = 0;
FordMsg414BusHiSpdChksVldFaildThd.EngMin = 0;
FordMsg414BusHiSpdChksVldFaildThd.EngMax = 6000;
FordMsg414BusHiSpdChksVldFaildThd.Cardinality = 'Cmn';
FordMsg414BusHiSpdChksVldFaildThd.CustomerVisible = false;
FordMsg414BusHiSpdChksVldFaildThd.Online = false;
FordMsg414BusHiSpdChksVldFaildThd.Impact = 'H';
FordMsg414BusHiSpdChksVldFaildThd.TuningOwner = 'EPDT';
FordMsg414BusHiSpdChksVldFaildThd.GraphLink = {''};
FordMsg414BusHiSpdChksVldFaildThd.Monotony = 'None';
FordMsg414BusHiSpdChksVldFaildThd.MaxGrad = 0;
FordMsg414BusHiSpdChksVldFaildThd.PortName = 'FordMsg414BusHiSpdChksVldFaildThd';


FordMsg414BusHiSpdChksVldMissThd = DataDict.Calibration;
FordMsg414BusHiSpdChksVldMissThd.LongName = 'Ford Message 414 Bus High Speed Checksum Valid Missing Threshold';
FordMsg414BusHiSpdChksVldMissThd.Description = [...
  'Threshold to set the output Ford Vehicle Checksum Valid to False'];
FordMsg414BusHiSpdChksVldMissThd.DocUnits = 'MilliSec';
FordMsg414BusHiSpdChksVldMissThd.EngDT = dt.u16;
FordMsg414BusHiSpdChksVldMissThd.EngVal = 0;
FordMsg414BusHiSpdChksVldMissThd.EngMin = 0;
FordMsg414BusHiSpdChksVldMissThd.EngMax = 6000;
FordMsg414BusHiSpdChksVldMissThd.Cardinality = 'Cmn';
FordMsg414BusHiSpdChksVldMissThd.CustomerVisible = false;
FordMsg414BusHiSpdChksVldMissThd.Online = false;
FordMsg414BusHiSpdChksVldMissThd.Impact = 'H';
FordMsg414BusHiSpdChksVldMissThd.TuningOwner = 'EPDT';
FordMsg414BusHiSpdChksVldMissThd.GraphLink = {''};
FordMsg414BusHiSpdChksVldMissThd.Monotony = 'None';
FordMsg414BusHiSpdChksVldMissThd.MaxGrad = 0;
FordMsg414BusHiSpdChksVldMissThd.PortName = 'FordMsg414BusHiSpdChksVldMissThd';


FordMsg414BusHiSpdCntrVldMissThd = DataDict.Calibration;
FordMsg414BusHiSpdCntrVldMissThd.LongName = 'Ford Message 414 Bus High Speed Counter Valid Missing Threshold';
FordMsg414BusHiSpdCntrVldMissThd.Description = [...
  'Threshold to set the output Ford Vehicle Counter Valid to False'];
FordMsg414BusHiSpdCntrVldMissThd.DocUnits = 'MilliSec';
FordMsg414BusHiSpdCntrVldMissThd.EngDT = dt.u16;
FordMsg414BusHiSpdCntrVldMissThd.EngVal = 0;
FordMsg414BusHiSpdCntrVldMissThd.EngMin = 0;
FordMsg414BusHiSpdCntrVldMissThd.EngMax = 6000;
FordMsg414BusHiSpdCntrVldMissThd.Cardinality = 'Cmn';
FordMsg414BusHiSpdCntrVldMissThd.CustomerVisible = false;
FordMsg414BusHiSpdCntrVldMissThd.Online = false;
FordMsg414BusHiSpdCntrVldMissThd.Impact = 'H';
FordMsg414BusHiSpdCntrVldMissThd.TuningOwner = 'EPDT';
FordMsg414BusHiSpdCntrVldMissThd.GraphLink = {''};
FordMsg414BusHiSpdCntrVldMissThd.Monotony = 'None';
FordMsg414BusHiSpdCntrVldMissThd.MaxGrad = 0;
FordMsg414BusHiSpdCntrVldMissThd.PortName = 'FordMsg414BusHiSpdCntrVldMissThd';



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
AgOffsVldFaildRefTi = DataDict.PIM;
AgOffsVldFaildRefTi.LongName = 'Angle Offset Valid Failed Reference Time';
AgOffsVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  'the conditions'];
AgOffsVldFaildRefTi.DocUnits = 'Cnt';
AgOffsVldFaildRefTi.EngDT = dt.u32;
AgOffsVldFaildRefTi.EngMin = 0;
AgOffsVldFaildRefTi.EngMax = 4294967295;
AgOffsVldFaildRefTi.InitRowCol = [1  1];


AgOffsVldMissRefTi = DataDict.PIM;
AgOffsVldMissRefTi.LongName = 'Angle Offset Valid Missing Reference Time';
AgOffsVldMissRefTi.Description = [...
  'Timer for Valid Missing Reference Time will increment or reset based o' ...
  'n the conditions'];
AgOffsVldMissRefTi.DocUnits = 'Cnt';
AgOffsVldMissRefTi.EngDT = dt.u32;
AgOffsVldMissRefTi.EngMin = 0;
AgOffsVldMissRefTi.EngMax = 4294967295;
AgOffsVldMissRefTi.InitRowCol = [1  1];


AgOffsVldPassdRefTi = DataDict.PIM;
AgOffsVldPassdRefTi.LongName = 'Angle Offset Valid Passed Reference Time';
AgOffsVldPassdRefTi.Description = [...
  'Timer for Valid Passed Reference Time will increment or reset based on' ...
  'the conditions'];
AgOffsVldPassdRefTi.DocUnits = 'Cnt';
AgOffsVldPassdRefTi.EngDT = dt.u32;
AgOffsVldPassdRefTi.EngMin = 0;
AgOffsVldPassdRefTi.EngMax = 4294967295;
AgOffsVldPassdRefTi.InitRowCol = [1  1];


ChksVldFaildRefTi = DataDict.PIM;
ChksVldFaildRefTi.LongName = 'Checksum Valid Failed Reference Time';
ChksVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  'the conditions'];
ChksVldFaildRefTi.DocUnits = 'Cnt';
ChksVldFaildRefTi.EngDT = dt.u32;
ChksVldFaildRefTi.EngMin = 0;
ChksVldFaildRefTi.EngMax = 4294967295;
ChksVldFaildRefTi.InitRowCol = [1  1];


ChksVldMissRefTi = DataDict.PIM;
ChksVldMissRefTi.LongName = 'Checksum Valid Missing Reference Time';
ChksVldMissRefTi.Description = [...
  'Timer for Valid Missing Reference Time will increment or reset based o' ...
  'n the conditions'];
ChksVldMissRefTi.DocUnits = 'Cnt';
ChksVldMissRefTi.EngDT = dt.u32;
ChksVldMissRefTi.EngMin = 0;
ChksVldMissRefTi.EngMax = 4294967295;
ChksVldMissRefTi.InitRowCol = [1  1];


CntrVldMissRefTi = DataDict.PIM;
CntrVldMissRefTi.LongName = 'Counter Valid Missing Reference Time';
CntrVldMissRefTi.Description = [...
  'Timer for Valid Missing Reference Time will increment or reset based o' ...
  'n the conditions'];
CntrVldMissRefTi.DocUnits = 'Cnt';
CntrVldMissRefTi.EngDT = dt.u32;
CntrVldMissRefTi.EngMin = 0;
CntrVldMissRefTi.EngMax = 4294967295;
CntrVldMissRefTi.InitRowCol = [1  1];


FirstTranVldFlg = DataDict.PIM;
FirstTranVldFlg.LongName = 'First Transition Valid Flag';
FirstTranVldFlg.Description = [...
  'This flag is used to indicate the reception of first message'];
FirstTranVldFlg.DocUnits = 'Cnt';
FirstTranVldFlg.EngDT = dt.lgc;
FirstTranVldFlg.EngMin = 0;
FirstTranVldFlg.EngMax = 1;
FirstTranVldFlg.InitRowCol = [1  1];


FordVehMsg414Miss = DataDict.PIM;
FordVehMsg414Miss.LongName = 'Ford Vehicle Message 414 Missing';
FordVehMsg414Miss.Description = [...
  'Flag for missing message diagnostics, it is true when message is missi' ...
  'ng'];
FordVehMsg414Miss.DocUnits = 'Cnt';
FordVehMsg414Miss.EngDT = dt.lgc;
FordVehMsg414Miss.EngMin = 0;
FordVehMsg414Miss.EngMax = 1;
FordVehMsg414Miss.InitRowCol = [1  1];


FordVehSteerPinionAgOffsPrev = DataDict.PIM;
FordVehSteerPinionAgOffsPrev.LongName = 'Ford Vehicle Steering Pinion Angle Offset Previous';
FordVehSteerPinionAgOffsPrev.Description = [...
  'Used to hold previous value of  Ford Vehicle Steering Pinion AngleOffs' ...
  'et'];
FordVehSteerPinionAgOffsPrev.DocUnits = 'HwDeg';
FordVehSteerPinionAgOffsPrev.EngDT = dt.float32;
FordVehSteerPinionAgOffsPrev.EngMin = -3200;
FordVehSteerPinionAgOffsPrev.EngMax = 3353.5;
FordVehSteerPinionAgOffsPrev.InitRowCol = [1  1];


FordVehSteerPinionAgOffsRawPrev = DataDict.PIM;
FordVehSteerPinionAgOffsRawPrev.LongName = 'Ford Vehicle Steering Pinion Angle Offset Raw Previous';
FordVehSteerPinionAgOffsRawPrev.Description = [...
  'Used to hold previous value of  Ford Vehicle Steering Pinion AngleOffs' ...
  'et Raw'];
FordVehSteerPinionAgOffsRawPrev.DocUnits = 'Cnt';
FordVehSteerPinionAgOffsRawPrev.EngDT = dt.u16;
FordVehSteerPinionAgOffsRawPrev.EngMin = 0;
FordVehSteerPinionAgOffsRawPrev.EngMax = 65535;
FordVehSteerPinionAgOffsRawPrev.InitRowCol = [1  1];


FordVehSteerPinionAgOffsVldPrev = DataDict.PIM;
FordVehSteerPinionAgOffsVldPrev.LongName = 'Ford Vehicle Steering Pinion Angle Offset Valid Previous';
FordVehSteerPinionAgOffsVldPrev.Description = [...
  'Used to hold previous value of  Ford Vehicle Steering Pinion AngleOffs' ...
  'et Valid'];
FordVehSteerPinionAgOffsVldPrev.DocUnits = 'Cnt';
FordVehSteerPinionAgOffsVldPrev.EngDT = dt.lgc;
FordVehSteerPinionAgOffsVldPrev.EngMin = 0;
FordVehSteerPinionAgOffsVldPrev.EngMax = 1;
FordVehSteerPinionAgOffsVldPrev.InitRowCol = [1  1];


FordVehSteerPinionChksVldPrev = DataDict.PIM;
FordVehSteerPinionChksVldPrev.LongName = 'Ford Vehicle Steering Pinion Checksum Valid Previous';
FordVehSteerPinionChksVldPrev.Description = [...
  'Used to hold previous value of  Ford Vehicle Steering Pinion Checksum ' ...
  'Valid'];
FordVehSteerPinionChksVldPrev.DocUnits = 'Cnt';
FordVehSteerPinionChksVldPrev.EngDT = dt.lgc;
FordVehSteerPinionChksVldPrev.EngMin = 0;
FordVehSteerPinionChksVldPrev.EngMax = 1;
FordVehSteerPinionChksVldPrev.InitRowCol = [1  1];


FordVehSteerPinionCntrVldPrev = DataDict.PIM;
FordVehSteerPinionCntrVldPrev.LongName = 'Ford Vehicle Steering Pinion Counter Valid Previous';
FordVehSteerPinionCntrVldPrev.Description = [...
  'Used to hold previous value of  Ford Vehicle Steering Pinion Counter V' ...
  'alid'];
FordVehSteerPinionCntrVldPrev.DocUnits = 'Cnt';
FordVehSteerPinionCntrVldPrev.EngDT = dt.lgc;
FordVehSteerPinionCntrVldPrev.EngMin = 0;
FordVehSteerPinionCntrVldPrev.EngMax = 1;
FordVehSteerPinionCntrVldPrev.InitRowCol = [1  1];


FordVehSteerPinionOffsChksPrev = DataDict.PIM;
FordVehSteerPinionOffsChksPrev.LongName = 'Ford Vehicle Steering Pinion Offset Checksum Previous';
FordVehSteerPinionOffsChksPrev.Description = [...
  'Used to hold previous value of  Ford Vehicle Steering Pinion OffsetChe' ...
  'cksum'];
FordVehSteerPinionOffsChksPrev.DocUnits = 'Cnt';
FordVehSteerPinionOffsChksPrev.EngDT = dt.u08;
FordVehSteerPinionOffsChksPrev.EngMin = 0;
FordVehSteerPinionOffsChksPrev.EngMax = 255;
FordVehSteerPinionOffsChksPrev.InitRowCol = [1  1];


FordVehSteerPinionOffsCntPrev = DataDict.PIM;
FordVehSteerPinionOffsCntPrev.LongName = 'Ford Vehicle Steering Pinion Offset Count Previous';
FordVehSteerPinionOffsCntPrev.Description = [...
  'Used to hold previous value of  Ford Vehicle Steering Pinion Angle Off' ...
  'setCount'];
FordVehSteerPinionOffsCntPrev.DocUnits = 'Cnt';
FordVehSteerPinionOffsCntPrev.EngDT = dt.u08;
FordVehSteerPinionOffsCntPrev.EngMin = 0;
FordVehSteerPinionOffsCntPrev.EngMax = 15;
FordVehSteerPinionOffsCntPrev.InitRowCol = [1  1];


FordVehSteerPinionOffsStsPrev = DataDict.PIM;
FordVehSteerPinionOffsStsPrev.LongName = 'Ford Vehicle Steering Pinion Offset Status Previous';
FordVehSteerPinionOffsStsPrev.Description = [...
  'Used to hold previous value of  Ford Vehicle Steering Pinion OffsetSta' ...
  'tus'];
FordVehSteerPinionOffsStsPrev.DocUnits = 'Cnt';
FordVehSteerPinionOffsStsPrev.EngDT = enum.Ford_StePinOffst_D_Stat;
FordVehSteerPinionOffsStsPrev.EngMin = Ford_StePinOffst_D_Stat.Cx0_OffsetNotCalculated;
FordVehSteerPinionOffsStsPrev.EngMax = Ford_StePinOffst_D_Stat.Cx3_FineOffset;
FordVehSteerPinionOffsStsPrev.InitRowCol = [1  1];


FordVehSteerPinionOffsStsRawPrev = DataDict.PIM;
FordVehSteerPinionOffsStsRawPrev.LongName = 'Ford Vehicle Steering Pinion Offset Status Raw Previous';
FordVehSteerPinionOffsStsRawPrev.Description = [...
  'Used to hold previous value of  Ford Vehicle Steering Pinion OffsetSta' ...
  'tus Raw'];
FordVehSteerPinionOffsStsRawPrev.DocUnits = 'Cnt';
FordVehSteerPinionOffsStsRawPrev.EngDT = dt.u08;
FordVehSteerPinionOffsStsRawPrev.EngMin = 0;
FordVehSteerPinionOffsStsRawPrev.EngMax = 3;
FordVehSteerPinionOffsStsRawPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CNVMILLISECTOCNT_CNTPERMILLISEC_U16 = DataDict.Constant;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Millisecond to Count';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ueis multiplied by this constant to convert millisecond to count'];
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngDT = dt.u16;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngVal = 10;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Define = 'Local';


EIGHTBITMASK_CNT_U16 = DataDict.Constant;
EIGHTBITMASK_CNT_U16.LongName = 'Eight Bit Mask';
EIGHTBITMASK_CNT_U16.Description = [...
  'Used to extract least significant 8 bits of the Steering Pinion Relati' ...
  've Angle signal'];
EIGHTBITMASK_CNT_U16.DocUnits = 'Cnt';
EIGHTBITMASK_CNT_U16.EngDT = dt.u16;
EIGHTBITMASK_CNT_U16.EngVal = 255;
EIGHTBITMASK_CNT_U16.Define = 'Local';


PINIONAGOFFSMAX_HWDEG_F32 = DataDict.Constant;
PINIONAGOFFSMAX_HWDEG_F32.LongName = 'Pinion Angle Offset Maximum';
PINIONAGOFFSMAX_HWDEG_F32.Description = [...
  'Maximum valid values for Ford Vehicle Steering Pinion Angle Offset'];
PINIONAGOFFSMAX_HWDEG_F32.DocUnits = 'HwDeg';
PINIONAGOFFSMAX_HWDEG_F32.EngDT = dt.float32;
PINIONAGOFFSMAX_HWDEG_F32.EngVal = 3353.5;
PINIONAGOFFSMAX_HWDEG_F32.Define = 'Local';


PINIONAGOFFSMIN_HWDEG_F32 = DataDict.Constant;
PINIONAGOFFSMIN_HWDEG_F32.LongName = 'Pinion Angle Offset Minimum';
PINIONAGOFFSMIN_HWDEG_F32.Description = [...
  'Minimum valid values for Ford Vehicle Steering Pinion Angle Offset'];
PINIONAGOFFSMIN_HWDEG_F32.DocUnits = 'HwDeg';
PINIONAGOFFSMIN_HWDEG_F32.EngDT = dt.float32;
PINIONAGOFFSMIN_HWDEG_F32.EngVal = -3200;
PINIONAGOFFSMIN_HWDEG_F32.Define = 'Local';


PINIONAGOFFSRAWINITVAL_CNT_U16 = DataDict.Constant;
PINIONAGOFFSRAWINITVAL_CNT_U16.LongName = 'Angle Offset Raw Initial Value';
PINIONAGOFFSRAWINITVAL_CNT_U16.Description = [...
  'Used to set non zero initial value for Ford Vehicle Steering PinionAng' ...
  'el Offset Raw'];
PINIONAGOFFSRAWINITVAL_CNT_U16.DocUnits = 'Cnt';
PINIONAGOFFSRAWINITVAL_CNT_U16.EngDT = dt.u16;
PINIONAGOFFSRAWINITVAL_CNT_U16.EngVal = 32000;
PINIONAGOFFSRAWINITVAL_CNT_U16.Define = 'Local';


PINIONAGOFFSRAWMAX_CNT_U16 = DataDict.Constant;
PINIONAGOFFSRAWMAX_CNT_U16.LongName = 'Pinion Angle Offset Raw Maximum';
PINIONAGOFFSRAWMAX_CNT_U16.Description = [...
  'Maximum valid values for Ford Vehicle Steering Pinion Angle Offset Raw' ...
  ''];
PINIONAGOFFSRAWMAX_CNT_U16.DocUnits = 'Cnt';
PINIONAGOFFSRAWMAX_CNT_U16.EngDT = dt.u16;
PINIONAGOFFSRAWMAX_CNT_U16.EngVal = 65535;
PINIONAGOFFSRAWMAX_CNT_U16.Define = 'Local';


PINIONAGOFFSRAWMIN_CNT_U16 = DataDict.Constant;
PINIONAGOFFSRAWMIN_CNT_U16.LongName = 'Pinion Angle Offset Raw Minimum';
PINIONAGOFFSRAWMIN_CNT_U16.Description = [...
  'Minimum valid values for Ford Vehicle Steering Pinion Angle Offset Raw' ...
  ''];
PINIONAGOFFSRAWMIN_CNT_U16.DocUnits = 'Cnt';
PINIONAGOFFSRAWMIN_CNT_U16.EngDT = dt.u16;
PINIONAGOFFSRAWMIN_CNT_U16.EngVal = 0;
PINIONAGOFFSRAWMIN_CNT_U16.Define = 'Local';


PINIONAGOFFSVAL_CNT_U16 = DataDict.Constant;
PINIONAGOFFSVAL_CNT_U16.LongName = 'Pinion Angle Offset Value';
PINIONAGOFFSVAL_CNT_U16.Description = [...
  'It is used to keep Ford Vehicle Steering Pinion Angle Offset Raw0 and ' ...
  '65533'];
PINIONAGOFFSVAL_CNT_U16.DocUnits = 'Cnt';
PINIONAGOFFSVAL_CNT_U16.EngDT = dt.u16;
PINIONAGOFFSVAL_CNT_U16.EngVal = 65533;
PINIONAGOFFSVAL_CNT_U16.Define = 'Local';


PINIONAGOFFS_HWDEG_U16 = DataDict.Constant;
PINIONAGOFFS_HWDEG_U16.LongName = 'Steering Angle Offset';
PINIONAGOFFS_HWDEG_U16.Description = [...
  'It is used as offset for Ford Vehicle Steering Angle Offset'];
PINIONAGOFFS_HWDEG_U16.DocUnits = 'HwDeg';
PINIONAGOFFS_HWDEG_U16.EngDT = dt.u16;
PINIONAGOFFS_HWDEG_U16.EngVal = 3200;
PINIONAGOFFS_HWDEG_U16.Define = 'Local';


PINIONOFFSCHKSMAX_CNT_U08 = DataDict.Constant;
PINIONOFFSCHKSMAX_CNT_U08.LongName = 'Pinion Offset Checksum Maximum';
PINIONOFFSCHKSMAX_CNT_U08.Description = [...
  'Maximum valid values for Ford Vehicle Steering Pinion Offset Checksum'];
PINIONOFFSCHKSMAX_CNT_U08.DocUnits = 'Cnt';
PINIONOFFSCHKSMAX_CNT_U08.EngDT = dt.u08;
PINIONOFFSCHKSMAX_CNT_U08.EngVal = 255;
PINIONOFFSCHKSMAX_CNT_U08.Define = 'Local';


PINIONOFFSCHKSMIN_CNT_U08 = DataDict.Constant;
PINIONOFFSCHKSMIN_CNT_U08.LongName = 'Pinion Offset Checksum Minimum';
PINIONOFFSCHKSMIN_CNT_U08.Description = [...
  'Minimum valid values for Ford Vehicle Steering Pinion Offset Checksum'];
PINIONOFFSCHKSMIN_CNT_U08.DocUnits = 'Cnt';
PINIONOFFSCHKSMIN_CNT_U08.EngDT = dt.u08;
PINIONOFFSCHKSMIN_CNT_U08.EngVal = 0;
PINIONOFFSCHKSMIN_CNT_U08.Define = 'Local';


PINIONOFFSCNTMAX_CNT_U08 = DataDict.Constant;
PINIONOFFSCNTMAX_CNT_U08.LongName = 'Pinion Offset Count Maximum';
PINIONOFFSCNTMAX_CNT_U08.Description = [...
  'Maximum Valid values for Ford Vehicle Steering Pinion Offset Count'];
PINIONOFFSCNTMAX_CNT_U08.DocUnits = 'Cnt';
PINIONOFFSCNTMAX_CNT_U08.EngDT = dt.u08;
PINIONOFFSCNTMAX_CNT_U08.EngVal = 15;
PINIONOFFSCNTMAX_CNT_U08.Define = 'Local';


PINIONOFFSCNTMIN_CNT_U08 = DataDict.Constant;
PINIONOFFSCNTMIN_CNT_U08.LongName = 'Pinion Offset Count Minimum';
PINIONOFFSCNTMIN_CNT_U08.Description = [...
  'Minimum Valid values for Ford Vehicle Steering Pinion Offset Count'];
PINIONOFFSCNTMIN_CNT_U08.DocUnits = 'Cnt';
PINIONOFFSCNTMIN_CNT_U08.EngDT = dt.u08;
PINIONOFFSCNTMIN_CNT_U08.EngVal = 0;
PINIONOFFSCNTMIN_CNT_U08.Define = 'Local';


PINIONOFFSSCAGFAC_HWDEGPERCNT_F32 = DataDict.Constant;
PINIONOFFSSCAGFAC_HWDEGPERCNT_F32.LongName = 'Scaling Factor';
PINIONOFFSSCAGFAC_HWDEGPERCNT_F32.Description = [...
  'It is used as scaling factor for Ford Vehicle Steering AngleOffset'];
PINIONOFFSSCAGFAC_HWDEGPERCNT_F32.DocUnits = 'HwDegPerCnt';
PINIONOFFSSCAGFAC_HWDEGPERCNT_F32.EngDT = dt.float32;
PINIONOFFSSCAGFAC_HWDEGPERCNT_F32.EngVal = 0.1;
PINIONOFFSSCAGFAC_HWDEGPERCNT_F32.Define = 'Local';


PINIONOFFSSTSRAWMAX_CNT_U08 = DataDict.Constant;
PINIONOFFSSTSRAWMAX_CNT_U08.LongName = 'Pinion Offset Status Raw Maximum';
PINIONOFFSSTSRAWMAX_CNT_U08.Description = [...
  'Maximum Valid values for Ford Vehicle Steering Pinion Offset Status Ra' ...
  'w'];
PINIONOFFSSTSRAWMAX_CNT_U08.DocUnits = 'Cnt';
PINIONOFFSSTSRAWMAX_CNT_U08.EngDT = dt.u08;
PINIONOFFSSTSRAWMAX_CNT_U08.EngVal = 3;
PINIONOFFSSTSRAWMAX_CNT_U08.Define = 'Local';


PINIONOFFSSTSRAWMIN_CNT_U08 = DataDict.Constant;
PINIONOFFSSTSRAWMIN_CNT_U08.LongName = 'Pinion Offset Status Raw Minimum';
PINIONOFFSSTSRAWMIN_CNT_U08.Description = [...
  'Minimum Valid values for Ford Vehicle Steering Pinion Offset Status Ra' ...
  'w'];
PINIONOFFSSTSRAWMIN_CNT_U08.DocUnits = 'Cnt';
PINIONOFFSSTSRAWMIN_CNT_U08.EngDT = dt.u08;
PINIONOFFSSTSRAWMIN_CNT_U08.EngVal = 0;
PINIONOFFSSTSRAWMIN_CNT_U08.Define = 'Local';


RISHIFT_CNT_U16 = DataDict.Constant;
RISHIFT_CNT_U16.LongName = 'Right Shift';
RISHIFT_CNT_U16.Description = [...
  'It is used get the 8 bits MSB of the 16 bit data'];
RISHIFT_CNT_U16.DocUnits = 'Cnt';
RISHIFT_CNT_U16.EngDT = dt.u16;
RISHIFT_CNT_U16.EngVal = 8;
RISHIFT_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
