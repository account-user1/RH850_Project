%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 11-Mar-2016 11:00:07       %
%                                  Created with tool release: 2.34.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF032A = DataDict.FDD;
SF032A.Version = '1.2.X';
SF032A.LongName = 'Motor Torque Command Scale';
SF032A.ShoName  = 'MotTqCmdSca';
SF032A.DesignASIL = 'D';
SF032A.Description = [...
  'The Torque Command Scale function multiplies the MRF Motor Torque Comm' ...
  'andinput signal by a calibration which is set during a manufacturing e' ...
  'nd of line calibration process. The calibration is provided to reduce ' ...
  'overall system outputtorque variation. This scaled version of the moto' ...
  'r torque command is used by SF99B - Motor control'];
SF032A.Dependencies = ...
	{'SysGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotTqCmdScaInit1 = DataDict.Runnable;
MotTqCmdScaInit1.Context = 'Rte';
MotTqCmdScaInit1.TimeStep = 0;

MotTqCmdScaPer1 = DataDict.Runnable;
MotTqCmdScaPer1.Context = 'Rte';
MotTqCmdScaPer1.TimeStep = 0.002;

GetMotTqCmdSca = DataDict.SrvRunnable;
GetMotTqCmdSca.Context = 'Rte';
GetMotTqCmdSca.Return = DataDict.CSReturn;
GetMotTqCmdSca.Return.Type = 'None';
GetMotTqCmdSca.Return.Min = [];
GetMotTqCmdSca.Return.Max = [];
GetMotTqCmdSca.Return.TestTolerance = [];
GetMotTqCmdSca.Arguments(1) = DataDict.CSArguments;
GetMotTqCmdSca.Arguments(1).Name = 'MotTqCmdSca';
GetMotTqCmdSca.Arguments(1).EngMin = 0.9;
GetMotTqCmdSca.Arguments(1).EngMax = 1.1;
GetMotTqCmdSca.Arguments(1).EngDT = dt.float32;
GetMotTqCmdSca.Arguments(1).Units = 'Uls';
GetMotTqCmdSca.Arguments(1).Direction = 'Out';
GetMotTqCmdSca.Arguments(1).InitRowCol = [1  1];

SetMotTqCmdSca = DataDict.SrvRunnable;
SetMotTqCmdSca.Context = 'Rte';
SetMotTqCmdSca.Return = DataDict.CSReturn;
SetMotTqCmdSca.Return.Type = 'None';
SetMotTqCmdSca.Return.Min = [];
SetMotTqCmdSca.Return.Max = [];
SetMotTqCmdSca.Return.TestTolerance = [];
SetMotTqCmdSca.Arguments(1) = DataDict.CSArguments;
SetMotTqCmdSca.Arguments(1).Name = 'MotTqCmdSca';
SetMotTqCmdSca.Arguments(1).EngMin = 0.9;
SetMotTqCmdSca.Arguments(1).EngMax = 1.1;
SetMotTqCmdSca.Arguments(1).EngDT = dt.float32;
SetMotTqCmdSca.Arguments(1).Units = 'Uls';
SetMotTqCmdSca.Arguments(1).Direction = 'In';
SetMotTqCmdSca.Arguments(1).InitRowCol = [1  1];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
MotTqScaFac_GetErrorStatus = DataDict.Client;
MotTqScaFac_GetErrorStatus.CallLocation = {'MotTqCmdScaInit1'};
MotTqScaFac_GetErrorStatus.Return = DataDict.CSReturn;
MotTqScaFac_GetErrorStatus.Return.Type = 'Standard';
MotTqScaFac_GetErrorStatus.Return.Min = 0;
MotTqScaFac_GetErrorStatus.Return.Max = 1;
MotTqScaFac_GetErrorStatus.Return.TestTolerance = 0;
MotTqScaFac_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MotTqScaFac_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
MotTqScaFac_GetErrorStatus.Arguments(1).EngMin = 0;
MotTqScaFac_GetErrorStatus.Arguments(1).EngMax = 8;
MotTqScaFac_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MotTqScaFac_GetErrorStatus.Arguments(1).Units = 'Cnt';
MotTqScaFac_GetErrorStatus.Arguments(1).Direction = 'Out';
MotTqScaFac_GetErrorStatus.Arguments(1).InitRowCol = [1  1];


MotTqScaFac_SetRamBlockStatus = DataDict.Client;
MotTqScaFac_SetRamBlockStatus.CallLocation = {'MotTqCmdScaInit1','SetMotTqCmdSca'};
MotTqScaFac_SetRamBlockStatus.Return = DataDict.CSReturn;
MotTqScaFac_SetRamBlockStatus.Return.Type = 'Standard';
MotTqScaFac_SetRamBlockStatus.Return.Min = 0;
MotTqScaFac_SetRamBlockStatus.Return.Max = 1;
MotTqScaFac_SetRamBlockStatus.Return.TestTolerance = 0;
MotTqScaFac_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotTqScaFac_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotTqScaFac_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotTqScaFac_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotTqScaFac_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotTqScaFac_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotTqScaFac_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotTqScaFac_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotTqCmdMrf = DataDict.IpSignal;
MotTqCmdMrf.LongName = 'Mrf Motor Torque Command';
MotTqCmdMrf.DocUnits = 'MotNwtMtr';
MotTqCmdMrf.EngDT = dt.float32;
MotTqCmdMrf.EngInit = 0;
MotTqCmdMrf.EngMin = -8.8;
MotTqCmdMrf.EngMax = 8.8;
MotTqCmdMrf.ReadIn = {'MotTqCmdScaPer1'};
MotTqCmdMrf.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotTqCmdMrfScad = DataDict.OpSignal;
MotTqCmdMrfScad.LongName = 'Mrf Motor Torque Command Scaled';
MotTqCmdMrfScad.Description = [...
  'Scaled version of Mrf Motor Torque Command'];
MotTqCmdMrfScad.DocUnits = 'MotNwtMtr';
MotTqCmdMrfScad.SwcShoName = 'MotTqCmdSca';
MotTqCmdMrfScad.EngDT = dt.float32;
MotTqCmdMrfScad.EngInit = 0;
MotTqCmdMrfScad.EngMin = -8.8;
MotTqCmdMrfScad.EngMax = 8.8;
MotTqCmdMrfScad.TestTolerance = 0.01;
MotTqCmdMrfScad.WrittenIn = {'MotTqCmdScaPer1'};
MotTqCmdMrfScad.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotTqCmdScaMax = DataDict.Calibration;
MotTqCmdScaMax.LongName = 'Motor Torque Command Scale Maximum';
MotTqCmdScaMax.Description = 'Motor Torque Command Scale Maximum';
MotTqCmdScaMax.DocUnits = 'Uls';
MotTqCmdScaMax.EngDT = dt.float32;
MotTqCmdScaMax.EngVal = 1.1;
MotTqCmdScaMax.EngMin = 1;
MotTqCmdScaMax.EngMax = 1.1;
MotTqCmdScaMax.Cardinality = 'Inin';
MotTqCmdScaMax.CustomerVisible = false;
MotTqCmdScaMax.Online = false;
MotTqCmdScaMax.Impact = 'H';
MotTqCmdScaMax.TuningOwner = 'CSE';
MotTqCmdScaMax.GraphLink = {''};
MotTqCmdScaMax.Monotony = 'None';
MotTqCmdScaMax.MaxGrad = 0;
MotTqCmdScaMax.PortName = 'MotTqCmdScaMax';


MotTqCmdScaMin = DataDict.Calibration;
MotTqCmdScaMin.LongName = 'Motor Torque Command Scale Minimum';
MotTqCmdScaMin.Description = 'Motor Torque Command Scale Minimum';
MotTqCmdScaMin.DocUnits = 'Uls';
MotTqCmdScaMin.EngDT = dt.float32;
MotTqCmdScaMin.EngVal = 0.9;
MotTqCmdScaMin.EngMin = 0.9;
MotTqCmdScaMin.EngMax = 1;
MotTqCmdScaMin.Cardinality = 'Inin';
MotTqCmdScaMin.CustomerVisible = false;
MotTqCmdScaMin.Online = false;
MotTqCmdScaMin.Impact = 'H';
MotTqCmdScaMin.TuningOwner = 'CSE';
MotTqCmdScaMin.GraphLink = {''};
MotTqCmdScaMin.Monotony = 'None';
MotTqCmdScaMin.MaxGrad = 0;
MotTqCmdScaMin.PortName = 'MotTqCmdScaMin';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
MotTqScaFac = DataDict.NVM;
MotTqScaFac.LongName = 'Motor Torque Scale Factor';
MotTqScaFac.Description = [...
  'Motor Torque Command Scale Factor NVM data'];
MotTqScaFac.DocUnits = 'Uls';
MotTqScaFac.EngDT = dt.float32;
MotTqScaFac.EngInit = [];
MotTqScaFac.EngMin = 0.9;
MotTqScaFac.EngMax = 1.1;
MotTqScaFac.CustomerVisible = false;
MotTqScaFac.Impact = 'H';
MotTqScaFac.TuningOwner = 'CSE';
MotTqScaFac.CoderInfo.Alias = '';
MotTqScaFac.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
