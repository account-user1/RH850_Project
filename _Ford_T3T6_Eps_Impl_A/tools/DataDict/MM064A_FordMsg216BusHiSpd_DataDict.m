%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 27-Mar-2018 10:53:53       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM064A = DataDict.FDD;
MM064A.Version = '2.0.X';
MM064A.LongName = 'Ford Message 216 Bus High Speed';
MM064A.ShoName  = 'FordMsg216BusHiSpd';
MM064A.DesignASIL = 'B';
MM064A.Description = [...
  'The purpose of the Ford Message 216 Bus High Speedfunction is to provi' ...
  'de the Electric Power Steering system with signalvalues for the Traile' ...
  'r Back Up Assist, Torque Steer Compensation,and Brake Oscillation Redu' ...
  'ction functions from CAN. The Ford Message216 function will perform th' ...
  'e missing message diagnostic as wellas provide a validity signal for t' ...
  'he received message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg216BusHiSpdInit1 = DataDict.Runnable;
FordMsg216BusHiSpdInit1.Context = 'Rte';
FordMsg216BusHiSpdInit1.TimeStep = 0;
FordMsg216BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg216BusHiSpdPer1 = DataDict.Runnable;
FordMsg216BusHiSpdPer1.Context = 'Rte';
FordMsg216BusHiSpdPer1.TimeStep = 0.01;
FordMsg216BusHiSpdPer1.Description = 'Periodic Runnable at 0.002 sec';

ComIPduCallout_WheelData_FD1 = DataDict.SrvRunnable;
ComIPduCallout_WheelData_FD1.Context = 'NonRte';
ComIPduCallout_WheelData_FD1.Description = [...
  'Server Runnable for Message Reception'];
ComIPduCallout_WheelData_FD1.Return = DataDict.CSReturn;
ComIPduCallout_WheelData_FD1.Return.Type = 'None';
ComIPduCallout_WheelData_FD1.Return.Min = [];
ComIPduCallout_WheelData_FD1.Return.Max = [];
ComIPduCallout_WheelData_FD1.Return.TestTolerance = [];
ComIPduCallout_WheelData_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_WheelData_FD1.Arguments(1).Name = 'WheelData';
ComIPduCallout_WheelData_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_WheelData_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_WheelData_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_WheelData_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_WheelData_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_WheelData_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_WheelData_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_WheelData_FD1.Arguments(1).Description = [...
  'Argument WheelData set to true once this server runnable is called'];

ComTimeoutNotification_WhlDirFl_D_Actl = DataDict.SrvRunnable;
ComTimeoutNotification_WhlDirFl_D_Actl.Context = 'NonRte';
ComTimeoutNotification_WhlDirFl_D_Actl.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_WhlDirFl_D_Actl.Return = DataDict.CSReturn;
ComTimeoutNotification_WhlDirFl_D_Actl.Return.Type = 'None';
ComTimeoutNotification_WhlDirFl_D_Actl.Return.Min = [];
ComTimeoutNotification_WhlDirFl_D_Actl.Return.Max = [];
ComTimeoutNotification_WhlDirFl_D_Actl.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg216BusHiSpdInit1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg216BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg216BusHiSpdPer1'};
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
ClrDiagcFlgProxy.LongName = 'Ford ClrDiagcFlgProxy Inhibit';
ClrDiagcFlgProxy.Description = [...
  'When ClrDiagcFlgProxy is True, Diagnostic test is performed'];
ClrDiagcFlgProxy.DocUnits = 'Cnt';
ClrDiagcFlgProxy.EngDT = dt.u08;
ClrDiagcFlgProxy.EngInit = 0;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.ReadIn = {'FordMsg216BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordBrkOscnRednEnad = DataDict.IpSignal;
FordBrkOscnRednEnad.LongName = 'Brake Oscillation Reduction Enabled';
FordBrkOscnRednEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  'of timer and NTC is required. Customer Datatype should be used.Data Ty' ...
  'pe: Boolean with Min value “False”(0), Init value “False”(0) and Max v' ...
  'alue “True”(1)'];
FordBrkOscnRednEnad.DocUnits = 'Cnt';
FordBrkOscnRednEnad.EngDT = dt.lgc;
FordBrkOscnRednEnad.EngInit = 0;
FordBrkOscnRednEnad.EngMin = 0;
FordBrkOscnRednEnad.EngMax = 1;
FordBrkOscnRednEnad.ReadIn = {'FordMsg216BusHiSpdPer1'};
FordBrkOscnRednEnad.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'When CAN DTC Inhibit is FALSE, Diagnostic test is performedCustomer Da' ...
  'tatype should be used.Data Type: Boolean with Minvalue “False”(0), Ini' ...
  't value “True”(1) and Max value “True”(1)'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg216BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'EPS Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibration value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg216BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordTqSteerCmpEnad = DataDict.IpSignal;
FordTqSteerCmpEnad.LongName = 'Torque Steer Compensation Enabled';
FordTqSteerCmpEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required.Customer Datatype should be used.Data Ty' ...
  'pe: Boolean with Min value “False”(0), Init value “False”(0) and Max v' ...
  'alue “True”(1)'];
FordTqSteerCmpEnad.DocUnits = 'Cnt';
FordTqSteerCmpEnad.EngDT = dt.lgc;
FordTqSteerCmpEnad.EngInit = 0;
FordTqSteerCmpEnad.EngMin = 0;
FordTqSteerCmpEnad.EngMax = 1;
FordTqSteerCmpEnad.ReadIn = {'FordMsg216BusHiSpdPer1'};
FordTqSteerCmpEnad.ReadType = 'Rte';


FordTrlrBackUpAssiEnad = DataDict.IpSignal;
FordTrlrBackUpAssiEnad.LongName = 'Trailer Back Up Assist Enabled';
FordTrlrBackUpAssiEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required Customer Datatype should be used.Data Ty' ...
  'pe: Boolean with Min value “False”(0), Init value “False”(0) and Max v' ...
  'alue “True”(1)'];
FordTrlrBackUpAssiEnad.DocUnits = 'Cnt';
FordTrlrBackUpAssiEnad.EngDT = dt.lgc;
FordTrlrBackUpAssiEnad.EngInit = 0;
FordTrlrBackUpAssiEnad.EngMin = 0;
FordTrlrBackUpAssiEnad.EngMax = 1;
FordTrlrBackUpAssiEnad.ReadIn = {'FordMsg216BusHiSpdPer1'};
FordTrlrBackUpAssiEnad.ReadType = 'Rte';


Ford_WhlDirFl_D_Actl1 = DataDict.IpSignal;
Ford_WhlDirFl_D_Actl1.LongName = 'Ford Front Left Wheel Direction';
Ford_WhlDirFl_D_Actl1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Datatype: Ford_WhlDirFl_D_Actl.Elements are: ' ...
  '0 - "Cx0_Forward", 1 - "Cx1_Backward", 2 - "Cx2_Unknown", 3 - "Cx3_Fai' ...
  'led'];
Ford_WhlDirFl_D_Actl1.DocUnits = 'Cnt';
Ford_WhlDirFl_D_Actl1.EngDT = enum.Ford_WhlDirFl_D_Actl;
Ford_WhlDirFl_D_Actl1.EngInit = Ford_WhlDirFl_D_Actl.Cx0_Forward;
Ford_WhlDirFl_D_Actl1.EngMin = Ford_WhlDirFl_D_Actl.Cx0_Forward;
Ford_WhlDirFl_D_Actl1.EngMax = Ford_WhlDirFl_D_Actl.Cx3_Failed;
Ford_WhlDirFl_D_Actl1.ReadIn = {'FordMsg216BusHiSpdPer1'};
Ford_WhlDirFl_D_Actl1.ReadType = 'Rte';


