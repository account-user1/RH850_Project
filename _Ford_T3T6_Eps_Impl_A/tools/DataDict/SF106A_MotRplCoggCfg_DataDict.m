%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 13-May-2016 10:24:09       %
%                                  Created with tool release: 2.39.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF106A = DataDict.FDD;
SF106A.Version = '1.6.X';
SF106A.LongName = 'Motor Ripple Cogging Configuration';
SF106A.ShoName  = 'MotRplCoggCfg';
SF106A.DesignASIL = 'D';
SF106A.Description = [...
  'This function is responsible for computing the magnitude and phase of ' ...
  'the torque ripple and cogging torque orders to be cancelled, including' ...
  ' base cogging and ripple values and compensation terms for the correct' ...
  'ing for the limited bandwidth of the current regulator.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotRplCoggCfgInit1 = DataDict.Runnable;
MotRplCoggCfgInit1.Context = 'Rte';
MotRplCoggCfgInit1.TimeStep = 0;
MotRplCoggCfgInit1.Description = [...
  'Initialization of the function and check whether NVM is available.'];

MotRplCoggCfgPer1 = DataDict.Runnable;
MotRplCoggCfgPer1.Context = 'Rte';
MotRplCoggCfgPer1.TimeStep = 0.002;
MotRplCoggCfgPer1.Description = [...
  'Computation of the magnitude and phase of the torque ripple and coggin' ...
  'g torque orders to be cancelled.'];

GetMotRplCoggPrm = DataDict.SrvRunnable;
GetMotRplCoggPrm.Context = 'Rte';
GetMotRplCoggPrm.Description = [...
  'Read the values in the NVM to the output signals.'];
GetMotRplCoggPrm.Return = DataDict.CSReturn;
GetMotRplCoggPrm.Return.Type = 'None';
GetMotRplCoggPrm.Return.Min = [];
GetMotRplCoggPrm.Return.Max = [];
GetMotRplCoggPrm.Return.TestTolerance = [];
GetMotRplCoggPrm.Arguments(1) = DataDict.CSArguments;
GetMotRplCoggPrm.Arguments(1).Name = 'CoggOrder1';
GetMotRplCoggPrm.Arguments(1).EngDT = dt.u16;
GetMotRplCoggPrm.Arguments(1).EngMin = 1;
GetMotRplCoggPrm.Arguments(1).EngMax = 18;
GetMotRplCoggPrm.Arguments(1).Units = 'Cnt';
GetMotRplCoggPrm.Arguments(1).Direction = 'Out';
GetMotRplCoggPrm.Arguments(1).InitRowCol = [1  1];
GetMotRplCoggPrm.Arguments(1).Description = 'It is the 1st order of cogging.';
GetMotRplCoggPrm.Arguments(2) = DataDict.CSArguments;
GetMotRplCoggPrm.Arguments(2).Name = 'CoggOrder1X';
GetMotRplCoggPrm.Arguments(2).EngDT = dt.s1p14;
GetMotRplCoggPrm.Arguments(2).EngMin = -0.0997;
GetMotRplCoggPrm.Arguments(2).EngMax = 0.0997;
GetMotRplCoggPrm.Arguments(2).Units = 'MotNwtMtr';
GetMotRplCoggPrm.Arguments(2).Direction = 'Out';
GetMotRplCoggPrm.Arguments(2).InitRowCol = [1  1];
GetMotRplCoggPrm.Arguments(2).Description = [...
  'It is the X axis of the 1st order cogging.'];
GetMotRplCoggPrm.Arguments(3) = DataDict.CSArguments;
GetMotRplCoggPrm.Arguments(3).Name = 'CoggOrder1Y';
GetMotRplCoggPrm.Arguments(3).EngDT = dt.s1p14;
GetMotRplCoggPrm.Arguments(3).EngMin = -0.0997;
GetMotRplCoggPrm.Arguments(3).EngMax = 0.0997;
GetMotRplCoggPrm.Arguments(3).Units = 'MotNwtMtr';
GetMotRplCoggPrm.Arguments(3).Direction = 'Out';
GetMotRplCoggPrm.Arguments(3).InitRowCol = [1  1];
GetMotRplCoggPrm.Arguments(3).Description = [...
  'It is the Y axis of the 1st order cogging.'];
GetMotRplCoggPrm.Arguments(4) = DataDict.CSArguments;
GetMotRplCoggPrm.Arguments(4).Name = 'CoggOrder2';
GetMotRplCoggPrm.Arguments(4).EngDT = dt.u16;
GetMotRplCoggPrm.Arguments(4).EngMin = 1;
GetMotRplCoggPrm.Arguments(4).EngMax = 18;
GetMotRplCoggPrm.Arguments(4).Units = 'Cnt';
GetMotRplCoggPrm.Arguments(4).Direction = 'Out';
GetMotRplCoggPrm.Arguments(4).InitRowCol = [1  1];
GetMotRplCoggPrm.Arguments(4).Description = 'It is the 2nd order of cogging.';
GetMotRplCoggPrm.Arguments(5) = DataDict.CSArguments;
GetMotRplCoggPrm.Arguments(5).Name = 'CoggOrder2X';
GetMotRplCoggPrm.Arguments(5).EngDT = dt.s1p14;
GetMotRplCoggPrm.Arguments(5).EngMin = -0.0997;
GetMotRplCoggPrm.Arguments(5).EngMax = 0.0997;
GetMotRplCoggPrm.Arguments(5).Units = 'MotNwtMtr';
GetMotRplCoggPrm.Arguments(5).Direction = 'Out';
GetMotRplCoggPrm.Arguments(5).InitRowCol = [1  1];
GetMotRplCoggPrm.Arguments(5).Description = [...
  'It is the X axis of the 2nd order cogging.'];
GetMotRplCoggPrm.Arguments(6) = DataDict.CSArguments;
GetMotRplCoggPrm.Arguments(6).Name = 'CoggOrder2Y';
GetMotRplCoggPrm.Arguments(6).EngDT = dt.s1p14;
GetMotRplCoggPrm.Arguments(6).EngMin = -0.0997;
GetMotRplCoggPrm.Arguments(6).EngMax = 0.0997;
GetMotRplCoggPrm.Arguments(6).Units = 'MotNwtMtr';
GetMotRplCoggPrm.Arguments(6).Direction = 'Out';
GetMotRplCoggPrm.Arguments(6).InitRowCol = [1  1];
GetMotRplCoggPrm.Arguments(6).Description = [...
  'It is the Y axis of the 2nd order cogging.'];
GetMotRplCoggPrm.Arguments(7) = DataDict.CSArguments;
GetMotRplCoggPrm.Arguments(7).Name = 'CoggOrder3';
GetMotRplCoggPrm.Arguments(7).EngDT = dt.u16;
GetMotRplCoggPrm.Arguments(7).EngMin = 1;
GetMotRplCoggPrm.Arguments(7).EngMax = 18;
GetMotRplCoggPrm.Arguments(7).Units = 'Cnt';
GetMotRplCoggPrm.Arguments(7).Direction = 'Out';
GetMotRplCoggPrm.Arguments(7).InitRowCol = [1  1];
GetMotRplCoggPrm.Arguments(7).Description = 'It is the 3rd order of cogging.';
GetMotRplCoggPrm.Arguments(8) = DataDict.CSArguments;
GetMotRplCoggPrm.Arguments(8).Name = 'CoggOrder3X';
GetMotRplCoggPrm.Arguments(8).EngDT = dt.s1p14;
GetMotRplCoggPrm.Arguments(8).EngMin = -0.0997;
GetMotRplCoggPrm.Arguments(8).EngMax = 0.0997;
GetMotRplCoggPrm.Arguments(8).Units = 'MotNwtMtr';
GetMotRplCoggPrm.Arguments(8).Direction = 'Out';
GetMotRplCoggPrm.Arguments(8).InitRowCol = [1  1];
GetMotRplCoggPrm.Arguments(8).Description = [...
  'It is the X axis of the 3rd order cogging.'];
GetMotRplCoggPrm.Arguments(9) = DataDict.CSArguments;
GetMotRplCoggPrm.Arguments(9).Name = 'CoggOrder3Y';
GetMotRplCoggPrm.Arguments(9).EngDT = dt.s1p14;
GetMotRplCoggPrm.Arguments(9).EngMin = -0.0997;
GetMotRplCoggPrm.Arguments(9).EngMax = 0.0997;
GetMotRplCoggPrm.Arguments(9).Units = 'MotNwtMtr';
GetMotRplCoggPrm.Arguments(9).Direction = 'Out';
GetMotRplCoggPrm.Arguments(9).InitRowCol = [1  1];
GetMotRplCoggPrm.Arguments(9).Description = [...
  'It is the Y axis of the 3rd order cogging.'];

SetMotRplCoggPrm = DataDict.SrvRunnable;
SetMotRplCoggPrm.Context = 'Rte';
SetMotRplCoggPrm.Description = [...
  'Write the NVM with the input signals'];
SetMotRplCoggPrm.Return = DataDict.CSReturn;
SetMotRplCoggPrm.Return.Type = 'None';
SetMotRplCoggPrm.Return.Min = [];
SetMotRplCoggPrm.Return.Max = [];
SetMotRplCoggPrm.Return.TestTolerance = [];
SetMotRplCoggPrm.Arguments(1) = DataDict.CSArguments;
SetMotRplCoggPrm.Arguments(1).Name = 'CoggOrder1';
SetMotRplCoggPrm.Arguments(1).EngDT = dt.u16;
SetMotRplCoggPrm.Arguments(1).EngMin = 1;
SetMotRplCoggPrm.Arguments(1).EngMax = 18;
SetMotRplCoggPrm.Arguments(1).Units = 'Cnt';
SetMotRplCoggPrm.Arguments(1).Direction = 'In';
SetMotRplCoggPrm.Arguments(1).InitRowCol = [1  1];
SetMotRplCoggPrm.Arguments(1).Description = 'It is the 1st order of cogging.';
SetMotRplCoggPrm.Arguments(2) = DataDict.CSArguments;
SetMotRplCoggPrm.Arguments(2).Name = 'CoggOrder1X';
SetMotRplCoggPrm.Arguments(2).EngDT = dt.s1p14;
SetMotRplCoggPrm.Arguments(2).EngMin = -0.0997;
SetMotRplCoggPrm.Arguments(2).EngMax = 0.0997;
SetMotRplCoggPrm.Arguments(2).Units = 'MotNwtMtr';
SetMotRplCoggPrm.Arguments(2).Direction = 'In';
SetMotRplCoggPrm.Arguments(2).InitRowCol = [1  1];
SetMotRplCoggPrm.Arguments(2).Description = [...
  'It is the X axis of the 1st order cogging.'];
SetMotRplCoggPrm.Arguments(3) = DataDict.CSArguments;
SetMotRplCoggPrm.Arguments(3).Name = 'CoggOrder1Y';
SetMotRplCoggPrm.Arguments(3).EngDT = dt.s1p14;
SetMotRplCoggPrm.Arguments(3).EngMin = -0.0997;
SetMotRplCoggPrm.Arguments(3).EngMax = 0.0997;
SetMotRplCoggPrm.Arguments(3).Units = 'MotNwtMtr';
SetMotRplCoggPrm.Arguments(3).Direction = 'In';
SetMotRplCoggPrm.Arguments(3).InitRowCol = [1  1];
SetMotRplCoggPrm.Arguments(3).Description = [...
  'It is the Y axis of the 1st order cogging.'];
SetMotRplCoggPrm.Arguments(4) = DataDict.CSArguments;
SetMotRplCoggPrm.Arguments(4).Name = 'CoggOrder2';
SetMotRplCoggPrm.Arguments(4).EngDT = dt.u16;
SetMotRplCoggPrm.Arguments(4).EngMin = 1;
SetMotRplCoggPrm.Arguments(4).EngMax = 18;
SetMotRplCoggPrm.Arguments(4).Units = 'Cnt';
SetMotRplCoggPrm.Arguments(4).Direction = 'In';
SetMotRplCoggPrm.Arguments(4).InitRowCol = [1  1];
SetMotRplCoggPrm.Arguments(4).Description = 'It is the 2nd order of cogging.';
SetMotRplCoggPrm.Arguments(5) = DataDict.CSArguments;
SetMotRplCoggPrm.Arguments(5).Name = 'CoggOrder2X';
SetMotRplCoggPrm.Arguments(5).EngDT = dt.s1p14;
SetMotRplCoggPrm.Arguments(5).EngMin = -0.0997;
SetMotRplCoggPrm.Arguments(5).EngMax = 0.0997;
SetMotRplCoggPrm.Arguments(5).Units = 'MotNwtMtr';
SetMotRplCoggPrm.Arguments(5).Direction = 'In';
SetMotRplCoggPrm.Arguments(5).InitRowCol = [1  1];
SetMotRplCoggPrm.Arguments(5).Description = [...
  'It is the X axis of the 2nd order cogging.'];
SetMotRplCoggPrm.Arguments(6) = DataDict.CSArguments;
SetMotRplCoggPrm.Arguments(6).Name = 'CoggOrder2Y';
SetMotRplCoggPrm.Arguments(6).EngDT = dt.s1p14;
SetMotRplCoggPrm.Arguments(6).EngMin = -0.0997;
SetMotRplCoggPrm.Arguments(6).EngMax = 0.0997;
SetMotRplCoggPrm.Arguments(6).Units = 'MotNwtMtr';
SetMotRplCoggPrm.Arguments(6).Direction = 'In';
SetMotRplCoggPrm.Arguments(6).InitRowCol = [1  1];
SetMotRplCoggPrm.Arguments(6).Description = [...
  'It is the Y axis of the 2nd order cogging.'];
SetMotRplCoggPrm.Arguments(7) = DataDict.CSArguments;
SetMotRplCoggPrm.Arguments(7).Name = 'CoggOrder3';
SetMotRplCoggPrm.Arguments(7).EngDT = dt.u16;
SetMotRplCoggPrm.Arguments(7).EngMin = 1;
SetMotRplCoggPrm.Arguments(7).EngMax = 18;
SetMotRplCoggPrm.Arguments(7).Units = 'Cnt';
SetMotRplCoggPrm.Arguments(7).Direction = 'In';
SetMotRplCoggPrm.Arguments(7).InitRowCol = [1  1];
SetMotRplCoggPrm.Arguments(7).Description = 'It is the 3rd order of cogging.';
SetMotRplCoggPrm.Arguments(8) = DataDict.CSArguments;
SetMotRplCoggPrm.Arguments(8).Name = 'CoggOrder3X';
SetMotRplCoggPrm.Arguments(8).EngDT = dt.s1p14;
SetMotRplCoggPrm.Arguments(8).EngMin = -0.0997;
SetMotRplCoggPrm.Arguments(8).EngMax = 0.0997;
SetMotRplCoggPrm.Arguments(8).Units = 'MotNwtMtr';
SetMotRplCoggPrm.Arguments(8).Direction = 'In';
SetMotRplCoggPrm.Arguments(8).InitRowCol = [1  1];
SetMotRplCoggPrm.Arguments(8).Description = [...
  'It is the X axis of the 3rd order cogging.'];
SetMotRplCoggPrm.Arguments(9) = DataDict.CSArguments;
SetMotRplCoggPrm.Arguments(9).Name = 'CoggOrder3Y';
SetMotRplCoggPrm.Arguments(9).EngDT = dt.s1p14;
SetMotRplCoggPrm.Arguments(9).EngMin = -0.0997;
SetMotRplCoggPrm.Arguments(9).EngMax = 0.0997;
SetMotRplCoggPrm.Arguments(9).Units = 'MotNwtMtr';
SetMotRplCoggPrm.Arguments(9).Direction = 'In';
SetMotRplCoggPrm.Arguments(9).InitRowCol = [1  1];
SetMotRplCoggPrm.Arguments(9).Description = [...
  'It is the Y axis of the 3rd order cogging.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
MotRplCoggPrm_GetErrorStatus = DataDict.Client;
MotRplCoggPrm_GetErrorStatus.CallLocation = {'MotRplCoggCfgInit1'};
MotRplCoggPrm_GetErrorStatus.Description = [...
  'It is used to determine if the data in the RAM shadow for a NVM block ' ...
  'is valid.'];
MotRplCoggPrm_GetErrorStatus.Return = DataDict.CSReturn;
MotRplCoggPrm_GetErrorStatus.Return.Type = 'Standard';
MotRplCoggPrm_GetErrorStatus.Return.Min = 0;
MotRplCoggPrm_GetErrorStatus.Return.Max = 1;
MotRplCoggPrm_GetErrorStatus.Return.TestTolerance = 0;
MotRplCoggPrm_GetErrorStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
MotRplCoggPrm_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotRplCoggPrm_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
MotRplCoggPrm_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotRplCoggPrm_GetErrorStatus.Arguments(1).EngMin = 0;
MotRplCoggPrm_GetErrorStatus.Arguments(1).EngMax = 8;
MotRplCoggPrm_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotRplCoggPrm_GetErrorStatus.Arguments(1).Direction = 'Out';
MotRplCoggPrm_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
MotRplCoggPrm_GetErrorStatus.Arguments(1).Description = [...
  'Pointer to where the result shall be written.'];


MotRplCoggPrm_SetRamBlockStatus = DataDict.Client;
MotRplCoggPrm_SetRamBlockStatus.CallLocation = {'SetMotRplCoggPrm','MotRplCoggCfgInit1'};
MotRplCoggPrm_SetRamBlockStatus.Description = [...
  'It is used to notify NVM that the contents of the RAM shadow have chan' ...
  'ged and the components desire to save that data.'];
MotRplCoggPrm_SetRamBlockStatus.Return = DataDict.CSReturn;
MotRplCoggPrm_SetRamBlockStatus.Return.Type = 'Standard';
MotRplCoggPrm_SetRamBlockStatus.Return.Min = 0;
MotRplCoggPrm_SetRamBlockStatus.Return.Max = 1;
MotRplCoggPrm_SetRamBlockStatus.Return.TestTolerance = 0;
MotRplCoggPrm_SetRamBlockStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
MotRplCoggPrm_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotRplCoggPrm_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotRplCoggPrm_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotRplCoggPrm_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotRplCoggPrm_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotRplCoggPrm_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotRplCoggPrm_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotRplCoggPrm_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MotRplCoggPrm_SetRamBlockStatus.Arguments(1).Description = [...
  'Boolean value to queue the NVM update during shutdown.'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotBackEmfConEstimd = DataDict.IpSignal;
MotBackEmfConEstimd.LongName = 'Motor Back EMF Constant Estimated';
MotBackEmfConEstimd.Description = 'Motor Back EMF Constant Estimated';
MotBackEmfConEstimd.DocUnits = 'VoltPerMotRadPerSec';
MotBackEmfConEstimd.EngDT = dt.float32;
MotBackEmfConEstimd.EngInit = 0.025;
MotBackEmfConEstimd.EngMin = 0.025;
MotBackEmfConEstimd.EngMax = 0.075;
MotBackEmfConEstimd.ReadIn = {'MotRplCoggCfgPer1'};
MotBackEmfConEstimd.ReadType = 'Rte';


MotCurrDaxCmd = DataDict.IpSignal;
MotCurrDaxCmd.LongName = 'Motor Current Dax Command';
MotCurrDaxCmd.Description = 'Motor Current Dax Command';
MotCurrDaxCmd.DocUnits = 'Ampr';
MotCurrDaxCmd.EngDT = dt.float32;
MotCurrDaxCmd.EngInit = 0;
MotCurrDaxCmd.EngMin = 0;
MotCurrDaxCmd.EngMax = 200;
MotCurrDaxCmd.ReadIn = {'MotRplCoggCfgPer1'};
MotCurrDaxCmd.ReadType = 'Rte';


MotCurrQaxCmd = DataDict.IpSignal;
MotCurrQaxCmd.LongName = 'Motor Current Qax Command';
MotCurrQaxCmd.Description = 'Motor Current Qax Command';
MotCurrQaxCmd.DocUnits = 'Ampr';
MotCurrQaxCmd.EngDT = dt.float32;
MotCurrQaxCmd.EngInit = 0;
MotCurrQaxCmd.EngMin = -200;
MotCurrQaxCmd.EngMax = 200;
MotCurrQaxCmd.ReadIn = {'MotRplCoggCfgPer1'};
MotCurrQaxCmd.ReadType = 'Rte';


MotInduDaxEstimd = DataDict.IpSignal;
MotInduDaxEstimd.LongName = 'Motor Inductance Dax Estimated';
MotInduDaxEstimd.Description = 'Motor Inductance Dax Estimated';
MotInduDaxEstimd.DocUnits = 'Henry';
MotInduDaxEstimd.EngDT = dt.float32;
MotInduDaxEstimd.EngInit = 0.00011889;
MotInduDaxEstimd.EngMin = 3e-05;
MotInduDaxEstimd.EngMax = 0.00041;
MotInduDaxEstimd.ReadIn = {'MotRplCoggCfgPer1'};
MotInduDaxEstimd.ReadType = 'Rte';


MotInduQaxEstimd = DataDict.IpSignal;
MotInduQaxEstimd.LongName = 'Motor Inductance Qax Estimated';
MotInduQaxEstimd.Description = 'Motor Inductance Qax Estimated';
MotInduQaxEstimd.DocUnits = 'Henry';
MotInduQaxEstimd.EngDT = dt.float32;
MotInduQaxEstimd.EngInit = 0.00011889;
MotInduQaxEstimd.EngMin = 3e-05;
MotInduQaxEstimd.EngMax = 0.00041;
MotInduQaxEstimd.ReadIn = {'MotRplCoggCfgPer1'};
MotInduQaxEstimd.ReadType = 'Rte';


MotTqCmdMrfScad = DataDict.IpSignal;
MotTqCmdMrfScad.LongName = 'Scaled MRF Motor Torque Command';
MotTqCmdMrfScad.Description = 'Scaled MRF Motor Torque Command';
MotTqCmdMrfScad.DocUnits = 'MotNwtMtr';
MotTqCmdMrfScad.EngDT = dt.float32;
MotTqCmdMrfScad.EngInit = 0;
MotTqCmdMrfScad.EngMin = -8.8;
MotTqCmdMrfScad.EngMax = 8.8;
MotTqCmdMrfScad.ReadIn = {'MotRplCoggCfgPer1'};
MotTqCmdMrfScad.ReadType = 'Rte';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'Motor Velocity MRF';
MotVelMrf.Description = 'Motor Velocity MRF';
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'MotRplCoggCfgPer1'};
MotVelMrf.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotAgElecDlyRpl = DataDict.OpSignal;
MotAgElecDlyRpl.LongName = 'Motor Angle Electric Delay Ripple';
MotAgElecDlyRpl.Description = [...
  'Lookup in sf104A for ripple cancellation.'];
MotAgElecDlyRpl.DocUnits = 'MotRad';
MotAgElecDlyRpl.SwcShoName = 'MotRplCoggCfg';
MotAgElecDlyRpl.EngDT = dt.float32;
MotAgElecDlyRpl.EngInit = 0;
MotAgElecDlyRpl.EngMin = -1.62;
MotAgElecDlyRpl.EngMax = 1.62;
MotAgElecDlyRpl.TestTolerance = 7.62939e-06;
MotAgElecDlyRpl.WrittenIn = {'MotRplCoggCfgPer1'};
MotAgElecDlyRpl.WriteType = 'Rte';


MotCurrQaxToMotTqGain = DataDict.OpSignal;
MotCurrQaxToMotTqGain.LongName = 'Motor Current Qaxis Motor Torque Gain';
MotCurrQaxToMotTqGain.Description = [...
  'It is a multiplier to scale q-axis current to obtain motor torque.'];
MotCurrQaxToMotTqGain.DocUnits = 'VoltPerMotRadPerSec';
MotCurrQaxToMotTqGain.SwcShoName = 'MotRplCoggCfg';
MotCurrQaxToMotTqGain.EngDT = dt.float32;
MotCurrQaxToMotTqGain.EngInit = 0.021651;
MotCurrQaxToMotTqGain.EngMin = 0.021651;
MotCurrQaxToMotTqGain.EngMax = 0.406952;
MotCurrQaxToMotTqGain.TestTolerance = 7.62939e-06;
MotCurrQaxToMotTqGain.WrittenIn = {'MotRplCoggCfgPer1'};
MotCurrQaxToMotTqGain.WriteType = 'Rte';


MotTqRplCoggOrder1Mgn = DataDict.OpSignal;
MotTqRplCoggOrder1Mgn.LongName = 'Motor Torque Ripple Cogging Order 1 Magnitude';
MotTqRplCoggOrder1Mgn.Description = [...
  'There are 3 order of torque ripple and cogging combined magnitudes. It' ...
  ' is the 1st order.'];
MotTqRplCoggOrder1Mgn.DocUnits = 'MotNwtMtr';
MotTqRplCoggOrder1Mgn.SwcShoName = 'MotRplCoggCfg';
MotTqRplCoggOrder1Mgn.EngDT = dt.float32;
MotTqRplCoggOrder1Mgn.EngInit = 0;
MotTqRplCoggOrder1Mgn.EngMin = 0;
MotTqRplCoggOrder1Mgn.EngMax = 0.5;
MotTqRplCoggOrder1Mgn.TestTolerance = 0.0004883;
MotTqRplCoggOrder1Mgn.WrittenIn = {'MotRplCoggCfgPer1'};
MotTqRplCoggOrder1Mgn.WriteType = 'Rte';


MotTqRplCoggOrder1Pha = DataDict.OpSignal;
MotTqRplCoggOrder1Pha.LongName = 'Motor Torque Ripple Cogging Order 1 Phase';
MotTqRplCoggOrder1Pha.Description = [...
  'There are 3 order of torque ripple and cogging combined phases. It is ' ...
  'the 1st order..'];
MotTqRplCoggOrder1Pha.DocUnits = 'MotRad';
MotTqRplCoggOrder1Pha.SwcShoName = 'MotRplCoggCfg';
MotTqRplCoggOrder1Pha.EngDT = dt.float32;
MotTqRplCoggOrder1Pha.EngInit = 0;
MotTqRplCoggOrder1Pha.EngMin = 0;
MotTqRplCoggOrder1Pha.EngMax = 6.2831853;
MotTqRplCoggOrder1Pha.TestTolerance = 0.0001622760417;
MotTqRplCoggOrder1Pha.WrittenIn = {'MotRplCoggCfgPer1'};
MotTqRplCoggOrder1Pha.WriteType = 'Rte';


MotTqRplCoggOrder2Mgn = DataDict.OpSignal;
MotTqRplCoggOrder2Mgn.LongName = 'Motor Torque Ripple Cogging Order 2 Magnitude';
MotTqRplCoggOrder2Mgn.Description = [...
  'There are 3 order of torque ripple and cogging combined magnitudes. It' ...
  ' is the 2nd order.'];
MotTqRplCoggOrder2Mgn.DocUnits = 'MotNwtMtr';
MotTqRplCoggOrder2Mgn.SwcShoName = 'MotRplCoggCfg';
MotTqRplCoggOrder2Mgn.EngDT = dt.float32;
MotTqRplCoggOrder2Mgn.EngInit = 0;
MotTqRplCoggOrder2Mgn.EngMin = 0;
MotTqRplCoggOrder2Mgn.EngMax = 0.5;
MotTqRplCoggOrder2Mgn.TestTolerance = 0.0004883;
MotTqRplCoggOrder2Mgn.WrittenIn = {'MotRplCoggCfgPer1'};
MotTqRplCoggOrder2Mgn.WriteType = 'Rte';


MotTqRplCoggOrder2Pha = DataDict.OpSignal;
MotTqRplCoggOrder2Pha.LongName = 'Motor Torque Ripple Cogging Order 2 Phase';
MotTqRplCoggOrder2Pha.Description = [...
  'There are 3 order of torque ripple and cogging combined phases. It is ' ...
  'the 2nd order.'];
MotTqRplCoggOrder2Pha.DocUnits = 'MotRad';
MotTqRplCoggOrder2Pha.SwcShoName = 'MotRplCoggCfg';
MotTqRplCoggOrder2Pha.EngDT = dt.float32;
MotTqRplCoggOrder2Pha.EngInit = 0;
MotTqRplCoggOrder2Pha.EngMin = 0;
MotTqRplCoggOrder2Pha.EngMax = 6.2831853;
MotTqRplCoggOrder2Pha.TestTolerance = 0.0001622760417;
MotTqRplCoggOrder2Pha.WrittenIn = {'MotRplCoggCfgPer1'};
MotTqRplCoggOrder2Pha.WriteType = 'Rte';


MotTqRplCoggOrder3Mgn = DataDict.OpSignal;
MotTqRplCoggOrder3Mgn.LongName = 'Motor Torque Ripple Cogging Order 3 Magnitude';
MotTqRplCoggOrder3Mgn.Description = [...
  'There are 3 order of torque ripple and cogging combined magnitudes. It' ...
  ' is the 3rd order.'];
MotTqRplCoggOrder3Mgn.DocUnits = 'MotNwtMtr';
MotTqRplCoggOrder3Mgn.SwcShoName = 'MotRplCoggCfg';
MotTqRplCoggOrder3Mgn.EngDT = dt.float32;
MotTqRplCoggOrder3Mgn.EngInit = 0;
MotTqRplCoggOrder3Mgn.EngMin = 0;
MotTqRplCoggOrder3Mgn.EngMax = 0.5;
MotTqRplCoggOrder3Mgn.TestTolerance = 0.0004883;
MotTqRplCoggOrder3Mgn.WrittenIn = {'MotRplCoggCfgPer1'};
MotTqRplCoggOrder3Mgn.WriteType = 'Rte';


MotTqRplCoggOrder3Pha = DataDict.OpSignal;
MotTqRplCoggOrder3Pha.LongName = 'Motor Torque Ripple Cogging Order 3 Phase';
MotTqRplCoggOrder3Pha.Description = [...
  'There are 3 order of torque ripple and cogging combined phases. It is ' ...
  'the 3rd order.'];
MotTqRplCoggOrder3Pha.DocUnits = 'MotRad';
MotTqRplCoggOrder3Pha.SwcShoName = 'MotRplCoggCfg';
MotTqRplCoggOrder3Pha.EngDT = dt.float32;
MotTqRplCoggOrder3Pha.EngInit = 0;
MotTqRplCoggOrder3Pha.EngMin = 0;
MotTqRplCoggOrder3Pha.EngMax = 6.2831853;
MotTqRplCoggOrder3Pha.TestTolerance = 0.0001622760417;
MotTqRplCoggOrder3Pha.WrittenIn = {'MotRplCoggCfgPer1'};
MotTqRplCoggOrder3Pha.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotRplCoggCfgMotAgTiDly = DataDict.Calibration;
MotRplCoggCfgMotAgTiDly.LongName = 'Motor Angle Time Delay';
MotRplCoggCfgMotAgTiDly.Description = [...
  'It is the delay time calibration used for ripple command generation.'];
MotRplCoggCfgMotAgTiDly.DocUnits = 'Sec';
MotRplCoggCfgMotAgTiDly.EngDT = dt.float32;
MotRplCoggCfgMotAgTiDly.EngVal = 0;
MotRplCoggCfgMotAgTiDly.EngMin = 0;
MotRplCoggCfgMotAgTiDly.EngMax = 0.0002;
MotRplCoggCfgMotAgTiDly.Cardinality = 'Cmn';
MotRplCoggCfgMotAgTiDly.CustomerVisible = false;
MotRplCoggCfgMotAgTiDly.Online = false;
MotRplCoggCfgMotAgTiDly.Impact = 'H';
MotRplCoggCfgMotAgTiDly.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotAgTiDly.GraphLink = {''};
MotRplCoggCfgMotAgTiDly.Monotony = 'None';
MotRplCoggCfgMotAgTiDly.MaxGrad = Inf;
MotRplCoggCfgMotAgTiDly.PortName = 'MotRplCoggCfgMotAgTiDly';


MotRplCoggCfgMotCurrDaxRplBilnrSeln = DataDict.Calibration;
MotRplCoggCfgMotCurrDaxRplBilnrSeln.LongName = 'Motor Ripple Dax Current Bilinear Selection';
MotRplCoggCfgMotCurrDaxRplBilnrSeln.Description = [...
  'It is the bilinear selection table, D-axis current, used in the biline' ...
  'ar interpolated lookup table representing the change in Q-axis current' ...
  ' ripple compensation.'];
MotRplCoggCfgMotCurrDaxRplBilnrSeln.DocUnits = 'Ampr';
MotRplCoggCfgMotCurrDaxRplBilnrSeln.EngDT = dt.u9p7;
MotRplCoggCfgMotCurrDaxRplBilnrSeln.EngVal =  ...
   [0               10               25               50               60               75               90              100              110              125];
MotRplCoggCfgMotCurrDaxRplBilnrSeln.EngMin = 0;
MotRplCoggCfgMotCurrDaxRplBilnrSeln.EngMax = 200;
MotRplCoggCfgMotCurrDaxRplBilnrSeln.Cardinality = 'Cmn';
MotRplCoggCfgMotCurrDaxRplBilnrSeln.CustomerVisible = false;
MotRplCoggCfgMotCurrDaxRplBilnrSeln.Online = false;
MotRplCoggCfgMotCurrDaxRplBilnrSeln.Impact = 'H';
MotRplCoggCfgMotCurrDaxRplBilnrSeln.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotCurrDaxRplBilnrSeln.GraphLink = {''};
MotRplCoggCfgMotCurrDaxRplBilnrSeln.Monotony = 'Strictly_Increasing';
MotRplCoggCfgMotCurrDaxRplBilnrSeln.MaxGrad = Inf;
MotRplCoggCfgMotCurrDaxRplBilnrSeln.PortName = 'MotRplCoggCfgMotCurrDaxRplBilnrSeln';


MotRplCoggCfgMotCurrQaxRpl = DataDict.Calibration;
MotRplCoggCfgMotCurrQaxRpl.LongName = 'Motor Ripple Qax Current';
MotRplCoggCfgMotCurrQaxRpl.Description = [...
  'It is the independent table, Q-axis current, used in the bilinear inte' ...
  'rpolated lookup table representing the change in Q-axis current ripple' ...
  ' compensation.'];
MotRplCoggCfgMotCurrQaxRpl.DocUnits = 'Ampr';
MotRplCoggCfgMotCurrQaxRpl.EngDT = dt.u9p7;
MotRplCoggCfgMotCurrQaxRpl.EngVal =  ...
   [0               10               25               50               60               75              100              105              110              120              125              135];
MotRplCoggCfgMotCurrQaxRpl.EngMin = 0;
MotRplCoggCfgMotCurrQaxRpl.EngMax = 200;
MotRplCoggCfgMotCurrQaxRpl.Cardinality = 'Cmn';
MotRplCoggCfgMotCurrQaxRpl.CustomerVisible = false;
MotRplCoggCfgMotCurrQaxRpl.Online = false;
MotRplCoggCfgMotCurrQaxRpl.Impact = 'H';
MotRplCoggCfgMotCurrQaxRpl.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotCurrQaxRpl.GraphLink = {''};
MotRplCoggCfgMotCurrQaxRpl.Monotony = 'Strictly_Increasing';
MotRplCoggCfgMotCurrQaxRpl.MaxGrad = Inf;
MotRplCoggCfgMotCurrQaxRpl.PortName = 'MotRplCoggCfgMotCurrQaxRpl';


MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY = DataDict.Calibration;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.LongName = 'Motor Torque Command Current Regular Bandwidth Compensation Magnitude Y';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.Description = [...
  'It is the dependent table used in the bilinear interpolation for  the ' ...
  'magnitude response for the current loop.'];
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.DocUnits = 'Uls';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.EngDT = dt.u3p13;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.EngMin = 0;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.EngMax = 7;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.Cardinality = 'Cmn';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.CustomerVisible = false;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.Online = false;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.Impact = 'H';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.GraphLink = {'MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX','MotRplCoggCfgMotVelBilnrSeln'};
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.Monotony = 'None';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.MaxGrad = Inf;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY.PortName = 'MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY';


MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY = DataDict.Calibration;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.LongName = 'Motot Torque Command Current Regular Bandwidth CompenPhase Response Y';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.Description = [...
  'It is the dependent table used in the bilinear interpolation for the p' ...
  'hase response for the current loop.'];
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.DocUnits = 'MotRev';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.EngDT = dt.u0p16;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.EngMin = 0;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.EngMax = 0.9999847412;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.Cardinality = 'Cmn';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.CustomerVisible = false;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.Online = false;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.Impact = 'H';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.GraphLink = {'MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX','MotRplCoggCfgMotVelBilnrSeln'};
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.Monotony = 'None';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.MaxGrad = Inf;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY.PortName = 'MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY';


MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX = DataDict.Calibration;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.LongName = 'Motor Torque Command Current Regular Bandwidth Compensation X';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.Description = [...
  'It is the independent table, torque command, used in the bilinear inte' ...
  'rpolted lookup tale representing the change in PI phase response with ' ...
  'motor velocity Kth (K= 6,12,18) harmonic.'];
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.DocUnits = 'MotNwtMtr';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.EngDT = dt.u5p11;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.EngVal =  ...
   [0              0.5                1                2                3                4              4.5                5];
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.EngMin = 0;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.EngMax = 8.8;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.Cardinality = 'Cmn';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.CustomerVisible = false;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.Online = false;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.Impact = 'H';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.GraphLink = {''};
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.Monotony = 'Strictly_Increasing';
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.MaxGrad = Inf;
MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX.PortName = 'MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX';


MotRplCoggCfgMotTqRplOrder1X = DataDict.Calibration;
MotRplCoggCfgMotTqRplOrder1X.LongName = 'Motor Torque Ripple Order 1 X';
MotRplCoggCfgMotTqRplOrder1X.Description = [...
  'There are 6 bilinear interpolation dependent tables, X and Y direction' ...
  ' for the 3 orders, for motor torque ripple. It is the 1st order table ' ...
  'in X direction.'];
MotRplCoggCfgMotTqRplOrder1X.DocUnits = 'MotNwtMtr';
MotRplCoggCfgMotTqRplOrder1X.EngDT = dt.s1p14;
MotRplCoggCfgMotTqRplOrder1X.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0];
MotRplCoggCfgMotTqRplOrder1X.EngMin = -0.5;
MotRplCoggCfgMotTqRplOrder1X.EngMax = 0.5;
MotRplCoggCfgMotTqRplOrder1X.Cardinality = 'Cmn';
MotRplCoggCfgMotTqRplOrder1X.CustomerVisible = false;
MotRplCoggCfgMotTqRplOrder1X.Online = false;
MotRplCoggCfgMotTqRplOrder1X.Impact = 'H';
MotRplCoggCfgMotTqRplOrder1X.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotTqRplOrder1X.GraphLink = {'MotRplCoggCfgMotCurrQaxRpl','MotRplCoggCfgMotCurrDaxRplBilnrSeln'};
MotRplCoggCfgMotTqRplOrder1X.Monotony = 'None';
MotRplCoggCfgMotTqRplOrder1X.MaxGrad = Inf;
MotRplCoggCfgMotTqRplOrder1X.PortName = 'MotRplCoggCfgMotTqRplOrder1X';


MotRplCoggCfgMotTqRplOrder1Y = DataDict.Calibration;
MotRplCoggCfgMotTqRplOrder1Y.LongName = 'Motor Torque Ripple Order 1 Y';
MotRplCoggCfgMotTqRplOrder1Y.Description = [...
  'There are 6 bilinear interpolation dependent tables, X and Y direction' ...
  ' for the 3 orders, for motor torque ripple. It is the 1st order table ' ...
  'in Y direction.'];
MotRplCoggCfgMotTqRplOrder1Y.DocUnits = 'MotNwtMtr';
MotRplCoggCfgMotTqRplOrder1Y.EngDT = dt.s1p14;
MotRplCoggCfgMotTqRplOrder1Y.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0];
MotRplCoggCfgMotTqRplOrder1Y.EngMin = -0.5;
MotRplCoggCfgMotTqRplOrder1Y.EngMax = 0.5;
MotRplCoggCfgMotTqRplOrder1Y.Cardinality = 'Cmn';
MotRplCoggCfgMotTqRplOrder1Y.CustomerVisible = false;
MotRplCoggCfgMotTqRplOrder1Y.Online = false;
MotRplCoggCfgMotTqRplOrder1Y.Impact = 'H';
MotRplCoggCfgMotTqRplOrder1Y.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotTqRplOrder1Y.GraphLink = {'MotRplCoggCfgMotCurrQaxRpl','MotRplCoggCfgMotCurrDaxRplBilnrSeln'};
MotRplCoggCfgMotTqRplOrder1Y.Monotony = 'None';
MotRplCoggCfgMotTqRplOrder1Y.MaxGrad = Inf;
MotRplCoggCfgMotTqRplOrder1Y.PortName = 'MotRplCoggCfgMotTqRplOrder1Y';


