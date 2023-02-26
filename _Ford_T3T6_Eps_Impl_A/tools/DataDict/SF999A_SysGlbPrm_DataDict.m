%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 18-Feb-2016 14:54:03       %
%                                  Created with tool release: 2.30.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF999A = DataDict.FDD;
SF999A.Version = '1.4.X';
SF999A.LongName = 'System Global Parameters';
SF999A.ShoName  = 'SysGlbPrm';
SF999A.DesignASIL = 'D';
SF999A.Description = [...
  'SF999A is a global collection of calibrations and constants that commo' ...
  'nly get shared across software components.'];
SF999A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------

%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmMotPoleCnt = DataDict.Calibration;
SysGlbPrmMotPoleCnt.LongName = 'Motor Pole Count';
SysGlbPrmMotPoleCnt.Description = [...
  'Number of electrical poles in motor.'];
SysGlbPrmMotPoleCnt.DocUnits = 'Cnt';
SysGlbPrmMotPoleCnt.EngDT = dt.u08;
SysGlbPrmMotPoleCnt.EngVal = 6;
SysGlbPrmMotPoleCnt.EngMin = 2;
SysGlbPrmMotPoleCnt.EngMax = 12;
SysGlbPrmMotPoleCnt.Cardinality = 'Inin';
SysGlbPrmMotPoleCnt.CustomerVisible = false;
SysGlbPrmMotPoleCnt.Online = false;
SysGlbPrmMotPoleCnt.Impact = 'H';
SysGlbPrmMotPoleCnt.TuningOwner = 'CSE';
SysGlbPrmMotPoleCnt.GraphLink = {''};
SysGlbPrmMotPoleCnt.Monotony = 'None';
SysGlbPrmMotPoleCnt.MaxGrad = 0;
SysGlbPrmMotPoleCnt.PortName = 'SysGlbPrmMotPoleCnt';


SysGlbPrmSysKineRat = DataDict.Calibration;
SysGlbPrmSysKineRat.LongName = 'System Kinematic Ratio';
SysGlbPrmSysKineRat.Description = [...
  'Kinematic ratio between handwheel and motor.'];
SysGlbPrmSysKineRat.DocUnits = 'MotDegPerHwDeg';
SysGlbPrmSysKineRat.EngDT = dt.float32;
SysGlbPrmSysKineRat.EngVal = 22;
SysGlbPrmSysKineRat.EngMin = 10;
SysGlbPrmSysKineRat.EngMax = 40;
SysGlbPrmSysKineRat.Cardinality = 'Inin';
SysGlbPrmSysKineRat.CustomerVisible = false;
SysGlbPrmSysKineRat.Online = false;
SysGlbPrmSysKineRat.Impact = 'H';
SysGlbPrmSysKineRat.TuningOwner = 'CSE';
SysGlbPrmSysKineRat.GraphLink = {''};
SysGlbPrmSysKineRat.Monotony = 'None';
SysGlbPrmSysKineRat.MaxGrad = 0;
SysGlbPrmSysKineRat.PortName = 'SysGlbPrmSysKineRat';


SysGlbPrmSysTqRat = DataDict.Calibration;
SysGlbPrmSysTqRat.LongName = 'System Torque Ratio';
SysGlbPrmSysTqRat.Description = [...
  'Ratio between handwheel torque and motor torque.'];
SysGlbPrmSysTqRat.DocUnits = 'HwNwtMtrPerMotNwtMtr';
SysGlbPrmSysTqRat.EngDT = dt.float32;
SysGlbPrmSysTqRat.EngVal = 20;
SysGlbPrmSysTqRat.EngMin = 10;
SysGlbPrmSysTqRat.EngMax = 40;
SysGlbPrmSysTqRat.Cardinality = 'Inin';
SysGlbPrmSysTqRat.CustomerVisible = false;
SysGlbPrmSysTqRat.Online = false;
SysGlbPrmSysTqRat.Impact = 'H';
SysGlbPrmSysTqRat.TuningOwner = 'CSE';
SysGlbPrmSysTqRat.GraphLink = {''};
SysGlbPrmSysTqRat.Monotony = 'None';
SysGlbPrmSysTqRat.MaxGrad = 0;
SysGlbPrmSysTqRat.PortName = 'SysGlbPrmSysTqRat';