Ford_WhlDirFr_D_Actl1 = DataDict.IpSignal;
Ford_WhlDirFr_D_Actl1.LongName = 'Front Right Wheel Direction';
Ford_WhlDirFr_D_Actl1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS.Datatype: Ford_WhlDirFr_D_Actl.Elements are: 0' ...
  ' - "Cx0_Forward", 1 - "Cx1_Backward", 2 - "Cx2_Unknown", 3 - "Cx3_Fail' ...
  'ed'];
Ford_WhlDirFr_D_Actl1.DocUnits = 'Cnt';
Ford_WhlDirFr_D_Actl1.EngDT = enum.Ford_WhlDirFr_D_Actl;
Ford_WhlDirFr_D_Actl1.EngInit = Ford_WhlDirFr_D_Actl.Cx0_Forward;
Ford_WhlDirFr_D_Actl1.EngMin = Ford_WhlDirFr_D_Actl.Cx0_Forward;
Ford_WhlDirFr_D_Actl1.EngMax = Ford_WhlDirFr_D_Actl.Cx3_Failed;
Ford_WhlDirFr_D_Actl1.ReadIn = {'FordMsg216BusHiSpdPer1'};
Ford_WhlDirFr_D_Actl1.ReadType = 'Rte';


Ford_WhlDirRl_D_Actl1 = DataDict.IpSignal;
Ford_WhlDirRl_D_Actl1.LongName = 'Rear Left Wheel Direction';
Ford_WhlDirRl_D_Actl1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS.Datatype: Ford_WhlDirRl_D_Actl.Elements are: 0' ...
  ' - "Cx0_Forward", 1 - "Cx1_Backward", 2 - "Cx2_Unknown", 3 - "Cx3_Fail' ...
  'ed'];
Ford_WhlDirRl_D_Actl1.DocUnits = 'Cnt';
Ford_WhlDirRl_D_Actl1.EngDT = enum.Ford_WhlDirRl_D_Actl;
Ford_WhlDirRl_D_Actl1.EngInit = Ford_WhlDirRl_D_Actl.Cx0_Forward;
Ford_WhlDirRl_D_Actl1.EngMin = Ford_WhlDirRl_D_Actl.Cx0_Forward;
Ford_WhlDirRl_D_Actl1.EngMax = Ford_WhlDirRl_D_Actl.Cx3_Failed;
Ford_WhlDirRl_D_Actl1.ReadIn = {'FordMsg216BusHiSpdPer1'};
Ford_WhlDirRl_D_Actl1.ReadType = 'Rte';


Ford_WhlDirRr_D_Actl1 = DataDict.IpSignal;
Ford_WhlDirRr_D_Actl1.LongName = 'Rear Right Wheel Direction';
Ford_WhlDirRr_D_Actl1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS.Datatype: Ford_WhlDirRr_D_Actl.Elements are: 0' ...
  ' - "Cx0_Forward", 1 - "Cx1_Backward", 2 - "Cx2_Unknown", 3 - "Cx3_Fail' ...
  'ed'];
Ford_WhlDirRr_D_Actl1.DocUnits = 'Cnt';
Ford_WhlDirRr_D_Actl1.EngDT = enum.Ford_WhlDirRr_D_Actl;
Ford_WhlDirRr_D_Actl1.EngInit = Ford_WhlDirRr_D_Actl.Cx0_Forward;
Ford_WhlDirRr_D_Actl1.EngMin = Ford_WhlDirRr_D_Actl.Cx0_Forward;
Ford_WhlDirRr_D_Actl1.EngMax = Ford_WhlDirRr_D_Actl.Cx3_Failed;
Ford_WhlDirRr_D_Actl1.ReadIn = {'FordMsg216BusHiSpdPer1'};
Ford_WhlDirRr_D_Actl1.ReadType = 'Rte';


Ford_WhlRotatFl_No_Cnt = DataDict.IpSignal;
Ford_WhlRotatFl_No_Cnt.LongName = 'Front Left Wheel Rolling Counter';
Ford_WhlRotatFl_No_Cnt.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
Ford_WhlRotatFl_No_Cnt.DocUnits = 'Cnt';
Ford_WhlRotatFl_No_Cnt.EngDT = dt.u08;
Ford_WhlRotatFl_No_Cnt.EngInit = 0;
Ford_WhlRotatFl_No_Cnt.EngMin = 0;
Ford_WhlRotatFl_No_Cnt.EngMax = 255;
Ford_WhlRotatFl_No_Cnt.ReadIn = {'FordMsg216BusHiSpdPer1'};
Ford_WhlRotatFl_No_Cnt.ReadType = 'Rte';


Ford_WhlRotatFr_No_Cnt = DataDict.IpSignal;
Ford_WhlRotatFr_No_Cnt.LongName = 'Front Right Wheel Rolling Counter';
Ford_WhlRotatFr_No_Cnt.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
Ford_WhlRotatFr_No_Cnt.DocUnits = 'Cnt';
Ford_WhlRotatFr_No_Cnt.EngDT = dt.u08;
Ford_WhlRotatFr_No_Cnt.EngInit = 0;
Ford_WhlRotatFr_No_Cnt.EngMin = 0;
Ford_WhlRotatFr_No_Cnt.EngMax = 255;
Ford_WhlRotatFr_No_Cnt.ReadIn = {'FordMsg216BusHiSpdPer1'};
Ford_WhlRotatFr_No_Cnt.ReadType = 'Rte';


Ford_WhlRotatRl_No_Cnt = DataDict.IpSignal;
Ford_WhlRotatRl_No_Cnt.LongName = 'Rear Left Wheel Rolling Counter';
Ford_WhlRotatRl_No_Cnt.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
Ford_WhlRotatRl_No_Cnt.DocUnits = 'Cnt';
Ford_WhlRotatRl_No_Cnt.EngDT = dt.u08;
Ford_WhlRotatRl_No_Cnt.EngInit = 0;
Ford_WhlRotatRl_No_Cnt.EngMin = 0;
Ford_WhlRotatRl_No_Cnt.EngMax = 255;
Ford_WhlRotatRl_No_Cnt.ReadIn = {'FordMsg216BusHiSpdPer1'};
Ford_WhlRotatRl_No_Cnt.ReadType = 'Rte';


Ford_WhlRotatRr_No_Cnt = DataDict.IpSignal;
Ford_WhlRotatRr_No_Cnt.LongName = 'Rear Right Wheel Rolling Counter';
Ford_WhlRotatRr_No_Cnt.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
Ford_WhlRotatRr_No_Cnt.DocUnits = 'Cnt';
Ford_WhlRotatRr_No_Cnt.EngDT = dt.u08;
Ford_WhlRotatRr_No_Cnt.EngInit = 0;
Ford_WhlRotatRr_No_Cnt.EngMin = 0;
Ford_WhlRotatRr_No_Cnt.EngMax = 255;
Ford_WhlRotatRr_No_Cnt.ReadIn = {'FordMsg216BusHiSpdPer1'};
Ford_WhlRotatRr_No_Cnt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehFrntLeWhlCntrDirVld = DataDict.OpSignal;
FordVehFrntLeWhlCntrDirVld.LongName = 'Ford Vehicle Front Left Wheel Counter Direction Valid';
FordVehFrntLeWhlCntrDirVld.Description = [...
  'This output tells if the value for Ford Vehicle Front Left WheelCounte' ...
  'r Direction is valid or not'];
