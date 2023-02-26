%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 05-Feb-2018 09:48:03       %
%                                  Created with tool release: 3.2.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF009A = DataDict.FDD;
SF009A.Version = '4.1.X';
SF009A.LongName = 'Duty Cycle Thermal Protection';
SF009A.ShoName  = 'DutyCycThermProtn';
SF009A.DesignASIL = 'B';
SF009A.Description = [...
  'The purpose of the Thermal Duty Cycle Protection is to limitand protec' ...
  't the system from excessive use, based on motor rotational velocity an' ...
  'd system temperature.It also provides protection status information fo' ...
  'r use by other functions.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DutyCycThermProtnInit1 = DataDict.Runnable;
DutyCycThermProtnInit1.Context = 'Rte';
DutyCycThermProtnInit1.TimeStep = 0;
DutyCycThermProtnInit1.Description = 'Init Runnable';

DutyCycThermProtnPer1 = DataDict.Runnable;
DutyCycThermProtnPer1.Context = 'Rte';
DutyCycThermProtnPer1.TimeStep = 0.1;
DutyCycThermProtnPer1.Description = 'Periodic Runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FilStVal_GetErrorStatus = DataDict.Client;
FilStVal_GetErrorStatus.CallLocation = {'DutyCycThermProtnInit1'};
FilStVal_GetErrorStatus.Description = 'Returns the NVM read status';
FilStVal_GetErrorStatus.Return = DataDict.CSReturn;
FilStVal_GetErrorStatus.Return.Type = 'Standard';
FilStVal_GetErrorStatus.Return.Min = 0;
FilStVal_GetErrorStatus.Return.Max = 1;
FilStVal_GetErrorStatus.Return.TestTolerance = 0;
FilStVal_GetErrorStatus.Return.Description = 'Returns the NVM read status';
FilStVal_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
FilStVal_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
FilStVal_GetErrorStatus.Arguments(1).EngDT = dt.u08;
FilStVal_GetErrorStatus.Arguments(1).EngMin = 0;
FilStVal_GetErrorStatus.Arguments(1).EngMax = 255;
FilStVal_GetErrorStatus.Arguments(1).TestTolerance = 999;
FilStVal_GetErrorStatus.Arguments(1).Units = 'Cnt';
FilStVal_GetErrorStatus.Arguments(1).Direction = 'Out';
FilStVal_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
FilStVal_GetErrorStatus.Arguments(1).Description = 'This field was empty';


FilStVal_SetRamBlockStatus = DataDict.Client;
FilStVal_SetRamBlockStatus.CallLocation = {'DutyCycThermProtnInit1'};
FilStVal_SetRamBlockStatus.Description = [...
  'Updates NVM during ignition offwhen value is set to TRUE'];
FilStVal_SetRamBlockStatus.Return = DataDict.CSReturn;
FilStVal_SetRamBlockStatus.Return.Type = 'Standard';
FilStVal_SetRamBlockStatus.Return.Min = 0;
FilStVal_SetRamBlockStatus.Return.Max = 1;
FilStVal_SetRamBlockStatus.Return.TestTolerance = 0;
FilStVal_SetRamBlockStatus.Return.Description = [...
  'Updates NVM during ignition offwhen value is set to TRUE'];
FilStVal_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
FilStVal_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
FilStVal_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
FilStVal_SetRamBlockStatus.Arguments(1).EngMin = 0;
FilStVal_SetRamBlockStatus.Arguments(1).EngMax = 1;
FilStVal_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
FilStVal_SetRamBlockStatus.Arguments(1).Direction = 'In';
FilStVal_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
FilStVal_SetRamBlockStatus.Arguments(1).Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'DutyCycThermProtnPer1'};
SetNtcSts.Description = 'Set the NTC status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'Returns the NTC status';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'Retruns the NTC status';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = '';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = '';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DiagcStsLimdTPrfmnc = DataDict.IpSignal;
DiagcStsLimdTPrfmnc.LongName = 'Diagnostic Status Limited Temperature Performance';
DiagcStsLimdTPrfmnc.Description = [...
  'Flag that indicates the connected components to use the Default Temper' ...
  'ature value'];
DiagcStsLimdTPrfmnc.DocUnits = 'Cnt';
DiagcStsLimdTPrfmnc.EngDT = dt.lgc;
DiagcStsLimdTPrfmnc.EngInit = 0;
DiagcStsLimdTPrfmnc.EngMin = 0;
DiagcStsLimdTPrfmnc.EngMax = 1;
DiagcStsLimdTPrfmnc.ReadIn = {'DutyCycThermProtnPer1'};
DiagcStsLimdTPrfmnc.ReadType = 'Rte';


DualEcuFltMtgtnEna = DataDict.IpSignal;
DualEcuFltMtgtnEna.LongName = 'Dual ECU Fault Mitigation Enable';
DualEcuFltMtgtnEna.Description = 'Dual ECU Fault Mitigation Enable';
DualEcuFltMtgtnEna.DocUnits = 'Cnt';
DualEcuFltMtgtnEna.EngDT = dt.lgc;
DualEcuFltMtgtnEna.EngInit = 0;
DualEcuFltMtgtnEna.EngMin = 0;
DualEcuFltMtgtnEna.EngMax = 1;
DualEcuFltMtgtnEna.ReadIn = {'DutyCycThermProtnPer1'};
DualEcuFltMtgtnEna.ReadType = 'Rte';


DutyCycThermProtnDi = DataDict.IpSignal;
DutyCycThermProtnDi.LongName = 'Duty Cycle Thermal Protection Disable';
DutyCycThermProtnDi.Description = [...
  'When set to TRUE defeats the calculated outputof Thermal Reduction fac' ...
  'tor and Thermal Limit Slow Filter Max'];
DutyCycThermProtnDi.DocUnits = 'Cnt';
DutyCycThermProtnDi.EngDT = dt.lgc;
DutyCycThermProtnDi.EngInit = 0;
DutyCycThermProtnDi.EngMin = 0;
DutyCycThermProtnDi.EngMax = 1;
DutyCycThermProtnDi.ReadIn = {'DutyCycThermProtnInit1','DutyCycThermProtnPer1'};
DutyCycThermProtnDi.ReadType = 'Rte';


EcuTFild = DataDict.IpSignal;
EcuTFild.LongName = 'Ecu Temperature Filtered';
EcuTFild.Description = 'Filtered temperature';
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 25;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.ReadIn = {'DutyCycThermProtnPer1'};
EcuTFild.ReadType = 'Rte';


IgnTiOff = DataDict.IpSignal;
IgnTiOff.LongName = 'Ignition Time Off';
IgnTiOff.Description = [...
  'Ignition time off is used to update the filterstate variables when Ign' ...
  'ition time off is less than or equals to ignition offthreshold and veh' ...
  'licle time valid is True'];
IgnTiOff.DocUnits = 'Cnt';
IgnTiOff.EngDT = dt.u32;
IgnTiOff.EngInit = 0;
IgnTiOff.EngMin = 0;
IgnTiOff.EngMax = 1720000;
IgnTiOff.ReadIn = {'DutyCycThermProtnInit1','DutyCycThermProtnPer1'};
IgnTiOff.ReadType = 'Rte';


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
MotAndThermProtnLoaMod.ReadIn = {'DutyCycThermProtnPer1'};
MotAndThermProtnLoaMod.ReadType = 'Rte';


MotCurrPeakEstimd = DataDict.IpSignal;
MotCurrPeakEstimd.LongName = 'Motor Current Peak Estimated';
MotCurrPeakEstimd.Description = [...
  'Estimate of peak motor current based on either the measured motor curr' ...
  'ents or the motor current commands.'];
MotCurrPeakEstimd.DocUnits = 'AmprSqd';
MotCurrPeakEstimd.EngDT = dt.float32;
MotCurrPeakEstimd.EngInit = 0;
MotCurrPeakEstimd.EngMin = 0;
MotCurrPeakEstimd.EngMax = 62500;
MotCurrPeakEstimd.ReadIn = {'DutyCycThermProtnPer1'};
MotCurrPeakEstimd.ReadType = 'Rte';


MotCurrPeakEstimdFild = DataDict.IpSignal;
MotCurrPeakEstimdFild.LongName = 'Motor Current Peak Estimated Filtered';
MotCurrPeakEstimdFild.Description = [...
  'This is the MotCurrPeakEstimd output, filtered in the 100ms loop'];
MotCurrPeakEstimdFild.DocUnits = 'AmprSqd';
MotCurrPeakEstimdFild.EngDT = dt.float32;
MotCurrPeakEstimdFild.EngInit = 0;
MotCurrPeakEstimdFild.EngMin = 0;
MotCurrPeakEstimdFild.EngMax = 62500;
MotCurrPeakEstimdFild.ReadIn = {'DutyCycThermProtnPer1'};
MotCurrPeakEstimdFild.ReadType = 'Rte';


MotFetT = DataDict.IpSignal;
MotFetT.LongName = 'Motor Silicon Temperature';
MotFetT.Description = [...
  'Estimated temperature of FETs (power transistors)'];
MotFetT.DocUnits = 'DegCgrd';
MotFetT.EngDT = dt.float32;
MotFetT.EngInit = 0;
MotFetT.EngMin = -50;
MotFetT.EngMax = 200;
MotFetT.ReadIn = {'DutyCycThermProtnPer1'};
MotFetT.ReadType = 'Rte';


MotMagT = DataDict.IpSignal;
MotMagT.LongName = 'Motor Magnet Temperature';
MotMagT.Description = [...
  'Estimated Temperature of Motor Magnet'];
MotMagT.DocUnits = 'DegCgrd';
MotMagT.EngDT = dt.float32;
MotMagT.EngInit = 0;
MotMagT.EngMin = -50;
MotMagT.EngMax = 150;
MotMagT.ReadIn = {'DutyCycThermProtnPer1'};
MotMagT.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity Column Reference Frame';
MotVelCrf.Description = [...
  'Motor velocity with polarity as seen by driver.'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'DutyCycThermProtnPer1'};
MotVelCrf.ReadType = 'Rte';


MotWidgT = DataDict.IpSignal;
MotWidgT.LongName = 'Motor Winding Temperature';
MotWidgT.Description = [...
  'Estimated Temperature of Motor Winding'];
MotWidgT.DocUnits = 'DegCgrd';
MotWidgT.EngDT = dt.float32;
MotWidgT.EngInit = 0;
MotWidgT.EngMin = -50;
MotWidgT.EngMax = 300;
MotWidgT.ReadIn = {'DutyCycThermProtnPer1'};
MotWidgT.ReadType = 'Rte';


VehTiVld = DataDict.IpSignal;
VehTiVld.LongName = 'Vehicle Time Valid';
VehTiVld.Description = [...
  'Flag to indicate Vehicle Time validity'];
VehTiVld.DocUnits = 'Cnt';
VehTiVld.EngDT = dt.lgc;
VehTiVld.EngInit = 0;
VehTiVld.EngMin = 0;
VehTiVld.EngMax = 1;
VehTiVld.ReadIn = {'DutyCycThermProtnInit1','DutyCycThermProtnPer1'};
VehTiVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DutyCycThermProtnMaxOutp = DataDict.OpSignal;
DutyCycThermProtnMaxOutp.LongName = 'Duty Cycle Thermal Protection Maximum Output';
DutyCycThermProtnMaxOutp.Description = [...
  'Maximum Output of all Duty Cycle Filter. Used to indicate the State of' ...
  'Health of the system.'];
DutyCycThermProtnMaxOutp.DocUnits = 'Uls';
DutyCycThermProtnMaxOutp.SwcShoName = 'DutyCycThermProtn';
DutyCycThermProtnMaxOutp.EngDT = dt.u16p0;
DutyCycThermProtnMaxOutp.EngInit = 0;
DutyCycThermProtnMaxOutp.EngMin = 0;
DutyCycThermProtnMaxOutp.EngMax = 200;
DutyCycThermProtnMaxOutp.TestTolerance = 0;
DutyCycThermProtnMaxOutp.WrittenIn = {'DutyCycThermProtnPer1'};
DutyCycThermProtnMaxOutp.WriteType = 'Rte';


ThermDutyCycProtnLoadDptLim = DataDict.OpSignal;
ThermDutyCycProtnLoadDptLim.LongName = 'Thermal Duty Cycle Protection Load Dependent Limit';
ThermDutyCycProtnLoadDptLim.Description = [...
  'The Torque limit value in units of Motor Newton Meter based on Load'];
ThermDutyCycProtnLoadDptLim.DocUnits = 'MotNwtMtr';
ThermDutyCycProtnLoadDptLim.SwcShoName = 'DutyCycThermProtn';
ThermDutyCycProtnLoadDptLim.EngDT = dt.float32;
ThermDutyCycProtnLoadDptLim.EngInit = 8.8;
ThermDutyCycProtnLoadDptLim.EngMin = 0;
ThermDutyCycProtnLoadDptLim.EngMax = 8.8;
ThermDutyCycProtnLoadDptLim.TestTolerance = 0.00390625;
ThermDutyCycProtnLoadDptLim.WrittenIn = {'DutyCycThermProtnPer1'};
ThermDutyCycProtnLoadDptLim.WriteType = 'Rte';


ThermDutyCycProtnTDptLim = DataDict.OpSignal;
ThermDutyCycProtnTDptLim.LongName = 'Thermal Duty Cycle Protection Temperature Dependent Limit';
ThermDutyCycProtnTDptLim.Description = [...
  'The Torque limit value in units of Motor Newton Meter based on tempera' ...
  'ture'];
ThermDutyCycProtnTDptLim.DocUnits = 'MotNwtMtr';
ThermDutyCycProtnTDptLim.SwcShoName = 'DutyCycThermProtn';
ThermDutyCycProtnTDptLim.EngDT = dt.float32;
ThermDutyCycProtnTDptLim.EngInit = 8.8;
ThermDutyCycProtnTDptLim.EngMin = 0;
ThermDutyCycProtnTDptLim.EngMax = 8.8;
ThermDutyCycProtnTDptLim.TestTolerance = 0.00390625;
ThermDutyCycProtnTDptLim.WrittenIn = {'DutyCycThermProtnPer1'};
ThermDutyCycProtnTDptLim.WriteType = 'Rte';


ThermLimSlowFilMax = DataDict.OpSignal;
ThermLimSlowFilMax.LongName = 'Thermal Limit Slow Filter Maximum';
ThermLimSlowFilMax.Description = [...
  'The highest value of the slowest filters'];
