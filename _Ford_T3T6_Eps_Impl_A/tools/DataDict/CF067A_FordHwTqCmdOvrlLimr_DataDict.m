%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 31-Mar-2018 21:26:44       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CF067A = DataDict.FDD;
CF067A.Version = '1.0.X';
CF067A.LongName = 'Ford Handwheel Torque Command Overlay Limiter';
CF067A.ShoName  = 'FordHwTqCmdOvrlLimr';
CF067A.DesignASIL = 'D';
CF067A.Description = [...
  'The Torque Limiter Function shall sum and limit all inputTorque Overla' ...
  'ys from Ford features and output them as avalue in Handwheel Nm to be ' ...
  'added to the Handwheel Torque(pre-boost curve overlay)'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordHwTqCmdOvrlLimrInit1 = DataDict.Runnable;
FordHwTqCmdOvrlLimrInit1.Context = 'Rte';
FordHwTqCmdOvrlLimrInit1.TimeStep = 0;
FordHwTqCmdOvrlLimrInit1.Description = 'Initialization Runnable';

FordHwTqCmdOvrlLimrPer1 = DataDict.Runnable;
FordHwTqCmdOvrlLimrPer1.Context = 'Rte';
FordHwTqCmdOvrlLimrPer1.TimeStep = 0.004;
FordHwTqCmdOvrlLimrPer1.Description = 'Periodic Runnable at 4 MilliSec';

FordHwTqCmdOvrlLimrPer2 = DataDict.Runnable;
FordHwTqCmdOvrlLimrPer2.Context = 'Rte';
FordHwTqCmdOvrlLimrPer2.TimeStep = 0.004;
FordHwTqCmdOvrlLimrPer2.Description = 'Periodic Runnable at 4 MilliSec';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetSigImcData_f32 = DataDict.Client;
GetSigImcData_f32.CallLocation = {'FordHwTqCmdOvrlLimrPer2'};
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


GetSigImcData_logl = DataDict.Client;
GetSigImcData_logl.CallLocation = {'FordHwTqCmdOvrlLimrPer2'};
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



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EcuId = DataDict.IpSignal;
EcuId.LongName = 'ECU Identifier';
EcuId.Description = 'ECU Identifier of the ECU';
EcuId.DocUnits = 'Cnt';
EcuId.EngDT = dt.u08;
EcuId.EngInit = 0;
EcuId.EngMin = 0;
EcuId.EngMax = 3;
EcuId.ReadIn = {'FordHwTqCmdOvrlLimrPer2'};
EcuId.ReadType = 'Rte';


FildVehSpd = DataDict.IpSignal;
FildVehSpd.LongName = 'Filtered Vehicle Speed';
FildVehSpd.Description = [...
  'Processed to provide value of Limiter Vehicle Speed'];
FildVehSpd.DocUnits = 'Kph';
FildVehSpd.EngDT = dt.float32;
FildVehSpd.EngInit = 100;
FildVehSpd.EngMin = 0;
FildVehSpd.EngMax = 511;
FildVehSpd.ReadIn = {'FordHwTqCmdOvrlLimrPer2'};
FildVehSpd.ReadType = 'Rte';


FordDrvrSteerRcmdnArbnCmd = DataDict.IpSignal;
FordDrvrSteerRcmdnArbnCmd.LongName = 'Ford DSR Arbitration Command';
FordDrvrSteerRcmdnArbnCmd.Description = [...
  'Used for processing of FordDsrTqReq'];
FordDrvrSteerRcmdnArbnCmd.DocUnits = 'Cnt';
FordDrvrSteerRcmdnArbnCmd.EngDT = enum.FordArbnCmd1;
FordDrvrSteerRcmdnArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordDrvrSteerRcmdnArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordDrvrSteerRcmdnArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordDrvrSteerRcmdnArbnCmd.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
FordDrvrSteerRcmdnArbnCmd.ReadType = 'Rte';


FordDrvrSteerRcmdnFctCallSts = DataDict.IpSignal;
FordDrvrSteerRcmdnFctCallSts.LongName = 'Ford DSR Function Call Status';
FordDrvrSteerRcmdnFctCallSts.Description = [...
  'Used for processing of FordDsrTqReq'];
FordDrvrSteerRcmdnFctCallSts.DocUnits = 'Cnt';
FordDrvrSteerRcmdnFctCallSts.EngDT = dt.lgc;
FordDrvrSteerRcmdnFctCallSts.EngInit = 0;
FordDrvrSteerRcmdnFctCallSts.EngMin = 0;
FordDrvrSteerRcmdnFctCallSts.EngMax = 1;
FordDrvrSteerRcmdnFctCallSts.ReadIn = {'FordHwTqCmdOvrlLimrPer2'};
FordDrvrSteerRcmdnFctCallSts.ReadType = 'Rte';


FordDrvrSteerRcmdnTqReq = DataDict.IpSignal;
FordDrvrSteerRcmdnTqReq.LongName = 'Ford DSR Torque Request';
FordDrvrSteerRcmdnTqReq.Description = [...
  'Processed to obtain the Limited Torque Request'];
FordDrvrSteerRcmdnTqReq.DocUnits = 'HwNwtMtr';
FordDrvrSteerRcmdnTqReq.EngDT = dt.float32;
FordDrvrSteerRcmdnTqReq.EngInit = 0;
FordDrvrSteerRcmdnTqReq.EngMin = -8;
FordDrvrSteerRcmdnTqReq.EngMax = 8;
FordDrvrSteerRcmdnTqReq.ReadIn = {'FordHwTqCmdOvrlLimrPer2'};
FordDrvrSteerRcmdnTqReq.ReadType = 'Rte';


FordEvasSteerAssiArbnCmd = DataDict.IpSignal;
FordEvasSteerAssiArbnCmd.LongName = 'Ford ESA Arbitration Command';
FordEvasSteerAssiArbnCmd.Description = [...
  'Used for processing of FordEsaTqReq'];
FordEvasSteerAssiArbnCmd.DocUnits = 'Cnt';
FordEvasSteerAssiArbnCmd.EngDT = enum.FordArbnCmd1;
FordEvasSteerAssiArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordEvasSteerAssiArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordEvasSteerAssiArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordEvasSteerAssiArbnCmd.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
FordEvasSteerAssiArbnCmd.ReadType = 'Rte';


FordEvasSteerAssiFctCallSts = DataDict.IpSignal;
FordEvasSteerAssiFctCallSts.LongName = 'Ford ESA Function Call Status';
FordEvasSteerAssiFctCallSts.Description = [...
  'Used for processing of FordEsaTqReq'];
FordEvasSteerAssiFctCallSts.DocUnits = 'Cnt';
FordEvasSteerAssiFctCallSts.EngDT = dt.lgc;
FordEvasSteerAssiFctCallSts.EngInit = 0;
FordEvasSteerAssiFctCallSts.EngMin = 0;
FordEvasSteerAssiFctCallSts.EngMax = 1;
FordEvasSteerAssiFctCallSts.ReadIn = {'FordHwTqCmdOvrlLimrPer2'};
FordEvasSteerAssiFctCallSts.ReadType = 'Rte';


FordEvasSteerAssiTqReq = DataDict.IpSignal;
FordEvasSteerAssiTqReq.LongName = 'Ford ESA Torque Request';
FordEvasSteerAssiTqReq.Description = [...
  'Processed to obtain the Limited Torque Request'];
FordEvasSteerAssiTqReq.DocUnits = 'HwNwtMtr';
FordEvasSteerAssiTqReq.EngDT = dt.float32;
FordEvasSteerAssiTqReq.EngInit = 0;
FordEvasSteerAssiTqReq.EngMin = -8;
FordEvasSteerAssiTqReq.EngMax = 8;
FordEvasSteerAssiTqReq.ReadIn = {'FordHwTqCmdOvrlLimrPer2'};
FordEvasSteerAssiTqReq.ReadType = 'Rte';


FordLaneKeepAssiArbnCmd = DataDict.IpSignal;
FordLaneKeepAssiArbnCmd.LongName = 'Ford LKA Arbitration Command';
FordLaneKeepAssiArbnCmd.Description = [...
  'Used for processing of FordLkaTqReq'];
FordLaneKeepAssiArbnCmd.DocUnits = 'Cnt';
FordLaneKeepAssiArbnCmd.EngDT = enum.FordArbnCmd1;
FordLaneKeepAssiArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordLaneKeepAssiArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordLaneKeepAssiArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordLaneKeepAssiArbnCmd.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
FordLaneKeepAssiArbnCmd.ReadType = 'Rte';


FordLaneKeepAssiFctCallSts = DataDict.IpSignal;
FordLaneKeepAssiFctCallSts.LongName = 'Ford LKA Function Call Status';
FordLaneKeepAssiFctCallSts.Description = [...
  'Used for processing of FordLkaTqReq'];
FordLaneKeepAssiFctCallSts.DocUnits = 'Cnt';
FordLaneKeepAssiFctCallSts.EngDT = dt.lgc;
FordLaneKeepAssiFctCallSts.EngInit = 0;
FordLaneKeepAssiFctCallSts.EngMin = 0;
FordLaneKeepAssiFctCallSts.EngMax = 1;
FordLaneKeepAssiFctCallSts.ReadIn = {'FordHwTqCmdOvrlLimrPer2'};
FordLaneKeepAssiFctCallSts.ReadType = 'Rte';


FordLaneKeepAssiTqReq = DataDict.IpSignal;
FordLaneKeepAssiTqReq.LongName = 'Ford LKA Torque Request';
FordLaneKeepAssiTqReq.Description = [...
  'Processed to obtain the Limited Torque Request'];
FordLaneKeepAssiTqReq.DocUnits = 'HwNwtMtr';
FordLaneKeepAssiTqReq.EngDT = dt.float32;
FordLaneKeepAssiTqReq.EngInit = 0;
FordLaneKeepAssiTqReq.EngMin = -8;
FordLaneKeepAssiTqReq.EngMax = 8;
FordLaneKeepAssiTqReq.ReadIn = {'FordHwTqCmdOvrlLimrPer2'};
FordLaneKeepAssiTqReq.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = [...
  'Processed to provide Limiter Vehicle Speed'];
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 1;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'FordHwTqCmdOvrlLimrPer2'};
VehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordColTqOvrl = DataDict.OpSignal;
FordColTqOvrl.LongName = 'Ford Column Torque Overlay';
FordColTqOvrl.Description = [...
  'Limited Output obtained by the sum of all torque requests'];
