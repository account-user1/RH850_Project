%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 23-Jun-2015 10:39:25       %
%                                  Created with tool release: 2.14.0     %
%%-----------------------------------------------------------------------%

SF035B = DataDict.FDD;
SF035B.Version = '1.0.X';
SF035B.LongName = 'Damping Path Summation';
SF035B.ShoName  = 'DampgPahSum';
SF035B.DesignASIL = 'D';
SF035B.Description = [...
  'This function is used for programs that do not need the extra features' ...
  ' of the SF35A function.'];
SF035B.Ntc = ...
	{};
SF035B.Dependencies = ...
	{'SysGlbPrm' };


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DampgPahSumPer1 = DataDict.Runnable;
DampgPahSumPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DampgCmdBas = DataDict.IpSignal;
DampgCmdBas.LongName = 'Damping Command Base';
DampgCmdBas.DocUnits = 'MotNwtMtr';
DampgCmdBas.EngDT = dt.float32;
DampgCmdBas.EngInit = 0;
DampgCmdBas.EngMin = -8.8;
DampgCmdBas.EngMax = 8.8;
DampgCmdBas.ReadIn = {'DampgPahSumPer1'};
DampgCmdBas.ReadType = 'Rte';


InertiaCmpVelCmd = DataDict.IpSignal;
InertiaCmpVelCmd.LongName = 'Inertia Compensation Velocity Command';
InertiaCmpVelCmd.DocUnits = 'MotNwtMtr';
InertiaCmpVelCmd.EngDT = dt.float32;
InertiaCmpVelCmd.EngInit = 0;
InertiaCmpVelCmd.EngMin = -8.8;
InertiaCmpVelCmd.EngMax = 8.8;
InertiaCmpVelCmd.ReadIn = {'DampgPahSumPer1'};
InertiaCmpVelCmd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DampgCmd = DataDict.OpSignal;
DampgCmd.LongName = 'Damping Command';
DampgCmd.Description = [...
  'Combined and limited motor torque commands'];
DampgCmd.DocUnits = 'MotNwtMtr';
DampgCmd.SwcShoName = 'DampgPahSum';
DampgCmd.EngDT = dt.float32;
DampgCmd.EngInit = 0;
DampgCmd.EngMin = -8.8;
DampgCmd.EngMax = 8.8;
DampgCmd.TestTolerance = 0.000488281;
DampgCmd.WrittenIn = {'DampgPahSumPer1'};
DampgCmd.WriteType = 'Rte';



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
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on low value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';


%end of Data Dictionary