ThermLimSlowFilMax.DocUnits = 'Uls';
ThermLimSlowFilMax.SwcShoName = 'DutyCycThermProtn';
ThermLimSlowFilMax.EngDT = dt.float32;
ThermLimSlowFilMax.EngInit = 0;
ThermLimSlowFilMax.EngMin = 0;
ThermLimSlowFilMax.EngMax = 200;
ThermLimSlowFilMax.TestTolerance = 1;
ThermLimSlowFilMax.WrittenIn = {'DutyCycThermProtnPer1'};
ThermLimSlowFilMax.WriteType = 'Rte';


ThermMotTqLim = DataDict.OpSignal;
ThermMotTqLim.LongName = 'Thermal Motor Torque Limit';
ThermMotTqLim.Description = [...
  'The Torque limit value in units of Motor Newton Meter based on usage a' ...
  'nd temperature'];
ThermMotTqLim.DocUnits = 'MotNwtMtr';
ThermMotTqLim.SwcShoName = 'DutyCycThermProtn';
ThermMotTqLim.EngDT = dt.float32;
ThermMotTqLim.EngInit = 0;
ThermMotTqLim.EngMin = 0;
ThermMotTqLim.EngMax = 8.8;
ThermMotTqLim.TestTolerance = 0.00390625;
ThermMotTqLim.WrittenIn = {'DutyCycThermProtnPer1'};
ThermMotTqLim.WriteType = 'Rte';


ThermRednFac = DataDict.OpSignal;
ThermRednFac.LongName = 'Thermal Reduction Factor';
ThermRednFac.Description = [...
  'Value representing the percent reduction in assist being produced by t' ...
  'he ThermMotTqLim value.'];
ThermRednFac.DocUnits = 'Uls';
ThermRednFac.SwcShoName = 'DutyCycThermProtn';
ThermRednFac.EngDT = dt.float32;
ThermRednFac.EngInit = 0;
ThermRednFac.EngMin = 0;
ThermRednFac.EngMax = 1;
ThermRednFac.TestTolerance = 0.0078125;
ThermRednFac.WrittenIn = {'DutyCycThermProtnPer1'};
ThermRednFac.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
FilStVariReInitFlg = DataDict.IRV;
FilStVariReInitFlg.LongName = 'Filter State Variable Re Initialization Flag';
FilStVariReInitFlg.Description = [...
  'Flag to Re-Initialize the Filter State Variable'];