FordVehFrntLeWhlCntrDirVld.DocUnits = 'Cnt';
FordVehFrntLeWhlCntrDirVld.SwcShoName = 'FordMsg216BusHiSpd';
FordVehFrntLeWhlCntrDirVld.EngDT = dt.lgc;
FordVehFrntLeWhlCntrDirVld.EngInit = 0;
FordVehFrntLeWhlCntrDirVld.EngMin = 0;
FordVehFrntLeWhlCntrDirVld.EngMax = 1;
FordVehFrntLeWhlCntrDirVld.TestTolerance = 0;
FordVehFrntLeWhlCntrDirVld.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehFrntLeWhlCntrDirVld.WriteType = 'Rte';


FordVehFrntLeWhlDirRaw = DataDict.OpSignal;
FordVehFrntLeWhlDirRaw.LongName = 'Ford Vehicle Front Left Wheel Direction Raw';
FordVehFrntLeWhlDirRaw.Description = [...
  'This signal provides the raw values of Ford Vehicle Front Left Wheel D' ...
  'irection'];
FordVehFrntLeWhlDirRaw.DocUnits = 'Cnt';
FordVehFrntLeWhlDirRaw.SwcShoName = 'FordMsg216BusHiSpd';
FordVehFrntLeWhlDirRaw.EngDT = enum.FordVehWhlDirRaw1;
FordVehFrntLeWhlDirRaw.EngInit = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehFrntLeWhlDirRaw.EngMin = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehFrntLeWhlDirRaw.EngMax = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FAILD;
FordVehFrntLeWhlDirRaw.TestTolerance = 0;
FordVehFrntLeWhlDirRaw.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehFrntLeWhlDirRaw.WriteType = 'Rte';


FordVehFrntLeWhlRollgCntr = DataDict.OpSignal;
FordVehFrntLeWhlRollgCntr.LongName = 'Ford Vehicle Front Left Wheel Rolling Counter';
FordVehFrntLeWhlRollgCntr.Description = [...
  'Processed value of Ford Vehicle Front Left Wheel Rolling Counter to be' ...
  ' used by EPS'];
FordVehFrntLeWhlRollgCntr.DocUnits = 'Cnt';
FordVehFrntLeWhlRollgCntr.SwcShoName = 'FordMsg216BusHiSpd';
FordVehFrntLeWhlRollgCntr.EngDT = dt.u08;
FordVehFrntLeWhlRollgCntr.EngInit = 0;
FordVehFrntLeWhlRollgCntr.EngMin = 0;
FordVehFrntLeWhlRollgCntr.EngMax = 255;
FordVehFrntLeWhlRollgCntr.TestTolerance = 0;
FordVehFrntLeWhlRollgCntr.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehFrntLeWhlRollgCntr.WriteType = 'Rte';


FordVehFrntRiWhlCntrDirVld = DataDict.OpSignal;
FordVehFrntRiWhlCntrDirVld.LongName = 'Ford Vehicle Front Right Wheel Counter Direction Valid';
FordVehFrntRiWhlCntrDirVld.Description = [...
  'This output tells if the value for Ford Vehicle Front Right WheelCount' ...
  'er Direction is valid or not'];
FordVehFrntRiWhlCntrDirVld.DocUnits = 'Cnt';
FordVehFrntRiWhlCntrDirVld.SwcShoName = 'FordMsg216BusHiSpd';
FordVehFrntRiWhlCntrDirVld.EngDT = dt.lgc;
FordVehFrntRiWhlCntrDirVld.EngInit = 0;
FordVehFrntRiWhlCntrDirVld.EngMin = 0;
FordVehFrntRiWhlCntrDirVld.EngMax = 1;
FordVehFrntRiWhlCntrDirVld.TestTolerance = 0;
FordVehFrntRiWhlCntrDirVld.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehFrntRiWhlCntrDirVld.WriteType = 'Rte';


FordVehFrntRiWhlDirRaw = DataDict.OpSignal;
FordVehFrntRiWhlDirRaw.LongName = 'Ford Vehicle Front Right Wheel Direction Raw';
FordVehFrntRiWhlDirRaw.Description = [...
  'This signal provides the raw values of Ford Vehicle Front Right Wheel ' ...
  'Direction'];
FordVehFrntRiWhlDirRaw.DocUnits = 'Cnt';
FordVehFrntRiWhlDirRaw.SwcShoName = 'FordMsg216BusHiSpd';
FordVehFrntRiWhlDirRaw.EngDT = enum.FordVehWhlDirRaw1;
FordVehFrntRiWhlDirRaw.EngInit = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehFrntRiWhlDirRaw.EngMin = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehFrntRiWhlDirRaw.EngMax = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FAILD;
FordVehFrntRiWhlDirRaw.TestTolerance = 0;
FordVehFrntRiWhlDirRaw.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehFrntRiWhlDirRaw.WriteType = 'Rte';


FordVehFrntRiWhlRollgCntr = DataDict.OpSignal;
FordVehFrntRiWhlRollgCntr.LongName = 'Ford Vehicle Front Right Wheel Rolling Counter';
FordVehFrntRiWhlRollgCntr.Description = [...
  'Processed value of Ford Vehicle Front Right Wheel Rolling Counter to b' ...
  'e used by EPS'];
FordVehFrntRiWhlRollgCntr.DocUnits = 'Cnt';
FordVehFrntRiWhlRollgCntr.SwcShoName = 'FordMsg216BusHiSpd';
FordVehFrntRiWhlRollgCntr.EngDT = dt.u08;
FordVehFrntRiWhlRollgCntr.EngInit = 0;
FordVehFrntRiWhlRollgCntr.EngMin = 0;
FordVehFrntRiWhlRollgCntr.EngMax = 255;
FordVehFrntRiWhlRollgCntr.TestTolerance = 0;
FordVehFrntRiWhlRollgCntr.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehFrntRiWhlRollgCntr.WriteType = 'Rte';


FordVehReLeWhlCntrDirVld = DataDict.OpSignal;
FordVehReLeWhlCntrDirVld.LongName = 'Ford Vehicle Rear Left Wheel Counter Direction Valid';
FordVehReLeWhlCntrDirVld.Description = [...
  'This output tells if the value for Ford Vehicle Rear Left WheelCounter' ...
  ' Direction is valid or not'];
FordVehReLeWhlCntrDirVld.DocUnits = 'Cnt';
FordVehReLeWhlCntrDirVld.SwcShoName = 'FordMsg216BusHiSpd';
FordVehReLeWhlCntrDirVld.EngDT = dt.lgc;
FordVehReLeWhlCntrDirVld.EngInit = 0;
FordVehReLeWhlCntrDirVld.EngMin = 0;
FordVehReLeWhlCntrDirVld.EngMax = 1;
FordVehReLeWhlCntrDirVld.TestTolerance = 0;
FordVehReLeWhlCntrDirVld.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehReLeWhlCntrDirVld.WriteType = 'Rte';


FordVehReLeWhlDirRaw = DataDict.OpSignal;
FordVehReLeWhlDirRaw.LongName = 'Ford Vehicle Rear Left Wheel Direction Raw';
FordVehReLeWhlDirRaw.Description = [...
  'This signal provides the raw values of Ford Vehicle Rear Left Wheel Di' ...
  'rection'];
FordVehReLeWhlDirRaw.DocUnits = 'Cnt';
FordVehReLeWhlDirRaw.SwcShoName = 'FordMsg216BusHiSpd';
FordVehReLeWhlDirRaw.EngDT = enum.FordVehWhlDirRaw1;
FordVehReLeWhlDirRaw.EngInit = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehReLeWhlDirRaw.EngMin = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehReLeWhlDirRaw.EngMax = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FAILD;
FordVehReLeWhlDirRaw.TestTolerance = 0;
FordVehReLeWhlDirRaw.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehReLeWhlDirRaw.WriteType = 'Rte';


