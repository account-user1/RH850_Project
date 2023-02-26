%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 14-Jun-2016 15:57:01       %
%                                  Created with tool release: 2.41.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF023A = DataDict.FDD;
SF023A.Version = '1.1.X';
SF023A.LongName = 'Tuning Selection Authority';
SF023A.ShoName  = 'TunSelnAuthy';
SF023A.DesignASIL = 'B';
SF023A.Description = [...
  'This function ensures driving conditions are appropriate to switch bet' ...
  'ween calibration subsets. It compares handwheel torque and vehiclespee' ...
  'd to calibratable thresholds and either grants or denies a requested c' ...
  'hange in either tuning set or tuning personality.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
TunSelnAuthyInit1 = DataDict.Runnable;
TunSelnAuthyInit1.Context = 'Rte';
TunSelnAuthyInit1.TimeStep = 0;
TunSelnAuthyInit1.Description = [...
  'Initialization Runnable for Tuning Selection Authority.'];

RtCalChgReq = DataDict.SrvRunnable;
RtCalChgReq.Context = 'Rte';
RtCalChgReq.Description = 'Runtime Request Status';
RtCalChgReq.Return = DataDict.CSReturn;
RtCalChgReq.Return.Type = 'Standard';
RtCalChgReq.Return.Min = 0;
RtCalChgReq.Return.Max = 1;
RtCalChgReq.Return.TestTolerance = 0;
RtCalChgReq.Return.Description = [...
  'Runtime Request Standard Return Value'];

XcpCalChgReq = DataDict.SrvRunnable;
XcpCalChgReq.Context = 'Rte';
XcpCalChgReq.Description = 'XCP Request Status';
XcpCalChgReq.Return = DataDict.CSReturn;
XcpCalChgReq.Return.Type = 'Standard';
XcpCalChgReq.Return.Min = 0;
XcpCalChgReq.Return.Max = 1;
XcpCalChgReq.Return.TestTolerance = 0;
XcpCalChgReq.Return.Description = 'XCP Request Standard Return Value';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque input signal';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'RtCalChgReq'};
HwTq.ReadType = 'Rte';


HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = 'Handwheel Velocity';
HwVel.DocUnits = 'HwRadPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'RtCalChgReq'};
HwVel.ReadType = 'Rte';


TunSelnRtDi = DataDict.IpSignal;
TunSelnRtDi.LongName = 'Tuning Selection Runtime Disable';
TunSelnRtDi.Description = [...
  'This is a Tuning Selection Disable switch which toggles based on diffe' ...
  'rent system paramters like Driver mode control, Active Pull compensati' ...
  'on, WIR, APA etc.. TRUE = Tuning Selection Disabled. FALSE = Tuning Se' ...
  'lection Enabled.'];
TunSelnRtDi.DocUnits = 'Cnt';
TunSelnRtDi.EngDT = dt.lgc;
TunSelnRtDi.EngInit = 0;
TunSelnRtDi.EngMin = 0;
TunSelnRtDi.EngMax = 1;
TunSelnRtDi.ReadIn = {'RtCalChgReq'};
TunSelnRtDi.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed input signal';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'RtCalChgReq','XcpCalChgReq'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
TunSelnAuthyHwTqY = DataDict.Calibration;
TunSelnAuthyHwTqY.LongName = 'Handwheel Torque Threshold';
TunSelnAuthyHwTqY.Description = [...
  'Handwheel Torque Threshold is derived as a function of Vehicle Speed a' ...
  'nd is compared with Handwheel Torque to determine whether to grant or ' ...
  'deny requested change in either tuning set or tuning personality.'];
TunSelnAuthyHwTqY.DocUnits = 'HwNwtMtr';
TunSelnAuthyHwTqY.EngDT = dt.u4p12;
TunSelnAuthyHwTqY.EngVal =  ...
   [5                5                5                5                5                5];
TunSelnAuthyHwTqY.EngMin = 0;
TunSelnAuthyHwTqY.EngMax = 10;
TunSelnAuthyHwTqY.Cardinality = 'Cmn';
TunSelnAuthyHwTqY.CustomerVisible = false;
TunSelnAuthyHwTqY.Online = false;
TunSelnAuthyHwTqY.Impact = 'M';
TunSelnAuthyHwTqY.TuningOwner = 'CSE';
TunSelnAuthyHwTqY.GraphLink = {'TunSelnAuthyVehSpdX'};
TunSelnAuthyHwTqY.Monotony = 'Decreasing';
TunSelnAuthyHwTqY.MaxGrad = 998;
TunSelnAuthyHwTqY.PortName = 'TunSelnAuthyHwTqY';


TunSelnAuthyHwVelY = DataDict.Calibration;
TunSelnAuthyHwVelY.LongName = 'Handwheel Velocity Threshold';
TunSelnAuthyHwVelY.Description = [...
  'Handwheel Velocity Threshold is derived as a function of Vehicle Speed' ...
  ' and is compared with Handwheel Velocity to determine whether to grant' ...
  ' or deny requested change in either tuning set or tuning personality.'];
TunSelnAuthyHwVelY.DocUnits = 'HwRadPerSec';
TunSelnAuthyHwVelY.EngDT = dt.u6p10;
TunSelnAuthyHwVelY.EngVal =  ...
   [20               20               20               20               20               20];
TunSelnAuthyHwVelY.EngMin = 0;
TunSelnAuthyHwVelY.EngMax = 42;
TunSelnAuthyHwVelY.Cardinality = 'Cmn';
TunSelnAuthyHwVelY.CustomerVisible = false;
TunSelnAuthyHwVelY.Online = false;
TunSelnAuthyHwVelY.Impact = 'M';
TunSelnAuthyHwVelY.TuningOwner = 'CSE';
TunSelnAuthyHwVelY.GraphLink = {'TunSelnAuthyVehSpdX'};
TunSelnAuthyHwVelY.Monotony = 'Decreasing';
TunSelnAuthyHwVelY.MaxGrad = Inf;
TunSelnAuthyHwVelY.PortName = 'TunSelnAuthyHwVelY';


TunSelnAuthyTunSelnRtDiCmd = DataDict.Calibration;
TunSelnAuthyTunSelnRtDiCmd.LongName = 'Tuning Selection Runtime Disable Command';
TunSelnAuthyTunSelnRtDiCmd.Description = [...
  'This is a Enable Disable Command to update a different set of Tuning s' ...
  'et and its personalities or to continue with the same Tuning Set & its' ...
  ' personality.'];
TunSelnAuthyTunSelnRtDiCmd.DocUnits = 'Cnt';
TunSelnAuthyTunSelnRtDiCmd.EngDT = dt.lgc;
TunSelnAuthyTunSelnRtDiCmd.EngVal = 0;
TunSelnAuthyTunSelnRtDiCmd.EngMin = 0;
TunSelnAuthyTunSelnRtDiCmd.EngMax = 1;
TunSelnAuthyTunSelnRtDiCmd.Cardinality = 'Cmn';
TunSelnAuthyTunSelnRtDiCmd.CustomerVisible = false;
TunSelnAuthyTunSelnRtDiCmd.Online = false;
TunSelnAuthyTunSelnRtDiCmd.Impact = 'M';
TunSelnAuthyTunSelnRtDiCmd.TuningOwner = 'CSE';
TunSelnAuthyTunSelnRtDiCmd.GraphLink = {''};
TunSelnAuthyTunSelnRtDiCmd.Monotony = 'None';
TunSelnAuthyTunSelnRtDiCmd.MaxGrad = Inf;
TunSelnAuthyTunSelnRtDiCmd.PortName = 'TunSelnAuthyTunSelnRtDiCmd';


TunSelnAuthyVehSpdX = DataDict.Calibration;
TunSelnAuthyVehSpdX.LongName = 'Vehicle Speed Threshold';
TunSelnAuthyVehSpdX.Description = [...
  'Handwheel Torque and Handwheel Velocity Thresholds were derived based ' ...
  'on Vehicle Speed to determine whether to grant or deny requested chang' ...
  'e in either tuning set or tuning personality.'];
TunSelnAuthyVehSpdX.DocUnits = 'Kph';
TunSelnAuthyVehSpdX.EngDT = dt.u9p7;
TunSelnAuthyVehSpdX.EngVal =  ...
   [0            100            200            300            400              511];
TunSelnAuthyVehSpdX.EngMin = 0;
TunSelnAuthyVehSpdX.EngMax = 511;
TunSelnAuthyVehSpdX.Cardinality = 'Inin';
TunSelnAuthyVehSpdX.CustomerVisible = false;
TunSelnAuthyVehSpdX.Online = false;
TunSelnAuthyVehSpdX.Impact = 'M';
TunSelnAuthyVehSpdX.TuningOwner = 'CSE';
TunSelnAuthyVehSpdX.GraphLink = {''};
TunSelnAuthyVehSpdX.Monotony = 'Strictly_Increasing';
TunSelnAuthyVehSpdX.MaxGrad = 998;
TunSelnAuthyVehSpdX.PortName = 'TunSelnAuthyVehSpdX';



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
ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


E_NOT_OK = DataDict.Constant;
E_NOT_OK.LongName = 'E Not Ok';
E_NOT_OK.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
E_NOT_OK.DocUnits = 'Cnt';
E_NOT_OK.EngDT = dt.u08;
E_NOT_OK.EngVal = 1;
E_NOT_OK.Define = 'Global';


E_OK = DataDict.Constant;
E_OK.LongName = 'E Ok';
E_OK.Description = [...
  'AUTOSAR Standard Return Type OK value'];
E_OK.DocUnits = 'Cnt';
E_OK.EngDT = dt.u08;
E_OK.EngVal = 0;
E_OK.Define = 'Global';


TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32 = DataDict.ConfigParam;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.LongName = 'XCP Vehicle Speed Threshold';
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.Description = [...
  'Vehicle Speed is compared with XCP Vehicle speed threshold to determin' ...
  'e whether to grant or deny requested change in corresponding RAM value' ...
  's.'];
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.IsBuildPrm = false;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.DocUnits = 'Kph';
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.EngDT = dt.float32;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.EngVal = 0.05;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.EngMin = 0;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.EngMax = 511;
TUNSELNAUTHY_XCPVEHSPDTHD_KPH_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