FilStVariReInitFlg.DocUnits = 'Cnt';
FilStVariReInitFlg.EngDT = dt.lgc;
FilStVariReInitFlg.EngInit = 0;
FilStVariReInitFlg.EngMin = 0;
FilStVariReInitFlg.EngMax = 1;
FilStVariReInitFlg.ReadIn = {'DutyCycThermProtnPer1'};
FilStVariReInitFlg.WrittenIn = {'DutyCycThermProtnInit1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX = DataDict.Calibration;
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.LongName = 'Duty Cycle Thermal Protection Absolute Control Temperature FET mitigation Table X';
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.Description = [...
  'Unsigned Variable X, Number of Points:  4, X Table:  Dependent variabl' ...
  'e – Temperature in the FET mitigation mode'];
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.DocUnits = 'DegCgrd';
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.EngDT = dt.s15p0;
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.EngVal =  ...
   [122              123              125              127];
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.EngMin = -40;
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.EngMax = 150;
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.Cardinality = 'Cmn';
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.CustomerVisible = false;
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.Online = false;
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.Impact = 'H';
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.GraphLink = {''};
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.Monotony = 'Strictly_Increasing';
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.MaxGrad = 998;
DutyCycThermProtnAbsltCtrlTFetMtgtnTblX.PortName = 'DutyCycThermProtnAbsltCtrlTFetMtgtnTblX';


DutyCycThermProtnAbsltCtrlTTblX = DataDict.Calibration;
DutyCycThermProtnAbsltCtrlTTblX.LongName = 'Duty Cycle Thermal Protection Absolute Control Temperature Table X';
DutyCycThermProtnAbsltCtrlTTblX.Description = [...
  'Unsigned Variable X, Number of Points:  4, X Table:  Dependent variabl' ...
  'e – Temperature'];
DutyCycThermProtnAbsltCtrlTTblX.DocUnits = 'DegCgrd';
DutyCycThermProtnAbsltCtrlTTblX.EngDT = dt.s15p0;
DutyCycThermProtnAbsltCtrlTTblX.EngVal =  ...
   [122              123              125              127];
DutyCycThermProtnAbsltCtrlTTblX.EngMin = -40;
DutyCycThermProtnAbsltCtrlTTblX.EngMax = 150;
DutyCycThermProtnAbsltCtrlTTblX.Cardinality = 'Cmn';
DutyCycThermProtnAbsltCtrlTTblX.CustomerVisible = false;
DutyCycThermProtnAbsltCtrlTTblX.Online = false;
DutyCycThermProtnAbsltCtrlTTblX.Impact = 'H';
DutyCycThermProtnAbsltCtrlTTblX.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltCtrlTTblX.GraphLink = {''};
DutyCycThermProtnAbsltCtrlTTblX.Monotony = 'Strictly_Increasing';
DutyCycThermProtnAbsltCtrlTTblX.MaxGrad = 998;
DutyCycThermProtnAbsltCtrlTTblX.PortName = 'DutyCycThermProtnAbsltCtrlTTblX';


DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY = DataDict.Calibration;
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.LongName = 'Duty Cycle Thermal Protection Absolute Control Temperature Torque FET Mitigation Table Y';
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.Description = [...
  'Unsigned Variable Y, Number of Points:  4, X Table:  Dependent variabl' ...
  'e motor torque limit in MotNwtMtr in FET mitigation mode'];
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.DocUnits = 'MotNwtMtr';
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.EngDT = dt.u9p7;
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.EngVal =  ...
   [2.703125         2.242188         1.828125                0];
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.EngMin = 0;
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.EngMax = 8.8;
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.Cardinality = 'Cmn';
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.CustomerVisible = false;
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.Online = false;
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.Impact = 'H';
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.GraphLink = {'DutyCycThermProtnAbsltCtrlTFetMtgtnTblX'};
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.Monotony = 'None';
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.MaxGrad = 998;
DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY.PortName = 'DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY';


DutyCycThermProtnAbsltCtrlTTqTblY = DataDict.Calibration;
DutyCycThermProtnAbsltCtrlTTqTblY.LongName = 'Duty Cycle Thermal Protection Absolute Control Temperature Torque Table Y';
DutyCycThermProtnAbsltCtrlTTqTblY.Description = [...
  'Unsigned Variable Y, Number of Points:  4, X Table:  Dependent variabl' ...
  'e motor torque limit in MotNwtMtr'];
DutyCycThermProtnAbsltCtrlTTqTblY.DocUnits = 'MotNwtMtr';
DutyCycThermProtnAbsltCtrlTTqTblY.EngDT = dt.u9p7;
DutyCycThermProtnAbsltCtrlTTqTblY.EngVal =  ...
   [2.703125         2.242188         1.828125                0];
DutyCycThermProtnAbsltCtrlTTqTblY.EngMin = 0;
DutyCycThermProtnAbsltCtrlTTqTblY.EngMax = 8.8;
DutyCycThermProtnAbsltCtrlTTqTblY.Cardinality = 'Cmn';
DutyCycThermProtnAbsltCtrlTTqTblY.CustomerVisible = false;
DutyCycThermProtnAbsltCtrlTTqTblY.Online = false;
DutyCycThermProtnAbsltCtrlTTqTblY.Impact = 'H';
DutyCycThermProtnAbsltCtrlTTqTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltCtrlTTqTblY.GraphLink = {'DutyCycThermProtnAbsltCtrlTTblX'};
DutyCycThermProtnAbsltCtrlTTqTblY.Monotony = 'None';
DutyCycThermProtnAbsltCtrlTTqTblY.MaxGrad = 998;
DutyCycThermProtnAbsltCtrlTTqTblY.PortName = 'DutyCycThermProtnAbsltCtrlTTqTblY';


DutyCycThermProtnAbsltCuTFetMtgtnTblX = DataDict.Calibration;
DutyCycThermProtnAbsltCuTFetMtgtnTblX.LongName = 'Duty Cycle Thermal Protection Absolute Copper Temperature FET Mitigation Table X';
DutyCycThermProtnAbsltCuTFetMtgtnTblX.Description = [...
  'Unsigned Variable X, Number of Points:  4, X Table:  Dependent variabl' ...
  'e – Temperature in the FET mitigation mode'];
DutyCycThermProtnAbsltCuTFetMtgtnTblX.DocUnits = 'DegCgrd';
DutyCycThermProtnAbsltCuTFetMtgtnTblX.EngDT = dt.s15p0;
DutyCycThermProtnAbsltCuTFetMtgtnTblX.EngVal =  ...
   [122              123              125              127];
DutyCycThermProtnAbsltCuTFetMtgtnTblX.EngMin = -40;
DutyCycThermProtnAbsltCuTFetMtgtnTblX.EngMax = 300;
DutyCycThermProtnAbsltCuTFetMtgtnTblX.Cardinality = 'Cmn';
DutyCycThermProtnAbsltCuTFetMtgtnTblX.CustomerVisible = false;
DutyCycThermProtnAbsltCuTFetMtgtnTblX.Online = false;
DutyCycThermProtnAbsltCuTFetMtgtnTblX.Impact = 'H';
DutyCycThermProtnAbsltCuTFetMtgtnTblX.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltCuTFetMtgtnTblX.GraphLink = {''};
DutyCycThermProtnAbsltCuTFetMtgtnTblX.Monotony = 'Strictly_Increasing';
DutyCycThermProtnAbsltCuTFetMtgtnTblX.MaxGrad = 998;
DutyCycThermProtnAbsltCuTFetMtgtnTblX.PortName = 'DutyCycThermProtnAbsltCuTFetMtgtnTblX';


DutyCycThermProtnAbsltCuTTblX = DataDict.Calibration;
DutyCycThermProtnAbsltCuTTblX.LongName = 'Duty Cycle Thermal Protection Absolute Copper Temperature Table X';
DutyCycThermProtnAbsltCuTTblX.Description = [...
  'Unsigned Variable X, Number of Points:  4, X Table:  Dependent variabl' ...
  'e – Temperature'];
DutyCycThermProtnAbsltCuTTblX.DocUnits = 'DegCgrd';
DutyCycThermProtnAbsltCuTTblX.EngDT = dt.s15p0;
DutyCycThermProtnAbsltCuTTblX.EngVal =  ...
   [122              123              125              127];
DutyCycThermProtnAbsltCuTTblX.EngMin = -40;
DutyCycThermProtnAbsltCuTTblX.EngMax = 300;
DutyCycThermProtnAbsltCuTTblX.Cardinality = 'Cmn';
DutyCycThermProtnAbsltCuTTblX.CustomerVisible = false;
DutyCycThermProtnAbsltCuTTblX.Online = false;
DutyCycThermProtnAbsltCuTTblX.Impact = 'H';
DutyCycThermProtnAbsltCuTTblX.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltCuTTblX.GraphLink = {''};
DutyCycThermProtnAbsltCuTTblX.Monotony = 'Strictly_Increasing';
DutyCycThermProtnAbsltCuTTblX.MaxGrad = 998;
DutyCycThermProtnAbsltCuTTblX.PortName = 'DutyCycThermProtnAbsltCuTTblX';


DutyCycThermProtnAbsltCuTTqFetMtgtnTblY = DataDict.Calibration;
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.LongName = 'Duty Cycle Thermal Protection Absolute Copper Temperature Torque FET mitigation Table Y';
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.Description = [...
  'Unsigned Variable Y, Number of Points:  4, X Table:  Dependent variabl' ...
  'e motor torque limit in MotNwtMtr in FET mitigation mode'];
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.DocUnits = 'MotNwtMtr';
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.EngDT = dt.u9p7;
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.EngVal =  ...
   [2.703125         2.242188         1.828125                0];
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.EngMin = 0;
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.EngMax = 8.8;
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.Cardinality = 'Cmn';
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.CustomerVisible = false;
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.Online = false;
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.Impact = 'H';
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.GraphLink = {'DutyCycThermProtnAbsltCuTFetMtgtnTblX'};
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.Monotony = 'None';
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.MaxGrad = 998;
DutyCycThermProtnAbsltCuTTqFetMtgtnTblY.PortName = 'DutyCycThermProtnAbsltCuTTqFetMtgtnTblY';


DutyCycThermProtnAbsltCuTTqTblY = DataDict.Calibration;
DutyCycThermProtnAbsltCuTTqTblY.LongName = 'Duty Cycle Thermal Protection Absolute Copper Temperature Torque Table Y';
DutyCycThermProtnAbsltCuTTqTblY.Description = [...
  'Unsigned Variable Y, Number of Points:  4, X Table:  Dependent variabl' ...
  'e motor torque limit in MotNwtMtr'];
DutyCycThermProtnAbsltCuTTqTblY.DocUnits = 'MotNwtMtr';
DutyCycThermProtnAbsltCuTTqTblY.EngDT = dt.u9p7;
DutyCycThermProtnAbsltCuTTqTblY.EngVal =  ...
   [2.703125         2.242188         1.828125                0];
DutyCycThermProtnAbsltCuTTqTblY.EngMin = 0;
DutyCycThermProtnAbsltCuTTqTblY.EngMax = 8.8;
DutyCycThermProtnAbsltCuTTqTblY.Cardinality = 'Cmn';
DutyCycThermProtnAbsltCuTTqTblY.CustomerVisible = false;
DutyCycThermProtnAbsltCuTTqTblY.Online = false;
DutyCycThermProtnAbsltCuTTqTblY.Impact = 'H';
DutyCycThermProtnAbsltCuTTqTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltCuTTqTblY.GraphLink = {'DutyCycThermProtnAbsltCuTTblX'};
DutyCycThermProtnAbsltCuTTqTblY.Monotony = 'None';
DutyCycThermProtnAbsltCuTTqTblY.MaxGrad = 998;
DutyCycThermProtnAbsltCuTTqTblY.PortName = 'DutyCycThermProtnAbsltCuTTqTblY';


DutyCycThermProtnAbsltMotVelBreakPt = DataDict.Calibration;
DutyCycThermProtnAbsltMotVelBreakPt.LongName = 'Duty Cycle Thermal Protection Absolute Motor Velocity Break Point';
DutyCycThermProtnAbsltMotVelBreakPt.Description = [...
  'Specify the threshold motor velocity for switching between stall [S] a' ...
  'nd non-stall [NS] tables.'];
DutyCycThermProtnAbsltMotVelBreakPt.DocUnits = 'MotRadPerSec';
DutyCycThermProtnAbsltMotVelBreakPt.EngDT = dt.float32;
DutyCycThermProtnAbsltMotVelBreakPt.EngVal = 1.375;
DutyCycThermProtnAbsltMotVelBreakPt.EngMin = 0;
DutyCycThermProtnAbsltMotVelBreakPt.EngMax = 1309;
DutyCycThermProtnAbsltMotVelBreakPt.Cardinality = 'Cmn';
DutyCycThermProtnAbsltMotVelBreakPt.CustomerVisible = false;
DutyCycThermProtnAbsltMotVelBreakPt.Online = false;
DutyCycThermProtnAbsltMotVelBreakPt.Impact = 'H';
DutyCycThermProtnAbsltMotVelBreakPt.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltMotVelBreakPt.GraphLink = {''};
DutyCycThermProtnAbsltMotVelBreakPt.Monotony = 'None';
DutyCycThermProtnAbsltMotVelBreakPt.MaxGrad = 998;
DutyCycThermProtnAbsltMotVelBreakPt.PortName = 'DutyCycThermProtnAbsltMotVelBreakPt';


DutyCycThermProtnAbsltTTqSlewHiLim = DataDict.Calibration;
DutyCycThermProtnAbsltTTqSlewHiLim.LongName = 'Duty Cycle Thermal Protection Absolute Temperature Torque Slew High Limit';
DutyCycThermProtnAbsltTTqSlewHiLim.Description = [...
  'Allowed change in torque per second during recovery in the Absolute Te' ...
  'mperature Limiting Table'];
DutyCycThermProtnAbsltTTqSlewHiLim.DocUnits = 'MotNwtMtrPerSec';
DutyCycThermProtnAbsltTTqSlewHiLim.EngDT = dt.float32;
DutyCycThermProtnAbsltTTqSlewHiLim.EngVal = 0.3;
DutyCycThermProtnAbsltTTqSlewHiLim.EngMin = 0.05;
DutyCycThermProtnAbsltTTqSlewHiLim.EngMax = 88;
DutyCycThermProtnAbsltTTqSlewHiLim.Cardinality = 'Cmn';
DutyCycThermProtnAbsltTTqSlewHiLim.CustomerVisible = false;
DutyCycThermProtnAbsltTTqSlewHiLim.Online = false;
DutyCycThermProtnAbsltTTqSlewHiLim.Impact = 'H';
DutyCycThermProtnAbsltTTqSlewHiLim.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltTTqSlewHiLim.GraphLink = {''};
DutyCycThermProtnAbsltTTqSlewHiLim.Monotony = 'None';
DutyCycThermProtnAbsltTTqSlewHiLim.MaxGrad = 998;
DutyCycThermProtnAbsltTTqSlewHiLim.PortName = 'DutyCycThermProtnAbsltTTqSlewHiLim';


DutyCycThermProtnAbsltTTqSlewLoLim = DataDict.Calibration;
DutyCycThermProtnAbsltTTqSlewLoLim.LongName = 'Duty Cycle Thermal Protection Absolute Temperature Torque Slew Low Limit';
DutyCycThermProtnAbsltTTqSlewLoLim.Description = [...
  'Allowed change in torque per second during decay in the Absolute Tempe' ...
  'rature Limiting Table'];
DutyCycThermProtnAbsltTTqSlewLoLim.DocUnits = 'MotNwtMtrPerSec';
DutyCycThermProtnAbsltTTqSlewLoLim.EngDT = dt.float32;
DutyCycThermProtnAbsltTTqSlewLoLim.EngVal = 0.3;
DutyCycThermProtnAbsltTTqSlewLoLim.EngMin = 0.05;
DutyCycThermProtnAbsltTTqSlewLoLim.EngMax = 88;
DutyCycThermProtnAbsltTTqSlewLoLim.Cardinality = 'Cmn';
DutyCycThermProtnAbsltTTqSlewLoLim.CustomerVisible = false;
DutyCycThermProtnAbsltTTqSlewLoLim.Online = false;
DutyCycThermProtnAbsltTTqSlewLoLim.Impact = 'H';
DutyCycThermProtnAbsltTTqSlewLoLim.TuningOwner = 'ThermMngt';
DutyCycThermProtnAbsltTTqSlewLoLim.GraphLink = {''};
DutyCycThermProtnAbsltTTqSlewLoLim.Monotony = 'None';
DutyCycThermProtnAbsltTTqSlewLoLim.MaxGrad = 998;
DutyCycThermProtnAbsltTTqSlewLoLim.PortName = 'DutyCycThermProtnAbsltTTqSlewLoLim';


DutyCycThermProtnCtrlT = DataDict.Calibration;
DutyCycThermProtnCtrlT.LongName = 'Duty Cycle Thermal Protection Control Temperature';
DutyCycThermProtnCtrlT.Description = [...
  'Default temperature calibration used when there is a temperature senso' ...
  'r fault logged.'];
DutyCycThermProtnCtrlT.DocUnits = 'DegCgrd';
DutyCycThermProtnCtrlT.EngDT = dt.float32;
DutyCycThermProtnCtrlT.EngVal = 70;
DutyCycThermProtnCtrlT.EngMin = -40;
DutyCycThermProtnCtrlT.EngMax = 150;
DutyCycThermProtnCtrlT.Cardinality = 'Cmn';
DutyCycThermProtnCtrlT.CustomerVisible = false;
DutyCycThermProtnCtrlT.Online = false;
DutyCycThermProtnCtrlT.Impact = 'H';
DutyCycThermProtnCtrlT.TuningOwner = 'ThermMngt';
DutyCycThermProtnCtrlT.GraphLink = {''};
DutyCycThermProtnCtrlT.Monotony = 'None';
DutyCycThermProtnCtrlT.MaxGrad = 998;
DutyCycThermProtnCtrlT.PortName = 'DutyCycThermProtnCtrlT';


DutyCycThermProtnCtrlTSeln = DataDict.Calibration;
DutyCycThermProtnCtrlTSeln.LongName = 'Duty Cycle Thermal Protection Control Temperature Selection';
DutyCycThermProtnCtrlTSeln.Description = [...
  'Boolean for control temperature selection'];
DutyCycThermProtnCtrlTSeln.DocUnits = 'Cnt';
DutyCycThermProtnCtrlTSeln.EngDT = dt.lgc;
DutyCycThermProtnCtrlTSeln.EngVal = 1;
DutyCycThermProtnCtrlTSeln.EngMin = 0;
DutyCycThermProtnCtrlTSeln.EngMax = 1;
DutyCycThermProtnCtrlTSeln.Cardinality = 'Cmn';
DutyCycThermProtnCtrlTSeln.CustomerVisible = false;
DutyCycThermProtnCtrlTSeln.Online = false;
DutyCycThermProtnCtrlTSeln.Impact = 'H';
DutyCycThermProtnCtrlTSeln.TuningOwner = 'ThermMngt';
DutyCycThermProtnCtrlTSeln.GraphLink = {''};
DutyCycThermProtnCtrlTSeln.Monotony = 'None';
DutyCycThermProtnCtrlTSeln.MaxGrad = 998;
DutyCycThermProtnCtrlTSeln.PortName = 'DutyCycThermProtnCtrlTSeln';


DutyCycThermProtnDutyCycFildThd = DataDict.Calibration;
DutyCycThermProtnDutyCycFildThd.LongName = 'Duty Cycle Thermal Protection Duty Cycle Filtered Threshold';
DutyCycThermProtnDutyCycFildThd.Description = [...
  'Calibration defining the threshold to set or clear the thermal limit f' ...
  'lag(NTCNR_0X0A3)'];
DutyCycThermProtnDutyCycFildThd.DocUnits = 'Uls';
DutyCycThermProtnDutyCycFildThd.EngDT = dt.u16p0;
DutyCycThermProtnDutyCycFildThd.EngVal = 92;
DutyCycThermProtnDutyCycFildThd.EngMin = 0;
DutyCycThermProtnDutyCycFildThd.EngMax = 100;
DutyCycThermProtnDutyCycFildThd.Cardinality = 'Cmn';
DutyCycThermProtnDutyCycFildThd.CustomerVisible = false;
DutyCycThermProtnDutyCycFildThd.Online = false;
DutyCycThermProtnDutyCycFildThd.Impact = 'H';
DutyCycThermProtnDutyCycFildThd.TuningOwner = 'ThermMngt';
DutyCycThermProtnDutyCycFildThd.GraphLink = {''};
DutyCycThermProtnDutyCycFildThd.Monotony = 'None';
DutyCycThermProtnDutyCycFildThd.MaxGrad = 998;
DutyCycThermProtnDutyCycFildThd.PortName = 'DutyCycThermProtnDutyCycFildThd';


DutyCycThermProtnIgnOffCtrlEna = DataDict.Calibration;
DutyCycThermProtnIgnOffCtrlEna.LongName = 'Duty Cycle Thermal Protection Ignition Off Control Enable';
DutyCycThermProtnIgnOffCtrlEna.Description = [...
  'Calibration to enable the counter for reinitializing filter state vari' ...
  'ables'];
DutyCycThermProtnIgnOffCtrlEna.DocUnits = 'Cnt';
DutyCycThermProtnIgnOffCtrlEna.EngDT = dt.lgc;
DutyCycThermProtnIgnOffCtrlEna.EngVal = 0;
DutyCycThermProtnIgnOffCtrlEna.EngMin = 0;
DutyCycThermProtnIgnOffCtrlEna.EngMax = 1;
DutyCycThermProtnIgnOffCtrlEna.Cardinality = 'Cmn';
DutyCycThermProtnIgnOffCtrlEna.CustomerVisible = false;
DutyCycThermProtnIgnOffCtrlEna.Online = false;
DutyCycThermProtnIgnOffCtrlEna.Impact = 'H';
DutyCycThermProtnIgnOffCtrlEna.TuningOwner = 'ThermMngt';
DutyCycThermProtnIgnOffCtrlEna.GraphLink = {''};
DutyCycThermProtnIgnOffCtrlEna.Monotony = 'None';
DutyCycThermProtnIgnOffCtrlEna.MaxGrad = 998;
DutyCycThermProtnIgnOffCtrlEna.PortName = 'DutyCycThermProtnIgnOffCtrlEna';


DutyCycThermProtnIgnOffMsgWaitTi = DataDict.Calibration;
DutyCycThermProtnIgnOffMsgWaitTi.LongName = 'Duty Cycle Thermal Protection Ignition Off Message Wait Time';
DutyCycThermProtnIgnOffMsgWaitTi.Description = [...
  'Time for which the counter needs to be run after the periodic begins t' ...
  'o execute.'];
DutyCycThermProtnIgnOffMsgWaitTi.DocUnits = 'Sec';
DutyCycThermProtnIgnOffMsgWaitTi.EngDT = dt.float32;
DutyCycThermProtnIgnOffMsgWaitTi.EngVal = 0.5;
DutyCycThermProtnIgnOffMsgWaitTi.EngMin = 0;
DutyCycThermProtnIgnOffMsgWaitTi.EngMax = 60;
DutyCycThermProtnIgnOffMsgWaitTi.Cardinality = 'Cmn';
DutyCycThermProtnIgnOffMsgWaitTi.CustomerVisible = false;
DutyCycThermProtnIgnOffMsgWaitTi.Online = false;
DutyCycThermProtnIgnOffMsgWaitTi.Impact = 'H';
DutyCycThermProtnIgnOffMsgWaitTi.TuningOwner = 'ThermMngt';
DutyCycThermProtnIgnOffMsgWaitTi.GraphLink = {''};
DutyCycThermProtnIgnOffMsgWaitTi.Monotony = 'None';
DutyCycThermProtnIgnOffMsgWaitTi.MaxGrad = 998;
DutyCycThermProtnIgnOffMsgWaitTi.PortName = 'DutyCycThermProtnIgnOffMsgWaitTi';


DutyCycThermProtnLstTblValNonStall = DataDict.Calibration;
DutyCycThermProtnLstTblValNonStall.LongName = 'Duty Cycle Thermal Protection Last Table Value Non Stall';
DutyCycThermProtnLstTblValNonStall.Description = [...
  'Dependent variable - scale factor  for the load.'];
DutyCycThermProtnLstTblValNonStall.DocUnits = 'MotNwtMtr';
DutyCycThermProtnLstTblValNonStall.EngDT = dt.u9p7;
DutyCycThermProtnLstTblValNonStall.EngVal =  ...
   [1                1                1          0.34375          0.34375
    1                1                1          0.34375          0.34375];
DutyCycThermProtnLstTblValNonStall.EngMin = 0;
DutyCycThermProtnLstTblValNonStall.EngMax = 8.8;
DutyCycThermProtnLstTblValNonStall.Cardinality = 'Cmn';
DutyCycThermProtnLstTblValNonStall.CustomerVisible = false;
DutyCycThermProtnLstTblValNonStall.Online = false;
DutyCycThermProtnLstTblValNonStall.Impact = 'H';
DutyCycThermProtnLstTblValNonStall.TuningOwner = 'ThermMngt';
DutyCycThermProtnLstTblValNonStall.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnLstTblValNonStall.Monotony = 'None';
DutyCycThermProtnLstTblValNonStall.MaxGrad = 998;
DutyCycThermProtnLstTblValNonStall.PortName = 'DutyCycThermProtnLstTblValNonStall';


DutyCycThermProtnLstTblValStall = DataDict.Calibration;
DutyCycThermProtnLstTblValStall.LongName = 'Duty Cycle Thermal Protection Last Table Value Stall';
DutyCycThermProtnLstTblValStall.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnLstTblValStall.DocUnits = 'MotNwtMtr';
DutyCycThermProtnLstTblValStall.EngDT = dt.u9p7;
DutyCycThermProtnLstTblValStall.EngVal =  ...
   [0.96875          0.96875          0.96875           0.3125           0.3125
    0.96875          0.96875          0.96875           0.3125           0.3125];
DutyCycThermProtnLstTblValStall.EngMin = 0;
DutyCycThermProtnLstTblValStall.EngMax = 8.8;
DutyCycThermProtnLstTblValStall.Cardinality = 'Cmn';
DutyCycThermProtnLstTblValStall.CustomerVisible = false;
DutyCycThermProtnLstTblValStall.Online = false;
DutyCycThermProtnLstTblValStall.Impact = 'H';
DutyCycThermProtnLstTblValStall.TuningOwner = 'ThermMngt';
DutyCycThermProtnLstTblValStall.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnLstTblValStall.Monotony = 'None';
DutyCycThermProtnLstTblValStall.MaxGrad = 998;
DutyCycThermProtnLstTblValStall.PortName = 'DutyCycThermProtnLstTblValStall';


DutyCycThermProtnMotPrTSeln = DataDict.Calibration;
DutyCycThermProtnMotPrTSeln.LongName = 'Duty Cycle Thermal Protection Motor Pr Temperature Selection';
DutyCycThermProtnMotPrTSeln.Description = [...
  'Boolean for motor temperature selection.'];
DutyCycThermProtnMotPrTSeln.DocUnits = 'Cnt';
DutyCycThermProtnMotPrTSeln.EngDT = dt.lgc;
DutyCycThermProtnMotPrTSeln.EngVal = 1;
DutyCycThermProtnMotPrTSeln.EngMin = 0;
DutyCycThermProtnMotPrTSeln.EngMax = 1;
DutyCycThermProtnMotPrTSeln.Cardinality = 'Cmn';
DutyCycThermProtnMotPrTSeln.CustomerVisible = false;
DutyCycThermProtnMotPrTSeln.Online = false;
DutyCycThermProtnMotPrTSeln.Impact = 'H';
DutyCycThermProtnMotPrTSeln.TuningOwner = 'ThermMngt';
DutyCycThermProtnMotPrTSeln.GraphLink = {''};
DutyCycThermProtnMotPrTSeln.Monotony = 'None';
DutyCycThermProtnMotPrTSeln.MaxGrad = 998;
DutyCycThermProtnMotPrTSeln.PortName = 'DutyCycThermProtnMotPrTSeln';


DutyCycThermProtnMplr1FetMtgtnNonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 1 FET Mitigation Non Stall Table Y';
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET mitigation mode.' ...
  ''];
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.EngVal =  ...
   [0.01550293       0.01550293       0.01550293        0.1989746        0.1989746];
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.EngMin = 0;
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.Online = false;
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.Impact = 'H';
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr1FetMtgtnNonStallTblY.PortName = 'DutyCycThermProtnMplr1FetMtgtnNonStallTblY';