FordVehReLeWhlRollgCntr = DataDict.OpSignal;
FordVehReLeWhlRollgCntr.LongName = 'Ford Vehicle Rear Left Wheel Rolling Counter';
FordVehReLeWhlRollgCntr.Description = [...
  'Processed value of Ford Vehicle Rear Left Wheel Rolling Counter to be ' ...
  'used by EPS'];
FordVehReLeWhlRollgCntr.DocUnits = 'Cnt';
FordVehReLeWhlRollgCntr.SwcShoName = 'FordMsg216BusHiSpd';
FordVehReLeWhlRollgCntr.EngDT = dt.u08;
FordVehReLeWhlRollgCntr.EngInit = 0;
FordVehReLeWhlRollgCntr.EngMin = 0;
FordVehReLeWhlRollgCntr.EngMax = 255;
FordVehReLeWhlRollgCntr.TestTolerance = 0;
FordVehReLeWhlRollgCntr.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehReLeWhlRollgCntr.WriteType = 'Rte';


FordVehReRiWhlCntrDirVld = DataDict.OpSignal;
FordVehReRiWhlCntrDirVld.LongName = 'Ford Vehicle Rear Right Wheel Counter Direction Valid';
FordVehReRiWhlCntrDirVld.Description = [...
  'This output tells if the value for Ford Vehicle Rear Right WheelCounte' ...
  'r Direction is valid or not'];
FordVehReRiWhlCntrDirVld.DocUnits = 'Cnt';
FordVehReRiWhlCntrDirVld.SwcShoName = 'FordMsg216BusHiSpd';
FordVehReRiWhlCntrDirVld.EngDT = dt.lgc;
FordVehReRiWhlCntrDirVld.EngInit = 0;
FordVehReRiWhlCntrDirVld.EngMin = 0;
FordVehReRiWhlCntrDirVld.EngMax = 1;
FordVehReRiWhlCntrDirVld.TestTolerance = 0;
FordVehReRiWhlCntrDirVld.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehReRiWhlCntrDirVld.WriteType = 'Rte';


FordVehReRiWhlDirRaw = DataDict.OpSignal;
FordVehReRiWhlDirRaw.LongName = 'Ford Vehicle Rear Right Wheel Direction Raw';
FordVehReRiWhlDirRaw.Description = [...
  'This signal provides the raw values of Ford Vehicle Rear Right Wheel D' ...
  'irection'];
FordVehReRiWhlDirRaw.DocUnits = 'Cnt';
FordVehReRiWhlDirRaw.SwcShoName = 'FordMsg216BusHiSpd';
FordVehReRiWhlDirRaw.EngDT = enum.FordVehWhlDirRaw1;
FordVehReRiWhlDirRaw.EngInit = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehReRiWhlDirRaw.EngMin = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehReRiWhlDirRaw.EngMax = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FAILD;
FordVehReRiWhlDirRaw.TestTolerance = 0;
FordVehReRiWhlDirRaw.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehReRiWhlDirRaw.WriteType = 'Rte';


FordVehReRiWhlRollgCntr = DataDict.OpSignal;
FordVehReRiWhlRollgCntr.LongName = 'Ford Vehicle Rear Right Wheel Rolling Counter';
FordVehReRiWhlRollgCntr.Description = [...
  'Processed value of Ford Vehicle Rear Right Wheel Rolling Counter to be' ...
  ' used by EPS'];
FordVehReRiWhlRollgCntr.DocUnits = 'Cnt';
FordVehReRiWhlRollgCntr.SwcShoName = 'FordMsg216BusHiSpd';
FordVehReRiWhlRollgCntr.EngDT = dt.u08;
FordVehReRiWhlRollgCntr.EngInit = 0;
FordVehReRiWhlRollgCntr.EngMin = 0;
FordVehReRiWhlRollgCntr.EngMax = 255;
FordVehReRiWhlRollgCntr.TestTolerance = 0;
FordVehReRiWhlRollgCntr.WrittenIn = {'FordMsg216BusHiSpdPer1'};
FordVehReRiWhlRollgCntr.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd = DataDict.Calibration;
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.LongName = 'Ford Message 216 Bus High Speed Front Left Wheel Counter Direction Failed Time Threshold';
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.Description = [...
  'Threshold to set the output Front Left Wheel Counter Direction Valid t' ...
  'o False'];
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.EngDT = dt.u16;
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.EngVal = 0;
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.EngMin = 0;
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.EngMax = 6000;
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.CustomerVisible = false;
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.Online = false;
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.Impact = 'H';
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.GraphLink = {''};
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.Monotony = 'None';
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.MaxGrad = 0;
FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd.PortName = 'FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd';


FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd = DataDict.Calibration;
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.LongName = 'Ford Message 216 Bus High Speed Front Left Wheel Counter Direction Passed Time Threshold';
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.Description = [...
  'Threshold to set the output Front Left Wheel Counter Direction Valid t' ...
  'o True'];
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.EngDT = dt.u16;
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.EngVal = 0;
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.EngMin = 0;
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.EngMax = 6000;
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.CustomerVisible = false;
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.Online = false;
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.Impact = 'H';
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.GraphLink = {''};
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.Monotony = 'None';
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.MaxGrad = 0;
FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd.PortName = 'FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd';


FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd = DataDict.Calibration;
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.LongName = 'Ford Message 216 Bus High Speed Front Left Wheel Valid Missing Message Threshold';
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.Description = [...
  'Threshold to set the output Ford Vehicle Front Left Wheel Counter Dire' ...
  'ction Valid to False'];
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.EngDT = dt.u16;
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.EngVal = 5000;
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.EngMin = 0;
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.EngMax = 6000;
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.CustomerVisible = false;
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.Online = false;
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.Impact = 'H';
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.GraphLink = {''};
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.Monotony = 'None';
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.MaxGrad = 0;
FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd.PortName = 'FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd';


FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd = DataDict.Calibration;
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.LongName = 'Ford Message 216 Bus High Speed Front Right Wheel Counter Direction Failed Time Threshold';
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.Description = [...
  'Threshold to set the output Front Right Wheel Counter Direction Valid ' ...
  'to False'];
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.EngDT = dt.u16;
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.EngVal = 0;
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.EngMin = 0;
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.EngMax = 6000;
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.CustomerVisible = false;
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.Online = false;
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.Impact = 'H';
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.GraphLink = {''};
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.Monotony = 'None';
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.MaxGrad = 0;
FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd.PortName = 'FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd';


FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd = DataDict.Calibration;
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.LongName = 'Ford Message 216 Bus High Speed Front Right Wheel Counter Direction Passed Time Threshold';
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.Description = [...
  'Threshold to set the output Front Right Wheel Counter Direction Valid ' ...
  'to True'];
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.EngDT = dt.u16;
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.EngVal = 0;
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.EngMin = 0;
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.EngMax = 6000;
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.CustomerVisible = false;
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.Online = false;
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.Impact = 'H';
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.GraphLink = {''};
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.Monotony = 'None';
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.MaxGrad = 0;
FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd.PortName = 'FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd';


FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd = DataDict.Calibration;
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.LongName = 'Ford Message 216 Bus High Speed Front Right Wheel Valid Missing Message Threshold';
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.Description = [...
  'Threshold to set the output Ford Vehicle Front Right Wheel Counter Dir' ...
  'ection Valid to False'];
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.EngDT = dt.u16;
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.EngVal = 5000;
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.EngMin = 0;
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.EngMax = 6000;
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.CustomerVisible = false;
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.Online = false;
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.Impact = 'H';
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.GraphLink = {''};
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.Monotony = 'None';
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.MaxGrad = 0;
FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd.PortName = 'FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd';


FordMsg216BusHiSpdMissMsgFaildTiThd = DataDict.Calibration;
FordMsg216BusHiSpdMissMsgFaildTiThd.LongName = 'Ford Message 216 Bus High Speed Missing Message Failed Time Threshold';
FordMsg216BusHiSpdMissMsgFaildTiThd.Description = [...
  'Threshold to Set the Missing message NTC'];
FordMsg216BusHiSpdMissMsgFaildTiThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdMissMsgFaildTiThd.EngDT = dt.u16;
FordMsg216BusHiSpdMissMsgFaildTiThd.EngVal = 5000;
FordMsg216BusHiSpdMissMsgFaildTiThd.EngMin = 0;
FordMsg216BusHiSpdMissMsgFaildTiThd.EngMax = 6000;
FordMsg216BusHiSpdMissMsgFaildTiThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdMissMsgFaildTiThd.CustomerVisible = false;
FordMsg216BusHiSpdMissMsgFaildTiThd.Online = false;
FordMsg216BusHiSpdMissMsgFaildTiThd.Impact = 'L';
FordMsg216BusHiSpdMissMsgFaildTiThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdMissMsgFaildTiThd.GraphLink = {''};
FordMsg216BusHiSpdMissMsgFaildTiThd.Monotony = 'None';
FordMsg216BusHiSpdMissMsgFaildTiThd.MaxGrad = 0;
FordMsg216BusHiSpdMissMsgFaildTiThd.PortName = 'FordMsg216BusHiSpdMissMsgFaildTiThd';


FordMsg216BusHiSpdMissMsgPassdTiThd = DataDict.Calibration;
FordMsg216BusHiSpdMissMsgPassdTiThd.LongName = 'Ford Message 216 Bus High Speed Missing Message Passed Time Threshold';
FordMsg216BusHiSpdMissMsgPassdTiThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg216BusHiSpdMissMsgPassdTiThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdMissMsgPassdTiThd.EngDT = dt.u16;
FordMsg216BusHiSpdMissMsgPassdTiThd.EngVal = 0;
FordMsg216BusHiSpdMissMsgPassdTiThd.EngMin = 0;
FordMsg216BusHiSpdMissMsgPassdTiThd.EngMax = 6000;
FordMsg216BusHiSpdMissMsgPassdTiThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdMissMsgPassdTiThd.CustomerVisible = false;
FordMsg216BusHiSpdMissMsgPassdTiThd.Online = false;
FordMsg216BusHiSpdMissMsgPassdTiThd.Impact = 'L';
FordMsg216BusHiSpdMissMsgPassdTiThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdMissMsgPassdTiThd.GraphLink = {''};
FordMsg216BusHiSpdMissMsgPassdTiThd.Monotony = 'None';
FordMsg216BusHiSpdMissMsgPassdTiThd.MaxGrad = 0;
FordMsg216BusHiSpdMissMsgPassdTiThd.PortName = 'FordMsg216BusHiSpdMissMsgPassdTiThd';


FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd = DataDict.Calibration;
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.LongName = 'Ford Message 216 Bus High Speed Rear Left Wheel Counter Direction Failed Time Threshold';
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.Description = [...
  'Threshold to set the output Rear Left Wheel Counter Direction Valid to' ...
  ' False'];
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.EngDT = dt.u16;
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.EngVal = 0;
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.EngMin = 0;
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.EngMax = 6000;
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.CustomerVisible = false;
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.Online = false;
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.Impact = 'H';
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.GraphLink = {''};
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.Monotony = 'None';
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.MaxGrad = 0;
FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd.PortName = 'FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd';


FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd = DataDict.Calibration;
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.LongName = 'Ford Message 216 Bus High Speed Rear Left Wheel Counter Direction Passed Time Threshold';
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.Description = [...
  'Threshold to set the output Rear Left Wheel Counter Direction Valid to' ...
  ' True'];
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.EngDT = dt.u16;
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.EngVal = 0;
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.EngMin = 0;
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.EngMax = 6000;
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.CustomerVisible = false;
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.Online = false;
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.Impact = 'H';
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.GraphLink = {''};
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.Monotony = 'None';
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.MaxGrad = 0;
FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd.PortName = 'FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd';


FordMsg216BusHiSpdReLeWhlVldMissMsgThd = DataDict.Calibration;
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.LongName = 'Ford Message 216 Bus High Speed Rear Left Wheel Valid Missing Message Threshold';
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.Description = [...
  'Threshold to set the output Ford Vehicle Rear Left Wheel Counter Direc' ...
  'tion Valid to False'];
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.EngDT = dt.u16;
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.EngVal = 5000;
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.EngMin = 0;
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.EngMax = 6000;
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.CustomerVisible = false;
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.Online = false;
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.Impact = 'H';
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.GraphLink = {''};
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.Monotony = 'None';
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.MaxGrad = 0;
FordMsg216BusHiSpdReLeWhlVldMissMsgThd.PortName = 'FordMsg216BusHiSpdReLeWhlVldMissMsgThd';


FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd = DataDict.Calibration;
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.LongName = 'Ford Message 216 Bus High Speed Rear Right Wheel Counter Direction Failed Time Threshold';
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.Description = [...
  'Threshold to set the output Rear Right Wheel Counter Direction Valid t' ...
  'o False'];
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.EngDT = dt.u16;
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.EngVal = 0;
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.EngMin = 0;
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.EngMax = 6000;
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.CustomerVisible = false;
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.Online = false;
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.Impact = 'H';
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.GraphLink = {''};
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.Monotony = 'None';
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.MaxGrad = 0;
FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd.PortName = 'FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd';


FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd = DataDict.Calibration;
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.LongName = 'Ford Message 216 Bus High Speed Rear Right Wheel Counter Direction Passed Time Threshold';
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.Description = [...
  'Threshold to set the output Rear Right Wheel Counter Direction Valid t' ...
  'o True'];
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.EngDT = dt.u16;
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.EngVal = 0;
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.EngMin = 0;
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.EngMax = 6000;
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.CustomerVisible = false;
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.Online = false;
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.Impact = 'H';
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.GraphLink = {''};
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.Monotony = 'None';
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.MaxGrad = 0;
FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd.PortName = 'FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd';


FordMsg216BusHiSpdReRiWhlVldMissMsgThd = DataDict.Calibration;
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.LongName = 'Ford Message 216 Bus High Speed Rear Right Wheel Valid Missing Message Threshold';
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.Description = [...
  'Threshold to set the output Ford Vehicle Rear Right Wheel Counter Dire' ...
  'ction Valid to False'];
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.EngDT = dt.u16;
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.EngVal = 5000;
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.EngMin = 0;
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.EngMax = 6000;
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.Cardinality = 'Cmn';
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.CustomerVisible = false;
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.Online = false;
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.Impact = 'H';
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.GraphLink = {''};
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.Monotony = 'None';
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.MaxGrad = 0;
FordMsg216BusHiSpdReRiWhlVldMissMsgThd.PortName = 'FordMsg216BusHiSpdReRiWhlVldMissMsgThd';



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
ClrDiagcFlgProxyPrev.LongName = 'Clear Diagc Flag Proxy';
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