MotRplCoggCfgMotTqRplOrder2X = DataDict.Calibration;
MotRplCoggCfgMotTqRplOrder2X.LongName = 'Motor Torque Ripple Order 1 X';
MotRplCoggCfgMotTqRplOrder2X.Description = [...
  'There are 6 bilinear interpolation dependent tables, X and Y direction' ...
  ' for the 3 orders, for motor torque ripple. It is the 2nd order table ' ...
  'in X direction.'];
MotRplCoggCfgMotTqRplOrder2X.DocUnits = 'MotNwtMtr';
MotRplCoggCfgMotTqRplOrder2X.EngDT = dt.s1p14;
MotRplCoggCfgMotTqRplOrder2X.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0];
MotRplCoggCfgMotTqRplOrder2X.EngMin = -0.5;
MotRplCoggCfgMotTqRplOrder2X.EngMax = 0.5;
MotRplCoggCfgMotTqRplOrder2X.Cardinality = 'Cmn';
MotRplCoggCfgMotTqRplOrder2X.CustomerVisible = false;
MotRplCoggCfgMotTqRplOrder2X.Online = false;
MotRplCoggCfgMotTqRplOrder2X.Impact = 'H';
MotRplCoggCfgMotTqRplOrder2X.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotTqRplOrder2X.GraphLink = {'MotRplCoggCfgMotCurrQaxRpl','MotRplCoggCfgMotCurrDaxRplBilnrSeln'};
MotRplCoggCfgMotTqRplOrder2X.Monotony = 'None';
MotRplCoggCfgMotTqRplOrder2X.MaxGrad = Inf;
MotRplCoggCfgMotTqRplOrder2X.PortName = 'MotRplCoggCfgMotTqRplOrder2X';