DutyCycThermProtnMplr1FetMtgtnStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr1FetMtgtnStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 1 FET Mitigation Stall Table Y';
DutyCycThermProtnMplr1FetMtgtnStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr1FetMtgtnStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr1FetMtgtnStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr1FetMtgtnStallTblY.EngVal =  ...
   [0.01623535       0.01623535       0.01623535       0.02197266       0.02197266];
DutyCycThermProtnMplr1FetMtgtnStallTblY.EngMin = 0;
DutyCycThermProtnMplr1FetMtgtnStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr1FetMtgtnStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr1FetMtgtnStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr1FetMtgtnStallTblY.Online = false;
DutyCycThermProtnMplr1FetMtgtnStallTblY.Impact = 'H';
DutyCycThermProtnMplr1FetMtgtnStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr1FetMtgtnStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr1FetMtgtnStallTblY.Monotony = 'None';
DutyCycThermProtnMplr1FetMtgtnStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr1FetMtgtnStallTblY.PortName = 'DutyCycThermProtnMplr1FetMtgtnStallTblY';


DutyCycThermProtnMplr1NonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr1NonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 1 Non Stall Table Y';
DutyCycThermProtnMplr1NonStallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr1NonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr1NonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr1NonStallTblY.EngVal =  ...
   [0.01550293       0.01550293       0.01550293        0.1989746        0.1989746];
DutyCycThermProtnMplr1NonStallTblY.EngMin = 0;
DutyCycThermProtnMplr1NonStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr1NonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr1NonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr1NonStallTblY.Online = false;
DutyCycThermProtnMplr1NonStallTblY.Impact = 'H';
DutyCycThermProtnMplr1NonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr1NonStallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr1NonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr1NonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr1NonStallTblY.PortName = 'DutyCycThermProtnMplr1NonStallTblY';


DutyCycThermProtnMplr1StallTblY = DataDict.Calibration;
DutyCycThermProtnMplr1StallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 1 Stall Table Y';
DutyCycThermProtnMplr1StallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr1StallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr1StallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr1StallTblY.EngVal =  ...
   [0.01623535       0.01623535       0.01623535       0.02197266       0.02197266];
DutyCycThermProtnMplr1StallTblY.EngMin = 0;
DutyCycThermProtnMplr1StallTblY.EngMax = 0.5;
DutyCycThermProtnMplr1StallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr1StallTblY.CustomerVisible = false;
DutyCycThermProtnMplr1StallTblY.Online = false;
DutyCycThermProtnMplr1StallTblY.Impact = 'H';
DutyCycThermProtnMplr1StallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr1StallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr1StallTblY.Monotony = 'None';
DutyCycThermProtnMplr1StallTblY.MaxGrad = 998;
DutyCycThermProtnMplr1StallTblY.PortName = 'DutyCycThermProtnMplr1StallTblY';


DutyCycThermProtnMplr2FetMtgtnNonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 2 FET Mitigation Non Stall Table Y';
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.EngVal =  ...
   [0.01940918       0.01940918       0.01940918       0.03430176       0.03430176];
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.EngMin = 0;
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.Online = false;
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.Impact = 'H';
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr2FetMtgtnNonStallTblY.PortName = 'DutyCycThermProtnMplr2FetMtgtnNonStallTblY';


DutyCycThermProtnMplr2FetMtgtnStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr2FetMtgtnStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 2 FET Mitigation Stall Table Y';
DutyCycThermProtnMplr2FetMtgtnStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr2FetMtgtnStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr2FetMtgtnStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr2FetMtgtnStallTblY.EngVal =  ...
   [0.02038574       0.02038574       0.02038574        0.0378418        0.0378418];
DutyCycThermProtnMplr2FetMtgtnStallTblY.EngMin = 0;
DutyCycThermProtnMplr2FetMtgtnStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr2FetMtgtnStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr2FetMtgtnStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr2FetMtgtnStallTblY.Online = false;
DutyCycThermProtnMplr2FetMtgtnStallTblY.Impact = 'H';
DutyCycThermProtnMplr2FetMtgtnStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr2FetMtgtnStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr2FetMtgtnStallTblY.Monotony = 'None';
DutyCycThermProtnMplr2FetMtgtnStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr2FetMtgtnStallTblY.PortName = 'DutyCycThermProtnMplr2FetMtgtnStallTblY';


DutyCycThermProtnMplr2NonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr2NonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 2 Non Stall Table Y';
DutyCycThermProtnMplr2NonStallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr2NonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr2NonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr2NonStallTblY.EngVal =  ...
   [0.01940918       0.01940918       0.01940918       0.03430176       0.03430176];
DutyCycThermProtnMplr2NonStallTblY.EngMin = 0;
DutyCycThermProtnMplr2NonStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr2NonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr2NonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr2NonStallTblY.Online = false;
DutyCycThermProtnMplr2NonStallTblY.Impact = 'H';
DutyCycThermProtnMplr2NonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr2NonStallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr2NonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr2NonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr2NonStallTblY.PortName = 'DutyCycThermProtnMplr2NonStallTblY';


DutyCycThermProtnMplr2StallTblY = DataDict.Calibration;
DutyCycThermProtnMplr2StallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 2 Stall Table Y';
DutyCycThermProtnMplr2StallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr2StallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr2StallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr2StallTblY.EngVal =  ...
   [0.02038574       0.02038574       0.02038574        0.0378418        0.0378418];
DutyCycThermProtnMplr2StallTblY.EngMin = 0;
DutyCycThermProtnMplr2StallTblY.EngMax = 0.5;
DutyCycThermProtnMplr2StallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr2StallTblY.CustomerVisible = false;
DutyCycThermProtnMplr2StallTblY.Online = false;
DutyCycThermProtnMplr2StallTblY.Impact = 'H';
DutyCycThermProtnMplr2StallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr2StallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr2StallTblY.Monotony = 'None';
DutyCycThermProtnMplr2StallTblY.MaxGrad = 998;
DutyCycThermProtnMplr2StallTblY.PortName = 'DutyCycThermProtnMplr2StallTblY';


DutyCycThermProtnMplr3FetMtgtnNonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 3 FET Mitigation Non Stall Table Y';
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.EngVal =  ...
   [0.02429199       0.02429199       0.02429199        0.1564941        0.1564941];
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.EngMin = 0;
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.Online = false;
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.Impact = 'H';
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr3FetMtgtnNonStallTblY.PortName = 'DutyCycThermProtnMplr3FetMtgtnNonStallTblY';


DutyCycThermProtnMplr3FetMtgtnStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr3FetMtgtnStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 3 FET Mitigation Stall Table Y';
DutyCycThermProtnMplr3FetMtgtnStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr3FetMtgtnStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr3FetMtgtnStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr3FetMtgtnStallTblY.EngVal =  ...
   [0.02563477       0.02563477       0.02563477         0.208374         0.208374];
DutyCycThermProtnMplr3FetMtgtnStallTblY.EngMin = 0;
DutyCycThermProtnMplr3FetMtgtnStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr3FetMtgtnStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr3FetMtgtnStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr3FetMtgtnStallTblY.Online = false;
DutyCycThermProtnMplr3FetMtgtnStallTblY.Impact = 'H';
DutyCycThermProtnMplr3FetMtgtnStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr3FetMtgtnStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr3FetMtgtnStallTblY.Monotony = 'None';
DutyCycThermProtnMplr3FetMtgtnStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr3FetMtgtnStallTblY.PortName = 'DutyCycThermProtnMplr3FetMtgtnStallTblY';


DutyCycThermProtnMplr3NonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr3NonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 3 Non Stall Table Y';
DutyCycThermProtnMplr3NonStallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr3NonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr3NonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr3NonStallTblY.EngVal =  ...
   [0.02429199       0.02429199       0.02429199        0.1564941        0.1564941];
DutyCycThermProtnMplr3NonStallTblY.EngMin = 0;
DutyCycThermProtnMplr3NonStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr3NonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr3NonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr3NonStallTblY.Online = false;
DutyCycThermProtnMplr3NonStallTblY.Impact = 'H';
DutyCycThermProtnMplr3NonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr3NonStallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr3NonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr3NonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr3NonStallTblY.PortName = 'DutyCycThermProtnMplr3NonStallTblY';


DutyCycThermProtnMplr3StallTblY = DataDict.Calibration;
DutyCycThermProtnMplr3StallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 3 Stall Table Y';
DutyCycThermProtnMplr3StallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr3StallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr3StallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr3StallTblY.EngVal =  ...
   [0.02563477       0.02563477       0.02563477         0.208374         0.208374];
DutyCycThermProtnMplr3StallTblY.EngMin = 0;
DutyCycThermProtnMplr3StallTblY.EngMax = 0.5;
DutyCycThermProtnMplr3StallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr3StallTblY.CustomerVisible = false;
DutyCycThermProtnMplr3StallTblY.Online = false;
DutyCycThermProtnMplr3StallTblY.Impact = 'H';
DutyCycThermProtnMplr3StallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr3StallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr3StallTblY.Monotony = 'None';
DutyCycThermProtnMplr3StallTblY.MaxGrad = 998;
DutyCycThermProtnMplr3StallTblY.PortName = 'DutyCycThermProtnMplr3StallTblY';


DutyCycThermProtnMplr4FetMtgtnNonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 4 FET Mitigation Non Stall Table Y';
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.EngVal =  ...
   [0.0001220703     0.0001220703     0.0001220703     0.0001220703     0.0001220703];
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.EngMin = 0;
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.Online = false;
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.Impact = 'H';
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr4FetMtgtnNonStallTblY.PortName = 'DutyCycThermProtnMplr4FetMtgtnNonStallTblY';


DutyCycThermProtnMplr4FetMtgtnStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr4FetMtgtnStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 4 FET Mitigation Stall Table Y';
DutyCycThermProtnMplr4FetMtgtnStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr4FetMtgtnStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr4FetMtgtnStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr4FetMtgtnStallTblY.EngVal =  ...
   [0.0001220703     0.0001220703     0.0001220703     0.0001220703     0.0001220703];
DutyCycThermProtnMplr4FetMtgtnStallTblY.EngMin = 0;
DutyCycThermProtnMplr4FetMtgtnStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr4FetMtgtnStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr4FetMtgtnStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr4FetMtgtnStallTblY.Online = false;
DutyCycThermProtnMplr4FetMtgtnStallTblY.Impact = 'H';
DutyCycThermProtnMplr4FetMtgtnStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr4FetMtgtnStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr4FetMtgtnStallTblY.Monotony = 'None';
DutyCycThermProtnMplr4FetMtgtnStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr4FetMtgtnStallTblY.PortName = 'DutyCycThermProtnMplr4FetMtgtnStallTblY';


DutyCycThermProtnMplr4NonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr4NonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 4 Non Stall Table Y';
DutyCycThermProtnMplr4NonStallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr4NonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr4NonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr4NonStallTblY.EngVal =  ...
   [0.0001220703     0.0001220703     0.0001220703     0.0001220703     0.0001220703];
DutyCycThermProtnMplr4NonStallTblY.EngMin = 0;
DutyCycThermProtnMplr4NonStallTblY.EngMax = 0.5;
DutyCycThermProtnMplr4NonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr4NonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr4NonStallTblY.Online = false;
DutyCycThermProtnMplr4NonStallTblY.Impact = 'H';
DutyCycThermProtnMplr4NonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr4NonStallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr4NonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr4NonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr4NonStallTblY.PortName = 'DutyCycThermProtnMplr4NonStallTblY';


DutyCycThermProtnMplr4StallTblY = DataDict.Calibration;
DutyCycThermProtnMplr4StallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 4 Stall Table Y';
DutyCycThermProtnMplr4StallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr4StallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr4StallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr4StallTblY.EngVal =  ...
   [0.0001220703     0.0001220703     0.0001220703     0.0001220703     0.0001220703];
DutyCycThermProtnMplr4StallTblY.EngMin = 0;
DutyCycThermProtnMplr4StallTblY.EngMax = 0.5;
DutyCycThermProtnMplr4StallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr4StallTblY.CustomerVisible = false;
DutyCycThermProtnMplr4StallTblY.Online = false;
DutyCycThermProtnMplr4StallTblY.Impact = 'H';
DutyCycThermProtnMplr4StallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr4StallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr4StallTblY.Monotony = 'None';
DutyCycThermProtnMplr4StallTblY.MaxGrad = 998;
DutyCycThermProtnMplr4StallTblY.PortName = 'DutyCycThermProtnMplr4StallTblY';


DutyCycThermProtnMplr5FetMtgtnNonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 5 FET Mitigation Non Stall Table Y';
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.EngVal =  ...
   [0.1218262        0.1218262        0.1218262          1.16394          1.16394];
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.EngMin = 0;
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.EngMax = 2;
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.Online = false;
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.Impact = 'H';
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr5FetMtgtnNonStallTblY.PortName = 'DutyCycThermProtnMplr5FetMtgtnNonStallTblY';


