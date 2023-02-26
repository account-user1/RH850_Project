%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jan-2016 11:14:09       %
%                                  Created with tool release: 2.29.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF041A = DataDict.FDD;
SF041A.Version = '1.1.X';
SF041A.LongName = 'Compliance Error';
SF041A.ShoName  = 'CmplncErr';
SF041A.DesignASIL = 'D';
SF041A.Description = [...
  'This function calculates the compliance error that can be used to comp' ...
  'ensate force and stiffness in the torque path between the motor positi' ...
  'on sensor and column axis.'];
SF041A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
CmplncErrInit1 = DataDict.Runnable;
CmplncErrInit1.Context = 'Rte';
CmplncErrInit1.TimeStep = 0;

CmplncErrPer1 = DataDict.Runnable;
CmplncErrPer1.Context = 'Rte';
CmplncErrPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'CmplncErrPer1'};
HwTq.ReadType = 'Rte';


MotTqCmdCrf = DataDict.IpSignal;
MotTqCmdCrf.LongName = 'Torque Command Column Reference Frame';
MotTqCmdCrf.DocUnits = 'MotNwtMtr';
MotTqCmdCrf.EngDT = dt.float32;
MotTqCmdCrf.EngInit = 0;
MotTqCmdCrf.EngMin = -8.8;
MotTqCmdCrf.EngMax = 8.8;
MotTqCmdCrf.ReadIn = {'CmplncErrPer1'};
MotTqCmdCrf.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
CmplncErrMotToPinion = DataDict.OpSignal;
CmplncErrMotToPinion.LongName = 'Compliance Error Motor to Pinion';
CmplncErrMotToPinion.Description = [...
  'Lost motion between motor and Pinion'];
CmplncErrMotToPinion.DocUnits = 'HwDeg';
CmplncErrMotToPinion.SwcShoName = 'CmplncErr';
CmplncErrMotToPinion.EngDT = dt.float32;
CmplncErrMotToPinion.EngInit = 0;
CmplncErrMotToPinion.EngMin = -5;
CmplncErrMotToPinion.EngMax = 5;
CmplncErrMotToPinion.TestTolerance = 0.004;
CmplncErrMotToPinion.WrittenIn = {'CmplncErrPer1'};
CmplncErrMotToPinion.WriteType = 'Rte';


CmplncErrPinionToHw = DataDict.OpSignal;
CmplncErrPinionToHw.LongName = 'Compliance Error Pinion to Handwheel';
CmplncErrPinionToHw.Description = [...
  'Lost motion between Pinion and Handwheel'];
CmplncErrPinionToHw.DocUnits = 'HwDeg';
CmplncErrPinionToHw.SwcShoName = 'CmplncErr';
CmplncErrPinionToHw.EngDT = dt.float32;
CmplncErrPinionToHw.EngInit = 0;
CmplncErrPinionToHw.EngMin = -15;
CmplncErrPinionToHw.EngMax = 15;
CmplncErrPinionToHw.TestTolerance = 0.004;
CmplncErrPinionToHw.WrittenIn = {'CmplncErrPer1'};
CmplncErrPinionToHw.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
CmplncErrHwAgNonLinCmplncDepTblY = DataDict.Calibration;
CmplncErrHwAgNonLinCmplncDepTblY.LongName = 'Handwheel Angle Non Linear Compliance Y';
CmplncErrHwAgNonLinCmplncDepTblY.Description = [...
  'Table representing the dependent axis for compliance factor determinat' ...
  'ion for damped worm (non-linear spring rate)'];
CmplncErrHwAgNonLinCmplncDepTblY.DocUnits = 'HwDegPerHwNwtMtr';
CmplncErrHwAgNonLinCmplncDepTblY.EngDT = dt.u1p15;
CmplncErrHwAgNonLinCmplncDepTblY.EngVal =  ...
   [0                0                0                0                0                0];
CmplncErrHwAgNonLinCmplncDepTblY.EngMin = 0;
CmplncErrHwAgNonLinCmplncDepTblY.EngMax = 1;
CmplncErrHwAgNonLinCmplncDepTblY.Cardinality = 'Inin';
CmplncErrHwAgNonLinCmplncDepTblY.CustomerVisible = false;
CmplncErrHwAgNonLinCmplncDepTblY.Online = false;
CmplncErrHwAgNonLinCmplncDepTblY.Impact = 'H';
CmplncErrHwAgNonLinCmplncDepTblY.TuningOwner = 'CSE';
CmplncErrHwAgNonLinCmplncDepTblY.GraphLink = {''};
CmplncErrHwAgNonLinCmplncDepTblY.Monotony = 'None';
CmplncErrHwAgNonLinCmplncDepTblY.MaxGrad = 1;
CmplncErrHwAgNonLinCmplncDepTblY.PortName = 'CmplncErrHwAgNonLinCmplncDepTblY';