MotRplCoggCfgMotTqRplOrder2Y = DataDict.Calibration;
MotRplCoggCfgMotTqRplOrder2Y.LongName = 'Motor Torque Ripple Order 1 Y';
MotRplCoggCfgMotTqRplOrder2Y.Description = [...
  'There are 6 bilinear interpolation dependent tables, X and Y direction' ...
  ' for the 3 orders, for motor torque ripple. It is the 2nd order table ' ...
  'in Y direction.'];
MotRplCoggCfgMotTqRplOrder2Y.DocUnits = 'MotNwtMtr';
MotRplCoggCfgMotTqRplOrder2Y.EngDT = dt.s1p14;
MotRplCoggCfgMotTqRplOrder2Y.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0];
MotRplCoggCfgMotTqRplOrder2Y.EngMin = -0.5;
MotRplCoggCfgMotTqRplOrder2Y.EngMax = 0.5;
MotRplCoggCfgMotTqRplOrder2Y.Cardinality = 'Cmn';
MotRplCoggCfgMotTqRplOrder2Y.CustomerVisible = false;
MotRplCoggCfgMotTqRplOrder2Y.Online = false;
MotRplCoggCfgMotTqRplOrder2Y.Impact = 'H';
MotRplCoggCfgMotTqRplOrder2Y.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotTqRplOrder2Y.GraphLink = {'MotRplCoggCfgMotCurrQaxRpl','MotRplCoggCfgMotCurrDaxRplBilnrSeln'};
MotRplCoggCfgMotTqRplOrder2Y.Monotony = 'None';
MotRplCoggCfgMotTqRplOrder2Y.MaxGrad = Inf;
MotRplCoggCfgMotTqRplOrder2Y.PortName = 'MotRplCoggCfgMotTqRplOrder2Y';


