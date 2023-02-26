%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 19-Jul-2016 12:45:01       %
%                                  Created with tool release: 2.45.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF107A = DataDict.FDD;
SF107A.Version = '1.4.X';
SF107A.LongName = 'Motor Ripple Cogging Command';
SF107A.ShoName  = 'MotRplCoggCmd';
SF107A.DesignASIL = 'D';
SF107A.Description = [...
  'This function is responsible for creating the q-axis current command f' ...
  'or cogging and torque ripple cancellation.It runs under the time step ' ...
  'of MotorControl x2.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotRplCoggCmdInit1 = DataDict.Runnable;
MotRplCoggCmdInit1.Context = 'Rte';
MotRplCoggCmdInit1.TimeStep = 0;
MotRplCoggCmdInit1.Description = 'Checking whether NVM is available.';

MotRplCoggCmdPer1 = DataDict.Runnable;
MotRplCoggCmdPer1.Context = 'NonRte';
MotRplCoggCmdPer1.TimeStep = 'MotorControlx2';
MotRplCoggCmdPer1.Description = [...
  'Q-axis current command for cogging and torque ripple cancellation are ' ...
  'created in the periodic 1.'];

GetMotCoggCmdPrm = DataDict.SrvRunnable;
GetMotCoggCmdPrm.Context = 'Rte';
GetMotCoggCmdPrm.Description = [...
  'Server Read the value in the NVM and output as the Argument Out signal' ...
  '.'];
GetMotCoggCmdPrm.Return = DataDict.CSReturn;
GetMotCoggCmdPrm.Return.Type = 'None';
GetMotCoggCmdPrm.Return.Min = [];
GetMotCoggCmdPrm.Return.Max = [];
GetMotCoggCmdPrm.Return.TestTolerance = [];
GetMotCoggCmdPrm.Arguments(1) = DataDict.CSArguments;
GetMotCoggCmdPrm.Arguments(1).Name = 'MotCoggCmdY';
GetMotCoggCmdPrm.Arguments(1).EngDT = dt.s1p14;
GetMotCoggCmdPrm.Arguments(1).EngMin = -0.1;
GetMotCoggCmdPrm.Arguments(1).EngMax = 0.1;
GetMotCoggCmdPrm.Arguments(1).TestTolerance = 6.1e-05;
GetMotCoggCmdPrm.Arguments(1).Units = 'MotNwtMtr';
GetMotCoggCmdPrm.Arguments(1).Direction = 'Out';
GetMotCoggCmdPrm.Arguments(1).InitRowCol = [1  128];
GetMotCoggCmdPrm.Arguments(1).Description = [...
  'Read the value from the NVM to the output signal.'];
GetMotCoggCmdPrm.Arguments(2) = DataDict.CSArguments;
GetMotCoggCmdPrm.Arguments(2).Name = 'Idx';
GetMotCoggCmdPrm.Arguments(2).EngDT = dt.u08;
GetMotCoggCmdPrm.Arguments(2).EngMin = 0;
GetMotCoggCmdPrm.Arguments(2).EngMax = 3;
GetMotCoggCmdPrm.Arguments(2).Units = 'Cnt';
GetMotCoggCmdPrm.Arguments(2).Direction = 'In';
GetMotCoggCmdPrm.Arguments(2).InitRowCol = [1  1];
GetMotCoggCmdPrm.Arguments(2).Description = [...
  'Index used to read the value from the NVM.'];

SetMotCoggCmdPrm = DataDict.SrvRunnable;
SetMotCoggCmdPrm.Context = 'Rte';
SetMotCoggCmdPrm.Description = [...
  'Write values to the NVM with the Argument In signals.'];
SetMotCoggCmdPrm.Return = DataDict.CSReturn;
SetMotCoggCmdPrm.Return.Type = 'None';
SetMotCoggCmdPrm.Return.Min = [];
SetMotCoggCmdPrm.Return.Max = [];
SetMotCoggCmdPrm.Return.TestTolerance = [];
SetMotCoggCmdPrm.Arguments(1) = DataDict.CSArguments;
SetMotCoggCmdPrm.Arguments(1).Name = 'MotCoggCmdY';
SetMotCoggCmdPrm.Arguments(1).EngDT = dt.s1p14;
SetMotCoggCmdPrm.Arguments(1).EngMin = -0.1;
SetMotCoggCmdPrm.Arguments(1).EngMax = 0.1;
SetMotCoggCmdPrm.Arguments(1).Units = 'MotNwtMtr';
SetMotCoggCmdPrm.Arguments(1).Direction = 'In';
SetMotCoggCmdPrm.Arguments(1).InitRowCol = [1  128];
SetMotCoggCmdPrm.Arguments(1).Description = [...
  'Write the value to the NVM with the input signal.'];
SetMotCoggCmdPrm.Arguments(2) = DataDict.CSArguments;
SetMotCoggCmdPrm.Arguments(2).Name = 'Idx';
SetMotCoggCmdPrm.Arguments(2).EngDT = dt.u08;
SetMotCoggCmdPrm.Arguments(2).EngMin = 0;
SetMotCoggCmdPrm.Arguments(2).EngMax = 3;
SetMotCoggCmdPrm.Arguments(2).Units = 'Cnt';
SetMotCoggCmdPrm.Arguments(2).Direction = 'In';
SetMotCoggCmdPrm.Arguments(2).InitRowCol = [1  1];
SetMotCoggCmdPrm.Arguments(2).Description = [...
  'Index used to write the value to the NVM.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
MotCoggCmdY_GetErrorStatus = DataDict.Client;
MotCoggCmdY_GetErrorStatus.CallLocation = {'MotRplCoggCmdInit1'};
MotCoggCmdY_GetErrorStatus.Description = [...
  'It is used to determine whether the NVM is available.'];
MotCoggCmdY_GetErrorStatus.Return = DataDict.CSReturn;
MotCoggCmdY_GetErrorStatus.Return.Type = 'Standard';
MotCoggCmdY_GetErrorStatus.Return.Min = 0;
MotCoggCmdY_GetErrorStatus.Return.Max = 1;
MotCoggCmdY_GetErrorStatus.Return.TestTolerance = 0;
MotCoggCmdY_GetErrorStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
MotCoggCmdY_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotCoggCmdY_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
MotCoggCmdY_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotCoggCmdY_GetErrorStatus.Arguments(1).EngMin = 0;
MotCoggCmdY_GetErrorStatus.Arguments(1).EngMax = 8;
MotCoggCmdY_GetErrorStatus.Arguments(1).TestTolerance = 999;
MotCoggCmdY_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotCoggCmdY_GetErrorStatus.Arguments(1).Direction = 'Out';
MotCoggCmdY_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
MotCoggCmdY_GetErrorStatus.Arguments(1).Description = [...
  'Pointer to where the result shall be written.'];


MotCoggCmdY_SetRamBlockStatus = DataDict.Client;
MotCoggCmdY_SetRamBlockStatus.CallLocation = {'SetMotCoggCmdPrm','MotRplCoggCmdInit1'};
MotCoggCmdY_SetRamBlockStatus.Description = [...
  'Notify NVM that the contents of the RAM shadow have changed NVM that t' ...
  'he contents desire to save the data.'];
MotCoggCmdY_SetRamBlockStatus.Return = DataDict.CSReturn;
MotCoggCmdY_SetRamBlockStatus.Return.Type = 'Standard';
MotCoggCmdY_SetRamBlockStatus.Return.Min = 0;
MotCoggCmdY_SetRamBlockStatus.Return.Max = 1;
MotCoggCmdY_SetRamBlockStatus.Return.TestTolerance = 0;
MotCoggCmdY_SetRamBlockStatus.Return.Description = [...
  'Standard return E_OK or E_NOT_OK for the function call.'];
MotCoggCmdY_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotCoggCmdY_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotCoggCmdY_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotCoggCmdY_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotCoggCmdY_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotCoggCmdY_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotCoggCmdY_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotCoggCmdY_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MotCoggCmdY_SetRamBlockStatus.Arguments(1).Description = [...
  'Boolean value to queue the NVM update during shutdown.'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotCtrlMotAgElec = DataDict.IpSignal;
MotCtrlMotAgElec.LongName = 'Motor Control Motor Angle Electric';
MotCtrlMotAgElec.Description = [...
  'Motor angle corrected for Back EMF.'];
MotCtrlMotAgElec.DocUnits = 'MotRevElec';
MotCtrlMotAgElec.EngDT = dt.u0p16;
MotCtrlMotAgElec.EngInit = 0;
MotCtrlMotAgElec.EngMin = 0;
MotCtrlMotAgElec.EngMax = 0.9999847412;
MotCtrlMotAgElec.ReadIn = {'MotRplCoggCmdPer1'};
MotCtrlMotAgElec.ReadType = 'NonRte';


MotCtrlMotAgElecDlyRpl = DataDict.IpSignal;
MotCtrlMotAgElecDlyRpl.LongName = 'Motor Control Motor Angle Electric Delay Ripple';
MotCtrlMotAgElecDlyRpl.Description = 'It is for riple cancellation.';
MotCtrlMotAgElecDlyRpl.DocUnits = 'MotRad';
MotCtrlMotAgElecDlyRpl.EngDT = dt.float32;
MotCtrlMotAgElecDlyRpl.EngInit = 0;
MotCtrlMotAgElecDlyRpl.EngMin = -1.62;
MotCtrlMotAgElecDlyRpl.EngMax = 1.62;
MotCtrlMotAgElecDlyRpl.ReadIn = {'MotRplCoggCmdPer1'};
MotCtrlMotAgElecDlyRpl.ReadType = 'NonRte';


MotCtrlMotCurrQaxToMotTqGain = DataDict.IpSignal;
MotCtrlMotCurrQaxToMotTqGain.LongName = 'Motor Control Motor Current Qax to Motor Torque Gain';
MotCtrlMotCurrQaxToMotTqGain.Description = [...
  'It is a multiplier to scale q-axis current to obtain motor torque.'];
MotCtrlMotCurrQaxToMotTqGain.DocUnits = 'VoltPerMotRadPerSec';
MotCtrlMotCurrQaxToMotTqGain.EngDT = dt.float32;
MotCtrlMotCurrQaxToMotTqGain.EngInit = 0.021651;
MotCtrlMotCurrQaxToMotTqGain.EngMin = 0.021651;
MotCtrlMotCurrQaxToMotTqGain.EngMax = 0.406952;
MotCtrlMotCurrQaxToMotTqGain.ReadIn = {'MotRplCoggCmdPer1'};
MotCtrlMotCurrQaxToMotTqGain.ReadType = 'NonRte';


MotCtrlMotElecMeclPolarity = DataDict.IpSignal;
MotCtrlMotElecMeclPolarity.LongName = 'Motor Control Motor Electric Mechanical Polarity';
MotCtrlMotElecMeclPolarity.Description = [...
  'Polarity for motor electrical vs. mechanical'];
MotCtrlMotElecMeclPolarity.DocUnits = 'Uls';
MotCtrlMotElecMeclPolarity.EngDT = dt.s08;
MotCtrlMotElecMeclPolarity.EngInit = 1;
MotCtrlMotElecMeclPolarity.EngMin = -1;
MotCtrlMotElecMeclPolarity.EngMax = 1;
MotCtrlMotElecMeclPolarity.ReadIn = {'MotRplCoggCmdPer1'};
MotCtrlMotElecMeclPolarity.ReadType = 'NonRte';


MotCtrlMotTqRplCoggOrder1Mgn = DataDict.IpSignal;
MotCtrlMotTqRplCoggOrder1Mgn.LongName = 'Motor Control Motor Torque Ripple Cogging Order 1 Magnitude';
MotCtrlMotTqRplCoggOrder1Mgn.Description = [...
  'There are 3 order of torque ripple and cogging combined magnitudes. It' ...
  ' is the 1st order.'];
MotCtrlMotTqRplCoggOrder1Mgn.DocUnits = 'MotNwtMtr';
MotCtrlMotTqRplCoggOrder1Mgn.EngDT = dt.float32;
MotCtrlMotTqRplCoggOrder1Mgn.EngInit = 0;
MotCtrlMotTqRplCoggOrder1Mgn.EngMin = 0;
MotCtrlMotTqRplCoggOrder1Mgn.EngMax = 0.5;
MotCtrlMotTqRplCoggOrder1Mgn.ReadIn = {'MotRplCoggCmdPer1'};
MotCtrlMotTqRplCoggOrder1Mgn.ReadType = 'NonRte';


MotCtrlMotTqRplCoggOrder1Pha = DataDict.IpSignal;
MotCtrlMotTqRplCoggOrder1Pha.LongName = 'Motor Control Motor Torque Ripple Cogging Order 1 Phase';
MotCtrlMotTqRplCoggOrder1Pha.Description = [...
  'There are 3 order of torque ripple and cogging combined phases. It is ' ...
  'the 1st order.'];
MotCtrlMotTqRplCoggOrder1Pha.DocUnits = 'MotRad';
MotCtrlMotTqRplCoggOrder1Pha.EngDT = dt.float32;
MotCtrlMotTqRplCoggOrder1Pha.EngInit = 0;
MotCtrlMotTqRplCoggOrder1Pha.EngMin = 0;
MotCtrlMotTqRplCoggOrder1Pha.EngMax = 6.2831853;
MotCtrlMotTqRplCoggOrder1Pha.ReadIn = {'MotRplCoggCmdPer1'};
MotCtrlMotTqRplCoggOrder1Pha.ReadType = 'NonRte';


MotCtrlMotTqRplCoggOrder2Mgn = DataDict.IpSignal;
MotCtrlMotTqRplCoggOrder2Mgn.LongName = 'Motor Control Motor Torque Ripple Cogging Order 2 Magnitude';
MotCtrlMotTqRplCoggOrder2Mgn.Description = [...
  'There are 3 order of torque ripple and cogging combined magnitudes. It' ...
  ' is the 2nd order.'];
MotCtrlMotTqRplCoggOrder2Mgn.DocUnits = 'MotNwtMtr';
MotCtrlMotTqRplCoggOrder2Mgn.EngDT = dt.float32;
MotCtrlMotTqRplCoggOrder2Mgn.EngInit = 0;
MotCtrlMotTqRplCoggOrder2Mgn.EngMin = 0;
MotCtrlMotTqRplCoggOrder2Mgn.EngMax = 0.5;
MotCtrlMotTqRplCoggOrder2Mgn.ReadIn = {'MotRplCoggCmdPer1'};
MotCtrlMotTqRplCoggOrder2Mgn.ReadType = 'NonRte';


MotCtrlMotTqRplCoggOrder2Pha = DataDict.IpSignal;
MotCtrlMotTqRplCoggOrder2Pha.LongName = 'Motor Control Motor Torque Ripple Cogging Order 2 Phase';
MotCtrlMotTqRplCoggOrder2Pha.Description = [...
  'There are 3 order of torque ripple and cogging combined phases. It is ' ...
  'the 2nd order.'];
MotCtrlMotTqRplCoggOrder2Pha.DocUnits = 'MotRad';
MotCtrlMotTqRplCoggOrder2Pha.EngDT = dt.float32;
MotCtrlMotTqRplCoggOrder2Pha.EngInit = 0;
MotCtrlMotTqRplCoggOrder2Pha.EngMin = 0;
MotCtrlMotTqRplCoggOrder2Pha.EngMax = 6.2831853;
MotCtrlMotTqRplCoggOrder2Pha.ReadIn = {'MotRplCoggCmdPer1'};
MotCtrlMotTqRplCoggOrder2Pha.ReadType = 'NonRte';


MotCtrlMotTqRplCoggOrder3Mgn = DataDict.IpSignal;
MotCtrlMotTqRplCoggOrder3Mgn.LongName = 'Motor Control Motor Torque Ripple Cogging Order 3 Magnitude';
MotCtrlMotTqRplCoggOrder3Mgn.Description = [...
  'There are 3 order of torque ripple and cogging combined magnitudes. It' ...
  ' is the 3rd order.'];
MotCtrlMotTqRplCoggOrder3Mgn.DocUnits = 'MotNwtMtr';
MotCtrlMotTqRplCoggOrder3Mgn.EngDT = dt.float32;
MotCtrlMotTqRplCoggOrder3Mgn.EngInit = 0;
MotCtrlMotTqRplCoggOrder3Mgn.EngMin = 0;
MotCtrlMotTqRplCoggOrder3Mgn.EngMax = 0.5;
MotCtrlMotTqRplCoggOrder3Mgn.ReadIn = {'MotRplCoggCmdPer1'};
MotCtrlMotTqRplCoggOrder3Mgn.ReadType = 'NonRte';


MotCtrlMotTqRplCoggOrder3Pha = DataDict.IpSignal;
MotCtrlMotTqRplCoggOrder3Pha.LongName = 'Motor Control Motor Torque Ripple Cogging Order 3 Phase';
MotCtrlMotTqRplCoggOrder3Pha.Description = [...
  'There are 3 order of torque ripple and cogging combined phases. It is ' ...
  'the 3rd order.'];
MotCtrlMotTqRplCoggOrder3Pha.DocUnits = 'MotRad';
MotCtrlMotTqRplCoggOrder3Pha.EngDT = dt.float32;
MotCtrlMotTqRplCoggOrder3Pha.EngInit = 0;
MotCtrlMotTqRplCoggOrder3Pha.EngMin = 0;
MotCtrlMotTqRplCoggOrder3Pha.EngMax = 6.2831853;
MotCtrlMotTqRplCoggOrder3Pha.ReadIn = {'MotRplCoggCmdPer1'};
MotCtrlMotTqRplCoggOrder3Pha.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCtrlMotCurrQaxCoggCmd = DataDict.OpSignal;
MotCtrlMotCurrQaxCoggCmd.LongName = 'Motor Control Motor Current Qax Cogging Command';
MotCtrlMotCurrQaxCoggCmd.Description = [...
  'Qax Current Command for Cogging Torque Cancellation.'];
MotCtrlMotCurrQaxCoggCmd.DocUnits = 'Ampr';
MotCtrlMotCurrQaxCoggCmd.SwcShoName = 'MotRplCoggCmd';
MotCtrlMotCurrQaxCoggCmd.EngDT = dt.float32;
MotCtrlMotCurrQaxCoggCmd.EngInit = 0;
MotCtrlMotCurrQaxCoggCmd.EngMin = -6;
MotCtrlMotCurrQaxCoggCmd.EngMax = 6;
MotCtrlMotCurrQaxCoggCmd.TestTolerance = 0.025;
MotCtrlMotCurrQaxCoggCmd.WrittenIn = {'MotRplCoggCmdPer1'};
MotCtrlMotCurrQaxCoggCmd.WriteType = 'NonRte';


MotCtrlMotCurrQaxRplCmd = DataDict.OpSignal;
MotCtrlMotCurrQaxRplCmd.LongName = 'Motor Control Motor Current Qax Ripple Command';
MotCtrlMotCurrQaxRplCmd.Description = [...
  'Qax Current Command for Torque Ripple Cancellation.'];
MotCtrlMotCurrQaxRplCmd.DocUnits = 'Ampr';
MotCtrlMotCurrQaxRplCmd.SwcShoName = 'MotRplCoggCmd';
MotCtrlMotCurrQaxRplCmd.EngDT = dt.float32;
MotCtrlMotCurrQaxRplCmd.EngInit = 0;
MotCtrlMotCurrQaxRplCmd.EngMin = -29;
MotCtrlMotCurrQaxRplCmd.EngMax = 29;
MotCtrlMotCurrQaxRplCmd.TestTolerance = 0.025;
MotCtrlMotCurrQaxRplCmd.WrittenIn = {'MotRplCoggCmdPer1'};
MotCtrlMotCurrQaxRplCmd.WriteType = 'NonRte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotRplCoggCmdHrmncOrder1Elec = DataDict.Calibration;
MotRplCoggCmdHrmncOrder1Elec.LongName = 'Order 1 Electrical Harmonic';
MotRplCoggCmdHrmncOrder1Elec.Description = [...
  'Electrical Order 1 For Torque Ripple and Cogging Cancellation'];
MotRplCoggCmdHrmncOrder1Elec.DocUnits = 'Cnt';
MotRplCoggCmdHrmncOrder1Elec.EngDT = dt.u08;
MotRplCoggCmdHrmncOrder1Elec.EngVal = 6;
MotRplCoggCmdHrmncOrder1Elec.EngMin = 1;
MotRplCoggCmdHrmncOrder1Elec.EngMax = 18;
MotRplCoggCmdHrmncOrder1Elec.Cardinality = 'Cmn';
MotRplCoggCmdHrmncOrder1Elec.CustomerVisible = false;
MotRplCoggCmdHrmncOrder1Elec.Online = false;
MotRplCoggCmdHrmncOrder1Elec.Impact = 'H';
MotRplCoggCmdHrmncOrder1Elec.TuningOwner = 'TqCtrl';
MotRplCoggCmdHrmncOrder1Elec.GraphLink = {''};
MotRplCoggCmdHrmncOrder1Elec.Monotony = 'None';
MotRplCoggCmdHrmncOrder1Elec.MaxGrad = Inf;
MotRplCoggCmdHrmncOrder1Elec.PortName = 'MotRplCoggCmdHrmncOrder1Elec';


MotRplCoggCmdHrmncOrder2Elec = DataDict.Calibration;
MotRplCoggCmdHrmncOrder2Elec.LongName = 'Order 2 Electrical Harmonic';
MotRplCoggCmdHrmncOrder2Elec.Description = [...
  'Electrical Order 2 For Torque Ripple and Cogging Cancellation'];
MotRplCoggCmdHrmncOrder2Elec.DocUnits = 'Cnt';
MotRplCoggCmdHrmncOrder2Elec.EngDT = dt.u08;
MotRplCoggCmdHrmncOrder2Elec.EngVal = 12;
MotRplCoggCmdHrmncOrder2Elec.EngMin = 1;
MotRplCoggCmdHrmncOrder2Elec.EngMax = 18;
MotRplCoggCmdHrmncOrder2Elec.Cardinality = 'Cmn';
MotRplCoggCmdHrmncOrder2Elec.CustomerVisible = false;
MotRplCoggCmdHrmncOrder2Elec.Online = false;
MotRplCoggCmdHrmncOrder2Elec.Impact = 'H';
MotRplCoggCmdHrmncOrder2Elec.TuningOwner = 'TqCtrl';
MotRplCoggCmdHrmncOrder2Elec.GraphLink = {''};
MotRplCoggCmdHrmncOrder2Elec.Monotony = 'None';
MotRplCoggCmdHrmncOrder2Elec.MaxGrad = Inf;
MotRplCoggCmdHrmncOrder2Elec.PortName = 'MotRplCoggCmdHrmncOrder2Elec';


MotRplCoggCmdHrmncOrder3Elec = DataDict.Calibration;
MotRplCoggCmdHrmncOrder3Elec.LongName = 'Order 3 Electrical Harmonic';
MotRplCoggCmdHrmncOrder3Elec.Description = [...
  'Electrical Order 3 For Torque Ripple and Cogging Cancellation'];
MotRplCoggCmdHrmncOrder3Elec.DocUnits = 'Cnt';
MotRplCoggCmdHrmncOrder3Elec.EngDT = dt.u08;
MotRplCoggCmdHrmncOrder3Elec.EngVal = 18;
MotRplCoggCmdHrmncOrder3Elec.EngMin = 1;
MotRplCoggCmdHrmncOrder3Elec.EngMax = 18;
MotRplCoggCmdHrmncOrder3Elec.Cardinality = 'Cmn';
MotRplCoggCmdHrmncOrder3Elec.CustomerVisible = false;
MotRplCoggCmdHrmncOrder3Elec.Online = false;
MotRplCoggCmdHrmncOrder3Elec.Impact = 'H';
MotRplCoggCmdHrmncOrder3Elec.TuningOwner = 'TqCtrl';
MotRplCoggCmdHrmncOrder3Elec.GraphLink = {''};
MotRplCoggCmdHrmncOrder3Elec.Monotony = 'None';
MotRplCoggCmdHrmncOrder3Elec.MaxGrad = Inf;
MotRplCoggCmdHrmncOrder3Elec.PortName = 'MotRplCoggCmdHrmncOrder3Elec';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
MotCoggCmdY = DataDict.NVM;
MotCoggCmdY.LongName = 'Motor Cogging Command Y';
MotCoggCmdY.Description = [...
  'Stored four 1D tables with 128 elements each, which is combined as one' ...
  ' 1D table with 512 elements used in the linear interpolation for MotCo' ...
  'ggCmd.'];
MotCoggCmdY.DocUnits = 'MotNwtMtr';
MotCoggCmdY.EngDT = dt.s1p14;
MotCoggCmdY.EngInit = [];
MotCoggCmdY.EngMin = -0.1;
MotCoggCmdY.EngMax = 0.1;
MotCoggCmdY.CustomerVisible = false;
MotCoggCmdY.Impact = 'H';
MotCoggCmdY.TuningOwner = 'TqCtrl';
MotCoggCmdY.CoderInfo.Alias = '';
MotCoggCmdY.InitRowCol = [1  512];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotRplCoggCmdCoggIdx = DataDict.Display;
dMotRplCoggCmdCoggIdx.LongName = 'Cogging Index';
dMotRplCoggCmdCoggIdx.Description = [...
  'It shows the reference position of the the corrected electric angle in' ...
  ' count.'];
dMotRplCoggCmdCoggIdx.DocUnits = 'Cnt';
dMotRplCoggCmdCoggIdx.EngDT = dt.u16;
dMotRplCoggCmdCoggIdx.EngMin = 0;
dMotRplCoggCmdCoggIdx.EngMax = 511;
dMotRplCoggCmdCoggIdx.InitRowCol = [1  1];


dMotRplCoggCmdMotCoggCmd = DataDict.Display;
dMotRplCoggCmdMotCoggCmd.LongName = 'Motor Cogging Command';
dMotRplCoggCmdMotCoggCmd.Description = [...
  'It shows the motor cooging torque after the lookup table.'];
dMotRplCoggCmdMotCoggCmd.DocUnits = 'MotNwtMtr';
dMotRplCoggCmdMotCoggCmd.EngDT = dt.float32;
dMotRplCoggCmdMotCoggCmd.EngMin = -0.1;
dMotRplCoggCmdMotCoggCmd.EngMax = 0.1;
dMotRplCoggCmdMotCoggCmd.InitRowCol = [1  1];


dMotRplCoggCmdMotCurrQaxCoggCmdPreLim = DataDict.Display;
dMotRplCoggCmdMotCurrQaxCoggCmdPreLim.LongName = 'Motor Current Qax Cogging Command Pre Limit';
dMotRplCoggCmdMotCurrQaxCoggCmdPreLim.Description = [...
  'It shows the motor current value before the saturation block.'];
dMotRplCoggCmdMotCurrQaxCoggCmdPreLim.DocUnits = 'Ampr';
dMotRplCoggCmdMotCurrQaxCoggCmdPreLim.EngDT = dt.float32;
dMotRplCoggCmdMotCurrQaxCoggCmdPreLim.EngMin = -4.618724;
dMotRplCoggCmdMotCurrQaxCoggCmdPreLim.EngMax = 4.618724;
dMotRplCoggCmdMotCurrQaxCoggCmdPreLim.InitRowCol = [1  1];


dMotRplCoggCmdMotRplCmdPreLim = DataDict.Display;
dMotRplCoggCmdMotRplCmdPreLim.LongName = 'Motor Ripple Command Pre Limit';
dMotRplCoggCmdMotRplCmdPreLim.Description = [...
  'It shows the ripple command before the saturation block.'];
dMotRplCoggCmdMotRplCmdPreLim.DocUnits = 'Ampr';
dMotRplCoggCmdMotRplCmdPreLim.EngDT = dt.float32;
dMotRplCoggCmdMotRplCmdPreLim.EngMin = -69.280865;
dMotRplCoggCmdMotRplCmdPreLim.EngMax = 69.280865;
dMotRplCoggCmdMotRplCmdPreLim.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

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


ININITRNIDXCON_CNT_U16 = DataDict.Constant;
ININITRNIDXCON_CNT_U16.LongName = 'Initializaiton Iteration Index Constant';
ININITRNIDXCON_CNT_U16.Description = [...
  'It is used in the Init function as a constant for the iteration of res' ...
  'etting NVM.'];
ININITRNIDXCON_CNT_U16.DocUnits = 'Cnt';
ININITRNIDXCON_CNT_U16.EngDT = dt.u16;
ININITRNIDXCON_CNT_U16.EngVal = 512;
ININITRNIDXCON_CNT_U16.Define = 'Local';


ITRNIDXCON_CNT_U08 = DataDict.Constant;
ITRNIDXCON_CNT_U08.LongName = 'Iteration Index Constant';
ITRNIDXCON_CNT_U08.Description = [...
  'It is used in set and get runnables to locate the position of the sign' ...
  'als.'];
ITRNIDXCON_CNT_U08.DocUnits = 'Cnt';
ITRNIDXCON_CNT_U08.EngDT = dt.u08;
ITRNIDXCON_CNT_U08.EngVal = 128;
ITRNIDXCON_CNT_U08.Define = 'Local';


MOTCOGGCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
MOTCOGGCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Cogging Command High Limit';
MOTCOGGCMDHILIM_MOTNWTMTR_F32.Description = [...
  'It limits the high value of the output motor cogging torque.'];
MOTCOGGCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MOTCOGGCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
MOTCOGGCMDHILIM_MOTNWTMTR_F32.EngVal = 0.1;
MOTCOGGCMDHILIM_MOTNWTMTR_F32.Define = 'Local';


MOTCOGGCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
MOTCOGGCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Cogging Command Low Limit';
MOTCOGGCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'It limits the low value of the output motor cogging torque.'];
MOTCOGGCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MOTCOGGCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
MOTCOGGCMDLOLIM_MOTNWTMTR_F32.EngVal = -0.1;
MOTCOGGCMDLOLIM_MOTNWTMTR_F32.Define = 'Local';


MOTCURRCOGGCMDHILIM_AMPR_F32 = DataDict.Constant;
MOTCURRCOGGCMDHILIM_AMPR_F32.LongName = 'Motor Current Cogging Command High Limit';
MOTCURRCOGGCMDHILIM_AMPR_F32.Description = [...
  'It limits the high value of the output motor current Qax cogging comma' ...
  'nd.'];
MOTCURRCOGGCMDHILIM_AMPR_F32.DocUnits = 'Ampr';
MOTCURRCOGGCMDHILIM_AMPR_F32.EngDT = dt.float32;
MOTCURRCOGGCMDHILIM_AMPR_F32.EngVal = 6;
MOTCURRCOGGCMDHILIM_AMPR_F32.Define = 'Local';


MOTCURRCOGGCMDLOLIM_AMPR_F32 = DataDict.Constant;
MOTCURRCOGGCMDLOLIM_AMPR_F32.LongName = 'Motor Current Cogging Command Low Limit';
MOTCURRCOGGCMDLOLIM_AMPR_F32.Description = [...
  'It limits the low value of the output motor current Qax cogging comman' ...
  'd.'];
MOTCURRCOGGCMDLOLIM_AMPR_F32.DocUnits = 'Ampr';
MOTCURRCOGGCMDLOLIM_AMPR_F32.EngDT = dt.float32;
MOTCURRCOGGCMDLOLIM_AMPR_F32.EngVal = -6;
MOTCURRCOGGCMDLOLIM_AMPR_F32.Define = 'Local';


MOTRPLCMDHILIM_AMPR_F32 = DataDict.Constant;
MOTRPLCMDHILIM_AMPR_F32.LongName = 'Motor Ripple Command High Limit';
MOTRPLCMDHILIM_AMPR_F32.Description = [...
  'It limits the high value of the output motor current Qax ripple comman' ...
  'd.'];
MOTRPLCMDHILIM_AMPR_F32.DocUnits = 'Ampr';
MOTRPLCMDHILIM_AMPR_F32.EngDT = dt.float32;
MOTRPLCMDHILIM_AMPR_F32.EngVal = 29;
MOTRPLCMDHILIM_AMPR_F32.Define = 'Local';


MOTRPLCMDLOLIM_AMPR_F32 = DataDict.Constant;
MOTRPLCMDLOLIM_AMPR_F32.LongName = 'Motor Ripple Command Low Limit';
MOTRPLCMDLOLIM_AMPR_F32.Description = [...
  'It limits the low value of the output motor current Qax ripple command' ...
  '.'];
MOTRPLCMDLOLIM_AMPR_F32.DocUnits = 'Ampr';
MOTRPLCMDLOLIM_AMPR_F32.EngDT = dt.float32;
MOTRPLCMDLOLIM_AMPR_F32.EngVal = -29;
MOTRPLCMDLOLIM_AMPR_F32.Define = 'Local';


ONEOVER12_MOTREV_F32 = DataDict.Constant;
ONEOVER12_MOTREV_F32.LongName = 'One Over Twelve';
ONEOVER12_MOTREV_F32.Description = '1 divided by 12.';
ONEOVER12_MOTREV_F32.DocUnits = 'MotRev';
ONEOVER12_MOTREV_F32.EngDT = dt.float32;
ONEOVER12_MOTREV_F32.EngVal = 0.0833333;
ONEOVER12_MOTREV_F32.Define = 'Local';


ONEOVER2PI_ULS_F32 = DataDict.Constant;
ONEOVER2PI_ULS_F32.LongName = 'One Over 2 Pi';
ONEOVER2PI_ULS_F32.Description = 'One divided by 2Pi';
ONEOVER2PI_ULS_F32.DocUnits = 'Uls';
ONEOVER2PI_ULS_F32.EngDT = dt.float32;
ONEOVER2PI_ULS_F32.EngVal = 0.1591549;
ONEOVER2PI_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
