%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 20-Oct-2017 14:23:47       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF062B = DataDict.FDD;
SF062B.Version = '1.0.X';
SF062B.LongName = 'Dual Controller Output Manager';
SF062B.ShoName  = 'DualCtrlrOutpMgr';
SF062B.DesignASIL = 'D';
SF062B.Description = [...
  'This function provides the ability to scale the outputof the individua' ...
  'l ECUs in a dual ECU structure. This functionshall ensure fail operati' ...
  'onal functionality in an event of acontroller failure.It shall also pr' ...
  'ovide functionality to power limit,motor control and temperature estim' ...
  'ation in the event of a failure.The function handles voltage recoverab' ...
  'le fault and prevents scaling inthat scenario. The function handles on' ...
  'ly voltage fault and Trim offset recovrable fault response is changed ' ...
  'to igntion latch. '];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DualCtrlrOutpMgrInit1 = DataDict.Runnable;
DualCtrlrOutpMgrInit1.Context = 'Rte';
DualCtrlrOutpMgrInit1.TimeStep = 0;
DualCtrlrOutpMgrInit1.Description = 'Initialization';

DualCtrlrOutpMgrPer1 = DataDict.Runnable;
DualCtrlrOutpMgrPer1.Context = 'Rte';
DualCtrlrOutpMgrPer1.TimeStep = 0.002;
DualCtrlrOutpMgrPer1.Description = [...
  'Periodic Runnable execute at every 0.002 sec'];

DualCtrlrOutpMgrPer2 = DataDict.Runnable;
DualCtrlrOutpMgrPer2.Context = 'Rte';
DualCtrlrOutpMgrPer2.TimeStep = 0.01;
DualCtrlrOutpMgrPer2.Description = [...
  'Periodic Runnable execute at every 0.01 sec'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'DualCtrlrOutpMgrInit1','DualCtrlrOutpMgrPer1'};
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


GetSigImcData_logl = DataDict.Client;
GetSigImcData_logl.CallLocation = {'DualCtrlrOutpMgrPer2'};
GetSigImcData_logl.Description = [...
  'Get data from Imc Arbitration for a signal of type boolean'];
GetSigImcData_logl.Return = DataDict.CSReturn;
GetSigImcData_logl.Return.Type = 'Standard';
GetSigImcData_logl.Return.Min = 0;
GetSigImcData_logl.Return.Max = 1;
GetSigImcData_logl.Return.TestTolerance = 0;
GetSigImcData_logl.Return.Description = [...
  'Signal returned from the Imc Arbitration based on Signal Id'];
GetSigImcData_logl.Arguments(1) = DataDict.CSArguments;
GetSigImcData_logl.Arguments(1).Name = 'SigId';
GetSigImcData_logl.Arguments(1).EngDT = dt.u16;
GetSigImcData_logl.Arguments(1).EngMin = 0;
GetSigImcData_logl.Arguments(1).EngMax = 65535;
GetSigImcData_logl.Arguments(1).Units = 'Cnt';
GetSigImcData_logl.Arguments(1).Direction = 'In';
GetSigImcData_logl.Arguments(1).InitRowCol = [1  1];
GetSigImcData_logl.Arguments(1).Description = [...
  'Defined by global constant to read the particular signal from Imc Arbi' ...
  'tration'];
GetSigImcData_logl.Arguments(2) = DataDict.CSArguments;
GetSigImcData_logl.Arguments(2).Name = 'Data';
GetSigImcData_logl.Arguments(2).EngDT = dt.lgc;
GetSigImcData_logl.Arguments(2).EngMin = 0;
GetSigImcData_logl.Arguments(2).EngMax = 1;
GetSigImcData_logl.Arguments(2).TestTolerance = 0;
GetSigImcData_logl.Arguments(2).Units = 'Cnt';
GetSigImcData_logl.Arguments(2).Direction = 'Out';
GetSigImcData_logl.Arguments(2).InitRowCol = [1  1];
GetSigImcData_logl.Arguments(2).Description = [...
  'Pointer to the location where Imc Arbitration need to update the value' ...
  ' of the signal mapped to the signal identifier'];
GetSigImcData_logl.Arguments(3) = DataDict.CSArguments;
GetSigImcData_logl.Arguments(3).Name = 'Sts';
GetSigImcData_logl.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_logl.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_logl.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_logl.Arguments(3).TestTolerance = 1;
GetSigImcData_logl.Arguments(3).Units = 'Cnt';
GetSigImcData_logl.Arguments(3).Direction = 'Out';
GetSigImcData_logl.Arguments(3).InitRowCol = [1  1];
GetSigImcData_logl.Arguments(3).Description = [...
  'Pointer to the location where Imc Arbitration needs to update particul' ...
  'ar signal reception status'];


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'DualCtrlrOutpMgrPer1'};
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
ImcSysSt = DataDict.IpSignal;
ImcSysSt.LongName = 'IMC System State';
ImcSysSt.Description = 'IMC System state variable';
ImcSysSt.DocUnits = 'Cnt';
ImcSysSt.EngDT = enum.SysSt1;
ImcSysSt.EngInit = SysSt1.SYSST_WRMININ;
ImcSysSt.EngMin = SysSt1.SYSST_DI;
ImcSysSt.EngMax = SysSt1.SYSST_WRMININ;
ImcSysSt.ReadIn = {'DualCtrlrOutpMgrPer1'};
ImcSysSt.ReadType = 'Rte';


ImcSysStVld = DataDict.IpSignal;
ImcSysStVld.LongName = 'IMC System State Valid';
ImcSysStVld.Description = [...
  'Validity of IMC System State variable'];