MotRplCoggCfgMotTqRplOrder3X = DataDict.Calibration;
MotRplCoggCfgMotTqRplOrder3X.LongName = 'Motor Torque Ripple Order 1 X';
MotRplCoggCfgMotTqRplOrder3X.Description = [...
  'There are 6 bilinear interpolation dependent tables, X and Y direction' ...
  ' for the 3 orders, for motor torque ripple. It is the 3rd order table ' ...
  'in X direction.'];
MotRplCoggCfgMotTqRplOrder3X.DocUnits = 'MotNwtMtr';
MotRplCoggCfgMotTqRplOrder3X.EngDT = dt.s1p14;
MotRplCoggCfgMotTqRplOrder3X.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0];
MotRplCoggCfgMotTqRplOrder3X.EngMin = -0.5;
MotRplCoggCfgMotTqRplOrder3X.EngMax = 0.5;
MotRplCoggCfgMotTqRplOrder3X.Cardinality = 'Cmn';
MotRplCoggCfgMotTqRplOrder3X.CustomerVisible = false;
MotRplCoggCfgMotTqRplOrder3X.Online = false;
MotRplCoggCfgMotTqRplOrder3X.Impact = 'H';
MotRplCoggCfgMotTqRplOrder3X.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotTqRplOrder3X.GraphLink = {'MotRplCoggCfgMotCurrQaxRpl','MotRplCoggCfgMotCurrDaxRplBilnrSeln'};
MotRplCoggCfgMotTqRplOrder3X.Monotony = 'None';
MotRplCoggCfgMotTqRplOrder3X.MaxGrad = Inf;
MotRplCoggCfgMotTqRplOrder3X.PortName = 'MotRplCoggCfgMotTqRplOrder3X';


