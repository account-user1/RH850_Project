%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 20-Feb-2018 13:01:10       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM059A = DataDict.FDD;
MM059A.Version = '3.0.X';
MM059A.LongName = 'Ford Message 167 Bus High Speed';
MM059A.ShoName  = 'FordMsg167BusHiSpd';
MM059A.DesignASIL = 'QM';
MM059A.Description = [...
  'The purpose of the Ford Message 0167 Bus HighSpeed function is to prov' ...
  'ide the EPS system with signal valuesfor the System State, Voltage Dia' ...
  'gnostic, Start Stop, and TorqueSteer Compensation functions from CAN. ' ...
  'The Ford Message 167 functionwill perform the missing message and sign' ...
  'al invalid diagnostics aswell as provide a validity flag for the signa' ...
  'l valuesand received message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg167BusHiSpdInit1 = DataDict.Runnable;
FordMsg167BusHiSpdInit1.Context = 'Rte';
FordMsg167BusHiSpdInit1.TimeStep = 0;
FordMsg167BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg167BusHiSpdPer1 = DataDict.Runnable;
FordMsg167BusHiSpdPer1.Context = 'Rte';
FordMsg167BusHiSpdPer1.TimeStep = 0.01;
FordMsg167BusHiSpdPer1.Description = 'Periodic Runnable at 0.01 sec';

ComIPduCallout_VehicleOperatingModes_HS2 = DataDict.SrvRunnable;
ComIPduCallout_VehicleOperatingModes_HS2.Context = 'NonRte';
ComIPduCallout_VehicleOperatingModes_HS2.Description = [...
  'Server Runnable for clear diagnostics'];
ComIPduCallout_VehicleOperatingModes_HS2.Return = DataDict.CSReturn;
ComIPduCallout_VehicleOperatingModes_HS2.Return.Type = 'None';
ComIPduCallout_VehicleOperatingModes_HS2.Return.Min = [];
ComIPduCallout_VehicleOperatingModes_HS2.Return.Max = [];
ComIPduCallout_VehicleOperatingModes_HS2.Return.TestTolerance = [];
ComIPduCallout_VehicleOperatingModes_HS2.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_VehicleOperatingModes_HS2.Arguments(1).Name = 'VehicleOperatingModes';
ComIPduCallout_VehicleOperatingModes_HS2.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_VehicleOperatingModes_HS2.Arguments(1).EngMin = 0;
ComIPduCallout_VehicleOperatingModes_HS2.Arguments(1).EngMax = 1;
ComIPduCallout_VehicleOperatingModes_HS2.Arguments(1).TestTolerance = 999;
ComIPduCallout_VehicleOperatingModes_HS2.Arguments(1).Units = 'Cnt';
ComIPduCallout_VehicleOperatingModes_HS2.Arguments(1).Direction = 'Out';
ComIPduCallout_VehicleOperatingModes_HS2.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_VehicleOperatingModes_HS2.Arguments(1).Description = '';

ComTimeoutNotification_PwPckTq_D_Stat = DataDict.SrvRunnable;
ComTimeoutNotification_PwPckTq_D_Stat.Context = 'NonRte';
ComTimeoutNotification_PwPckTq_D_Stat.Description = [...
  'Server Runnable for disabling serial communication'];
ComTimeoutNotification_PwPckTq_D_Stat.Return = DataDict.CSReturn;
ComTimeoutNotification_PwPckTq_D_Stat.Return.Type = 'None';
ComTimeoutNotification_PwPckTq_D_Stat.Return.Min = [];
ComTimeoutNotification_PwPckTq_D_Stat.Return.Max = [];
ComTimeoutNotification_PwPckTq_D_Stat.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg167BusHiSpdPer1','FordMsg167BusHiSpdInit1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg167BusHiSpdPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'It Captures simulation time from the SimnTi value, handles counter wra' ...
  'pping, and subtracts RefTmr,provides the TiSpan'];
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
SetNtcSts.CallLocation = {'FordMsg167BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg167BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordBrkOscnRednEnad = DataDict.IpSignal;
FordBrkOscnRednEnad.LongName = 'Ford Brake Oscillation Reduction Enabled';
FordBrkOscnRednEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required'];
FordBrkOscnRednEnad.DocUnits = 'Cnt';
FordBrkOscnRednEnad.EngDT = dt.lgc;
FordBrkOscnRednEnad.EngInit = 0;
FordBrkOscnRednEnad.EngMin = 0;
FordBrkOscnRednEnad.EngMax = 1;
FordBrkOscnRednEnad.ReadIn = {'FordMsg167BusHiSpdPer1'};
FordBrkOscnRednEnad.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'When CAN DTC Inhibit is FALSE, Diagnostic test is performed'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.u08;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg167BusHiSpdPer1'};
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
FordEpsLifeCycMod.ReadIn = {'FordMsg167BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordInvldMsgDiagcInhb = DataDict.IpSignal;
FordInvldMsgDiagcInhb.LongName = 'Ford InvldMsgDiagcInhb Inhibit';
FordInvldMsgDiagcInhb.Description = [...
  'When InvldMsgDiagcInhb is True, Diagnostic test is performed'];
FordInvldMsgDiagcInhb.DocUnits = 'Cnt';
FordInvldMsgDiagcInhb.EngDT = dt.u08;
FordInvldMsgDiagcInhb.EngInit = 0;
FordInvldMsgDiagcInhb.EngMin = 0;
FordInvldMsgDiagcInhb.EngMax = 1;
FordInvldMsgDiagcInhb.ReadIn = {'FordMsg167BusHiSpdPer1'};
FordInvldMsgDiagcInhb.ReadType = 'Rte';


FordMfgDiagcInhb = DataDict.IpSignal;
FordMfgDiagcInhb.LongName = 'Ford Mfg Diagc Inhibit';
FordMfgDiagcInhb.Description = [...
  'When Mfg Diagc Inhibit is True, Diagnostic test is performed'];
FordMfgDiagcInhb.DocUnits = 'Cnt';
FordMfgDiagcInhb.EngDT = dt.u08;
FordMfgDiagcInhb.EngInit = 0;
FordMfgDiagcInhb.EngMin = 0;
FordMfgDiagcInhb.EngMax = 1;
FordMfgDiagcInhb.ReadIn = {'FordMsg167BusHiSpdPer1'};
FordMfgDiagcInhb.ReadType = 'Rte';


FordMissMsgDiagcInhb = DataDict.IpSignal;
FordMissMsgDiagcInhb.LongName = 'Ford Missing Message Diagnostic Inhibit';
FordMissMsgDiagcInhb.Description = [...
  'When MissMsgDiagcInhb is FALSE, Diagnostic test is performed'];
FordMissMsgDiagcInhb.DocUnits = 'Cnt';
FordMissMsgDiagcInhb.EngDT = dt.u08;
FordMissMsgDiagcInhb.EngInit = 0;
FordMissMsgDiagcInhb.EngMin = 0;
FordMissMsgDiagcInhb.EngMax = 1;
FordMissMsgDiagcInhb.ReadIn = {'FordMsg167BusHiSpdPer1'};
FordMissMsgDiagcInhb.ReadType = 'Rte';


FordTqSteerCmpEnad = DataDict.IpSignal;
FordTqSteerCmpEnad.LongName = 'Torque Steer Compensation Enabled';
FordTqSteerCmpEnad.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
FordTqSteerCmpEnad.DocUnits = 'Cnt';
FordTqSteerCmpEnad.EngDT = dt.lgc;
FordTqSteerCmpEnad.EngInit = 0;
FordTqSteerCmpEnad.EngMin = 0;
FordTqSteerCmpEnad.EngMax = 1;
FordTqSteerCmpEnad.ReadIn = {'FordMsg167BusHiSpdPer1'};
FordTqSteerCmpEnad.ReadType = 'Rte';


FordTrlrBackUpAssiEnad = DataDict.IpSignal;
FordTrlrBackUpAssiEnad.LongName = 'Ford Trailer Back Up Assist Enabled';
FordTrlrBackUpAssiEnad.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
FordTrlrBackUpAssiEnad.DocUnits = 'Cnt';
FordTrlrBackUpAssiEnad.EngDT = dt.lgc;
FordTrlrBackUpAssiEnad.EngInit = 0;
FordTrlrBackUpAssiEnad.EngMin = 0;
FordTrlrBackUpAssiEnad.EngMax = 1;
FordTrlrBackUpAssiEnad.ReadIn = {'FordMsg167BusHiSpdPer1'};
FordTrlrBackUpAssiEnad.ReadType = 'Rte';


Ford_ElPw_D_Stat1 = DataDict.IpSignal;
Ford_ElPw_D_Stat1.LongName = 'Ford Electrical Power Status';
Ford_ElPw_D_Stat1.Description = 'Ford Electrical Power Status';
Ford_ElPw_D_Stat1.DocUnits = 'Cnt';
Ford_ElPw_D_Stat1.EngDT = enum.Ford_ElPw_D_Stat;
Ford_ElPw_D_Stat1.EngInit = Ford_ElPw_D_Stat.Cx0_Not_Supported;
Ford_ElPw_D_Stat1.EngMin = Ford_ElPw_D_Stat.Cx0_Not_Supported;
Ford_ElPw_D_Stat1.EngMax = Ford_ElPw_D_Stat.Cx7_NotUsed_3;
Ford_ElPw_D_Stat1.ReadIn = {'FordMsg167BusHiSpdPer1'};
Ford_ElPw_D_Stat1.ReadType = 'Rte';


Ford_ElPw_D_StatStrtStop1 = DataDict.IpSignal;
Ford_ElPw_D_StatStrtStop1.LongName = 'Ford Electrical PowerPack Start Stop';
Ford_ElPw_D_StatStrtStop1.Description = [...
  'Ford Electrical PowerPack Start Stop'];
Ford_ElPw_D_StatStrtStop1.DocUnits = 'Cnt';
Ford_ElPw_D_StatStrtStop1.EngDT = enum.Ford_ElPw_D_StatStrtStop;
Ford_ElPw_D_StatStrtStop1.EngInit = Ford_ElPw_D_StatStrtStop.Cx0_Not_Supported;
Ford_ElPw_D_StatStrtStop1.EngMin = Ford_ElPw_D_StatStrtStop.Cx0_Not_Supported;
Ford_ElPw_D_StatStrtStop1.EngMax = Ford_ElPw_D_StatStrtStop.CxF_NotUsed6;
Ford_ElPw_D_StatStrtStop1.ReadIn = {'FordMsg167BusHiSpdPer1'};
Ford_ElPw_D_StatStrtStop1.ReadType = 'Rte';


Ford_PrplWhlTot2_Tq_Actl = DataDict.IpSignal;
Ford_PrplWhlTot2_Tq_Actl.LongName = 'Brake Oscillation Reduction Enabled';
Ford_PrplWhlTot2_Tq_Actl.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required'];
Ford_PrplWhlTot2_Tq_Actl.DocUnits = 'Cnt';
Ford_PrplWhlTot2_Tq_Actl.EngDT = dt.u16;
Ford_PrplWhlTot2_Tq_Actl.EngInit = 0;
Ford_PrplWhlTot2_Tq_Actl.EngMin = 0;
Ford_PrplWhlTot2_Tq_Actl.EngMax = 65535;
Ford_PrplWhlTot2_Tq_Actl.ReadIn = {'FordMsg167BusHiSpdPer1'};
Ford_PrplWhlTot2_Tq_Actl.ReadType = 'Rte';


Ford_PwPckTq_D_Stat1 = DataDict.IpSignal;
Ford_PwPckTq_D_Stat1.LongName = 'Ford PowerPack Torque Status';
Ford_PwPckTq_D_Stat1.Description = 'Ford PowerPack Torque Status';
Ford_PwPckTq_D_Stat1.DocUnits = 'Cnt';
Ford_PwPckTq_D_Stat1.EngDT = enum.Ford_PwPckTq_D_Stat;
Ford_PwPckTq_D_Stat1.EngInit = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
Ford_PwPckTq_D_Stat1.EngMin = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
Ford_PwPckTq_D_Stat1.EngMax = Ford_PwPckTq_D_Stat.Cx3_PwPckOn_TqAvailable;
Ford_PwPckTq_D_Stat1.ReadIn = {'FordMsg167BusHiSpdPer1'};
Ford_PwPckTq_D_Stat1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehElecPwrStrtStopSts = DataDict.OpSignal;
FordVehElecPwrStrtStopSts.LongName = 'Ford Vehicle Electrical Power Start Stop Status';
FordVehElecPwrStrtStopSts.Description = [...
  'Processed value of Electrical Power Start Stop Status to be used by EP' ...
  'S'];
FordVehElecPwrStrtStopSts.DocUnits = 'Cnt';
FordVehElecPwrStrtStopSts.SwcShoName = 'FordMsg167BusHiSpd';
FordVehElecPwrStrtStopSts.EngDT = enum.Ford_ElPw_D_StatStrtStop;
FordVehElecPwrStrtStopSts.EngInit = Ford_ElPw_D_StatStrtStop.Cx0_Not_Supported;
FordVehElecPwrStrtStopSts.EngMin = Ford_ElPw_D_StatStrtStop.Cx0_Not_Supported;
FordVehElecPwrStrtStopSts.EngMax = Ford_ElPw_D_StatStrtStop.CxF_NotUsed6;
FordVehElecPwrStrtStopSts.TestTolerance = 0;
FordVehElecPwrStrtStopSts.WrittenIn = {'FordMsg167BusHiSpdPer1'};
FordVehElecPwrStrtStopSts.WriteType = 'Rte';


FordVehElecPwrSts = DataDict.OpSignal;
FordVehElecPwrSts.LongName = 'Ford Vehicle Electrical Power Status';
FordVehElecPwrSts.Description = [...
  'Processed value of Electrical Power Status to be used by EPS'];
FordVehElecPwrSts.DocUnits = 'Cnt';
FordVehElecPwrSts.SwcShoName = 'FordMsg167BusHiSpd';
FordVehElecPwrSts.EngDT = enum.Ford_ElPw_D_Stat;
FordVehElecPwrSts.EngInit = Ford_ElPw_D_Stat.Cx0_Not_Supported;
FordVehElecPwrSts.EngMin = Ford_ElPw_D_Stat.Cx0_Not_Supported;
FordVehElecPwrSts.EngMax = Ford_ElPw_D_Stat.Cx7_NotUsed_3;
FordVehElecPwrSts.TestTolerance = 0;
FordVehElecPwrSts.WrittenIn = {'FordMsg167BusHiSpdPer1'};
FordVehElecPwrSts.WriteType = 'Rte';


FordVehPrpnWhlTq = DataDict.OpSignal;
FordVehPrpnWhlTq.LongName = 'Ford Vehicle Propulsion Wheel Torque';
FordVehPrpnWhlTq.Description = [...
  'Processed value of Vehicle Propulsion Wheel Torque to be used by EPS'];
FordVehPrpnWhlTq.DocUnits = 'NwtMtr';
FordVehPrpnWhlTq.SwcShoName = 'FordMsg167BusHiSpd';
FordVehPrpnWhlTq.EngDT = dt.float32;
FordVehPrpnWhlTq.EngInit = -131072;
FordVehPrpnWhlTq.EngMin = -131072;
FordVehPrpnWhlTq.EngMax = 131068;
FordVehPrpnWhlTq.TestTolerance = 2;
FordVehPrpnWhlTq.WrittenIn = {'FordMsg167BusHiSpdPer1'};
FordVehPrpnWhlTq.WriteType = 'Rte';


FordVehPrpnWhlTqRaw = DataDict.OpSignal;
FordVehPrpnWhlTqRaw.LongName = 'Ford Vehicle Propulsion Wheel Torque Raw';
FordVehPrpnWhlTqRaw.Description = [...
  'This signal provides the raw values of Propulsion Wheel Torque'];
FordVehPrpnWhlTqRaw.DocUnits = 'Cnt';
FordVehPrpnWhlTqRaw.SwcShoName = 'FordMsg167BusHiSpd';
FordVehPrpnWhlTqRaw.EngDT = dt.u16;
FordVehPrpnWhlTqRaw.EngInit = 0;
FordVehPrpnWhlTqRaw.EngMin = 0;
FordVehPrpnWhlTqRaw.EngMax = 65535;
FordVehPrpnWhlTqRaw.TestTolerance = 0;
FordVehPrpnWhlTqRaw.WrittenIn = {'FordMsg167BusHiSpdPer1'};
FordVehPrpnWhlTqRaw.WriteType = 'Rte';


FordVehPrpnWhlTqVld = DataDict.OpSignal;
FordVehPrpnWhlTqVld.LongName = 'Ford Vehicle Propulsion Wheel Torque Valid';
FordVehPrpnWhlTqVld.Description = [...
  'This output tells if the value for Ford Vehicle Propulsion Wheel Torqu' ...
  'e is valid or not'];
FordVehPrpnWhlTqVld.DocUnits = 'Cnt';
FordVehPrpnWhlTqVld.SwcShoName = 'FordMsg167BusHiSpd';
FordVehPrpnWhlTqVld.EngDT = dt.lgc;
FordVehPrpnWhlTqVld.EngInit = 0;
FordVehPrpnWhlTqVld.EngMin = 0;
FordVehPrpnWhlTqVld.EngMax = 1;
FordVehPrpnWhlTqVld.TestTolerance = 0;
FordVehPrpnWhlTqVld.WrittenIn = {'FordMsg167BusHiSpdPer1'};
FordVehPrpnWhlTqVld.WriteType = 'Rte';


FordVehPwrpkTqSts = DataDict.OpSignal;
FordVehPwrpkTqSts.LongName = 'Ford Vehicle Powerpack Torque Status';
FordVehPwrpkTqSts.Description = [...
  'Processed value of Powerpack Torque Status to be used by EPS'];
FordVehPwrpkTqSts.DocUnits = 'Cnt';
FordVehPwrpkTqSts.SwcShoName = 'FordMsg167BusHiSpd';
FordVehPwrpkTqSts.EngDT = enum.Ford_PwPckTq_D_Stat;
FordVehPwrpkTqSts.EngInit = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
FordVehPwrpkTqSts.EngMin = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
FordVehPwrpkTqSts.EngMax = Ford_PwPckTq_D_Stat.Cx3_PwPckOn_TqAvailable;
FordVehPwrpkTqSts.TestTolerance = 0;
FordVehPwrpkTqSts.WrittenIn = {'FordMsg167BusHiSpdPer1'};
FordVehPwrpkTqSts.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg167BusHiSpdMissMsgFaildTiThd = DataDict.Calibration;
FordMsg167BusHiSpdMissMsgFaildTiThd.LongName = 'Ford Message 167 Bus High Speed Missing Message Failed Timer Threshold';
FordMsg167BusHiSpdMissMsgFaildTiThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg167BusHiSpdMissMsgFaildTiThd.DocUnits = 'MilliSec';
FordMsg167BusHiSpdMissMsgFaildTiThd.EngDT = dt.u16;
FordMsg167BusHiSpdMissMsgFaildTiThd.EngVal = 100;
FordMsg167BusHiSpdMissMsgFaildTiThd.EngMin = 0;
FordMsg167BusHiSpdMissMsgFaildTiThd.EngMax = 6000;
FordMsg167BusHiSpdMissMsgFaildTiThd.Cardinality = 'Cmn';
FordMsg167BusHiSpdMissMsgFaildTiThd.CustomerVisible = false;
FordMsg167BusHiSpdMissMsgFaildTiThd.Online = false;
FordMsg167BusHiSpdMissMsgFaildTiThd.Impact = 'L';
FordMsg167BusHiSpdMissMsgFaildTiThd.TuningOwner = 'EPDT';
FordMsg167BusHiSpdMissMsgFaildTiThd.GraphLink = {''};
FordMsg167BusHiSpdMissMsgFaildTiThd.Monotony = 'None';
FordMsg167BusHiSpdMissMsgFaildTiThd.MaxGrad = 0;
FordMsg167BusHiSpdMissMsgFaildTiThd.PortName = 'FordMsg167BusHiSpdMissMsgFaildTiThd';


FordMsg167BusHiSpdMissMsgPassdTiThd = DataDict.Calibration;
FordMsg167BusHiSpdMissMsgPassdTiThd.LongName = 'Ford Message 167 Bus High Speed Missing Message Passed Timer Threshold';
FordMsg167BusHiSpdMissMsgPassdTiThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg167BusHiSpdMissMsgPassdTiThd.DocUnits = 'MilliSec';
FordMsg167BusHiSpdMissMsgPassdTiThd.EngDT = dt.u16;
FordMsg167BusHiSpdMissMsgPassdTiThd.EngVal = 0;
FordMsg167BusHiSpdMissMsgPassdTiThd.EngMin = 0;
FordMsg167BusHiSpdMissMsgPassdTiThd.EngMax = 6000;
FordMsg167BusHiSpdMissMsgPassdTiThd.Cardinality = 'Cmn';
FordMsg167BusHiSpdMissMsgPassdTiThd.CustomerVisible = false;
FordMsg167BusHiSpdMissMsgPassdTiThd.Online = false;
FordMsg167BusHiSpdMissMsgPassdTiThd.Impact = 'L';
FordMsg167BusHiSpdMissMsgPassdTiThd.TuningOwner = 'EPDT';
FordMsg167BusHiSpdMissMsgPassdTiThd.GraphLink = {''};
FordMsg167BusHiSpdMissMsgPassdTiThd.Monotony = 'None';
FordMsg167BusHiSpdMissMsgPassdTiThd.MaxGrad = 0;
FordMsg167BusHiSpdMissMsgPassdTiThd.PortName = 'FordMsg167BusHiSpdMissMsgPassdTiThd';


FordMsg167BusHiSpdPrpnWhlTqFaildTiThd = DataDict.Calibration;
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.LongName = 'Ford Message 167 Bus High Speed Propulsion Wheel Torque Failed Timer Threshold';
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.Description = [...
  'Threshold to set the output Ford Vehicle Propulsion Wheel Torque Valid' ...
  ' to False'];
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.DocUnits = 'MilliSec';
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.EngDT = dt.u16;
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.EngVal = 5000;
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.EngMin = 0;
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.EngMax = 6000;
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.Cardinality = 'Cmn';
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.CustomerVisible = false;
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.Online = false;
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.Impact = 'H';
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.TuningOwner = 'EPDT';
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.GraphLink = {''};
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.Monotony = 'None';
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.MaxGrad = 0;
FordMsg167BusHiSpdPrpnWhlTqFaildTiThd.PortName = 'FordMsg167BusHiSpdPrpnWhlTqFaildTiThd';


FordMsg167BusHiSpdPrpnWhlTqMissTiThd = DataDict.Calibration;
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.LongName = 'Ford Message 167 Bus High Speed Propulsion Wheel Torque Miss Timer Threshold';
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.Description = [...
  'Threshold to set the output Ford Vehicle Propulsion Wheel Torque Valid' ...
  ' to False'];
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.DocUnits = 'MilliSec';
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.EngDT = dt.u16;
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.EngVal = 0;
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.EngMin = 0;
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.EngMax = 6000;
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.Cardinality = 'Cmn';
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.CustomerVisible = false;
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.Online = false;
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.Impact = 'H';
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.TuningOwner = 'EPDT';
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.GraphLink = {''};
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.Monotony = 'None';
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.MaxGrad = 0;
FordMsg167BusHiSpdPrpnWhlTqMissTiThd.PortName = 'FordMsg167BusHiSpdPrpnWhlTqMissTiThd';


FordMsg167BusHiSpdPrpnWhlTqPassdTiThd = DataDict.Calibration;
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.LongName = 'Ford Message 167 Bus High Speed Propulsion Wheel Torque Passed Timer Threshold';
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.Description = [...
  'Threshold to set the output Ford Vehicle Propulsion Wheel Torque Valid' ...
  ' to True'];
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.DocUnits = 'MilliSec';
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.EngDT = dt.u16;
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.EngVal = 5000;
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.EngMin = 0;
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.EngMax = 6000;
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.Cardinality = 'Cmn';
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.CustomerVisible = false;
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.Online = false;
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.Impact = 'H';
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.TuningOwner = 'EPDT';
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.GraphLink = {''};
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.Monotony = 'None';
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.MaxGrad = 0;
FordMsg167BusHiSpdPrpnWhlTqPassdTiThd.PortName = 'FordMsg167BusHiSpdPrpnWhlTqPassdTiThd';


FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd = DataDict.Calibration;
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.LongName = 'Ford Message 167 Bus High Speed Propulsion Wheel Torque Signal Invalid Failed Timer Threshold';
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.DocUnits = 'MilliSec';
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.EngDT = dt.u16;
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.EngVal = 0;
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.EngMin = 0;
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.EngMax = 6000;
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.Cardinality = 'Cmn';
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.CustomerVisible = false;
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.Online = false;
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.Impact = 'L';
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.TuningOwner = 'EPDT';
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.GraphLink = {''};
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.Monotony = 'None';
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.MaxGrad = 0;
FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd.PortName = 'FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd';


FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd = DataDict.Calibration;
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.LongName = 'Ford Message 167 Bus High Speed Propulsion Wheel Torque Signal Invalid Passed Timer Threshold';
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.Description = [...
  'Threshold to Reset the Invalid message NTC'];
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.DocUnits = 'MilliSec';
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.EngDT = dt.u16;
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.EngVal = 0;
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.EngMin = 0;
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.EngMax = 6000;
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.Cardinality = 'Cmn';
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.CustomerVisible = false;
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.Online = false;
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.Impact = 'L';
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.TuningOwner = 'EPDT';
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.GraphLink = {''};
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.Monotony = 'None';
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.MaxGrad = 0;
FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd.PortName = 'FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd';



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


FordVehElecPwrStrtStopStsPrev = DataDict.PIM;
FordVehElecPwrStrtStopStsPrev.LongName = 'Ford Vehicle Electrical Power Start Stop Status Previous';
FordVehElecPwrStrtStopStsPrev.Description = [...
  'Previous value of Ford Vehicle Electrical Power Start Stop Status'];
FordVehElecPwrStrtStopStsPrev.DocUnits = 'Cnt';
FordVehElecPwrStrtStopStsPrev.EngDT = enum.Ford_ElPw_D_StatStrtStop;
FordVehElecPwrStrtStopStsPrev.EngMin = Ford_ElPw_D_StatStrtStop.Cx0_Not_Supported;
FordVehElecPwrStrtStopStsPrev.EngMax = Ford_ElPw_D_StatStrtStop.CxF_NotUsed6;
FordVehElecPwrStrtStopStsPrev.InitRowCol = [1  1];


FordVehElecPwrStsPrev = DataDict.PIM;
FordVehElecPwrStsPrev.LongName = 'Ford Vehicle Electrical Power Status Previous';
FordVehElecPwrStsPrev.Description = [...
  'Previous value of Ford Vehicle Electrical Power Status'];
FordVehElecPwrStsPrev.DocUnits = 'Cnt';
FordVehElecPwrStsPrev.EngDT = enum.Ford_ElPw_D_Stat;
FordVehElecPwrStsPrev.EngMin = Ford_ElPw_D_Stat.Cx0_Not_Supported;
FordVehElecPwrStsPrev.EngMax = Ford_ElPw_D_Stat.Cx7_NotUsed_3;
FordVehElecPwrStsPrev.InitRowCol = [1  1];


FordVehMsg167Miss = DataDict.PIM;
FordVehMsg167Miss.LongName = 'Ford Vehicle Propulsion Wheel Torque Valid Previous';
FordVehMsg167Miss.Description = [...
  'Previous value of Ford Vehicle Propulsion Wheel Torque Valid'];
FordVehMsg167Miss.DocUnits = 'Cnt';
FordVehMsg167Miss.EngDT = dt.lgc;
FordVehMsg167Miss.EngMin = 0;
FordVehMsg167Miss.EngMax = 1;
FordVehMsg167Miss.InitRowCol = [1  1];


FordVehMsg167Rxd = DataDict.PIM;
FordVehMsg167Rxd.LongName = 'Ford Vehicle Propulsion Wheel Torque Valid Previous';
FordVehMsg167Rxd.Description = [...
  'Previous value of Ford Vehicle Propulsion Wheel Torque Valid'];
FordVehMsg167Rxd.DocUnits = 'Cnt';
FordVehMsg167Rxd.EngDT = dt.lgc;
FordVehMsg167Rxd.EngMin = 0;
FordVehMsg167Rxd.EngMax = 1;
FordVehMsg167Rxd.InitRowCol = [1  1];


FordVehPrpnWhlTqPrev = DataDict.PIM;
FordVehPrpnWhlTqPrev.LongName = 'Ford Vehicle Propulsion Wheel Torque Previous';
FordVehPrpnWhlTqPrev.Description = [...
  'Previous value of Ford Vehicle Propulsion Wheel Torque'];
FordVehPrpnWhlTqPrev.DocUnits = 'NwtMtr';
FordVehPrpnWhlTqPrev.EngDT = dt.float32;
FordVehPrpnWhlTqPrev.EngMin = -131072;
FordVehPrpnWhlTqPrev.EngMax = 131068;
FordVehPrpnWhlTqPrev.InitRowCol = [1  1];


FordVehPrpnWhlTqRawPrev = DataDict.PIM;
FordVehPrpnWhlTqRawPrev.LongName = 'Ford Vehicle Propulsion Wheel Torque Raw Previous';
FordVehPrpnWhlTqRawPrev.Description = [...
  'Previous value of Ford Vehicle Propulsion Wheel Torque Raw'];
FordVehPrpnWhlTqRawPrev.DocUnits = 'Cnt';
FordVehPrpnWhlTqRawPrev.EngDT = dt.u16;
FordVehPrpnWhlTqRawPrev.EngMin = 0;
FordVehPrpnWhlTqRawPrev.EngMax = 65535;
FordVehPrpnWhlTqRawPrev.InitRowCol = [1  1];


FordVehPrpnWhlTqSigInvldFaildRefTi = DataDict.PIM;
FordVehPrpnWhlTqSigInvldFaildRefTi.LongName = 'Ford Vehicle Propulsion Wheel Torque Signal Invalid Failed Reference Time';
FordVehPrpnWhlTqSigInvldFaildRefTi.Description = [...
  'Timer for Invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehPrpnWhlTqSigInvldFaildRefTi.DocUnits = 'Cnt';
FordVehPrpnWhlTqSigInvldFaildRefTi.EngDT = dt.u32;
FordVehPrpnWhlTqSigInvldFaildRefTi.EngMin = 0;
FordVehPrpnWhlTqSigInvldFaildRefTi.EngMax = 4294967295;
FordVehPrpnWhlTqSigInvldFaildRefTi.InitRowCol = [1  1];


FordVehPrpnWhlTqSigInvldPassdRefTi = DataDict.PIM;
FordVehPrpnWhlTqSigInvldPassdRefTi.LongName = 'Ford Vehicle Propulsion Wheel Torque Signal Invalid Passed Reference Time';
FordVehPrpnWhlTqSigInvldPassdRefTi.Description = [...
  'Timer for Invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehPrpnWhlTqSigInvldPassdRefTi.DocUnits = 'Cnt';
FordVehPrpnWhlTqSigInvldPassdRefTi.EngDT = dt.u32;
FordVehPrpnWhlTqSigInvldPassdRefTi.EngMin = 0;
FordVehPrpnWhlTqSigInvldPassdRefTi.EngMax = 4294967295;
FordVehPrpnWhlTqSigInvldPassdRefTi.InitRowCol = [1  1];


FordVehPrpnWhlTqVldPrev = DataDict.PIM;
FordVehPrpnWhlTqVldPrev.LongName = 'Ford Vehicle Propulsion Wheel Torque Valid Previous';
FordVehPrpnWhlTqVldPrev.Description = [...
  'Previous value of Ford Vehicle Propulsion Wheel Torque Valid'];
FordVehPrpnWhlTqVldPrev.DocUnits = 'Cnt';
FordVehPrpnWhlTqVldPrev.EngDT = dt.lgc;
FordVehPrpnWhlTqVldPrev.EngMin = 0;
FordVehPrpnWhlTqVldPrev.EngMax = 1;
FordVehPrpnWhlTqVldPrev.InitRowCol = [1  1];


FordVehPwrpkTqStsPrev = DataDict.PIM;
FordVehPwrpkTqStsPrev.LongName = 'Ford Vehicle Powerpack Torque Status Previous';
FordVehPwrpkTqStsPrev.Description = [...
  'Previous value of Ford Vehicle Powerpack Torque Status'];
FordVehPwrpkTqStsPrev.DocUnits = 'Cnt';
FordVehPwrpkTqStsPrev.EngDT = enum.Ford_PwPckTq_D_Stat;
FordVehPwrpkTqStsPrev.EngMin = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
FordVehPwrpkTqStsPrev.EngMax = Ford_PwPckTq_D_Stat.Cx3_PwPckOn_TqAvailable;
FordVehPwrpkTqStsPrev.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Referene Time';
MissMsgFaildRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
MissMsgFaildRefTi.DocUnits = 'Cnt';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Referene Time';
MissMsgPassdRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
MissMsgPassdRefTi.DocUnits = 'Cnt';
MissMsgPassdRefTi.EngDT = dt.u32;
MissMsgPassdRefTi.EngMin = 0;
MissMsgPassdRefTi.EngMax = 4294967295;
MissMsgPassdRefTi.InitRowCol = [1  1];


PrpnWhlTqVldFaildRefTi = DataDict.PIM;
PrpnWhlTqVldFaildRefTi.LongName = 'Propulsion Wheel Torque Valid Failed Reference Time';
PrpnWhlTqVldFaildRefTi.Description = [...
  'Timer for Propulsion Wheel Torque Valid Failed Reference Time will inc' ...
  'rement or reset based on the conditions'];
PrpnWhlTqVldFaildRefTi.DocUnits = 'Cnt';
PrpnWhlTqVldFaildRefTi.EngDT = dt.u32;
PrpnWhlTqVldFaildRefTi.EngMin = 0;
PrpnWhlTqVldFaildRefTi.EngMax = 4294967295;
PrpnWhlTqVldFaildRefTi.InitRowCol = [1  1];


PrpnWhlTqVldMissRefTi = DataDict.PIM;
PrpnWhlTqVldMissRefTi.LongName = 'Propulsion Wheel Torque Valid Miss Reference Time';
PrpnWhlTqVldMissRefTi.Description = [...
  'Timer for Propulsion Wheel Torque Valid Miss Reference Time will incre' ...
  'ment or reset based on the conditions'];
PrpnWhlTqVldMissRefTi.DocUnits = 'Cnt';
PrpnWhlTqVldMissRefTi.EngDT = dt.u32;
PrpnWhlTqVldMissRefTi.EngMin = 0;
PrpnWhlTqVldMissRefTi.EngMax = 4294967295;
PrpnWhlTqVldMissRefTi.InitRowCol = [1  1];


PrpnWhlTqVldPassdRefTi = DataDict.PIM;
PrpnWhlTqVldPassdRefTi.LongName = 'Propulsion Wheel Torque Valid Passed Reference Time';
PrpnWhlTqVldPassdRefTi.Description = [...
  'Timer for Propulsion Wheel Torque Valid Passed Reference Time will inc' ...
  'rement or reset based on the conditions'];
PrpnWhlTqVldPassdRefTi.DocUnits = 'Cnt';
PrpnWhlTqVldPassdRefTi.EngDT = dt.u32;
PrpnWhlTqVldPassdRefTi.EngMin = 0;
PrpnWhlTqVldPassdRefTi.EngMax = 4294967295;
PrpnWhlTqVldPassdRefTi.InitRowCol = [1  1];



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


DIAGENA_CNT_U08 = DataDict.Constant;
DIAGENA_CNT_U08.LongName = 'DIAGNOSTICS Enable';
DIAGENA_CNT_U08.Description = [...
  'To check whether the diagnostic is enabled using CAN DTC Inhibit signa' ...
  'FordMissMsgDiagcInhb,MfgDiagcInhb,FordInvldMsgDiagcInhbl'];
DIAGENA_CNT_U08.DocUnits = 'Cnt';
DIAGENA_CNT_U08.EngDT = dt.u08;
DIAGENA_CNT_U08.EngVal = 0;
DIAGENA_CNT_U08.Define = 'Local';


FEATACTV_CNT_U08 = DataDict.Constant;
FEATACTV_CNT_U08.LongName = 'Feature Active';
FEATACTV_CNT_U08.Description = [...
  'To check whether the feature is active so that diagnostics can be perf' ...
  'ormed'];
FEATACTV_CNT_U08.DocUnits = 'Cnt';
FEATACTV_CNT_U08.EngDT = dt.u08;
FEATACTV_CNT_U08.EngVal = 1;
FEATACTV_CNT_U08.Define = 'Local';


FORDVEHPRPNWHLTQFLT_CNT_U16 = DataDict.Constant;
FORDVEHPRPNWHLTQFLT_CNT_U16.LongName = 'Propulsion Wheel Torque Fault';
FORDVEHPRPNWHLTQFLT_CNT_U16.Description = 'Propulsion Wheel Torque Fault';
FORDVEHPRPNWHLTQFLT_CNT_U16.DocUnits = 'Cnt';
FORDVEHPRPNWHLTQFLT_CNT_U16.EngDT = dt.u16;
FORDVEHPRPNWHLTQFLT_CNT_U16.EngVal = 65535;
FORDVEHPRPNWHLTQFLT_CNT_U16.Define = 'Local';


FORDVEHPRPNWHLTQFLT_NWTMTR_F32 = DataDict.Constant;
FORDVEHPRPNWHLTQFLT_NWTMTR_F32.LongName = 'Ford Vehicle Propulsion Wheel Torque Fault';
FORDVEHPRPNWHLTQFLT_NWTMTR_F32.Description = [...
  'Value of Ford Vehicle Propulsion Wheel Torque to set the state Fault'];
FORDVEHPRPNWHLTQFLT_NWTMTR_F32.DocUnits = 'NwtMtr';
FORDVEHPRPNWHLTQFLT_NWTMTR_F32.EngDT = dt.float32;
FORDVEHPRPNWHLTQFLT_NWTMTR_F32.EngVal = 131068;
FORDVEHPRPNWHLTQFLT_NWTMTR_F32.Define = 'Local';


FORDVEHPRPNWHLTQMINVLD_NWTMTR_F32 = DataDict.Constant;
FORDVEHPRPNWHLTQMINVLD_NWTMTR_F32.LongName = 'Ford Vehicle Propulsion Wheel Torque Minimum Valid';
FORDVEHPRPNWHLTQMINVLD_NWTMTR_F32.Description = [...
  'Minimum valid value for Ford Vehicle Propulsion Wheel Torque'];
FORDVEHPRPNWHLTQMINVLD_NWTMTR_F32.DocUnits = 'NwtMtr';
FORDVEHPRPNWHLTQMINVLD_NWTMTR_F32.EngDT = dt.float32;
FORDVEHPRPNWHLTQMINVLD_NWTMTR_F32.EngVal = -131072;
FORDVEHPRPNWHLTQMINVLD_NWTMTR_F32.Define = 'Local';


FORDVEHPRPNWHLTQNODATA_CNT_U16 = DataDict.Constant;
FORDVEHPRPNWHLTQNODATA_CNT_U16.LongName = 'Propulsion Wheel Torque No Data';
FORDVEHPRPNWHLTQNODATA_CNT_U16.Description = 'Propulsion Wheel Torque No Data';
FORDVEHPRPNWHLTQNODATA_CNT_U16.DocUnits = 'Cnt';
FORDVEHPRPNWHLTQNODATA_CNT_U16.EngDT = dt.u16;
FORDVEHPRPNWHLTQNODATA_CNT_U16.EngVal = 65534;
FORDVEHPRPNWHLTQNODATA_CNT_U16.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


PRPNWHLTQMAX_CNT_U16 = DataDict.Constant;
PRPNWHLTQMAX_CNT_U16.LongName = 'Propulsion Wheel Torque Maximum';
PRPNWHLTQMAX_CNT_U16.Description = [...
  'Maximum value of Propulsion Wheel Torque '];
PRPNWHLTQMAX_CNT_U16.DocUnits = 'Cnt';
PRPNWHLTQMAX_CNT_U16.EngDT = dt.u16;
PRPNWHLTQMAX_CNT_U16.EngVal = 65535;
PRPNWHLTQMAX_CNT_U16.Define = 'Local';


PRPNWHLTQMIN_CNT_U16 = DataDict.Constant;
PRPNWHLTQMIN_CNT_U16.LongName = 'Propulsion Wheel Torque Minimum';
PRPNWHLTQMIN_CNT_U16.Description = [...
  'Minimum value of Propulsion Wheel Torque '];
PRPNWHLTQMIN_CNT_U16.DocUnits = 'Cnt';
PRPNWHLTQMIN_CNT_U16.EngDT = dt.u16;
PRPNWHLTQMIN_CNT_U16.EngVal = 0;
PRPNWHLTQMIN_CNT_U16.Define = 'Local';


PRPNWHLTQOFFSET_NWTMTR_F32 = DataDict.Constant;
PRPNWHLTQOFFSET_NWTMTR_F32.LongName = 'Propulsion Wheel Torque Offset';
PRPNWHLTQOFFSET_NWTMTR_F32.Description = [...
  'Offset for Ford Vehicle Propulsion Wheel Torque'];
PRPNWHLTQOFFSET_NWTMTR_F32.DocUnits = 'NwtMtr';
PRPNWHLTQOFFSET_NWTMTR_F32.EngDT = dt.float32;
PRPNWHLTQOFFSET_NWTMTR_F32.EngVal = 131072;
PRPNWHLTQOFFSET_NWTMTR_F32.Define = 'Local';


PRPNWHLTQSCA_NWTMTRPERCNT_F32 = DataDict.Constant;
PRPNWHLTQSCA_NWTMTRPERCNT_F32.LongName = 'Propulsion Wheel Torque Scale';
PRPNWHLTQSCA_NWTMTRPERCNT_F32.Description = [...
  'Scaling factor for Ford Vehicle Propulsion Wheel Torque'];
PRPNWHLTQSCA_NWTMTRPERCNT_F32.DocUnits = 'NwtMtrPerCnt';
PRPNWHLTQSCA_NWTMTRPERCNT_F32.EngDT = dt.float32;
PRPNWHLTQSCA_NWTMTRPERCNT_F32.EngVal = 4;
PRPNWHLTQSCA_NWTMTRPERCNT_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg167MissMsg = DataDict.NTC;
FordMsg167MissMsg.NtcNr = NtcNr1.NTCNR_0X11D;
FordMsg167MissMsg.NtcTyp = 'None';
FordMsg167MissMsg.LongName = 'Ford Message 167 Missing Message';
FordMsg167MissMsg.Description = 'Ford Message 167 Missing Message Diagnostic';
FordMsg167MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg167MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg167MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg167MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg167MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg167MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg167MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg167MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg167MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg167MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehPrpnWhlTqSigInvld = DataDict.NTC;
FordVehPrpnWhlTqSigInvld.NtcNr = NtcNr1.NTCNR_0X11E;
FordVehPrpnWhlTqSigInvld.NtcTyp = 'None';
FordVehPrpnWhlTqSigInvld.LongName = 'Ford Vehicle Propulsion Wheel Torque Signal Invalid';
FordVehPrpnWhlTqSigInvld.Description = 'Ford Message 167 Invalid Message Diagnostic';
FordVehPrpnWhlTqSigInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehPrpnWhlTqSigInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehPrpnWhlTqSigInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehPrpnWhlTqSigInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehPrpnWhlTqSigInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehPrpnWhlTqSigInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehPrpnWhlTqSigInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehPrpnWhlTqSigInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehPrpnWhlTqSigInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehPrpnWhlTqSigInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