FordVehFrntLeWhlCntrDirVldPrev = DataDict.PIM;
FordVehFrntLeWhlCntrDirVldPrev.LongName = 'Ford Vehicle Front Left Wheel Counter Direction Valid Previous';
FordVehFrntLeWhlCntrDirVldPrev.Description = [...
  'Previous value of Ford Vehicle Front Left Wheel Counter Direction Vali' ...
  'd'];
FordVehFrntLeWhlCntrDirVldPrev.DocUnits = 'Cnt';
FordVehFrntLeWhlCntrDirVldPrev.EngDT = dt.lgc;
FordVehFrntLeWhlCntrDirVldPrev.EngMin = 0;
FordVehFrntLeWhlCntrDirVldPrev.EngMax = 1;
FordVehFrntLeWhlCntrDirVldPrev.InitRowCol = [1  1];


FordVehFrntLeWhlDirRawPrev = DataDict.PIM;
FordVehFrntLeWhlDirRawPrev.LongName = 'Ford Vehicle Front Left Wheel Direction Raw Previous';
FordVehFrntLeWhlDirRawPrev.Description = [...
  'Previous value of Ford Vehicle Front Left Wheel Direction Raw'];
FordVehFrntLeWhlDirRawPrev.DocUnits = 'Cnt';
FordVehFrntLeWhlDirRawPrev.EngDT = enum.FordVehWhlDirRaw1;
FordVehFrntLeWhlDirRawPrev.EngMin = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehFrntLeWhlDirRawPrev.EngMax = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FAILD;
FordVehFrntLeWhlDirRawPrev.InitRowCol = [1  1];


FordVehFrntLeWhlRollgCntrPrev = DataDict.PIM;
FordVehFrntLeWhlRollgCntrPrev.LongName = 'Ford Vehicle Front Left Wheel Rolling Counter Previous';
FordVehFrntLeWhlRollgCntrPrev.Description = [...
  'Previous value of Ford Vehicle Front Left Wheel Rolling Counter'];
FordVehFrntLeWhlRollgCntrPrev.DocUnits = 'Cnt';
FordVehFrntLeWhlRollgCntrPrev.EngDT = dt.u08;
FordVehFrntLeWhlRollgCntrPrev.EngMin = 0;
FordVehFrntLeWhlRollgCntrPrev.EngMax = 255;
FordVehFrntLeWhlRollgCntrPrev.InitRowCol = [1  1];


FordVehFrntRiWhlCntrDirVldPrev = DataDict.PIM;
FordVehFrntRiWhlCntrDirVldPrev.LongName = 'Ford Vehicle Front Right Wheel Counter Direction Valid Previous';
FordVehFrntRiWhlCntrDirVldPrev.Description = [...
  'Previous value of Ford Vehicle Front Right Wheel Counter Direction Val' ...
  'id'];
FordVehFrntRiWhlCntrDirVldPrev.DocUnits = 'Cnt';
FordVehFrntRiWhlCntrDirVldPrev.EngDT = dt.lgc;
FordVehFrntRiWhlCntrDirVldPrev.EngMin = 0;
FordVehFrntRiWhlCntrDirVldPrev.EngMax = 1;
FordVehFrntRiWhlCntrDirVldPrev.InitRowCol = [1  1];


FordVehFrntRiWhlDirRawPrev = DataDict.PIM;
FordVehFrntRiWhlDirRawPrev.LongName = 'Ford Vehicle Front Right Wheel Direction Raw Previous';
FordVehFrntRiWhlDirRawPrev.Description = [...
  'Previous value of Ford Vehicle Front Right Wheel Direction Raw'];
FordVehFrntRiWhlDirRawPrev.DocUnits = 'Cnt';
FordVehFrntRiWhlDirRawPrev.EngDT = enum.FordVehWhlDirRaw1;
FordVehFrntRiWhlDirRawPrev.EngMin = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehFrntRiWhlDirRawPrev.EngMax = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FAILD;
FordVehFrntRiWhlDirRawPrev.InitRowCol = [1  1];


FordVehFrntRiWhlRollgCntrPrev = DataDict.PIM;
FordVehFrntRiWhlRollgCntrPrev.LongName = 'Ford Vehicle Front Right Wheel Rolling Counter Previous';
FordVehFrntRiWhlRollgCntrPrev.Description = [...
  'Previous value of Ford Vehicle Front Right Wheel Rolling Counter'];
FordVehFrntRiWhlRollgCntrPrev.DocUnits = 'Cnt';
FordVehFrntRiWhlRollgCntrPrev.EngDT = dt.u08;
FordVehFrntRiWhlRollgCntrPrev.EngMin = 0;
FordVehFrntRiWhlRollgCntrPrev.EngMax = 255;
FordVehFrntRiWhlRollgCntrPrev.InitRowCol = [1  1];


FordVehMsg064Miss = DataDict.PIM;
FordVehMsg064Miss.LongName = 'Ford Vehicle Message 064 Missing';
FordVehMsg064Miss.Description = [...
  'Flag for missing message diagnostics, it is true when message is missi' ...
  'ng'];
FordVehMsg064Miss.DocUnits = 'Cnt';
FordVehMsg064Miss.EngDT = dt.lgc;
FordVehMsg064Miss.EngMin = 0;
FordVehMsg064Miss.EngMax = 1;
FordVehMsg064Miss.InitRowCol = [1  1];


FordVehReLeWhlCntrDirVldPrev = DataDict.PIM;
FordVehReLeWhlCntrDirVldPrev.LongName = 'Ford Vehicle Rear Left Wheel Counter Direction Valid Previous';
FordVehReLeWhlCntrDirVldPrev.Description = [...
  'Previous value of Ford Vehicle Rear Left Wheel Counter Direction Valid' ...
  ''];
FordVehReLeWhlCntrDirVldPrev.DocUnits = 'Cnt';
FordVehReLeWhlCntrDirVldPrev.EngDT = dt.lgc;
FordVehReLeWhlCntrDirVldPrev.EngMin = 0;
FordVehReLeWhlCntrDirVldPrev.EngMax = 1;
FordVehReLeWhlCntrDirVldPrev.InitRowCol = [1  1];


FordVehReLeWhlDirRawPrev = DataDict.PIM;
FordVehReLeWhlDirRawPrev.LongName = 'Ford Vehicle Rear Left Wheel Direction Raw Previous';
FordVehReLeWhlDirRawPrev.Description = [...
  'Previous value of Ford Vehicle Rear Left Wheel Direction Raw'];
FordVehReLeWhlDirRawPrev.DocUnits = 'Cnt';
FordVehReLeWhlDirRawPrev.EngDT = enum.FordVehWhlDirRaw1;
FordVehReLeWhlDirRawPrev.EngMin = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehReLeWhlDirRawPrev.EngMax = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FAILD;
FordVehReLeWhlDirRawPrev.InitRowCol = [1  1];


FordVehReLeWhlRollgCntrPrev = DataDict.PIM;
FordVehReLeWhlRollgCntrPrev.LongName = 'Ford Vehicle Rear Left Wheel Rolling Counter Previous';
FordVehReLeWhlRollgCntrPrev.Description = [...
  'Previous value of Ford Vehicle Rear Left Wheel Rolling Counter'];
FordVehReLeWhlRollgCntrPrev.DocUnits = 'Cnt';
FordVehReLeWhlRollgCntrPrev.EngDT = dt.u08;
FordVehReLeWhlRollgCntrPrev.EngMin = 0;
FordVehReLeWhlRollgCntrPrev.EngMax = 255;
FordVehReLeWhlRollgCntrPrev.InitRowCol = [1  1];