MotRplCoggCfgMotTqRplOrder3Y = DataDict.Calibration;
MotRplCoggCfgMotTqRplOrder3Y.LongName = 'Motor Torque Ripple Order 1 Y';
MotRplCoggCfgMotTqRplOrder3Y.Description = [...
  'There are 6 bilinear interpolation dependent tables, X and Y direction' ...
  ' for the 3 orders, for motor torque ripple. It is the 3rd order table ' ...
  'in Y direction.'];
MotRplCoggCfgMotTqRplOrder3Y.DocUnits = 'MotNwtMtr';
MotRplCoggCfgMotTqRplOrder3Y.EngDT = dt.s1p14;
MotRplCoggCfgMotTqRplOrder3Y.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0];
MotRplCoggCfgMotTqRplOrder3Y.EngMin = -0.5;
MotRplCoggCfgMotTqRplOrder3Y.EngMax = 0.5;
MotRplCoggCfgMotTqRplOrder3Y.Cardinality = 'Cmn';
MotRplCoggCfgMotTqRplOrder3Y.CustomerVisible = false;
MotRplCoggCfgMotTqRplOrder3Y.Online = false;
MotRplCoggCfgMotTqRplOrder3Y.Impact = 'H';
MotRplCoggCfgMotTqRplOrder3Y.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotTqRplOrder3Y.GraphLink = {'MotRplCoggCfgMotCurrQaxRpl','MotRplCoggCfgMotCurrDaxRplBilnrSeln'};
MotRplCoggCfgMotTqRplOrder3Y.Monotony = 'None';
MotRplCoggCfgMotTqRplOrder3Y.MaxGrad = Inf;
MotRplCoggCfgMotTqRplOrder3Y.PortName = 'MotRplCoggCfgMotTqRplOrder3Y';


