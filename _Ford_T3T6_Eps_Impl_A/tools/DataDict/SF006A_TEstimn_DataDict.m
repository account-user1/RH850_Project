%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 06-Apr-2018 14:42:16       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF006A = DataDict.FDD;
SF006A.Version = '3.2.X';
SF006A.LongName = 'Temperature Estimation';
SF006A.ShoName  = 'TEstimn';
SF006A.DesignASIL = 'B';
SF006A.Description = [...
  'This function provides the estimates of temperature of key motor circu' ...
  'it parameters, namely the power transistor Silicon resistance, motor C' ...
  'opper winding resistance and the motor BEMF coefficient, and if requir' ...
  'ed, for the Assist Mechanism. The temperature estimation is achieved b' ...
  'y measuring the controller temperature and using it as an input to a s' ...
  'imple lumped parameter system model to estimate the temperatures of th' ...
  'e physical parameters which affect the motor circuit parameter values.' ...
  ' Additional inputs, namely the Engine and Ambient Temperatures and the' ...
  ' Handwheel Velocity, are required to obtain the Assist Mechanism tempe' ...
  'rature estimate. The design is able to switch between two sets of cali' ...
  'brations based on singl ECU or dual ECU mode of operation.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
TEstimnInit1 = DataDict.Runnable;
TEstimnInit1.Context = 'Rte';
TEstimnInit1.TimeStep = 0;
TEstimnInit1.Description = 'Initialization Runnable';

TEstimnPer1 = DataDict.Runnable;
TEstimnPer1.Context = 'Rte';
TEstimnPer1.TimeStep = 0.1;
TEstimnPer1.Description = 'Periodic Runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
TFilStVal_GetErrorStatus = DataDict.Client;
TFilStVal_GetErrorStatus.CallLocation = {'TEstimnInit1'};
TFilStVal_GetErrorStatus.Description = 'Returns the NVM read status';
TFilStVal_GetErrorStatus.Return = DataDict.CSReturn;
TFilStVal_GetErrorStatus.Return.Type = 'Standard';
TFilStVal_GetErrorStatus.Return.Min = 0;
TFilStVal_GetErrorStatus.Return.Max = 1;
TFilStVal_GetErrorStatus.Return.TestTolerance = 0;
TFilStVal_GetErrorStatus.Return.Description = 'Get Error Status';
TFilStVal_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
TFilStVal_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
TFilStVal_GetErrorStatus.Arguments(1).EngDT = dt.u08;
TFilStVal_GetErrorStatus.Arguments(1).EngMin = 0;
TFilStVal_GetErrorStatus.Arguments(1).EngMax = 255;
TFilStVal_GetErrorStatus.Arguments(1).TestTolerance = 999;
TFilStVal_GetErrorStatus.Arguments(1).Units = 'Cnt';
TFilStVal_GetErrorStatus.Arguments(1).Direction = 'Out';
TFilStVal_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
TFilStVal_GetErrorStatus.Arguments(1).Description = '';


TFilStVal_SetRamBlockStatus = DataDict.Client;
TFilStVal_SetRamBlockStatus.CallLocation = {'TEstimnInit1','TEstimnPer1'};
TFilStVal_SetRamBlockStatus.Description = [...
  'Updates NVM during ignition offwhen value is set to TRUE'];
TFilStVal_SetRamBlockStatus.Return = DataDict.CSReturn;
TFilStVal_SetRamBlockStatus.Return.Type = 'Standard';
TFilStVal_SetRamBlockStatus.Return.Min = 0;
TFilStVal_SetRamBlockStatus.Return.Max = 1;
TFilStVal_SetRamBlockStatus.Return.TestTolerance = 0;
TFilStVal_SetRamBlockStatus.Return.Description = 'Set Ram Block Status';
TFilStVal_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
TFilStVal_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
TFilStVal_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
TFilStVal_SetRamBlockStatus.Arguments(1).EngMin = 0;
TFilStVal_SetRamBlockStatus.Arguments(1).EngMax = 1;
TFilStVal_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
TFilStVal_SetRamBlockStatus.Arguments(1).Direction = 'In';
TFilStVal_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
TFilStVal_SetRamBlockStatus.Arguments(1).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AmbT = DataDict.IpSignal;
AmbT.LongName = 'Ambient Temperature';
AmbT.Description = 'Temperature of the environment';
AmbT.DocUnits = 'DegCgrd';
AmbT.EngDT = dt.float32;
AmbT.EngInit = 0;
AmbT.EngMin = -50;
AmbT.EngMax = 150;
AmbT.ReadIn = {'TEstimnInit1','TEstimnPer1'};
AmbT.ReadType = 'Rte';


AmbTVld = DataDict.IpSignal;
AmbTVld.LongName = 'Ambient Temperature Valid';
AmbTVld.Description = [...
  'Information if the ambient temperature is valid or not'];
AmbTVld.DocUnits = 'Cnt';
AmbTVld.EngDT = dt.lgc;
AmbTVld.EngInit = 0;
AmbTVld.EngMin = 0;
AmbTVld.EngMax = 1;
AmbTVld.ReadIn = {'TEstimnInit1','TEstimnPer1'};
AmbTVld.ReadType = 'Rte';


AssiMechTEstimnDi = DataDict.IpSignal;
AssiMechTEstimnDi.LongName = 'Assist Mechanism Temperature Estimatation Disable';
AssiMechTEstimnDi.Description = [...
  'Informs if the assist mech temperature estimation is disabled'];
AssiMechTEstimnDi.DocUnits = 'Cnt';
AssiMechTEstimnDi.EngDT = dt.lgc;
AssiMechTEstimnDi.EngInit = 0;
AssiMechTEstimnDi.EngMin = 0;
AssiMechTEstimnDi.EngMax = 1;
AssiMechTEstimnDi.ReadIn = {'TEstimnPer1'};
AssiMechTEstimnDi.ReadType = 'Rte';


DualEcuFltMtgtnEna = DataDict.IpSignal;
DualEcuFltMtgtnEna.LongName = 'Dual ECU Fault Mitigation Enable';
DualEcuFltMtgtnEna.Description = [...
  'Indicates if system is in single ECU or dual ECU mode.DualEcuFltMtgtnE' ...
  'na = False indicates single ECU mode DualEcuFltMtgtnEna = True  indica' ...
  'tes dual ECU mode'];
DualEcuFltMtgtnEna.DocUnits = 'Cnt';
DualEcuFltMtgtnEna.EngDT = dt.lgc;
DualEcuFltMtgtnEna.EngInit = 0;
DualEcuFltMtgtnEna.EngMin = 0;
DualEcuFltMtgtnEna.EngMax = 1;
DualEcuFltMtgtnEna.ReadIn = {'TEstimnInit1','TEstimnPer1'};
DualEcuFltMtgtnEna.ReadType = 'Rte';


EcuTFild = DataDict.IpSignal;
EcuTFild.LongName = 'Ecu Temperature Filtered';
EcuTFild.Description = [...
  'Provides the filtered ECU temperature'];
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 25;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.ReadIn = {'TEstimnInit1','TEstimnPer1'};
EcuTFild.ReadType = 'Rte';


EngOilT = DataDict.IpSignal;
EngOilT.LongName = 'Engine Oil Temperature';
EngOilT.Description = [...
  'Provides information on engine oil temperature'];
EngOilT.DocUnits = 'DegCgrd';
EngOilT.EngDT = dt.float32;
EngOilT.EngInit = 0;
EngOilT.EngMin = -50;
EngOilT.EngMax = 150;
EngOilT.ReadIn = {'TEstimnInit1','TEstimnPer1'};
EngOilT.ReadType = 'Rte';


EngOilTVld = DataDict.IpSignal;
EngOilTVld.LongName = 'Engine Oil Temperature Valid';
EngOilTVld.Description = [...
  'Indicates if engine oil temperature value is valid or not'];
EngOilTVld.DocUnits = 'Cnt';
EngOilTVld.EngDT = dt.lgc;
EngOilTVld.EngInit = 0;
EngOilTVld.EngMin = 0;
EngOilTVld.EngMax = 1;
EngOilTVld.ReadIn = {'TEstimnInit1','TEstimnPer1'};
EngOilTVld.ReadType = 'Rte';


HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = 'Provides handwheel velocity value';
HwVel.DocUnits = 'HwRadPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'TEstimnPer1'};
HwVel.ReadType = 'Rte';


IgnTiOff = DataDict.IpSignal;
IgnTiOff.LongName = 'Ignition Time Off';
IgnTiOff.Description = [...
  'Ignition time off is used to update the filterstate variables when Ign' ...
  'ition time off is less than or equals to ignition offthreshold and veh' ...
  'licle time valid is True'];
IgnTiOff.DocUnits = 'Sec';
IgnTiOff.EngDT = dt.u32;
IgnTiOff.EngInit = 0;
IgnTiOff.EngMin = 0;
IgnTiOff.EngMax = 1720000;
IgnTiOff.ReadIn = {'TEstimnInit1','TEstimnPer1'};
IgnTiOff.ReadType = 'Rte';


MotAndThermProtnLoaMod = DataDict.IpSignal;
MotAndThermProtnLoaMod.LongName = 'Motor And Thermal Protection Loss Of Assist Mode';
MotAndThermProtnLoaMod.Description = [...
  'Motor And Thermal Protection Loss of Assist Mode signal is being gener' ...
  'ated by Loss of Assist Manager function.'];
MotAndThermProtnLoaMod.DocUnits = 'Cnt';
MotAndThermProtnLoaMod.EngDT = dt.u08;
MotAndThermProtnLoaMod.EngInit = 0;
MotAndThermProtnLoaMod.EngMin = 0;
MotAndThermProtnLoaMod.EngMax = 255;
MotAndThermProtnLoaMod.ReadIn = {'TEstimnInit1','TEstimnPer1'};
MotAndThermProtnLoaMod.ReadType = 'Rte';


MotCurrPeakEstimd = DataDict.IpSignal;
MotCurrPeakEstimd.LongName = 'Motor Current Peak Estimated';
MotCurrPeakEstimd.Description = [...
  'Provides estimated peak motor current'];
MotCurrPeakEstimd.DocUnits = 'AmprSqd';
MotCurrPeakEstimd.EngDT = dt.float32;
MotCurrPeakEstimd.EngInit = 0;
MotCurrPeakEstimd.EngMin = 0;
MotCurrPeakEstimd.EngMax = 62500;
MotCurrPeakEstimd.ReadIn = {'TEstimnPer1'};
MotCurrPeakEstimd.ReadType = 'Rte';


VehTiVld = DataDict.IpSignal;
VehTiVld.LongName = 'Vehicle Time Valid';
VehTiVld.Description = [...
  'Flag to indicate Vehicle Time validity'];
VehTiVld.DocUnits = 'Cnt';
VehTiVld.EngDT = dt.lgc;
VehTiVld.EngInit = 0;
VehTiVld.EngMin = 0;
VehTiVld.EngMax = 1;
VehTiVld.ReadIn = {'TEstimnInit1','TEstimnPer1'};
VehTiVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
AssiMechT = DataDict.OpSignal;
AssiMechT.LongName = 'Assist Mechanism Temperature';
AssiMechT.Description = [...
  'Assist Mechanism Temperature Estimate'];
AssiMechT.DocUnits = 'DegCgrd';
AssiMechT.SwcShoName = 'TEstimn';
AssiMechT.EngDT = dt.float32;
AssiMechT.EngInit = 25;
AssiMechT.EngMin = -50;
AssiMechT.EngMax = 150;
AssiMechT.TestTolerance = 0.03125;
AssiMechT.WrittenIn = {'TEstimnInit1','TEstimnPer1'};
AssiMechT.WriteType = 'Rte';


MotFetT = DataDict.OpSignal;
MotFetT.LongName = 'Motor Field Effect Transistor Temperature';
MotFetT.Description = [...
  'Estimated temperature of FETs (power transistors)'];
MotFetT.DocUnits = 'DegCgrd';
MotFetT.SwcShoName = 'TEstimn';
MotFetT.EngDT = dt.float32;
MotFetT.EngInit = 25;
MotFetT.EngMin = -50;
MotFetT.EngMax = 200;
MotFetT.TestTolerance = 0.03125;
MotFetT.WrittenIn = {'TEstimnInit1','TEstimnPer1'};
MotFetT.WriteType = 'Rte';


MotMagT = DataDict.OpSignal;
MotMagT.LongName = 'Motor Magnet Temperature';
MotMagT.Description = [...
  'Estimated Temperature of Motor Magnet'];
MotMagT.DocUnits = 'DegCgrd';
MotMagT.SwcShoName = 'TEstimn';
MotMagT.EngDT = dt.float32;
MotMagT.EngInit = 25;
MotMagT.EngMin = -50;
MotMagT.EngMax = 150;
MotMagT.TestTolerance = 0.03125;
MotMagT.WrittenIn = {'TEstimnInit1','TEstimnPer1'};
MotMagT.WriteType = 'Rte';


MotWidgT = DataDict.OpSignal;
MotWidgT.LongName = 'Motor Winding Temperature';
MotWidgT.Description = [...
  'Estimated Temperature of Motor Winding'];
MotWidgT.DocUnits = 'DegCgrd';
MotWidgT.SwcShoName = 'TEstimn';
MotWidgT.EngDT = dt.float32;
MotWidgT.EngInit = 25;
MotWidgT.EngMin = -50;
MotWidgT.EngMax = 300;
MotWidgT.TestTolerance = 0.03125;
MotWidgT.WrittenIn = {'TEstimnInit1','TEstimnPer1'};
MotWidgT.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
FilStVariRepInitFlg = DataDict.IRV;
FilStVariRepInitFlg.LongName = 'Filter State Variable Repeat Initialization Flag';
FilStVariRepInitFlg.Description = [...
  'Flag to Repeat Initialization of the Filter State Variable'];
FilStVariRepInitFlg.DocUnits = 'Cnt';
FilStVariRepInitFlg.EngDT = dt.lgc;
FilStVariRepInitFlg.EngInit = 0;
FilStVariRepInitFlg.EngMin = 0;
FilStVariRepInitFlg.EngMax = 1;
FilStVariRepInitFlg.ReadIn = {'TEstimnPer1'};
FilStVariRepInitFlg.WrittenIn = {'TEstimnInit1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
TEstimnAmbPwrMplr = DataDict.Calibration;
TEstimnAmbPwrMplr.LongName = 'Temperature Estimation Ambient Power Multiplier';
TEstimnAmbPwrMplr.Description = [...
  'Delta Temperature Compensation multiplier to convert motor peak curren' ...
  't squared to Watts. Index 0 -> No Fault, Index 1 -> Single ECU Mode, I' ...
  'ndex 2-> FET Mitigation Mode'];
TEstimnAmbPwrMplr.DocUnits = 'WattPerAmprSqd';
TEstimnAmbPwrMplr.EngDT = dt.float32;
TEstimnAmbPwrMplr.EngVal =  ...
   [0.01             0.01             0.01];
TEstimnAmbPwrMplr.EngMin = 0;
TEstimnAmbPwrMplr.EngMax = 1;
TEstimnAmbPwrMplr.Cardinality = 'Inin';
TEstimnAmbPwrMplr.CustomerVisible = false;
TEstimnAmbPwrMplr.Online = false;
TEstimnAmbPwrMplr.Impact = 'H';
TEstimnAmbPwrMplr.TuningOwner = 'ThermMngt';
TEstimnAmbPwrMplr.GraphLink = {''};
TEstimnAmbPwrMplr.Monotony = 'None';
TEstimnAmbPwrMplr.MaxGrad = 998;
TEstimnAmbPwrMplr.PortName = 'TEstimnAmbPwrMplr';


TEstimnAmbTSca = DataDict.Calibration;
TEstimnAmbTSca.LongName = 'Temperature Estimation Ambient Temperature Scale';
TEstimnAmbTSca.Description = [...
  'Scale factor which scales the ambient temperature to estimate the temp' ...
  'erature of the Assist Mechanism housing. Index 0 -> No Fault, Index 1 ' ...
  '-> Single ECU Mode, Index 2-> FET Mitigation Mode'];
TEstimnAmbTSca.DocUnits = 'Uls';
TEstimnAmbTSca.EngDT = dt.float32;
TEstimnAmbTSca.EngVal =  ...
   [0.9              0.9              0.9];
TEstimnAmbTSca.EngMin = 0;
TEstimnAmbTSca.EngMax = 1;
TEstimnAmbTSca.Cardinality = 'Inin';
TEstimnAmbTSca.CustomerVisible = false;
TEstimnAmbTSca.Online = false;
TEstimnAmbTSca.Impact = 'H';
TEstimnAmbTSca.TuningOwner = 'ThermMngt';
TEstimnAmbTSca.GraphLink = {''};
TEstimnAmbTSca.Monotony = 'None';
TEstimnAmbTSca.MaxGrad = 998;
TEstimnAmbTSca.PortName = 'TEstimnAmbTSca';


TEstimnAssiMechAmbLpFilFrq = DataDict.Calibration;
TEstimnAssiMechAmbLpFilFrq.LongName = 'Temperature Estimation Assist Mechanism Ambient Low Pass Filter Frequency (Dual Ecu)';
TEstimnAssiMechAmbLpFilFrq.Description = [...
  'Non faulted (Dual Ecu) mode Calibration to set pole of Delta Temperatu' ...
  're Compensation function low pass filter for the Assist Mechanism corr' ...
  'ection factor'];
TEstimnAssiMechAmbLpFilFrq.DocUnits = 'Hz';
TEstimnAssiMechAmbLpFilFrq.EngDT = dt.float32;
TEstimnAssiMechAmbLpFilFrq.EngVal = 0.024;
TEstimnAssiMechAmbLpFilFrq.EngMin = 1e-05;
TEstimnAssiMechAmbLpFilFrq.EngMax = 0.1;
TEstimnAssiMechAmbLpFilFrq.Cardinality = 'Inin';
TEstimnAssiMechAmbLpFilFrq.CustomerVisible = false;
TEstimnAssiMechAmbLpFilFrq.Online = false;
TEstimnAssiMechAmbLpFilFrq.Impact = 'H';
TEstimnAssiMechAmbLpFilFrq.TuningOwner = 'ThermMngt';
TEstimnAssiMechAmbLpFilFrq.GraphLink = {''};
TEstimnAssiMechAmbLpFilFrq.Monotony = 'None';
TEstimnAssiMechAmbLpFilFrq.MaxGrad = 998;
TEstimnAssiMechAmbLpFilFrq.PortName = 'TEstimnAssiMechAmbLpFilFrq';


TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn = DataDict.Calibration;
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.LongName = 'Temperature Estimation Assist Mechanism Ambient Low Pass Filter Frequency Dual ECU Fault Mitigation (Single Ecu)';
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.Description = [...
  'Single Ecu mode Calibration to set pole of Delta Temperature Compensat' ...
  'ion function low pass filter for the Assist Mechanism correction facto' ...
  'r'];
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.DocUnits = 'Hz';
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.EngDT = dt.float32;
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.EngVal = 0.024;
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.EngMin = 1e-05;
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.EngMax = 0.1;
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.Cardinality = 'Inin';
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.CustomerVisible = false;
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.Online = false;
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.Impact = 'H';
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.TuningOwner = 'ThermMngt';
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.GraphLink = {''};
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.Monotony = 'None';
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.MaxGrad = 998;
TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn.PortName = 'TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn';


TEstimnAssiMechAmbLpFilFrqFetMtgtnEna = DataDict.Calibration;
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.LongName = 'Temperature Estimation Assist Mechanism Ambient Low Pass Filter Frequency FET Mitigation Enable';
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.Description = [...
  'FET mitigation mode Calibration to set pole of Delta Temperature Compe' ...
  'nsation Function low pass filter for the Assist Mech correction factor' ...
  ''];
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.DocUnits = 'Hz';
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.EngDT = dt.float32;
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.EngVal = 0.024;
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.EngMin = 1e-05;
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.EngMax = 0.1;
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.Cardinality = 'Inin';
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.CustomerVisible = false;
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.Online = false;
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.Impact = 'H';
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.TuningOwner = 'ThermMngt';
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.GraphLink = {''};
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.Monotony = 'None';
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.MaxGrad = 998;
TEstimnAssiMechAmbLpFilFrqFetMtgtnEna.PortName = 'TEstimnAssiMechAmbLpFilFrqFetMtgtnEna';


TEstimnAssiMechAmbMplr = DataDict.Calibration;
TEstimnAssiMechAmbMplr.LongName = 'Temperature Estimation Assist Mechanism Ambient Multiplier';
TEstimnAssiMechAmbMplr.Description = [...
  'Delta Temperature Compensation multiplier to convert Watts to an offse' ...
  't temperature correction for the temperature estimate for the Assist M' ...
  'echanism. Index 0 -> No Fault, Index 1 -> Single ECU Mode,Index 2-> FE' ...
  'T Mitigation Mode'];
TEstimnAssiMechAmbMplr.DocUnits = 'DegCgrdPerWatt';
TEstimnAssiMechAmbMplr.EngDT = dt.float32;
TEstimnAssiMechAmbMplr.EngVal =  ...
   [0.01             0.01             0.01];
TEstimnAssiMechAmbMplr.EngMin = -1;
TEstimnAssiMechAmbMplr.EngMax = 1;
TEstimnAssiMechAmbMplr.Cardinality = 'Inin';
TEstimnAssiMechAmbMplr.CustomerVisible = false;
TEstimnAssiMechAmbMplr.Online = false;
TEstimnAssiMechAmbMplr.Impact = 'H';
TEstimnAssiMechAmbMplr.TuningOwner = 'ThermMngt';
TEstimnAssiMechAmbMplr.GraphLink = {''};
TEstimnAssiMechAmbMplr.Monotony = 'None';
TEstimnAssiMechAmbMplr.MaxGrad = 998;
TEstimnAssiMechAmbMplr.PortName = 'TEstimnAssiMechAmbMplr';


TEstimnAssiMechCorrLim = DataDict.Calibration;
TEstimnAssiMechCorrLim.LongName = 'Temperature Estimation Assist Mechanism Correction Limit';
TEstimnAssiMechCorrLim.Description = [...
  'Limit for the Assist Mechanism correction variable. Index 0 -> NoFault' ...
  ', Index 1 -> Single ECU Mode, Index 2 -> FET Mitigation Mode'];
TEstimnAssiMechCorrLim.DocUnits = 'DegCgrd';
TEstimnAssiMechCorrLim.EngDT = dt.float32;
TEstimnAssiMechCorrLim.EngVal =  ...
   [60               60               60];
TEstimnAssiMechCorrLim.EngMin = -70;
TEstimnAssiMechCorrLim.EngMax = 70;
TEstimnAssiMechCorrLim.Cardinality = 'Inin';
TEstimnAssiMechCorrLim.CustomerVisible = false;
TEstimnAssiMechCorrLim.Online = false;
TEstimnAssiMechCorrLim.Impact = 'H';
TEstimnAssiMechCorrLim.TuningOwner = 'ThermMngt';
TEstimnAssiMechCorrLim.GraphLink = {''};
TEstimnAssiMechCorrLim.Monotony = 'None';
TEstimnAssiMechCorrLim.MaxGrad = 998;
TEstimnAssiMechCorrLim.PortName = 'TEstimnAssiMechCorrLim';


TEstimnAssiMechDampgSca = DataDict.Calibration;
TEstimnAssiMechDampgSca.LongName = 'Temperature Estimation Assist Mechanism Damping Scale';
TEstimnAssiMechDampgSca.Description = [...
  'Delta Temperature Compensation multiplier to convert handwheel velocit' ...
  'y to units of Nm representing mechanical friction generated by damping' ...
  'in Assist Mechanism. Index 0 -> No Fault, Index 1 -> Single ECU Mode,I' ...
  'ndex 2 -> FET Mitigation Mode'];
TEstimnAssiMechDampgSca.DocUnits = 'MotNwtMtrPerMotRadPerSec';
TEstimnAssiMechDampgSca.EngDT = dt.float32;
TEstimnAssiMechDampgSca.EngVal =  ...
   [0.0001           0.0001           0.0001];
TEstimnAssiMechDampgSca.EngMin = 0;
TEstimnAssiMechDampgSca.EngMax = 1;
TEstimnAssiMechDampgSca.Cardinality = 'Inin';
TEstimnAssiMechDampgSca.CustomerVisible = false;
TEstimnAssiMechDampgSca.Online = false;
TEstimnAssiMechDampgSca.Impact = 'H';
TEstimnAssiMechDampgSca.TuningOwner = 'ThermMngt';
TEstimnAssiMechDampgSca.GraphLink = {''};
TEstimnAssiMechDampgSca.Monotony = 'None';
TEstimnAssiMechDampgSca.MaxGrad = 998;
TEstimnAssiMechDampgSca.PortName = 'TEstimnAssiMechDampgSca';


TEstimnAssiMechDftT = DataDict.Calibration;
TEstimnAssiMechDftT.LongName = 'Temperature Estimation Assist Mechanism Default Temperature';
TEstimnAssiMechDftT.Description = [...
  'Default value for Assist Mechanism temperature used when a OEM serial ' ...
  'commumination message is sent to defeat. Index 0 -> No Fault, Index 1 ' ...
  '-> Single ECU Mode, Index 2 -> FET Mitigation Mode'];
TEstimnAssiMechDftT.DocUnits = 'DegCgrd';
TEstimnAssiMechDftT.EngDT = dt.float32;
TEstimnAssiMechDftT.EngVal =  ...
   [50               50               50];
TEstimnAssiMechDftT.EngMin = 0;
TEstimnAssiMechDftT.EngMax = 100;
TEstimnAssiMechDftT.Cardinality = 'Inin';
TEstimnAssiMechDftT.CustomerVisible = false;
TEstimnAssiMechDftT.Online = false;
TEstimnAssiMechDftT.Impact = 'H';
TEstimnAssiMechDftT.TuningOwner = 'ThermMngt';
TEstimnAssiMechDftT.GraphLink = {''};
TEstimnAssiMechDftT.Monotony = 'None';
TEstimnAssiMechDftT.MaxGrad = 998;
TEstimnAssiMechDftT.PortName = 'TEstimnAssiMechDftT';


TEstimnAssiMechLLFilCoeffA1 = DataDict.Calibration;
TEstimnAssiMechLLFilCoeffA1.LongName = 'Temperature Estimation Assist Mechanism Lead Lag Filter Coefficent A1';
TEstimnAssiMechLLFilCoeffA1.Description = [...
  'Lead-lag filter pole coefficient (represents pole frequency) for theAs' ...
  'sist Mechanism temperature estimate. Index 0 -> No Fault, Index 1 -> S' ...
  'ingle ECU Mode, Index 2 -> FET Mitigation Mode'];
TEstimnAssiMechLLFilCoeffA1.DocUnits = 'Uls';
TEstimnAssiMechLLFilCoeffA1.EngDT = dt.float32;
TEstimnAssiMechLLFilCoeffA1.EngVal =  ...
   [0.99996858       0.99996858       0.99996858];
TEstimnAssiMechLLFilCoeffA1.EngMin = 0;
TEstimnAssiMechLLFilCoeffA1.EngMax = 1;
TEstimnAssiMechLLFilCoeffA1.Cardinality = 'Inin';
TEstimnAssiMechLLFilCoeffA1.CustomerVisible = false;
TEstimnAssiMechLLFilCoeffA1.Online = false;
TEstimnAssiMechLLFilCoeffA1.Impact = 'H';
TEstimnAssiMechLLFilCoeffA1.TuningOwner = 'ThermMngt';
TEstimnAssiMechLLFilCoeffA1.GraphLink = {''};
TEstimnAssiMechLLFilCoeffA1.Monotony = 'None';
TEstimnAssiMechLLFilCoeffA1.MaxGrad = 998;
TEstimnAssiMechLLFilCoeffA1.PortName = 'TEstimnAssiMechLLFilCoeffA1';


TEstimnAssiMechLLFilCoeffB0 = DataDict.Calibration;
TEstimnAssiMechLLFilCoeffB0.LongName = 'Temperature Estimation Assist Mechanism Lead Lag Filter Coefficent B0';
TEstimnAssiMechLLFilCoeffB0.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ')for the Assist Mechanism temperature estimate. Index 0 -> No Fault, I' ...
  'ndex 1 -> Single ECU Mode, Index 2 -> FET Mitigation Mode'];
TEstimnAssiMechLLFilCoeffB0.DocUnits = 'Uls';
TEstimnAssiMechLLFilCoeffB0.EngDT = dt.float32;
TEstimnAssiMechLLFilCoeffB0.EngVal =  ...
   [0.4761987        0.4761987        0.4761987];
TEstimnAssiMechLLFilCoeffB0.EngMin = 0;
TEstimnAssiMechLLFilCoeffB0.EngMax = 14304;
TEstimnAssiMechLLFilCoeffB0.Cardinality = 'Inin';
TEstimnAssiMechLLFilCoeffB0.CustomerVisible = false;
TEstimnAssiMechLLFilCoeffB0.Online = false;
TEstimnAssiMechLLFilCoeffB0.Impact = 'H';
TEstimnAssiMechLLFilCoeffB0.TuningOwner = 'ThermMngt';
TEstimnAssiMechLLFilCoeffB0.GraphLink = {''};
TEstimnAssiMechLLFilCoeffB0.Monotony = 'None';
TEstimnAssiMechLLFilCoeffB0.MaxGrad = 998;
TEstimnAssiMechLLFilCoeffB0.PortName = 'TEstimnAssiMechLLFilCoeffB0';


TEstimnAssiMechLLFilCoeffB1 = DataDict.Calibration;
TEstimnAssiMechLLFilCoeffB1.LongName = 'Temperature Estimation Assist Mechanism Lead Lag Filter Coefficent B1';
TEstimnAssiMechLLFilCoeffB1.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ')for the Assist Mechanism temperature estimate. Index 0 -> No Fault, I' ...
  'ndex 1 -> Single ECU Mode, Index 2 -> FET Mitigation Mode'];