DutyCycThermProtnMplr5FetMtgtnStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr5FetMtgtnStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 5 FET Mitigation Stall Table Y';
DutyCycThermProtnMplr5FetMtgtnStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr5FetMtgtnStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr5FetMtgtnStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr5FetMtgtnStallTblY.EngVal =  ...
   [0.1218262        0.1218262        0.1218262          1.16394          1.16394];
DutyCycThermProtnMplr5FetMtgtnStallTblY.EngMin = 0;
DutyCycThermProtnMplr5FetMtgtnStallTblY.EngMax = 2;
DutyCycThermProtnMplr5FetMtgtnStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr5FetMtgtnStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr5FetMtgtnStallTblY.Online = false;
DutyCycThermProtnMplr5FetMtgtnStallTblY.Impact = 'H';
DutyCycThermProtnMplr5FetMtgtnStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr5FetMtgtnStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr5FetMtgtnStallTblY.Monotony = 'None';
DutyCycThermProtnMplr5FetMtgtnStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr5FetMtgtnStallTblY.PortName = 'DutyCycThermProtnMplr5FetMtgtnStallTblY';


DutyCycThermProtnMplr5NonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr5NonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 5 Non Stall Table Y';
DutyCycThermProtnMplr5NonStallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr5NonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr5NonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr5NonStallTblY.EngVal =  ...
   [0.1218262        0.1218262        0.1218262          1.16394          1.16394];
DutyCycThermProtnMplr5NonStallTblY.EngMin = 0;
DutyCycThermProtnMplr5NonStallTblY.EngMax = 2;
DutyCycThermProtnMplr5NonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr5NonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr5NonStallTblY.Online = false;
DutyCycThermProtnMplr5NonStallTblY.Impact = 'H';
DutyCycThermProtnMplr5NonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr5NonStallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr5NonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr5NonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr5NonStallTblY.PortName = 'DutyCycThermProtnMplr5NonStallTblY';


DutyCycThermProtnMplr5StallTblY = DataDict.Calibration;
DutyCycThermProtnMplr5StallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 5 Stall Table Y';
DutyCycThermProtnMplr5StallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr5StallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr5StallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr5StallTblY.EngVal =  ...
   [0.1218262        0.1218262        0.1218262          1.16394          1.16394];
DutyCycThermProtnMplr5StallTblY.EngMin = 0;
DutyCycThermProtnMplr5StallTblY.EngMax = 2;
DutyCycThermProtnMplr5StallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr5StallTblY.CustomerVisible = false;
DutyCycThermProtnMplr5StallTblY.Online = false;
DutyCycThermProtnMplr5StallTblY.Impact = 'H';
DutyCycThermProtnMplr5StallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr5StallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr5StallTblY.Monotony = 'None';
DutyCycThermProtnMplr5StallTblY.MaxGrad = 998;
DutyCycThermProtnMplr5StallTblY.PortName = 'DutyCycThermProtnMplr5StallTblY';


DutyCycThermProtnMplr6FetMtgtnNonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 6 FET Mitigation Non Stall Table Y';
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.EngVal =  ...
   [0.0001220703     0.0001220703     0.0001220703     0.0001220703     0.0001220703];
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.EngMin = 0;
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.EngMax = 2;
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.Online = false;
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.Impact = 'H';
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr6FetMtgtnNonStallTblY.PortName = 'DutyCycThermProtnMplr6FetMtgtnNonStallTblY';


DutyCycThermProtnMplr6FetMtgtnStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr6FetMtgtnStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 6  FET Mitigation Stall Table Y';
DutyCycThermProtnMplr6FetMtgtnStallTblY.Description = [...
  'Dependent variable - scale factor for the load in FET Mitigation mode.' ...
  ''];
DutyCycThermProtnMplr6FetMtgtnStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr6FetMtgtnStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr6FetMtgtnStallTblY.EngVal =  ...
   [0.0001220703     0.0001220703     0.0001220703     0.0001220703     0.0001220703];
DutyCycThermProtnMplr6FetMtgtnStallTblY.EngMin = 0;
DutyCycThermProtnMplr6FetMtgtnStallTblY.EngMax = 2;
DutyCycThermProtnMplr6FetMtgtnStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr6FetMtgtnStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr6FetMtgtnStallTblY.Online = false;
DutyCycThermProtnMplr6FetMtgtnStallTblY.Impact = 'H';
DutyCycThermProtnMplr6FetMtgtnStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr6FetMtgtnStallTblY.GraphLink = {'DutyCycThermProtnMplrFetMtgtnTblX'};
DutyCycThermProtnMplr6FetMtgtnStallTblY.Monotony = 'None';
DutyCycThermProtnMplr6FetMtgtnStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr6FetMtgtnStallTblY.PortName = 'DutyCycThermProtnMplr6FetMtgtnStallTblY';


DutyCycThermProtnMplr6NonStallTblY = DataDict.Calibration;
DutyCycThermProtnMplr6NonStallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 6 Non Stall Table Y';
DutyCycThermProtnMplr6NonStallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr6NonStallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr6NonStallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr6NonStallTblY.EngVal =  ...
   [0.0001220703     0.0001220703     0.0001220703     0.0001220703     0.0001220703];
DutyCycThermProtnMplr6NonStallTblY.EngMin = 0;
DutyCycThermProtnMplr6NonStallTblY.EngMax = 2;
DutyCycThermProtnMplr6NonStallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr6NonStallTblY.CustomerVisible = false;
DutyCycThermProtnMplr6NonStallTblY.Online = false;
DutyCycThermProtnMplr6NonStallTblY.Impact = 'H';
DutyCycThermProtnMplr6NonStallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr6NonStallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr6NonStallTblY.Monotony = 'None';
DutyCycThermProtnMplr6NonStallTblY.MaxGrad = 998;
DutyCycThermProtnMplr6NonStallTblY.PortName = 'DutyCycThermProtnMplr6NonStallTblY';


DutyCycThermProtnMplr6StallTblY = DataDict.Calibration;
DutyCycThermProtnMplr6StallTblY.LongName = 'Duty Cycle Thermal Protection Multiplier 6 Stall Table Y';
DutyCycThermProtnMplr6StallTblY.Description = [...
  'Dependent variable - scale factor for the load.'];
DutyCycThermProtnMplr6StallTblY.DocUnits = 'Uls';
DutyCycThermProtnMplr6StallTblY.EngDT = dt.u3p13;
DutyCycThermProtnMplr6StallTblY.EngVal =  ...
   [0.0001220703     0.0001220703     0.0001220703     0.0001220703     0.0001220703];
DutyCycThermProtnMplr6StallTblY.EngMin = 0;
DutyCycThermProtnMplr6StallTblY.EngMax = 2;
DutyCycThermProtnMplr6StallTblY.Cardinality = 'Cmn';
DutyCycThermProtnMplr6StallTblY.CustomerVisible = false;
DutyCycThermProtnMplr6StallTblY.Online = false;
DutyCycThermProtnMplr6StallTblY.Impact = 'H';
DutyCycThermProtnMplr6StallTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplr6StallTblY.GraphLink = {'DutyCycThermProtnMplrTblX'};
DutyCycThermProtnMplr6StallTblY.Monotony = 'None';
DutyCycThermProtnMplr6StallTblY.MaxGrad = 998;
DutyCycThermProtnMplr6StallTblY.PortName = 'DutyCycThermProtnMplr6StallTblY';


DutyCycThermProtnMplrFetMtgtnTblX = DataDict.Calibration;
DutyCycThermProtnMplrFetMtgtnTblX.LongName = 'Duty Cycle Thermal Protection Multiplier  FetMtgtn Table X';
DutyCycThermProtnMplrFetMtgtnTblX.Description = 'Independent variable – Temperature';
DutyCycThermProtnMplrFetMtgtnTblX.DocUnits = 'DegCgrd';
DutyCycThermProtnMplrFetMtgtnTblX.EngDT = dt.s15p0;
DutyCycThermProtnMplrFetMtgtnTblX.EngVal =  ...
   [-40                0               83               84               85];
DutyCycThermProtnMplrFetMtgtnTblX.EngMin = -40;
DutyCycThermProtnMplrFetMtgtnTblX.EngMax = 300;
DutyCycThermProtnMplrFetMtgtnTblX.Cardinality = 'Cmn';
DutyCycThermProtnMplrFetMtgtnTblX.CustomerVisible = false;
DutyCycThermProtnMplrFetMtgtnTblX.Online = false;
DutyCycThermProtnMplrFetMtgtnTblX.Impact = 'H';
DutyCycThermProtnMplrFetMtgtnTblX.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplrFetMtgtnTblX.GraphLink = {''};
DutyCycThermProtnMplrFetMtgtnTblX.Monotony = 'Strictly_Increasing';
DutyCycThermProtnMplrFetMtgtnTblX.MaxGrad = 998;
DutyCycThermProtnMplrFetMtgtnTblX.PortName = 'DutyCycThermProtnMplrFetMtgtnTblX';


DutyCycThermProtnMplrTSeln = DataDict.Calibration;
DutyCycThermProtnMplrTSeln.LongName = 'Duty Cycle Thermal Protection Multiplier Temeperature Selection';
DutyCycThermProtnMplrTSeln.Description = [...
  'Boolean for Multiplier temperature selection'];
DutyCycThermProtnMplrTSeln.DocUnits = 'Cnt';
DutyCycThermProtnMplrTSeln.EngDT = dt.lgc;
DutyCycThermProtnMplrTSeln.EngVal = 1;
DutyCycThermProtnMplrTSeln.EngMin = 0;
DutyCycThermProtnMplrTSeln.EngMax = 1;
DutyCycThermProtnMplrTSeln.Cardinality = 'Cmn';
DutyCycThermProtnMplrTSeln.CustomerVisible = false;
DutyCycThermProtnMplrTSeln.Online = false;
DutyCycThermProtnMplrTSeln.Impact = 'H';
DutyCycThermProtnMplrTSeln.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplrTSeln.GraphLink = {''};
DutyCycThermProtnMplrTSeln.Monotony = 'None';
DutyCycThermProtnMplrTSeln.MaxGrad = 998;
DutyCycThermProtnMplrTSeln.PortName = 'DutyCycThermProtnMplrTSeln';


DutyCycThermProtnMplrTblX = DataDict.Calibration;
DutyCycThermProtnMplrTblX.LongName = 'Duty Cycle Thermal Protection Multiplier Table X';
DutyCycThermProtnMplrTblX.Description = 'Independent variable – Temperature';
DutyCycThermProtnMplrTblX.DocUnits = 'DegCgrd';
DutyCycThermProtnMplrTblX.EngDT = dt.s15p0;
DutyCycThermProtnMplrTblX.EngVal =  ...
   [-40                0               83               84               85];
DutyCycThermProtnMplrTblX.EngMin = -40;
DutyCycThermProtnMplrTblX.EngMax = 300;
DutyCycThermProtnMplrTblX.Cardinality = 'Cmn';
DutyCycThermProtnMplrTblX.CustomerVisible = false;
DutyCycThermProtnMplrTblX.Online = false;
DutyCycThermProtnMplrTblX.Impact = 'H';
DutyCycThermProtnMplrTblX.TuningOwner = 'ThermMngt';
DutyCycThermProtnMplrTblX.GraphLink = {''};
DutyCycThermProtnMplrTblX.Monotony = 'Strictly_Increasing';
DutyCycThermProtnMplrTblX.MaxGrad = 998;
DutyCycThermProtnMplrTblX.PortName = 'DutyCycThermProtnMplrTblX';


DutyCycThermProtnSlowFilTSeln = DataDict.Calibration;
DutyCycThermProtnSlowFilTSeln.LongName = 'Duty Cycle Thermal Protection Slow Filter Temperature Selection';
DutyCycThermProtnSlowFilTSeln.Description = [...
  'Boolean for Slow Filter temperature selection'];
DutyCycThermProtnSlowFilTSeln.DocUnits = 'Cnt';
DutyCycThermProtnSlowFilTSeln.EngDT = dt.lgc;
DutyCycThermProtnSlowFilTSeln.EngVal = 0;
DutyCycThermProtnSlowFilTSeln.EngMin = 0;
DutyCycThermProtnSlowFilTSeln.EngMax = 1;
DutyCycThermProtnSlowFilTSeln.Cardinality = 'Cmn';
DutyCycThermProtnSlowFilTSeln.CustomerVisible = false;
DutyCycThermProtnSlowFilTSeln.Online = false;
DutyCycThermProtnSlowFilTSeln.Impact = 'H';
DutyCycThermProtnSlowFilTSeln.TuningOwner = 'ThermMngt';
DutyCycThermProtnSlowFilTSeln.GraphLink = {''};
DutyCycThermProtnSlowFilTSeln.Monotony = 'None';
DutyCycThermProtnSlowFilTSeln.MaxGrad = 998;
DutyCycThermProtnSlowFilTSeln.PortName = 'DutyCycThermProtnSlowFilTSeln';


DutyCycThermProtnThermLimScaFac = DataDict.Calibration;
DutyCycThermProtnThermLimScaFac.LongName = 'Duty Cycle Thermal Protection Thermal Limit Scale Factor';
DutyCycThermProtnThermLimScaFac.Description = [...
  'Scale Factor applied when Fault mitigation flags are true.'];
DutyCycThermProtnThermLimScaFac.DocUnits = 'Uls';
DutyCycThermProtnThermLimScaFac.EngDT = dt.float32;
DutyCycThermProtnThermLimScaFac.EngVal = 0.5;
DutyCycThermProtnThermLimScaFac.EngMin = 0;
DutyCycThermProtnThermLimScaFac.EngMax = 1;
DutyCycThermProtnThermLimScaFac.Cardinality = 'Cmn';
DutyCycThermProtnThermLimScaFac.CustomerVisible = false;
DutyCycThermProtnThermLimScaFac.Online = false;
DutyCycThermProtnThermLimScaFac.Impact = 'H';
DutyCycThermProtnThermLimScaFac.TuningOwner = 'ThermMngt';
DutyCycThermProtnThermLimScaFac.GraphLink = {''};
DutyCycThermProtnThermLimScaFac.Monotony = 'None';
DutyCycThermProtnThermLimScaFac.MaxGrad = 998;
DutyCycThermProtnThermLimScaFac.PortName = 'DutyCycThermProtnThermLimScaFac';