FordColTqOvrl.DocUnits = 'HwNwtMtr';
FordColTqOvrl.SwcShoName = 'FordHwTqCmdOvrlLimr';
FordColTqOvrl.EngDT = dt.float32;
FordColTqOvrl.EngInit = 0;
FordColTqOvrl.EngMin = -8;
FordColTqOvrl.EngMax = 8;
FordColTqOvrl.TestTolerance = 0;
FordColTqOvrl.WrittenIn = {'FordHwTqCmdOvrlLimrPer1'};
FordColTqOvrl.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
DrvrSteerRcmdnFctCallSts = DataDict.IRV;
DrvrSteerRcmdnFctCallSts.LongName = 'DSR Function Call Status';
DrvrSteerRcmdnFctCallSts.Description = [...
  'Used for processing of FordDsrTqReq'];
DrvrSteerRcmdnFctCallSts.DocUnits = 'Cnt';
DrvrSteerRcmdnFctCallSts.EngDT = dt.lgc;
DrvrSteerRcmdnFctCallSts.EngInit = 0;
DrvrSteerRcmdnFctCallSts.EngMin = 0;
DrvrSteerRcmdnFctCallSts.EngMax = 1;
DrvrSteerRcmdnFctCallSts.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
DrvrSteerRcmdnFctCallSts.WrittenIn = {'FordHwTqCmdOvrlLimrPer2'};


