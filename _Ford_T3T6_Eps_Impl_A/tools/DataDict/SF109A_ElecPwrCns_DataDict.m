%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 24-Aug-2017 13:58:13       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF109A = DataDict.FDD;
SF109A.Version = '2.0.X';
SF109A.LongName = 'Electric Power Consumption';
SF109A.ShoName  = 'ElecPwrCns';
SF109A.DesignASIL = 'QM';
SF109A.Description = [...
  'This function estimates the instantaneous electric power and supply cu' ...
  'rrent at the input of the control module for the purpose of transmitti' ...
  'ng this information over the serial communication bus'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
ElecPwrCnsPer1 = DataDict.Runnable;
ElecPwrCnsPer1.Context = 'Rte';
ElecPwrCnsPer1.TimeStep = 0.01;
ElecPwrCnsPer1.Description = [...
  '10 Millisecond periodic for Electric Power Consumption'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BrdgVltg = DataDict.IpSignal;
BrdgVltg.LongName = 'Bridge Voltage';
BrdgVltg.Description = 'Output Bridge Voltage';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.ReadIn = {'ElecPwrCnsPer1'};
BrdgVltg.ReadType = 'Rte';


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
MotAndThermProtnLoaMod.ReadIn = {'ElecPwrCnsPer1'};
MotAndThermProtnLoaMod.ReadType = 'Rte';


MotCurrDax = DataDict.IpSignal;
MotCurrDax.LongName = 'Motor D-Axis Measured Current';
MotCurrDax.Description = 'Motor Current D-Axis Current';
MotCurrDax.DocUnits = 'Ampr';
MotCurrDax.EngDT = dt.float32;
MotCurrDax.EngInit = 0;
MotCurrDax.EngMin = -200;
MotCurrDax.EngMax = 200;
MotCurrDax.ReadIn = {'ElecPwrCnsPer1'};
MotCurrDax.ReadType = 'Rte';


MotCurrDaxCmd = DataDict.IpSignal;
MotCurrDaxCmd.LongName = 'Motor Current D-Axis Reference';
MotCurrDaxCmd.Description = [...
  'D-Axis Reference (commanded or expected value)'];
MotCurrDaxCmd.DocUnits = 'Ampr';
MotCurrDaxCmd.EngDT = dt.float32;
MotCurrDaxCmd.EngInit = 0;
MotCurrDaxCmd.EngMin = 0;
MotCurrDaxCmd.EngMax = 200;
MotCurrDaxCmd.ReadIn = {'ElecPwrCnsPer1'};
MotCurrDaxCmd.ReadType = 'Rte';


MotCurrQax = DataDict.IpSignal;
MotCurrQax.LongName = 'Motor Q-Axis Measured Current';
MotCurrQax.Description = 'Motor Current Q-Axis Current';
MotCurrQax.DocUnits = 'Ampr';
MotCurrQax.EngDT = dt.float32;
MotCurrQax.EngInit = 0;
MotCurrQax.EngMin = -200;
MotCurrQax.EngMax = 200;
MotCurrQax.ReadIn = {'ElecPwrCnsPer1'};
MotCurrQax.ReadType = 'Rte';


MotCurrQaxCmd = DataDict.IpSignal;
MotCurrQaxCmd.LongName = 'Motor Current Q-Axis Reference';
MotCurrQaxCmd.Description = 'Motor Current Q-Axis Reference';
MotCurrQaxCmd.DocUnits = 'Ampr';
MotCurrQaxCmd.EngDT = dt.float32;
MotCurrQaxCmd.EngInit = 0;
MotCurrQaxCmd.EngMin = -200;
MotCurrQaxCmd.EngMax = 200;
MotCurrQaxCmd.ReadIn = {'ElecPwrCnsPer1'};
MotCurrQaxCmd.ReadType = 'Rte';


MotVltgDax = DataDict.IpSignal;
MotVltgDax.LongName = 'Motor D-Axis Voltage';
MotVltgDax.Description = 'D Axis Motor Voltage';
MotVltgDax.DocUnits = 'Volt';
MotVltgDax.EngDT = dt.float32;
MotVltgDax.EngInit = 0;
MotVltgDax.EngMin = -26.5;
MotVltgDax.EngMax = 26.5;
MotVltgDax.ReadIn = {'ElecPwrCnsPer1'};
MotVltgDax.ReadType = 'Rte';


MotVltgQax = DataDict.IpSignal;
MotVltgQax.LongName = 'Motor Q-Axis Voltage';
MotVltgQax.Description = 'Q Axis Motor Voltage';
MotVltgQax.DocUnits = 'Volt';
MotVltgQax.EngDT = dt.float32;
MotVltgQax.EngInit = 0;
MotVltgQax.EngMin = -26.5;
MotVltgQax.EngMax = 26.5;
MotVltgQax.ReadIn = {'ElecPwrCnsPer1'};
MotVltgQax.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
ElecInpPwrEstim = DataDict.OpSignal;
ElecInpPwrEstim.LongName = 'Electric Input Power Estimate';
ElecInpPwrEstim.Description = [...
  'Final value of Electrical Input Power in Watts'];
ElecInpPwrEstim.DocUnits = 'Watt';
ElecInpPwrEstim.SwcShoName = 'ElecPwrCns';
ElecInpPwrEstim.EngDT = dt.float32;
ElecInpPwrEstim.EngInit = 0;
ElecInpPwrEstim.EngMin = -2000;
ElecInpPwrEstim.EngMax = 2000;
ElecInpPwrEstim.TestTolerance = 0;
ElecInpPwrEstim.WrittenIn = {'ElecPwrCnsPer1'};
ElecInpPwrEstim.WriteType = 'Rte';


SplyCurrEstim = DataDict.OpSignal;
SplyCurrEstim.LongName = 'Supply Current Estimate';
SplyCurrEstim.Description = [...
  'Supply current estimate calculated from  value of electrical input pow' ...
  'er'];
SplyCurrEstim.DocUnits = 'Ampr';
SplyCurrEstim.SwcShoName = 'ElecPwrCns';
SplyCurrEstim.EngDT = dt.float32;
SplyCurrEstim.EngInit = 0;
SplyCurrEstim.EngMin = -200;
SplyCurrEstim.EngMax = 200;
SplyCurrEstim.TestTolerance = 0;
SplyCurrEstim.WrittenIn = {'ElecPwrCnsPer1'};
SplyCurrEstim.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
ElecPwrCnsCtrlrInpR = DataDict.Calibration;
ElecPwrCnsCtrlrInpR.LongName = 'Controller Input Resistance';
ElecPwrCnsCtrlrInpR.Description = [...
  'Control Module Input Resistance Value'];
ElecPwrCnsCtrlrInpR.DocUnits = 'Ohm';
ElecPwrCnsCtrlrInpR.EngDT = dt.float32;
ElecPwrCnsCtrlrInpR.EngVal = 0.0005;
ElecPwrCnsCtrlrInpR.EngMin = 0;
ElecPwrCnsCtrlrInpR.EngMax = 0.02;
ElecPwrCnsCtrlrInpR.Cardinality = 'Cmn';
ElecPwrCnsCtrlrInpR.CustomerVisible = false;
ElecPwrCnsCtrlrInpR.Online = false;
ElecPwrCnsCtrlrInpR.Impact = 'H';
ElecPwrCnsCtrlrInpR.TuningOwner = 'TqCtrl';
ElecPwrCnsCtrlrInpR.GraphLink = {''};
ElecPwrCnsCtrlrInpR.Monotony = 'None';
ElecPwrCnsCtrlrInpR.MaxGrad = 998;
ElecPwrCnsCtrlrInpR.PortName = 'ElecPwrCnsCtrlrInpR';


ElecPwrCnsPrstcPwrLoss = DataDict.Calibration;
ElecPwrCnsPrstcPwrLoss.LongName = 'Parasitic Power Loss';
ElecPwrCnsPrstcPwrLoss.Description = 'Parasitic power loss of controller';
ElecPwrCnsPrstcPwrLoss.DocUnits = 'Watt';
ElecPwrCnsPrstcPwrLoss.EngDT = dt.float32;
ElecPwrCnsPrstcPwrLoss.EngVal = 10;
ElecPwrCnsPrstcPwrLoss.EngMin = 0;
ElecPwrCnsPrstcPwrLoss.EngMax = 25;
ElecPwrCnsPrstcPwrLoss.Cardinality = 'Cmn';
ElecPwrCnsPrstcPwrLoss.CustomerVisible = false;
ElecPwrCnsPrstcPwrLoss.Online = true;
ElecPwrCnsPrstcPwrLoss.Impact = 'H';
ElecPwrCnsPrstcPwrLoss.TuningOwner = 'TqCtrl';
ElecPwrCnsPrstcPwrLoss.GraphLink = {''};
ElecPwrCnsPrstcPwrLoss.Monotony = 'None';
ElecPwrCnsPrstcPwrLoss.MaxGrad = 998;
ElecPwrCnsPrstcPwrLoss.PortName = 'ElecPwrCnsPrstcPwrLoss';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dElecPwrCnsDrpInpPwr = DataDict.Display;
dElecPwrCnsDrpInpPwr.LongName = 'Power Drop';
dElecPwrCnsDrpInpPwr.Description = [...
  'Represents Power Drop across Input Resistance'];
dElecPwrCnsDrpInpPwr.DocUnits = 'Watt';
dElecPwrCnsDrpInpPwr.EngDT = dt.float32;
dElecPwrCnsDrpInpPwr.EngMin = -2000;
dElecPwrCnsDrpInpPwr.EngMax = 2000;
dElecPwrCnsDrpInpPwr.InitRowCol = [1  1];


dElecPwrCnsModInpPwr = DataDict.Display;
dElecPwrCnsModInpPwr.LongName = 'Modulator Input Power';
dElecPwrCnsModInpPwr.Description = 'Modulator Input Power';
dElecPwrCnsModInpPwr.DocUnits = 'Watt';
dElecPwrCnsModInpPwr.EngDT = dt.float32;
dElecPwrCnsModInpPwr.EngMin = -2000;
dElecPwrCnsModInpPwr.EngMax = 2000;
dElecPwrCnsModInpPwr.InitRowCol = [1  1];


dElecPwrCnsMotCurrDaxEstim = DataDict.Display;
dElecPwrCnsMotCurrDaxEstim.LongName = 'Motor Dax Current Estimate';
dElecPwrCnsMotCurrDaxEstim.Description = 'Estimate Of Motor Dax Current';
dElecPwrCnsMotCurrDaxEstim.DocUnits = 'Ampr';
dElecPwrCnsMotCurrDaxEstim.EngDT = dt.float32;
dElecPwrCnsMotCurrDaxEstim.EngMin = -200;
dElecPwrCnsMotCurrDaxEstim.EngMax = 200;
dElecPwrCnsMotCurrDaxEstim.InitRowCol = [1  1];


dElecPwrCnsMotCurrQaxEstim = DataDict.Display;
dElecPwrCnsMotCurrQaxEstim.LongName = 'Motor Qax Current Estimate';
dElecPwrCnsMotCurrQaxEstim.Description = 'Estimate Of Motor Qax Current';
dElecPwrCnsMotCurrQaxEstim.DocUnits = 'Ampr';
dElecPwrCnsMotCurrQaxEstim.EngDT = dt.float32;
dElecPwrCnsMotCurrQaxEstim.EngMin = -200;
dElecPwrCnsMotCurrQaxEstim.EngMax = 200;
dElecPwrCnsMotCurrQaxEstim.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_HALFSQRT3_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_HALFSQRT3_ULS_F32.LongName = 'Half Square Root of 3';
ARCHGLBPRM_HALFSQRT3_ULS_F32.Description = '(Square root of 3) divided by 2';
ARCHGLBPRM_HALFSQRT3_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_HALFSQRT3_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_HALFSQRT3_ULS_F32.EngVal = 0.8660254;
ARCHGLBPRM_HALFSQRT3_ULS_F32.Define = 'Global';


BRDGVLTGHILIM_VOLT_F32 = DataDict.Constant;
BRDGVLTGHILIM_VOLT_F32.LongName = 'Motor Voltage High Limit';
BRDGVLTGHILIM_VOLT_F32.Description = [...
  'Defines Bridge voltage high limit saturation.'];
BRDGVLTGHILIM_VOLT_F32.DocUnits = 'Volt';
BRDGVLTGHILIM_VOLT_F32.EngDT = dt.float32;
BRDGVLTGHILIM_VOLT_F32.EngVal = 26.5;
BRDGVLTGHILIM_VOLT_F32.Define = 'Local';


BRDGVLTGLOLIM_VOLT_F32 = DataDict.Constant;
BRDGVLTGLOLIM_VOLT_F32.LongName = 'Bridge Voltage Low Limit';
BRDGVLTGLOLIM_VOLT_F32.Description = 'Used for input signal saturation.';
BRDGVLTGLOLIM_VOLT_F32.DocUnits = 'Volt';
BRDGVLTGLOLIM_VOLT_F32.EngDT = dt.float32;
BRDGVLTGLOLIM_VOLT_F32.EngVal = 6;
BRDGVLTGLOLIM_VOLT_F32.Define = 'Local';


ELECINPPWRESTIMHILIM_WATT_F32 = DataDict.Constant;
ELECINPPWRESTIMHILIM_WATT_F32.LongName = 'Electric Power High Limit';
ELECINPPWRESTIMHILIM_WATT_F32.Description = [...
  'Maximum Value of the Electric Power at the output limiter'];
ELECINPPWRESTIMHILIM_WATT_F32.DocUnits = 'Watt';
ELECINPPWRESTIMHILIM_WATT_F32.EngDT = dt.float32;
ELECINPPWRESTIMHILIM_WATT_F32.EngVal = 2000;
ELECINPPWRESTIMHILIM_WATT_F32.Define = 'Local';


ELECINPPWRESTIMLOLIM_WATT_F32 = DataDict.Constant;
ELECINPPWRESTIMLOLIM_WATT_F32.LongName = 'Electric Power Low Limit';
ELECINPPWRESTIMLOLIM_WATT_F32.Description = [...
  'Minimum Value of the Electric Power at the output limiter'];
ELECINPPWRESTIMLOLIM_WATT_F32.DocUnits = 'Watt';
ELECINPPWRESTIMLOLIM_WATT_F32.EngDT = dt.float32;
ELECINPPWRESTIMLOLIM_WATT_F32.EngVal = -2000;
ELECINPPWRESTIMLOLIM_WATT_F32.Define = 'Local';


SPLYCURRESTIMHILIM_AMPR_F32 = DataDict.Constant;
SPLYCURRESTIMHILIM_AMPR_F32.LongName = 'Supply Current High Limit';
SPLYCURRESTIMHILIM_AMPR_F32.Description = [...
  'Maximum Value of the supply current at the output limiter'];
SPLYCURRESTIMHILIM_AMPR_F32.DocUnits = 'Ampr';
SPLYCURRESTIMHILIM_AMPR_F32.EngDT = dt.float32;
SPLYCURRESTIMHILIM_AMPR_F32.EngVal = 200;
SPLYCURRESTIMHILIM_AMPR_F32.Define = 'Local';


SPLYCURRESTIMLOLIM_AMPR_F32 = DataDict.Constant;
SPLYCURRESTIMLOLIM_AMPR_F32.LongName = 'Supply Current Low Limit';
SPLYCURRESTIMLOLIM_AMPR_F32.Description = [...
  'Minimum Value of the supply current at the output limiter'];
SPLYCURRESTIMLOLIM_AMPR_F32.DocUnits = 'Ampr';
SPLYCURRESTIMLOLIM_AMPR_F32.EngDT = dt.float32;
SPLYCURRESTIMLOLIM_AMPR_F32.EngVal = -200;
SPLYCURRESTIMLOLIM_AMPR_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