ImcSysStVld.DocUnits = 'Cnt';
ImcSysStVld.EngDT = enum.ImcArbnRxSts1;
ImcSysStVld.EngInit = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
ImcSysStVld.EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
ImcSysStVld.EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
ImcSysStVld.ReadIn = {'DualCtrlrOutpMgrPer1'};
ImcSysStVld.ReadType = 'Rte';


MotAndThermProtnLoaMod = DataDict.IpSignal;
MotAndThermProtnLoaMod.LongName = 'Motor And Thermal Protection Loss of Assist Mode';
MotAndThermProtnLoaMod.Description = [...
  'Motor And Thermal Protection Loss of Assist Mode signal is being gener' ...
  'ated by Loss of Assist Manager function'];
MotAndThermProtnLoaMod.DocUnits = 'Cnt';
MotAndThermProtnLoaMod.EngDT = dt.u08;
MotAndThermProtnLoaMod.EngInit = 0;
MotAndThermProtnLoaMod.EngMin = 0;
MotAndThermProtnLoaMod.EngMax = 7;
MotAndThermProtnLoaMod.ReadIn = {'DualCtrlrOutpMgrPer1'};
MotAndThermProtnLoaMod.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'System state variable';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'DualCtrlrOutpMgrPer1'};
SysSt.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed signal';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'DualCtrlrOutpMgrPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DualEcuFltMtgtnEna = DataDict.OpSignal;
DualEcuFltMtgtnEna.LongName = 'Dual ECU Fault Mitigation Enable';
DualEcuFltMtgtnEna.Description = [...
  'Intermicro system is down - Boolean output to be used in different fun' ...
  'ctions'];
DualEcuFltMtgtnEna.DocUnits = 'Cnt';
DualEcuFltMtgtnEna.SwcShoName = 'DualCtrlrOutpMgr';
DualEcuFltMtgtnEna.EngDT = dt.lgc;
DualEcuFltMtgtnEna.EngInit = 0;
DualEcuFltMtgtnEna.EngMin = 0;
DualEcuFltMtgtnEna.EngMax = 1;
DualEcuFltMtgtnEna.TestTolerance = 0;
DualEcuFltMtgtnEna.WrittenIn = {'DualCtrlrOutpMgrPer1'};
DualEcuFltMtgtnEna.WriteType = 'Rte';


DualEcuFltMtgtnSca = DataDict.OpSignal;
DualEcuFltMtgtnSca.LongName = 'Dual ECU Fault Mitigation Scale';
DualEcuFltMtgtnSca.Description = [...
  'Scale output provided to Power limit function'];
DualEcuFltMtgtnSca.DocUnits = 'Uls';
DualEcuFltMtgtnSca.SwcShoName = 'DualCtrlrOutpMgr';
DualEcuFltMtgtnSca.EngDT = dt.float32;
DualEcuFltMtgtnSca.EngInit = 0.5;
DualEcuFltMtgtnSca.EngMin = 0;
DualEcuFltMtgtnSca.EngMax = 1;
DualEcuFltMtgtnSca.TestTolerance = 0.000488281;
DualEcuFltMtgtnSca.WrittenIn = {'DualCtrlrOutpMgrPer1'};
DualEcuFltMtgtnSca.WriteType = 'Rte';


DualEcuMotCtrlMtgtnEna = DataDict.OpSignal;
DualEcuMotCtrlMtgtnEna.LongName = 'Dual ECU Motor Control Mitigation Enable';
DualEcuMotCtrlMtgtnEna.Description = [...
  'Motor control switch to voltage mode when IMC controller is down or ot' ...
  'her controller is in voltage mode'];
DualEcuMotCtrlMtgtnEna.DocUnits = 'Cnt';
DualEcuMotCtrlMtgtnEna.SwcShoName = 'DualCtrlrOutpMgr';
DualEcuMotCtrlMtgtnEna.EngDT = dt.lgc;
DualEcuMotCtrlMtgtnEna.EngInit = 0;
DualEcuMotCtrlMtgtnEna.EngMin = 0;
DualEcuMotCtrlMtgtnEna.EngMax = 1;
DualEcuMotCtrlMtgtnEna.TestTolerance = 0;
DualEcuMotCtrlMtgtnEna.WrittenIn = {'DualCtrlrOutpMgrPer1'};
DualEcuMotCtrlMtgtnEna.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
ImcDiagcStsNonRcvrlReqDiFltPrsnt = DataDict.IRV;
ImcDiagcStsNonRcvrlReqDiFltPrsnt.LongName = 'IMC Diagnostic Status Non Recoverable Req Disable Fault Present';
ImcDiagcStsNonRcvrlReqDiFltPrsnt.Description = [...
  'IMC variable for IMC Diagnostic Status Non Recoverable Req Disable Fau' ...
  'lt Present'];
ImcDiagcStsNonRcvrlReqDiFltPrsnt.DocUnits = 'Cnt';
ImcDiagcStsNonRcvrlReqDiFltPrsnt.EngDT = dt.lgc;
ImcDiagcStsNonRcvrlReqDiFltPrsnt.EngInit = 0;
ImcDiagcStsNonRcvrlReqDiFltPrsnt.EngMin = 0;
ImcDiagcStsNonRcvrlReqDiFltPrsnt.EngMax = 1;
ImcDiagcStsNonRcvrlReqDiFltPrsnt.ReadIn = {'DualCtrlrOutpMgrPer1'};
ImcDiagcStsNonRcvrlReqDiFltPrsnt.WrittenIn = {'DualCtrlrOutpMgrPer2'};