DrvrSteerRcmdnTqReq = DataDict.IRV;
DrvrSteerRcmdnTqReq.LongName = 'DSR Torque Request';
DrvrSteerRcmdnTqReq.Description = [...
  'Processed to obtain the Limited Torque Request'];
DrvrSteerRcmdnTqReq.DocUnits = 'HwNwtMtr';
DrvrSteerRcmdnTqReq.EngDT = dt.float32;
DrvrSteerRcmdnTqReq.EngInit = 0;
DrvrSteerRcmdnTqReq.EngMin = -8;
DrvrSteerRcmdnTqReq.EngMax = 8;
DrvrSteerRcmdnTqReq.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
DrvrSteerRcmdnTqReq.WrittenIn = {'FordHwTqCmdOvrlLimrPer2'};


EvasSteerAssiFctCallSts = DataDict.IRV;
EvasSteerAssiFctCallSts.LongName = 'ESA Function Call Status';
EvasSteerAssiFctCallSts.Description = [...
  'Used for processing of FordEsaTqReq'];
EvasSteerAssiFctCallSts.DocUnits = 'Cnt';
EvasSteerAssiFctCallSts.EngDT = dt.lgc;
EvasSteerAssiFctCallSts.EngInit = 0;
EvasSteerAssiFctCallSts.EngMin = 0;
EvasSteerAssiFctCallSts.EngMax = 1;
EvasSteerAssiFctCallSts.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
EvasSteerAssiFctCallSts.WrittenIn = {'FordHwTqCmdOvrlLimrPer2'};


EvasSteerAssiTqReq = DataDict.IRV;
EvasSteerAssiTqReq.LongName = 'ESA Torque Request';
EvasSteerAssiTqReq.Description = [...
  'Processed to obtain the Limited Torque Request'];
EvasSteerAssiTqReq.DocUnits = 'HwNwtMtr';
EvasSteerAssiTqReq.EngDT = dt.float32;
EvasSteerAssiTqReq.EngInit = 0;
EvasSteerAssiTqReq.EngMin = -8;
EvasSteerAssiTqReq.EngMax = 8;
EvasSteerAssiTqReq.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
EvasSteerAssiTqReq.WrittenIn = {'FordHwTqCmdOvrlLimrPer2'};


FildVehSpdVal = DataDict.IRV;
FildVehSpdVal.LongName = 'Filtered Vehicle Speed';
FildVehSpdVal.Description = [...
  'Processed to provide value of Limiter Vehicle Speed'];
FildVehSpdVal.DocUnits = 'Kph';
FildVehSpdVal.EngDT = dt.float32;
FildVehSpdVal.EngInit = 100;
FildVehSpdVal.EngMin = 0;
FildVehSpdVal.EngMax = 511;
FildVehSpdVal.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
FildVehSpdVal.WrittenIn = {'FordHwTqCmdOvrlLimrPer2'};


LaneKeepAssiFctCallSts = DataDict.IRV;
LaneKeepAssiFctCallSts.LongName = 'LKA Function Call Status';
LaneKeepAssiFctCallSts.Description = [...
  'Used for processing of FordLkaTqReq'];
LaneKeepAssiFctCallSts.DocUnits = 'Cnt';
LaneKeepAssiFctCallSts.EngDT = dt.lgc;
LaneKeepAssiFctCallSts.EngInit = 0;
LaneKeepAssiFctCallSts.EngMin = 0;
LaneKeepAssiFctCallSts.EngMax = 1;
LaneKeepAssiFctCallSts.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
LaneKeepAssiFctCallSts.WrittenIn = {'FordHwTqCmdOvrlLimrPer2'};


LaneKeepAssiTqReq = DataDict.IRV;
LaneKeepAssiTqReq.LongName = 'LKA Torque Request';
LaneKeepAssiTqReq.Description = [...
  'Processed to obtain the Limited Torque Request'];
LaneKeepAssiTqReq.DocUnits = 'HwNwtMtr';
LaneKeepAssiTqReq.EngDT = dt.float32;
LaneKeepAssiTqReq.EngInit = 0;
LaneKeepAssiTqReq.EngMin = -8;
LaneKeepAssiTqReq.EngMax = 8;
LaneKeepAssiTqReq.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
LaneKeepAssiTqReq.WrittenIn = {'FordHwTqCmdOvrlLimrPer2'};


VehSpdVldVal = DataDict.IRV;
VehSpdVldVal.LongName = 'Vehicle Speed Valid';
VehSpdVldVal.Description = [...
  'Processed to provide Limiter Vehicle Speed'];