CmplncErrHwAgNonLinCmplncIndTblX = DataDict.Calibration;
CmplncErrHwAgNonLinCmplncIndTblX.LongName = 'Handwheel Angle Non-Linear Compliance X';
CmplncErrHwAgNonLinCmplncIndTblX.Description = [...
  'X-table for assist mech path compliance.'];
CmplncErrHwAgNonLinCmplncIndTblX.DocUnits = 'HwNwtMtr';
CmplncErrHwAgNonLinCmplncIndTblX.EngDT = dt.u5p11;
CmplncErrHwAgNonLinCmplncIndTblX.EngVal =  ...
   [0              0.5              1.5                3                5                8];
CmplncErrHwAgNonLinCmplncIndTblX.EngMin = 0;
CmplncErrHwAgNonLinCmplncIndTblX.EngMax = 10;
CmplncErrHwAgNonLinCmplncIndTblX.Cardinality = 'Inin';
CmplncErrHwAgNonLinCmplncIndTblX.CustomerVisible = false;
CmplncErrHwAgNonLinCmplncIndTblX.Online = false;
CmplncErrHwAgNonLinCmplncIndTblX.Impact = 'H';
CmplncErrHwAgNonLinCmplncIndTblX.TuningOwner = 'CSE';
CmplncErrHwAgNonLinCmplncIndTblX.GraphLink = {''};
CmplncErrHwAgNonLinCmplncIndTblX.Monotony = 'Strictly_Increasing';
CmplncErrHwAgNonLinCmplncIndTblX.MaxGrad = 10;
CmplncErrHwAgNonLinCmplncIndTblX.PortName = 'CmplncErrHwAgNonLinCmplncIndTblX';


CmplncErrMotAgNonLinCmplncDepTblY = DataDict.Calibration;
CmplncErrMotAgNonLinCmplncDepTblY.LongName = 'Motor Angle Non Linear Compliance Y';
CmplncErrMotAgNonLinCmplncDepTblY.Description = [...
  'Table representing the dependent axis for compliance factor determinat' ...
  'ion for damped worm (non-linear spring rate)'];
CmplncErrMotAgNonLinCmplncDepTblY.DocUnits = 'HwDegPerMotNwtMtr';
CmplncErrMotAgNonLinCmplncDepTblY.EngDT = dt.u8p8;
CmplncErrMotAgNonLinCmplncDepTblY.EngVal =  ...
   [0                0                0                0                0                0];
CmplncErrMotAgNonLinCmplncDepTblY.EngMin = 0;
CmplncErrMotAgNonLinCmplncDepTblY.EngMax = 128;
CmplncErrMotAgNonLinCmplncDepTblY.Cardinality = 'Inin';
CmplncErrMotAgNonLinCmplncDepTblY.CustomerVisible = false;
CmplncErrMotAgNonLinCmplncDepTblY.Online = false;
CmplncErrMotAgNonLinCmplncDepTblY.Impact = 'H';
CmplncErrMotAgNonLinCmplncDepTblY.TuningOwner = 'CSE';
CmplncErrMotAgNonLinCmplncDepTblY.GraphLink = {''};
CmplncErrMotAgNonLinCmplncDepTblY.Monotony = 'None';
CmplncErrMotAgNonLinCmplncDepTblY.MaxGrad = 128;
CmplncErrMotAgNonLinCmplncDepTblY.PortName = 'CmplncErrMotAgNonLinCmplncDepTblY';


CmplncErrMotAgNonLinCmplncIndTblX = DataDict.Calibration;
CmplncErrMotAgNonLinCmplncIndTblX.LongName = 'Motor Angle Non-Linear Compliance X';
CmplncErrMotAgNonLinCmplncIndTblX.Description = [...
  'X-table for assist mech path compliance.'];
CmplncErrMotAgNonLinCmplncIndTblX.DocUnits = 'MotNwtMtr';
CmplncErrMotAgNonLinCmplncIndTblX.EngDT = dt.u5p11;
CmplncErrMotAgNonLinCmplncIndTblX.EngVal =  ...
   [0              0.5              1.5                3                5                8];