MotRplCoggCfgMotVelBilnrSeln = DataDict.Calibration;
MotRplCoggCfgMotVelBilnrSeln.LongName = 'Motor Velocity Bilinear Selection';
MotRplCoggCfgMotVelBilnrSeln.Description = [...
  'It is the bilnear selection table, used in the bilinear interpolations' ...
  ' for motor torque magnitude response and phase respones.'];
MotRplCoggCfgMotVelBilnrSeln.DocUnits = 'MotRadPerSec';
MotRplCoggCfgMotVelBilnrSeln.EngDT = dt.u16p0;
MotRplCoggCfgMotVelBilnrSeln.EngVal =  ...
   [0              100              114              303              800             1200             2600             3200             3700             4200             5000             6000             7200             7500             8000             8500             9000             9500            10000            11000];
MotRplCoggCfgMotVelBilnrSeln.EngMin = 0;
MotRplCoggCfgMotVelBilnrSeln.EngMax = 12000;
MotRplCoggCfgMotVelBilnrSeln.Cardinality = 'Cmn';
MotRplCoggCfgMotVelBilnrSeln.CustomerVisible = false;
MotRplCoggCfgMotVelBilnrSeln.Online = false;
MotRplCoggCfgMotVelBilnrSeln.Impact = 'H';
MotRplCoggCfgMotVelBilnrSeln.TuningOwner = 'TqCtrl';
MotRplCoggCfgMotVelBilnrSeln.GraphLink = {''};
MotRplCoggCfgMotVelBilnrSeln.Monotony = 'Strictly_Increasing';
MotRplCoggCfgMotVelBilnrSeln.MaxGrad = Inf;
MotRplCoggCfgMotVelBilnrSeln.PortName = 'MotRplCoggCfgMotVelBilnrSeln';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
MotCtrlPrmEstimnMotBackEmfConNom = DataDict.ImprtdCal;
MotCtrlPrmEstimnMotBackEmfConNom.DocUnits = 'VoltPerMotRadPerSec';
MotCtrlPrmEstimnMotBackEmfConNom.EngDT = dt.float32;
MotCtrlPrmEstimnMotBackEmfConNom.EngVal = 0.04;
MotCtrlPrmEstimnMotBackEmfConNom.EngMin = 0.025;
MotCtrlPrmEstimnMotBackEmfConNom.EngMax = 0.075;
MotCtrlPrmEstimnMotBackEmfConNom.PortName = 'MotCtrlPrmEstimnMotBackEmfConNom';
MotCtrlPrmEstimnMotBackEmfConNom.Description = [...
  'Nominal Ke Value:  Motor Voltage Constant – Unit Specific loaded from ' ...
  'motor barcode at EOL.'];


MotRplCoggCmdHrmncOrder1Elec = DataDict.ImprtdCal;
MotRplCoggCmdHrmncOrder1Elec.DocUnits = 'Cnt';
MotRplCoggCmdHrmncOrder1Elec.EngDT = dt.u08;
MotRplCoggCmdHrmncOrder1Elec.EngVal = 6;
MotRplCoggCmdHrmncOrder1Elec.EngMin = 1;
MotRplCoggCmdHrmncOrder1Elec.EngMax = 18;
MotRplCoggCmdHrmncOrder1Elec.PortName = 'MotRplCoggCmdHrmncOrder1Elec';
MotRplCoggCmdHrmncOrder1Elec.Description = '';


MotRplCoggCmdHrmncOrder2Elec = DataDict.ImprtdCal;
MotRplCoggCmdHrmncOrder2Elec.DocUnits = 'Cnt';
MotRplCoggCmdHrmncOrder2Elec.EngDT = dt.u08;
MotRplCoggCmdHrmncOrder2Elec.EngVal = 12;
MotRplCoggCmdHrmncOrder2Elec.EngMin = 1;
MotRplCoggCmdHrmncOrder2Elec.EngMax = 18;
MotRplCoggCmdHrmncOrder2Elec.PortName = 'MotRplCoggCmdHrmncOrder2Elec';
MotRplCoggCmdHrmncOrder2Elec.Description = '';


MotRplCoggCmdHrmncOrder3Elec = DataDict.ImprtdCal;
MotRplCoggCmdHrmncOrder3Elec.DocUnits = 'Cnt';
MotRplCoggCmdHrmncOrder3Elec.EngDT = dt.u08;
MotRplCoggCmdHrmncOrder3Elec.EngVal = 18;
MotRplCoggCmdHrmncOrder3Elec.EngMin = 1;
MotRplCoggCmdHrmncOrder3Elec.EngMax = 18;
MotRplCoggCmdHrmncOrder3Elec.PortName = 'MotRplCoggCmdHrmncOrder3Elec';
MotRplCoggCmdHrmncOrder3Elec.Description = '';


SysGlbPrmMotPoleCnt = DataDict.ImprtdCal;
SysGlbPrmMotPoleCnt.DocUnits = 'Cnt';
SysGlbPrmMotPoleCnt.EngDT = dt.u08;
SysGlbPrmMotPoleCnt.EngVal = 6;
SysGlbPrmMotPoleCnt.EngMin = 2;
SysGlbPrmMotPoleCnt.EngMax = 12;
SysGlbPrmMotPoleCnt.PortName = 'SysGlbPrmMotPoleCnt';
SysGlbPrmMotPoleCnt.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
MotRplCoggPrm = DataDict.NVM;
MotRplCoggPrm.LongName = 'Motor Ripple Cogging Parameters';
MotRplCoggPrm.Description = [...
  'Stored 3 sets of cogging torque order and the corresponding X and Y va' ...
  'lues each.'];
MotRplCoggPrm.DocUnits = 'Cnt';
MotRplCoggPrm.EngDT = struct.MotRplCoggPrmRec2;
MotRplCoggPrm.EngInit = [];
MotRplCoggPrm.EngMin = [struct('CoggOrder1',1,'CoggOrder1X',-0.0997,'CoggOrder1Y',-0.0997,'CoggOrder2',1,'CoggOrder2X',-0.0997,'CoggOrder2Y',-0.0997,'CoggOrder3',1,'CoggOrder3X',-0.0997,'CoggOrder3Y',-0.0997)];
MotRplCoggPrm.EngMax = [struct('CoggOrder1',18,'CoggOrder1X',0.0997,'CoggOrder1Y',0.0997,'CoggOrder2',18,'CoggOrder2X',0.0997,'CoggOrder2Y',0.0997,'CoggOrder3',18,'CoggOrder3X',0.0997,'CoggOrder3Y',0.0997)];
MotRplCoggPrm.CustomerVisible = false;
MotRplCoggPrm.Impact = 'H';
MotRplCoggPrm.TuningOwner = 'TqCtrl';
MotRplCoggPrm.CoderInfo.Alias = '';
MotRplCoggPrm.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotRplCoggCfgMotAgElecDlyRpl = DataDict.Display;
dMotRplCoggCfgMotAgElecDlyRpl.LongName = 'Motor Angle Eletric Delay Ripple';
dMotRplCoggCfgMotAgElecDlyRpl.Description = [...
  'It shows the motor angle of calculated electric delay ripple.'];
dMotRplCoggCfgMotAgElecDlyRpl.DocUnits = 'MotRad';
dMotRplCoggCfgMotAgElecDlyRpl.EngDT = dt.float32;
dMotRplCoggCfgMotAgElecDlyRpl.EngMin = -1.62;
dMotRplCoggCfgMotAgElecDlyRpl.EngMax = 1.62;
dMotRplCoggCfgMotAgElecDlyRpl.InitRowCol = [1  1];


dMotRplCoggCfgMotCurrQaxToMotTqGain = DataDict.Display;
dMotRplCoggCfgMotCurrQaxToMotTqGain.LongName = 'Motor Current Qax to Motor Torque Gain';
dMotRplCoggCfgMotCurrQaxToMotTqGain.Description = [...
  'It shows the calculated gain from motor current Q-axis to motor torque' ...
  '.'];
dMotRplCoggCfgMotCurrQaxToMotTqGain.DocUnits = 'VoltPerMotRadPerSec';
dMotRplCoggCfgMotCurrQaxToMotTqGain.EngDT = dt.float32;
dMotRplCoggCfgMotCurrQaxToMotTqGain.EngMin = 0.021651;
dMotRplCoggCfgMotCurrQaxToMotTqGain.EngMax = 0.406952;
dMotRplCoggCfgMotCurrQaxToMotTqGain.InitRowCol = [1  1];


dMotRplCoggCfgMotTqRplOrder1Mgn = DataDict.Display;
dMotRplCoggCfgMotTqRplOrder1Mgn.LongName = 'Motor Torque Ripple Order 1 Magnitude';
dMotRplCoggCfgMotTqRplOrder1Mgn.Description = [...
  'There are 3 order motor torque ripple magnitudes. It is the 1st one.'];