FordVehReRiWhlCntrDirVldPrev = DataDict.PIM;
FordVehReRiWhlCntrDirVldPrev.LongName = 'Ford Vehicle Rear Right Wheel Counter Direction Valid Previous';
FordVehReRiWhlCntrDirVldPrev.Description = [...
  'Previous value of Ford Vehicle Rear Right Wheel Counter Direction Vali' ...
  'd'];
FordVehReRiWhlCntrDirVldPrev.DocUnits = 'Cnt';
FordVehReRiWhlCntrDirVldPrev.EngDT = dt.lgc;
FordVehReRiWhlCntrDirVldPrev.EngMin = 0;
FordVehReRiWhlCntrDirVldPrev.EngMax = 1;
FordVehReRiWhlCntrDirVldPrev.InitRowCol = [1  1];


FordVehReRiWhlDirRawPrev = DataDict.PIM;
FordVehReRiWhlDirRawPrev.LongName = 'Ford Vehicle Rear Right Wheel Direction Raw Previous';
FordVehReRiWhlDirRawPrev.Description = [...
  'Previous value of Ford Vehicle Rear Right Wheel Direction Raw'];
FordVehReRiWhlDirRawPrev.DocUnits = 'Cnt';
FordVehReRiWhlDirRawPrev.EngDT = enum.FordVehWhlDirRaw1;
FordVehReRiWhlDirRawPrev.EngMin = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FWD;
FordVehReRiWhlDirRawPrev.EngMax = FordVehWhlDirRaw1.FORDVEHWHLDIRRAW_FAILD;
FordVehReRiWhlDirRawPrev.InitRowCol = [1  1];


FordVehReRiWhlRollgCntrPrev = DataDict.PIM;
FordVehReRiWhlRollgCntrPrev.LongName = 'Ford Vehicle Rear Right Wheel Rolling Counter Previous';
FordVehReRiWhlRollgCntrPrev.Description = [...
  'Previous value of Ford Vehicle Rear Right Wheel Rolling Counter'];
FordVehReRiWhlRollgCntrPrev.DocUnits = 'Cnt';
FordVehReRiWhlRollgCntrPrev.EngDT = dt.u08;
FordVehReRiWhlRollgCntrPrev.EngMin = 0;
FordVehReRiWhlRollgCntrPrev.EngMax = 255;
FordVehReRiWhlRollgCntrPrev.InitRowCol = [1  1];


FrntLeWhlCntrDirVldFaildRefTi = DataDict.PIM;
FrntLeWhlCntrDirVldFaildRefTi.LongName = 'Front Left Wheel Counter Direction Valid Failed Reference Time';
FrntLeWhlCntrDirVldFaildRefTi.Description = [...
  'Timer for Front Left Wheel Counter Direction Valid Failed Reference Ti' ...
  'me will increment or reset based on the conditions'];
FrntLeWhlCntrDirVldFaildRefTi.DocUnits = 'Cnt';
FrntLeWhlCntrDirVldFaildRefTi.EngDT = dt.u32;
FrntLeWhlCntrDirVldFaildRefTi.EngMin = 0;
FrntLeWhlCntrDirVldFaildRefTi.EngMax = 4294967295;
FrntLeWhlCntrDirVldFaildRefTi.InitRowCol = [1  1];


FrntLeWhlCntrDirVldPassdRefTi = DataDict.PIM;
FrntLeWhlCntrDirVldPassdRefTi.LongName = 'Front Left Wheel Counter Direction Valid Passed Reference Time';
FrntLeWhlCntrDirVldPassdRefTi.Description = [...
  'Timer for Front Left Wheel Counter Direction Valid Passed Reference Ti' ...
  'me will increment or reset based on the conditions'];
FrntLeWhlCntrDirVldPassdRefTi.DocUnits = 'Cnt';
FrntLeWhlCntrDirVldPassdRefTi.EngDT = dt.u32;
FrntLeWhlCntrDirVldPassdRefTi.EngMin = 0;
FrntLeWhlCntrDirVldPassdRefTi.EngMax = 4294967295;
FrntLeWhlCntrDirVldPassdRefTi.InitRowCol = [1  1];


FrntLeWhlVldMissMsgRefTi = DataDict.PIM;
FrntLeWhlVldMissMsgRefTi.LongName = 'Front Left Wheel Valid Missing Message Reference Time';
FrntLeWhlVldMissMsgRefTi.Description = [...
  'Timer for Front Left Wheel Counter Direction Valid Missing Message Ref' ...
  'erence Time will increment or reset based on the conditions'];
FrntLeWhlVldMissMsgRefTi.DocUnits = 'Cnt';
FrntLeWhlVldMissMsgRefTi.EngDT = dt.u32;
FrntLeWhlVldMissMsgRefTi.EngMin = 0;
FrntLeWhlVldMissMsgRefTi.EngMax = 4294967295;
FrntLeWhlVldMissMsgRefTi.InitRowCol = [1  1];


FrntRiWhlCntrDirVldFaildRefTi = DataDict.PIM;
FrntRiWhlCntrDirVldFaildRefTi.LongName = 'Front Right Wheel Counter Direction Valid Failed Reference Time';
FrntRiWhlCntrDirVldFaildRefTi.Description = [...
  'Timer for Front Right Wheel Counter Direction Valid Failed Reference T' ...
  'ime will increment or reset based on the conditions'];
FrntRiWhlCntrDirVldFaildRefTi.DocUnits = 'Cnt';
FrntRiWhlCntrDirVldFaildRefTi.EngDT = dt.u32;
FrntRiWhlCntrDirVldFaildRefTi.EngMin = 0;
FrntRiWhlCntrDirVldFaildRefTi.EngMax = 4294967295;
FrntRiWhlCntrDirVldFaildRefTi.InitRowCol = [1  1];


FrntRiWhlCntrDirVldPassdRefTi = DataDict.PIM;
FrntRiWhlCntrDirVldPassdRefTi.LongName = 'Front Right Wheel Counter Direction Valid Passed Reference Time';
FrntRiWhlCntrDirVldPassdRefTi.Description = [...
  'Timer for Front Right Wheel Counter Direction Valid Passed Reference T' ...
  'ime will increment or reset based on the conditions'];
FrntRiWhlCntrDirVldPassdRefTi.DocUnits = 'Cnt';
FrntRiWhlCntrDirVldPassdRefTi.EngDT = dt.u32;
FrntRiWhlCntrDirVldPassdRefTi.EngMin = 0;
FrntRiWhlCntrDirVldPassdRefTi.EngMax = 4294967295;
FrntRiWhlCntrDirVldPassdRefTi.InitRowCol = [1  1];


FrntRiWhlVldMissMsgRefTi = DataDict.PIM;
FrntRiWhlVldMissMsgRefTi.LongName = 'Front Right Wheel Valid Missing Message Reference Time';
FrntRiWhlVldMissMsgRefTi.Description = [...
  'Timer for Front Right Wheel Counter Direction Valid Missing Message Re' ...
  'ference Time will increment or reset based on the conditions'];
FrntRiWhlVldMissMsgRefTi.DocUnits = 'Cnt';
FrntRiWhlVldMissMsgRefTi.EngDT = dt.u32;
FrntRiWhlVldMissMsgRefTi.EngMin = 0;
FrntRiWhlVldMissMsgRefTi.EngMax = 4294967295;
FrntRiWhlVldMissMsgRefTi.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Reference Time';
MissMsgFaildRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
MissMsgFaildRefTi.DocUnits = 'Cnt';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Reference Time';
MissMsgPassdRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
MissMsgPassdRefTi.DocUnits = 'Cnt';
MissMsgPassdRefTi.EngDT = dt.u32;
MissMsgPassdRefTi.EngMin = 0;
MissMsgPassdRefTi.EngMax = 4294967295;
MissMsgPassdRefTi.InitRowCol = [1  1];