DutyCycThermProtnThermLoadLimTblX = DataDict.Calibration;
DutyCycThermProtnThermLoadLimTblX.LongName = 'Duty Cycle Thermal Protection Thermal Load Limit Table X';
DutyCycThermProtnThermLoadLimTblX.Description = [...
  'Unsigned Variable X, No. of Points: 8, X Table: Independent Variable –' ...
  ' Maximum among filter outputs'];
DutyCycThermProtnThermLoadLimTblX.DocUnits = 'Uls';
DutyCycThermProtnThermLoadLimTblX.EngDT = dt.u16p0;
DutyCycThermProtnThermLoadLimTblX.EngVal =  ...
   [0               76               80               84               88               92               96              100
    0               76               80               84               88               92               96              100];
DutyCycThermProtnThermLoadLimTblX.EngMin = 0;
DutyCycThermProtnThermLoadLimTblX.EngMax = 100;
DutyCycThermProtnThermLoadLimTblX.Cardinality = 'Cmn';
DutyCycThermProtnThermLoadLimTblX.CustomerVisible = false;
DutyCycThermProtnThermLoadLimTblX.Online = false;
DutyCycThermProtnThermLoadLimTblX.Impact = 'H';
DutyCycThermProtnThermLoadLimTblX.TuningOwner = 'ThermMngt';
DutyCycThermProtnThermLoadLimTblX.GraphLink = {''};
DutyCycThermProtnThermLoadLimTblX.Monotony = 'Strictly_Increasing';
DutyCycThermProtnThermLoadLimTblX.MaxGrad = 998;
DutyCycThermProtnThermLoadLimTblX.PortName = 'DutyCycThermProtnThermLoadLimTblX';


DutyCycThermProtnThermLoadLimTblY = DataDict.Calibration;
DutyCycThermProtnThermLoadLimTblY.LongName = 'Duty Cycle Thermal Protection Thermal Load Limit Table Y';
DutyCycThermProtnThermLoadLimTblY.Description = [...
  'Unsigned Variable Y, Number of Points:  8, Y Table:  Dependent variabl' ...
  'e motor torque limit in MotNwtMtr'];
DutyCycThermProtnThermLoadLimTblY.DocUnits = 'MotNwtMtr';
DutyCycThermProtnThermLoadLimTblY.EngDT = dt.u9p7;
DutyCycThermProtnThermLoadLimTblY.EngVal =  ...
   [2.703125         2.703125         2.703125         2.703125         2.242188         1.828125         1.414063                1
    2.703125         2.703125         2.703125         2.703125         2.242188         1.828125         1.414063                1];
DutyCycThermProtnThermLoadLimTblY.EngMin = 0;
DutyCycThermProtnThermLoadLimTblY.EngMax = 8.8;
DutyCycThermProtnThermLoadLimTblY.Cardinality = 'Cmn';
DutyCycThermProtnThermLoadLimTblY.CustomerVisible = false;
DutyCycThermProtnThermLoadLimTblY.Online = false;
DutyCycThermProtnThermLoadLimTblY.Impact = 'H';
DutyCycThermProtnThermLoadLimTblY.TuningOwner = 'ThermMngt';
DutyCycThermProtnThermLoadLimTblY.GraphLink = {'DutyCycThermProtnThermLoadLimTblX'};
DutyCycThermProtnThermLoadLimTblY.Monotony = 'None';
DutyCycThermProtnThermLoadLimTblY.MaxGrad = 998;
DutyCycThermProtnThermLoadLimTblY.PortName = 'DutyCycThermProtnThermLoadLimTblY';


DutyCycThermProtnTqCmdSlewDwn = DataDict.Calibration;
DutyCycThermProtnTqCmdSlewDwn.LongName = 'Duty Cycle Thermal Protection Torque Command Slew Down';
DutyCycThermProtnTqCmdSlewDwn.Description = [...
  'Allowed change in torque command per second during decay.'];
DutyCycThermProtnTqCmdSlewDwn.DocUnits = 'MotNwtMtrPerSec';
DutyCycThermProtnTqCmdSlewDwn.EngDT = dt.float32;
DutyCycThermProtnTqCmdSlewDwn.EngVal = 0.3;
DutyCycThermProtnTqCmdSlewDwn.EngMin = 0.05;
DutyCycThermProtnTqCmdSlewDwn.EngMax = 88;
DutyCycThermProtnTqCmdSlewDwn.Cardinality = 'Cmn';
DutyCycThermProtnTqCmdSlewDwn.CustomerVisible = false;
DutyCycThermProtnTqCmdSlewDwn.Online = false;
DutyCycThermProtnTqCmdSlewDwn.Impact = 'H';
DutyCycThermProtnTqCmdSlewDwn.TuningOwner = 'ThermMngt';
DutyCycThermProtnTqCmdSlewDwn.GraphLink = {''};
DutyCycThermProtnTqCmdSlewDwn.Monotony = 'None';
DutyCycThermProtnTqCmdSlewDwn.MaxGrad = 998;
DutyCycThermProtnTqCmdSlewDwn.PortName = 'DutyCycThermProtnTqCmdSlewDwn';


DutyCycThermProtnTqCmdSlewUp = DataDict.Calibration;
DutyCycThermProtnTqCmdSlewUp.LongName = 'Duty Cycle Thermal Protection Torque Command Slew Up';
DutyCycThermProtnTqCmdSlewUp.Description = [...
  'Allowed change in torque command per second during recovery.'];
DutyCycThermProtnTqCmdSlewUp.DocUnits = 'MotNwtMtrPerSec';
DutyCycThermProtnTqCmdSlewUp.EngDT = dt.float32;
DutyCycThermProtnTqCmdSlewUp.EngVal = 0.3;
DutyCycThermProtnTqCmdSlewUp.EngMin = 0.05;
DutyCycThermProtnTqCmdSlewUp.EngMax = 88;
DutyCycThermProtnTqCmdSlewUp.Cardinality = 'Cmn';
DutyCycThermProtnTqCmdSlewUp.CustomerVisible = false;
DutyCycThermProtnTqCmdSlewUp.Online = false;
DutyCycThermProtnTqCmdSlewUp.Impact = 'H';
DutyCycThermProtnTqCmdSlewUp.TuningOwner = 'ThermMngt';
DutyCycThermProtnTqCmdSlewUp.GraphLink = {''};
DutyCycThermProtnTqCmdSlewUp.Monotony = 'None';
DutyCycThermProtnTqCmdSlewUp.MaxGrad = 998;
DutyCycThermProtnTqCmdSlewUp.PortName = 'DutyCycThermProtnTqCmdSlewUp';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
FilStVal = DataDict.NVM;
FilStVal.LongName = 'Filter State Value';
FilStVal.Description = [...
  'Filters 3, 4, 5, 6 state Values which will be written at each sample t' ...
  'ime for use at Power On after Power Off'];
FilStVal.DocUnits = 'Uls';
FilStVal.EngDT = struct.DutyCycThermProtnFilStValRec1;
FilStVal.EngInit = [];
FilStVal.EngMin = [struct('Fil3StVal',0,'Fil4StVal',0,'Fil5StVal',0,'Fil6StVal',0)];
FilStVal.EngMax = [struct('Fil3StVal',200,'Fil4StVal',200,'Fil5StVal',200,'Fil6StVal',200)];
FilStVal.CustomerVisible = false;
FilStVal.Impact = 'H';
FilStVal.TuningOwner = 'FDD';
FilStVal.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dDutyCycThermProtnAbsltCtrlrTTqLim = DataDict.Display;
dDutyCycThermProtnAbsltCtrlrTTqLim.LongName = 'Duty Cycle Thermal Protection Absolute Controller Temperature Torque Limit';
dDutyCycThermProtnAbsltCtrlrTTqLim.Description = [...
  'Motor torque command limitation imposed by measured controller tempera' ...
  'ture. Instantaneous value, before slew.'];
dDutyCycThermProtnAbsltCtrlrTTqLim.DocUnits = 'MotNwtMtr';
dDutyCycThermProtnAbsltCtrlrTTqLim.EngDT = dt.float32;
dDutyCycThermProtnAbsltCtrlrTTqLim.EngMin = 0;
dDutyCycThermProtnAbsltCtrlrTTqLim.EngMax = 8.79;
dDutyCycThermProtnAbsltCtrlrTTqLim.InitRowCol = [1  1];


dDutyCycThermProtnAbsltCuTTqLim = DataDict.Display;
dDutyCycThermProtnAbsltCuTTqLim.LongName = 'Duty Cycle Thermal Protection Absolute Copper Temperature Torque Limit';
dDutyCycThermProtnAbsltCuTTqLim.Description = [...
  'Motor torque command limitation imposed by estimated copper temperatur' ...
  'e. Instantaneous value, before slew.'];
dDutyCycThermProtnAbsltCuTTqLim.DocUnits = 'MotNwtMtr';
dDutyCycThermProtnAbsltCuTTqLim.EngDT = dt.float32;
dDutyCycThermProtnAbsltCuTTqLim.EngMin = 0;
dDutyCycThermProtnAbsltCuTTqLim.EngMax = 8.79;
dDutyCycThermProtnAbsltCuTTqLim.InitRowCol = [1  1];


dDutyCycThermProtnAbsltTTqLim = DataDict.Display;
dDutyCycThermProtnAbsltTTqLim.LongName = 'Duty Cycle Thermal Protection Absolute Temperature Torque Limit';
dDutyCycThermProtnAbsltTTqLim.Description = [...
  'Minimum of motor torque command limitations imposed by measured contro' ...
  'ller temperature and by estimated copper temperature.  Instantaneous v' ...
  'alue, before slew.'];
dDutyCycThermProtnAbsltTTqLim.DocUnits = 'MotNwtMtr';
dDutyCycThermProtnAbsltTTqLim.EngDT = dt.float32;
dDutyCycThermProtnAbsltTTqLim.EngMin = 0;
dDutyCycThermProtnAbsltTTqLim.EngMax = 8.79;
dDutyCycThermProtnAbsltTTqLim.InitRowCol = [1  1];


dDutyCycThermProtnLstTblVal = DataDict.Display;
dDutyCycThermProtnLstTblVal.LongName = 'Duty Cycle Thermal Protection Last Table Value';
dDutyCycThermProtnLstTblVal.Description = [...
  'Chosen last value of Thermal Load table, before rate limiting.'];
dDutyCycThermProtnLstTblVal.DocUnits = 'MotNwtMtr';
dDutyCycThermProtnLstTblVal.EngDT = dt.u9p7;
dDutyCycThermProtnLstTblVal.EngMin = 0;
dDutyCycThermProtnLstTblVal.EngMax = 8.79;
dDutyCycThermProtnLstTblVal.InitRowCol = [1  1];


dDutyCycThermProtnLstTblValSlew = DataDict.Display;
dDutyCycThermProtnLstTblValSlew.LongName = 'Duty Cycle Thermal Protection Last Table Value Slew';
dDutyCycThermProtnLstTblValSlew.Description = [...
  'Chosen last value of Thermal Load table, after rate limiting.'];
dDutyCycThermProtnLstTblValSlew.DocUnits = 'MotNwtMtr';
dDutyCycThermProtnLstTblValSlew.EngDT = dt.u9p7;
dDutyCycThermProtnLstTblValSlew.EngMin = 0;
dDutyCycThermProtnLstTblValSlew.EngMax = 8.79;
dDutyCycThermProtnLstTblValSlew.InitRowCol = [1  1];


dDutyCycThermProtnMplr1 = DataDict.Display;
dDutyCycThermProtnMplr1.LongName = 'Duty Cycle Thermal Protection Multiplier 1';
dDutyCycThermProtnMplr1.Description = [...
  'Multiplier 1, applied to "MotCurrPeakEstimd" before low-pass filter 1.' ...
  ''];
dDutyCycThermProtnMplr1.DocUnits = 'Uls';
dDutyCycThermProtnMplr1.EngDT = dt.u3p13;
dDutyCycThermProtnMplr1.EngMin = 0;
dDutyCycThermProtnMplr1.EngMax = 0.5;
dDutyCycThermProtnMplr1.InitRowCol = [1  1];


dDutyCycThermProtnMplr12T = DataDict.Display;
dDutyCycThermProtnMplr12T.LongName = 'Duty Cycle Thermal Protection Multiplier 1 and 2 Temperature';
dDutyCycThermProtnMplr12T.Description = [...
  'Temperature Value used as input to lookup tables to generate filter mu' ...
  'ltipliers 1 and 2.'];
dDutyCycThermProtnMplr12T.DocUnits = 'DegCgrd';
dDutyCycThermProtnMplr12T.EngDT = dt.float32;
dDutyCycThermProtnMplr12T.EngMin = -50;
dDutyCycThermProtnMplr12T.EngMax = 200;
dDutyCycThermProtnMplr12T.InitRowCol = [1  1];


dDutyCycThermProtnMplr2 = DataDict.Display;
dDutyCycThermProtnMplr2.LongName = 'Duty Cycle Thermal Protection Multiplier 2';
dDutyCycThermProtnMplr2.Description = [...
  'Multiplier 2, applied to "MotCurrPeakEstimd" before low-pass filter 2.' ...
  ''];
dDutyCycThermProtnMplr2.DocUnits = 'Uls';
dDutyCycThermProtnMplr2.EngDT = dt.u3p13;
dDutyCycThermProtnMplr2.EngMin = 0;
dDutyCycThermProtnMplr2.EngMax = 0.5;
dDutyCycThermProtnMplr2.InitRowCol = [1  1];


dDutyCycThermProtnMplr3 = DataDict.Display;
dDutyCycThermProtnMplr3.LongName = 'Duty Cycle Thermal Protection Multiplier 3';
dDutyCycThermProtnMplr3.Description = [...
  'Multiplier 3, applied to "MotCurrPeakEstimd" before low-pass filter 3.' ...
  ''];
dDutyCycThermProtnMplr3.DocUnits = 'Uls';
dDutyCycThermProtnMplr3.EngDT = dt.u3p13;
dDutyCycThermProtnMplr3.EngMin = 0;
dDutyCycThermProtnMplr3.EngMax = 0.5;
dDutyCycThermProtnMplr3.InitRowCol = [1  1];


dDutyCycThermProtnMplr36T = DataDict.Display;
dDutyCycThermProtnMplr36T.LongName = 'Duty Cycle Thermal Protection Multiplier 3 and 6 Temperature';
dDutyCycThermProtnMplr36T.Description = [...
  'Temperature used in lookup tables to generate filter multipliers 3, 4,' ...
  ' 5, and 6.'];
dDutyCycThermProtnMplr36T.DocUnits = 'DegCgrd';
dDutyCycThermProtnMplr36T.EngDT = dt.float32;
dDutyCycThermProtnMplr36T.EngMin = -50;
dDutyCycThermProtnMplr36T.EngMax = 300;
dDutyCycThermProtnMplr36T.InitRowCol = [1  1];