dMotRplCoggCfgMotTqRplOrder1Mgn.DocUnits = 'MotNwtMtr';
dMotRplCoggCfgMotTqRplOrder1Mgn.EngDT = dt.float32;
dMotRplCoggCfgMotTqRplOrder1Mgn.EngMin = -0.5;
dMotRplCoggCfgMotTqRplOrder1Mgn.EngMax = 0.5;
dMotRplCoggCfgMotTqRplOrder1Mgn.InitRowCol = [1  1];


dMotRplCoggCfgMotTqRplOrder1Pha = DataDict.Display;
dMotRplCoggCfgMotTqRplOrder1Pha.LongName = 'Motor Torque Ripple Order 1 Phase';
dMotRplCoggCfgMotTqRplOrder1Pha.Description = [...
  'There are 3 order motor torque ripple Phases. It is the 1st one.'];
dMotRplCoggCfgMotTqRplOrder1Pha.DocUnits = 'MotRad';
dMotRplCoggCfgMotTqRplOrder1Pha.EngDT = dt.float32;
dMotRplCoggCfgMotTqRplOrder1Pha.EngMin = 0;
dMotRplCoggCfgMotTqRplOrder1Pha.EngMax = 6.2831853;
dMotRplCoggCfgMotTqRplOrder1Pha.InitRowCol = [1  1];


dMotRplCoggCfgMotTqRplOrder2Mgn = DataDict.Display;
dMotRplCoggCfgMotTqRplOrder2Mgn.LongName = 'Motor Torque Ripple Order 2 Magnitude';
dMotRplCoggCfgMotTqRplOrder2Mgn.Description = [...
  'There are 3 order motor torque ripple magnitudes. It is the 2nd one.'];
dMotRplCoggCfgMotTqRplOrder2Mgn.DocUnits = 'MotNwtMtr';
dMotRplCoggCfgMotTqRplOrder2Mgn.EngDT = dt.float32;
dMotRplCoggCfgMotTqRplOrder2Mgn.EngMin = -0.5;
dMotRplCoggCfgMotTqRplOrder2Mgn.EngMax = 0.5;
dMotRplCoggCfgMotTqRplOrder2Mgn.InitRowCol = [1  1];


dMotRplCoggCfgMotTqRplOrder2Pha = DataDict.Display;
dMotRplCoggCfgMotTqRplOrder2Pha.LongName = 'Motor Torque Ripple Order 2 Phase';
dMotRplCoggCfgMotTqRplOrder2Pha.Description = [...
  'There are 3 order motor torque ripple Phases. It is the 2nd one.'];
dMotRplCoggCfgMotTqRplOrder2Pha.DocUnits = 'MotRad';
dMotRplCoggCfgMotTqRplOrder2Pha.EngDT = dt.float32;
dMotRplCoggCfgMotTqRplOrder2Pha.EngMin = 0;
dMotRplCoggCfgMotTqRplOrder2Pha.EngMax = 6.2831853;
dMotRplCoggCfgMotTqRplOrder2Pha.InitRowCol = [1  1];


dMotRplCoggCfgMotTqRplOrder3Mgn = DataDict.Display;
dMotRplCoggCfgMotTqRplOrder3Mgn.LongName = 'Motor Torque Ripple Order 3 Magnitude';
dMotRplCoggCfgMotTqRplOrder3Mgn.Description = [...
  'There are 3 order motor torque ripple magnitudes. It is the 3rd one.'];
dMotRplCoggCfgMotTqRplOrder3Mgn.DocUnits = 'MotNwtMtr';
dMotRplCoggCfgMotTqRplOrder3Mgn.EngDT = dt.float32;
dMotRplCoggCfgMotTqRplOrder3Mgn.EngMin = -0.5;
dMotRplCoggCfgMotTqRplOrder3Mgn.EngMax = 0.5;
dMotRplCoggCfgMotTqRplOrder3Mgn.InitRowCol = [1  1];


dMotRplCoggCfgMotTqRplOrder3Pha = DataDict.Display;
dMotRplCoggCfgMotTqRplOrder3Pha.LongName = 'Motor Torque Ripple Order 3 Phase';
dMotRplCoggCfgMotTqRplOrder3Pha.Description = [...
  'There are 3 order motor torque ripple Phases. It is the 3rd one.'];
dMotRplCoggCfgMotTqRplOrder3Pha.DocUnits = 'MotRad';
dMotRplCoggCfgMotTqRplOrder3Pha.EngDT = dt.float32;
dMotRplCoggCfgMotTqRplOrder3Pha.EngMin = 0;
dMotRplCoggCfgMotTqRplOrder3Pha.EngMax = 6.2831853;
dMotRplCoggCfgMotTqRplOrder3Pha.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotTqRplOrder1X = DataDict.PIM;
MotTqRplOrder1X.LongName = 'Motor Torque Ripple Order 1 X';
MotTqRplOrder1X.Description = [...
  'There are 6 dependent tables used in motor toque ripple bilinear inter' ...
  'polation and updated once NVMs are read. It is the 1st order in X dire' ...
  'ction.'];
MotTqRplOrder1X.DocUnits = 'MotNwtMtr';
MotTqRplOrder1X.EngDT = dt.s1p14;
MotTqRplOrder1X.EngMin = -0.5;
MotTqRplOrder1X.EngMax = 0.5;
MotTqRplOrder1X.InitRowCol = [12  10];


MotTqRplOrder1Y = DataDict.PIM;
MotTqRplOrder1Y.LongName = 'Motor Torque Ripple Order 1 Y';
MotTqRplOrder1Y.Description = [...
  'There are 6 dependent tables used in motor toque ripple bilinear inter' ...
  'polation and updated once NVMs are read. It is the 1st order in Y dire' ...
  'ction.'];
MotTqRplOrder1Y.DocUnits = 'MotNwtMtr';
MotTqRplOrder1Y.EngDT = dt.s1p14;
MotTqRplOrder1Y.EngMin = -0.5;
MotTqRplOrder1Y.EngMax = 0.5;
MotTqRplOrder1Y.InitRowCol = [12  10];


MotTqRplOrder2X = DataDict.PIM;
MotTqRplOrder2X.LongName = 'Motor Torque Ripple Order 2 X';
MotTqRplOrder2X.Description = [...
  'There are 6 dependent tables used in motor toque ripple bilinear inter' ...
  'polation and updated once NVMs are read. It is the 2nd order in X dire' ...
  'ction.'];
MotTqRplOrder2X.DocUnits = 'MotNwtMtr';
MotTqRplOrder2X.EngDT = dt.s1p14;
MotTqRplOrder2X.EngMin = -0.5;
MotTqRplOrder2X.EngMax = 0.5;
MotTqRplOrder2X.InitRowCol = [12  10];


MotTqRplOrder2Y = DataDict.PIM;
MotTqRplOrder2Y.LongName = 'Motor Torque Ripple Order 2 Y';
MotTqRplOrder2Y.Description = [...
  'There are 6 dependent tables used in motor toque ripple bilinear inter' ...
  'polation and updated once NVMs are read. It is the 2nd order in Y dire' ...
  'ction.'];
MotTqRplOrder2Y.DocUnits = 'MotNwtMtr';
MotTqRplOrder2Y.EngDT = dt.s1p14;
MotTqRplOrder2Y.EngMin = -0.5;
MotTqRplOrder2Y.EngMax = 0.5;
MotTqRplOrder2Y.InitRowCol = [12  10];


MotTqRplOrder3X = DataDict.PIM;
MotTqRplOrder3X.LongName = 'Motor Torque Ripple Order 3 X';
MotTqRplOrder3X.Description = [...
  'There are 6 dependent tables used in motor toque ripple bilinear inter' ...
  'polation and updated once NVMs are read. It is the 3rd order in X dire' ...
  'ction.'];
MotTqRplOrder3X.DocUnits = 'MotNwtMtr';
MotTqRplOrder3X.EngDT = dt.s1p14;
MotTqRplOrder3X.EngMin = -0.5;
MotTqRplOrder3X.EngMax = 0.5;
MotTqRplOrder3X.InitRowCol = [12  10];


MotTqRplOrder3Y = DataDict.PIM;
MotTqRplOrder3Y.LongName = 'Motor Torque Ripple Order 1 X';
MotTqRplOrder3Y.Description = [...
  'There are 6 dependent tables used in motor toque ripple bilinear inter' ...
  'polation and updated once NVMs are read. It is the 3rd order in Y dire' ...
  'ction.'];
MotTqRplOrder3Y.DocUnits = 'MotNwtMtr';
MotTqRplOrder3Y.EngDT = dt.s1p14;
MotTqRplOrder3Y.EngMin = -0.5;
MotTqRplOrder3Y.EngMax = 0.5;
MotTqRplOrder3Y.InitRowCol = [12  10];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


ARCHGLBPRM_HALFSQRT3_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_HALFSQRT3_ULS_F32.LongName = 'Half Square Root of 3';
ARCHGLBPRM_HALFSQRT3_ULS_F32.Description = '(Square root of 3) divided by 2';
ARCHGLBPRM_HALFSQRT3_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_HALFSQRT3_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_HALFSQRT3_ULS_F32.EngVal = 0.8660254;
ARCHGLBPRM_HALFSQRT3_ULS_F32.Define = 'Global';


COGGHILIM_MOTNWTMTR_S1P14 = DataDict.Constant;
COGGHILIM_MOTNWTMTR_S1P14.LongName = 'Cogging High Limit';
COGGHILIM_MOTNWTMTR_S1P14.Description = [...
  'It limits the highest value of the motor cogging.'];
