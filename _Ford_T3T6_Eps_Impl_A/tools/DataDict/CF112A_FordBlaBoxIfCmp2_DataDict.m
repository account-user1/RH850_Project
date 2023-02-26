%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 09-Apr-2018 12:35:43       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CF112A = DataDict.FDD;
CF112A.Version = '1.0.X';
CF112A.LongName = 'Ford Black Box Interface Component 2';
CF112A.ShoName  = 'FordBlaBoxIfCmp2';
CF112A.DesignASIL = 'B';
CF112A.Description = [...
  'This function initializes and calls the ASIL B Ford In House feature f' ...
  'unctions.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordBlaBoxIfCmp2Init1 = DataDict.Runnable;
FordBlaBoxIfCmp2Init1.Context = 'Rte';
FordBlaBoxIfCmp2Init1.TimeStep = 0;
FordBlaBoxIfCmp2Init1.Description = 'Initialization Runnable';

FordBlaBoxIfCmp2Per1 = DataDict.Runnable;
FordBlaBoxIfCmp2Per1.Context = 'Rte';
FordBlaBoxIfCmp2Per1.TimeStep = 0.004;
FordBlaBoxIfCmp2Per1.Description = 'Periodic Runnable';

%%---------------------------------------------------------------
%% Write to HS-CAN
%%---------------------------------------------------------------

FIH_Write_ESA_HS_CAN = DataDict.SrvRunnable;
FIH_Write_ESA_HS_CAN.Context = 'NonRte';
FIH_Write_ESA_HS_CAN.Description = [...
  'Server Runnable for ESA High Speed CAN'];
FIH_Write_ESA_HS_CAN.Return = DataDict.CSReturn;
FIH_Write_ESA_HS_CAN.Return.Type = 'None';
FIH_Write_ESA_HS_CAN.Return.Min = [];
FIH_Write_ESA_HS_CAN.Return.Max = [];
FIH_Write_ESA_HS_CAN.Return.TestTolerance = [];
FIH_Write_ESA_HS_CAN.Arguments(1) = DataDict.CSArguments;
FIH_Write_ESA_HS_CAN.Arguments(1).Name = 'EsaOn_B_Stat';
FIH_Write_ESA_HS_CAN.Arguments(1).EngDT = dt.u08;
FIH_Write_ESA_HS_CAN.Arguments(1).EngMin = 0;
FIH_Write_ESA_HS_CAN.Arguments(1).EngMax = 255;
FIH_Write_ESA_HS_CAN.Arguments(1).TestTolerance = 1;
FIH_Write_ESA_HS_CAN.Arguments(1).Units = 'Cnt';
FIH_Write_ESA_HS_CAN.Arguments(1).Direction = 'In';
FIH_Write_ESA_HS_CAN.Arguments(1).InitRowCol = [1  1];
FIH_Write_ESA_HS_CAN.Arguments(1).Description = [...
  'It returns  ESAOn_B_Stat'];


%%------------------------------------------------------------
%% Read/Write for Diagnostics
%%------------------------------------------------------------
FIH_Read_BPR_Activation_Cnt = DataDict.SrvRunnable;
FIH_Read_BPR_Activation_Cnt.Context = 'NonRte';
FIH_Read_BPR_Activation_Cnt.Description = [...
  'Server Runnable for FIH_Read_BPR_Activation_Cnt'];
FIH_Read_BPR_Activation_Cnt.Return = DataDict.CSReturn;
FIH_Read_BPR_Activation_Cnt.Return.Type = 'None';
FIH_Read_BPR_Activation_Cnt.Return.Min = [];
FIH_Read_BPR_Activation_Cnt.Return.Max = [];
FIH_Read_BPR_Activation_Cnt.Return.TestTolerance = [];

% FIH_Read_BPR_Activation_Cnt.Return.Type = dt.u16;
% FIH_Read_BPR_Activation_Cnt.Return.Min = 0;
% FIH_Read_BPR_Activation_Cnt.Return.Max = 65535;
% FIH_Read_BPR_Activation_Cnt.Return.TestTolerance = [];
% FIH_Read_BPR_Activation_Cnt.Description = [...
%   'It returns Activation counter internal value'];


FIH_Read_ESA_Int_Status_DID = DataDict.SrvRunnable;
FIH_Read_ESA_Int_Status_DID.Context = 'NonRte';
FIH_Read_ESA_Int_Status_DID.Description = [...
  'Server Runnable for FIH_Read_ESA_Int_Status_DID'];
FIH_Read_ESA_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Read_ESA_Int_Status_DID.Return.Type = 'None';
FIH_Read_ESA_Int_Status_DID.Return.Min = [];
FIH_Read_ESA_Int_Status_DID.Return.Max = [];
FIH_Read_ESA_Int_Status_DID.Return.TestTolerance = [];

% FIH_Read_ESA_Int_Status_DID.Return.Type = dt.u32;
% FIH_Read_ESA_Int_Status_DID.Return.Min = 0;
% FIH_Read_ESA_Int_Status_DID.Return.Max = 4294967295;
% FIH_Read_ESA_Int_Status_DID.Return.TestTolerance = [];
% FIH_Read_ESA_Int_Status_DID.Description = [...
%   'It returns  ESA Internal status value'];


FIH_Read_STDR_Int_Status_DID = DataDict.SrvRunnable;
FIH_Read_STDR_Int_Status_DID.Context = 'NonRte';
FIH_Read_STDR_Int_Status_DID.Description = [...
  'Server Runnable for FIH_Read_STDR_Int_Status_DID'];
FIH_Read_STDR_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Read_STDR_Int_Status_DID.Return.Type = 'None';
FIH_Read_STDR_Int_Status_DID.Return.Min = [];
FIH_Read_STDR_Int_Status_DID.Return.Max = [];
FIH_Read_STDR_Int_Status_DID.Return.TestTolerance = [];

% FIH_Read_STDR_Int_Status_DID.Return.Type = dt.u32;
% FIH_Read_STDR_Int_Status_DID.Return.Min = 0;
% FIH_Read_STDR_Int_Status_DID.Return.Max = 4294967295;
% FIH_Read_STDR_Int_Status_DID.Return.TestTolerance = [];
% FIH_Read_STDR_Int_Status_DID.Description = [...
%  'It returns STDR Internal status value'];


FIH_Read_TSC_Activation_Cnt = DataDict.SrvRunnable;
FIH_Read_TSC_Activation_Cnt.Context = 'NonRte';
FIH_Read_TSC_Activation_Cnt.Description = [...
  'Server Runnable for FIH_Read_TSC_Activation_Cnt'];
FIH_Read_TSC_Activation_Cnt.Return = DataDict.CSReturn;
FIH_Read_TSC_Activation_Cnt.Return.Type = 'None';
FIH_Read_TSC_Activation_Cnt.Return.Min = [];
FIH_Read_TSC_Activation_Cnt.Return.Max = [];
FIH_Read_TSC_Activation_Cnt.Return.TestTolerance = [];

% FIH_Read_TSC_Activation_Cnt.Return.Type = dt.u16;
% FIH_Read_TSC_Activation_Cnt.Return.Min = 0;
% FIH_Read_TSC_Activation_Cnt.Return.Max = 65535;
% FIH_Read_TSC_Activation_Cnt.Return.TestTolerance = [];
% FIH_Read_TSC_Activation_Cnt.Description = [...
%   'It returns TSC activation counter value'];


FIH_Write_BPR_Activation_Cnt = DataDict.SrvRunnable;
FIH_Write_BPR_Activation_Cnt.Context = 'NonRte';
FIH_Write_BPR_Activation_Cnt.Description = [...
  'Server Runnable for FIH_Write_BPR_Activation_Cnt'];
FIH_Write_BPR_Activation_Cnt.Return = DataDict.CSReturn;
FIH_Write_BPR_Activation_Cnt.Return.Type = 'None';
FIH_Write_BPR_Activation_Cnt.Return.Min = [];
FIH_Write_BPR_Activation_Cnt.Return.Max = [];
FIH_Write_BPR_Activation_Cnt.Return.TestTolerance = [];
FIH_Write_BPR_Activation_Cnt.Arguments(1) = DataDict.CSArguments;
FIH_Write_BPR_Activation_Cnt.Arguments(1).Name = 'BPR_ActivationCounter';
FIH_Write_BPR_Activation_Cnt.Arguments(1).EngDT = dt.u16;
FIH_Write_BPR_Activation_Cnt.Arguments(1).EngMin = 0;
FIH_Write_BPR_Activation_Cnt.Arguments(1).EngMax = 65535;
FIH_Write_BPR_Activation_Cnt.Arguments(1).TestTolerance = 1;
FIH_Write_BPR_Activation_Cnt.Arguments(1).Units = 'Cnt';
FIH_Write_BPR_Activation_Cnt.Arguments(1).Direction = 'In';
FIH_Write_BPR_Activation_Cnt.Arguments(1).InitRowCol = [1  1];
FIH_Write_BPR_Activation_Cnt.Arguments(1).Description = [...
  'It returns void'];


FIH_Write_ESA_Int_Status_DID = DataDict.SrvRunnable;
FIH_Write_ESA_Int_Status_DID.Context = 'NonRte';
FIH_Write_ESA_Int_Status_DID.Description = [...
  'Server Runnable for FIH_Write_ESA_Int_Status_DID'];
FIH_Write_ESA_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Write_ESA_Int_Status_DID.Return.Type = 'None';
FIH_Write_ESA_Int_Status_DID.Return.Min = [];
FIH_Write_ESA_Int_Status_DID.Return.Max = [];
FIH_Write_ESA_Int_Status_DID.Return.TestTolerance = [];
FIH_Write_ESA_Int_Status_DID.Arguments(1) = DataDict.CSArguments;
FIH_Write_ESA_Int_Status_DID.Arguments(1).Name = 'ESA_InternalStatus';
FIH_Write_ESA_Int_Status_DID.Arguments(1).EngDT = dt.u32;
FIH_Write_ESA_Int_Status_DID.Arguments(1).EngMin = 0;
FIH_Write_ESA_Int_Status_DID.Arguments(1).EngMax = 4294967295;
FIH_Write_ESA_Int_Status_DID.Arguments(1).TestTolerance = 1;
FIH_Write_ESA_Int_Status_DID.Arguments(1).Units = 'Cnt';
FIH_Write_ESA_Int_Status_DID.Arguments(1).Direction = 'In';
FIH_Write_ESA_Int_Status_DID.Arguments(1).InitRowCol = [1  1];
FIH_Write_ESA_Int_Status_DID.Arguments(1).Description = [...
  'It returns void'];


FIH_Write_STDR_Int_Status_DID = DataDict.SrvRunnable;
FIH_Write_STDR_Int_Status_DID.Context = 'NonRte';
FIH_Write_STDR_Int_Status_DID.Description = [...
  'Server Runnable for FIH_Write_STDR_Int_Status_DID'];
FIH_Write_STDR_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Write_STDR_Int_Status_DID.Return.Type = 'None';
FIH_Write_STDR_Int_Status_DID.Return.Min = [];
FIH_Write_STDR_Int_Status_DID.Return.Max = [];
FIH_Write_STDR_Int_Status_DID.Return.TestTolerance = [];
FIH_Write_STDR_Int_Status_DID.Arguments(1) = DataDict.CSArguments;
FIH_Write_STDR_Int_Status_DID.Arguments(1).Name = 'STDR_InternalStatus';
FIH_Write_STDR_Int_Status_DID.Arguments(1).EngDT = dt.u32;
FIH_Write_STDR_Int_Status_DID.Arguments(1).EngMin = 0;
FIH_Write_STDR_Int_Status_DID.Arguments(1).EngMax = 4294967295;
FIH_Write_STDR_Int_Status_DID.Arguments(1).TestTolerance = 1;
FIH_Write_STDR_Int_Status_DID.Arguments(1).Units = 'Cnt';
FIH_Write_STDR_Int_Status_DID.Arguments(1).Direction = 'In';
FIH_Write_STDR_Int_Status_DID.Arguments(1).InitRowCol = [1  1];
FIH_Write_STDR_Int_Status_DID.Arguments(1).Description = [...
  'It returns void'];


FIH_Write_TSC_Activation_Cnt = DataDict.SrvRunnable;
FIH_Write_TSC_Activation_Cnt.Context = 'NonRte';
FIH_Write_TSC_Activation_Cnt.Description = [...
  'Server Runnable for FIH_Write_TSC_Activation_Cnt'];
FIH_Write_TSC_Activation_Cnt.Return = DataDict.CSReturn;
FIH_Write_TSC_Activation_Cnt.Return.Type = 'None';
FIH_Write_TSC_Activation_Cnt.Return.Min = [];
FIH_Write_TSC_Activation_Cnt.Return.Max = [];
FIH_Write_TSC_Activation_Cnt.Return.TestTolerance = [];
FIH_Write_TSC_Activation_Cnt.Arguments(1) = DataDict.CSArguments;
FIH_Write_TSC_Activation_Cnt.Arguments(1).Name = 'TSC_ActivationCounter';
FIH_Write_TSC_Activation_Cnt.Arguments(1).EngDT = dt.u16;
FIH_Write_TSC_Activation_Cnt.Arguments(1).EngMin = 0;
FIH_Write_TSC_Activation_Cnt.Arguments(1).EngMax = 65535;
FIH_Write_TSC_Activation_Cnt.Arguments(1).TestTolerance = 1;
FIH_Write_TSC_Activation_Cnt.Arguments(1).Units = 'Cnt';
FIH_Write_TSC_Activation_Cnt.Arguments(1).Direction = 'In';
FIH_Write_TSC_Activation_Cnt.Arguments(1).InitRowCol = [1  1];
FIH_Write_TSC_Activation_Cnt.Arguments(1).Description = [...
  'It returns void'];

%%---------------------------------------------------------------------
%% Ford In-House feature Software version numbers
%%---------------------------------------------------------------------

FIH_Write_ESA_SW_Version = DataDict.SrvRunnable;
FIH_Write_ESA_SW_Version.Context = 'NonRte';
FIH_Write_ESA_SW_Version.Description = [...
  'Server Runnable to provide value of Ford Evasive Steering AssistSoftwa' ...
  're Version.'];
FIH_Write_ESA_SW_Version.Return = DataDict.CSReturn;
FIH_Write_ESA_SW_Version.Return.Type = 'None';
FIH_Write_ESA_SW_Version.Return.Min = [];
FIH_Write_ESA_SW_Version.Return.Max = [];
FIH_Write_ESA_SW_Version.Return.TestTolerance = [];
FIH_Write_ESA_SW_Version.Arguments(1) = DataDict.CSArguments;
FIH_Write_ESA_SW_Version.Arguments(1).Name = 'ESA_SW_Version';
FIH_Write_ESA_SW_Version.Arguments(1).EngDT = dt.u32;
FIH_Write_ESA_SW_Version.Arguments(1).EngMin = 0;
FIH_Write_ESA_SW_Version.Arguments(1).EngMax = 4294967295;
FIH_Write_ESA_SW_Version.Arguments(1).TestTolerance = 1;
FIH_Write_ESA_SW_Version.Arguments(1).Units = 'Cnt';
FIH_Write_ESA_SW_Version.Arguments(1).Direction = 'In';
FIH_Write_ESA_SW_Version.Arguments(1).InitRowCol = [1  1];
FIH_Write_ESA_SW_Version.Arguments(1).Description = [...
  'It returns void'];


FIH_Write_STDR_SW_Version = DataDict.SrvRunnable;
FIH_Write_STDR_SW_Version.Context = 'NonRte';
FIH_Write_STDR_SW_Version.Description = [...
  'Server Runnable to provide value of  Ford Steer Torque DisturbanceReje' ...
  'ction Software Version'];
FIH_Write_STDR_SW_Version.Return = DataDict.CSReturn;
FIH_Write_STDR_SW_Version.Return.Type = 'None';
FIH_Write_STDR_SW_Version.Return.Min = [];
FIH_Write_STDR_SW_Version.Return.Max = [];
FIH_Write_STDR_SW_Version.Return.TestTolerance = [];
FIH_Write_STDR_SW_Version.Arguments(1) = DataDict.CSArguments;
FIH_Write_STDR_SW_Version.Arguments(1).Name = 'STDR_SW_Version';
FIH_Write_STDR_SW_Version.Arguments(1).EngDT = dt.u32;
FIH_Write_STDR_SW_Version.Arguments(1).EngMin = 0;
FIH_Write_STDR_SW_Version.Arguments(1).EngMax = 4294967295;
FIH_Write_STDR_SW_Version.Arguments(1).TestTolerance = 1;
FIH_Write_STDR_SW_Version.Arguments(1).Units = 'Cnt';
FIH_Write_STDR_SW_Version.Arguments(1).Direction = 'In';
FIH_Write_STDR_SW_Version.Arguments(1).InitRowCol = [1  1];
FIH_Write_STDR_SW_Version.Arguments(1).Description = [...
  'It returns void'];

%%---------------------------------------------------------------------
%% Read to Arbiter Command
%%---------------------------------------------------------------------

FIH_Read_ESA_Arbiter = DataDict.SrvRunnable;
FIH_Read_ESA_Arbiter.Context = 'NonRte';
FIH_Read_ESA_Arbiter.Description = [...
  'Server Runnable for Ford Evasive Steering Assist Arbitration Command'];
FIH_Read_ESA_Arbiter.Return = DataDict.CSReturn;
FIH_Read_ESA_Arbiter.Return.Type = 'None';
FIH_Read_ESA_Arbiter.Return.Min = [];
FIH_Read_ESA_Arbiter.Return.Max = [];
FIH_Read_ESA_Arbiter.Return.TestTolerance = [];
%FIH_Read_ESA_Arbiter.Return.Type = dt.u08;


FIH_Read_STDR_Arbiter = DataDict.SrvRunnable;
FIH_Read_STDR_Arbiter.Context = 'NonRte';
FIH_Read_STDR_Arbiter.Description = [...
  'Server Runnable for Ford Steering Torque Disturbance Rejection Arbitra' ...
  'tion Command'];
FIH_Read_STDR_Arbiter.Return = DataDict.CSReturn;
FIH_Read_STDR_Arbiter.Return.Type = 'None';
FIH_Read_STDR_Arbiter.Return.Min = [];
FIH_Read_STDR_Arbiter.Return.Max = [];
FIH_Read_STDR_Arbiter.Return.TestTolerance = [];

% FIH_Read_STDR_Arbiter.Return.Type = dt.u08;
% FIH_Read_STDR_Arbiter.Return.Min = 0;
% FIH_Read_STDR_Arbiter.Return.Max = 255;
% FIH_Read_STDR_Arbiter.Return.TestTolerance = [];
% FIH_Read_STDR_Arbiter.Description = [...
%     'It returns STDR_Arbiter'];

%%---------------------------------------------------------------------
%% Write to Arbiter/Limiter
%%---------------------------------------------------------------------

FIH_Write_ESA_Arbiter = DataDict.SrvRunnable;
FIH_Write_ESA_Arbiter.Context = 'NonRte';
FIH_Write_ESA_Arbiter.Description = [...
  'Server Runnable to provide value of Ford Evasive Steering AssistFeatur' ...
  'e State and Ford Evasive Steering Assist Torque Request'];
FIH_Write_ESA_Arbiter.Return = DataDict.CSReturn;
FIH_Write_ESA_Arbiter.Return.Type = 'None';
FIH_Write_ESA_Arbiter.Return.Min = [];
FIH_Write_ESA_Arbiter.Return.Max = [];
FIH_Write_ESA_Arbiter.Return.TestTolerance = [];
FIH_Write_ESA_Arbiter.Arguments(1) = DataDict.CSArguments;
FIH_Write_ESA_Arbiter.Arguments(1).Name = 'ESA_FeatureState';
FIH_Write_ESA_Arbiter.Arguments(1).EngDT = dt.u32;
FIH_Write_ESA_Arbiter.Arguments(1).EngMin = 0;
FIH_Write_ESA_Arbiter.Arguments(1).EngMax = 4294967295;
FIH_Write_ESA_Arbiter.Arguments(1).TestTolerance = 1;
FIH_Write_ESA_Arbiter.Arguments(1).Units = 'Cnt';
FIH_Write_ESA_Arbiter.Arguments(1).Direction = 'In';
FIH_Write_ESA_Arbiter.Arguments(1).InitRowCol = [1  1];
FIH_Write_ESA_Arbiter.Arguments(1).Description = [...
  'ESA_FeatureState'];
FIH_Write_ESA_Arbiter.Arguments(2) = DataDict.CSArguments;
FIH_Write_ESA_Arbiter.Arguments(2).Name = 'ESA_TorqueRequest';
FIH_Write_ESA_Arbiter.Arguments(2).EngDT = dt.s16;
FIH_Write_ESA_Arbiter.Arguments(2).EngMin = 0;
FIH_Write_ESA_Arbiter.Arguments(2).EngMax = 4294967295;
FIH_Write_ESA_Arbiter.Arguments(2).TestTolerance = 1;
FIH_Write_ESA_Arbiter.Arguments(2).Units = 'Cnt';
FIH_Write_ESA_Arbiter.Arguments(2).Direction = 'In';
FIH_Write_ESA_Arbiter.Arguments(2).InitRowCol = [1  1];
FIH_Write_ESA_Arbiter.Arguments(2).Description = [...
  'ESA_TorqueRequest'];


FIH_Write_STDR_Arbiter = DataDict.SrvRunnable;
FIH_Write_STDR_Arbiter.Context = 'NonRte';
FIH_Write_STDR_Arbiter.Description = [...
  'Server Runnable to provide value of Ford Steer Torque DisturbanceRejec' ...
  'tion Feature State and Ford Steer Torque Disturbance RejectionTorque R' ...
  'equest'];
FIH_Write_STDR_Arbiter.Return = DataDict.CSReturn;
FIH_Write_STDR_Arbiter.Return.Type = 'None';
FIH_Write_STDR_Arbiter.Return.Min = [];
FIH_Write_STDR_Arbiter.Return.Max = [];
FIH_Write_STDR_Arbiter.Return.TestTolerance = [];
FIH_Write_STDR_Arbiter.Arguments(1) = DataDict.CSArguments;
FIH_Write_STDR_Arbiter.Arguments(1).Name = 'STDR_FeatureState';
FIH_Write_STDR_Arbiter.Arguments(1).EngDT = dt.u32;
FIH_Write_STDR_Arbiter.Arguments(1).EngMin = 0;
FIH_Write_STDR_Arbiter.Arguments(1).EngMax = 4294967295;
FIH_Write_STDR_Arbiter.Arguments(1).TestTolerance = 1;
FIH_Write_STDR_Arbiter.Arguments(1).Units = 'Cnt';
FIH_Write_STDR_Arbiter.Arguments(1).Direction = 'In';
FIH_Write_STDR_Arbiter.Arguments(1).InitRowCol = [1  1];
FIH_Write_STDR_Arbiter.Arguments(1).Description = [...
  'STDR_FeatureState'];
FIH_Write_STDR_Arbiter.Arguments(2) = DataDict.CSArguments;
FIH_Write_STDR_Arbiter.Arguments(2).Name = 'STDR_TorqueRequest';
FIH_Write_STDR_Arbiter.Arguments(2).EngDT = dt.s16;
FIH_Write_STDR_Arbiter.Arguments(2).EngMin = 0;
FIH_Write_STDR_Arbiter.Arguments(2).EngMax = 4294967295;
FIH_Write_STDR_Arbiter.Arguments(2).TestTolerance = 1;
FIH_Write_STDR_Arbiter.Arguments(2).Units = 'Cnt';
FIH_Write_STDR_Arbiter.Arguments(2).Direction = 'In';
FIH_Write_STDR_Arbiter.Arguments(2).InitRowCol = [1  1];
FIH_Write_STDR_Arbiter.Arguments(2).Description = [...
  'STDR_TorqueRequest'];




%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

FIH_ESA_init = DataDict.Client;
FIH_ESA_init.CallLocation = {'FordBlaBoxIfCmp2Init1'};
FIH_ESA_init.Description = 'Client Runnable for FIH_ESA_init';
FIH_ESA_init.Return = DataDict.CSReturn;
FIH_ESA_init.Return.Type = 'None';
FIH_ESA_init.Return.Min = [];
FIH_ESA_init.Return.Max = [];
FIH_ESA_init.Return.TestTolerance = [];

FIH_STDR_init = DataDict.Client;
FIH_STDR_init.CallLocation = {'FordBlaBoxIfCmp2Init1'};
FIH_STDR_init.Description = 'Client Runnable for FIH_STDR_init';
FIH_STDR_init.Return = DataDict.CSReturn;
FIH_STDR_init.Return.Type = 'None';
FIH_STDR_init.Return.Min = [];
FIH_STDR_init.Return.Max = [];
FIH_STDR_init.Return.TestTolerance = [];

FIH_ESA_function = DataDict.Client;
FIH_ESA_function.CallLocation = {'FordBlaBoxIfCmp2Per1'};
FIH_ESA_function.Description = [...
  'Client Runnable for FIH_ESA_function'];
FIH_ESA_function.Return = DataDict.CSReturn;
FIH_ESA_function.Return.Type = 'None';
FIH_ESA_function.Return.Min = [];
FIH_ESA_function.Return.Max = [];
FIH_ESA_function.Return.TestTolerance = [];

FIH_STDR_function = DataDict.Client;
FIH_STDR_function.CallLocation = {'FordBlaBoxIfCmp2Per1'};
FIH_STDR_function.Description = [...
  'Client Runnable for FIH_STDR_function'];
FIH_STDR_function.Return = DataDict.CSReturn;
FIH_STDR_function.Return.Type = 'None';
FIH_STDR_function.Return.Min = [];
FIH_STDR_function.Return.Max = [];
FIH_STDR_function.Return.TestTolerance = [];


%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EcuId = DataDict.IpSignal;
EcuId.LongName = 'ECU Identifier';
EcuId.Description = [...
  'This signal is used to call "FIH_STDR_init()","FIH_ESA_init()","FIH_ST' ...
  'DR_function()" and "FIH_ESA_function()".'];
EcuId.DocUnits = 'Cnt';
EcuId.EngDT = dt.u08;
EcuId.EngInit = 0;
EcuId.EngMin = 0;
EcuId.EngMax = 3;
EcuId.ReadIn = {'FordBlaBoxIfCmp2Init1', 'FordBlaBoxIfCmp2Per1'};
EcuId.ReadType = 'Rte';


FordEvasSteerAssiArbnCmd = DataDict.IpSignal;
FordEvasSteerAssiArbnCmd.LongName = 'Ford Evasive Steering Assist Arbitration Command';
FordEvasSteerAssiArbnCmd.Description = [...
  'This signal is used to return infomation of Ford Evasive Steering Assi' ...
  'st Arbitration Command to FIH'];
FordEvasSteerAssiArbnCmd.DocUnits = 'Cnt';
FordEvasSteerAssiArbnCmd.EngDT = enum.FordArbnCmd1;
FordEvasSteerAssiArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordEvasSteerAssiArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordEvasSteerAssiArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordEvasSteerAssiArbnCmd.ReadIn = {'FIH_Read_ESA_Arbiter'};
FordEvasSteerAssiArbnCmd.ReadType = 'Rte';


FordSteerTqDstbcRejctnArbnCmd = DataDict.IpSignal;
FordSteerTqDstbcRejctnArbnCmd.LongName = 'Ford Steering Torque Disturbance Rejection Arbitration Command';
FordSteerTqDstbcRejctnArbnCmd.Description = [...
  'This signal is used to return infomation of Ford Steering Torque Distu' ...
  'rbance Rejection Arbitration Command to FIH'];
FordSteerTqDstbcRejctnArbnCmd.DocUnits = 'Cnt';
FordSteerTqDstbcRejctnArbnCmd.EngDT = enum.FordArbnCmd1;
FordSteerTqDstbcRejctnArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordSteerTqDstbcRejctnArbnCmd.ReadIn = {'FIH_Read_STDR_Arbiter'};
FordSteerTqDstbcRejctnArbnCmd.ReadType = 'Rte';


FordWrSrvBrkPlsRednActvnCntr = DataDict.IpSignal;
FordWrSrvBrkPlsRednActvnCntr.LongName = 'Ford Write Service Brake Pulse Reduction Activation Counter';
FordWrSrvBrkPlsRednActvnCntr.Description = [...
  'This signal is used to return value of BPRA Activation Counter Interna' ...
  'l to FIH'];
FordWrSrvBrkPlsRednActvnCntr.DocUnits = 'Cnt';
FordWrSrvBrkPlsRednActvnCntr.EngDT = dt.u16;
FordWrSrvBrkPlsRednActvnCntr.EngInit = 0;
FordWrSrvBrkPlsRednActvnCntr.EngMin = 0;
FordWrSrvBrkPlsRednActvnCntr.EngMax = 65535;
FordWrSrvBrkPlsRednActvnCntr.ReadIn = {'FIH_Read_BPR_Activation_Cnt'};
FordWrSrvBrkPlsRednActvnCntr.ReadType = 'Rte';


FordWrSrvEvasSteerAssiIntSts = DataDict.IpSignal;
FordWrSrvEvasSteerAssiIntSts.LongName = 'Ford Write Service Evasive Steer Assist Internal Status';
FordWrSrvEvasSteerAssiIntSts.Description = [...
  'This signal is used to return value of ESA Internal Status to FIH'];
FordWrSrvEvasSteerAssiIntSts.DocUnits = 'Cnt';
FordWrSrvEvasSteerAssiIntSts.EngDT = dt.u32;
FordWrSrvEvasSteerAssiIntSts.EngInit = 0;
FordWrSrvEvasSteerAssiIntSts.EngMin = 0;
FordWrSrvEvasSteerAssiIntSts.EngMax = 4294967295;
FordWrSrvEvasSteerAssiIntSts.ReadIn = {'FIH_Read_ESA_Int_Status_DID'};
FordWrSrvEvasSteerAssiIntSts.ReadType = 'Rte';


FordWrSrvSteerTqDstbcRejctnIntSts = DataDict.IpSignal;
FordWrSrvSteerTqDstbcRejctnIntSts.LongName = 'Ford Service Steer Torque Disturbance Rejection Internal Status';
FordWrSrvSteerTqDstbcRejctnIntSts.Description = [...
  'This signal is used to return value of STDR Internal Status to FIH'];
FordWrSrvSteerTqDstbcRejctnIntSts.DocUnits = 'Cnt';
FordWrSrvSteerTqDstbcRejctnIntSts.EngDT = dt.u32;
FordWrSrvSteerTqDstbcRejctnIntSts.EngInit = 0;
FordWrSrvSteerTqDstbcRejctnIntSts.EngMin = 0;
FordWrSrvSteerTqDstbcRejctnIntSts.EngMax = 4294967295;
FordWrSrvSteerTqDstbcRejctnIntSts.ReadIn = {'FIH_Read_STDR_Int_Status_DID'};
FordWrSrvSteerTqDstbcRejctnIntSts.ReadType = 'Rte';


FordWrSrvTqSteerCmpActvnCntr = DataDict.IpSignal;
FordWrSrvTqSteerCmpActvnCntr.LongName = 'Ford Write Service Torque Steer Compensated Activation Counter';
FordWrSrvTqSteerCmpActvnCntr.Description = [...
  'This signal is used to return value of TSC Activation Counter Internal' ...
  ' to FIH'];
FordWrSrvTqSteerCmpActvnCntr.DocUnits = 'Cnt';
FordWrSrvTqSteerCmpActvnCntr.EngDT = dt.u16;
FordWrSrvTqSteerCmpActvnCntr.EngInit = 0;
FordWrSrvTqSteerCmpActvnCntr.EngMin = 0;
FordWrSrvTqSteerCmpActvnCntr.EngMax = 65535;
FordWrSrvTqSteerCmpActvnCntr.ReadIn = {'FIH_Read_TSC_Activation_Cnt'};
FordWrSrvTqSteerCmpActvnCntr.ReadType = 'Rte';


%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

FordBrkPlsRednActvnCntr = DataDict.OpSignal;
FordBrkPlsRednActvnCntr.LongName = 'Ford Brake Pulse Reduction Activation Counter';
FordBrkPlsRednActvnCntr.Description = [...
  'This signal is used to write the value of Ford Brake Pulsation Reducti' ...
  'onActivation Counter to memory.'];
FordBrkPlsRednActvnCntr.DocUnits = 'Cnt';
FordBrkPlsRednActvnCntr.SwcShoName = 'FordBlaBoxIfCmp2';
FordBrkPlsRednActvnCntr.EngDT = dt.u16;
FordBrkPlsRednActvnCntr.EngInit = 0;
FordBrkPlsRednActvnCntr.EngMin = 0;
FordBrkPlsRednActvnCntr.EngMax = 65535;
FordBrkPlsRednActvnCntr.TestTolerance = 0;
FordBrkPlsRednActvnCntr.WrittenIn = {'FIH_Write_BPR_Activation_Cnt'};
FordBrkPlsRednActvnCntr.WriteType = 'Rte';


FordEvasSteerAssiFeatSt = DataDict.OpSignal;
FordEvasSteerAssiFeatSt.LongName = ' Ford Evasive Steering Assist Feature State';
FordEvasSteerAssiFeatSt.Description = [...
  'This signal is used to write the value of  Ford Evasive Steering Assis' ...
  'tFeature State.'];
FordEvasSteerAssiFeatSt.DocUnits = 'Cnt';
FordEvasSteerAssiFeatSt.SwcShoName = 'FordBlaBoxIfCmp2';
FordEvasSteerAssiFeatSt.EngDT = enum.FordFeatSt1;
FordEvasSteerAssiFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordEvasSteerAssiFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordEvasSteerAssiFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordEvasSteerAssiFeatSt.TestTolerance = 1;
FordEvasSteerAssiFeatSt.WrittenIn = {'FIH_Write_ESA_Arbiter'};
FordEvasSteerAssiFeatSt.WriteType = 'Rte';


FordEvasSteerAssiIntSts = DataDict.OpSignal;
FordEvasSteerAssiIntSts.LongName = 'Ford Evasive Steer Assist Internal Status';
FordEvasSteerAssiIntSts.Description = [...
  'This signal is used to write the value of Ford Evasive Steer AssistInt' ...
  'ernal State to memory.'];
FordEvasSteerAssiIntSts.DocUnits = 'Cnt';
FordEvasSteerAssiIntSts.SwcShoName = 'FordBlaBoxIfCmp2';
FordEvasSteerAssiIntSts.EngDT = dt.u32;
FordEvasSteerAssiIntSts.EngInit = 0;
FordEvasSteerAssiIntSts.EngMin = 0;
FordEvasSteerAssiIntSts.EngMax = 4294967295;
FordEvasSteerAssiIntSts.TestTolerance = 0;
FordEvasSteerAssiIntSts.WrittenIn = {'FIH_Write_ESA_Int_Status_DID'};
FordEvasSteerAssiIntSts.WriteType = 'Rte';


FordEvasSteerAssiTqReq = DataDict.OpSignal;
FordEvasSteerAssiTqReq.LongName = 'Ford Evasive Steering Assist Torque Request';
FordEvasSteerAssiTqReq.Description = [...
  'This signal is used to write the value of Ford Evasive Steering Assist' ...
  'Torque Request'];
FordEvasSteerAssiTqReq.DocUnits = 'HwNwtMtr';
FordEvasSteerAssiTqReq.SwcShoName = 'FordBlaBoxIfCmp2';
FordEvasSteerAssiTqReq.EngDT = dt.float32;
FordEvasSteerAssiTqReq.EngInit = 0;
FordEvasSteerAssiTqReq.EngMin = -32;
FordEvasSteerAssiTqReq.EngMax = 31.99902344;
FordEvasSteerAssiTqReq.TestTolerance = 0.001953125;
FordEvasSteerAssiTqReq.WrittenIn = {'FIH_Write_ESA_Arbiter'};
FordEvasSteerAssiTqReq.WriteType = 'Rte';


FordEvasSteerAssiSwVers = DataDict.OpSignal;
FordEvasSteerAssiSwVers.LongName = 'Ford Evasive Steering Assist Software Version';
FordEvasSteerAssiSwVers.Description = [...
  'This signal is used to write the value of Ford Evasive Steering Assist' ...
  'Software Version to memory.'];
FordEvasSteerAssiSwVers.DocUnits = 'Cnt';
FordEvasSteerAssiSwVers.SwcShoName = 'FordBlaBoxIfCmp2';
FordEvasSteerAssiSwVers.EngDT = dt.u32;
FordEvasSteerAssiSwVers.EngInit = 0;
FordEvasSteerAssiSwVers.EngMin = 0;
FordEvasSteerAssiSwVers.EngMax = 4294967295;
FordEvasSteerAssiSwVers.TestTolerance = 1;
FordEvasSteerAssiSwVers.WrittenIn = {'FIH_Write_ESA_SW_Version'};
FordEvasSteerAssiSwVers.WriteType = 'Rte';


FordSteerTqDstbcRejctnFeatSt = DataDict.OpSignal;
FordSteerTqDstbcRejctnFeatSt.LongName = 'Ford Steering Torque Disturbance Rejection Feature State';
FordSteerTqDstbcRejctnFeatSt.Description = [...
  'This signal is used to write the value of Ford Steering Torque Disturb' ...
  'anceRejection Feature State.'];
FordSteerTqDstbcRejctnFeatSt.DocUnits = 'HwNwtMtr';
FordSteerTqDstbcRejctnFeatSt.SwcShoName = 'FordBlaBoxIfCmp2';
FordSteerTqDstbcRejctnFeatSt.EngDT = enum.FordFeatSt1;
FordSteerTqDstbcRejctnFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordSteerTqDstbcRejctnFeatSt.TestTolerance = 1;
FordSteerTqDstbcRejctnFeatSt.WrittenIn = {'FIH_Write_STDR_Arbiter'};
FordSteerTqDstbcRejctnFeatSt.WriteType = 'Rte';


FordSteerTqDstbcRejctnIntSts = DataDict.OpSignal;
FordSteerTqDstbcRejctnIntSts.LongName = 'Ford Steering Torque Disturbance Rejection Internal Status';
FordSteerTqDstbcRejctnIntSts.Description = [...
  'This signal is used to write the value of Ford Steering TorqueDisturba' ...
  'nce Rejection Internal State to memory.'];
FordSteerTqDstbcRejctnIntSts.DocUnits = 'Cnt';
FordSteerTqDstbcRejctnIntSts.SwcShoName = 'FordBlaBoxIfCmp2';
FordSteerTqDstbcRejctnIntSts.EngDT = dt.u32;
FordSteerTqDstbcRejctnIntSts.EngInit = 0;
FordSteerTqDstbcRejctnIntSts.EngMin = 0;
FordSteerTqDstbcRejctnIntSts.EngMax = 4294967295;
FordSteerTqDstbcRejctnIntSts.TestTolerance = 0;
FordSteerTqDstbcRejctnIntSts.WrittenIn = {'FIH_Write_STDR_Int_Status_DID'};
FordSteerTqDstbcRejctnIntSts.WriteType = 'Rte';


FordSteerTqDstbcRejctnTqReq = DataDict.OpSignal;
FordSteerTqDstbcRejctnTqReq.LongName = 'Ford Steering Torque Disturbance Rejection Torque Request';
FordSteerTqDstbcRejctnTqReq.Description = [...
  'This signal is used to write the value of Ford Steering Torque Disturb' ...
  'anceRejection Torque Request'];
FordSteerTqDstbcRejctnTqReq.DocUnits = 'HwNwtMtr';
FordSteerTqDstbcRejctnTqReq.SwcShoName = 'FordBlaBoxIfCmp2';
FordSteerTqDstbcRejctnTqReq.EngDT = dt.float32;
FordSteerTqDstbcRejctnTqReq.EngInit = 0;
FordSteerTqDstbcRejctnTqReq.EngMin = -32;
FordSteerTqDstbcRejctnTqReq.EngMax = 31.99902344;
FordSteerTqDstbcRejctnTqReq.TestTolerance = 0.0009765625;
FordSteerTqDstbcRejctnTqReq.WrittenIn = {'FIH_Write_STDR_Arbiter'};
FordSteerTqDstbcRejctnTqReq.WriteType = 'Rte';


FordSteerTqDstbcRejctnSwVers = DataDict.OpSignal;
FordSteerTqDstbcRejctnSwVers.LongName = ' Ford Steering Torque Disturbance Rejection Software Version';
FordSteerTqDstbcRejctnSwVers.Description = [...
  'This signal is used to write the value of  Ford Steering TorqueDisturb' ...
  'ance Rejection Software Version to memory'];
FordSteerTqDstbcRejctnSwVers.DocUnits = 'Cnt';
FordSteerTqDstbcRejctnSwVers.SwcShoName = 'FordBlaBoxIfCmp2';
FordSteerTqDstbcRejctnSwVers.EngDT = dt.u32;
FordSteerTqDstbcRejctnSwVers.EngInit = 0;
FordSteerTqDstbcRejctnSwVers.EngMin = 0;
FordSteerTqDstbcRejctnSwVers.EngMax = 4294967295;
FordSteerTqDstbcRejctnSwVers.TestTolerance = 1;
FordSteerTqDstbcRejctnSwVers.WrittenIn = {'FIH_Write_STDR_SW_Version'};
FordSteerTqDstbcRejctnSwVers.WriteType = 'Rte';


FordTqSteerCmpActvnCntr = DataDict.OpSignal;
FordTqSteerCmpActvnCntr.LongName = 'Ford Torque Steer Compensation Activation Counter';
FordTqSteerCmpActvnCntr.Description = [...
  'This signal is used to write the value of Ford Torque SteerCompensatio' ...
  'n Activation Counter'];
FordTqSteerCmpActvnCntr.DocUnits = 'Cnt';
FordTqSteerCmpActvnCntr.SwcShoName = 'FordBlaBoxIfCmp2';
FordTqSteerCmpActvnCntr.EngDT = dt.u16;
FordTqSteerCmpActvnCntr.EngInit = 0;
FordTqSteerCmpActvnCntr.EngMin = 0;
FordTqSteerCmpActvnCntr.EngMax = 65535;
FordTqSteerCmpActvnCntr.TestTolerance = 0;
FordTqSteerCmpActvnCntr.WrittenIn = {'FIH_Write_TSC_Activation_Cnt'};
FordTqSteerCmpActvnCntr.WriteType = 'Rte';


FordVehEvasSteerAssiSts = DataDict.OpSignal;
FordVehEvasSteerAssiSts.LongName = 'Ford Vehicle Evasive Steering Assist Status';
FordVehEvasSteerAssiSts.Description = [...
  'Provides the status for Vehicle Evasive Steering Assist'];
FordVehEvasSteerAssiSts.DocUnits = 'Cnt';
FordVehEvasSteerAssiSts.SwcShoName = 'FordBlaBoxIfCmp2';
FordVehEvasSteerAssiSts.EngDT = dt.u08;
FordVehEvasSteerAssiSts.EngInit = 1;
FordVehEvasSteerAssiSts.EngMin = 0;
FordVehEvasSteerAssiSts.EngMax = 255;
FordVehEvasSteerAssiSts.TestTolerance = 0;
FordVehEvasSteerAssiSts.WrittenIn = {'FIH_Write_ESA_HS_CAN'};
FordVehEvasSteerAssiSts.WriteType = 'Rte';


%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------

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

EvasSteerAssiFctCallTog = DataDict.PIM;
EvasSteerAssiFctCallTog.LongName = 'FIH ESA function call toggle switch';
EvasSteerAssiFctCallTog.Description = [...
  'Used to call FIH_ESA_function in every other loop'];
EvasSteerAssiFctCallTog.DocUnits = 'Cnt';
EvasSteerAssiFctCallTog.EngDT = dt.lgc;
EvasSteerAssiFctCallTog.EngMin = 0;
EvasSteerAssiFctCallTog.EngMax = 1;
EvasSteerAssiFctCallTog.InitRowCol = [1  1];


%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ECUID1_CNT_U08 = DataDict.Constant;
ECUID1_CNT_U08.LongName = 'Ecu Identifier 1';
ECUID1_CNT_U08.Description = 'Ecu Identifier 1';
ECUID1_CNT_U08.DocUnits = 'Cnt';
ECUID1_CNT_U08.EngDT = dt.u08;
ECUID1_CNT_U08.EngVal = 1;
ECUID1_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