TEstimnAssiMechLLFilCoeffB1.DocUnits = 'Uls';
TEstimnAssiMechLLFilCoeffB1.EngDT = dt.float32;
TEstimnAssiMechLLFilCoeffB1.EngVal =  ...
   [-0.4761673       -0.4761673       -0.4761673];
TEstimnAssiMechLLFilCoeffB1.EngMin = -14303;
TEstimnAssiMechLLFilCoeffB1.EngMax = 0;
TEstimnAssiMechLLFilCoeffB1.Cardinality = 'Inin';
TEstimnAssiMechLLFilCoeffB1.CustomerVisible = false;
TEstimnAssiMechLLFilCoeffB1.Online = false;
TEstimnAssiMechLLFilCoeffB1.Impact = 'H';
TEstimnAssiMechLLFilCoeffB1.TuningOwner = 'ThermMngt';
TEstimnAssiMechLLFilCoeffB1.GraphLink = {''};
TEstimnAssiMechLLFilCoeffB1.Monotony = 'None';
TEstimnAssiMechLLFilCoeffB1.MaxGrad = 998;
TEstimnAssiMechLLFilCoeffB1.PortName = 'TEstimnAssiMechLLFilCoeffB1';


TEstimnAssiMechSlew = DataDict.Calibration;
TEstimnAssiMechSlew.LongName = 'Temperature Estimation Assist Mechanism Slew';
TEstimnAssiMechSlew.Description = [...
  'Slew rate calibration to regulate the reset of the Assist Mechanism le' ...
  'ad-lag filter. Index 0 -> No Fault, Index 1 -> Single ECU Mode,Index 2' ...
  ' -> FET Mitigation Mode'];