COGGHILIM_MOTNWTMTR_S1P14.DocUnits = 'MotNwtMtr';
COGGHILIM_MOTNWTMTR_S1P14.EngDT = dt.s1p14;
COGGHILIM_MOTNWTMTR_S1P14.EngVal = 0.0997;
COGGHILIM_MOTNWTMTR_S1P14.Define = 'Local';


COGGLOLIM_MOTNWTMTR_S1P14 = DataDict.Constant;
COGGLOLIM_MOTNWTMTR_S1P14.LongName = 'Cogging Low Limit';
COGGLOLIM_MOTNWTMTR_S1P14.Description = [...
  'It limits the lowest value of the motor cogging.'];
COGGLOLIM_MOTNWTMTR_S1P14.DocUnits = 'MotNwtMtr';
COGGLOLIM_MOTNWTMTR_S1P14.EngDT = dt.s1p14;
COGGLOLIM_MOTNWTMTR_S1P14.EngVal = -0.0997;
COGGLOLIM_MOTNWTMTR_S1P14.Define = 'Local';


COGGORDER1_CNT_U16 = DataDict.Constant;
COGGORDER1_CNT_U16.LongName = 'Cogging Order 1';
COGGORDER1_CNT_U16.Description = [...
  'There are 3 default values for the cogging torque orders when NVM is n' ...
  'ot Okey. It is the 1st one.'];
COGGORDER1_CNT_U16.DocUnits = 'Cnt';
COGGORDER1_CNT_U16.EngDT = dt.u16;
COGGORDER1_CNT_U16.EngVal = 6;
COGGORDER1_CNT_U16.Define = 'Local';


COGGORDER2_CNT_U16 = DataDict.Constant;
COGGORDER2_CNT_U16.LongName = 'Cogging Order 2';
COGGORDER2_CNT_U16.Description = [...
  'There are 3 default values for the cogging torque orders when NVM is n' ...
  'ot Okey. It is the 2nd one.'];
COGGORDER2_CNT_U16.DocUnits = 'Cnt';
COGGORDER2_CNT_U16.EngDT = dt.u16;
COGGORDER2_CNT_U16.EngVal = 12;
COGGORDER2_CNT_U16.Define = 'Local';


COGGORDER3_CNT_U16 = DataDict.Constant;
COGGORDER3_CNT_U16.LongName = 'Cogging Order 1';
COGGORDER3_CNT_U16.Description = [...
  'There are 3 default values for the cogging torque orders when NVM is n' ...
  'ot Okey. It is the 3rd one.'];
COGGORDER3_CNT_U16.DocUnits = 'Cnt';
COGGORDER3_CNT_U16.EngDT = dt.u16;
COGGORDER3_CNT_U16.EngVal = 18;
COGGORDER3_CNT_U16.Define = 'Local';


MOTAGELECDLYRPLHILIM_MOTRAD_F32 = DataDict.Constant;
MOTAGELECDLYRPLHILIM_MOTRAD_F32.LongName = 'Motor Angle Electical Delay Ripple High Limit';
MOTAGELECDLYRPLHILIM_MOTRAD_F32.Description = [...
  'Upper limit for electrical commutation delay angle.'];
MOTAGELECDLYRPLHILIM_MOTRAD_F32.DocUnits = 'MotRad';
MOTAGELECDLYRPLHILIM_MOTRAD_F32.EngDT = dt.float32;
MOTAGELECDLYRPLHILIM_MOTRAD_F32.EngVal = 1.62;
MOTAGELECDLYRPLHILIM_MOTRAD_F32.Define = 'Local';


MOTAGELECDLYRPLLOLIM_MOTRAD_F32 = DataDict.Constant;
MOTAGELECDLYRPLLOLIM_MOTRAD_F32.LongName = 'Motor Angle Electical Delay Ripple Low Limit';
MOTAGELECDLYRPLLOLIM_MOTRAD_F32.Description = [...
  'Lower Limit for electrical commutation delay angle.'];
MOTAGELECDLYRPLLOLIM_MOTRAD_F32.DocUnits = 'MotRad';
MOTAGELECDLYRPLLOLIM_MOTRAD_F32.EngDT = dt.float32;
MOTAGELECDLYRPLLOLIM_MOTRAD_F32.EngVal = -1.62;
MOTAGELECDLYRPLLOLIM_MOTRAD_F32.Define = 'Local';


MOTCURRQAXTOMOTTQGAINHILIM_VOLTPERMOTRADPERSEC_F32 = DataDict.Constant;
MOTCURRQAXTOMOTTQGAINHILIM_VOLTPERMOTRADPERSEC_F32.LongName = 'Motor Current Qax to Motor Torque Gain High Limit';
MOTCURRQAXTOMOTTQGAINHILIM_VOLTPERMOTRADPERSEC_F32.Description = [...
  'High limit for motor current to motor torque gain.'];
MOTCURRQAXTOMOTTQGAINHILIM_VOLTPERMOTRADPERSEC_F32.DocUnits = 'VoltPerMotRadPerSec';
MOTCURRQAXTOMOTTQGAINHILIM_VOLTPERMOTRADPERSEC_F32.EngDT = dt.float32;
MOTCURRQAXTOMOTTQGAINHILIM_VOLTPERMOTRADPERSEC_F32.EngVal = 0.406952;
MOTCURRQAXTOMOTTQGAINHILIM_VOLTPERMOTRADPERSEC_F32.Define = 'Local';


MOTCURRQAXTOMOTTQGAINLOLIM_VOLTPERMOTRADPERSEC_F32 = DataDict.Constant;
MOTCURRQAXTOMOTTQGAINLOLIM_VOLTPERMOTRADPERSEC_F32.LongName = 'Motor Current Qax to Motor Torque Gain Low Limit';
MOTCURRQAXTOMOTTQGAINLOLIM_VOLTPERMOTRADPERSEC_F32.Description = [...
  'Low limit for motor current to motor torque gain.'];
MOTCURRQAXTOMOTTQGAINLOLIM_VOLTPERMOTRADPERSEC_F32.DocUnits = 'VoltPerMotRadPerSec';
MOTCURRQAXTOMOTTQGAINLOLIM_VOLTPERMOTRADPERSEC_F32.EngDT = dt.float32;
MOTCURRQAXTOMOTTQGAINLOLIM_VOLTPERMOTRADPERSEC_F32.EngVal = 0.021651;
MOTCURRQAXTOMOTTQGAINLOLIM_VOLTPERMOTRADPERSEC_F32.Define = 'Local';


MOTTQRPLHILIM_MOTNWTMTR_F32 = DataDict.Constant;
MOTTQRPLHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Ripple High Limit';
MOTTQRPLHILIM_MOTNWTMTR_F32.Description = [...
  'It limits the highest value of motor torque ripple.'];
MOTTQRPLHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MOTTQRPLHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
MOTTQRPLHILIM_MOTNWTMTR_F32.EngVal = 0.5;
MOTTQRPLHILIM_MOTNWTMTR_F32.Define = 'Local';


MOTTQRPLLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
MOTTQRPLLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Ripple Low Limit';
MOTTQRPLLOLIM_MOTNWTMTR_F32.Description = [...
  'It limits the lowest value of motor torque ripple.'];
MOTTQRPLLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MOTTQRPLLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
MOTTQRPLLOLIM_MOTNWTMTR_F32.EngVal = -0.5;
MOTTQRPLLOLIM_MOTNWTMTR_F32.Define = 'Local';


ONEOVER2_ULS_F32 = DataDict.Constant;
ONEOVER2_ULS_F32.LongName = 'One Over 2';
ONEOVER2_ULS_F32.Description = 'One divided by 2';
ONEOVER2_ULS_F32.DocUnits = 'Uls';
ONEOVER2_ULS_F32.EngDT = dt.float32;
ONEOVER2_ULS_F32.EngVal = 0.5;
ONEOVER2_ULS_F32.Define = 'Local';


SCADMOTVELHILIM_MOTRADPERSEC_F32 = DataDict.Constant;
SCADMOTVELHILIM_MOTRADPERSEC_F32.LongName = 'Scaled Motor Velocity High Limit';
SCADMOTVELHILIM_MOTRADPERSEC_F32.Description = [...
  'It is used to limit maximum value of the scaled motor velocity to avoid the floating point ' ...
  'exception in the data type conversion.'];
SCADMOTVELHILIM_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
SCADMOTVELHILIM_MOTRADPERSEC_F32.EngDT = dt.float32;
SCADMOTVELHILIM_MOTRADPERSEC_F32.EngVal = 65535;
SCADMOTVELHILIM_MOTRADPERSEC_F32.Define = 'Local';


SCADMOTVELLOLIM_MOTRADPERSEC_F32 = DataDict.Constant;
SCADMOTVELLOLIM_MOTRADPERSEC_F32.LongName = 'Scaled Motor Velocity Low Limit';
SCADMOTVELLOLIM_MOTRADPERSEC_F32.Description = [...
  'It is the low limit of the scaled motor velocity.'];
SCADMOTVELLOLIM_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
SCADMOTVELLOLIM_MOTRADPERSEC_F32.EngDT = dt.float32;
SCADMOTVELLOLIM_MOTRADPERSEC_F32.EngVal = 0;
SCADMOTVELLOLIM_MOTRADPERSEC_F32.Define = 'Local';


THREEOVER8_ULS_F32 = DataDict.Constant;
THREEOVER8_ULS_F32.LongName = 'Three Over 8';
THREEOVER8_ULS_F32.Description = '3 divided by 8';
THREEOVER8_ULS_F32.DocUnits = 'Uls';
THREEOVER8_ULS_F32.EngDT = dt.float32;
THREEOVER8_ULS_F32.EngVal = 0.375;
THREEOVER8_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