CmplncErrMotAgNonLinCmplncIndTblX.EngMin = 0;
CmplncErrMotAgNonLinCmplncIndTblX.EngMax = 8.8;
CmplncErrMotAgNonLinCmplncIndTblX.Cardinality = 'Inin';
CmplncErrMotAgNonLinCmplncIndTblX.CustomerVisible = false;
CmplncErrMotAgNonLinCmplncIndTblX.Online = false;
CmplncErrMotAgNonLinCmplncIndTblX.Impact = 'H';
CmplncErrMotAgNonLinCmplncIndTblX.TuningOwner = 'CSE';
CmplncErrMotAgNonLinCmplncIndTblX.GraphLink = {''};
CmplncErrMotAgNonLinCmplncIndTblX.Monotony = 'Strictly_Increasing';
CmplncErrMotAgNonLinCmplncIndTblX.MaxGrad = 8.8;
CmplncErrMotAgNonLinCmplncIndTblX.PortName = 'CmplncErrMotAgNonLinCmplncIndTblX';



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
CMPLNCERRMOTTOPINIONMAX_HWDEG_F32 = DataDict.Constant;
CMPLNCERRMOTTOPINIONMAX_HWDEG_F32.LongName = 'Compliance Error Motor To Pinion Maximum';
CMPLNCERRMOTTOPINIONMAX_HWDEG_F32.Description = [...
  'Maximum value allowed for Compiance Error Motor To Pinion'];
CMPLNCERRMOTTOPINIONMAX_HWDEG_F32.DocUnits = 'HwDeg';
CMPLNCERRMOTTOPINIONMAX_HWDEG_F32.EngDT = dt.float32;
CMPLNCERRMOTTOPINIONMAX_HWDEG_F32.EngVal = 5;
CMPLNCERRMOTTOPINIONMAX_HWDEG_F32.Header = 'None';
CMPLNCERRMOTTOPINIONMAX_HWDEG_F32.Define = 'Local';


CMPLNCERRMOTTOPINIONMIN_HWDEG_F32 = DataDict.Constant;
CMPLNCERRMOTTOPINIONMIN_HWDEG_F32.LongName = 'Compliance Error Motor To Pinion Minimum';
CMPLNCERRMOTTOPINIONMIN_HWDEG_F32.Description = [...
  'Minimum value allowed for Compiance Error Motor To Pinion'];
CMPLNCERRMOTTOPINIONMIN_HWDEG_F32.DocUnits = 'HwDeg';
CMPLNCERRMOTTOPINIONMIN_HWDEG_F32.EngDT = dt.float32;
CMPLNCERRMOTTOPINIONMIN_HWDEG_F32.EngVal = -5;
CMPLNCERRMOTTOPINIONMIN_HWDEG_F32.Header = 'None';
CMPLNCERRMOTTOPINIONMIN_HWDEG_F32.Define = 'Local';


CMPLNCERRPINIONTOHWMAX_HWDEG_F32 = DataDict.Constant;
CMPLNCERRPINIONTOHWMAX_HWDEG_F32.LongName = 'Compliance Error Pinion To Handwheel Maximum';
CMPLNCERRPINIONTOHWMAX_HWDEG_F32.Description = [...
  'Maximum value allowed for Compiance Error Pinion To Handwheel'];
CMPLNCERRPINIONTOHWMAX_HWDEG_F32.DocUnits = 'HwDeg';
CMPLNCERRPINIONTOHWMAX_HWDEG_F32.EngDT = dt.float32;
CMPLNCERRPINIONTOHWMAX_HWDEG_F32.EngVal = 15;
CMPLNCERRPINIONTOHWMAX_HWDEG_F32.Header = 'None';
CMPLNCERRPINIONTOHWMAX_HWDEG_F32.Define = 'Local';


CMPLNCERRPINIONTOHWMIN_HWDEG_F32 = DataDict.Constant;
CMPLNCERRPINIONTOHWMIN_HWDEG_F32.LongName = 'Compliance Error Pinion To Handwheel Minimum';
CMPLNCERRPINIONTOHWMIN_HWDEG_F32.Description = [...
  'Minimum value allowed for Compiance Error Pinion To Handwheel'];
CMPLNCERRPINIONTOHWMIN_HWDEG_F32.DocUnits = 'HwDeg';
CMPLNCERRPINIONTOHWMIN_HWDEG_F32.EngDT = dt.float32;
CMPLNCERRPINIONTOHWMIN_HWDEG_F32.EngVal = -15;
CMPLNCERRPINIONTOHWMIN_HWDEG_F32.Header = 'None';
CMPLNCERRPINIONTOHWMIN_HWDEG_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