TEstimnAssiMechSlew.DocUnits = 'DegCgrdPerSec';
TEstimnAssiMechSlew.EngDT = dt.float32;
TEstimnAssiMechSlew.EngVal =  ...
   [1                1                1];
TEstimnAssiMechSlew.EngMin = 0;
TEstimnAssiMechSlew.EngMax = 100;
TEstimnAssiMechSlew.Cardinality = 'Inin';
TEstimnAssiMechSlew.CustomerVisible = false;
TEstimnAssiMechSlew.Online = false;
TEstimnAssiMechSlew.Impact = 'H';
TEstimnAssiMechSlew.TuningOwner = 'ThermMngt';
TEstimnAssiMechSlew.GraphLink = {''};
TEstimnAssiMechSlew.Monotony = 'None';
TEstimnAssiMechSlew.MaxGrad = 998;
TEstimnAssiMechSlew.PortName = 'TEstimnAssiMechSlew';


TEstimnCorrnTAssiMech = DataDict.Calibration;
TEstimnCorrnTAssiMech.LongName = 'Temperature Estimation Correction Temperature Assist Mechanism';
TEstimnCorrnTAssiMech.Description = [...
  'Small correction temperature to reflect  expected temperature offset b' ...
  'etween temperature measurement device location and assist mechanism. I' ...
  'ndex 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2 -> FET Mitigat' ...
  'ion Mode'];
TEstimnCorrnTAssiMech.DocUnits = 'DegCgrd';
TEstimnCorrnTAssiMech.EngDT = dt.float32;
TEstimnCorrnTAssiMech.EngVal =  ...
   [0                0                0];
TEstimnCorrnTAssiMech.EngMin = -20;
TEstimnCorrnTAssiMech.EngMax = 20;
TEstimnCorrnTAssiMech.Cardinality = 'Inin';
TEstimnCorrnTAssiMech.CustomerVisible = false;
TEstimnCorrnTAssiMech.Online = false;
TEstimnCorrnTAssiMech.Impact = 'H';
TEstimnCorrnTAssiMech.TuningOwner = 'ThermMngt';
TEstimnCorrnTAssiMech.GraphLink = {''};
TEstimnCorrnTAssiMech.Monotony = 'None';
TEstimnCorrnTAssiMech.MaxGrad = 998;
TEstimnCorrnTAssiMech.PortName = 'TEstimnCorrnTAssiMech';


TEstimnCorrnTCu = DataDict.Calibration;
TEstimnCorrnTCu.LongName = 'Temperature Estimation Correction Temperature Copper';
TEstimnCorrnTCu.Description = [...
  'Small correction temperature to reflect  expected temperature offset b' ...
  'etween temperature measurement device location and motor copper windin' ...
  'gs. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2 -> FET Mi' ...
  'tigation Mode'];
TEstimnCorrnTCu.DocUnits = 'DegCgrd';
TEstimnCorrnTCu.EngDT = dt.float32;
TEstimnCorrnTCu.EngVal =  ...
   [0                0                0];
TEstimnCorrnTCu.EngMin = -20;
TEstimnCorrnTCu.EngMax = 20;
TEstimnCorrnTCu.Cardinality = 'Inin';
TEstimnCorrnTCu.CustomerVisible = false;
TEstimnCorrnTCu.Online = false;
TEstimnCorrnTCu.Impact = 'H';
TEstimnCorrnTCu.TuningOwner = 'ThermMngt';
TEstimnCorrnTCu.GraphLink = {''};
TEstimnCorrnTCu.Monotony = 'None';
TEstimnCorrnTCu.MaxGrad = 998;
TEstimnCorrnTCu.PortName = 'TEstimnCorrnTCu';


TEstimnCorrnTMag = DataDict.Calibration;
TEstimnCorrnTMag.LongName = 'Temperature Estimation Correction Temperature Magnet';
TEstimnCorrnTMag.Description = [...
  'Small correction temperature to reflect  expected temperature offset b' ...
  'etween temperature measurement device location and rotor magnets. Inde' ...
  'x 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2 -> FET Mitigation' ...
  ' Mode'];
TEstimnCorrnTMag.DocUnits = 'DegCgrd';
TEstimnCorrnTMag.EngDT = dt.float32;
TEstimnCorrnTMag.EngVal =  ...
   [0                0                0];
TEstimnCorrnTMag.EngMin = -20;
TEstimnCorrnTMag.EngMax = 20;
TEstimnCorrnTMag.Cardinality = 'Inin';
TEstimnCorrnTMag.CustomerVisible = false;
TEstimnCorrnTMag.Online = false;
TEstimnCorrnTMag.Impact = 'H';
TEstimnCorrnTMag.TuningOwner = 'ThermMngt';
TEstimnCorrnTMag.GraphLink = {''};
TEstimnCorrnTMag.Monotony = 'None';
TEstimnCorrnTMag.MaxGrad = 998;
TEstimnCorrnTMag.PortName = 'TEstimnCorrnTMag';


TEstimnCorrnTSi = DataDict.Calibration;
TEstimnCorrnTSi.LongName = 'Temperature Estimation Correction Temperature Silicon';
TEstimnCorrnTSi.Description = [...
  'Small correction temperature to reflect expected temperature offset be' ...
  'tween temperature measurement device location and power transistors. I' ...
  'ndex 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2 -> FET Mitigat' ...
  'ion Mode'];
TEstimnCorrnTSi.DocUnits = 'DegCgrd';
TEstimnCorrnTSi.EngDT = dt.float32;
TEstimnCorrnTSi.EngVal =  ...
   [0                0                0];
TEstimnCorrnTSi.EngMin = -20;
TEstimnCorrnTSi.EngMax = 20;
TEstimnCorrnTSi.Cardinality = 'Inin';
TEstimnCorrnTSi.CustomerVisible = false;
TEstimnCorrnTSi.Online = false;
TEstimnCorrnTSi.Impact = 'H';
TEstimnCorrnTSi.TuningOwner = 'ThermMngt';
TEstimnCorrnTSi.GraphLink = {''};
TEstimnCorrnTSi.Monotony = 'None';
TEstimnCorrnTSi.MaxGrad = 998;
TEstimnCorrnTSi.PortName = 'TEstimnCorrnTSi';


TEstimnCuAmbLpFilFrq = DataDict.Calibration;
TEstimnCuAmbLpFilFrq.LongName = 'Temperature Estimation Copper Ambient Low Pass Filter Frequency (Dual Ecu)';
TEstimnCuAmbLpFilFrq.Description = [...
  'Non faulted (Dual Ecu) mode Calibration to set pole of Delta Temperatu' ...
  're Compensation function low pass filter for the Copper correction fac' ...
  'tor'];
TEstimnCuAmbLpFilFrq.DocUnits = 'Hz';
TEstimnCuAmbLpFilFrq.EngDT = dt.float32;
TEstimnCuAmbLpFilFrq.EngVal = 0.024;
TEstimnCuAmbLpFilFrq.EngMin = 1e-05;
TEstimnCuAmbLpFilFrq.EngMax = 0.1;
TEstimnCuAmbLpFilFrq.Cardinality = 'Inin';
TEstimnCuAmbLpFilFrq.CustomerVisible = false;
TEstimnCuAmbLpFilFrq.Online = false;
TEstimnCuAmbLpFilFrq.Impact = 'H';
TEstimnCuAmbLpFilFrq.TuningOwner = 'ThermMngt';
TEstimnCuAmbLpFilFrq.GraphLink = {''};
TEstimnCuAmbLpFilFrq.Monotony = 'None';
TEstimnCuAmbLpFilFrq.MaxGrad = 998;
TEstimnCuAmbLpFilFrq.PortName = 'TEstimnCuAmbLpFilFrq';


TEstimnCuAmbLpFilFrqDualEcuFltMtgtn = DataDict.Calibration;
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.LongName = 'Temperature Estimation Copper Ambient Low Pass Filter Frequency Dual ECU Fault Mitigation(Single Ecu)';
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.Description = [...
  'Single Ecu mode Calibration to set pole of Delta Temperature Compensat' ...
  'ion function low pass filter for the Copper correction factor'];
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.DocUnits = 'Hz';
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.EngDT = dt.float32;
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.EngVal = 0.024;
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.EngMin = 1e-05;
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.EngMax = 0.1;
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.Cardinality = 'Inin';
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.CustomerVisible = false;
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.Online = false;
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.Impact = 'H';
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.TuningOwner = 'ThermMngt';
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.GraphLink = {''};
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.Monotony = 'None';
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.MaxGrad = 998;
TEstimnCuAmbLpFilFrqDualEcuFltMtgtn.PortName = 'TEstimnCuAmbLpFilFrqDualEcuFltMtgtn';


TEstimnCuAmbLpFilFrqFetMtgtnEna = DataDict.Calibration;
TEstimnCuAmbLpFilFrqFetMtgtnEna.LongName = 'Temperature Estimation Cu Ambient Low Pass Filter Frequency FET Mitigation Enable';
TEstimnCuAmbLpFilFrqFetMtgtnEna.Description = [...
  'FET mitigation mode Calibration to set pole of Delta Temperature Compe' ...
  'nsation Function low pass filter for the Cu correction factor'];
TEstimnCuAmbLpFilFrqFetMtgtnEna.DocUnits = 'Hz';
TEstimnCuAmbLpFilFrqFetMtgtnEna.EngDT = dt.float32;
TEstimnCuAmbLpFilFrqFetMtgtnEna.EngVal = 0.024;
TEstimnCuAmbLpFilFrqFetMtgtnEna.EngMin = 1e-05;
TEstimnCuAmbLpFilFrqFetMtgtnEna.EngMax = 0.1;
TEstimnCuAmbLpFilFrqFetMtgtnEna.Cardinality = 'Inin';
TEstimnCuAmbLpFilFrqFetMtgtnEna.CustomerVisible = false;
TEstimnCuAmbLpFilFrqFetMtgtnEna.Online = false;
TEstimnCuAmbLpFilFrqFetMtgtnEna.Impact = 'H';
TEstimnCuAmbLpFilFrqFetMtgtnEna.TuningOwner = 'ThermMngt';
TEstimnCuAmbLpFilFrqFetMtgtnEna.GraphLink = {''};
TEstimnCuAmbLpFilFrqFetMtgtnEna.Monotony = 'None';
TEstimnCuAmbLpFilFrqFetMtgtnEna.MaxGrad = 998;
TEstimnCuAmbLpFilFrqFetMtgtnEna.PortName = 'TEstimnCuAmbLpFilFrqFetMtgtnEna';


TEstimnCuAmbMplr = DataDict.Calibration;
TEstimnCuAmbMplr.LongName = 'Temperature Estimation Copper Ambient Multiplier';
TEstimnCuAmbMplr.Description = [...
  'Delta Temperature Compensation multiplier to convert Watts to an offse' ...
  't temperature correction for the temperature estimate for the motor Co' ...
  'pper windings. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index ' ...
  '2-> FET Mitigation Mode'];
TEstimnCuAmbMplr.DocUnits = 'DegCgrdPerWatt';
TEstimnCuAmbMplr.EngDT = dt.float32;
TEstimnCuAmbMplr.EngVal =  ...
   [0.75             0.75             0.75];
TEstimnCuAmbMplr.EngMin = -1;
TEstimnCuAmbMplr.EngMax = 1;
TEstimnCuAmbMplr.Cardinality = 'Inin';
TEstimnCuAmbMplr.CustomerVisible = false;
TEstimnCuAmbMplr.Online = false;
TEstimnCuAmbMplr.Impact = 'H';
TEstimnCuAmbMplr.TuningOwner = 'ThermMngt';
TEstimnCuAmbMplr.GraphLink = {''};
TEstimnCuAmbMplr.Monotony = 'None';
TEstimnCuAmbMplr.MaxGrad = 998;
TEstimnCuAmbMplr.PortName = 'TEstimnCuAmbMplr';


TEstimnCuCorrnLim = DataDict.Calibration;
TEstimnCuCorrnLim.LongName = 'Temperature Estimation Copper Correction Limit';
TEstimnCuCorrnLim.Description = [...
  'Limit for the Copper correction variable. Index 0 -> No Fault, Index 1' ...
  ' -> Single ECU Mode, Index 2-> FET Mitigation Mode'];
TEstimnCuCorrnLim.DocUnits = 'DegCgrd';
TEstimnCuCorrnLim.EngDT = dt.float32;
TEstimnCuCorrnLim.EngVal =  ...
   [80               80               80];
TEstimnCuCorrnLim.EngMin = -100;
TEstimnCuCorrnLim.EngMax = 100;
TEstimnCuCorrnLim.Cardinality = 'Inin';
TEstimnCuCorrnLim.CustomerVisible = false;
TEstimnCuCorrnLim.Online = false;
TEstimnCuCorrnLim.Impact = 'H';
TEstimnCuCorrnLim.TuningOwner = 'ThermMngt';
TEstimnCuCorrnLim.GraphLink = {''};
TEstimnCuCorrnLim.Monotony = 'None';
TEstimnCuCorrnLim.MaxGrad = 998;
TEstimnCuCorrnLim.PortName = 'TEstimnCuCorrnLim';