VehSpdVldVal.DocUnits = 'Cnt';
VehSpdVldVal.EngDT = dt.lgc;
VehSpdVldVal.EngInit = 1;
VehSpdVldVal.EngMin = 0;
VehSpdVldVal.EngMax = 1;
VehSpdVldVal.ReadIn = {'FordHwTqCmdOvrlLimrPer1'};
VehSpdVldVal.WrittenIn = {'FordHwTqCmdOvrlLimrPer2'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordHwTqCmdOvrlLimrCombdBwY = DataDict.Calibration;
FordHwTqCmdOvrlLimrCombdBwY.LongName = 'Ford Handwheel Torque Command Overlay Limiter Combined Bandwidth Y';
FordHwTqCmdOvrlLimrCombdBwY.Description = 'Combined Torque Bandwidth Table';
FordHwTqCmdOvrlLimrCombdBwY.DocUnits = 'HwNwtMtr';
FordHwTqCmdOvrlLimrCombdBwY.EngDT = dt.u13p3;
FordHwTqCmdOvrlLimrCombdBwY.EngVal =  ...
   [0                0                0                0                0                0                0                0];
FordHwTqCmdOvrlLimrCombdBwY.EngMin = 0;
FordHwTqCmdOvrlLimrCombdBwY.EngMax = 8;
FordHwTqCmdOvrlLimrCombdBwY.Cardinality = 'Cmn';
FordHwTqCmdOvrlLimrCombdBwY.CustomerVisible = false;
FordHwTqCmdOvrlLimrCombdBwY.Online = false;
FordHwTqCmdOvrlLimrCombdBwY.Impact = 'H';
FordHwTqCmdOvrlLimrCombdBwY.TuningOwner = 'CSE';
FordHwTqCmdOvrlLimrCombdBwY.GraphLink = {'FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX'};
FordHwTqCmdOvrlLimrCombdBwY.Monotony = 'None';
FordHwTqCmdOvrlLimrCombdBwY.MaxGrad = Inf;
FordHwTqCmdOvrlLimrCombdBwY.PortName = 'FordHwTqCmdOvrlLimrCombdBwY';


FordHwTqCmdOvrlLimrCombdTqRateY = DataDict.Calibration;
FordHwTqCmdOvrlLimrCombdTqRateY.LongName = 'Ford Handwheel Torque Command Overlay Limiter Combined Torque Rate Y';
FordHwTqCmdOvrlLimrCombdTqRateY.Description = 'Combined Torque Rate Table';
FordHwTqCmdOvrlLimrCombdTqRateY.DocUnits = 'HwNwtMtrPerSec';
FordHwTqCmdOvrlLimrCombdTqRateY.EngDT = dt.u13p3;
FordHwTqCmdOvrlLimrCombdTqRateY.EngVal =  ...
   [8                8                8                8                8                8                8                8];
FordHwTqCmdOvrlLimrCombdTqRateY.EngMin = 0;
FordHwTqCmdOvrlLimrCombdTqRateY.EngMax = 8;
FordHwTqCmdOvrlLimrCombdTqRateY.Cardinality = 'Cmn';
FordHwTqCmdOvrlLimrCombdTqRateY.CustomerVisible = false;
FordHwTqCmdOvrlLimrCombdTqRateY.Online = false;
FordHwTqCmdOvrlLimrCombdTqRateY.Impact = 'H';
FordHwTqCmdOvrlLimrCombdTqRateY.TuningOwner = 'CSE';
FordHwTqCmdOvrlLimrCombdTqRateY.GraphLink = {'FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX'};
FordHwTqCmdOvrlLimrCombdTqRateY.Monotony = 'None';
FordHwTqCmdOvrlLimrCombdTqRateY.MaxGrad = Inf;
FordHwTqCmdOvrlLimrCombdTqRateY.PortName = 'FordHwTqCmdOvrlLimrCombdTqRateY';


FordHwTqCmdOvrlLimrCombdTqSatnY = DataDict.Calibration;
FordHwTqCmdOvrlLimrCombdTqSatnY.LongName = 'Ford Handwheel Torque Command Overlay Limiter Combined Torque Saturation Y';
FordHwTqCmdOvrlLimrCombdTqSatnY.Description = 'Combined Torque Saturation Table';
FordHwTqCmdOvrlLimrCombdTqSatnY.DocUnits = 'HwNwtMtr';
FordHwTqCmdOvrlLimrCombdTqSatnY.EngDT = dt.u13p3;
FordHwTqCmdOvrlLimrCombdTqSatnY.EngVal =  ...
   [0                0                0                0                0                0                0                0];
FordHwTqCmdOvrlLimrCombdTqSatnY.EngMin = 0;
FordHwTqCmdOvrlLimrCombdTqSatnY.EngMax = 8;
FordHwTqCmdOvrlLimrCombdTqSatnY.Cardinality = 'Cmn';
FordHwTqCmdOvrlLimrCombdTqSatnY.CustomerVisible = false;
FordHwTqCmdOvrlLimrCombdTqSatnY.Online = false;
FordHwTqCmdOvrlLimrCombdTqSatnY.Impact = 'H';
FordHwTqCmdOvrlLimrCombdTqSatnY.TuningOwner = 'CSE';
FordHwTqCmdOvrlLimrCombdTqSatnY.GraphLink = {'FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX'};
FordHwTqCmdOvrlLimrCombdTqSatnY.Monotony = 'None';
FordHwTqCmdOvrlLimrCombdTqSatnY.MaxGrad = Inf;
FordHwTqCmdOvrlLimrCombdTqSatnY.PortName = 'FordHwTqCmdOvrlLimrCombdTqSatnY';


FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX = DataDict.Calibration;
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.LongName = 'Ford Handwheel Torque Command Overlay Limiter Combined Vehicle Speed Break Point X';
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.Description = [...
  'Combined Vehicle Speed Breakpoints Table'];
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.DocUnits = 'Kph';
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.EngDT = dt.u16;
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.EngVal =  ...
   [0               15               60              100              150              180              200              250];
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.EngMin = 0;
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.EngMax = 255;
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.Cardinality = 'Cmn';
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.CustomerVisible = false;
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.Online = false;
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.Impact = 'H';
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.TuningOwner = 'CSE';
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.GraphLink = {''};
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.Monotony = 'Strictly_Increasing';
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.MaxGrad = Inf;
FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX.PortName = 'FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX';


FordHwTqCmdOvrlLimrDftSpdRate = DataDict.Calibration;
FordHwTqCmdOvrlLimrDftSpdRate.LongName = 'Ford Motor Torque Command Overlay Limiter Default Speed Rate';
FordHwTqCmdOvrlLimrDftSpdRate.Description = 'Default Speed Rate';
FordHwTqCmdOvrlLimrDftSpdRate.DocUnits = 'Kph';
FordHwTqCmdOvrlLimrDftSpdRate.EngDT = dt.float32;
FordHwTqCmdOvrlLimrDftSpdRate.EngVal = 40;
FordHwTqCmdOvrlLimrDftSpdRate.EngMin = 0;
FordHwTqCmdOvrlLimrDftSpdRate.EngMax = 511;
FordHwTqCmdOvrlLimrDftSpdRate.Cardinality = 'Cmn';
FordHwTqCmdOvrlLimrDftSpdRate.CustomerVisible = false;
FordHwTqCmdOvrlLimrDftSpdRate.Online = false;
FordHwTqCmdOvrlLimrDftSpdRate.Impact = 'H';
FordHwTqCmdOvrlLimrDftSpdRate.TuningOwner = 'CSE';
FordHwTqCmdOvrlLimrDftSpdRate.GraphLink = {''};
FordHwTqCmdOvrlLimrDftSpdRate.Monotony = 'None';
FordHwTqCmdOvrlLimrDftSpdRate.MaxGrad = Inf;
FordHwTqCmdOvrlLimrDftSpdRate.PortName = 'FordHwTqCmdOvrlLimrDftSpdRate';


FordHwTqCmdOvrlLimrDftSpdRcvrRate = DataDict.Calibration;
FordHwTqCmdOvrlLimrDftSpdRcvrRate.LongName = 'Ford Motor Torque Command Overlay Limiter Default Recover Speed Rate';
FordHwTqCmdOvrlLimrDftSpdRcvrRate.Description = 'Default Recover Speed Rate';
FordHwTqCmdOvrlLimrDftSpdRcvrRate.DocUnits = 'Kph';
FordHwTqCmdOvrlLimrDftSpdRcvrRate.EngDT = dt.float32;
FordHwTqCmdOvrlLimrDftSpdRcvrRate.EngVal = 40;
FordHwTqCmdOvrlLimrDftSpdRcvrRate.EngMin = 0;
FordHwTqCmdOvrlLimrDftSpdRcvrRate.EngMax = 511;
FordHwTqCmdOvrlLimrDftSpdRcvrRate.Cardinality = 'Cmn';
FordHwTqCmdOvrlLimrDftSpdRcvrRate.CustomerVisible = false;
FordHwTqCmdOvrlLimrDftSpdRcvrRate.Online = false;
FordHwTqCmdOvrlLimrDftSpdRcvrRate.Impact = 'H';
FordHwTqCmdOvrlLimrDftSpdRcvrRate.TuningOwner = 'CSE';
FordHwTqCmdOvrlLimrDftSpdRcvrRate.GraphLink = {''};
FordHwTqCmdOvrlLimrDftSpdRcvrRate.Monotony = 'None';
FordHwTqCmdOvrlLimrDftSpdRcvrRate.MaxGrad = Inf;
FordHwTqCmdOvrlLimrDftSpdRcvrRate.PortName = 'FordHwTqCmdOvrlLimrDftSpdRcvrRate';


FordHwTqCmdOvrlLimrLkaBwY = DataDict.Calibration;
FordHwTqCmdOvrlLimrLkaBwY.LongName = 'Ford Handwheel Torque Command Overlay Limiter Lka Bandwidth Y';
FordHwTqCmdOvrlLimrLkaBwY.Description = 'LKA Torque Bandwidth Table';
FordHwTqCmdOvrlLimrLkaBwY.DocUnits = 'HwNwtMtr';
FordHwTqCmdOvrlLimrLkaBwY.EngDT = dt.u13p3;
FordHwTqCmdOvrlLimrLkaBwY.EngVal =  ...
   [0                0                0                0                0                0                0                0];
FordHwTqCmdOvrlLimrLkaBwY.EngMin = 0;
FordHwTqCmdOvrlLimrLkaBwY.EngMax = 8;
FordHwTqCmdOvrlLimrLkaBwY.Cardinality = 'Cmn';
FordHwTqCmdOvrlLimrLkaBwY.CustomerVisible = false;
FordHwTqCmdOvrlLimrLkaBwY.Online = false;
FordHwTqCmdOvrlLimrLkaBwY.Impact = 'H';
FordHwTqCmdOvrlLimrLkaBwY.TuningOwner = 'CSE';
FordHwTqCmdOvrlLimrLkaBwY.GraphLink = {'FordHwTqCmdOvrlLimrVehSpdBreakPtX'};
FordHwTqCmdOvrlLimrLkaBwY.Monotony = 'None';
FordHwTqCmdOvrlLimrLkaBwY.MaxGrad = Inf;
FordHwTqCmdOvrlLimrLkaBwY.PortName = 'FordHwTqCmdOvrlLimrLkaBwY';


FordHwTqCmdOvrlLimrLkaTqRateY = DataDict.Calibration;
FordHwTqCmdOvrlLimrLkaTqRateY.LongName = 'Ford Handwheel Torque Command Overlay Limiter Lka Torque Rate Y';
FordHwTqCmdOvrlLimrLkaTqRateY.Description = 'LKA Torque Rate Table';
FordHwTqCmdOvrlLimrLkaTqRateY.DocUnits = 'HwNwtMtrPerSec';
FordHwTqCmdOvrlLimrLkaTqRateY.EngDT = dt.u13p3;
FordHwTqCmdOvrlLimrLkaTqRateY.EngVal =  ...
   [5                5                5                5                5                5                5                5];
FordHwTqCmdOvrlLimrLkaTqRateY.EngMin = 0;
FordHwTqCmdOvrlLimrLkaTqRateY.EngMax = 8;
FordHwTqCmdOvrlLimrLkaTqRateY.Cardinality = 'Cmn';
FordHwTqCmdOvrlLimrLkaTqRateY.CustomerVisible = false;
FordHwTqCmdOvrlLimrLkaTqRateY.Online = false;
FordHwTqCmdOvrlLimrLkaTqRateY.Impact = 'H';
FordHwTqCmdOvrlLimrLkaTqRateY.TuningOwner = 'CSE';
FordHwTqCmdOvrlLimrLkaTqRateY.GraphLink = {'FordHwTqCmdOvrlLimrVehSpdBreakPtX'};
FordHwTqCmdOvrlLimrLkaTqRateY.Monotony = 'None';
FordHwTqCmdOvrlLimrLkaTqRateY.MaxGrad = Inf;
FordHwTqCmdOvrlLimrLkaTqRateY.PortName = 'FordHwTqCmdOvrlLimrLkaTqRateY';


FordHwTqCmdOvrlLimrLkaTqSatnY = DataDict.Calibration;
FordHwTqCmdOvrlLimrLkaTqSatnY.LongName = 'Ford Handwheel Torque Command Overlay Limiter LKA Torque Saturation Y';
FordHwTqCmdOvrlLimrLkaTqSatnY.Description = 'LKA Torque Saturation Table';
FordHwTqCmdOvrlLimrLkaTqSatnY.DocUnits = 'HwNwtMtr';
FordHwTqCmdOvrlLimrLkaTqSatnY.EngDT = dt.u13p3;
FordHwTqCmdOvrlLimrLkaTqSatnY.EngVal =  ...
   [0                0                0                0                0                0                0                0];
FordHwTqCmdOvrlLimrLkaTqSatnY.EngMin = 0;
FordHwTqCmdOvrlLimrLkaTqSatnY.EngMax = 8;
FordHwTqCmdOvrlLimrLkaTqSatnY.Cardinality = 'Cmn';
FordHwTqCmdOvrlLimrLkaTqSatnY.CustomerVisible = false;
FordHwTqCmdOvrlLimrLkaTqSatnY.Online = false;
FordHwTqCmdOvrlLimrLkaTqSatnY.Impact = 'H';
FordHwTqCmdOvrlLimrLkaTqSatnY.TuningOwner = 'CSE';
FordHwTqCmdOvrlLimrLkaTqSatnY.GraphLink = {'FordHwTqCmdOvrlLimrVehSpdBreakPtX'};
FordHwTqCmdOvrlLimrLkaTqSatnY.Monotony = 'None';
FordHwTqCmdOvrlLimrLkaTqSatnY.MaxGrad = Inf;
FordHwTqCmdOvrlLimrLkaTqSatnY.PortName = 'FordHwTqCmdOvrlLimrLkaTqSatnY';


FordHwTqCmdOvrlLimrVehSpdBreakPtX = DataDict.Calibration;
FordHwTqCmdOvrlLimrVehSpdBreakPtX.LongName = 'Ford Handwheel Torque Command Overlay Limiter Vehicle Speed Break Point X';
FordHwTqCmdOvrlLimrVehSpdBreakPtX.Description = [...
  'LKA Vehicle Speed Breakpoints Table'];
FordHwTqCmdOvrlLimrVehSpdBreakPtX.DocUnits = 'Kph';
FordHwTqCmdOvrlLimrVehSpdBreakPtX.EngDT = dt.u16;
FordHwTqCmdOvrlLimrVehSpdBreakPtX.EngVal =  ...
   [0               15               60              100              150              180              200              250];
FordHwTqCmdOvrlLimrVehSpdBreakPtX.EngMin = 0;
FordHwTqCmdOvrlLimrVehSpdBreakPtX.EngMax = 255;
FordHwTqCmdOvrlLimrVehSpdBreakPtX.Cardinality = 'Cmn';
FordHwTqCmdOvrlLimrVehSpdBreakPtX.CustomerVisible = false;
FordHwTqCmdOvrlLimrVehSpdBreakPtX.Online = false;
FordHwTqCmdOvrlLimrVehSpdBreakPtX.Impact = 'H';
FordHwTqCmdOvrlLimrVehSpdBreakPtX.TuningOwner = 'CSE';
FordHwTqCmdOvrlLimrVehSpdBreakPtX.GraphLink = {''};
FordHwTqCmdOvrlLimrVehSpdBreakPtX.Monotony = 'Strictly_Increasing';
FordHwTqCmdOvrlLimrVehSpdBreakPtX.MaxGrad = Inf;
FordHwTqCmdOvrlLimrVehSpdBreakPtX.PortName = 'FordHwTqCmdOvrlLimrVehSpdBreakPtX';



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
LimrDftVehSpd = DataDict.PIM;
LimrDftVehSpd.LongName = 'Limiter Default Vehicle Speed';
LimrDftVehSpd.Description = [...
  'Used to determine limiter vehicle speed'];
LimrDftVehSpd.DocUnits = 'Cnt';
LimrDftVehSpd.EngDT = dt.lgc;
LimrDftVehSpd.EngMin = 0;
LimrDftVehSpd.EngMax = 1;
LimrDftVehSpd.InitRowCol = [1  1];


LimrVehSpdPrev = DataDict.PIM;
LimrVehSpdPrev.LongName = 'Previous Limiter Vehicle Speed';
LimrVehSpdPrev.Description = [...
  'Previous value of Limiter Vehicle Speed'];
LimrVehSpdPrev.DocUnits = 'Kph';
LimrVehSpdPrev.EngDT = dt.float32;
LimrVehSpdPrev.EngMin = 0;
LimrVehSpdPrev.EngMax = 511;
LimrVehSpdPrev.InitRowCol = [1  1];


PrevDftVehSpd = DataDict.PIM;
PrevDftVehSpd.LongName = 'Previous Default Vehicle Speed';
PrevDftVehSpd.Description = [...
  'State variable for rate dynamic limiter'];
PrevDftVehSpd.DocUnits = 'Kph';
PrevDftVehSpd.EngDT = dt.float32;
PrevDftVehSpd.EngMin = 0;
PrevDftVehSpd.EngMax = 511;
PrevDftVehSpd.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_4MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_4MILLISEC_SEC_F32.LongName = '4 Milliseconds';
ARCHGLBPRM_4MILLISEC_SEC_F32.Description = '4ms periodic loop time step';
ARCHGLBPRM_4MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_4MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_4MILLISEC_SEC_F32.EngVal = 0.004;
ARCHGLBPRM_4MILLISEC_SEC_F32.Define = 'Global';


ECUID2_CNT_U08 = DataDict.Constant;
ECUID2_CNT_U08.LongName = 'Ecu Identifier 2';
ECUID2_CNT_U08.Description = 'Ecu Identifier 2';
ECUID2_CNT_U08.DocUnits = 'Cnt';
ECUID2_CNT_U08.EngDT = dt.u08;
ECUID2_CNT_U08.EngVal = 2;
ECUID2_CNT_U08.Define = 'Local';


ECUIDINVLD_CNT_U08 = DataDict.Constant;
ECUIDINVLD_CNT_U08.LongName = 'Ecu Identifier Invalid';
ECUIDINVLD_CNT_U08.Description = 'Ecu Identifier Invalid';
ECUIDINVLD_CNT_U08.DocUnits = 'Cnt';
ECUIDINVLD_CNT_U08.EngDT = dt.u08;
ECUIDINVLD_CNT_U08.EngVal = 3;
ECUIDINVLD_CNT_U08.Define = 'Local';


E_NOT_OK = DataDict.Constant;
E_NOT_OK.LongName = 'E Not Ok';
E_NOT_OK.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
E_NOT_OK.DocUnits = 'Cnt';
E_NOT_OK.EngDT = dt.u08;
E_NOT_OK.EngVal = 1;
E_NOT_OK.Define = 'Global';


FORDMOTTQOVRLMAXVAL_MOTNWTMTR_F32 = DataDict.Constant;
FORDMOTTQOVRLMAXVAL_MOTNWTMTR_F32.LongName = 'Ford Motor Torque Overlay Maximum Value';
FORDMOTTQOVRLMAXVAL_MOTNWTMTR_F32.Description = [...
  'Maximum value to limit Ford Motor Torque Overlay'];
FORDMOTTQOVRLMAXVAL_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
FORDMOTTQOVRLMAXVAL_MOTNWTMTR_F32.EngDT = dt.float32;
FORDMOTTQOVRLMAXVAL_MOTNWTMTR_F32.EngVal = 8;
FORDMOTTQOVRLMAXVAL_MOTNWTMTR_F32.Define = 'Local';


FORDMOTTQOVRLMINVAL_MOTNWTMTR_F32 = DataDict.Constant;
FORDMOTTQOVRLMINVAL_MOTNWTMTR_F32.LongName = 'Ford Motor Torque Overlay Minimum Value';
FORDMOTTQOVRLMINVAL_MOTNWTMTR_F32.Description = [...
  'Minimum value to limit Ford Motor Torque Overlay'];
FORDMOTTQOVRLMINVAL_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
FORDMOTTQOVRLMINVAL_MOTNWTMTR_F32.EngDT = dt.float32;
FORDMOTTQOVRLMINVAL_MOTNWTMTR_F32.EngVal = -8;
FORDMOTTQOVRLMINVAL_MOTNWTMTR_F32.Define = 'Local';


IMCARBN_FORDHWTQCMDOVRLLIMRDSRFCTCALLSTS_CNT_U16 = DataDict.Constant;
IMCARBN_FORDHWTQCMDOVRLLIMRDSRFCTCALLSTS_CNT_U16.LongName = 'Inter Micro Communication Arbitration Dsr Function Call Status';
IMCARBN_FORDHWTQCMDOVRLLIMRDSRFCTCALLSTS_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDHWTQCMDOVRLLIMRDSRFCTCALLSTS_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDHWTQCMDOVRLLIMRDSRFCTCALLSTS_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDHWTQCMDOVRLLIMRDSRFCTCALLSTS_CNT_U16.EngVal = 0;
IMCARBN_FORDHWTQCMDOVRLLIMRDSRFCTCALLSTS_CNT_U16.Define = 'Global';


IMCARBN_FORDHWTQCMDOVRLLIMRDSRTQREQ_CNT_U16 = DataDict.Constant;
IMCARBN_FORDHWTQCMDOVRLLIMRDSRTQREQ_CNT_U16.LongName = 'Inter Micro Communication Arbitration Dsr Torque Request';
IMCARBN_FORDHWTQCMDOVRLLIMRDSRTQREQ_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDHWTQCMDOVRLLIMRDSRTQREQ_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDHWTQCMDOVRLLIMRDSRTQREQ_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDHWTQCMDOVRLLIMRDSRTQREQ_CNT_U16.EngVal = 0;
IMCARBN_FORDHWTQCMDOVRLLIMRDSRTQREQ_CNT_U16.Define = 'Global';


IMCARBN_FORDHWTQCMDOVRLLIMRESAFCTCALLSTS_CNT_U16 = DataDict.Constant;
IMCARBN_FORDHWTQCMDOVRLLIMRESAFCTCALLSTS_CNT_U16.LongName = 'Inter Micro Communication Arbitration Esa Function Call Status';
IMCARBN_FORDHWTQCMDOVRLLIMRESAFCTCALLSTS_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDHWTQCMDOVRLLIMRESAFCTCALLSTS_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDHWTQCMDOVRLLIMRESAFCTCALLSTS_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDHWTQCMDOVRLLIMRESAFCTCALLSTS_CNT_U16.EngVal = 0;
IMCARBN_FORDHWTQCMDOVRLLIMRESAFCTCALLSTS_CNT_U16.Define = 'Global';


IMCARBN_FORDHWTQCMDOVRLLIMRESATQREQ_CNT_U16 = DataDict.Constant;
IMCARBN_FORDHWTQCMDOVRLLIMRESATQREQ_CNT_U16.LongName = 'Inter Micro Communication Arbitration Esa Torque Request';
IMCARBN_FORDHWTQCMDOVRLLIMRESATQREQ_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDHWTQCMDOVRLLIMRESATQREQ_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDHWTQCMDOVRLLIMRESATQREQ_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDHWTQCMDOVRLLIMRESATQREQ_CNT_U16.EngVal = 0;
IMCARBN_FORDHWTQCMDOVRLLIMRESATQREQ_CNT_U16.Define = 'Global';


IMCARBN_FORDHWTQCMDOVRLLIMRFILDVEHSPD_CNT_U16 = DataDict.Constant;
IMCARBN_FORDHWTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.LongName = 'Inter Micro Communication Arbitration Filtered Vehcile Speed';
IMCARBN_FORDHWTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDHWTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDHWTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDHWTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.EngVal = 0;
IMCARBN_FORDHWTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.Define = 'Global';


IMCARBN_FORDHWTQCMDOVRLLIMRLKAFCTCALLSTS_CNT_U16 = DataDict.Constant;
IMCARBN_FORDHWTQCMDOVRLLIMRLKAFCTCALLSTS_CNT_U16.LongName = 'Inter Micro Communication Arbitration Lka Function Call Status';
IMCARBN_FORDHWTQCMDOVRLLIMRLKAFCTCALLSTS_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDHWTQCMDOVRLLIMRLKAFCTCALLSTS_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDHWTQCMDOVRLLIMRLKAFCTCALLSTS_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDHWTQCMDOVRLLIMRLKAFCTCALLSTS_CNT_U16.EngVal = 0;
IMCARBN_FORDHWTQCMDOVRLLIMRLKAFCTCALLSTS_CNT_U16.Define = 'Global';


IMCARBN_FORDHWTQCMDOVRLLIMRLKATQREQ_CNT_U16 = DataDict.Constant;
IMCARBN_FORDHWTQCMDOVRLLIMRLKATQREQ_CNT_U16.LongName = 'Inter Micro Communication Arbitration Lka Torque Request';
IMCARBN_FORDHWTQCMDOVRLLIMRLKATQREQ_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDHWTQCMDOVRLLIMRLKATQREQ_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDHWTQCMDOVRLLIMRLKATQREQ_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDHWTQCMDOVRLLIMRLKATQREQ_CNT_U16.EngVal = 0;
IMCARBN_FORDHWTQCMDOVRLLIMRLKATQREQ_CNT_U16.Define = 'Global';


IMCARBN_FORDHWTQCMDOVRLLIMRVEHSPDVLD_CNT_U16 = DataDict.Constant;
IMCARBN_FORDHWTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.LongName = 'Inter Micro Communication Arbitration Vehicle Speed Valid';
IMCARBN_FORDHWTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDHWTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDHWTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDHWTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.EngVal = 0;
IMCARBN_FORDHWTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.Define = 'Global';


IMCFILDVEHSPDDFTVAL_KPH_F32 = DataDict.Constant;
IMCFILDVEHSPDDFTVAL_KPH_F32.LongName = 'IMC Filtered Vehicle Speed Default Value';
IMCFILDVEHSPDDFTVAL_KPH_F32.Description = [...
  'Default Value for IMC Filtered Vehicle Speed'];
IMCFILDVEHSPDDFTVAL_KPH_F32.DocUnits = 'Kph';
IMCFILDVEHSPDDFTVAL_KPH_F32.EngDT = dt.float32;
IMCFILDVEHSPDDFTVAL_KPH_F32.EngVal = 100;
IMCFILDVEHSPDDFTVAL_KPH_F32.Define = 'Local';


SPDDIFTHD_KPH_F32 = DataDict.Constant;
SPDDIFTHD_KPH_F32.LongName = 'Speed Difference Threshold';
SPDDIFTHD_KPH_F32.Description = [...
  'Comparison value to set Limiter Vehicle Speed based on conditions'];
SPDDIFTHD_KPH_F32.DocUnits = 'Kph';
SPDDIFTHD_KPH_F32.EngDT = dt.float32;
SPDDIFTHD_KPH_F32.EngVal = 10;
SPDDIFTHD_KPH_F32.Define = 'Local';


TQREQDFTVAL_HWNWTMTR_F32 = DataDict.Constant;
TQREQDFTVAL_HWNWTMTR_F32.LongName = 'Torque Request default Value';
TQREQDFTVAL_HWNWTMTR_F32.Description = [...
  'Used Pass zero to torque request based on conditions'];
TQREQDFTVAL_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
TQREQDFTVAL_HWNWTMTR_F32.EngDT = dt.float32;
TQREQDFTVAL_HWNWTMTR_F32.EngVal = 0;
TQREQDFTVAL_HWNWTMTR_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