ReLeWhlCntrDirVldFaildRefTi = DataDict.PIM;
ReLeWhlCntrDirVldFaildRefTi.LongName = 'Rear Left Wheel Counter Direction Valid Failed Reference Time';
ReLeWhlCntrDirVldFaildRefTi.Description = [...
  'Timer for Rear Left Wheel Counter Direction Valid Failed Reference Tim' ...
  'e will increment or reset based on the conditions'];
ReLeWhlCntrDirVldFaildRefTi.DocUnits = 'Cnt';
ReLeWhlCntrDirVldFaildRefTi.EngDT = dt.u32;
ReLeWhlCntrDirVldFaildRefTi.EngMin = 0;
ReLeWhlCntrDirVldFaildRefTi.EngMax = 4294967295;
ReLeWhlCntrDirVldFaildRefTi.InitRowCol = [1  1];


ReLeWhlCntrDirVldPassdRefTi = DataDict.PIM;
ReLeWhlCntrDirVldPassdRefTi.LongName = 'Rear Left Wheel Counter Direction Valid Passed Reference Time';
ReLeWhlCntrDirVldPassdRefTi.Description = [...
  'Timer for Rear Left Wheel Counter Direction Valid Passed Reference Tim' ...
  'e will increment or reset based on the conditions'];
ReLeWhlCntrDirVldPassdRefTi.DocUnits = 'Cnt';
ReLeWhlCntrDirVldPassdRefTi.EngDT = dt.u32;
ReLeWhlCntrDirVldPassdRefTi.EngMin = 0;
ReLeWhlCntrDirVldPassdRefTi.EngMax = 4294967295;
ReLeWhlCntrDirVldPassdRefTi.InitRowCol = [1  1];


ReLeWhlVldMissMsgRefTi = DataDict.PIM;
ReLeWhlVldMissMsgRefTi.LongName = 'Rear Left Wheel Valid Missing Message Reference Time';
ReLeWhlVldMissMsgRefTi.Description = [...
  'Timer for Rear Left Wheel Counter Direction Valid Missing Message Refe' ...
  'rence Time will increment or reset based on the conditions'];
ReLeWhlVldMissMsgRefTi.DocUnits = 'Cnt';
ReLeWhlVldMissMsgRefTi.EngDT = dt.u32;
ReLeWhlVldMissMsgRefTi.EngMin = 0;
ReLeWhlVldMissMsgRefTi.EngMax = 4294967295;
ReLeWhlVldMissMsgRefTi.InitRowCol = [1  1];


ReRiWhlCntrDirVldFaildRefTi = DataDict.PIM;
ReRiWhlCntrDirVldFaildRefTi.LongName = 'Rear Right Wheel Counter Direction Valid Failed Reference Time';
ReRiWhlCntrDirVldFaildRefTi.Description = [...
  'Timer for Rear Right Wheel Counter Direction Valid Failed Reference Ti' ...
  'me will increment or reset based on the conditions'];
ReRiWhlCntrDirVldFaildRefTi.DocUnits = 'Cnt';
ReRiWhlCntrDirVldFaildRefTi.EngDT = dt.u32;
ReRiWhlCntrDirVldFaildRefTi.EngMin = 0;
ReRiWhlCntrDirVldFaildRefTi.EngMax = 4294967295;
ReRiWhlCntrDirVldFaildRefTi.InitRowCol = [1  1];


ReRiWhlCntrDirVldPassdRefTi = DataDict.PIM;
ReRiWhlCntrDirVldPassdRefTi.LongName = 'Rear Right Wheel Counter Direction Valid Passed Reference Time';
ReRiWhlCntrDirVldPassdRefTi.Description = [...
  'Timer for Rear Right Wheel Counter Direction Valid Passed Reference Ti' ...
  'me will increment or reset based on the conditions'];
ReRiWhlCntrDirVldPassdRefTi.DocUnits = 'Cnt';
ReRiWhlCntrDirVldPassdRefTi.EngDT = dt.u32;
ReRiWhlCntrDirVldPassdRefTi.EngMin = 0;
ReRiWhlCntrDirVldPassdRefTi.EngMax = 4294967295;
ReRiWhlCntrDirVldPassdRefTi.InitRowCol = [1  1];


ReRiWhlVldMissMsgRefTi = DataDict.PIM;
ReRiWhlVldMissMsgRefTi.LongName = 'Rear Right Wheel Valid Missing Message Reference Time';
ReRiWhlVldMissMsgRefTi.Description = [...
  'Timer for Rear Right Wheel Counter Direction Valid Missing Message Ref' ...
  'erence Time will increment or reset based on the conditions'];
ReRiWhlVldMissMsgRefTi.DocUnits = 'Cnt';
ReRiWhlVldMissMsgRefTi.EngDT = dt.u32;
ReRiWhlVldMissMsgRefTi.EngMin = 0;
ReRiWhlVldMissMsgRefTi.EngMax = 4294967295;
ReRiWhlVldMissMsgRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
BUSHISPDFIXDTITHD_MILLISEC_U16 = DataDict.Constant;
BUSHISPDFIXDTITHD_MILLISEC_U16.LongName = 'Bus High Speed Fixed Timer Threshold';
BUSHISPDFIXDTITHD_MILLISEC_U16.Description = [...
  'It is constant threshold of 5000ms '];
BUSHISPDFIXDTITHD_MILLISEC_U16.DocUnits = 'MilliSec';
BUSHISPDFIXDTITHD_MILLISEC_U16.EngDT = dt.u16;
BUSHISPDFIXDTITHD_MILLISEC_U16.EngVal = 5000;
BUSHISPDFIXDTITHD_MILLISEC_U16.Define = 'Local';


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


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


WHLROLLGCNTRMAX_CNT_U08 = DataDict.Constant;
WHLROLLGCNTRMAX_CNT_U08.LongName = 'Wheel Rolling Counter Maximum';
WHLROLLGCNTRMAX_CNT_U08.Description = [...
  'Maximum Value for all the Wheel Rolling Counter outputs'];
WHLROLLGCNTRMAX_CNT_U08.DocUnits = 'Cnt';
WHLROLLGCNTRMAX_CNT_U08.EngDT = dt.u08;
WHLROLLGCNTRMAX_CNT_U08.EngVal = 255;
WHLROLLGCNTRMAX_CNT_U08.Define = 'Local';


WHLROLLGCNTRMIN_CNT_U08 = DataDict.Constant;
WHLROLLGCNTRMIN_CNT_U08.LongName = 'Wheel Rolling Counter Minimum';
WHLROLLGCNTRMIN_CNT_U08.Description = [...
  'Minimum Value for all the Wheel Rolling Counter outputs'];
WHLROLLGCNTRMIN_CNT_U08.DocUnits = 'Cnt';
WHLROLLGCNTRMIN_CNT_U08.EngDT = dt.u08;
WHLROLLGCNTRMIN_CNT_U08.EngVal = 0;
WHLROLLGCNTRMIN_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg216MissMsg = DataDict.NTC;
FordMsg216MissMsg.NtcNr = NtcNr1.NTCNR_0X133;
FordMsg216MissMsg.NtcTyp = 'None';
FordMsg216MissMsg.LongName = 'Ford Message 216 Missing Message';
FordMsg216MissMsg.Description = 'Ford Message 216 Missing Message Diagnostic';
FordMsg216MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg216MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg216MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg216MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg216MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg216MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg216MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg216MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg216MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg216MissMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