ImcDiagcStsNonRcvrlReqDiFltPrsntVld = DataDict.IRV;
ImcDiagcStsNonRcvrlReqDiFltPrsntVld.LongName = 'IMC Diagnostic Status Non Recoverable Req Disable Fault Present Valid';
ImcDiagcStsNonRcvrlReqDiFltPrsntVld.Description = [...
  'To check the IMC Diagnostic Status Non Recoverable Req Disable Fault P' ...
  'resent Validity'];
ImcDiagcStsNonRcvrlReqDiFltPrsntVld.DocUnits = 'Cnt';
ImcDiagcStsNonRcvrlReqDiFltPrsntVld.EngDT = dt.lgc;
ImcDiagcStsNonRcvrlReqDiFltPrsntVld.EngInit = 0;
ImcDiagcStsNonRcvrlReqDiFltPrsntVld.EngMin = 0;
ImcDiagcStsNonRcvrlReqDiFltPrsntVld.EngMax = 1;
ImcDiagcStsNonRcvrlReqDiFltPrsntVld.ReadIn = {'DualCtrlrOutpMgrPer1'};
ImcDiagcStsNonRcvrlReqDiFltPrsntVld.WrittenIn = {'DualCtrlrOutpMgrPer2'};


ImcDualEcuMotCtrlMtgtnEna = DataDict.IRV;
ImcDualEcuMotCtrlMtgtnEna.LongName = 'IMC Dual Ecu Motor Controller Mitigation Enable';
ImcDualEcuMotCtrlMtgtnEna.Description = [...
  'IMC Variable for Dual Motor Controller Mitigation Enable'];
ImcDualEcuMotCtrlMtgtnEna.DocUnits = 'Cnt';
ImcDualEcuMotCtrlMtgtnEna.EngDT = dt.lgc;
ImcDualEcuMotCtrlMtgtnEna.EngInit = 0;
ImcDualEcuMotCtrlMtgtnEna.EngMin = 0;
ImcDualEcuMotCtrlMtgtnEna.EngMax = 1;
ImcDualEcuMotCtrlMtgtnEna.ReadIn = {'DualCtrlrOutpMgrPer1'};
ImcDualEcuMotCtrlMtgtnEna.WrittenIn = {'DualCtrlrOutpMgrPer2'};


ImcDualEcuMotCtrlMtgtnEnaVld = DataDict.IRV;
ImcDualEcuMotCtrlMtgtnEnaVld.LongName = 'IMC Dual Ecu Motor Controller Mitigation Enable Valid';
ImcDualEcuMotCtrlMtgtnEnaVld.Description = [...
  'To check the Dual Motor Controller Mitigation Enable Validity'];