SysGlbPrmTorsBarStfn = DataDict.Calibration;
SysGlbPrmTorsBarStfn.LongName = 'Torsion Bar Stiffness';
SysGlbPrmTorsBarStfn.Description = 'T-bar stiffness, Nm/deg';
SysGlbPrmTorsBarStfn.DocUnits = 'HwNwtMtrPerHwDeg';
SysGlbPrmTorsBarStfn.EngDT = dt.float32;
SysGlbPrmTorsBarStfn.EngVal = 2.5;
SysGlbPrmTorsBarStfn.EngMin = 0.5;
SysGlbPrmTorsBarStfn.EngMax = 10;
SysGlbPrmTorsBarStfn.Cardinality = 'Inin';
SysGlbPrmTorsBarStfn.CustomerVisible = false;
SysGlbPrmTorsBarStfn.Online = false;
SysGlbPrmTorsBarStfn.Impact = 'H';
SysGlbPrmTorsBarStfn.TuningOwner = 'CSE';
SysGlbPrmTorsBarStfn.GraphLink = {''};
SysGlbPrmTorsBarStfn.Monotony = 'None';
SysGlbPrmTorsBarStfn.MaxGrad = 0;
SysGlbPrmTorsBarStfn.PortName = 'SysGlbPrmTorsBarStfn';


SysGlbPrmVehSpdBilnrSeln = DataDict.Calibration;
SysGlbPrmVehSpdBilnrSeln.LongName = 'Vehicle Speed Bilinear Selection';
SysGlbPrmVehSpdBilnrSeln.Description = [...
  '1-D vehicle speed table.  12 tuning points, common to multiple functio' ...
  'ns.'];
SysGlbPrmVehSpdBilnrSeln.DocUnits = 'Kph';
SysGlbPrmVehSpdBilnrSeln.EngDT = dt.u9p7;
SysGlbPrmVehSpdBilnrSeln.EngVal =  ...
   [0                5               15               30               60               80              100              120              150              180              200              220];
SysGlbPrmVehSpdBilnrSeln.EngMin = 0;
SysGlbPrmVehSpdBilnrSeln.EngMax = 511;
SysGlbPrmVehSpdBilnrSeln.Cardinality = 'Inin';
SysGlbPrmVehSpdBilnrSeln.CustomerVisible = false;
SysGlbPrmVehSpdBilnrSeln.Online = false;
SysGlbPrmVehSpdBilnrSeln.Impact = 'H';
SysGlbPrmVehSpdBilnrSeln.TuningOwner = 'CSE';
SysGlbPrmVehSpdBilnrSeln.GraphLink = {''};
SysGlbPrmVehSpdBilnrSeln.Monotony = 'Strictly_Increasing';
SysGlbPrmVehSpdBilnrSeln.MaxGrad = 511;
SysGlbPrmVehSpdBilnrSeln.PortName = 'SysGlbPrmVehSpdBilnrSeln';



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
SYSGLBPRM_HWAGHILIM_HWDEG_F32 = DataDict.Constant;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.LongName = 'Handwheel Angle High Limit';
SYSGLBPRM_HWAGHILIM_HWDEG_F32.Description = [...
  'Limit on the maximum value allowed for Handwheel Angle.'];
SYSGLBPRM_HWAGHILIM_HWDEG_F32.DocUnits = 'HwDeg';
SYSGLBPRM_HWAGHILIM_HWDEG_F32.EngDT = dt.float32;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.EngVal = 1440;
SYSGLBPRM_HWAGHILIM_HWDEG_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_HWAGHILIM_HWDEG_F32.Define = 'Global';


SYSGLBPRM_HWAGLOLIM_HWDEG_F32 = DataDict.Constant;
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.LongName = 'Handwheel Angle Low Limit';
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.Description = [...
  'Limit on the minimum value allowed for Handwheel Angle'];
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.DocUnits = 'HwDeg';
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.EngDT = dt.float32;
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.EngVal = -1440;
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_HWAGLOLIM_HWDEG_F32.Define = 'Global';


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