TEstimnCuLLFilCoeffA1 = DataDict.Calibration;
TEstimnCuLLFilCoeffA1.LongName = 'Temperature Estimation Copper Lead Lag Filter Coefficient A1';
TEstimnCuLLFilCoeffA1.Description = [...
  'Lead-lag filter pole coefficient (represents pole frequency) for Coppe' ...
  'r. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2-> FET Miti' ...
  'gation Mode'];
TEstimnCuLLFilCoeffA1.DocUnits = 'Uls';
TEstimnCuLLFilCoeffA1.EngDT = dt.float32;
TEstimnCuLLFilCoeffA1.EngVal =  ...
   [0.999943         0.999943         0.999943];
TEstimnCuLLFilCoeffA1.EngMin = 0;
TEstimnCuLLFilCoeffA1.EngMax = 1;
TEstimnCuLLFilCoeffA1.Cardinality = 'Inin';
TEstimnCuLLFilCoeffA1.CustomerVisible = false;
TEstimnCuLLFilCoeffA1.Online = false;
TEstimnCuLLFilCoeffA1.Impact = 'H';
TEstimnCuLLFilCoeffA1.TuningOwner = 'ThermMngt';
TEstimnCuLLFilCoeffA1.GraphLink = {''};
TEstimnCuLLFilCoeffA1.Monotony = 'None';
TEstimnCuLLFilCoeffA1.MaxGrad = 998;
TEstimnCuLLFilCoeffA1.PortName = 'TEstimnCuLLFilCoeffA1';


TEstimnCuLLFilCoeffB0 = DataDict.Calibration;
TEstimnCuLLFilCoeffB0.LongName = 'Temperature Estimation Copper Lead Lag Filter Coefficient B0';
TEstimnCuLLFilCoeffB0.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Copper. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2' ...
  '-> FET Mitigation Mode'];
TEstimnCuLLFilCoeffB0.DocUnits = 'Uls';
TEstimnCuLLFilCoeffB0.EngDT = dt.float32;
TEstimnCuLLFilCoeffB0.EngVal =  ...
   [0.86667          0.86667          0.86667];
TEstimnCuLLFilCoeffB0.EngMin = 0;
TEstimnCuLLFilCoeffB0.EngMax = 14304;
TEstimnCuLLFilCoeffB0.Cardinality = 'Inin';
TEstimnCuLLFilCoeffB0.CustomerVisible = false;
TEstimnCuLLFilCoeffB0.Online = false;
TEstimnCuLLFilCoeffB0.Impact = 'H';
TEstimnCuLLFilCoeffB0.TuningOwner = 'ThermMngt';
TEstimnCuLLFilCoeffB0.GraphLink = {''};
TEstimnCuLLFilCoeffB0.Monotony = 'None';
TEstimnCuLLFilCoeffB0.MaxGrad = 998;
TEstimnCuLLFilCoeffB0.PortName = 'TEstimnCuLLFilCoeffB0';


TEstimnCuLLFilCoeffB1 = DataDict.Calibration;
TEstimnCuLLFilCoeffB1.LongName = 'Temperature Estimation Copper Lead Lag Filter Coefficient B1';
TEstimnCuLLFilCoeffB1.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Copper. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2' ...
  '-> FET Mitigation Mode'];
TEstimnCuLLFilCoeffB1.DocUnits = 'Uls';
TEstimnCuLLFilCoeffB1.EngDT = dt.float32;
TEstimnCuLLFilCoeffB1.EngVal =  ...
   [-0.866613        -0.866613        -0.866613];
TEstimnCuLLFilCoeffB1.EngMin = -14303;
TEstimnCuLLFilCoeffB1.EngMax = 0;
TEstimnCuLLFilCoeffB1.Cardinality = 'Inin';
TEstimnCuLLFilCoeffB1.CustomerVisible = false;
TEstimnCuLLFilCoeffB1.Online = false;
TEstimnCuLLFilCoeffB1.Impact = 'H';
TEstimnCuLLFilCoeffB1.TuningOwner = 'ThermMngt';
TEstimnCuLLFilCoeffB1.GraphLink = {''};
TEstimnCuLLFilCoeffB1.Monotony = 'None';
TEstimnCuLLFilCoeffB1.MaxGrad = 998;
TEstimnCuLLFilCoeffB1.PortName = 'TEstimnCuLLFilCoeffB1';


TEstimnEngTSca = DataDict.Calibration;
TEstimnEngTSca.LongName = 'Temperature Estimation Engine Temperature Scale';
TEstimnEngTSca.Description = [...
  'Scale factor which scales engine temperature to estimate the temperatu' ...
  're of the Assist Mechanism housing. Index 0 -> No Fault, Index 1 -> Si' ...
  'ngle ECU Mode, Index 2-> FET Mitigation Mode'];
TEstimnEngTSca.DocUnits = 'Uls';
TEstimnEngTSca.EngDT = dt.float32;
TEstimnEngTSca.EngVal =  ...
   [0.1              0.1              0.1];
TEstimnEngTSca.EngMin = 0;
TEstimnEngTSca.EngMax = 1;
TEstimnEngTSca.Cardinality = 'Inin';
TEstimnEngTSca.CustomerVisible = false;
TEstimnEngTSca.Online = false;
TEstimnEngTSca.Impact = 'H';
TEstimnEngTSca.TuningOwner = 'ThermMngt';
TEstimnEngTSca.GraphLink = {''};
TEstimnEngTSca.Monotony = 'None';
TEstimnEngTSca.MaxGrad = 998;
TEstimnEngTSca.PortName = 'TEstimnEngTSca';


TEstimnIgnOffCtrlEna = DataDict.Calibration;
TEstimnIgnOffCtrlEna.LongName = 'Temperature Estimation Ignition Off Control Enable';
TEstimnIgnOffCtrlEna.Description = [...
  'Calibration to enable the counter for reinitializing filter state vari' ...
  'ables'];
TEstimnIgnOffCtrlEna.DocUnits = 'Cnt';
TEstimnIgnOffCtrlEna.EngDT = dt.lgc;
TEstimnIgnOffCtrlEna.EngVal = 0;
TEstimnIgnOffCtrlEna.EngMin = 0;
TEstimnIgnOffCtrlEna.EngMax = 1;
TEstimnIgnOffCtrlEna.Cardinality = 'Cmn';
TEstimnIgnOffCtrlEna.CustomerVisible = false;
TEstimnIgnOffCtrlEna.Online = false;
TEstimnIgnOffCtrlEna.Impact = 'H';
TEstimnIgnOffCtrlEna.TuningOwner = 'ThermMngt';
TEstimnIgnOffCtrlEna.GraphLink = {''};
TEstimnIgnOffCtrlEna.Monotony = 'None';
TEstimnIgnOffCtrlEna.MaxGrad = 998;
TEstimnIgnOffCtrlEna.PortName = 'TEstimnIgnOffCtrlEna';


TEstimnIgnOffMsgWaitTi = DataDict.Calibration;
TEstimnIgnOffMsgWaitTi.LongName = 'Temperature Estimation Ignition Off Message Wait Time';
TEstimnIgnOffMsgWaitTi.Description = [...
  'Time for which the counter needs to be run after the periodic begins t' ...
  'o execute.'];
TEstimnIgnOffMsgWaitTi.DocUnits = 'Sec';
TEstimnIgnOffMsgWaitTi.EngDT = dt.float32;
TEstimnIgnOffMsgWaitTi.EngVal = 0.5;
TEstimnIgnOffMsgWaitTi.EngMin = 0;
TEstimnIgnOffMsgWaitTi.EngMax = 60;
TEstimnIgnOffMsgWaitTi.Cardinality = 'Cmn';
TEstimnIgnOffMsgWaitTi.CustomerVisible = false;
TEstimnIgnOffMsgWaitTi.Online = false;
TEstimnIgnOffMsgWaitTi.Impact = 'H';
TEstimnIgnOffMsgWaitTi.TuningOwner = 'ThermMngt';
TEstimnIgnOffMsgWaitTi.GraphLink = {''};
TEstimnIgnOffMsgWaitTi.Monotony = 'None';
TEstimnIgnOffMsgWaitTi.MaxGrad = 998;
TEstimnIgnOffMsgWaitTi.PortName = 'TEstimnIgnOffMsgWaitTi';


TEstimnMagAmbLpFilFrq = DataDict.Calibration;
TEstimnMagAmbLpFilFrq.LongName = 'Temperature Estimation Magnet Ambient Low Pass Filter Frequency (Dual Ecu)';
TEstimnMagAmbLpFilFrq.Description = [...
  'Non faulted (Dual Ecu) mode Calibration to set pole of Delta Temperatu' ...
  're Compensation function low pass filter for the Magnet correction fac' ...
  'tor'];
TEstimnMagAmbLpFilFrq.DocUnits = 'Hz';
TEstimnMagAmbLpFilFrq.EngDT = dt.float32;
TEstimnMagAmbLpFilFrq.EngVal = 0.024;
TEstimnMagAmbLpFilFrq.EngMin = 1e-05;
TEstimnMagAmbLpFilFrq.EngMax = 0.1;
TEstimnMagAmbLpFilFrq.Cardinality = 'Inin';
TEstimnMagAmbLpFilFrq.CustomerVisible = false;
TEstimnMagAmbLpFilFrq.Online = false;
TEstimnMagAmbLpFilFrq.Impact = 'H';
TEstimnMagAmbLpFilFrq.TuningOwner = 'ThermMngt';
TEstimnMagAmbLpFilFrq.GraphLink = {''};
TEstimnMagAmbLpFilFrq.Monotony = 'None';
TEstimnMagAmbLpFilFrq.MaxGrad = 998;
TEstimnMagAmbLpFilFrq.PortName = 'TEstimnMagAmbLpFilFrq';


TEstimnMagAmbLpFilFrqDualEcuFltMtgtn = DataDict.Calibration;
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.LongName = 'Temperature Estimation Magnet Ambient Low Pass Filter Frequency Dual ECU Fault Mitigation(Single Ecu)';
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.Description = [...
  'Single Ecu mode Calibration to set pole of Delta Temperature Compensat' ...
  'ion function low pass filter for the Magnet correction factor'];
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.DocUnits = 'Hz';
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.EngDT = dt.float32;
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.EngVal = 0.024;
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.EngMin = 1e-05;
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.EngMax = 0.1;
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.Cardinality = 'Inin';
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.CustomerVisible = false;
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.Online = false;
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.Impact = 'H';
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.TuningOwner = 'ThermMngt';
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.GraphLink = {''};
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.Monotony = 'None';
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.MaxGrad = 998;
TEstimnMagAmbLpFilFrqDualEcuFltMtgtn.PortName = 'TEstimnMagAmbLpFilFrqDualEcuFltMtgtn';


TEstimnMagAmbLpFilFrqFetMtgtnEna = DataDict.Calibration;
TEstimnMagAmbLpFilFrqFetMtgtnEna.LongName = 'Temperature Estimation Magnet Ambient Low Pass Filter Frequency FET Mitigation Enable';
TEstimnMagAmbLpFilFrqFetMtgtnEna.Description = [...
  'FET mitigation mode Calibration to set pole of Delta Temperature Compe' ...
  'nsation Function low pass filter for the Magnet correction factor'];
TEstimnMagAmbLpFilFrqFetMtgtnEna.DocUnits = 'Hz';
TEstimnMagAmbLpFilFrqFetMtgtnEna.EngDT = dt.float32;
TEstimnMagAmbLpFilFrqFetMtgtnEna.EngVal = 0.024;
TEstimnMagAmbLpFilFrqFetMtgtnEna.EngMin = 1e-05;
TEstimnMagAmbLpFilFrqFetMtgtnEna.EngMax = 0.1;
TEstimnMagAmbLpFilFrqFetMtgtnEna.Cardinality = 'Inin';
TEstimnMagAmbLpFilFrqFetMtgtnEna.CustomerVisible = false;
TEstimnMagAmbLpFilFrqFetMtgtnEna.Online = false;
TEstimnMagAmbLpFilFrqFetMtgtnEna.Impact = 'H';
TEstimnMagAmbLpFilFrqFetMtgtnEna.TuningOwner = 'ThermMngt';
TEstimnMagAmbLpFilFrqFetMtgtnEna.GraphLink = {''};
TEstimnMagAmbLpFilFrqFetMtgtnEna.Monotony = 'None';
TEstimnMagAmbLpFilFrqFetMtgtnEna.MaxGrad = 998;
TEstimnMagAmbLpFilFrqFetMtgtnEna.PortName = 'TEstimnMagAmbLpFilFrqFetMtgtnEna';


TEstimnMagAmbMplr = DataDict.Calibration;
TEstimnMagAmbMplr.LongName = 'Temperature Estimation Magnet Ambient Multiplier';
TEstimnMagAmbMplr.Description = [...
  'Delta Temperature Compensation multiplier to convert Watts to an offse' ...
  't temperature correction for the temperature estimate for the rotor ma' ...
  'gnets. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2-> FET ' ...
  'Mitigation Mode'];
TEstimnMagAmbMplr.DocUnits = 'DegCgrdPerWatt';
TEstimnMagAmbMplr.EngDT = dt.float32;
TEstimnMagAmbMplr.EngVal =  ...
   [0.01             0.01             0.01];
TEstimnMagAmbMplr.EngMin = -1;
TEstimnMagAmbMplr.EngMax = 1;
TEstimnMagAmbMplr.Cardinality = 'Rt';
TEstimnMagAmbMplr.CustomerVisible = false;
TEstimnMagAmbMplr.Online = false;
TEstimnMagAmbMplr.Impact = 'H';
TEstimnMagAmbMplr.TuningOwner = 'ThermMngt';
TEstimnMagAmbMplr.GraphLink = {''};
TEstimnMagAmbMplr.Monotony = 'None';
TEstimnMagAmbMplr.MaxGrad = 998;
TEstimnMagAmbMplr.PortName = 'TEstimnMagAmbMplr';


TEstimnMagCorrnLim = DataDict.Calibration;
TEstimnMagCorrnLim.LongName = 'Temperature Estimation Magnet Correction Limit';
TEstimnMagCorrnLim.Description = [...
  'Limit for the Magnet correction variable. Index 0 -> No Fault, Index 1' ...
  ' -> Single ECU Mode, Index 2-> FET Mitigation Mode'];
TEstimnMagCorrnLim.DocUnits = 'DegCgrd';
TEstimnMagCorrnLim.EngDT = dt.float32;
TEstimnMagCorrnLim.EngVal =  ...
   [60               60               60];