ImcDualEcuMotCtrlMtgtnEnaVld.DocUnits = 'Cnt';
ImcDualEcuMotCtrlMtgtnEnaVld.EngDT = dt.lgc;
ImcDualEcuMotCtrlMtgtnEnaVld.EngInit = 0;
ImcDualEcuMotCtrlMtgtnEnaVld.EngMin = 0;
ImcDualEcuMotCtrlMtgtnEnaVld.EngMax = 1;
ImcDualEcuMotCtrlMtgtnEnaVld.ReadIn = {'DualCtrlrOutpMgrPer1'};
ImcDualEcuMotCtrlMtgtnEnaVld.WrittenIn = {'DualCtrlrOutpMgrPer2'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
DualCtrlrOutpMgrConOutpSca = DataDict.Calibration;
DualCtrlrOutpMgrConOutpSca.LongName = 'Constant Output Scale';
DualCtrlrOutpMgrConOutpSca.Description = [...
  'Constant output scale to be provided during normal conditions'];
DualCtrlrOutpMgrConOutpSca.DocUnits = 'Uls';
DualCtrlrOutpMgrConOutpSca.EngDT = dt.float32;
DualCtrlrOutpMgrConOutpSca.EngVal = 0.5;
DualCtrlrOutpMgrConOutpSca.EngMin = 0.1;
DualCtrlrOutpMgrConOutpSca.EngMax = 1;
DualCtrlrOutpMgrConOutpSca.Cardinality = 'Inin';
DualCtrlrOutpMgrConOutpSca.CustomerVisible = false;
DualCtrlrOutpMgrConOutpSca.Online = false;
DualCtrlrOutpMgrConOutpSca.Impact = 'H';
DualCtrlrOutpMgrConOutpSca.TuningOwner = 'CSE';
DualCtrlrOutpMgrConOutpSca.GraphLink = {''};
DualCtrlrOutpMgrConOutpSca.Monotony = 'None';
DualCtrlrOutpMgrConOutpSca.MaxGrad = Inf;
DualCtrlrOutpMgrConOutpSca.PortName = 'DualCtrlrOutpMgrConOutpSca';


DualCtrlrOutpMgrDiRateTblY = DataDict.Calibration;
DualCtrlrOutpMgrDiRateTblY.LongName = 'Disable Rate Table Y';
DualCtrlrOutpMgrDiRateTblY.Description = [...
  'Disabling Rate from Max output to Minimum output during fault state'];
DualCtrlrOutpMgrDiRateTblY.DocUnits = 'UlsPerSec';
DualCtrlrOutpMgrDiRateTblY.EngDT = dt.u10p6;
DualCtrlrOutpMgrDiRateTblY.EngVal =  ...
   [100              100              100              100              100              100              100              100              100              100];
DualCtrlrOutpMgrDiRateTblY.EngMin = 0;
DualCtrlrOutpMgrDiRateTblY.EngMax = 1000;
DualCtrlrOutpMgrDiRateTblY.Cardinality = 'Inin';
DualCtrlrOutpMgrDiRateTblY.CustomerVisible = false;
DualCtrlrOutpMgrDiRateTblY.Online = false;
DualCtrlrOutpMgrDiRateTblY.Impact = 'H';
DualCtrlrOutpMgrDiRateTblY.TuningOwner = 'CSE';
DualCtrlrOutpMgrDiRateTblY.GraphLink = {'DualCtrlrOutpMgrVehSpdRefTblX'};
DualCtrlrOutpMgrDiRateTblY.Monotony = 'None';
DualCtrlrOutpMgrDiRateTblY.MaxGrad = Inf;
DualCtrlrOutpMgrDiRateTblY.PortName = 'DualCtrlrOutpMgrDiRateTblY';


DualCtrlrOutpMgrEnaRate = DataDict.Calibration;
DualCtrlrOutpMgrEnaRate.LongName = 'Enable Rate';
DualCtrlrOutpMgrEnaRate.Description = [...
  'Enabling Rate to Max output at the event of a fault'];
DualCtrlrOutpMgrEnaRate.DocUnits = 'UlsPerSec';
DualCtrlrOutpMgrEnaRate.EngDT = dt.float32;
DualCtrlrOutpMgrEnaRate.EngVal = 100;
DualCtrlrOutpMgrEnaRate.EngMin = 0;
DualCtrlrOutpMgrEnaRate.EngMax = 1000;
DualCtrlrOutpMgrEnaRate.Cardinality = 'Inin';
DualCtrlrOutpMgrEnaRate.CustomerVisible = false;
DualCtrlrOutpMgrEnaRate.Online = false;
DualCtrlrOutpMgrEnaRate.Impact = 'H';
DualCtrlrOutpMgrEnaRate.TuningOwner = 'CSE';
DualCtrlrOutpMgrEnaRate.GraphLink = {''};
DualCtrlrOutpMgrEnaRate.Monotony = 'None';
DualCtrlrOutpMgrEnaRate.MaxGrad = Inf;
DualCtrlrOutpMgrEnaRate.PortName = 'DualCtrlrOutpMgrEnaRate';


DualCtrlrOutpMgrFltThdTmr = DataDict.Calibration;
DualCtrlrOutpMgrFltThdTmr.LongName = 'Fault Threshold Timer';
DualCtrlrOutpMgrFltThdTmr.Description = 'Timer for setting the fault to';
DualCtrlrOutpMgrFltThdTmr.DocUnits = 'MilliSec';
DualCtrlrOutpMgrFltThdTmr.EngDT = dt.u16;
DualCtrlrOutpMgrFltThdTmr.EngVal = 20;
DualCtrlrOutpMgrFltThdTmr.EngMin = 0;
DualCtrlrOutpMgrFltThdTmr.EngMax = 500;
DualCtrlrOutpMgrFltThdTmr.Cardinality = 'Inin';
DualCtrlrOutpMgrFltThdTmr.CustomerVisible = false;
DualCtrlrOutpMgrFltThdTmr.Online = false;
DualCtrlrOutpMgrFltThdTmr.Impact = 'H';
DualCtrlrOutpMgrFltThdTmr.TuningOwner = 'CSE';
DualCtrlrOutpMgrFltThdTmr.GraphLink = {''};
DualCtrlrOutpMgrFltThdTmr.Monotony = 'None';
DualCtrlrOutpMgrFltThdTmr.MaxGrad = Inf;
DualCtrlrOutpMgrFltThdTmr.PortName = 'DualCtrlrOutpMgrFltThdTmr';


DualCtrlrOutpMgrLimdOutpSca = DataDict.Calibration;
DualCtrlrOutpMgrLimdOutpSca.LongName = 'Limited Output Scale';
DualCtrlrOutpMgrLimdOutpSca.Description = [...
  'Reduced output scale to be provided during Loss of controller'];
DualCtrlrOutpMgrLimdOutpSca.DocUnits = 'Uls';
DualCtrlrOutpMgrLimdOutpSca.EngDT = dt.float32;
DualCtrlrOutpMgrLimdOutpSca.EngVal = 0.3;
DualCtrlrOutpMgrLimdOutpSca.EngMin = 0.1;
DualCtrlrOutpMgrLimdOutpSca.EngMax = 1;
DualCtrlrOutpMgrLimdOutpSca.Cardinality = 'Inin';
DualCtrlrOutpMgrLimdOutpSca.CustomerVisible = false;
DualCtrlrOutpMgrLimdOutpSca.Online = false;
DualCtrlrOutpMgrLimdOutpSca.Impact = 'H';
DualCtrlrOutpMgrLimdOutpSca.TuningOwner = 'CSE';
DualCtrlrOutpMgrLimdOutpSca.GraphLink = {''};
DualCtrlrOutpMgrLimdOutpSca.Monotony = 'None';
DualCtrlrOutpMgrLimdOutpSca.MaxGrad = Inf;
DualCtrlrOutpMgrLimdOutpSca.PortName = 'DualCtrlrOutpMgrLimdOutpSca';


DualCtrlrOutpMgrMaxOutpSca = DataDict.Calibration;
DualCtrlrOutpMgrMaxOutpSca.LongName = 'Limited Output Scale';
DualCtrlrOutpMgrMaxOutpSca.Description = [...
  'Maximum output scale to be provided during Loss of controller'];
DualCtrlrOutpMgrMaxOutpSca.DocUnits = 'Uls';
DualCtrlrOutpMgrMaxOutpSca.EngDT = dt.float32;
DualCtrlrOutpMgrMaxOutpSca.EngVal = 1;
DualCtrlrOutpMgrMaxOutpSca.EngMin = 0.1;
DualCtrlrOutpMgrMaxOutpSca.EngMax = 1;
DualCtrlrOutpMgrMaxOutpSca.Cardinality = 'Inin';
DualCtrlrOutpMgrMaxOutpSca.CustomerVisible = false;
DualCtrlrOutpMgrMaxOutpSca.Online = false;
DualCtrlrOutpMgrMaxOutpSca.Impact = 'H';
DualCtrlrOutpMgrMaxOutpSca.TuningOwner = 'CSE';
DualCtrlrOutpMgrMaxOutpSca.GraphLink = {''};
DualCtrlrOutpMgrMaxOutpSca.Monotony = 'None';
DualCtrlrOutpMgrMaxOutpSca.MaxGrad = Inf;
DualCtrlrOutpMgrMaxOutpSca.PortName = 'DualCtrlrOutpMgrMaxOutpSca';


DualCtrlrOutpMgrMaxOutpTmr = DataDict.Calibration;
DualCtrlrOutpMgrMaxOutpTmr.LongName = 'Maximum Output Timer';
DualCtrlrOutpMgrMaxOutpTmr.Description = [...
  'Timer calibration to hold the output scale at 1'];
DualCtrlrOutpMgrMaxOutpTmr.DocUnits = 'MilliSec';
DualCtrlrOutpMgrMaxOutpTmr.EngDT = dt.u16;
DualCtrlrOutpMgrMaxOutpTmr.EngVal = 100;
DualCtrlrOutpMgrMaxOutpTmr.EngMin = 0;
DualCtrlrOutpMgrMaxOutpTmr.EngMax = 500;
DualCtrlrOutpMgrMaxOutpTmr.Cardinality = 'Inin';
DualCtrlrOutpMgrMaxOutpTmr.CustomerVisible = false;
DualCtrlrOutpMgrMaxOutpTmr.Online = false;
DualCtrlrOutpMgrMaxOutpTmr.Impact = 'H';
DualCtrlrOutpMgrMaxOutpTmr.TuningOwner = 'CSE';
DualCtrlrOutpMgrMaxOutpTmr.GraphLink = {''};
DualCtrlrOutpMgrMaxOutpTmr.Monotony = 'None';
DualCtrlrOutpMgrMaxOutpTmr.MaxGrad = Inf;
DualCtrlrOutpMgrMaxOutpTmr.PortName = 'DualCtrlrOutpMgrMaxOutpTmr';


DualCtrlrOutpMgrMinOutpTmr = DataDict.Calibration;
DualCtrlrOutpMgrMinOutpTmr.LongName = 'Minimum Output Timer';
DualCtrlrOutpMgrMinOutpTmr.Description = [...
  'Timer calibration to hold the output scale at 0'];
DualCtrlrOutpMgrMinOutpTmr.DocUnits = 'MilliSec';
DualCtrlrOutpMgrMinOutpTmr.EngDT = dt.u16;
DualCtrlrOutpMgrMinOutpTmr.EngVal = 100;
DualCtrlrOutpMgrMinOutpTmr.EngMin = 0;
DualCtrlrOutpMgrMinOutpTmr.EngMax = 500;
DualCtrlrOutpMgrMinOutpTmr.Cardinality = 'Inin';
DualCtrlrOutpMgrMinOutpTmr.CustomerVisible = false;
DualCtrlrOutpMgrMinOutpTmr.Online = false;
DualCtrlrOutpMgrMinOutpTmr.Impact = 'H';
DualCtrlrOutpMgrMinOutpTmr.TuningOwner = 'CSE';
DualCtrlrOutpMgrMinOutpTmr.GraphLink = {''};
DualCtrlrOutpMgrMinOutpTmr.Monotony = 'None';
DualCtrlrOutpMgrMinOutpTmr.MaxGrad = Inf;
DualCtrlrOutpMgrMinOutpTmr.PortName = 'DualCtrlrOutpMgrMinOutpTmr';


DualCtrlrOutpMgrNonRecFltThdTmr = DataDict.Calibration;
DualCtrlrOutpMgrNonRecFltThdTmr.LongName = 'Non Recoverable Fault Threshold Timer';
DualCtrlrOutpMgrNonRecFltThdTmr.Description = [...
  'Non Recoverable Fault Threshold Timer '];
DualCtrlrOutpMgrNonRecFltThdTmr.DocUnits = 'MilliSec';
DualCtrlrOutpMgrNonRecFltThdTmr.EngDT = dt.u16;
DualCtrlrOutpMgrNonRecFltThdTmr.EngVal = 30;
DualCtrlrOutpMgrNonRecFltThdTmr.EngMin = 0;
DualCtrlrOutpMgrNonRecFltThdTmr.EngMax = 1000;
DualCtrlrOutpMgrNonRecFltThdTmr.Cardinality = 'Inin';
DualCtrlrOutpMgrNonRecFltThdTmr.CustomerVisible = false;
DualCtrlrOutpMgrNonRecFltThdTmr.Online = false;
DualCtrlrOutpMgrNonRecFltThdTmr.Impact = 'H';
DualCtrlrOutpMgrNonRecFltThdTmr.TuningOwner = 'CSE';
DualCtrlrOutpMgrNonRecFltThdTmr.GraphLink = {''};
DualCtrlrOutpMgrNonRecFltThdTmr.Monotony = 'None';
DualCtrlrOutpMgrNonRecFltThdTmr.MaxGrad = Inf;
DualCtrlrOutpMgrNonRecFltThdTmr.PortName = 'DualCtrlrOutpMgrNonRecFltThdTmr';


DualCtrlrOutpMgrThdTmr = DataDict.Calibration;
DualCtrlrOutpMgrThdTmr.LongName = 'Threshold Timer';
DualCtrlrOutpMgrThdTmr.Description = 'Timer for setting the fault to';
DualCtrlrOutpMgrThdTmr.DocUnits = 'MilliSec';
DualCtrlrOutpMgrThdTmr.EngDT = dt.u16;
DualCtrlrOutpMgrThdTmr.EngVal = 20;
DualCtrlrOutpMgrThdTmr.EngMin = 0;
DualCtrlrOutpMgrThdTmr.EngMax = 500;
DualCtrlrOutpMgrThdTmr.Cardinality = 'Inin';
DualCtrlrOutpMgrThdTmr.CustomerVisible = false;
DualCtrlrOutpMgrThdTmr.Online = false;
DualCtrlrOutpMgrThdTmr.Impact = 'H';
DualCtrlrOutpMgrThdTmr.TuningOwner = 'CSE';
DualCtrlrOutpMgrThdTmr.GraphLink = {''};
DualCtrlrOutpMgrThdTmr.Monotony = 'None';
DualCtrlrOutpMgrThdTmr.MaxGrad = Inf;
DualCtrlrOutpMgrThdTmr.PortName = 'DualCtrlrOutpMgrThdTmr';


DualCtrlrOutpMgrVehSpdRefTblX = DataDict.Calibration;
DualCtrlrOutpMgrVehSpdRefTblX.LongName = 'Vehicle Speed Reference Table X';
DualCtrlrOutpMgrVehSpdRefTblX.Description = [...
  'Reference Vehicle Speed Table for lookup purposes'];
DualCtrlrOutpMgrVehSpdRefTblX.DocUnits = 'Kph';
DualCtrlrOutpMgrVehSpdRefTblX.EngDT = dt.u9p7;
DualCtrlrOutpMgrVehSpdRefTblX.EngVal =  ...
   [0               15               40               60               75              100              125              130              140              160];
DualCtrlrOutpMgrVehSpdRefTblX.EngMin = 0;
DualCtrlrOutpMgrVehSpdRefTblX.EngMax = 511;
DualCtrlrOutpMgrVehSpdRefTblX.Cardinality = 'Inin';
DualCtrlrOutpMgrVehSpdRefTblX.CustomerVisible = false;
DualCtrlrOutpMgrVehSpdRefTblX.Online = false;
DualCtrlrOutpMgrVehSpdRefTblX.Impact = 'M';
DualCtrlrOutpMgrVehSpdRefTblX.TuningOwner = 'CSE';
DualCtrlrOutpMgrVehSpdRefTblX.GraphLink = {''};
DualCtrlrOutpMgrVehSpdRefTblX.Monotony = 'Strictly_Increasing';
DualCtrlrOutpMgrVehSpdRefTblX.MaxGrad = Inf;
DualCtrlrOutpMgrVehSpdRefTblX.PortName = 'DualCtrlrOutpMgrVehSpdRefTblX';


DualCtrlrOutpMgrVltgModFltThdTmr = DataDict.Calibration;
DualCtrlrOutpMgrVltgModFltThdTmr.LongName = 'Fault Threshold Timer';
DualCtrlrOutpMgrVltgModFltThdTmr.Description = 'Timer for setting the fault to';
DualCtrlrOutpMgrVltgModFltThdTmr.DocUnits = 'MilliSec';
DualCtrlrOutpMgrVltgModFltThdTmr.EngDT = dt.u16;
DualCtrlrOutpMgrVltgModFltThdTmr.EngVal = 20;
DualCtrlrOutpMgrVltgModFltThdTmr.EngMin = 0;
DualCtrlrOutpMgrVltgModFltThdTmr.EngMax = 65535;
DualCtrlrOutpMgrVltgModFltThdTmr.Cardinality = 'Inin';
DualCtrlrOutpMgrVltgModFltThdTmr.CustomerVisible = false;
DualCtrlrOutpMgrVltgModFltThdTmr.Online = false;
DualCtrlrOutpMgrVltgModFltThdTmr.Impact = 'H';
DualCtrlrOutpMgrVltgModFltThdTmr.TuningOwner = 'CSE';
DualCtrlrOutpMgrVltgModFltThdTmr.GraphLink = {''};
DualCtrlrOutpMgrVltgModFltThdTmr.Monotony = 'None';
DualCtrlrOutpMgrVltgModFltThdTmr.MaxGrad = Inf;
DualCtrlrOutpMgrVltgModFltThdTmr.PortName = 'DualCtrlrOutpMgrVltgModFltThdTmr';



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
FltLrngEnaPrev = DataDict.PIM;
FltLrngEnaPrev.LongName = 'Fault Learning Enable Previous';
FltLrngEnaPrev.Description = 'Fault Status';
FltLrngEnaPrev.DocUnits = 'Cnt';
FltLrngEnaPrev.EngDT = dt.lgc;
FltLrngEnaPrev.EngMin = 0;
FltLrngEnaPrev.EngMax = 1;
FltLrngEnaPrev.InitRowCol = [1  1];


FltRefTiEnaLrng = DataDict.PIM;
FltRefTiEnaLrng.LongName = 'Fault Reference Time Enable Learning';
FltRefTiEnaLrng.Description = 'Reference Time';
FltRefTiEnaLrng.DocUnits = 'Cnt';
FltRefTiEnaLrng.EngDT = dt.u32;
FltRefTiEnaLrng.EngMin = 0;
FltRefTiEnaLrng.EngMax = 4294967295;
FltRefTiEnaLrng.InitRowCol = [1  1];


FltStsPrev = DataDict.PIM;
FltStsPrev.LongName = 'Fault Status Previous';
FltStsPrev.Description = [...
  'Fault Status to calculate Span Time'];
FltStsPrev.DocUnits = 'Cnt';
FltStsPrev.EngDT = dt.lgc;
FltStsPrev.EngMin = 0;
FltStsPrev.EngMax = 1;
FltStsPrev.InitRowCol = [1  1];


LtchImcDualEcuMotCtrlMtgtnEnaPrev = DataDict.PIM;
LtchImcDualEcuMotCtrlMtgtnEnaPrev.LongName = 'Latch Imc Dual Ecu Motor Control Mitigation Enable Previous';
LtchImcDualEcuMotCtrlMtgtnEnaPrev.Description = [...
  'Previous value of Imc Dual Ecu Motor Control Mitigation Enable Previou' ...
  's'];
LtchImcDualEcuMotCtrlMtgtnEnaPrev.DocUnits = 'Cnt';
LtchImcDualEcuMotCtrlMtgtnEnaPrev.EngDT = dt.lgc;
LtchImcDualEcuMotCtrlMtgtnEnaPrev.EngMin = 0;
LtchImcDualEcuMotCtrlMtgtnEnaPrev.EngMax = 1;
LtchImcDualEcuMotCtrlMtgtnEnaPrev.InitRowCol = [1  1];


LtchRefTiEnaLrng = DataDict.PIM;
LtchRefTiEnaLrng.LongName = 'Latch Reference Time Enable Learning';
LtchRefTiEnaLrng.Description = 'Reference Time';
LtchRefTiEnaLrng.DocUnits = 'Cnt';
LtchRefTiEnaLrng.EngDT = dt.u32;
LtchRefTiEnaLrng.EngMin = 0;
LtchRefTiEnaLrng.EngMax = 4294967295;
LtchRefTiEnaLrng.InitRowCol = [1  1];


LtchSysStPrev = DataDict.PIM;
LtchSysStPrev.LongName = 'Latch System State Previous';
LtchSysStPrev.Description = [...
  'Previous Value of Latch System State'];
LtchSysStPrev.DocUnits = 'Cnt';
LtchSysStPrev.EngDT = dt.lgc;
LtchSysStPrev.EngMin = 0;
LtchSysStPrev.EngMax = 1;
LtchSysStPrev.InitRowCol = [1  1];


MaxOutpRefTiEna = DataDict.PIM;
MaxOutpRefTiEna.LongName = 'Maximum Output Reference Time Enable';
MaxOutpRefTiEna.Description = 'Reference Time';
MaxOutpRefTiEna.DocUnits = 'Cnt';
MaxOutpRefTiEna.EngDT = dt.u32;
MaxOutpRefTiEna.EngMin = 0;
MaxOutpRefTiEna.EngMax = 4294967295;
MaxOutpRefTiEna.InitRowCol = [1  1];


MaxOutpTmrCmpl = DataDict.PIM;
MaxOutpTmrCmpl.LongName = 'Maximum Output Timer Complete';
MaxOutpTmrCmpl.Description = 'Maximum Output Timer Complete';
MaxOutpTmrCmpl.DocUnits = 'Cnt';
MaxOutpTmrCmpl.EngDT = dt.lgc;
MaxOutpTmrCmpl.EngMin = 0;
MaxOutpTmrCmpl.EngMax = 1;
MaxOutpTmrCmpl.InitRowCol = [1  1];


NonRecFltEnaPrev = DataDict.PIM;
NonRecFltEnaPrev.LongName = 'Non Recoverable Fault Enable Previous';
NonRecFltEnaPrev.Description = [...
  'Non Recoverable Fault Enable Previous'];
NonRecFltEnaPrev.DocUnits = 'Cnt';
NonRecFltEnaPrev.EngDT = dt.lgc;
NonRecFltEnaPrev.EngMin = 0;
NonRecFltEnaPrev.EngMax = 1;
NonRecFltEnaPrev.InitRowCol = [1  1];


NonRecFltRefTiEnaLrng = DataDict.PIM;
NonRecFltRefTiEnaLrng.LongName = 'Non Recoverable Fault Reference Time Enable Learning';
NonRecFltRefTiEnaLrng.Description = [...
  'Non Recoverable Fault Reference Time Enable Learning'];
NonRecFltRefTiEnaLrng.DocUnits = 'Cnt';
NonRecFltRefTiEnaLrng.EngDT = dt.u32;
NonRecFltRefTiEnaLrng.EngMin = 0;
NonRecFltRefTiEnaLrng.EngMax = 4294967295;
NonRecFltRefTiEnaLrng.InitRowCol = [1  1];


OutpSca = DataDict.PIM;
OutpSca.LongName = 'Output Scale';
OutpSca.Description = 'Motor Torque Output Scale';
OutpSca.DocUnits = 'Uls';
OutpSca.EngDT = dt.float32;
OutpSca.EngMin = 0.1;
OutpSca.EngMax = 1;
OutpSca.InitRowCol = [1  1];


PrevLtch = DataDict.PIM;
PrevLtch.LongName = 'Previous Latch';
PrevLtch.Description = 'Previous Latch';
PrevLtch.DocUnits = 'Cnt';
PrevLtch.EngDT = dt.lgc;
PrevLtch.EngMin = 0;
PrevLtch.EngMax = 1;
PrevLtch.InitRowCol = [1  1];


PrevLtchNonRecFlt = DataDict.PIM;
PrevLtchNonRecFlt.LongName = 'Previous Latch Non Recoverable Fault';
PrevLtchNonRecFlt.Description = [...
  'Previous Latch for Non-recoverable Fault checking condition'];
PrevLtchNonRecFlt.DocUnits = 'Cnt';
PrevLtchNonRecFlt.EngDT = dt.lgc;
PrevLtchNonRecFlt.EngMin = 0;
PrevLtchNonRecFlt.EngMax = 1;
PrevLtchNonRecFlt.InitRowCol = [1  1];


RefTiEnaLrng = DataDict.PIM;
RefTiEnaLrng.LongName = 'Reference Time Enable Learning';
RefTiEnaLrng.Description = 'Reference Time';
RefTiEnaLrng.DocUnits = 'Cnt';
RefTiEnaLrng.EngDT = dt.u32;
RefTiEnaLrng.EngMin = 0;
RefTiEnaLrng.EngMax = 4294967295;
RefTiEnaLrng.InitRowCol = [1  1];


SysStLrngEnaPrev = DataDict.PIM;
SysStLrngEnaPrev.LongName = 'System State Learning Enable Previous';
SysStLrngEnaPrev.Description = [...
  'Previous value of System State Learning Enable'];
SysStLrngEnaPrev.DocUnits = 'Cnt';
SysStLrngEnaPrev.EngDT = dt.lgc;
SysStLrngEnaPrev.EngMin = 0;
SysStLrngEnaPrev.EngMax = 1;
SysStLrngEnaPrev.InitRowCol = [1  1];


SysStRefTiEnaLrng = DataDict.PIM;
SysStRefTiEnaLrng.LongName = 'System State Reference Time Enable Learning';
SysStRefTiEnaLrng.Description = 'Reference Time';
SysStRefTiEnaLrng.DocUnits = 'Cnt';
SysStRefTiEnaLrng.EngDT = dt.u32;
SysStRefTiEnaLrng.EngMin = 0;
SysStRefTiEnaLrng.EngMax = 4294967295;
SysStRefTiEnaLrng.InitRowCol = [1  1];



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


CNVMILLISECTOCNT_CNTPERMILLISEC_U16 = DataDict.Constant;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Millisecond to Count';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ueis multiplied by this constant to convert millisecond to count'];
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngDT = dt.u16;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngVal = 10;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Define = 'Local';


