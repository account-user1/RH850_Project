%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 11-Aug-2017 13:14:12       %
%                                  Created with tool release: 3.0.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF102A = DataDict.FDD;
SF102A.Version = '3.0.X';
SF102A.LongName = 'Motor Control Parameter Estimation';
SF102A.ShoName  = 'MotCtrlPrmEstimn';
SF102A.DesignASIL = 'D';
SF102A.Description = [...
  'The Parameter Compensation function generates four parameter estimates' ...
  ': the Resistance estimate (representing the total motor output circuit' ...
  ' resistance), the Ke estimate (representing the motor voltage constant' ...
  ' Ke), the q-axis Motor Inductance Estimate and the d-axis Motor Induct' ...
  'ance Estimate. The Parameter Compensation function is implemented as a' ...
  ' feedforward parameter estimation function based on component nominal ' ...
  'values, temperature estimates, the Motor Current Reference (q-axis and' ...
  ' d-axis components). The temperature dependent portion of the feedforw' ...
  'ard parameter estimation function updates synchronously at the same ra' ...
  'te as the fastest temperature estimate for the parameter (defined in t' ...
  'he Temperature Estimation FDD).'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotCtrlPrmEstimnInit1 = DataDict.Runnable;
MotCtrlPrmEstimnInit1.Context = 'Rte';
MotCtrlPrmEstimnInit1.TimeStep = 0;
MotCtrlPrmEstimnInit1.Description = 'Initialization';

MotCtrlPrmEstimnPer1 = DataDict.Runnable;
MotCtrlPrmEstimnPer1.Context = 'Rte';
MotCtrlPrmEstimnPer1.TimeStep = 0.002;
MotCtrlPrmEstimnPer1.Description = 'Periodic 1';

MotCtrlPrmEstimnPer2 = DataDict.Runnable;
MotCtrlPrmEstimnPer2.Context = 'Rte';
MotCtrlPrmEstimnPer2.TimeStep = 0.1;
MotCtrlPrmEstimnPer2.Description = 'Periodic 2';

GetMotPrmNomEol = DataDict.SrvRunnable;
GetMotPrmNomEol.Context = 'Rte';
GetMotPrmNomEol.Description = 'Server Runnable';
GetMotPrmNomEol.Return = DataDict.CSReturn;
GetMotPrmNomEol.Return.Type = 'None';
GetMotPrmNomEol.Return.Min = [];
GetMotPrmNomEol.Return.Max = [];
GetMotPrmNomEol.Return.TestTolerance = [];
GetMotPrmNomEol.Arguments(1) = DataDict.CSArguments;
GetMotPrmNomEol.Arguments(1).Name = 'MotBackEmfConNom';
GetMotPrmNomEol.Arguments(1).EngDT = dt.float32;
GetMotPrmNomEol.Arguments(1).EngMin = 0.025;
GetMotPrmNomEol.Arguments(1).EngMax = 0.075;
GetMotPrmNomEol.Arguments(1).TestTolerance = 0.001;
GetMotPrmNomEol.Arguments(1).Units = 'VoltPerMotRadPerSec';
GetMotPrmNomEol.Arguments(1).Direction = 'Out';
GetMotPrmNomEol.Arguments(1).InitRowCol = [1  1];
GetMotPrmNomEol.Arguments(1).Description = 'End of line Motor Parameter';
GetMotPrmNomEol.Arguments(2) = DataDict.CSArguments;
GetMotPrmNomEol.Arguments(2).Name = 'MotRNom';
GetMotPrmNomEol.Arguments(2).EngDT = dt.float32;
GetMotPrmNomEol.Arguments(2).EngMin = 0.005;
GetMotPrmNomEol.Arguments(2).EngMax = 0.12565;
GetMotPrmNomEol.Arguments(2).TestTolerance = 0.001;
GetMotPrmNomEol.Arguments(2).Units = 'Ohm';
GetMotPrmNomEol.Arguments(2).Direction = 'Out';
GetMotPrmNomEol.Arguments(2).InitRowCol = [1  1];
GetMotPrmNomEol.Arguments(2).Description = 'End of line Motor Parameter';

SetMotPrmNomEol = DataDict.SrvRunnable;
SetMotPrmNomEol.Context = 'Rte';
SetMotPrmNomEol.Description = 'Server Runnable';
SetMotPrmNomEol.Return = DataDict.CSReturn;
SetMotPrmNomEol.Return.Type = 'None';
SetMotPrmNomEol.Return.Min = [];
SetMotPrmNomEol.Return.Max = [];
SetMotPrmNomEol.Return.TestTolerance = [];
SetMotPrmNomEol.Arguments(1) = DataDict.CSArguments;
SetMotPrmNomEol.Arguments(1).Name = 'MotBackEmfConNom';
SetMotPrmNomEol.Arguments(1).EngDT = dt.float32;
SetMotPrmNomEol.Arguments(1).EngMin = 0.025;
SetMotPrmNomEol.Arguments(1).EngMax = 0.075;
SetMotPrmNomEol.Arguments(1).Units = 'VoltPerMotRadPerSec';
SetMotPrmNomEol.Arguments(1).Direction = 'In';
SetMotPrmNomEol.Arguments(1).InitRowCol = [1  1];
SetMotPrmNomEol.Arguments(1).Description = 'End of line Motor Parameter';
SetMotPrmNomEol.Arguments(2) = DataDict.CSArguments;
SetMotPrmNomEol.Arguments(2).Name = 'MotRNom';
SetMotPrmNomEol.Arguments(2).EngDT = dt.float32;
SetMotPrmNomEol.Arguments(2).EngMin = 0.005;
SetMotPrmNomEol.Arguments(2).EngMax = 0.12565;
SetMotPrmNomEol.Arguments(2).Units = 'Ohm';
SetMotPrmNomEol.Arguments(2).Direction = 'In';
SetMotPrmNomEol.Arguments(2).InitRowCol = [1  1];
SetMotPrmNomEol.Arguments(2).Description = 'End of line Motor Parameter';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
MotPrmNom_GetErrorStatus = DataDict.Client;
MotPrmNom_GetErrorStatus.CallLocation = {'MotCtrlPrmEstimnInit1'};
MotPrmNom_GetErrorStatus.Description = 'Get Error Status';
MotPrmNom_GetErrorStatus.Return = DataDict.CSReturn;
MotPrmNom_GetErrorStatus.Return.Type = 'Standard';
MotPrmNom_GetErrorStatus.Return.Min = 0;
MotPrmNom_GetErrorStatus.Return.Max = 1;
MotPrmNom_GetErrorStatus.Return.TestTolerance = 0;
MotPrmNom_GetErrorStatus.Return.Description = 'Get Error Status';
MotPrmNom_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotPrmNom_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
MotPrmNom_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotPrmNom_GetErrorStatus.Arguments(1).EngMin = 0;
MotPrmNom_GetErrorStatus.Arguments(1).EngMax = 8;
MotPrmNom_GetErrorStatus.Arguments(1).TestTolerance = 999;
MotPrmNom_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotPrmNom_GetErrorStatus.Arguments(1).Direction = 'Out';
MotPrmNom_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
MotPrmNom_GetErrorStatus.Arguments(1).Description = 'Get Error Status';


MotPrmNom_SetRamBlockStatus = DataDict.Client;
MotPrmNom_SetRamBlockStatus.CallLocation = {'SetMotPrmNomEol'};
MotPrmNom_SetRamBlockStatus.Description = 'Ram Block Status';
MotPrmNom_SetRamBlockStatus.Return = DataDict.CSReturn;
MotPrmNom_SetRamBlockStatus.Return.Type = 'Standard';
MotPrmNom_SetRamBlockStatus.Return.Min = 0;
MotPrmNom_SetRamBlockStatus.Return.Max = 1;
MotPrmNom_SetRamBlockStatus.Return.TestTolerance = 0;
MotPrmNom_SetRamBlockStatus.Return.Description = 'Ram Block Status';
MotPrmNom_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotPrmNom_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotPrmNom_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotPrmNom_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotPrmNom_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotPrmNom_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotPrmNom_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotPrmNom_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MotPrmNom_SetRamBlockStatus.Arguments(1).Description = 'Ram Block Status';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DualEcuFltMtgtnEna = DataDict.IpSignal;
DualEcuFltMtgtnEna.LongName = 'Dual ECU Fault Mitigation Enable';
DualEcuFltMtgtnEna.Description = 'Dual ECU Fault Mitigation Enable';
DualEcuFltMtgtnEna.DocUnits = 'Cnt';
DualEcuFltMtgtnEna.EngDT = dt.lgc;
DualEcuFltMtgtnEna.EngInit = 0;
DualEcuFltMtgtnEna.EngMin = 0;
DualEcuFltMtgtnEna.EngMax = 1;
DualEcuFltMtgtnEna.ReadIn = {'MotCtrlPrmEstimnPer1'};
DualEcuFltMtgtnEna.ReadType = 'Rte';


MotAndThermProtnLoaMod = DataDict.IpSignal;
MotAndThermProtnLoaMod.LongName = 'Motor And Thermal Protection Loss of Assist Mode';
MotAndThermProtnLoaMod.Description = [...
  'Motor And Thermal Protection Loss of Assist Mode signal is being gener' ...
  'ated by Loss of Assist Manager function.'];
MotAndThermProtnLoaMod.DocUnits = 'Cnt';
MotAndThermProtnLoaMod.EngDT = dt.u08;
MotAndThermProtnLoaMod.EngInit = 0;
MotAndThermProtnLoaMod.EngMin = 0;
MotAndThermProtnLoaMod.EngMax = 255;
MotAndThermProtnLoaMod.ReadIn = {'MotCtrlPrmEstimnPer1'};
MotAndThermProtnLoaMod.ReadType = 'Rte';


MotCurrDaxCmd = DataDict.IpSignal;
MotCurrDaxCmd.LongName = 'Motor Current D-Axis Command';
MotCurrDaxCmd.Description = 'Motor Current D-Axis Command';
MotCurrDaxCmd.DocUnits = 'Ampr';
MotCurrDaxCmd.EngDT = dt.float32;
MotCurrDaxCmd.EngInit = 0;
MotCurrDaxCmd.EngMin = 0;
MotCurrDaxCmd.EngMax = 200;
MotCurrDaxCmd.ReadIn = {'MotCtrlPrmEstimnPer1'};
MotCurrDaxCmd.ReadType = 'Rte';


MotCurrQaxCmd = DataDict.IpSignal;
MotCurrQaxCmd.LongName = 'Motor Current Q-Axis Command';
MotCurrQaxCmd.Description = 'Motor Current Q-Axis Command';
MotCurrQaxCmd.DocUnits = 'Ampr';
MotCurrQaxCmd.EngDT = dt.float32;
MotCurrQaxCmd.EngInit = 0;
MotCurrQaxCmd.EngMin = -200;
MotCurrQaxCmd.EngMax = 200;
MotCurrQaxCmd.ReadIn = {'MotCtrlPrmEstimnPer1'};
MotCurrQaxCmd.ReadType = 'Rte';


MotFetT = DataDict.IpSignal;
MotFetT.LongName = 'Motor Fet Temprature';
MotFetT.Description = 'Motor Fet Temprature';
MotFetT.DocUnits = 'DegCgrd';
MotFetT.EngDT = dt.float32;
MotFetT.EngInit = 0;
MotFetT.EngMin = -50;
MotFetT.EngMax = 200;
MotFetT.ReadIn = {'MotCtrlPrmEstimnPer2'};
MotFetT.ReadType = 'Rte';


MotMagT = DataDict.IpSignal;
MotMagT.LongName = 'Motor Magnet Temprature';
MotMagT.Description = 'Motor Magnet Temprature';
MotMagT.DocUnits = 'DegCgrd';
MotMagT.EngDT = dt.float32;
MotMagT.EngInit = 0;
MotMagT.EngMin = -50;
MotMagT.EngMax = 150;
MotMagT.ReadIn = {'MotCtrlPrmEstimnPer2'};
MotMagT.ReadType = 'Rte';


MotWidgT = DataDict.IpSignal;
MotWidgT.LongName = 'Motor Winding Temprature';
MotWidgT.Description = 'Motor Winding Temprature';
MotWidgT.DocUnits = 'DegCgrd';
MotWidgT.EngDT = dt.float32;
MotWidgT.EngInit = 0;
MotWidgT.EngMin = -50;
MotWidgT.EngMax = 300;
MotWidgT.ReadIn = {'MotCtrlPrmEstimnPer2'};
MotWidgT.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotBackEmfConEstimd = DataDict.OpSignal;
MotBackEmfConEstimd.LongName = 'Motor Back EMF Constant Estimated';
MotBackEmfConEstimd.Description = 'Estimated motor back emf constant.';
MotBackEmfConEstimd.DocUnits = 'VoltPerMotRadPerSec';
MotBackEmfConEstimd.SwcShoName = 'MotCtrlPrmEstimn';
MotBackEmfConEstimd.EngDT = dt.float32;
MotBackEmfConEstimd.EngInit = 0.025;
MotBackEmfConEstimd.EngMin = 0.025;
MotBackEmfConEstimd.EngMax = 0.075;
MotBackEmfConEstimd.TestTolerance = 0.001;
MotBackEmfConEstimd.WrittenIn = {'MotCtrlPrmEstimnInit1','MotCtrlPrmEstimnPer1'};
MotBackEmfConEstimd.WriteType = 'Rte';


MotInduDaxEstimd = DataDict.OpSignal;
MotInduDaxEstimd.LongName = 'Motor Inductance Dax Estimated';
MotInduDaxEstimd.Description = [...
  'Estimated motor inductance in the D-Axis.'];
MotInduDaxEstimd.DocUnits = 'Henry';
MotInduDaxEstimd.SwcShoName = 'MotCtrlPrmEstimn';
MotInduDaxEstimd.EngDT = dt.float32;
MotInduDaxEstimd.EngInit = 0.00011889;
MotInduDaxEstimd.EngMin = 3e-05;
MotInduDaxEstimd.EngMax = 0.00041;
MotInduDaxEstimd.TestTolerance = 1e-07;
MotInduDaxEstimd.WrittenIn = {'MotCtrlPrmEstimnInit1','MotCtrlPrmEstimnPer1'};
MotInduDaxEstimd.WriteType = 'Rte';


MotInduDaxEstimdIvs = DataDict.OpSignal;
MotInduDaxEstimdIvs.LongName = 'Motor Inductance Dax Estimated Inverse';
MotInduDaxEstimdIvs.Description = [...
  'Inverse of Estimated motor inductance in the D-Axis.'];
MotInduDaxEstimdIvs.DocUnits = 'IvsHenry';
MotInduDaxEstimdIvs.SwcShoName = 'MotCtrlPrmEstimn';
MotInduDaxEstimdIvs.EngDT = dt.float32;
MotInduDaxEstimdIvs.EngInit = 8412;
MotInduDaxEstimdIvs.EngMin = 2440;
MotInduDaxEstimdIvs.EngMax = 33334;
MotInduDaxEstimdIvs.TestTolerance = 1e-06;
MotInduDaxEstimdIvs.WrittenIn = {'MotCtrlPrmEstimnPer1'};
MotInduDaxEstimdIvs.WriteType = 'Rte';


MotInduQaxEstimd = DataDict.OpSignal;
MotInduQaxEstimd.LongName = 'Motor Inductance Qax Estimated';
MotInduQaxEstimd.Description = [...
  'Estimated motor inductance in the Q-Axis.'];
MotInduQaxEstimd.DocUnits = 'Henry';
MotInduQaxEstimd.SwcShoName = 'MotCtrlPrmEstimn';
MotInduQaxEstimd.EngDT = dt.float32;
MotInduQaxEstimd.EngInit = 0.00011889;
MotInduQaxEstimd.EngMin = 3e-05;
MotInduQaxEstimd.EngMax = 0.00041;
MotInduQaxEstimd.TestTolerance = 1e-07;
MotInduQaxEstimd.WrittenIn = {'MotCtrlPrmEstimnInit1','MotCtrlPrmEstimnPer1'};
MotInduQaxEstimd.WriteType = 'Rte';


MotInduQaxEstimdIvs = DataDict.OpSignal;
MotInduQaxEstimdIvs.LongName = 'Motor Inductance Qax Estimated Inverse';
MotInduQaxEstimdIvs.Description = [...
  'Inverse of Estimated motor inductance in the Q-Axis.'];
MotInduQaxEstimdIvs.DocUnits = 'IvsHenry';
MotInduQaxEstimdIvs.SwcShoName = 'MotCtrlPrmEstimn';
MotInduQaxEstimdIvs.EngDT = dt.float32;
MotInduQaxEstimdIvs.EngInit = 8412;
MotInduQaxEstimdIvs.EngMin = 2440;
MotInduQaxEstimdIvs.EngMax = 33334;
MotInduQaxEstimdIvs.TestTolerance = 1e-06;
MotInduQaxEstimdIvs.WrittenIn = {'MotCtrlPrmEstimnPer1'};
MotInduQaxEstimdIvs.WriteType = 'Rte';


MotREstimd = DataDict.OpSignal;
MotREstimd.LongName = 'Motor Resistance Estimated';
MotREstimd.Description = 'Estimated Total Motor Resistance ';
MotREstimd.DocUnits = 'Ohm';
MotREstimd.SwcShoName = 'MotCtrlPrmEstimn';
MotREstimd.EngDT = dt.float32;
MotREstimd.EngInit = 0.005;
MotREstimd.EngMin = 0.005;
MotREstimd.EngMax = 0.12565;
MotREstimd.TestTolerance = 0.001;
MotREstimd.WrittenIn = {'MotCtrlPrmEstimnInit1','MotCtrlPrmEstimnPer2'};
MotREstimd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
MotBackEmfConFf = DataDict.IRV;
MotBackEmfConFf.LongName = 'Feedforward Motor Back EMF Constant';
MotBackEmfConFf.Description = [...
  'Feedforward estimate of the motor back emf constant'];
MotBackEmfConFf.DocUnits = 'VoltPerMotRadPerSec';
MotBackEmfConFf.EngDT = dt.float32;
MotBackEmfConFf.EngInit = 0.03993;
MotBackEmfConFf.EngMin = 0.025;
MotBackEmfConFf.EngMax = 0.075;
MotBackEmfConFf.ReadIn = {'MotCtrlPrmEstimnPer1'};
MotBackEmfConFf.WrittenIn = {'MotCtrlPrmEstimnPer2'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotCtrlPrmEstimnFetRNom = DataDict.Calibration;
MotCtrlPrmEstimnFetRNom.LongName = 'Motor Control Parameter Estimation Fet Resistance Nominal';
MotCtrlPrmEstimnFetRNom.Description = [...
  'Nominal Rfet Value: Control module output resistance.'];
MotCtrlPrmEstimnFetRNom.DocUnits = 'Ohm';
MotCtrlPrmEstimnFetRNom.EngDT = dt.float32;
MotCtrlPrmEstimnFetRNom.EngVal = 0.0052;
MotCtrlPrmEstimnFetRNom.EngMin = 0;
MotCtrlPrmEstimnFetRNom.EngMax = 0.1;
MotCtrlPrmEstimnFetRNom.Cardinality = 'Cmn';
MotCtrlPrmEstimnFetRNom.CustomerVisible = false;
MotCtrlPrmEstimnFetRNom.Online = false;
MotCtrlPrmEstimnFetRNom.Impact = 'H';
MotCtrlPrmEstimnFetRNom.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnFetRNom.GraphLink = {''};
MotCtrlPrmEstimnFetRNom.Monotony = 'None';
MotCtrlPrmEstimnFetRNom.MaxGrad = 0;
MotCtrlPrmEstimnFetRNom.PortName = 'MotCtrlPrmEstimnFetRNom';


MotCtrlPrmEstimnFetThermCoeff = DataDict.Calibration;
MotCtrlPrmEstimnFetThermCoeff.LongName = 'Fet Thermal Coefficient';
MotCtrlPrmEstimnFetThermCoeff.Description = [...
  'Thermal coefficient of the resistivity of silicon.'];
MotCtrlPrmEstimnFetThermCoeff.DocUnits = 'OhmPerDegCgrd';
MotCtrlPrmEstimnFetThermCoeff.EngDT = dt.float32;
MotCtrlPrmEstimnFetThermCoeff.EngVal = 0.005;
MotCtrlPrmEstimnFetThermCoeff.EngMin = 0;
MotCtrlPrmEstimnFetThermCoeff.EngMax = 0.006;
MotCtrlPrmEstimnFetThermCoeff.Cardinality = 'Cmn';
MotCtrlPrmEstimnFetThermCoeff.CustomerVisible = false;
MotCtrlPrmEstimnFetThermCoeff.Online = false;
MotCtrlPrmEstimnFetThermCoeff.Impact = 'H';
MotCtrlPrmEstimnFetThermCoeff.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnFetThermCoeff.GraphLink = {''};
MotCtrlPrmEstimnFetThermCoeff.Monotony = 'None';
MotCtrlPrmEstimnFetThermCoeff.MaxGrad = 0;
MotCtrlPrmEstimnFetThermCoeff.PortName = 'MotCtrlPrmEstimnFetThermCoeff';


MotCtrlPrmEstimnMagThermCoeff = DataDict.Calibration;
MotCtrlPrmEstimnMagThermCoeff.LongName = 'Magnet Thermal Coefficient';
MotCtrlPrmEstimnMagThermCoeff.Description = [...
  'Thermal coefficient of the motor voltage constant Ke (always negative)' ...
  ''];
MotCtrlPrmEstimnMagThermCoeff.DocUnits = 'VoltPerMotRadPerSecPerDegCgrd';
MotCtrlPrmEstimnMagThermCoeff.EngDT = dt.float32;
MotCtrlPrmEstimnMagThermCoeff.EngVal = -0.001;
MotCtrlPrmEstimnMagThermCoeff.EngMin = -0.0015;
MotCtrlPrmEstimnMagThermCoeff.EngMax = 0;
MotCtrlPrmEstimnMagThermCoeff.Cardinality = 'Cmn';
MotCtrlPrmEstimnMagThermCoeff.CustomerVisible = false;
MotCtrlPrmEstimnMagThermCoeff.Online = false;
MotCtrlPrmEstimnMagThermCoeff.Impact = 'H';
MotCtrlPrmEstimnMagThermCoeff.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMagThermCoeff.GraphLink = {''};
MotCtrlPrmEstimnMagThermCoeff.Monotony = 'None';
MotCtrlPrmEstimnMagThermCoeff.MaxGrad = 0;
MotCtrlPrmEstimnMagThermCoeff.PortName = 'MotCtrlPrmEstimnMagThermCoeff';


MotCtrlPrmEstimnMotBackEmfConHiLim = DataDict.Calibration;
MotCtrlPrmEstimnMotBackEmfConHiLim.LongName = 'Motor Back Emf Constant High Limit';
MotCtrlPrmEstimnMotBackEmfConHiLim.Description = [...
  'Upper Limit for the estimate of the motor back emf constant.'];
MotCtrlPrmEstimnMotBackEmfConHiLim.DocUnits = 'VoltPerMotRadPerSec';
MotCtrlPrmEstimnMotBackEmfConHiLim.EngDT = dt.float32;
MotCtrlPrmEstimnMotBackEmfConHiLim.EngVal = 0.045;
MotCtrlPrmEstimnMotBackEmfConHiLim.EngMin = 0.025;
MotCtrlPrmEstimnMotBackEmfConHiLim.EngMax = 0.075;
MotCtrlPrmEstimnMotBackEmfConHiLim.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotBackEmfConHiLim.CustomerVisible = false;
MotCtrlPrmEstimnMotBackEmfConHiLim.Online = false;
MotCtrlPrmEstimnMotBackEmfConHiLim.Impact = 'H';
MotCtrlPrmEstimnMotBackEmfConHiLim.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotBackEmfConHiLim.GraphLink = {''};
MotCtrlPrmEstimnMotBackEmfConHiLim.Monotony = 'None';
MotCtrlPrmEstimnMotBackEmfConHiLim.MaxGrad = 0;
MotCtrlPrmEstimnMotBackEmfConHiLim.PortName = 'MotCtrlPrmEstimnMotBackEmfConHiLim';


MotCtrlPrmEstimnMotBackEmfConLoLim = DataDict.Calibration;
MotCtrlPrmEstimnMotBackEmfConLoLim.LongName = 'Motor Back Emf Constant Low Limit';
MotCtrlPrmEstimnMotBackEmfConLoLim.Description = [...
  'Lower Limit for the estimate of the motor back emf constant.'];
MotCtrlPrmEstimnMotBackEmfConLoLim.DocUnits = 'VoltPerMotRadPerSec';
MotCtrlPrmEstimnMotBackEmfConLoLim.EngDT = dt.float32;
MotCtrlPrmEstimnMotBackEmfConLoLim.EngVal = 0.031;
MotCtrlPrmEstimnMotBackEmfConLoLim.EngMin = 0.025;
MotCtrlPrmEstimnMotBackEmfConLoLim.EngMax = 0.075;
MotCtrlPrmEstimnMotBackEmfConLoLim.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotBackEmfConLoLim.CustomerVisible = false;
MotCtrlPrmEstimnMotBackEmfConLoLim.Online = false;
MotCtrlPrmEstimnMotBackEmfConLoLim.Impact = 'H';
MotCtrlPrmEstimnMotBackEmfConLoLim.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotBackEmfConLoLim.GraphLink = {''};
MotCtrlPrmEstimnMotBackEmfConLoLim.Monotony = 'None';
MotCtrlPrmEstimnMotBackEmfConLoLim.MaxGrad = 0;
MotCtrlPrmEstimnMotBackEmfConLoLim.PortName = 'MotCtrlPrmEstimnMotBackEmfConLoLim';


MotCtrlPrmEstimnMotBackEmfConNom = DataDict.Calibration;
MotCtrlPrmEstimnMotBackEmfConNom.LongName = 'Motor Back EMF Constant Nominal';
MotCtrlPrmEstimnMotBackEmfConNom.Description = [...
  'Nominal Ke Value:  Motor Voltage Constant – Unit Specific loaded from ' ...
  'motor barcode at EOL.'];
MotCtrlPrmEstimnMotBackEmfConNom.DocUnits = 'VoltPerMotRadPerSec';
MotCtrlPrmEstimnMotBackEmfConNom.EngDT = dt.float32;
MotCtrlPrmEstimnMotBackEmfConNom.EngVal = 0.04;
MotCtrlPrmEstimnMotBackEmfConNom.EngMin = 0.025;
MotCtrlPrmEstimnMotBackEmfConNom.EngMax = 0.075;
MotCtrlPrmEstimnMotBackEmfConNom.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotBackEmfConNom.CustomerVisible = false;
MotCtrlPrmEstimnMotBackEmfConNom.Online = false;
MotCtrlPrmEstimnMotBackEmfConNom.Impact = 'H';
MotCtrlPrmEstimnMotBackEmfConNom.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotBackEmfConNom.GraphLink = {''};
MotCtrlPrmEstimnMotBackEmfConNom.Monotony = 'None';
MotCtrlPrmEstimnMotBackEmfConNom.MaxGrad = 0;
MotCtrlPrmEstimnMotBackEmfConNom.PortName = 'MotCtrlPrmEstimnMotBackEmfConNom';


MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn = DataDict.Calibration;
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.LongName = 'Motor Control Parameter Estimation Motor Back EMF Constant Saturation Scale Inverter LOA Mitigation';
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.Description = [...
  'Scale factor for adjusting Ke saturation during single inverter operat' ...
  'ion'];
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.DocUnits = 'Uls';
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.EngDT = dt.float32;
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.EngVal = 1;
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.EngMin = 0;
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.EngMax = 2;
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.CustomerVisible = false;
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.Online = false;
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.Impact = 'H';
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.GraphLink = {''};
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.Monotony = 'None';
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.MaxGrad = 0;
MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn.PortName = 'MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn';


MotCtrlPrmEstimnMotBackEmfConSatnX = DataDict.Calibration;
MotCtrlPrmEstimnMotBackEmfConSatnX.LongName = 'Motor Back Emf Constant Saturation X';
MotCtrlPrmEstimnMotBackEmfConSatnX.Description = [...
  'Ke Saturation Characteristic Unsigned Variable X, Variable Y Interpola' ...
  'ted Lookup table representing the change in motor constant Ke with sat' ...
  'uration.	Number of Points:  16 X Table:  Dependent variable - Expected' ...
  ' Iq Current Y Table:  Independent variable is a scale factor which sca' ...
  'les Ke for saturation effects.'];
MotCtrlPrmEstimnMotBackEmfConSatnX.DocUnits = 'Ampr';
MotCtrlPrmEstimnMotBackEmfConSatnX.EngDT = dt.u9p7;
MotCtrlPrmEstimnMotBackEmfConSatnX.EngVal =  ...
   [0               10               20               30               40               50               60               70               80               90              100              110              120              130              150              170];
MotCtrlPrmEstimnMotBackEmfConSatnX.EngMin = 0;
MotCtrlPrmEstimnMotBackEmfConSatnX.EngMax = 200;
MotCtrlPrmEstimnMotBackEmfConSatnX.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotBackEmfConSatnX.CustomerVisible = false;
MotCtrlPrmEstimnMotBackEmfConSatnX.Online = false;
MotCtrlPrmEstimnMotBackEmfConSatnX.Impact = 'H';
MotCtrlPrmEstimnMotBackEmfConSatnX.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotBackEmfConSatnX.GraphLink = {''};
MotCtrlPrmEstimnMotBackEmfConSatnX.Monotony = 'Increasing';
MotCtrlPrmEstimnMotBackEmfConSatnX.MaxGrad = 0.0078125;
MotCtrlPrmEstimnMotBackEmfConSatnX.PortName = 'MotCtrlPrmEstimnMotBackEmfConSatnX';


MotCtrlPrmEstimnMotBackEmfConSatnY = DataDict.Calibration;
MotCtrlPrmEstimnMotBackEmfConSatnY.LongName = 'Motor Back Emf Constant Saturation Y';
MotCtrlPrmEstimnMotBackEmfConSatnY.Description = [...
  'Ke Saturation Characteristic Unsigned Variable X, Variable Y Interpola' ...
  'ted Lookup table representing the change in motor constant Ke with sat' ...
  'uration.	Number of Points:  16 X Table:  Dependent variable - Expected' ...
  ' Iq Current Y Table:  Independent variable is a scale factor which sca' ...
  'les Ke for saturation effects.'];
MotCtrlPrmEstimnMotBackEmfConSatnY.DocUnits = 'Uls';
MotCtrlPrmEstimnMotBackEmfConSatnY.EngDT = dt.u2p14;
MotCtrlPrmEstimnMotBackEmfConSatnY.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                1                1         0.999145          0.99707         0.993408          0.98236         0.968566];
MotCtrlPrmEstimnMotBackEmfConSatnY.EngMin = 0;
MotCtrlPrmEstimnMotBackEmfConSatnY.EngMax = 2;
MotCtrlPrmEstimnMotBackEmfConSatnY.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotBackEmfConSatnY.CustomerVisible = false;
MotCtrlPrmEstimnMotBackEmfConSatnY.Online = false;
MotCtrlPrmEstimnMotBackEmfConSatnY.Impact = 'H';
MotCtrlPrmEstimnMotBackEmfConSatnY.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotBackEmfConSatnY.GraphLink = {'MotCtrlPrmEstimnMotBackEmfConSatnX'};
MotCtrlPrmEstimnMotBackEmfConSatnY.Monotony = 'None';
MotCtrlPrmEstimnMotBackEmfConSatnY.MaxGrad = 6.103515625e-05;
MotCtrlPrmEstimnMotBackEmfConSatnY.PortName = 'MotCtrlPrmEstimnMotBackEmfConSatnY';


MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln = DataDict.Calibration;
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.LongName = 'Motor Current D-Axis Inductance Saturation Bilinear Selection';
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.Description = [...
  'nterpolated Lookup table representing the change in d-axis motor induc' ...
  'tance Ld with saturation'];
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.DocUnits = 'Ampr';
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.EngDT = dt.u9p7;
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.EngVal =  ...
   [0               25               50               75              100              125];
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.EngMin = 0;
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.EngMax = 200;
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.CustomerVisible = false;
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.Online = false;
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.Impact = 'H';
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.GraphLink = {''};
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.Monotony = 'Increasing';
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.MaxGrad = 0.001;
MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln.PortName = 'MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln';


MotCtrlPrmEstimnMotCurrQaxInduSatnX = DataDict.Calibration;
MotCtrlPrmEstimnMotCurrQaxInduSatnX.LongName = 'Motor Current Q-Axis Inductance Saturation X';
MotCtrlPrmEstimnMotCurrQaxInduSatnX.Description = [...
  'Independent variable – d-axis current'];
MotCtrlPrmEstimnMotCurrQaxInduSatnX.DocUnits = 'Ampr';
MotCtrlPrmEstimnMotCurrQaxInduSatnX.EngDT = dt.u9p7;
MotCtrlPrmEstimnMotCurrQaxInduSatnX.EngVal =  ...
   [0               25               50               75              100              125              150];
MotCtrlPrmEstimnMotCurrQaxInduSatnX.EngMin = 0;
MotCtrlPrmEstimnMotCurrQaxInduSatnX.EngMax = 200;
MotCtrlPrmEstimnMotCurrQaxInduSatnX.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotCurrQaxInduSatnX.CustomerVisible = false;
MotCtrlPrmEstimnMotCurrQaxInduSatnX.Online = false;
MotCtrlPrmEstimnMotCurrQaxInduSatnX.Impact = 'H';
MotCtrlPrmEstimnMotCurrQaxInduSatnX.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotCurrQaxInduSatnX.GraphLink = {''};
MotCtrlPrmEstimnMotCurrQaxInduSatnX.Monotony = 'Increasing';
MotCtrlPrmEstimnMotCurrQaxInduSatnX.MaxGrad = 0.001;
MotCtrlPrmEstimnMotCurrQaxInduSatnX.PortName = 'MotCtrlPrmEstimnMotCurrQaxInduSatnX';


MotCtrlPrmEstimnMotInduDaxHiLim = DataDict.Calibration;
MotCtrlPrmEstimnMotInduDaxHiLim.LongName = 'Motor Control Parameter Estimation Motor Inductance D-Axis High Limit';
MotCtrlPrmEstimnMotInduDaxHiLim.Description = [...
  '	Maximum Range Limit for Ld estimate'];
MotCtrlPrmEstimnMotInduDaxHiLim.DocUnits = 'Henry';
MotCtrlPrmEstimnMotInduDaxHiLim.EngDT = dt.float32;
MotCtrlPrmEstimnMotInduDaxHiLim.EngVal = 0.00013;
MotCtrlPrmEstimnMotInduDaxHiLim.EngMin = 3e-05;
MotCtrlPrmEstimnMotInduDaxHiLim.EngMax = 0.00041;
MotCtrlPrmEstimnMotInduDaxHiLim.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotInduDaxHiLim.CustomerVisible = false;
MotCtrlPrmEstimnMotInduDaxHiLim.Online = false;
MotCtrlPrmEstimnMotInduDaxHiLim.Impact = 'H';
MotCtrlPrmEstimnMotInduDaxHiLim.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotInduDaxHiLim.GraphLink = {''};
MotCtrlPrmEstimnMotInduDaxHiLim.Monotony = 'None';
MotCtrlPrmEstimnMotInduDaxHiLim.MaxGrad = 0;
MotCtrlPrmEstimnMotInduDaxHiLim.PortName = 'MotCtrlPrmEstimnMotInduDaxHiLim';


MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn = DataDict.Calibration;
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.LongName = 'Motor Control Parameter Estimation Motor Inductance D-Axis Inverter Loa Mitigation';
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.Description = [...
  '	Nominal d-axis motor inductance value during single inverter operatio' ...
  'n.  Motor design specific'];
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.DocUnits = 'Henry';
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.EngDT = dt.float32;
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.EngVal = 0.00013;
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.EngMin = 3e-05;
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.EngMax = 0.00041;
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.CustomerVisible = false;
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.Online = false;
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.Impact = 'H';
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.GraphLink = {''};
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.Monotony = 'None';
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.MaxGrad = 0;
MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn.PortName = 'MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn';


MotCtrlPrmEstimnMotInduDaxLoLim = DataDict.Calibration;
MotCtrlPrmEstimnMotInduDaxLoLim.LongName = 'Motor Control Parameter Estimation Motor Inductance D-Axis Low Limit';
MotCtrlPrmEstimnMotInduDaxLoLim.Description = [...
  '	Minimum Range Limit for Ld estimate'];
MotCtrlPrmEstimnMotInduDaxLoLim.DocUnits = 'Henry';
MotCtrlPrmEstimnMotInduDaxLoLim.EngDT = dt.float32;
MotCtrlPrmEstimnMotInduDaxLoLim.EngVal = 0.0001;
MotCtrlPrmEstimnMotInduDaxLoLim.EngMin = 3e-05;
MotCtrlPrmEstimnMotInduDaxLoLim.EngMax = 0.00041;
MotCtrlPrmEstimnMotInduDaxLoLim.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotInduDaxLoLim.CustomerVisible = false;
MotCtrlPrmEstimnMotInduDaxLoLim.Online = false;
MotCtrlPrmEstimnMotInduDaxLoLim.Impact = 'H';
MotCtrlPrmEstimnMotInduDaxLoLim.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotInduDaxLoLim.GraphLink = {''};
MotCtrlPrmEstimnMotInduDaxLoLim.Monotony = 'None';
MotCtrlPrmEstimnMotInduDaxLoLim.MaxGrad = 0;
MotCtrlPrmEstimnMotInduDaxLoLim.PortName = 'MotCtrlPrmEstimnMotInduDaxLoLim';


MotCtrlPrmEstimnMotInduDaxNom = DataDict.Calibration;
MotCtrlPrmEstimnMotInduDaxNom.LongName = 'Motor Inductance D-Axis Nominal';
MotCtrlPrmEstimnMotInduDaxNom.Description = [...
  '	Nominal Ld Value:  d-axis motor inductance value.  Motor design speci' ...
  'fic'];
MotCtrlPrmEstimnMotInduDaxNom.DocUnits = 'Henry';
MotCtrlPrmEstimnMotInduDaxNom.EngDT = dt.float32;
MotCtrlPrmEstimnMotInduDaxNom.EngVal = 0.00011889;
MotCtrlPrmEstimnMotInduDaxNom.EngMin = 3e-05;
MotCtrlPrmEstimnMotInduDaxNom.EngMax = 0.00041;
MotCtrlPrmEstimnMotInduDaxNom.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotInduDaxNom.CustomerVisible = false;
MotCtrlPrmEstimnMotInduDaxNom.Online = false;
MotCtrlPrmEstimnMotInduDaxNom.Impact = 'H';
MotCtrlPrmEstimnMotInduDaxNom.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotInduDaxNom.GraphLink = {''};
MotCtrlPrmEstimnMotInduDaxNom.Monotony = 'None';
MotCtrlPrmEstimnMotInduDaxNom.MaxGrad = 0;
MotCtrlPrmEstimnMotInduDaxNom.PortName = 'MotCtrlPrmEstimnMotInduDaxNom';


MotCtrlPrmEstimnMotInduDaxSatnScaY = DataDict.Calibration;
MotCtrlPrmEstimnMotInduDaxSatnScaY.LongName = 'Motor Control Parameter Estimation Motor Inductance D-Axis Saturation Scale Y';
MotCtrlPrmEstimnMotInduDaxSatnScaY.Description = [...
  'Independent variable – q-axis current'];
MotCtrlPrmEstimnMotInduDaxSatnScaY.DocUnits = 'Uls';
MotCtrlPrmEstimnMotInduDaxSatnScaY.EngDT = dt.u2p14;
MotCtrlPrmEstimnMotInduDaxSatnScaY.EngVal =  ...
   [1                1                1                1                1           0.9952           0.9824
    1                1                1                1                1           0.9952           0.9824
    1                1                1                1                1           0.9952           0.9824
    1                1                1                1                1           0.9952           0.9824
    1                1                1                1                1           0.9952           0.9824
    1                1                1                1                1           0.9952           0.9824];
MotCtrlPrmEstimnMotInduDaxSatnScaY.EngMin = 0;
MotCtrlPrmEstimnMotInduDaxSatnScaY.EngMax = 2;
MotCtrlPrmEstimnMotInduDaxSatnScaY.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotInduDaxSatnScaY.CustomerVisible = false;
MotCtrlPrmEstimnMotInduDaxSatnScaY.Online = false;
MotCtrlPrmEstimnMotInduDaxSatnScaY.Impact = 'H';
MotCtrlPrmEstimnMotInduDaxSatnScaY.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotInduDaxSatnScaY.GraphLink = {'MotCtrlPrmEstimnMotCurrQaxInduSatnX','MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln'};
MotCtrlPrmEstimnMotInduDaxSatnScaY.Monotony = 'None';
MotCtrlPrmEstimnMotInduDaxSatnScaY.MaxGrad = 6.1e-05;
MotCtrlPrmEstimnMotInduDaxSatnScaY.PortName = 'MotCtrlPrmEstimnMotInduDaxSatnScaY';


MotCtrlPrmEstimnMotInduQaxHiLim = DataDict.Calibration;
MotCtrlPrmEstimnMotInduQaxHiLim.LongName = 'Motor Control Parameter Estimation Motor Inductance Q-Axis High Limit';
MotCtrlPrmEstimnMotInduQaxHiLim.Description = [...
  '	Maximum Range Limit for Lq estimate'];
MotCtrlPrmEstimnMotInduQaxHiLim.DocUnits = 'Henry';
MotCtrlPrmEstimnMotInduQaxHiLim.EngDT = dt.float32;
MotCtrlPrmEstimnMotInduQaxHiLim.EngVal = 0.00013;
MotCtrlPrmEstimnMotInduQaxHiLim.EngMin = 3e-05;
MotCtrlPrmEstimnMotInduQaxHiLim.EngMax = 0.00041;
MotCtrlPrmEstimnMotInduQaxHiLim.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotInduQaxHiLim.CustomerVisible = false;
MotCtrlPrmEstimnMotInduQaxHiLim.Online = false;
MotCtrlPrmEstimnMotInduQaxHiLim.Impact = 'H';
MotCtrlPrmEstimnMotInduQaxHiLim.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotInduQaxHiLim.GraphLink = {''};
MotCtrlPrmEstimnMotInduQaxHiLim.Monotony = 'None';
MotCtrlPrmEstimnMotInduQaxHiLim.MaxGrad = 0;
MotCtrlPrmEstimnMotInduQaxHiLim.PortName = 'MotCtrlPrmEstimnMotInduQaxHiLim';


MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn = DataDict.Calibration;
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.LongName = 'Q-Axis Motor Inductance Inverter Loa Mitigation';
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.Description = [...
  '	Nominal q-axis motor inductance value during single inverter operatio' ...
  'n.  Motor design specific'];
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.DocUnits = 'Henry';
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.EngDT = dt.float32;
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.EngVal = 0.00013;
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.EngMin = 3e-05;
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.EngMax = 0.00041;
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.CustomerVisible = false;
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.Online = false;
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.Impact = 'H';
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.GraphLink = {''};
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.Monotony = 'None';
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.MaxGrad = 0;
MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn.PortName = 'MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn';


MotCtrlPrmEstimnMotInduQaxLoLim = DataDict.Calibration;
MotCtrlPrmEstimnMotInduQaxLoLim.LongName = 'Motor Control Parameter Estimation Motor Inductance Q-Axis Low Limit';
MotCtrlPrmEstimnMotInduQaxLoLim.Description = [...
  '	Minimum Range Limit for Lq estimate'];
MotCtrlPrmEstimnMotInduQaxLoLim.DocUnits = 'Henry';
MotCtrlPrmEstimnMotInduQaxLoLim.EngDT = dt.float32;
MotCtrlPrmEstimnMotInduQaxLoLim.EngVal = 0.0001;
MotCtrlPrmEstimnMotInduQaxLoLim.EngMin = 3e-05;
MotCtrlPrmEstimnMotInduQaxLoLim.EngMax = 0.00041;
MotCtrlPrmEstimnMotInduQaxLoLim.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotInduQaxLoLim.CustomerVisible = false;
MotCtrlPrmEstimnMotInduQaxLoLim.Online = false;
MotCtrlPrmEstimnMotInduQaxLoLim.Impact = 'H';
MotCtrlPrmEstimnMotInduQaxLoLim.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotInduQaxLoLim.GraphLink = {''};
MotCtrlPrmEstimnMotInduQaxLoLim.Monotony = 'None';
MotCtrlPrmEstimnMotInduQaxLoLim.MaxGrad = 0;
MotCtrlPrmEstimnMotInduQaxLoLim.PortName = 'MotCtrlPrmEstimnMotInduQaxLoLim';


MotCtrlPrmEstimnMotInduQaxNom = DataDict.Calibration;
MotCtrlPrmEstimnMotInduQaxNom.LongName = 'Motor Control Parameter Estimation Motor Inductance Q-Axis Nominal';
MotCtrlPrmEstimnMotInduQaxNom.Description = [...
  '	Nominal Lq Value:  q-axis motor inductance value.  Motor design speci' ...
  'fic'];
MotCtrlPrmEstimnMotInduQaxNom.DocUnits = 'Henry';
MotCtrlPrmEstimnMotInduQaxNom.EngDT = dt.float32;
MotCtrlPrmEstimnMotInduQaxNom.EngVal = 0.00011889;
MotCtrlPrmEstimnMotInduQaxNom.EngMin = 3e-05;
MotCtrlPrmEstimnMotInduQaxNom.EngMax = 0.00041;
MotCtrlPrmEstimnMotInduQaxNom.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotInduQaxNom.CustomerVisible = false;
MotCtrlPrmEstimnMotInduQaxNom.Online = false;
MotCtrlPrmEstimnMotInduQaxNom.Impact = 'H';
MotCtrlPrmEstimnMotInduQaxNom.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotInduQaxNom.GraphLink = {''};
MotCtrlPrmEstimnMotInduQaxNom.Monotony = 'None';
MotCtrlPrmEstimnMotInduQaxNom.MaxGrad = 0;
MotCtrlPrmEstimnMotInduQaxNom.PortName = 'MotCtrlPrmEstimnMotInduQaxNom';


MotCtrlPrmEstimnMotInduQaxSatnScaY = DataDict.Calibration;
MotCtrlPrmEstimnMotInduQaxSatnScaY.LongName = 'Motor Control Parameter Estimation Motor Inductance Q-Axis Saturation Scale Y';
MotCtrlPrmEstimnMotInduQaxSatnScaY.Description = [...
  'Independent variable – q-axis current'];
MotCtrlPrmEstimnMotInduQaxSatnScaY.DocUnits = 'Uls';
MotCtrlPrmEstimnMotInduQaxSatnScaY.EngDT = dt.u2p14;
MotCtrlPrmEstimnMotInduQaxSatnScaY.EngVal =  ...
   [1                1                1                1                1           0.9952           0.9824
    1                1                1                1                1           0.9952           0.9824
    1                1                1                1                1           0.9952           0.9824
    1                1                1                1                1           0.9952           0.9824
    1                1                1                1                1           0.9952           0.9824
    1                1                1                1                1           0.9952           0.9824];
MotCtrlPrmEstimnMotInduQaxSatnScaY.EngMin = 0;
MotCtrlPrmEstimnMotInduQaxSatnScaY.EngMax = 2;
MotCtrlPrmEstimnMotInduQaxSatnScaY.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotInduQaxSatnScaY.CustomerVisible = false;
MotCtrlPrmEstimnMotInduQaxSatnScaY.Online = false;
MotCtrlPrmEstimnMotInduQaxSatnScaY.Impact = 'H';
MotCtrlPrmEstimnMotInduQaxSatnScaY.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotInduQaxSatnScaY.GraphLink = {'MotCtrlPrmEstimnMotCurrQaxInduSatnX','MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln'};
MotCtrlPrmEstimnMotInduQaxSatnScaY.Monotony = 'None';
MotCtrlPrmEstimnMotInduQaxSatnScaY.MaxGrad = 6.1e-05;
MotCtrlPrmEstimnMotInduQaxSatnScaY.PortName = 'MotCtrlPrmEstimnMotInduQaxSatnScaY';


MotCtrlPrmEstimnMotRHiLim = DataDict.Calibration;
MotCtrlPrmEstimnMotRHiLim.LongName = 'Motor Resistance High Limit';
MotCtrlPrmEstimnMotRHiLim.Description = [...
  'Max Range Limit for resistance estimate'];
MotCtrlPrmEstimnMotRHiLim.DocUnits = 'Ohm';
MotCtrlPrmEstimnMotRHiLim.EngDT = dt.float32;
MotCtrlPrmEstimnMotRHiLim.EngVal = 0.032;
MotCtrlPrmEstimnMotRHiLim.EngMin = 0.005;
MotCtrlPrmEstimnMotRHiLim.EngMax = 0.12565;
MotCtrlPrmEstimnMotRHiLim.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotRHiLim.CustomerVisible = false;
MotCtrlPrmEstimnMotRHiLim.Online = false;
MotCtrlPrmEstimnMotRHiLim.Impact = 'H';
MotCtrlPrmEstimnMotRHiLim.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotRHiLim.GraphLink = {''};
MotCtrlPrmEstimnMotRHiLim.Monotony = 'None';
MotCtrlPrmEstimnMotRHiLim.MaxGrad = 0;
MotCtrlPrmEstimnMotRHiLim.PortName = 'MotCtrlPrmEstimnMotRHiLim';


MotCtrlPrmEstimnMotRLoLim = DataDict.Calibration;
MotCtrlPrmEstimnMotRLoLim.LongName = 'Motor Resistance Low Limit';
MotCtrlPrmEstimnMotRLoLim.Description = [...
  'Min Range Limit for resistance estimate'];
MotCtrlPrmEstimnMotRLoLim.DocUnits = 'Ohm';
MotCtrlPrmEstimnMotRLoLim.EngDT = dt.float32;
MotCtrlPrmEstimnMotRLoLim.EngVal = 0.01246;
MotCtrlPrmEstimnMotRLoLim.EngMin = 0.005;
MotCtrlPrmEstimnMotRLoLim.EngMax = 0.12565;
MotCtrlPrmEstimnMotRLoLim.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotRLoLim.CustomerVisible = false;
MotCtrlPrmEstimnMotRLoLim.Online = false;
MotCtrlPrmEstimnMotRLoLim.Impact = 'H';
MotCtrlPrmEstimnMotRLoLim.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotRLoLim.GraphLink = {''};
MotCtrlPrmEstimnMotRLoLim.Monotony = 'None';
MotCtrlPrmEstimnMotRLoLim.MaxGrad = 0;
MotCtrlPrmEstimnMotRLoLim.PortName = 'MotCtrlPrmEstimnMotRLoLim';


MotCtrlPrmEstimnMotRNom = DataDict.Calibration;
MotCtrlPrmEstimnMotRNom.LongName = 'Motor Resistance Nominal';
MotCtrlPrmEstimnMotRNom.Description = [...
  'Nominal Rm Value:  Motor line to line resistance – Unit Specific loade' ...
  'd from motor barcode at EOL.  '];
MotCtrlPrmEstimnMotRNom.DocUnits = 'Ohm';
MotCtrlPrmEstimnMotRNom.EngDT = dt.float32;
MotCtrlPrmEstimnMotRNom.EngVal = 0.0139;
MotCtrlPrmEstimnMotRNom.EngMin = 0.005;
MotCtrlPrmEstimnMotRNom.EngMax = 0.12565;
MotCtrlPrmEstimnMotRNom.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotRNom.CustomerVisible = false;
MotCtrlPrmEstimnMotRNom.Online = false;
MotCtrlPrmEstimnMotRNom.Impact = 'H';
MotCtrlPrmEstimnMotRNom.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotRNom.GraphLink = {''};
MotCtrlPrmEstimnMotRNom.Monotony = 'None';
MotCtrlPrmEstimnMotRNom.MaxGrad = 0;
MotCtrlPrmEstimnMotRNom.PortName = 'MotCtrlPrmEstimnMotRNom';


MotCtrlPrmEstimnMotWidgThermCoeff = DataDict.Calibration;
MotCtrlPrmEstimnMotWidgThermCoeff.LongName = 'Motor Winding Thermal Coefficient';
MotCtrlPrmEstimnMotWidgThermCoeff.Description = [...
  'Thermal Coefficient Copper: Thermal coefficient of the resistivity of ' ...
  'copper'];
MotCtrlPrmEstimnMotWidgThermCoeff.DocUnits = 'OhmPerDegCgrd';
MotCtrlPrmEstimnMotWidgThermCoeff.EngDT = dt.float32;
MotCtrlPrmEstimnMotWidgThermCoeff.EngVal = 0.0039;
MotCtrlPrmEstimnMotWidgThermCoeff.EngMin = 0;
MotCtrlPrmEstimnMotWidgThermCoeff.EngMax = 0.0045;
MotCtrlPrmEstimnMotWidgThermCoeff.Cardinality = 'Cmn';
MotCtrlPrmEstimnMotWidgThermCoeff.CustomerVisible = false;
MotCtrlPrmEstimnMotWidgThermCoeff.Online = false;
MotCtrlPrmEstimnMotWidgThermCoeff.Impact = 'H';
MotCtrlPrmEstimnMotWidgThermCoeff.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnMotWidgThermCoeff.GraphLink = {''};
MotCtrlPrmEstimnMotWidgThermCoeff.Monotony = 'None';
MotCtrlPrmEstimnMotWidgThermCoeff.MaxGrad = 0;
MotCtrlPrmEstimnMotWidgThermCoeff.PortName = 'MotCtrlPrmEstimnMotWidgThermCoeff';


MotCtrlPrmEstimnTNom = DataDict.Calibration;
MotCtrlPrmEstimnTNom.LongName = 'Temperature Nominal';
MotCtrlPrmEstimnTNom.Description = [...
  'Nominal Temperature Tnom: Temperature at which all nominal parameters ' ...
  'above are defined'];
MotCtrlPrmEstimnTNom.DocUnits = 'DegCgrd';
MotCtrlPrmEstimnTNom.EngDT = dt.float32;
MotCtrlPrmEstimnTNom.EngVal = 25;
MotCtrlPrmEstimnTNom.EngMin = -40;
MotCtrlPrmEstimnTNom.EngMax = 150;
MotCtrlPrmEstimnTNom.Cardinality = 'Cmn';
MotCtrlPrmEstimnTNom.CustomerVisible = false;
MotCtrlPrmEstimnTNom.Online = false;
MotCtrlPrmEstimnTNom.Impact = 'H';
MotCtrlPrmEstimnTNom.TuningOwner = 'TqCtrl';
MotCtrlPrmEstimnTNom.GraphLink = {''};
MotCtrlPrmEstimnTNom.Monotony = 'None';
MotCtrlPrmEstimnTNom.MaxGrad = 0;
MotCtrlPrmEstimnTNom.PortName = 'MotCtrlPrmEstimnTNom';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
MotPrmNom = DataDict.NVM;
MotPrmNom.LongName = 'Nominal Motor Parameters';
MotPrmNom.Description = 'Stored motor parameters.';
MotPrmNom.DocUnits = 'Cnt';
MotPrmNom.EngDT = struct.MotPrmNomEolRec3;
MotPrmNom.EngInit = [struct('MotBackEmfConNom',0.025,'MotRNom',0.005)];
MotPrmNom.EngMin = [struct('MotBackEmfConNom',0.025,'MotRNom',0.005)];
MotPrmNom.EngMax = [struct('MotBackEmfConNom',0.075,'MotRNom',0.12565)];
MotPrmNom.CustomerVisible = false;
MotPrmNom.Impact = 'H';
MotPrmNom.TuningOwner = 'TqCtrl';
MotPrmNom.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotCtrlPrmEstimnCtrlrREstimdPreLim = DataDict.Display;
dMotCtrlPrmEstimnCtrlrREstimdPreLim.LongName = 'Controller Resistance Estimated Pre-Limit';
dMotCtrlPrmEstimnCtrlrREstimdPreLim.Description = [...
  'Estimated controller resistance before limiting'];
dMotCtrlPrmEstimnCtrlrREstimdPreLim.DocUnits = 'Ohm';
dMotCtrlPrmEstimnCtrlrREstimdPreLim.EngDT = dt.float32;
dMotCtrlPrmEstimnCtrlrREstimdPreLim.EngMin = 0.005;
dMotCtrlPrmEstimnCtrlrREstimdPreLim.EngMax = 0.12565;
dMotCtrlPrmEstimnCtrlrREstimdPreLim.InitRowCol = [1  1];


dMotCtrlPrmEstimnFetRFfEstimd = DataDict.Display;
dMotCtrlPrmEstimnFetRFfEstimd.LongName = 'FET Resistance Feedforward Estimated';
dMotCtrlPrmEstimnFetRFfEstimd.Description = [...
  'Estimated Feedforward FET Resistance'];
dMotCtrlPrmEstimnFetRFfEstimd.DocUnits = 'Ohm';
dMotCtrlPrmEstimnFetRFfEstimd.EngDT = dt.float32;
dMotCtrlPrmEstimnFetRFfEstimd.EngMin = 0;
dMotCtrlPrmEstimnFetRFfEstimd.EngMax = 0.1;
dMotCtrlPrmEstimnFetRFfEstimd.InitRowCol = [1  1];


dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim = DataDict.Display;
dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim.LongName = 'Motor Back EMF Estimated Pre-Limit';
dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim.Description = 'Motor Ke estimate before limiting';
dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim.DocUnits = 'VoltPerMotRadPerSec';
dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim.EngDT = dt.float32;
dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim.EngMin = 0.025;
dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim.EngMax = 0.075;
dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim.InitRowCol = [1  1];


dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca = DataDict.Display;
dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca.LongName = 'Motor Back EMF Estimated Saturation Scale';
dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca.Description = [...
  'Motor Ke estimate saturation scale factor'];
dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca.DocUnits = 'Uls';
dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca.EngDT = dt.float32;
dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca.EngMin = 0;
dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca.EngMax = 1;
dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca.InitRowCol = [1  1];


dMotCtrlPrmEstimnMotInduEstimdPreLimDax = DataDict.Display;
dMotCtrlPrmEstimnMotInduEstimdPreLimDax.LongName = 'Motor Inductance Estimated D Axis Pre-Limit';
dMotCtrlPrmEstimnMotInduEstimdPreLimDax.Description = [...
  'D-Axis estimate of motor inductance before limiting'];
dMotCtrlPrmEstimnMotInduEstimdPreLimDax.DocUnits = 'Henry';
dMotCtrlPrmEstimnMotInduEstimdPreLimDax.EngDT = dt.float32;
dMotCtrlPrmEstimnMotInduEstimdPreLimDax.EngMin = 3e-05;
dMotCtrlPrmEstimnMotInduEstimdPreLimDax.EngMax = 0.00041;
dMotCtrlPrmEstimnMotInduEstimdPreLimDax.InitRowCol = [1  1];


dMotCtrlPrmEstimnMotInduEstimdPreLimQax = DataDict.Display;
dMotCtrlPrmEstimnMotInduEstimdPreLimQax.LongName = 'Motor Inductance Estimated Q Axis Pre-Limit';
dMotCtrlPrmEstimnMotInduEstimdPreLimQax.Description = [...
  'Q-Axis estimate of motor inductance before limiting'];
dMotCtrlPrmEstimnMotInduEstimdPreLimQax.DocUnits = 'Henry';
dMotCtrlPrmEstimnMotInduEstimdPreLimQax.EngDT = dt.float32;
dMotCtrlPrmEstimnMotInduEstimdPreLimQax.EngMin = 3e-05;
dMotCtrlPrmEstimnMotInduEstimdPreLimQax.EngMax = 0.00041;
dMotCtrlPrmEstimnMotInduEstimdPreLimQax.InitRowCol = [1  1];


dMotCtrlPrmEstimnMotInduEstimdSatnScaDax = DataDict.Display;
dMotCtrlPrmEstimnMotInduEstimdSatnScaDax.LongName = 'Motor Inductance Estimated D Axis Saturation Scale';
dMotCtrlPrmEstimnMotInduEstimdSatnScaDax.Description = [...
  'D-Axis estimated motor inductance saturation scale factor'];
dMotCtrlPrmEstimnMotInduEstimdSatnScaDax.DocUnits = 'Uls';
dMotCtrlPrmEstimnMotInduEstimdSatnScaDax.EngDT = dt.float32;
dMotCtrlPrmEstimnMotInduEstimdSatnScaDax.EngMin = 0;
dMotCtrlPrmEstimnMotInduEstimdSatnScaDax.EngMax = 1;
dMotCtrlPrmEstimnMotInduEstimdSatnScaDax.InitRowCol = [1  1];


dMotCtrlPrmEstimnMotInduEstimdSatnScaQax = DataDict.Display;
dMotCtrlPrmEstimnMotInduEstimdSatnScaQax.LongName = 'Motor Inductance Estimated Q Axis Saturation Scale';
dMotCtrlPrmEstimnMotInduEstimdSatnScaQax.Description = [...
  'Q-Axis estimated motor inductance saturation scale factor'];
dMotCtrlPrmEstimnMotInduEstimdSatnScaQax.DocUnits = 'Uls';
dMotCtrlPrmEstimnMotInduEstimdSatnScaQax.EngDT = dt.float32;
dMotCtrlPrmEstimnMotInduEstimdSatnScaQax.EngMin = 0;
dMotCtrlPrmEstimnMotInduEstimdSatnScaQax.EngMax = 1;
dMotCtrlPrmEstimnMotInduEstimdSatnScaQax.InitRowCol = [1  1];


dMotCtrlPrmEstimnMotRFfEstimd = DataDict.Display;
dMotCtrlPrmEstimnMotRFfEstimd.LongName = 'Motor Resistance Feedforward Estimated';
dMotCtrlPrmEstimnMotRFfEstimd.Description = [...
  'Feedforward estimate of motor resitance'];
dMotCtrlPrmEstimnMotRFfEstimd.DocUnits = 'Ohm';
dMotCtrlPrmEstimnMotRFfEstimd.EngDT = dt.float32;
dMotCtrlPrmEstimnMotRFfEstimd.EngMin = 0.005;
dMotCtrlPrmEstimnMotRFfEstimd.EngMax = 0.12565;
dMotCtrlPrmEstimnMotRFfEstimd.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
FETTESTHILIM_DEGCGRD_F32 = DataDict.Constant;
FETTESTHILIM_DEGCGRD_F32.LongName = 'FET Temperature Estimate High Limit';
FETTESTHILIM_DEGCGRD_F32.Description = [...
  'High limit for estimated FET temperature'];
FETTESTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
FETTESTHILIM_DEGCGRD_F32.EngDT = dt.float32;
FETTESTHILIM_DEGCGRD_F32.EngVal = 200;
FETTESTHILIM_DEGCGRD_F32.Define = 'Local';


FETTESTLOLIM_DEGCGRD_F32 = DataDict.Constant;
FETTESTLOLIM_DEGCGRD_F32.LongName = 'FET Temperature Estimate Low Limit';
FETTESTLOLIM_DEGCGRD_F32.Description = [...
  'Low limit for estimated FET temperature'];
FETTESTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
FETTESTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
FETTESTLOLIM_DEGCGRD_F32.EngVal = -50;
FETTESTLOLIM_DEGCGRD_F32.Define = 'Local';


MAGNETTESTHILIM_DEGCGRD_F32 = DataDict.Constant;
MAGNETTESTHILIM_DEGCGRD_F32.LongName = 'Magnet Temperature Estimate High Limit';
MAGNETTESTHILIM_DEGCGRD_F32.Description = [...
  'High limit for estimated magnet temperature'];
MAGNETTESTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
MAGNETTESTHILIM_DEGCGRD_F32.EngDT = dt.float32;
MAGNETTESTHILIM_DEGCGRD_F32.EngVal = 150;
MAGNETTESTHILIM_DEGCGRD_F32.Define = 'Local';


MAGNETTESTLOLIM_DEGCGRD_F32 = DataDict.Constant;
MAGNETTESTLOLIM_DEGCGRD_F32.LongName = 'Magnet Temperature Estimate Low Limit';
MAGNETTESTLOLIM_DEGCGRD_F32.Description = [...
  'Low limit for estimated magnet temperature'];
MAGNETTESTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
MAGNETTESTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
MAGNETTESTLOLIM_DEGCGRD_F32.EngVal = -50;
MAGNETTESTLOLIM_DEGCGRD_F32.Define = 'Local';


MOTINDUIVSHILIM_IVSHENRY_F32 = DataDict.Constant;
MOTINDUIVSHILIM_IVSHENRY_F32.LongName = 'Inverse of Inductance High Limit';
MOTINDUIVSHILIM_IVSHENRY_F32.Description = [...
  'High limit for Inverse of Inductance'];
MOTINDUIVSHILIM_IVSHENRY_F32.DocUnits = 'IvsHenry';
MOTINDUIVSHILIM_IVSHENRY_F32.EngDT = dt.float32;
MOTINDUIVSHILIM_IVSHENRY_F32.EngVal = 33334;
MOTINDUIVSHILIM_IVSHENRY_F32.Define = 'Local';


MOTINDUIVSLOLIM_IVSHENRY_F32 = DataDict.Constant;
MOTINDUIVSLOLIM_IVSHENRY_F32.LongName = 'Inverse of Inductance Low Limit';
MOTINDUIVSLOLIM_IVSHENRY_F32.Description = [...
  'Low limit for Inverse of Inductance'];
MOTINDUIVSLOLIM_IVSHENRY_F32.DocUnits = 'IvsHenry';
MOTINDUIVSLOLIM_IVSHENRY_F32.EngDT = dt.float32;
MOTINDUIVSLOLIM_IVSHENRY_F32.EngVal = 2440;
MOTINDUIVSLOLIM_IVSHENRY_F32.Define = 'Local';


MOTWIDGTESTHILIM_DEGCGRD_F32 = DataDict.Constant;
MOTWIDGTESTHILIM_DEGCGRD_F32.LongName = 'Motor Winding Temprature Estimate High Limit';
MOTWIDGTESTHILIM_DEGCGRD_F32.Description = 'Copper temprature high limit';
MOTWIDGTESTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
MOTWIDGTESTHILIM_DEGCGRD_F32.EngDT = dt.float32;
MOTWIDGTESTHILIM_DEGCGRD_F32.EngVal = 300;
MOTWIDGTESTHILIM_DEGCGRD_F32.Define = 'Local';


MOTWIDGTESTLOLIM_DEGCGRD_F32 = DataDict.Constant;
MOTWIDGTESTLOLIM_DEGCGRD_F32.LongName = 'Motor Winding Temprature Estimate Low Limit';
MOTWIDGTESTLOLIM_DEGCGRD_F32.Description = 'Copper temprature low limit';
MOTWIDGTESTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
MOTWIDGTESTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
MOTWIDGTESTLOLIM_DEGCGRD_F32.EngVal = -50;
MOTWIDGTESTLOLIM_DEGCGRD_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