TEstimnMagCorrnLim.EngMin = -100;
TEstimnMagCorrnLim.EngMax = 100;
TEstimnMagCorrnLim.Cardinality = 'Inin';
TEstimnMagCorrnLim.CustomerVisible = false;
TEstimnMagCorrnLim.Online = false;
TEstimnMagCorrnLim.Impact = 'H';
TEstimnMagCorrnLim.TuningOwner = 'ThermMngt';
TEstimnMagCorrnLim.GraphLink = {''};
TEstimnMagCorrnLim.Monotony = 'None';
TEstimnMagCorrnLim.MaxGrad = 998;
TEstimnMagCorrnLim.PortName = 'TEstimnMagCorrnLim';


TEstimnMagLLFilCoeffA1 = DataDict.Calibration;
TEstimnMagLLFilCoeffA1.LongName = 'Temperature Estimation Magnet Lead Lag Filter Coefficient A1';
TEstimnMagLLFilCoeffA1.Description = [...
  'Lead-lag filter pole coefficient (represents pole frequency) for Magne' ...
  't. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2-> FET Miti' ...
  'gation Mode'];
TEstimnMagLLFilCoeffA1.DocUnits = 'Uls';
TEstimnMagLLFilCoeffA1.EngDT = dt.float32;
TEstimnMagLLFilCoeffA1.EngVal =  ...
   [0.999962         0.999962         0.999962];
TEstimnMagLLFilCoeffA1.EngMin = 0;
TEstimnMagLLFilCoeffA1.EngMax = 1;
TEstimnMagLLFilCoeffA1.Cardinality = 'Inin';
TEstimnMagLLFilCoeffA1.CustomerVisible = false;
TEstimnMagLLFilCoeffA1.Online = false;
TEstimnMagLLFilCoeffA1.Impact = 'H';
TEstimnMagLLFilCoeffA1.TuningOwner = 'ThermMngt';
TEstimnMagLLFilCoeffA1.GraphLink = {''};
TEstimnMagLLFilCoeffA1.Monotony = 'None';
TEstimnMagLLFilCoeffA1.MaxGrad = 998;
TEstimnMagLLFilCoeffA1.PortName = 'TEstimnMagLLFilCoeffA1';


TEstimnMagLLFilCoeffB0 = DataDict.Calibration;
TEstimnMagLLFilCoeffB0.LongName = 'Temperature Estimation Magnet Lead Lag Filter Coefficient B0';
TEstimnMagLLFilCoeffB0.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Magnet. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2' ...
  '-> FET Mitigation Mode'];
TEstimnMagLLFilCoeffB0.DocUnits = 'Uls';
TEstimnMagLLFilCoeffB0.EngDT = dt.float32;
TEstimnMagLLFilCoeffB0.EngVal =  ...
   [0.571437         0.571437         0.571437];
TEstimnMagLLFilCoeffB0.EngMin = 0;
TEstimnMagLLFilCoeffB0.EngMax = 14304;
TEstimnMagLLFilCoeffB0.Cardinality = 'Inin';
TEstimnMagLLFilCoeffB0.CustomerVisible = false;
TEstimnMagLLFilCoeffB0.Online = false;
TEstimnMagLLFilCoeffB0.Impact = 'H';
TEstimnMagLLFilCoeffB0.TuningOwner = 'ThermMngt';
TEstimnMagLLFilCoeffB0.GraphLink = {''};
TEstimnMagLLFilCoeffB0.Monotony = 'None';
TEstimnMagLLFilCoeffB0.MaxGrad = 998;
TEstimnMagLLFilCoeffB0.PortName = 'TEstimnMagLLFilCoeffB0';


TEstimnMagLLFilCoeffB1 = DataDict.Calibration;
TEstimnMagLLFilCoeffB1.LongName = 'Temperature Estimation Magnet Lead Lag Filter Coefficient B1';
TEstimnMagLLFilCoeffB1.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Magnet. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2' ...
  '-> FET Mitigation Mode'];
TEstimnMagLLFilCoeffB1.DocUnits = 'Uls';
TEstimnMagLLFilCoeffB1.EngDT = dt.float32;
TEstimnMagLLFilCoeffB1.EngVal =  ...
   [-0.571399        -0.571399        -0.571399];
TEstimnMagLLFilCoeffB1.EngMin = -14303;
TEstimnMagLLFilCoeffB1.EngMax = 0;
TEstimnMagLLFilCoeffB1.Cardinality = 'Inin';
TEstimnMagLLFilCoeffB1.CustomerVisible = false;
TEstimnMagLLFilCoeffB1.Online = false;
TEstimnMagLLFilCoeffB1.Impact = 'H';
TEstimnMagLLFilCoeffB1.TuningOwner = 'ThermMngt';
TEstimnMagLLFilCoeffB1.GraphLink = {''};
TEstimnMagLLFilCoeffB1.Monotony = 'None';
TEstimnMagLLFilCoeffB1.MaxGrad = 998;
TEstimnMagLLFilCoeffB1.PortName = 'TEstimnMagLLFilCoeffB1';


TEstimnSiAmbLpFilFrq = DataDict.Calibration;
TEstimnSiAmbLpFilFrq.LongName = 'Temperature Estimation Silicon Ambient Low Pass Filter Frequency (Dual Ecu)';
TEstimnSiAmbLpFilFrq.Description = [...
  'Non faulted (Dual Ecu) mode Calibration to set pole of Delta Temperatu' ...
  're Compensation Function low pass filter for the Silicon correction fa' ...
  'ctor'];
TEstimnSiAmbLpFilFrq.DocUnits = 'Hz';
TEstimnSiAmbLpFilFrq.EngDT = dt.float32;
TEstimnSiAmbLpFilFrq.EngVal = 0.024;
TEstimnSiAmbLpFilFrq.EngMin = 1e-05;
TEstimnSiAmbLpFilFrq.EngMax = 0.1;
TEstimnSiAmbLpFilFrq.Cardinality = 'Inin';
TEstimnSiAmbLpFilFrq.CustomerVisible = false;
TEstimnSiAmbLpFilFrq.Online = false;
TEstimnSiAmbLpFilFrq.Impact = 'H';
TEstimnSiAmbLpFilFrq.TuningOwner = 'ThermMngt';
TEstimnSiAmbLpFilFrq.GraphLink = {''};
TEstimnSiAmbLpFilFrq.Monotony = 'None';
TEstimnSiAmbLpFilFrq.MaxGrad = 998;
TEstimnSiAmbLpFilFrq.PortName = 'TEstimnSiAmbLpFilFrq';


TEstimnSiAmbLpFilFrqDualEcuFltMtgtn = DataDict.Calibration;
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.LongName = 'Temperature Estimation Silicon Ambient Low Pass Filter Frequency Dual ECU Fault Mitigation(Single Ecu)';
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.Description = [...
  'Single Ecu mode Calibration to set pole of Delta Temperature Compensat' ...
  'ion Function low pass filter for the Silicon correction factor'];
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.DocUnits = 'Hz';
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.EngDT = dt.float32;
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.EngVal = 0.024;
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.EngMin = 1e-05;
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.EngMax = 0.1;
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.Cardinality = 'Inin';
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.CustomerVisible = false;
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.Online = false;
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.Impact = 'H';
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.TuningOwner = 'ThermMngt';
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.GraphLink = {''};
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.Monotony = 'None';
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.MaxGrad = 998;
TEstimnSiAmbLpFilFrqDualEcuFltMtgtn.PortName = 'TEstimnSiAmbLpFilFrqDualEcuFltMtgtn';


TEstimnSiAmbLpFilFrqFetMtgtnEna = DataDict.Calibration;
TEstimnSiAmbLpFilFrqFetMtgtnEna.LongName = 'Temperature Estimation Silicon Ambient Low Pass Filter Frequency FET Mitigation Enable';
TEstimnSiAmbLpFilFrqFetMtgtnEna.Description = [...
  'FET mitigation mode Calibration to set pole of Delta Temperature Compe' ...
  'nsation Function low pass filter for the Silicon correction factor'];
TEstimnSiAmbLpFilFrqFetMtgtnEna.DocUnits = 'Hz';
TEstimnSiAmbLpFilFrqFetMtgtnEna.EngDT = dt.float32;
TEstimnSiAmbLpFilFrqFetMtgtnEna.EngVal = 0.024;
TEstimnSiAmbLpFilFrqFetMtgtnEna.EngMin = 1e-05;
TEstimnSiAmbLpFilFrqFetMtgtnEna.EngMax = 0.1;
TEstimnSiAmbLpFilFrqFetMtgtnEna.Cardinality = 'Inin';
TEstimnSiAmbLpFilFrqFetMtgtnEna.CustomerVisible = false;
TEstimnSiAmbLpFilFrqFetMtgtnEna.Online = false;
TEstimnSiAmbLpFilFrqFetMtgtnEna.Impact = 'H';
TEstimnSiAmbLpFilFrqFetMtgtnEna.TuningOwner = 'ThermMngt';
TEstimnSiAmbLpFilFrqFetMtgtnEna.GraphLink = {''};
TEstimnSiAmbLpFilFrqFetMtgtnEna.Monotony = 'None';
TEstimnSiAmbLpFilFrqFetMtgtnEna.MaxGrad = 998;
TEstimnSiAmbLpFilFrqFetMtgtnEna.PortName = 'TEstimnSiAmbLpFilFrqFetMtgtnEna';


TEstimnSiAmbMplr = DataDict.Calibration;
TEstimnSiAmbMplr.LongName = 'Temperature Estimation Silicon Ambient Multiplier';
TEstimnSiAmbMplr.Description = [...
  'Delta Temperature Compensation multiplier to convert Watts to an offse' ...
  't temperature correction for the temperature estimate for Silicon. Ind' ...
  'ex 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2-> FET Mitigation' ...
  'Mode'];
TEstimnSiAmbMplr.DocUnits = 'DegCgrdPerWatt';
TEstimnSiAmbMplr.EngDT = dt.float32;
TEstimnSiAmbMplr.EngVal =  ...
   [0                0                0];
TEstimnSiAmbMplr.EngMin = -1;
TEstimnSiAmbMplr.EngMax = 1;
TEstimnSiAmbMplr.Cardinality = 'Inin';
TEstimnSiAmbMplr.CustomerVisible = false;
TEstimnSiAmbMplr.Online = false;
TEstimnSiAmbMplr.Impact = 'H';
TEstimnSiAmbMplr.TuningOwner = 'ThermMngt';
TEstimnSiAmbMplr.GraphLink = {''};
TEstimnSiAmbMplr.Monotony = 'None';
TEstimnSiAmbMplr.MaxGrad = 998;
TEstimnSiAmbMplr.PortName = 'TEstimnSiAmbMplr';


TEstimnSiCorrnLim = DataDict.Calibration;
TEstimnSiCorrnLim.LongName = 'Temperature Estimation Silicon Correction Limit';
TEstimnSiCorrnLim.Description = [...
  'Limit for the Silicon correction variable. Index 0 -> No Fault, Index ' ...
  '1 -> Single ECU Mode, Index 2-> FET Mitigation Mode'];
TEstimnSiCorrnLim.DocUnits = 'DegCgrd';
TEstimnSiCorrnLim.EngDT = dt.float32;
TEstimnSiCorrnLim.EngVal =  ...
   [60               60               60];
TEstimnSiCorrnLim.EngMin = -100;
TEstimnSiCorrnLim.EngMax = 100;
TEstimnSiCorrnLim.Cardinality = 'Inin';
TEstimnSiCorrnLim.CustomerVisible = false;
TEstimnSiCorrnLim.Online = false;
TEstimnSiCorrnLim.Impact = 'H';
TEstimnSiCorrnLim.TuningOwner = 'ThermMngt';
TEstimnSiCorrnLim.GraphLink = {''};
TEstimnSiCorrnLim.Monotony = 'None';
TEstimnSiCorrnLim.MaxGrad = 998;
TEstimnSiCorrnLim.PortName = 'TEstimnSiCorrnLim';


TEstimnSiLLFilCoeffA1 = DataDict.Calibration;
TEstimnSiLLFilCoeffA1.LongName = 'Temperature Estimation Silicon Lead Lag Filter Coefficient A1';
TEstimnSiLLFilCoeffA1.Description = [...
  'Lead-lag filter pole coefficient (represents pole frequency) for Silic' ...
  'on. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index 2-> FET Mit' ...
  'igation Mode'];
TEstimnSiLLFilCoeffA1.DocUnits = 'Uls';
TEstimnSiLLFilCoeffA1.EngDT = dt.float32;
TEstimnSiLLFilCoeffA1.EngVal =  ...
   [0.999889         0.999889         0.999889];
TEstimnSiLLFilCoeffA1.EngMin = 0;
TEstimnSiLLFilCoeffA1.EngMax = 1;
TEstimnSiLLFilCoeffA1.Cardinality = 'Inin';
TEstimnSiLLFilCoeffA1.CustomerVisible = false;
TEstimnSiLLFilCoeffA1.Online = false;
TEstimnSiLLFilCoeffA1.Impact = 'H';
TEstimnSiLLFilCoeffA1.TuningOwner = 'ThermMngt';
TEstimnSiLLFilCoeffA1.GraphLink = {''};
TEstimnSiLLFilCoeffA1.Monotony = 'None';
TEstimnSiLLFilCoeffA1.MaxGrad = 998;
TEstimnSiLLFilCoeffA1.PortName = 'TEstimnSiLLFilCoeffA1';


TEstimnSiLLFilCoeffB0 = DataDict.Calibration;
TEstimnSiLLFilCoeffB0.LongName = 'Temperature Estimation Silicon Lead Lag Filter Coefficient B0';
TEstimnSiLLFilCoeffB0.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Silicon.. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index' ...
  ' 2-> FET Mitigation Mode'];
TEstimnSiLLFilCoeffB0.DocUnits = 'Uls';
TEstimnSiLLFilCoeffB0.EngDT = dt.float32;
TEstimnSiLLFilCoeffB0.EngVal =  ...
   [1.68568          1.68568          1.68568];
TEstimnSiLLFilCoeffB0.EngMin = 0;
TEstimnSiLLFilCoeffB0.EngMax = 14304;
TEstimnSiLLFilCoeffB0.Cardinality = 'Inin';
TEstimnSiLLFilCoeffB0.CustomerVisible = false;
TEstimnSiLLFilCoeffB0.Online = false;
TEstimnSiLLFilCoeffB0.Impact = 'H';
TEstimnSiLLFilCoeffB0.TuningOwner = 'ThermMngt';
TEstimnSiLLFilCoeffB0.GraphLink = {''};
TEstimnSiLLFilCoeffB0.Monotony = 'None';
TEstimnSiLLFilCoeffB0.MaxGrad = 998;
TEstimnSiLLFilCoeffB0.PortName = 'TEstimnSiLLFilCoeffB0';


TEstimnSiLLFilCoeffB1 = DataDict.Calibration;
TEstimnSiLLFilCoeffB1.LongName = 'Temperature Estimation Silicon Lead Lag Filter Coefficient B1';
TEstimnSiLLFilCoeffB1.Description = [...
  'Lead-lag filter coefficient (partially determines filter zero location' ...
  ') for Silicon. Index 0 -> No Fault, Index 1 -> Single ECU Mode, Index ' ...
  '2-> FET Mitigation Mode'];
