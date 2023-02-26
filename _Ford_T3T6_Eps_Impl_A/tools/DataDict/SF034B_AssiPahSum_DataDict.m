%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 23-Jun-2015 10:31:36       %
%                                  Created with tool release: 2.14.0     %
%%-----------------------------------------------------------------------%

SF034B = DataDict.FDD;
SF034B.Version = '1.0.X';
SF034B.LongName = 'Assist Path Summation';
SF034B.ShoName  = 'AssiPahSum';
SF034B.DesignASIL = 'D';
SF034B.Description = [...
  'This function just merges command signals, and is used for vehicle pro' ...
  'grams that do not need the extra features of the SF034A firewall funct' ...
  'ion.'];
SF034B.Ntc = ...
	{};
SF034B.Dependencies = ...
	{'SysGlbPrm' };


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
AssiPahSumPer1 = DataDict.Runnable;
AssiPahSumPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AssiCmdBas = DataDict.IpSignal;
AssiCmdBas.LongName = 'Base Assist Command';
AssiCmdBas.DocUnits = 'MotNwtMtr';
AssiCmdBas.EngDT = dt.float32;
AssiCmdBas.EngInit = 0;
AssiCmdBas.EngMin = -8.8;
AssiCmdBas.EngMax = 8.8;
AssiCmdBas.ReadIn = {'AssiPahSumPer1'};
AssiCmdBas.ReadType = 'Rte';


AssiHiFrqCmd = DataDict.IpSignal;
AssiHiFrqCmd.LongName = 'High Frequency Assist Command';
AssiHiFrqCmd.DocUnits = 'MotNwtMtr';
AssiHiFrqCmd.EngDT = dt.float32;
AssiHiFrqCmd.EngInit = 0;
AssiHiFrqCmd.EngMin = -8.8;
AssiHiFrqCmd.EngMax = 8.8;
AssiHiFrqCmd.ReadIn = {'AssiPahSumPer1'};
AssiHiFrqCmd.ReadType = 'Rte';


HysCmpCmd = DataDict.IpSignal;
HysCmpCmd.LongName = 'Hysteresis Compensation Command';
HysCmpCmd.DocUnits = 'MotNwtMtr';
HysCmpCmd.EngDT = dt.float32;
HysCmpCmd.EngInit = 0;
HysCmpCmd.EngMin = -8.8;
HysCmpCmd.EngMax = 8.8;
HysCmpCmd.ReadIn = {'AssiPahSumPer1'};
HysCmpCmd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
AssiCmdSum = DataDict.OpSignal;
AssiCmdSum.LongName = 'Combined Assist Summation';
AssiCmdSum.Description = [...
  'Combined and limited motor torque commands.'];
AssiCmdSum.DocUnits = 'MotNwtMtr';
AssiCmdSum.SwcShoName = 'AssiPahSum';
AssiCmdSum.EngDT = dt.float32;
AssiCmdSum.EngInit = 0;
AssiCmdSum.EngMin = -8.8;
AssiCmdSum.EngMax = 8.8;
AssiCmdSum.TestTolerance = 0.000488281;
AssiCmdSum.WrittenIn = {'AssiPahSumPer1'};
AssiCmdSum.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
AssiPahSumHysCmpLim = DataDict.Calibration;
AssiPahSumHysCmpLim.LongName = 'Hysteresis Compensation Limit';
AssiPahSumHysCmpLim.Description = [...
  'Safety-driven saturation limit applied to Hysteresis Compensation inpu' ...
  't.  Tunable to support safety case of various vehicle programs.'];
AssiPahSumHysCmpLim.DocUnits = 'MotNwtMtr';
AssiPahSumHysCmpLim.EngDT = dt.float32;
AssiPahSumHysCmpLim.EngVal = 0.2;
AssiPahSumHysCmpLim.EngMin = 0;
AssiPahSumHysCmpLim.EngMax = 0.3;
AssiPahSumHysCmpLim.ProgrammedBy = 'Nexteer';
AssiPahSumHysCmpLim.Cardinality = 'I';
AssiPahSumHysCmpLim.CustomerVisible = false;
AssiPahSumHysCmpLim.Online = false;
AssiPahSumHysCmpLim.Impact = 'H';
AssiPahSumHysCmpLim.TuningOwner = 'Safety';
AssiPahSumHysCmpLim.GraphLink = '';
AssiPahSumHysCmpLim.Monotony = 'None';
AssiPahSumHysCmpLim.MaxGrad = 999;
AssiPahSumHysCmpLim.CoderInfo.CustomAttributes.PortName = 'AssiPahSumHysCmpLim';



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