dDutyCycThermProtnMplr4 = DataDict.Display;
dDutyCycThermProtnMplr4.LongName = 'Duty Cycle Thermal Protection Multiplier 4';
dDutyCycThermProtnMplr4.Description = [...
  'Multiplier 4, applied to Fitered Peak Current "MotCurrPeakEstimdFild" ' ...
  'before low-pass filter 4.'];
dDutyCycThermProtnMplr4.DocUnits = 'Uls';
dDutyCycThermProtnMplr4.EngDT = dt.u3p13;
dDutyCycThermProtnMplr4.EngMin = 0;
dDutyCycThermProtnMplr4.EngMax = 7.99;
dDutyCycThermProtnMplr4.InitRowCol = [1  1];


dDutyCycThermProtnMplr5 = DataDict.Display;
dDutyCycThermProtnMplr5.LongName = 'Duty Cycle Thermal Protection Multiplier 5';
dDutyCycThermProtnMplr5.Description = [...
  'Multiplier 5, applied to Fitered Peak Current "MotCurrPeakEstimdFild" ' ...
  'before low-pass filter 5.'];
dDutyCycThermProtnMplr5.DocUnits = 'Uls';
dDutyCycThermProtnMplr5.EngDT = dt.u3p13;
dDutyCycThermProtnMplr5.EngMin = 0;
dDutyCycThermProtnMplr5.EngMax = 2;
dDutyCycThermProtnMplr5.InitRowCol = [1  1];


dDutyCycThermProtnMplr6 = DataDict.Display;
dDutyCycThermProtnMplr6.LongName = 'Duty Cycle Thermal Protection Multiplier 6';
dDutyCycThermProtnMplr6.Description = [...
  'Multiplier 6, applied to Fitered Peak Current "MotCurrPeakEstimdFild" ' ...
  'before low-pass filter 6.'];
dDutyCycThermProtnMplr6.DocUnits = 'Uls';
dDutyCycThermProtnMplr6.EngDT = dt.u3p13;
dDutyCycThermProtnMplr6.EngMin = 0;
dDutyCycThermProtnMplr6.EngMax = 2;
dDutyCycThermProtnMplr6.InitRowCol = [1  1];


dDutyCycThermProtnThermLoadLim = DataDict.Display;
dDutyCycThermProtnThermLoadLim.LongName = 'Duty Cycle Thermal Protection Thermal Load Limit';
dDutyCycThermProtnThermLoadLim.Description = [...
  'Allowable motor torque command, calculated from filters.  This value i' ...
  's output from the function unless absolute temperature is too high, th' ...
  'e function is defeated, or the value is subsequently limited to legal ' ...
  'range.'];
dDutyCycThermProtnThermLoadLim.DocUnits = 'MotNwtMtr';
dDutyCycThermProtnThermLoadLim.EngDT = dt.float32;
dDutyCycThermProtnThermLoadLim.EngMin = 0;
dDutyCycThermProtnThermLoadLim.EngMax = 8.79;
dDutyCycThermProtnThermLoadLim.InitRowCol = [1  1];


dDutyCycThermProtnThermLoadLimTblYVal = DataDict.Display;
dDutyCycThermProtnThermLoadLimTblYVal.LongName = 'Duty Cycle Thermal Protection Thermal Load Limit Table Y Value';
dDutyCycThermProtnThermLoadLimTblYVal.Description = [...
  'Maximum value of 0.01 and first element of "DutyCycThermProtnThermLoad' ...
  'LimTblY".'];
dDutyCycThermProtnThermLoadLimTblYVal.DocUnits = 'MotNwtMtr';
dDutyCycThermProtnThermLoadLimTblYVal.EngDT = dt.float32;
dDutyCycThermProtnThermLoadLimTblYVal.EngMin = 0;
dDutyCycThermProtnThermLoadLimTblYVal.EngMax = 8.79;
dDutyCycThermProtnThermLoadLimTblYVal.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AbsltTLimSlewStVari = DataDict.PIM;
AbsltTLimSlewStVari.LongName = 'Absolute Temperature Limit Slew State Variable';
AbsltTLimSlewStVari.Description = [...
  'State Variable for Rate Limiter of Absolute Temperature Limit Value'];
AbsltTLimSlewStVari.DocUnits = 'MotNwtMtr';
AbsltTLimSlewStVari.EngDT = dt.float32;
AbsltTLimSlewStVari.EngMin = 0;
AbsltTLimSlewStVari.EngMax = 8.79;
AbsltTLimSlewStVari.InitRowCol = [1  1];


FetLoaMtgtnEnaPrev = DataDict.PIM;
FetLoaMtgtnEnaPrev.LongName = 'Fet Mitigation enable calibration index (n-1)';
FetLoaMtgtnEnaPrev.Description = [...
  'Variable for calibration index of Last Table Value '];
FetLoaMtgtnEnaPrev.DocUnits = 'Cnt';
FetLoaMtgtnEnaPrev.EngDT = dt.lgc;
FetLoaMtgtnEnaPrev.EngMin = 0;
FetLoaMtgtnEnaPrev.EngMax = 1;
FetLoaMtgtnEnaPrev.InitRowCol = [1  1];


FetMtgtnEnaCalIdx = DataDict.PIM;
FetMtgtnEnaCalIdx.LongName = 'Fet Mitigation enable calibration index';
FetMtgtnEnaCalIdx.Description = [...
  'Variable for calibration index of Next Table Value '];
FetMtgtnEnaCalIdx.DocUnits = 'Cnt';
FetMtgtnEnaCalIdx.EngDT = dt.u08;
FetMtgtnEnaCalIdx.EngMin = 0;
FetMtgtnEnaCalIdx.EngMax = 1;
FetMtgtnEnaCalIdx.InitRowCol = [1  1];


Fil1ValStVari = DataDict.PIM;
Fil1ValStVari.LongName = 'Filter 1 Value State Variable';
Fil1ValStVari.Description = [...
  'State variable for Low Pass Filter 1'];
Fil1ValStVari.DocUnits = 'Uls';
Fil1ValStVari.EngDT = struct.FilLpRec1;
Fil1ValStVari.EngMin = [struct('FilSt',0,'FilGain',0)];
Fil1ValStVari.EngMax = [struct('FilSt',31250,'FilGain',1)];
Fil1ValStVari.InitRowCol = [1  1];


Fil2ValStVari = DataDict.PIM;
Fil2ValStVari.LongName = 'Filter 2 Value State Variable';
Fil2ValStVari.Description = [...
  'State variable for Low Pass Filter 2'];
Fil2ValStVari.DocUnits = 'Uls';
Fil2ValStVari.EngDT = struct.FilLpRec1;
Fil2ValStVari.EngMin = [struct('FilSt',0,'FilGain',0)];
Fil2ValStVari.EngMax = [struct('FilSt',31250,'FilGain',1)];
Fil2ValStVari.InitRowCol = [1  1];


Fil3ValPwrUp = DataDict.PIM;
Fil3ValPwrUp.LongName = 'Filter 3 Value Power Up';
Fil3ValPwrUp.Description = [...
  'Filter 3 state value (Fil3StVal) saved at initialization for use in pe' ...
  'riodic function '];
Fil3ValPwrUp.DocUnits = 'Uls';
Fil3ValPwrUp.EngDT = dt.u08;
Fil3ValPwrUp.EngMin = 0;
Fil3ValPwrUp.EngMax = 200;
Fil3ValPwrUp.InitRowCol = [1  1];


Fil4ValPwrUp = DataDict.PIM;
Fil4ValPwrUp.LongName = 'Filter 4 Value Power Up';
Fil4ValPwrUp.Description = [...
  'Filter 4 state value (Fil4StVal) saved at initialization for use in pe' ...
  'riodic function '];
Fil4ValPwrUp.DocUnits = 'Uls';
Fil4ValPwrUp.EngDT = dt.u08;
Fil4ValPwrUp.EngMin = 0;
Fil4ValPwrUp.EngMax = 200;
Fil4ValPwrUp.InitRowCol = [1  1];


Fil5ValPwrUp = DataDict.PIM;
Fil5ValPwrUp.LongName = 'Filter 5 Value Power Up';
Fil5ValPwrUp.Description = [...
  'Filter 5 state value (Fil5StVal) saved at initialization for use in pe' ...
  'riodic function '];
Fil5ValPwrUp.DocUnits = 'Uls';
Fil5ValPwrUp.EngDT = dt.u08;
Fil5ValPwrUp.EngMin = 0;
Fil5ValPwrUp.EngMax = 200;
Fil5ValPwrUp.InitRowCol = [1  1];


Fil6ValPwrUp = DataDict.PIM;
Fil6ValPwrUp.LongName = 'Filter 6 Value Power Up';
Fil6ValPwrUp.Description = [...
  'Filter 6 state value (Fil6StVal) saved at initialization for use in pe' ...
  'riodic function '];
Fil6ValPwrUp.DocUnits = 'Uls';
Fil6ValPwrUp.EngDT = dt.u08;
Fil6ValPwrUp.EngMin = 0;
Fil6ValPwrUp.EngMax = 200;
Fil6ValPwrUp.InitRowCol = [1  1];


Fild3Val = DataDict.PIM;
Fild3Val.LongName = 'Filtered 3 Value';
Fild3Val.Description = [...
  'Structure for Filter State and Gain Variable. State is stored in the N' ...
  'VM at the end of every ignition cycle to be used for calculating filte' ...
  'r decay at the beginning of each ignition cycle.'];
Fild3Val.DocUnits = 'Uls';
Fild3Val.EngDT = struct.FilLpRec1;
Fild3Val.EngMin = [struct('FilSt',0,'FilGain',0)];
Fild3Val.EngMax = [struct('FilSt',31250,'FilGain',1)];
Fild3Val.InitRowCol = [1  1];


Fild4Val = DataDict.PIM;
Fild4Val.LongName = 'Filtered 4 Value';
Fild4Val.Description = [...
  'Structure for Filter State and Gain Variable. Stored in the NVM at the' ...
  ' end of every ignition cycle to be used for calculating filter decay a' ...
  't the beginning of each ignition cycle.'];
Fild4Val.DocUnits = 'Uls';
Fild4Val.EngDT = struct.FilLpRec1;
Fild4Val.EngMin = [struct('FilSt',0,'FilGain',0)];
Fild4Val.EngMax = [struct('FilSt',31250,'FilGain',1)];
Fild4Val.InitRowCol = [1  1];


Fild5Val = DataDict.PIM;
Fild5Val.LongName = 'Filtered 5 Value';
Fild5Val.Description = [...
  'Structure for Filter State and Gain Variable. Stored in the NVM at the' ...
  ' end of every ignition cycle to be used for calculating filter decay a' ...
  't the beginning of each ignition cycle.'];
Fild5Val.DocUnits = 'Uls';
Fild5Val.EngDT = struct.FilLpRec1;
Fild5Val.EngMin = [struct('FilSt',0,'FilGain',0)];
Fild5Val.EngMax = [struct('FilSt',125000,'FilGain',1)];
Fild5Val.InitRowCol = [1  1];


Fild6Val = DataDict.PIM;
Fild6Val.LongName = 'Filtered 6 Value';
Fild6Val.Description = [...
  'Structure for Filter State and Gain Variable. Stored in the NVM at the' ...
  ' end of every ignition cycle to be used for calculating filter decay a' ...
  't the beginning of each ignition cycle.'];
Fild6Val.DocUnits = 'Uls';
Fild6Val.EngDT = struct.FilLpRec1;
Fild6Val.EngMin = [struct('FilSt',0,'FilGain',0)];
Fild6Val.EngMax = [struct('FilSt',125000,'FilGain',1)];
Fild6Val.InitRowCol = [1  1];


LstTblValRateLimrStVari = DataDict.PIM;
LstTblValRateLimrStVari.LongName = 'Last Table Value Rate Limiter State Variable';
LstTblValRateLimrStVari.Description = [...
  'State Variable for Rate Limiter of Last Table Value '];
LstTblValRateLimrStVari.DocUnits = 'Cnt';
LstTblValRateLimrStVari.EngDT = dt.float32;
LstTblValRateLimrStVari.EngMin = 0;
LstTblValRateLimrStVari.EngMax = 8.79;
LstTblValRateLimrStVari.InitRowCol = [1  1];


ReInitCntrFlg = DataDict.PIM;
ReInitCntrFlg.LongName = 'Re Initialization Counter Flag';
ReInitCntrFlg.Description = [...
  'Flag to Re-Initialize the Filter State Variable'];
ReInitCntrFlg.DocUnits = 'Cnt';
ReInitCntrFlg.EngDT = dt.lgc;
ReInitCntrFlg.EngMin = 0;
ReInitCntrFlg.EngMax = 1;
ReInitCntrFlg.InitRowCol = [1  1];


ReInitCntrVal = DataDict.PIM;
ReInitCntrVal.LongName = 'Re Initialization Counter Value';
ReInitCntrVal.Description = 'Re Initialization Counter Value';
ReInitCntrVal.DocUnits = 'Sec';
ReInitCntrVal.EngDT = dt.float32;
ReInitCntrVal.EngMin = 0;
ReInitCntrVal.EngMax = 60.1;
ReInitCntrVal.InitRowCol = [1  1];



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


CALVALMIN_ULS_U08 = DataDict.Constant;
CALVALMIN_ULS_U08.LongName = 'Filter Value Minimum';
CALVALMIN_ULS_U08.Description = [...
  'Minimum Limit value for filter state variables'];
CALVALMIN_ULS_U08.DocUnits = 'Uls';
CALVALMIN_ULS_U08.EngDT = dt.u08;
CALVALMIN_ULS_U08.EngVal = 0;
CALVALMIN_ULS_U08.Define = 'Local';


CTRLRANDCUTFLT_CNT_U08 = DataDict.Constant;
CTRLRANDCUTFLT_CNT_U08.LongName = 'Controller And Copper Temperature Fault';
CTRLRANDCUTFLT_CNT_U08.Description = [...
  'NTCNR_0X0A4 (Absolute Temperature Thermal Limit Count) Bit 3 is set to' ...
  ' indicate both Controller and Copper Temperature Fault.'];
CTRLRANDCUTFLT_CNT_U08.DocUnits = 'Cnt';
CTRLRANDCUTFLT_CNT_U08.EngDT = dt.u08;
CTRLRANDCUTFLT_CNT_U08.EngVal = 4;
CTRLRANDCUTFLT_CNT_U08.Define = 'Local';


CTRLRTFLT_CNT_U08 = DataDict.Constant;
CTRLRTFLT_CNT_U08.LongName = 'Controller Temperature Fault';
CTRLRTFLT_CNT_U08.Description = [...
  'NTCNR_0X0A4 (Absolute Temperature Thermal Limit Count) Bit 1 is set to' ...
  ' indicate Control Temperature Fault.'];