TEstimnSiLLFilCoeffB1.DocUnits = 'Uls';
TEstimnSiLLFilCoeffB1.EngDT = dt.float32;
TEstimnSiLLFilCoeffB1.EngVal =  ...
   [-1.68556         -1.68556         -1.68556];
TEstimnSiLLFilCoeffB1.EngMin = -14303;
TEstimnSiLLFilCoeffB1.EngMax = 0;
TEstimnSiLLFilCoeffB1.Cardinality = 'Inin';
TEstimnSiLLFilCoeffB1.CustomerVisible = false;
TEstimnSiLLFilCoeffB1.Online = false;
TEstimnSiLLFilCoeffB1.Impact = 'H';
TEstimnSiLLFilCoeffB1.TuningOwner = 'ThermMngt';
TEstimnSiLLFilCoeffB1.GraphLink = {''};
TEstimnSiLLFilCoeffB1.Monotony = 'None';
TEstimnSiLLFilCoeffB1.MaxGrad = 998;
TEstimnSiLLFilCoeffB1.PortName = 'TEstimnSiLLFilCoeffB1';


TEstimnTauAssiMech = DataDict.Calibration;
TEstimnTauAssiMech.LongName = 'Temperature Estimation Tau Assist Mechanism';
TEstimnTauAssiMech.Description = [...
  'Assist Mech time constant for temperature estimation'];
TEstimnTauAssiMech.DocUnits = 'Sec';
TEstimnTauAssiMech.EngDT = dt.float32;
TEstimnTauAssiMech.EngVal =  ...
   [4000             4000             4000];
TEstimnTauAssiMech.EngMin = 20;
TEstimnTauAssiMech.EngMax = 9000;
TEstimnTauAssiMech.Cardinality = 'Inin';
TEstimnTauAssiMech.CustomerVisible = false;
TEstimnTauAssiMech.Online = false;
TEstimnTauAssiMech.Impact = 'H';
TEstimnTauAssiMech.TuningOwner = 'ThermMngt';
TEstimnTauAssiMech.GraphLink = {''};
TEstimnTauAssiMech.Monotony = 'None';
TEstimnTauAssiMech.MaxGrad = 998;
TEstimnTauAssiMech.PortName = 'TEstimnTauAssiMech';


TEstimnTauCu = DataDict.Calibration;
TEstimnTauCu.LongName = 'Temperature Estimation Tau Cu';
TEstimnTauCu.Description = [...
  'Cu time constant for temperature estimation'];
TEstimnTauCu.DocUnits = 'Sec';
TEstimnTauCu.EngDT = dt.float32;
TEstimnTauCu.EngVal =  ...
   [79               79               79];
TEstimnTauCu.EngMin = 20;
TEstimnTauCu.EngMax = 2000;
TEstimnTauCu.Cardinality = 'Inin';
TEstimnTauCu.CustomerVisible = false;
TEstimnTauCu.Online = false;
TEstimnTauCu.Impact = 'H';
TEstimnTauCu.TuningOwner = 'ThermMngt';
TEstimnTauCu.GraphLink = {''};
TEstimnTauCu.Monotony = 'None';
TEstimnTauCu.MaxGrad = 998;
TEstimnTauCu.PortName = 'TEstimnTauCu';


TEstimnTauMag = DataDict.Calibration;
TEstimnTauMag.LongName = 'Temperature Estimation Tau Magnet';
TEstimnTauMag.Description = [...
  'Magnet time constant for temperature estimation'];
TEstimnTauMag.DocUnits = 'Sec';
TEstimnTauMag.EngDT = dt.float32;
TEstimnTauMag.EngVal =  ...
   [50               50               50];
TEstimnTauMag.EngMin = 20;
TEstimnTauMag.EngMax = 2000;
TEstimnTauMag.Cardinality = 'Inin';
TEstimnTauMag.CustomerVisible = false;
TEstimnTauMag.Online = false;
TEstimnTauMag.Impact = 'H';
TEstimnTauMag.TuningOwner = 'ThermMngt';
TEstimnTauMag.GraphLink = {''};
TEstimnTauMag.Monotony = 'None';
TEstimnTauMag.MaxGrad = 998;
TEstimnTauMag.PortName = 'TEstimnTauMag';


TEstimnTauSi = DataDict.Calibration;
TEstimnTauSi.LongName = 'Temperature Estimation Tau Sillicon';
TEstimnTauSi.Description = [...
  'Sillicon time constant for temperature estimation'];
TEstimnTauSi.DocUnits = 'Sec';
TEstimnTauSi.EngDT = dt.float32;
TEstimnTauSi.EngVal =  ...
   [214              214              214];
TEstimnTauSi.EngMin = 20;
TEstimnTauSi.EngMax = 2000;
TEstimnTauSi.Cardinality = 'Inin';
TEstimnTauSi.CustomerVisible = false;
TEstimnTauSi.Online = false;
TEstimnTauSi.Impact = 'H';
TEstimnTauSi.TuningOwner = 'ThermMngt';
TEstimnTauSi.GraphLink = {''};
TEstimnTauSi.Monotony = 'None';
TEstimnTauSi.MaxGrad = 998;
TEstimnTauSi.PortName = 'TEstimnTauSi';


TEstimnWghtAvrgTDi = DataDict.Calibration;
TEstimnWghtAvrgTDi.LongName = 'Temperature Estimation Weighted Average Temperature Disable';
TEstimnWghtAvrgTDi.Description = [...
  'Calibration to disable the use of Weighted Average Temperature for cal' ...
  'culating the Assist Mechanism lead-lag filter output. Index 0 -> No Fa' ...
  'ult, Index 1 -> Single ECU Mode, Index 2-> FET Mitigation Mode'];
TEstimnWghtAvrgTDi.DocUnits = 'Cnt';
TEstimnWghtAvrgTDi.EngDT = dt.lgc;
TEstimnWghtAvrgTDi.EngVal =  ...
   [0                0                0];
TEstimnWghtAvrgTDi.EngMin = 0;
TEstimnWghtAvrgTDi.EngMax = 1;
TEstimnWghtAvrgTDi.Cardinality = 'Inin';
TEstimnWghtAvrgTDi.CustomerVisible = false;
TEstimnWghtAvrgTDi.Online = false;
TEstimnWghtAvrgTDi.Impact = 'H';
TEstimnWghtAvrgTDi.TuningOwner = 'ThermMngt';
TEstimnWghtAvrgTDi.GraphLink = {''};
TEstimnWghtAvrgTDi.Monotony = 'None';
TEstimnWghtAvrgTDi.MaxGrad = 998;
TEstimnWghtAvrgTDi.PortName = 'TEstimnWghtAvrgTDi';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
TFilStVal = DataDict.NVM;
TFilStVal.LongName = 'Filter State Value';
TFilStVal.Description = [...
  'Filters representing Si,Mag, Cu, and AssisMech state Values which will' ...
  ' be written at each sample time for use at Power On after Power Off'];
TFilStVal.DocUnits = 'Uls';
TFilStVal.EngDT = struct.TFilStValRec1;
TFilStVal.EngInit = [];
TFilStVal.EngMin = [struct('FilSiLpStVal',0,'FilMagLpStVal',0,'FilCuLpStVal',0,'FilAssisMechLpStVal',0,'FilSiLLStVal',-2431500,'FilMagLLStVal',-2431500,'FilCuLLStVal',-2431500,'FilAssisMechLLStVal',-4577000)];
TFilStVal.EngMax = [struct('FilSiLpStVal',62500,'FilMagLpStVal',62500,'FilCuLpStVal',62500,'FilAssisMechLpStVal',1764,'FilSiLLStVal',1001200,'FilMagLLStVal',1001200,'FilCuLLStVal',1001200,'FilAssisMechLLStVal',1716400)];
TFilStVal.CustomerVisible = false;
TFilStVal.Impact = 'H';
TFilStVal.TuningOwner = 'FDD';
TFilStVal.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dTEstimnAmbPwr = DataDict.Display;
dTEstimnAmbPwr.LongName = 'Temperature Estimation Ambient Power';
dTEstimnAmbPwr.Description = 'Display variable for Ambient Power';
dTEstimnAmbPwr.DocUnits = 'WattPerAmprSqd';
dTEstimnAmbPwr.EngDT = dt.float32;
dTEstimnAmbPwr.EngMin = 0;
dTEstimnAmbPwr.EngMax = 62500;
dTEstimnAmbPwr.InitRowCol = [1  1];


dTEstimnAssiMechCorrn = DataDict.Display;
dTEstimnAssiMechCorrn.LongName = 'Temperature Estimation Assist Mechanical Correction';
dTEstimnAssiMechCorrn.Description = [...
  'Display variable for Assist Mechanical Correction'];
dTEstimnAssiMechCorrn.DocUnits = 'DegCgrd';
dTEstimnAssiMechCorrn.EngDT = dt.float32;
dTEstimnAssiMechCorrn.EngMin = -70;
dTEstimnAssiMechCorrn.EngMax = 70;
dTEstimnAssiMechCorrn.InitRowCol = [1  1];


dTEstimnAssiMechDampgSca = DataDict.Display;
dTEstimnAssiMechDampgSca.LongName = 'Temperature Estimation Assist Mechanism Damping Scale';
dTEstimnAssiMechDampgSca.Description = [...
  'Display variable for Assist Mechanism Damping Scale Multiplier'];
dTEstimnAssiMechDampgSca.DocUnits = 'MotNwtMtrPerMotRadPerSec';
dTEstimnAssiMechDampgSca.EngDT = dt.float32;
dTEstimnAssiMechDampgSca.EngMin = 0;
dTEstimnAssiMechDampgSca.EngMax = 1764;
dTEstimnAssiMechDampgSca.InitRowCol = [1  1];


dTEstimnAssiMechFil = DataDict.Display;
dTEstimnAssiMechFil.LongName = 'Temperature Estimation Assist Mechanism Filter';
dTEstimnAssiMechFil.Description = [...
  'Display variable for Assist Mechanism Filter'];
dTEstimnAssiMechFil.DocUnits = 'DegCgrd';
dTEstimnAssiMechFil.EngDT = dt.float32;
dTEstimnAssiMechFil.EngMin = -14496070;
dTEstimnAssiMechFil.EngMax = 14496070;
dTEstimnAssiMechFil.InitRowCol = [1  1];


dTEstimnCuCorrn = DataDict.Display;
dTEstimnCuCorrn.LongName = 'Temperature Estimation Copper Correction';
dTEstimnCuCorrn.Description = [...
  'Display variable for Copper Correction'];
dTEstimnCuCorrn.DocUnits = 'DegCgrd';
dTEstimnCuCorrn.EngDT = dt.float32;
dTEstimnCuCorrn.EngMin = -100;
dTEstimnCuCorrn.EngMax = 100;
dTEstimnCuCorrn.InitRowCol = [1  1];


dTEstimnMagCorrn = DataDict.Display;
dTEstimnMagCorrn.LongName = 'Temperature Estimation Magnet Correction';
dTEstimnMagCorrn.Description = [...
  'Display variable for Magnet Correction'];
dTEstimnMagCorrn.DocUnits = 'DegCgrd';
dTEstimnMagCorrn.EngDT = dt.float32;
dTEstimnMagCorrn.EngMin = -100;
dTEstimnMagCorrn.EngMax = 100;
dTEstimnMagCorrn.InitRowCol = [1  1];


dTEstimnScadAmbT = DataDict.Display;
dTEstimnScadAmbT.LongName = 'Temperature Estimation Scaled Ambient Temperature';
dTEstimnScadAmbT.Description = [...
  'Display variable for Scaled Ambient Temperature'];
dTEstimnScadAmbT.DocUnits = 'DegCgrd';
dTEstimnScadAmbT.EngDT = dt.float32;
dTEstimnScadAmbT.EngMin = -50;
dTEstimnScadAmbT.EngMax = 150;
dTEstimnScadAmbT.InitRowCol = [1  1];


dTEstimnScadEngT = DataDict.Display;
dTEstimnScadEngT.LongName = 'Temperature Estimation Scaled Engine Temperature';
dTEstimnScadEngT.Description = [...
  'Display variable for Scaled Engine Temperature'];
dTEstimnScadEngT.DocUnits = 'DegCgrd';
dTEstimnScadEngT.EngDT = dt.float32;
dTEstimnScadEngT.EngMin = -50;
dTEstimnScadEngT.EngMax = 150;
dTEstimnScadEngT.InitRowCol = [1  1];


dTEstimnSiCorrn = DataDict.Display;
dTEstimnSiCorrn.LongName = 'Temperature Estimation Silicon Correction';
dTEstimnSiCorrn.Description = [...
  'Display variable for Silicon Correction'];
dTEstimnSiCorrn.DocUnits = 'DegCgrd';
dTEstimnSiCorrn.EngDT = dt.float32;
dTEstimnSiCorrn.EngMin = -100;
dTEstimnSiCorrn.EngMax = 100;
dTEstimnSiCorrn.InitRowCol = [1  1];


dTEstimnWghtAvrgT = DataDict.Display;
dTEstimnWghtAvrgT.LongName = 'Temperature Estimation Weighted Average Temperature';
dTEstimnWghtAvrgT.Description = [...
  'Display variable for Weighted Average Temperature '];
dTEstimnWghtAvrgT.DocUnits = 'DegCgrd';
dTEstimnWghtAvrgT.EngDT = dt.float32;
dTEstimnWghtAvrgT.EngMin = -100;
dTEstimnWghtAvrgT.EngMax = 300;
dTEstimnWghtAvrgT.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AmbTVldPrev = DataDict.PIM;
AmbTVldPrev.LongName = 'Ambient Temperature Valid Previous';
AmbTVldPrev.Description = [...
  'Previous value of Ambient Temperature Valid'];
AmbTVldPrev.DocUnits = 'Cnt';
AmbTVldPrev.EngDT = dt.lgc;
AmbTVldPrev.EngMin = 0;
AmbTVldPrev.EngMax = 1;
AmbTVldPrev.InitRowCol = [1  1];


AssiMechFilLp = DataDict.PIM;
AssiMechFilLp.LongName = 'Assist Mechanism Filter LowPass';
AssiMechFilLp.Description = [...
  'State variable for Assist Mechanism Temperature Lowpass filter'];
AssiMechFilLp.DocUnits = 'Uls';
AssiMechFilLp.EngDT = struct.FilLpRec1;
AssiMechFilLp.EngMin = [struct('FilSt',0,'FilGain',6.2831655e-06)];
AssiMechFilLp.EngMax = [struct('FilSt',1764,'FilGain',0.060898632)];
AssiMechFilLp.InitRowCol = [1  1];


AssiMechTEstimnPrev = DataDict.PIM;
AssiMechTEstimnPrev.LongName = 'Assist Mechanism Temperature Estimation Previous';
AssiMechTEstimnPrev.Description = [...
  'Previous value of Assist Mechanism Temperature Estimation'];