E_NOT_OK = DataDict.Constant;
E_NOT_OK.LongName = 'E Not Ok';
E_NOT_OK.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
E_NOT_OK.DocUnits = 'Cnt';
E_NOT_OK.EngDT = dt.u08;
E_NOT_OK.EngVal = 1;
E_NOT_OK.Define = 'Global';


IMCARBN_DUALCTRLROUTPMGRDIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16 = DataDict.Constant;
IMCARBN_DUALCTRLROUTPMGRDIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16.LongName = 'Inter Micro Communication Arbitration Diagnostic Status Non Recoverable Required Disable Fault Present';
IMCARBN_DUALCTRLROUTPMGRDIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_DUALCTRLROUTPMGRDIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16.DocUnits = 'Cnt';
IMCARBN_DUALCTRLROUTPMGRDIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16.EngDT = dt.u16;
IMCARBN_DUALCTRLROUTPMGRDIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16.EngVal = 1;
IMCARBN_DUALCTRLROUTPMGRDIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16.Define = 'Global';


IMCARBN_DUALCTRLROUTPMGRDUALECUMOTCTRLMTGTNENA_CNT_U16 = DataDict.Constant;
IMCARBN_DUALCTRLROUTPMGRDUALECUMOTCTRLMTGTNENA_CNT_U16.LongName = 'Inter Micro Communication Arbitration Current Measurement Dual Ecu Motor Control Mitigation Enable';
IMCARBN_DUALCTRLROUTPMGRDUALECUMOTCTRLMTGTNENA_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_DUALCTRLROUTPMGRDUALECUMOTCTRLMTGTNENA_CNT_U16.DocUnits = 'Cnt';
IMCARBN_DUALCTRLROUTPMGRDUALECUMOTCTRLMTGTNENA_CNT_U16.EngDT = dt.u16;
IMCARBN_DUALCTRLROUTPMGRDUALECUMOTCTRLMTGTNENA_CNT_U16.EngVal = 2;
IMCARBN_DUALCTRLROUTPMGRDUALECUMOTCTRLMTGTNENA_CNT_U16.Define = 'Global';


OUTPSCALOWRLIM_ULS_F32 = DataDict.Constant;
OUTPSCALOWRLIM_ULS_F32.LongName = 'Output Scale Lower Limit';
OUTPSCALOWRLIM_ULS_F32.Description = 'Lower Limit of Motor Scale output';
OUTPSCALOWRLIM_ULS_F32.DocUnits = 'Uls';
OUTPSCALOWRLIM_ULS_F32.EngDT = dt.float32;
OUTPSCALOWRLIM_ULS_F32.EngVal = 0;
OUTPSCALOWRLIM_ULS_F32.Define = 'Local';


OUTPSCAUPPRLIM_ULS_F32 = DataDict.Constant;
OUTPSCAUPPRLIM_ULS_F32.LongName = 'Output Scale Upper Limit';
OUTPSCAUPPRLIM_ULS_F32.Description = 'Upper Limit of Motor Scale output';
OUTPSCAUPPRLIM_ULS_F32.DocUnits = 'Uls';
OUTPSCAUPPRLIM_ULS_F32.EngDT = dt.float32;
OUTPSCAUPPRLIM_ULS_F32.EngVal = 1;
OUTPSCAUPPRLIM_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