CTRLRTFLT_CNT_U08.DocUnits = 'Cnt';
CTRLRTFLT_CNT_U08.EngDT = dt.u08;
CTRLRTFLT_CNT_U08.EngVal = 1;
CTRLRTFLT_CNT_U08.Define = 'Local';


CUTFLT_CNT_U08 = DataDict.Constant;
CUTFLT_CNT_U08.LongName = 'Copper Temperature Fault';
CUTFLT_CNT_U08.Description = [...
  'NTCNR_0X0A4 (Absolute Temperature Thermal Limit Count) Bit 2 is set to' ...
  ' indicate Copper Temperature Fault.'];
CUTFLT_CNT_U08.DocUnits = 'Cnt';
CUTFLT_CNT_U08.EngDT = dt.u08;
CUTFLT_CNT_U08.EngVal = 2;
CUTFLT_CNT_U08.Define = 'Local';


DITHERMLIM_MOTNWTMTR_F32 = DataDict.Constant;
DITHERMLIM_MOTNWTMTR_F32.LongName = 'Disable Thermal Limit';
DITHERMLIM_MOTNWTMTR_F32.Description = [...
  'Thermal Load Limit is replaced by this value when function is disabled' ...
  ''];
DITHERMLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
DITHERMLIM_MOTNWTMTR_F32.EngDT = dt.float32;
DITHERMLIM_MOTNWTMTR_F32.EngVal = 8.8;
DITHERMLIM_MOTNWTMTR_F32.Define = 'Local';


FIL1LPFILFRQ_HZ_F32 = DataDict.Constant;
FIL1LPFILFRQ_HZ_F32.LongName = 'Filter 1 Lowpass Filter Frequency';
FIL1LPFILFRQ_HZ_F32.Description = '1/(2*pi*tau) with tau = 1.59 sec.';
FIL1LPFILFRQ_HZ_F32.DocUnits = 'Hz';
FIL1LPFILFRQ_HZ_F32.EngDT = dt.float32;
FIL1LPFILFRQ_HZ_F32.EngVal = 0.100097;
FIL1LPFILFRQ_HZ_F32.Define = 'Local';


FIL2LPFILFRQ_HZ_F32 = DataDict.Constant;
FIL2LPFILFRQ_HZ_F32.LongName = 'Filter 2 Lowpass Filter Frequency';
FIL2LPFILFRQ_HZ_F32.Description = '1/(2*pi*tau) with tau = 15.9 sec.';
FIL2LPFILFRQ_HZ_F32.DocUnits = 'Hz';
FIL2LPFILFRQ_HZ_F32.EngDT = dt.float32;
FIL2LPFILFRQ_HZ_F32.EngVal = 0.0100097;
FIL2LPFILFRQ_HZ_F32.Define = 'Local';


FIL3LPFILFRQ_HZ_F32 = DataDict.Constant;
FIL3LPFILFRQ_HZ_F32.LongName = 'Filter 3 Lowpass Filter Frequency';
FIL3LPFILFRQ_HZ_F32.Description = '1/(2*pi*tau) with tau = 159 sec.';
FIL3LPFILFRQ_HZ_F32.DocUnits = 'Hz';
FIL3LPFILFRQ_HZ_F32.EngDT = dt.float32;
FIL3LPFILFRQ_HZ_F32.EngVal = 0.00100097;
FIL3LPFILFRQ_HZ_F32.Define = 'Local';


FIL4LPFILFRQ_HZ_F32 = DataDict.Constant;
FIL4LPFILFRQ_HZ_F32.LongName = 'Filter 4 Lowpass Filter Frequency';
FIL4LPFILFRQ_HZ_F32.Description = '1/(2*pi*tau) with tau = 300 sec.';
FIL4LPFILFRQ_HZ_F32.DocUnits = 'Hz';
FIL4LPFILFRQ_HZ_F32.EngDT = dt.float32;
FIL4LPFILFRQ_HZ_F32.EngVal = 0.000530516;
FIL4LPFILFRQ_HZ_F32.Define = 'Local';


FIL5LPFILFRQ_HZ_F32 = DataDict.Constant;
FIL5LPFILFRQ_HZ_F32.LongName = 'Filter 5 Lowpass Filter Frequency';
FIL5LPFILFRQ_HZ_F32.Description = '1/(2*pi*tau) with tau = 1590 sec.';
FIL5LPFILFRQ_HZ_F32.DocUnits = 'Hz';
FIL5LPFILFRQ_HZ_F32.EngDT = dt.float32;
FIL5LPFILFRQ_HZ_F32.EngVal = 0.000100097;
FIL5LPFILFRQ_HZ_F32.Define = 'Local';


FIL6LPFILFRQ_HZ_F32 = DataDict.Constant;
FIL6LPFILFRQ_HZ_F32.LongName = 'Filter 6 Lowpass Filter Frequency';
FIL6LPFILFRQ_HZ_F32.Description = '1/(2*pi*tau) with tau = 4000 sec.';
FIL6LPFILFRQ_HZ_F32.DocUnits = 'Hz';
FIL6LPFILFRQ_HZ_F32.EngDT = dt.float32;
FIL6LPFILFRQ_HZ_F32.EngVal = 3.97887e-05;
FIL6LPFILFRQ_HZ_F32.Define = 'Local';


FILOUTPLIM_ULS_F32 = DataDict.Constant;
FILOUTPLIM_ULS_F32.LongName = 'Filter Output Limit';
FILOUTPLIM_ULS_F32.Description = [...
  'Max Out signal is limited to this maximum value'];
FILOUTPLIM_ULS_F32.DocUnits = 'Uls';
FILOUTPLIM_ULS_F32.EngDT = dt.float32;
FILOUTPLIM_ULS_F32.EngVal = 200;
FILOUTPLIM_ULS_F32.Define = 'Local';


FILVALMAX_ULS_F32 = DataDict.Constant;
FILVALMAX_ULS_F32.LongName = 'Filter Value Maximum';
FILVALMAX_ULS_F32.Description = [...
  'Maximum Limit value for filter state variables'];
FILVALMAX_ULS_F32.DocUnits = 'Uls';
FILVALMAX_ULS_F32.EngDT = dt.float32;
FILVALMAX_ULS_F32.EngVal = 200;
FILVALMAX_ULS_F32.Define = 'Local';


FILVALMIN_ULS_F32 = DataDict.Constant;
FILVALMIN_ULS_F32.LongName = 'Filter Value Minimum';
FILVALMIN_ULS_F32.Description = [...
  'Minimum Limit value for filter state variables'];
FILVALMIN_ULS_F32.DocUnits = 'Uls';
FILVALMIN_ULS_F32.EngDT = dt.float32;
FILVALMIN_ULS_F32.EngVal = 0;
FILVALMIN_ULS_F32.Define = 'Local';


IGNTIOFFTHD_CNT_F32 = DataDict.Constant;
IGNTIOFFTHD_CNT_F32.LongName = 'Ignition Time Off Threshold';
IGNTIOFFTHD_CNT_F32.Description = [...
  'If ignition time off is longer than this value, set the stored values ' ...
  'to zero. Otherwise, using the ignition off time runs through exploneti' ...
  'al calculation. Note: this value is calculated based on the value of T' ...
  'AU. It shall be recalculated if the value of TAU changed.'];
IGNTIOFFTHD_CNT_F32.DocUnits = 'Cnt';
IGNTIOFFTHD_CNT_F32.EngDT = dt.float32;
IGNTIOFFTHD_CNT_F32.EngVal = 10000;
IGNTIOFFTHD_CNT_F32.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = [...
  'Step used when No debouncing is required'];
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


ONEPERC_ULS_F32 = DataDict.Constant;
ONEPERC_ULS_F32.LongName = 'One Percent';
ONEPERC_ULS_F32.Description = [...
  'Not really a percent, this is 0 to 1 fraction.'];
ONEPERC_ULS_F32.DocUnits = 'Uls';
ONEPERC_ULS_F32.EngDT = dt.float32;
ONEPERC_ULS_F32.EngVal = 0.01;
ONEPERC_ULS_F32.Define = 'Local';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


TAU3_SEC_F32 = DataDict.Constant;
TAU3_SEC_F32.LongName = 'Tau 3';
TAU3_SEC_F32.Description = 'Time constant of filter 3';
TAU3_SEC_F32.DocUnits = 'Sec';
TAU3_SEC_F32.EngDT = dt.float32;
TAU3_SEC_F32.EngVal = 159;
TAU3_SEC_F32.Define = 'Local';


TAU4_SEC_F32 = DataDict.Constant;
TAU4_SEC_F32.LongName = 'Tau 4';
TAU4_SEC_F32.Description = 'Time constant of filter 4';
TAU4_SEC_F32.DocUnits = 'Sec';
TAU4_SEC_F32.EngDT = dt.float32;
TAU4_SEC_F32.EngVal = 300;
TAU4_SEC_F32.Define = 'Local';


TAU5_SEC_F32 = DataDict.Constant;
TAU5_SEC_F32.LongName = 'Tau 5';
TAU5_SEC_F32.Description = 'Time constant of filter 5';
TAU5_SEC_F32.DocUnits = 'Sec';
TAU5_SEC_F32.EngDT = dt.float32;
TAU5_SEC_F32.EngVal = 1590;
TAU5_SEC_F32.Define = 'Local';


TAU6_SEC_F32 = DataDict.Constant;
TAU6_SEC_F32.LongName = 'Tau 6';
TAU6_SEC_F32.Description = 'Time constant of filter 6';
TAU6_SEC_F32.DocUnits = 'Sec';
TAU6_SEC_F32.EngDT = dt.float32;
TAU6_SEC_F32.EngVal = 4000;
TAU6_SEC_F32.Define = 'Local';


THERMLOADLIMTBLIDX_ULS_U08 = DataDict.Constant;
THERMLOADLIMTBLIDX_ULS_U08.LongName = 'Thermal Load Limit Table Index';
THERMLOADLIMTBLIDX_ULS_U08.Description = 'Thermal Load Limit Table Index';
THERMLOADLIMTBLIDX_ULS_U08.DocUnits = 'Uls';
THERMLOADLIMTBLIDX_ULS_U08.EngDT = dt.u08;
THERMLOADLIMTBLIDX_ULS_U08.EngVal = 8;
THERMLOADLIMTBLIDX_ULS_U08.Define = 'Local';


THERMREDNFACHILIM_ULS_F32 = DataDict.Constant;
THERMREDNFACHILIM_ULS_F32.LongName = 'Thermal Reduction Factor High Limit';
THERMREDNFACHILIM_ULS_F32.Description = [...
  'Maximum value of Thermal Reduction Factor'];
THERMREDNFACHILIM_ULS_F32.DocUnits = 'Uls';
THERMREDNFACHILIM_ULS_F32.EngDT = dt.float32;
THERMREDNFACHILIM_ULS_F32.EngVal = 1;
THERMREDNFACHILIM_ULS_F32.Define = 'Local';


THERMREDNFACLOLIM_ULS_F32 = DataDict.Constant;
THERMREDNFACLOLIM_ULS_F32.LongName = 'Thermal Reduction Factor Low Limit';
THERMREDNFACLOLIM_ULS_F32.Description = [...
  'Minimum value of Thermal Reduction Factor'];
THERMREDNFACLOLIM_ULS_F32.DocUnits = 'Uls';
THERMREDNFACLOLIM_ULS_F32.EngDT = dt.float32;
THERMREDNFACLOLIM_ULS_F32.EngVal = 0;
THERMREDNFACLOLIM_ULS_F32.Define = 'Local';


ZERO_MOTNWTMTR_F32 = DataDict.Constant;
ZERO_MOTNWTMTR_F32.LongName = 'Zero';
ZERO_MOTNWTMTR_F32.Description = 'Zero';
ZERO_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
ZERO_MOTNWTMTR_F32.EngDT = dt.float32;
ZERO_MOTNWTMTR_F32.EngVal = 0;
ZERO_MOTNWTMTR_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
AbsltTThermLimCnt = DataDict.NTC;
AbsltTThermLimCnt.NtcNr = NtcNr1.NTCNR_0X0A4;
AbsltTThermLimCnt.NtcTyp = 'None';
AbsltTThermLimCnt.LongName = 'Absolute Temperature Thermal Limit Count';
AbsltTThermLimCnt.Description = 'NTC to be invoked if Absolute Temperature exceeds Thermal Limit';
AbsltTThermLimCnt.NtcStInfo = DataDict.NtcStInfoBitPacked;
AbsltTThermLimCnt.NtcStInfo.Bit0Descr = 'Controller temperature fault';
AbsltTThermLimCnt.NtcStInfo.Bit1Descr = 'Copper temperature fault';
AbsltTThermLimCnt.NtcStInfo.Bit2Descr = 'Both controller and copper temperature fault';
AbsltTThermLimCnt.NtcStInfo.Bit3Descr = 'Unused';
AbsltTThermLimCnt.NtcStInfo.Bit4Descr = 'Unused';
AbsltTThermLimCnt.NtcStInfo.Bit5Descr = 'Unused';
AbsltTThermLimCnt.NtcStInfo.Bit6Descr = 'Unused';
AbsltTThermLimCnt.NtcStInfo.Bit7Descr = 'Unused';
AbsltTThermLimCnt.NtcStsLockdThisIgnCyc = 0;


DutyCycExcddCnt = DataDict.NTC;
DutyCycExcddCnt.NtcNr = NtcNr1.NTCNR_0X0A3;
DutyCycExcddCnt.NtcTyp = 'None';
DutyCycExcddCnt.LongName = 'Duty Cycle Exceeded Count';
DutyCycExcddCnt.Description = 'NTC to be invoked if duty cycle count exceeds';
DutyCycExcddCnt.NtcStInfo = DataDict.NtcStInfoBitPacked;
DutyCycExcddCnt.NtcStInfo.Bit0Descr = 'Duty cycle count exceeded fault';
DutyCycExcddCnt.NtcStInfo.Bit1Descr = 'Unused';
DutyCycExcddCnt.NtcStInfo.Bit2Descr = 'Unused';
DutyCycExcddCnt.NtcStInfo.Bit3Descr = 'Unused';
DutyCycExcddCnt.NtcStInfo.Bit4Descr = 'Unused';
DutyCycExcddCnt.NtcStInfo.Bit5Descr = 'Unused';
DutyCycExcddCnt.NtcStInfo.Bit6Descr = 'Unused';
DutyCycExcddCnt.NtcStInfo.Bit7Descr = 'Unused';
DutyCycExcddCnt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