AssiMechTEstimnPrev.DocUnits = 'DegCgrd';
AssiMechTEstimnPrev.EngDT = dt.float32;
AssiMechTEstimnPrev.EngMin = -4577000;
AssiMechTEstimnPrev.EngMax = 1716400;
AssiMechTEstimnPrev.InitRowCol = [1  1];


AssiMechTInitEna = DataDict.PIM;
AssiMechTInitEna.LongName = 'Assist Mechanism Temperature Initialization Enable';
AssiMechTInitEna.Description = [...
  'Enables Assist Mechanism Temperature Initialization'];
AssiMechTInitEna.DocUnits = 'Cnt';
AssiMechTInitEna.EngDT = dt.lgc;
AssiMechTInitEna.EngMin = 0;
AssiMechTInitEna.EngMax = 1;
AssiMechTInitEna.InitRowCol = [1  1];


AssiMechTSlewLimPrev = DataDict.PIM;
AssiMechTSlewLimPrev.LongName = 'Assist Mechanism Temperature Slew Limit Previous';
AssiMechTSlewLimPrev.Description = [...
  'Previous value of Assist Mechanism Temperature after slew limit'];
AssiMechTSlewLimPrev.DocUnits = 'DegCgrd';
AssiMechTSlewLimPrev.EngDT = dt.float32;
AssiMechTSlewLimPrev.EngMin = -100;
AssiMechTSlewLimPrev.EngMax = 400;
AssiMechTSlewLimPrev.InitRowCol = [1  1];


CuFilLp = DataDict.PIM;
CuFilLp.LongName = 'Copper Filter Lowpass';
CuFilLp.Description = [...
  'State variable for copper Temperature Lowpass filter'];
CuFilLp.DocUnits = 'Uls';
CuFilLp.EngDT = struct.FilLpRec1;
CuFilLp.EngMin = [struct('FilSt',0,'FilGain',6.2831655e-06)];
CuFilLp.EngMax = [struct('FilSt',62500,'FilGain',0.060898632)];
CuFilLp.InitRowCol = [1  1];


CuTEstimnPrev = DataDict.PIM;
CuTEstimnPrev.LongName = 'Copper Temperature Estimation Previous';
CuTEstimnPrev.Description = [...
  'Previous value of Copper Temperature Estimation'];
CuTEstimnPrev.DocUnits = 'DegCgrd';
CuTEstimnPrev.EngDT = dt.float32;
CuTEstimnPrev.EngMin = -2431500;
CuTEstimnPrev.EngMax = 1001200;
CuTEstimnPrev.InitRowCol = [1  1];


DualEcuFltMtgtnPrev = DataDict.PIM;
DualEcuFltMtgtnPrev.LongName = 'Dual ECU Fault Mitigation Previous';
DualEcuFltMtgtnPrev.Description = [...
  'Previous value of dual ECU fault mitigation flag. '];
DualEcuFltMtgtnPrev.DocUnits = 'Cnt';
DualEcuFltMtgtnPrev.EngDT = dt.lgc;
DualEcuFltMtgtnPrev.EngMin = 0;
DualEcuFltMtgtnPrev.EngMax = 1;
DualEcuFltMtgtnPrev.InitRowCol = [1  1];


EngOilTVldPrev = DataDict.PIM;
EngOilTVldPrev.LongName = 'Engine Oil Temperature Valid Previous';
EngOilTVldPrev.Description = [...
  'Previous value of Engine Oil Temperature Valid'];
EngOilTVldPrev.DocUnits = 'Cnt';
EngOilTVldPrev.EngDT = dt.lgc;
EngOilTVldPrev.EngMin = 0;
EngOilTVldPrev.EngMax = 1;
EngOilTVldPrev.InitRowCol = [1  1];


FetMtgtnEnaPrev = DataDict.PIM;
FetMtgtnEnaPrev.LongName = 'FET Mitigation Enable Previous';
FetMtgtnEnaPrev.Description = [...
  'Previous value of FET mitigation enable flag. '];
FetMtgtnEnaPrev.DocUnits = 'Cnt';
FetMtgtnEnaPrev.EngDT = dt.lgc;
FetMtgtnEnaPrev.EngMin = 0;
FetMtgtnEnaPrev.EngMax = 1;
FetMtgtnEnaPrev.InitRowCol = [1  1];


FilAssiMechLLValPwrUp = DataDict.PIM;
FilAssiMechLLValPwrUp.LongName = 'Filter Assist Mech Lead Lag Value Power Up';
FilAssiMechLLValPwrUp.Description = [...
  'Assist Mech Lead Lag Filter representing Magnet state value saved at i' ...
  'nitialization for use in periodic function '];
FilAssiMechLLValPwrUp.DocUnits = 'Uls';
FilAssiMechLLValPwrUp.EngDT = dt.float32;
FilAssiMechLLValPwrUp.EngMin = -4577000;
FilAssiMechLLValPwrUp.EngMax = 1716400;
FilAssiMechLLValPwrUp.InitRowCol = [1  1];


FilAssiMechLpValPwrUp = DataDict.PIM;
FilAssiMechLpValPwrUp.LongName = 'Filter Assist Mech Low Pass Value Power Up';
FilAssiMechLpValPwrUp.Description = [...
  'Filter representing Assist Mech state value saved at initialization fo' ...
  'r use in periodic function '];
FilAssiMechLpValPwrUp.DocUnits = 'Uls';
FilAssiMechLpValPwrUp.EngDT = dt.float32;
FilAssiMechLpValPwrUp.EngMin = 0;
FilAssiMechLpValPwrUp.EngMax = 1764;
FilAssiMechLpValPwrUp.InitRowCol = [1  1];


FilCuLLValPwrUp = DataDict.PIM;
FilCuLLValPwrUp.LongName = 'Filter Cu Lead Lag Value Power Up';
FilCuLLValPwrUp.Description = [...
  'Lead Lag Filter representing Cu state value saved at initialization fo' ...
  'r use in periodic function '];
FilCuLLValPwrUp.DocUnits = 'Uls';
FilCuLLValPwrUp.EngDT = dt.float32;
FilCuLLValPwrUp.EngMin = -2431500;
FilCuLLValPwrUp.EngMax = 1001200;
FilCuLLValPwrUp.InitRowCol = [1  1];


FilCuLpValPwrUp = DataDict.PIM;
FilCuLpValPwrUp.LongName = 'Filter Cu Low Pass Value Power Up';
FilCuLpValPwrUp.Description = [...
  'Filter representing Cu state value saved at initialization for use in ' ...
  'periodic function '];
FilCuLpValPwrUp.DocUnits = 'Uls';
FilCuLpValPwrUp.EngDT = dt.float32;
FilCuLpValPwrUp.EngMin = 0;
FilCuLpValPwrUp.EngMax = 62500;
FilCuLpValPwrUp.InitRowCol = [1  1];


FilMagLLValPwrUp = DataDict.PIM;
FilMagLLValPwrUp.LongName = 'Filter Magnet Lead Lag Value Power Up';
FilMagLLValPwrUp.Description = [...
  'Lead Lag Filter representing Magnet state value saved at initializatio' ...
  'n for use in periodic function '];
FilMagLLValPwrUp.DocUnits = 'Uls';
FilMagLLValPwrUp.EngDT = dt.float32;
FilMagLLValPwrUp.EngMin = -2431500;
FilMagLLValPwrUp.EngMax = 1001200;
FilMagLLValPwrUp.InitRowCol = [1  1];


FilMagLpValPwrUp = DataDict.PIM;
FilMagLpValPwrUp.LongName = 'Filter Magnet  Low Pass Value Power Up';
FilMagLpValPwrUp.Description = [...
  'Filter representing Magnet state value saved at initialization for use' ...
  ' in periodic function '];
FilMagLpValPwrUp.DocUnits = 'Uls';
FilMagLpValPwrUp.EngDT = dt.float32;
FilMagLpValPwrUp.EngMin = 0;
FilMagLpValPwrUp.EngMax = 62500;
FilMagLpValPwrUp.InitRowCol = [1  1];


FilSiLLValPwrUp = DataDict.PIM;
FilSiLLValPwrUp.LongName = 'Filter Silicon Lead Lag Value Power Up';
FilSiLLValPwrUp.Description = [...
  'Lead Lag Filter representing Silicon state value saved at initializati' ...
  'on for use in periodic function '];
FilSiLLValPwrUp.DocUnits = 'Uls';
FilSiLLValPwrUp.EngDT = dt.float32;
FilSiLLValPwrUp.EngMin = -2431500;
FilSiLLValPwrUp.EngMax = 1001200;
FilSiLLValPwrUp.InitRowCol = [1  1];


FilSiLpValPwrUp = DataDict.PIM;
FilSiLpValPwrUp.LongName = 'Filter Sillicon Low Pass Value Power Up';
FilSiLpValPwrUp.Description = [...
  'Filter representing Sillicon state value saved at initialization for u' ...
  'se in periodic function '];
FilSiLpValPwrUp.DocUnits = 'Uls';
FilSiLpValPwrUp.EngDT = dt.float32;
FilSiLpValPwrUp.EngMin = 0;
FilSiLpValPwrUp.EngMax = 62500;
FilSiLpValPwrUp.InitRowCol = [1  1];


MagFilLp = DataDict.PIM;
MagFilLp.LongName = 'Magnet Filter Lowpass';
MagFilLp.Description = [...
  'State variable for Magnet Temperature Lowpass filter'];
MagFilLp.DocUnits = 'Uls';
MagFilLp.EngDT = struct.FilLpRec1;
MagFilLp.EngMin = [struct('FilSt',0,'FilGain',6.2831655e-06)];
MagFilLp.EngMax = [struct('FilSt',62500,'FilGain',0.060898632)];
MagFilLp.InitRowCol = [1  1];


MagTEstimnPrev = DataDict.PIM;
MagTEstimnPrev.LongName = 'Magnet Temperature Estimation Previous';
MagTEstimnPrev.Description = [...
  'Previous value of Magnet Temperature Estimation'];
MagTEstimnPrev.DocUnits = 'DegCgrd';
MagTEstimnPrev.EngDT = dt.float32;
MagTEstimnPrev.EngMin = -2431500;
MagTEstimnPrev.EngMax = 1001200;
MagTEstimnPrev.InitRowCol = [1  1];


RepInitCntrFlg = DataDict.PIM;
RepInitCntrFlg.LongName = 'Repeat Initialization Counter Flag';
RepInitCntrFlg.Description = [...
  'Flag to Repeat Initialization of the Filter State Variable'];
RepInitCntrFlg.DocUnits = 'Cnt';
RepInitCntrFlg.EngDT = dt.lgc;
RepInitCntrFlg.EngMin = 0;
RepInitCntrFlg.EngMax = 1;
RepInitCntrFlg.InitRowCol = [1  1];


RepInitCntrVal = DataDict.PIM;
RepInitCntrVal.LongName = 'Repeat Initialization Counter Value';
RepInitCntrVal.Description = [...
  'Repeat Initialization of Counter Value'];
RepInitCntrVal.DocUnits = 'Sec';
RepInitCntrVal.EngDT = dt.float32;
RepInitCntrVal.EngMin = 0;
RepInitCntrVal.EngMax = 60.1;
RepInitCntrVal.InitRowCol = [1  1];


SiFilLp = DataDict.PIM;
SiFilLp.LongName = 'Silicon Filter Lowpass';
SiFilLp.Description = [...
  'State variable for Silicon Temperature Lowpass filter'];
SiFilLp.DocUnits = 'Uls';
SiFilLp.EngDT = struct.FilLpRec1;
SiFilLp.EngMin = [struct('FilSt',0,'FilGain',6.2831655e-06)];
SiFilLp.EngMax = [struct('FilSt',62500,'FilGain',0.060898632)];
SiFilLp.InitRowCol = [1  1];


SiTEstimnPrev = DataDict.PIM;
SiTEstimnPrev.LongName = 'Silicon Temperature Estimation Previous';
SiTEstimnPrev.Description = [...
  'Previous value of Silicon Temperature Estimation'];
SiTEstimnPrev.DocUnits = 'DegCgrd';
SiTEstimnPrev.EngDT = dt.float32;
SiTEstimnPrev.EngMin = -2431500;
SiTEstimnPrev.EngMax = 1001200;
SiTEstimnPrev.InitRowCol = [1  1];


TEstimnFltMtgtnCalIdx = DataDict.PIM;
TEstimnFltMtgtnCalIdx.LongName = 'Fault Mitigation Calibration Index';
TEstimnFltMtgtnCalIdx.Description = [...
  'Index indicating the calibration to use based on fault mitigation stat' ...
  'e'];
TEstimnFltMtgtnCalIdx.DocUnits = 'Cnt';
TEstimnFltMtgtnCalIdx.EngDT = dt.u08;
TEstimnFltMtgtnCalIdx.EngMin = 0;
TEstimnFltMtgtnCalIdx.EngMax = 2;
TEstimnFltMtgtnCalIdx.InitRowCol = [1  1];



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


ASSIMECHLLFILVALMAX_ULS_F32 = DataDict.Constant;
ASSIMECHLLFILVALMAX_ULS_F32.LongName = 'Magnet Lead Lag Filter Value Maximum';
ASSIMECHLLFILVALMAX_ULS_F32.Description = [...
  'Maximum Limit value for magnet Lead Lag filter state variable'];
ASSIMECHLLFILVALMAX_ULS_F32.DocUnits = 'Uls';
ASSIMECHLLFILVALMAX_ULS_F32.EngDT = dt.float32;
ASSIMECHLLFILVALMAX_ULS_F32.EngVal = 1716400;
ASSIMECHLLFILVALMAX_ULS_F32.Define = 'Local';


ASSIMECHLLFILVALMIN_ULS_F32 = DataDict.Constant;
ASSIMECHLLFILVALMIN_ULS_F32.LongName = 'Magnet Lead Lag Filter Value Minimum';
ASSIMECHLLFILVALMIN_ULS_F32.Description = [...
  'Minimum Limit value for magnet Lead Lag filter state variables'];
ASSIMECHLLFILVALMIN_ULS_F32.DocUnits = 'Uls';
ASSIMECHLLFILVALMIN_ULS_F32.EngDT = dt.float32;
ASSIMECHLLFILVALMIN_ULS_F32.EngVal = -4577000;
ASSIMECHLLFILVALMIN_ULS_F32.Define = 'Local';


ASSIMECHLPFILVALMAX_ULS_F32 = DataDict.Constant;
ASSIMECHLPFILVALMAX_ULS_F32.LongName = 'Magnet Lowpass Filter Value Maximum';
ASSIMECHLPFILVALMAX_ULS_F32.Description = [...
  'Maximum Limit value for magnet lowpass filter state variable'];
