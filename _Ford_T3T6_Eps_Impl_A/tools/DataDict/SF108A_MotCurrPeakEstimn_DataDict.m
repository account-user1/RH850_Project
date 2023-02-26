%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 19-Jul-2017 12:30:17       %
%                                  Created with tool release: 3.0.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF108A = DataDict.FDD;
SF108A.Version = '3.0.X';
SF108A.LongName = 'Motor Current Peak Estimation';
SF108A.ShoName  = 'MotCurrPeakEstimn';
SF108A.DesignASIL = 'D';
SF108A.Description = [...
  'Motor Current Peak Estimation calculates the peak motor current square' ...
  'd used for thermal duty cycle calculation and temperature estimation.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotCurrPeakEstimnInit1 = DataDict.Runnable;
MotCurrPeakEstimnInit1.Context = 'Rte';
MotCurrPeakEstimnInit1.TimeStep = 0;
MotCurrPeakEstimnInit1.Description = 'Initialization';

MotCurrPeakEstimnPer1 = DataDict.Runnable;
MotCurrPeakEstimnPer1.Context = 'Rte';
MotCurrPeakEstimnPer1.TimeStep = 0.002;
MotCurrPeakEstimnPer1.Description = 'Periodic 1';

MotCurrPeakEstimnPer2 = DataDict.Runnable;
MotCurrPeakEstimnPer2.Context = 'Rte';
MotCurrPeakEstimnPer2.TimeStep = 0.1;
MotCurrPeakEstimnPer2.Description = 'Periodic 2';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DualEcuMotCtrlMtgtnEna = DataDict.IpSignal;
DualEcuMotCtrlMtgtnEna.LongName = 'Dual ECU Motor Control Mitigation Enable';
DualEcuMotCtrlMtgtnEna.Description = [...
  'Dual ECU Motor Control Mitigation Enable'];
DualEcuMotCtrlMtgtnEna.DocUnits = 'Cnt';
DualEcuMotCtrlMtgtnEna.EngDT = dt.lgc;
DualEcuMotCtrlMtgtnEna.EngInit = 0;
DualEcuMotCtrlMtgtnEna.EngMin = 0;
DualEcuMotCtrlMtgtnEna.EngMax = 1;
DualEcuMotCtrlMtgtnEna.ReadIn = {'MotCurrPeakEstimnPer1'};
DualEcuMotCtrlMtgtnEna.ReadType = 'Rte';


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
MotAndThermProtnLoaMod.ReadIn = {'MotCurrPeakEstimnPer1'};
MotAndThermProtnLoaMod.ReadType = 'Rte';


MotCurrDax = DataDict.IpSignal;
MotCurrDax.LongName = 'Motor Current Dax';
MotCurrDax.Description = 'Motor Current Dax';
MotCurrDax.DocUnits = 'Ampr';
MotCurrDax.EngDT = dt.float32;
MotCurrDax.EngInit = 0;
MotCurrDax.EngMin = -200;
MotCurrDax.EngMax = 200;
MotCurrDax.ReadIn = {'MotCurrPeakEstimnPer1'};
MotCurrDax.ReadType = 'Rte';


MotCurrDaxCmd = DataDict.IpSignal;
MotCurrDaxCmd.LongName = 'Motor Current Dax Command';
MotCurrDaxCmd.Description = 'Motor Current Dax Command';
MotCurrDaxCmd.DocUnits = 'Ampr';
MotCurrDaxCmd.EngDT = dt.float32;
MotCurrDaxCmd.EngInit = 0;
MotCurrDaxCmd.EngMin = 0;
MotCurrDaxCmd.EngMax = 200;
MotCurrDaxCmd.ReadIn = {'MotCurrPeakEstimnPer1'};
MotCurrDaxCmd.ReadType = 'Rte';


MotCurrQax = DataDict.IpSignal;
MotCurrQax.LongName = 'Motor Current Qax';
MotCurrQax.Description = 'Motor Current Qax';
MotCurrQax.DocUnits = 'Ampr';
MotCurrQax.EngDT = dt.float32;
MotCurrQax.EngInit = 0;
MotCurrQax.EngMin = -200;
MotCurrQax.EngMax = 200;
MotCurrQax.ReadIn = {'MotCurrPeakEstimnPer1'};
MotCurrQax.ReadType = 'Rte';


MotCurrQaxCmd = DataDict.IpSignal;
MotCurrQaxCmd.LongName = 'Motor Current Qax Command';
MotCurrQaxCmd.Description = 'Motor Current Qax Command';
MotCurrQaxCmd.DocUnits = 'Ampr';
MotCurrQaxCmd.EngDT = dt.float32;
MotCurrQaxCmd.EngInit = 0;
MotCurrQaxCmd.EngMin = -200;
MotCurrQaxCmd.EngMax = 200;
MotCurrQaxCmd.ReadIn = {'MotCurrPeakEstimnPer1'};
MotCurrQaxCmd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCurrPeakEstimd = DataDict.OpSignal;
MotCurrPeakEstimd.LongName = 'Motor Current Peak Estimated';
MotCurrPeakEstimd.Description = [...
  'Estimate of peak motor current based on either the measured motor curr' ...
  'ents or the motor current commands.'];
MotCurrPeakEstimd.DocUnits = 'AmprSqd';
MotCurrPeakEstimd.SwcShoName = 'MotCurrPeakEstimn';
MotCurrPeakEstimd.EngDT = dt.float32;
MotCurrPeakEstimd.EngInit = 0;
MotCurrPeakEstimd.EngMin = 0;
MotCurrPeakEstimd.EngMax = 62500;
MotCurrPeakEstimd.TestTolerance = 1;
MotCurrPeakEstimd.WrittenIn = {'MotCurrPeakEstimnPer1'};
MotCurrPeakEstimd.WriteType = 'Rte';


MotCurrPeakEstimdFild = DataDict.OpSignal;
MotCurrPeakEstimdFild.LongName = 'Motor Current Peak Estimated Filtered';
MotCurrPeakEstimdFild.Description = [...
  'This output is the MotCurrPeakEstimd output, filtered in the 100ms loo' ...
  'p.'];
MotCurrPeakEstimdFild.DocUnits = 'AmprSqd';
MotCurrPeakEstimdFild.SwcShoName = 'MotCurrPeakEstimn';
MotCurrPeakEstimdFild.EngDT = dt.float32;
MotCurrPeakEstimdFild.EngInit = 0;
MotCurrPeakEstimdFild.EngMin = 0;
MotCurrPeakEstimdFild.EngMax = 62500;
MotCurrPeakEstimdFild.TestTolerance = 1;
MotCurrPeakEstimdFild.WrittenIn = {'MotCurrPeakEstimnPer2'};
MotCurrPeakEstimdFild.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
MotCurrEstimd = DataDict.IRV;
MotCurrEstimd.LongName = 'Motor Current Estimated';
MotCurrEstimd.Description = [...
  'This signal is the calculated estimate of peak motor current that will' ...
  ' be filted in MotCurrPeakEstimdPer2.'];
MotCurrEstimd.DocUnits = 'AmprSqd';
MotCurrEstimd.EngDT = dt.float32;
MotCurrEstimd.EngInit = 0;
MotCurrEstimd.EngMin = 0;
MotCurrEstimd.EngMax = 62500;
MotCurrEstimd.ReadIn = {'MotCurrPeakEstimnPer2'};
MotCurrEstimd.WrittenIn = {'MotCurrPeakEstimnPer1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotCurrPeakEstimnCurrFilFrq = DataDict.Calibration;
MotCurrPeakEstimnCurrFilFrq.LongName = 'Motor Current Peak Estimation Current Filter Frequency';
MotCurrPeakEstimnCurrFilFrq.Description = [...
  'Calibration to set the cutoff frequency for the two anti-alias filters' ...
  ' applied to Id & Iq estimates in the 2 msec loop'];
MotCurrPeakEstimnCurrFilFrq.DocUnits = 'Hz';
MotCurrPeakEstimnCurrFilFrq.EngDT = dt.float32;
MotCurrPeakEstimnCurrFilFrq.EngVal = 8;
MotCurrPeakEstimnCurrFilFrq.EngMin = 0.1;
MotCurrPeakEstimnCurrFilFrq.EngMax = 10;
MotCurrPeakEstimnCurrFilFrq.Cardinality = 'Cmn';
MotCurrPeakEstimnCurrFilFrq.CustomerVisible = false;
MotCurrPeakEstimnCurrFilFrq.Online = false;
MotCurrPeakEstimnCurrFilFrq.Impact = 'H';
MotCurrPeakEstimnCurrFilFrq.TuningOwner = 'TqCtrl';
MotCurrPeakEstimnCurrFilFrq.GraphLink = {''};
MotCurrPeakEstimnCurrFilFrq.Monotony = 'None';
MotCurrPeakEstimnCurrFilFrq.MaxGrad = 0;
MotCurrPeakEstimnCurrFilFrq.PortName = 'MotCurrPeakEstimnCurrFilFrq';


MotCurrPeakEstimnCurrPeakEstimdFilFrq = DataDict.Calibration;
MotCurrPeakEstimnCurrPeakEstimdFilFrq.LongName = 'Motor Current Peak Estimation Current Peak Estimated Filter Frequency';
MotCurrPeakEstimnCurrPeakEstimdFilFrq.Description = [...
  'Calibration to set the cutoff frequency for the anti-alias filter appl' ...
  'ied to Ipeak2 in the slower loop'];
MotCurrPeakEstimnCurrPeakEstimdFilFrq.DocUnits = 'Hz';
MotCurrPeakEstimnCurrPeakEstimdFilFrq.EngDT = dt.float32;
MotCurrPeakEstimnCurrPeakEstimdFilFrq.EngVal = 0.03;
MotCurrPeakEstimnCurrPeakEstimdFilFrq.EngMin = 0.0122;
MotCurrPeakEstimnCurrPeakEstimdFilFrq.EngMax = 0.122;
MotCurrPeakEstimnCurrPeakEstimdFilFrq.Cardinality = 'Cmn';
MotCurrPeakEstimnCurrPeakEstimdFilFrq.CustomerVisible = false;
MotCurrPeakEstimnCurrPeakEstimdFilFrq.Online = false;
MotCurrPeakEstimnCurrPeakEstimdFilFrq.Impact = 'H';
MotCurrPeakEstimnCurrPeakEstimdFilFrq.TuningOwner = 'TqCtrl';
MotCurrPeakEstimnCurrPeakEstimdFilFrq.GraphLink = {''};
MotCurrPeakEstimnCurrPeakEstimdFilFrq.Monotony = 'None';
MotCurrPeakEstimnCurrPeakEstimdFilFrq.MaxGrad = 0;
MotCurrPeakEstimnCurrPeakEstimdFilFrq.PortName = 'MotCurrPeakEstimnCurrPeakEstimdFilFrq';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotCurrPeakEstimnMotCurrDaxFil = DataDict.Display;
dMotCurrPeakEstimnMotCurrDaxFil.LongName = 'Motor Current Dax Filter';
dMotCurrPeakEstimnMotCurrDaxFil.Description = [...
  'Output of filter for Dax motor current.'];
dMotCurrPeakEstimnMotCurrDaxFil.DocUnits = 'Ampr';
dMotCurrPeakEstimnMotCurrDaxFil.EngDT = dt.float32;
dMotCurrPeakEstimnMotCurrDaxFil.EngMin = -200;
dMotCurrPeakEstimnMotCurrDaxFil.EngMax = 200;
dMotCurrPeakEstimnMotCurrDaxFil.InitRowCol = [1  1];


dMotCurrPeakEstimnMotCurrQaxFil = DataDict.Display;
dMotCurrPeakEstimnMotCurrQaxFil.LongName = 'Motor Current Qax Filter';
dMotCurrPeakEstimnMotCurrQaxFil.Description = [...
  'Output of filter for Qax motor current.'];
dMotCurrPeakEstimnMotCurrQaxFil.DocUnits = 'Ampr';
dMotCurrPeakEstimnMotCurrQaxFil.EngDT = dt.float32;
dMotCurrPeakEstimnMotCurrQaxFil.EngMin = -200;
dMotCurrPeakEstimnMotCurrQaxFil.EngMax = 200;
dMotCurrPeakEstimnMotCurrQaxFil.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotCurrDaxFil = DataDict.PIM;
MotCurrDaxFil.LongName = 'Motor Current Dax Filter';
MotCurrDaxFil.Description = [...
  'Filter structure for the Dax motor current used to calculate peak moto' ...
  'r current.'];
MotCurrDaxFil.DocUnits = 'Cnt';
MotCurrDaxFil.EngDT = struct.FilLpRec1;
MotCurrDaxFil.EngMin = [struct('FilSt',-200,'FilGain',0.0012558)];
MotCurrDaxFil.EngMax = [struct('FilSt',200,'FilGain',0.118088)];
MotCurrDaxFil.InitRowCol = [1  1];


MotCurrPeakEstimdFil = DataDict.PIM;
MotCurrPeakEstimdFil.LongName = 'Motor Current Peak Estimated Filter';
MotCurrPeakEstimdFil.Description = [...
  'Filter structure for the estimated peak motor current.'];
MotCurrPeakEstimdFil.DocUnits = 'Cnt';
MotCurrPeakEstimdFil.EngDT = struct.FilLpRec1;
MotCurrPeakEstimdFil.EngMin = [struct('FilSt',0,'FilGain',0.007636)];
MotCurrPeakEstimdFil.EngMax = [struct('FilSt',62500,'FilGain',0.07379)];
MotCurrPeakEstimdFil.InitRowCol = [1  1];


MotCurrQaxFil = DataDict.PIM;
MotCurrQaxFil.LongName = 'Motor Current Qax Filter';
MotCurrQaxFil.Description = [...
  'Filter structure for the Qax motor current used to calculate peak moto' ...
  'r current.'];
MotCurrQaxFil.DocUnits = 'Cnt';
MotCurrQaxFil.EngDT = struct.FilLpRec1;
MotCurrQaxFil.EngMin = [struct('FilSt',-200,'FilGain',0.0012558)];
MotCurrQaxFil.EngMax = [struct('FilSt',200,'FilGain',0.118088)];
MotCurrQaxFil.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_100MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_100MILLISEC_SEC_F32.LongName = '100 Milliseconds';
ARCHGLBPRM_100MILLISEC_SEC_F32.Description = '100ms periodic loop time step';
ARCHGLBPRM_100MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_100MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_100MILLISEC_SEC_F32.EngVal = 0.1;
ARCHGLBPRM_100MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


MOTCURRPEAKMAX_AMPRSQD_F32 = DataDict.Constant;
MOTCURRPEAKMAX_AMPRSQD_F32.LongName = 'Motor Current Peak Max';
MOTCURRPEAKMAX_AMPRSQD_F32.Description = [...
  'Maximum output for the peak motor current.'];
MOTCURRPEAKMAX_AMPRSQD_F32.DocUnits = 'AmprSqd';
MOTCURRPEAKMAX_AMPRSQD_F32.EngDT = dt.float32;
MOTCURRPEAKMAX_AMPRSQD_F32.EngVal = 62500;
MOTCURRPEAKMAX_AMPRSQD_F32.Define = 'Local';


MOTCURRPEAKMIN_AMPRSQD_F32 = DataDict.Constant;
MOTCURRPEAKMIN_AMPRSQD_F32.LongName = 'Motor Current Peak Min';
MOTCURRPEAKMIN_AMPRSQD_F32.Description = [...
  'Minuimum output for the peak motor current.'];
MOTCURRPEAKMIN_AMPRSQD_F32.DocUnits = 'AmprSqd';
MOTCURRPEAKMIN_AMPRSQD_F32.EngDT = dt.float32;
MOTCURRPEAKMIN_AMPRSQD_F32.EngVal = 0;
MOTCURRPEAKMIN_AMPRSQD_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