ASSIMECHLPFILVALMAX_ULS_F32.DocUnits = 'Uls';
ASSIMECHLPFILVALMAX_ULS_F32.EngDT = dt.float32;
ASSIMECHLPFILVALMAX_ULS_F32.EngVal = 1764;
ASSIMECHLPFILVALMAX_ULS_F32.Define = 'Local';


ASSIMECHLPFILVALMIN_ULS_F32 = DataDict.Constant;
ASSIMECHLPFILVALMIN_ULS_F32.LongName = 'Magnet lowpass Filter Value Minimum';
ASSIMECHLPFILVALMIN_ULS_F32.Description = [...
  'Minimum Limit value for magnet lowpass filter state variables'];
ASSIMECHLPFILVALMIN_ULS_F32.DocUnits = 'Uls';
ASSIMECHLPFILVALMIN_ULS_F32.EngDT = dt.float32;
ASSIMECHLPFILVALMIN_ULS_F32.EngVal = 0;
ASSIMECHLPFILVALMIN_ULS_F32.Define = 'Local';


CULLFILVALMAX_ULS_F32 = DataDict.Constant;
CULLFILVALMAX_ULS_F32.LongName = 'Copper Lead Lag Filter Value Maximum';
CULLFILVALMAX_ULS_F32.Description = [...
  'Maximum Limit value for copper Lead Lag filter state variable'];
CULLFILVALMAX_ULS_F32.DocUnits = 'Uls';
CULLFILVALMAX_ULS_F32.EngDT = dt.float32;
CULLFILVALMAX_ULS_F32.EngVal = 1001200;
CULLFILVALMAX_ULS_F32.Define = 'Local';


CULLFILVALMIN_ULS_F32 = DataDict.Constant;
CULLFILVALMIN_ULS_F32.LongName = 'Copper Lead Lag Filter Value Minimum';
CULLFILVALMIN_ULS_F32.Description = [...
  'Minimum Limit value for copper Lead Lag filter state variables'];
CULLFILVALMIN_ULS_F32.DocUnits = 'Uls';
CULLFILVALMIN_ULS_F32.EngDT = dt.float32;
CULLFILVALMIN_ULS_F32.EngVal = -2431500;
CULLFILVALMIN_ULS_F32.Define = 'Local';


CULPFILVALMAX_ULS_F32 = DataDict.Constant;
CULPFILVALMAX_ULS_F32.LongName = 'Copper Lowpass Filter Value Maximum';
CULPFILVALMAX_ULS_F32.Description = [...
  'Maximum Limit value for copper lowpass filter state variable'];
CULPFILVALMAX_ULS_F32.DocUnits = 'Uls';
CULPFILVALMAX_ULS_F32.EngDT = dt.float32;
CULPFILVALMAX_ULS_F32.EngVal = 62500;
CULPFILVALMAX_ULS_F32.Define = 'Local';


CULPFILVALMIN_ULS_F32 = DataDict.Constant;
CULPFILVALMIN_ULS_F32.LongName = 'Copper lowpass Filter Value Minimum';
CULPFILVALMIN_ULS_F32.Description = [...
  'Minimum Limit value for copper lowpass filter state variables'];
CULPFILVALMIN_ULS_F32.DocUnits = 'Uls';
CULPFILVALMIN_ULS_F32.EngDT = dt.float32;
CULPFILVALMIN_ULS_F32.EngVal = 0;
CULPFILVALMIN_ULS_F32.Define = 'Local';


DUALECUSTSIDX_CNT_U08 = DataDict.Constant;
DUALECUSTSIDX_CNT_U08.LongName = 'Dual ECU Status Index';
DUALECUSTSIDX_CNT_U08.Description = [...
  'Index value when in Dual ECU mode of operation'];
DUALECUSTSIDX_CNT_U08.DocUnits = 'Cnt';
DUALECUSTSIDX_CNT_U08.EngDT = dt.u08;
DUALECUSTSIDX_CNT_U08.EngVal = 0;
DUALECUSTSIDX_CNT_U08.Define = 'Local';


EXPCOEFF_ULS_F32 = DataDict.Constant;
EXPCOEFF_ULS_F32.LongName = 'Exponential Coefficient';
EXPCOEFF_ULS_F32.Description = 'Exponential Decay Coefficient';
EXPCOEFF_ULS_F32.DocUnits = 'Uls';
EXPCOEFF_ULS_F32.EngDT = dt.float32;
EXPCOEFF_ULS_F32.EngVal = -1;
EXPCOEFF_ULS_F32.Define = 'Local';


MAGLLFILVALMAX_ULS_F32 = DataDict.Constant;
MAGLLFILVALMAX_ULS_F32.LongName = 'Magnet Lead Lag Filter Value Maximum';
MAGLLFILVALMAX_ULS_F32.Description = [...
  'Maximum Limit value for magnet Lead Lag filter state variable'];
MAGLLFILVALMAX_ULS_F32.DocUnits = 'Uls';
MAGLLFILVALMAX_ULS_F32.EngDT = dt.float32;
MAGLLFILVALMAX_ULS_F32.EngVal = 1001200;
MAGLLFILVALMAX_ULS_F32.Define = 'Local';


MAGLLFILVALMIN_ULS_F32 = DataDict.Constant;
MAGLLFILVALMIN_ULS_F32.LongName = 'Magnet Lead Lag Filter Value Minimum';
MAGLLFILVALMIN_ULS_F32.Description = [...
  'Minimum Limit value for magnet Lead Lag filter state variables'];
MAGLLFILVALMIN_ULS_F32.DocUnits = 'Uls';
MAGLLFILVALMIN_ULS_F32.EngDT = dt.float32;
MAGLLFILVALMIN_ULS_F32.EngVal = -2431500;
MAGLLFILVALMIN_ULS_F32.Define = 'Local';


MAGLPFILVALMAX_ULS_F32 = DataDict.Constant;
MAGLPFILVALMAX_ULS_F32.LongName = 'Magnet Lowpass Filter Value Maximum';
MAGLPFILVALMAX_ULS_F32.Description = [...
  'Maximum Limit value for magnet lowpass filter state variable'];
MAGLPFILVALMAX_ULS_F32.DocUnits = 'Uls';
MAGLPFILVALMAX_ULS_F32.EngDT = dt.float32;
MAGLPFILVALMAX_ULS_F32.EngVal = 62500;
MAGLPFILVALMAX_ULS_F32.Define = 'Local';


MAGLPFILVALMIN_ULS_F32 = DataDict.Constant;
MAGLPFILVALMIN_ULS_F32.LongName = 'Magnet lowpass Filter Value Minimum';
MAGLPFILVALMIN_ULS_F32.Description = [...
  'Minimum Limit value for magnet lowpass filter state variables'];
MAGLPFILVALMIN_ULS_F32.DocUnits = 'Uls';
MAGLPFILVALMIN_ULS_F32.EngDT = dt.float32;
MAGLPFILVALMIN_ULS_F32.EngVal = 0;
MAGLPFILVALMIN_ULS_F32.Define = 'Local';


SILLFILVALMAX_ULS_F32 = DataDict.Constant;
SILLFILVALMAX_ULS_F32.LongName = 'Silicon Lead Lag Filter Value Maximum';
SILLFILVALMAX_ULS_F32.Description = [...
  'Maximum Limit value for silicon Lead Lag filter state variable'];
SILLFILVALMAX_ULS_F32.DocUnits = 'Uls';
SILLFILVALMAX_ULS_F32.EngDT = dt.float32;
SILLFILVALMAX_ULS_F32.EngVal = 1001200;
SILLFILVALMAX_ULS_F32.Define = 'Local';


SILLFILVALMIN_ULS_F32 = DataDict.Constant;
SILLFILVALMIN_ULS_F32.LongName = 'Silicon Lead Lag Filter Value Minimum';
SILLFILVALMIN_ULS_F32.Description = [...
  'Minimum Limit value for silicon Lead Lag filter state variables'];
SILLFILVALMIN_ULS_F32.DocUnits = 'Uls';
SILLFILVALMIN_ULS_F32.EngDT = dt.float32;
SILLFILVALMIN_ULS_F32.EngVal = -2431500;
SILLFILVALMIN_ULS_F32.Define = 'Local';


SILPFILVALMAX_ULS_F32 = DataDict.Constant;
SILPFILVALMAX_ULS_F32.LongName = 'Silicon Lowpass Filter Value Maximum';
SILPFILVALMAX_ULS_F32.Description = [...
  'Maximum Limit value for silicon lowpass filter state variable'];
SILPFILVALMAX_ULS_F32.DocUnits = 'Uls';
SILPFILVALMAX_ULS_F32.EngDT = dt.float32;
SILPFILVALMAX_ULS_F32.EngVal = 62500;
SILPFILVALMAX_ULS_F32.Define = 'Local';


SILPFILVALMIN_ULS_F32 = DataDict.Constant;
SILPFILVALMIN_ULS_F32.LongName = 'Silicon lowpass Filter Value Minimum';
SILPFILVALMIN_ULS_F32.Description = [...
  'Minimum Limit value for silicon lowpass filter state variables'];
SILPFILVALMIN_ULS_F32.DocUnits = 'Uls';
SILPFILVALMIN_ULS_F32.EngDT = dt.float32;
SILPFILVALMIN_ULS_F32.EngVal = 0;
SILPFILVALMIN_ULS_F32.Define = 'Local';


SNGECUSTSIDX_CNT_U08 = DataDict.Constant;
SNGECUSTSIDX_CNT_U08.LongName = 'Single ECU Status Index';
SNGECUSTSIDX_CNT_U08.Description = [...
  'Index value when in single ECU mode of operation'];
SNGECUSTSIDX_CNT_U08.DocUnits = 'Cnt';
SNGECUSTSIDX_CNT_U08.EngDT = dt.u08;
SNGECUSTSIDX_CNT_U08.EngVal = 1;
SNGECUSTSIDX_CNT_U08.Define = 'Local';


TESTIMNASSIMECHTHILIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.LongName = 'Temperature Estimation Assist Mechanism Temperature High Limit';
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.Description = 'Limit to maximum value';
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.EngVal = 150;
TESTIMNASSIMECHTHILIM_DEGCGRD_F32.Define = 'Local';


TESTIMNASSIMECHTLOLIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.LongName = 'Temperature Estimation Assist Mechanism Temperature Low Limit';
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.Description = 'Limit to minimum value';
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.EngVal = -50;
TESTIMNASSIMECHTLOLIM_DEGCGRD_F32.Define = 'Local';


TESTIMNFETMTGTNIDX_CNT_U08 = DataDict.Constant;
TESTIMNFETMTGTNIDX_CNT_U08.LongName = 'Temperature Estimation FET Mitigation Index';
TESTIMNFETMTGTNIDX_CNT_U08.Description = [...
  'Index value when in FET mitigation mode of operation'];
TESTIMNFETMTGTNIDX_CNT_U08.DocUnits = 'Cnt';
TESTIMNFETMTGTNIDX_CNT_U08.EngDT = dt.u08;
TESTIMNFETMTGTNIDX_CNT_U08.EngVal = 2;
TESTIMNFETMTGTNIDX_CNT_U08.Define = 'Local';


TESTIMNFETTHILIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNFETTHILIM_DEGCGRD_F32.LongName = 'Temperature Estimation Field Effect Transistor Temperature High Limit';
TESTIMNFETTHILIM_DEGCGRD_F32.Description = 'Limit to maximum value';
TESTIMNFETTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNFETTHILIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNFETTHILIM_DEGCGRD_F32.EngVal = 200;
TESTIMNFETTHILIM_DEGCGRD_F32.Define = 'Local';


TESTIMNFETTLOLIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNFETTLOLIM_DEGCGRD_F32.LongName = 'Temperature Estimation Field Effect Transistor Temperature Low Limit';
TESTIMNFETTLOLIM_DEGCGRD_F32.Description = 'Limit to minimum value';
TESTIMNFETTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNFETTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNFETTLOLIM_DEGCGRD_F32.EngVal = -50;
TESTIMNFETTLOLIM_DEGCGRD_F32.Define = 'Local';


TESTIMNIGNTIOFFTHD_CNT_F32 = DataDict.Constant;
TESTIMNIGNTIOFFTHD_CNT_F32.LongName = 'Temperature Estimation Ignition Time Off Threshold';
TESTIMNIGNTIOFFTHD_CNT_F32.Description = [...
  'If ignition time off is longer than this value, set the stored values ' ...
  'to zero. Otherwise, using the ignition off time runs through exploneti' ...
  'al calculation. Note: this value is calculated based on the value of T' ...
  'AU. It shall be recalculated if the value of TAU changed.'];
TESTIMNIGNTIOFFTHD_CNT_F32.DocUnits = 'Cnt';
TESTIMNIGNTIOFFTHD_CNT_F32.EngDT = dt.float32;
TESTIMNIGNTIOFFTHD_CNT_F32.EngVal = 10000;
TESTIMNIGNTIOFFTHD_CNT_F32.Define = 'Local';


TESTIMNMAGTHILIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNMAGTHILIM_DEGCGRD_F32.LongName = 'Temperature Estimation Magnet Temperature High Limit';
TESTIMNMAGTHILIM_DEGCGRD_F32.Description = 'Limit to maximum value';
TESTIMNMAGTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNMAGTHILIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNMAGTHILIM_DEGCGRD_F32.EngVal = 150;
TESTIMNMAGTHILIM_DEGCGRD_F32.Define = 'Local';


TESTIMNMAGTLOLIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNMAGTLOLIM_DEGCGRD_F32.LongName = 'Temperature Estimation Magnet Temperature Low Limit';
TESTIMNMAGTLOLIM_DEGCGRD_F32.Description = 'Limit to minimum value';
TESTIMNMAGTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNMAGTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNMAGTLOLIM_DEGCGRD_F32.EngVal = -50;
TESTIMNMAGTLOLIM_DEGCGRD_F32.Define = 'Local';


TESTIMNWIDGTHILIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNWIDGTHILIM_DEGCGRD_F32.LongName = 'Temperature Estimation Winding Temperature High Limit';
TESTIMNWIDGTHILIM_DEGCGRD_F32.Description = 'Limit to maximum value';
TESTIMNWIDGTHILIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNWIDGTHILIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNWIDGTHILIM_DEGCGRD_F32.EngVal = 300;
TESTIMNWIDGTHILIM_DEGCGRD_F32.Define = 'Local';


TESTIMNWIDGTLOLIM_DEGCGRD_F32 = DataDict.Constant;
TESTIMNWIDGTLOLIM_DEGCGRD_F32.LongName = 'Temperature Estimation Winding Temperature Low Limit';
TESTIMNWIDGTLOLIM_DEGCGRD_F32.Description = 'Limit to minimum value';
TESTIMNWIDGTLOLIM_DEGCGRD_F32.DocUnits = 'DegCgrd';
TESTIMNWIDGTLOLIM_DEGCGRD_F32.EngDT = dt.float32;
TESTIMNWIDGTLOLIM_DEGCGRD_F32.EngVal = -50;
TESTIMNWIDGTLOLIM_DEGCGRD_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
