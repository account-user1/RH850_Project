%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 07-Jul-2017 14:27:03       %
%                                  Created with tool release: 3.0.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF056A = DataDict.FDD;
SF056A.Version = '1.0.X';
SF056A.LongName = 'Driver Torque Estimation';
SF056A.ShoName  = 'DrvrTqEstimn';
SF056A.DesignASIL = 'D';
SF056A.Description = [...
  'This function generates an estimated driver torque using Kalman filter' ...
  ' method.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DrvrTqEstimnInit1 = DataDict.Runnable;
DrvrTqEstimnInit1.Context = 'Rte';
DrvrTqEstimnInit1.TimeStep = 0;
DrvrTqEstimnInit1.Description = 'Running at initial time step';

DrvrTqEstimnPer1 = DataDict.Runnable;
DrvrTqEstimnPer1.Context = 'Rte';
DrvrTqEstimnPer1.TimeStep = 0.002;
DrvrTqEstimnPer1.Description = 'Running at Every 2 milli Second';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AssiMechPolarity = DataDict.IpSignal;
AssiMechPolarity.LongName = 'Assist Mechanism Polarity';
AssiMechPolarity.Description = 'Assist Assembly polarity';
AssiMechPolarity.DocUnits = 'Cnt';
AssiMechPolarity.EngDT = dt.s08;
AssiMechPolarity.EngInit = 1;
AssiMechPolarity.EngMin = -1;
AssiMechPolarity.EngMax = 1;
AssiMechPolarity.ReadIn = {'DrvrTqEstimnPer1'};
AssiMechPolarity.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Measurement of Handwheel Angle';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'DrvrTqEstimnPer1'};
HwAg.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Measurement of Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'DrvrTqEstimnPer1'};
HwTq.ReadType = 'Rte';


MotTqCmdPwrLimd = DataDict.IpSignal;
MotTqCmdPwrLimd.LongName = 'Motor Torque Command Power Limited';
MotTqCmdPwrLimd.Description = [...
  'Limited version of Motor Torque Command'];
MotTqCmdPwrLimd.DocUnits = 'MotNwtMtr';
MotTqCmdPwrLimd.EngDT = dt.float32;
MotTqCmdPwrLimd.EngInit = 0;
MotTqCmdPwrLimd.EngMin = -8.8;
MotTqCmdPwrLimd.EngMax = 8.8;
MotTqCmdPwrLimd.ReadIn = {'DrvrTqEstimnPer1'};
MotTqCmdPwrLimd.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity CRF';
MotVelCrf.Description = [...
  'Measurement of motor velocity in CRF'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'DrvrTqEstimnPer1'};
MotVelCrf.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DrvrTqEstimd = DataDict.OpSignal;
DrvrTqEstimd.LongName = 'Driver Torque Estimated';
DrvrTqEstimd.Description = 'Estimated Driver Torque';
DrvrTqEstimd.DocUnits = 'HwNwtMtr';
DrvrTqEstimd.SwcShoName = 'DrvrTqEstimn';
DrvrTqEstimd.EngDT = dt.float32;
DrvrTqEstimd.EngInit = 0;
DrvrTqEstimd.EngMin = -10;
DrvrTqEstimd.EngMax = 10;
DrvrTqEstimd.TestTolerance = 0.000488281;
DrvrTqEstimd.WrittenIn = {'DrvrTqEstimnPer1'};
DrvrTqEstimd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
DrvrTqEstimnMtrxA = DataDict.Calibration;
DrvrTqEstimnMtrxA.LongName = 'Driver Torque Matrix A';
DrvrTqEstimnMtrxA.Description = [...
  'The A matrix of driver torque observer state-space model'];
DrvrTqEstimnMtrxA.DocUnits = 'Uls';
DrvrTqEstimnMtrxA.EngDT = dt.float32;
DrvrTqEstimnMtrxA.EngVal =  ...
   [-0.17159       0.00010352           1.1696       0.00024516       1.9834e-05
    -240.58         0.060289           240.53          0.17028         0.047148
    0.0018246      -4.2826e-06          0.99616       0.00025897      -2.8965e-07
    -6.1943         0.014635           5.9127          0.11656       0.00098854
    -70.875         -0.28572            70.86         0.053221          0.98679];
DrvrTqEstimnMtrxA.EngMin = -10000;
DrvrTqEstimnMtrxA.EngMax = 10000;
DrvrTqEstimnMtrxA.Cardinality = 'Cmn';
DrvrTqEstimnMtrxA.CustomerVisible = false;
DrvrTqEstimnMtrxA.Online = false;
DrvrTqEstimnMtrxA.Impact = 'H';
DrvrTqEstimnMtrxA.TuningOwner = 'CSE';
DrvrTqEstimnMtrxA.GraphLink = {''};
DrvrTqEstimnMtrxA.Monotony = 'None';
DrvrTqEstimnMtrxA.MaxGrad = 20000;
DrvrTqEstimnMtrxA.PortName = 'DrvrTqEstimnMtrxA';


DrvrTqEstimnMtrxB = DataDict.Calibration;
DrvrTqEstimnMtrxB.LongName = 'Driver Torque Matrix B';
DrvrTqEstimnMtrxB.Description = [...
  'The B matrix of driver torque observer state-space model'];
DrvrTqEstimnMtrxB.DocUnits = 'Uls';
DrvrTqEstimnMtrxB.EngDT = dt.float32;
DrvrTqEstimnMtrxB.EngVal =  ...
   [3.2994e-07        0.0081464        0.0019034        0.0016485
    0.00045434           1.6329        0.0015119          0.76734
    1.1488e-06      -2.4566e-05        0.0019002         0.001743
    0.0027499         0.045004       0.00025007          0.86756
    0.0001448          0.50816      -2.5948e-05          0.23299];
DrvrTqEstimnMtrxB.EngMin = -10000;
DrvrTqEstimnMtrxB.EngMax = 10000;
DrvrTqEstimnMtrxB.Cardinality = 'Cmn';
DrvrTqEstimnMtrxB.CustomerVisible = false;
DrvrTqEstimnMtrxB.Online = false;
DrvrTqEstimnMtrxB.Impact = 'H';
DrvrTqEstimnMtrxB.TuningOwner = 'CSE';
DrvrTqEstimnMtrxB.GraphLink = {''};
DrvrTqEstimnMtrxB.Monotony = 'None';
DrvrTqEstimnMtrxB.MaxGrad = 20000;
DrvrTqEstimnMtrxB.PortName = 'DrvrTqEstimnMtrxB';


DrvrTqEstimnMtrxC = DataDict.Calibration;
DrvrTqEstimnMtrxC.LongName = 'Driver Torque Matrix C';
DrvrTqEstimnMtrxC.Description = [...
  'The C matrix of driver torque observer state-space model'];
DrvrTqEstimnMtrxC.DocUnits = 'Uls';
DrvrTqEstimnMtrxC.EngDT = dt.float32;
DrvrTqEstimnMtrxC.EngVal =  ...
   [0                0                0                0                1];
DrvrTqEstimnMtrxC.EngMin = -10000;
DrvrTqEstimnMtrxC.EngMax = 10000;
DrvrTqEstimnMtrxC.Cardinality = 'Cmn';
DrvrTqEstimnMtrxC.CustomerVisible = false;
DrvrTqEstimnMtrxC.Online = false;
DrvrTqEstimnMtrxC.Impact = 'H';
DrvrTqEstimnMtrxC.TuningOwner = 'CSE';
DrvrTqEstimnMtrxC.GraphLink = {''};
DrvrTqEstimnMtrxC.Monotony = 'None';
DrvrTqEstimnMtrxC.MaxGrad = 20000;
DrvrTqEstimnMtrxC.PortName = 'DrvrTqEstimnMtrxC';


DrvrTqEstimnMtrxD = DataDict.Calibration;
DrvrTqEstimnMtrxD.LongName = 'Driver Torque Matrix D';
DrvrTqEstimnMtrxD.Description = [...
  'The D matrix of driver torque observer state-space model'];
DrvrTqEstimnMtrxD.DocUnits = 'Uls';
DrvrTqEstimnMtrxD.EngDT = dt.float32;
DrvrTqEstimnMtrxD.EngVal =  ...
   [0                0                0                0];
DrvrTqEstimnMtrxD.EngMin = -10000;
DrvrTqEstimnMtrxD.EngMax = 10000;
DrvrTqEstimnMtrxD.Cardinality = 'Cmn';
DrvrTqEstimnMtrxD.CustomerVisible = false;
DrvrTqEstimnMtrxD.Online = false;
DrvrTqEstimnMtrxD.Impact = 'H';
DrvrTqEstimnMtrxD.TuningOwner = 'CSE';
DrvrTqEstimnMtrxD.GraphLink = {''};
DrvrTqEstimnMtrxD.Monotony = 'None';
DrvrTqEstimnMtrxD.MaxGrad = 20000;
DrvrTqEstimnMtrxD.PortName = 'DrvrTqEstimnMtrxD';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmSysKineRat = DataDict.ImprtdCal;
SysGlbPrmSysKineRat.DocUnits = 'MotDegPerHwDeg';
SysGlbPrmSysKineRat.EngDT = dt.float32;
SysGlbPrmSysKineRat.EngVal = 22;
SysGlbPrmSysKineRat.EngMin = 10;
SysGlbPrmSysKineRat.EngMax = 40;
SysGlbPrmSysKineRat.PortName = 'SysGlbPrmSysKineRat';
SysGlbPrmSysKineRat.Description = [...
  'Kinematic ratio between handwheel and motor'];


SysGlbPrmSysTqRat = DataDict.ImprtdCal;
SysGlbPrmSysTqRat.DocUnits = 'HwNwtMtrPerMotNwtMtr';
SysGlbPrmSysTqRat.EngDT = dt.float32;
SysGlbPrmSysTqRat.EngVal = 20;
SysGlbPrmSysTqRat.EngMin = 10;
SysGlbPrmSysTqRat.EngMax = 40;
SysGlbPrmSysTqRat.PortName = 'SysGlbPrmSysTqRat';
SysGlbPrmSysTqRat.Description = [...
  'Ratio between handwheel and motor, with consideration given to load-de' ...
  'pendent losses. Generally set as TrqRatio = KinRatio * Efficiency.'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
DrvrTqStPrev = DataDict.PIM;
DrvrTqStPrev.LongName = 'Driver Torque State Previous';
DrvrTqStPrev.Description = [...
  'To get the previous state of deriver torue'];
DrvrTqStPrev.DocUnits = 'Uls';
DrvrTqStPrev.EngDT = dt.float32;
DrvrTqStPrev.EngMin = -420;
DrvrTqStPrev.EngMax = 420;
DrvrTqStPrev.InitRowCol = [5  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
AGESTIMDLOWRLIM_HWRAD_F32 = DataDict.Constant;
AGESTIMDLOWRLIM_HWRAD_F32.LongName = 'Angle Estimated Lower Limit';
AGESTIMDLOWRLIM_HWRAD_F32.Description = [...
  'It limits the minimum value of the state of angle in the calculation o' ...
  'f estimated driver torque.'];
AGESTIMDLOWRLIM_HWRAD_F32.DocUnits = 'HwRad';
AGESTIMDLOWRLIM_HWRAD_F32.EngDT = dt.float32;
AGESTIMDLOWRLIM_HWRAD_F32.EngVal = -252;
AGESTIMDLOWRLIM_HWRAD_F32.Define = 'Local';


AGESTIMDUPPRLIM_HWRAD_F32 = DataDict.Constant;
AGESTIMDUPPRLIM_HWRAD_F32.LongName = 'Angle Estimated Upper Limit';
AGESTIMDUPPRLIM_HWRAD_F32.Description = [...
  'It limits the maximum value of the state of angle in the calculation o' ...
  'f estimated driver torque.'];
AGESTIMDUPPRLIM_HWRAD_F32.DocUnits = 'HwRad';
AGESTIMDUPPRLIM_HWRAD_F32.EngDT = dt.float32;
AGESTIMDUPPRLIM_HWRAD_F32.EngVal = 252;
AGESTIMDUPPRLIM_HWRAD_F32.Define = 'Local';


ARCHGLBPRM_PIOVER180_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVER180_ULS_F32.LongName = 'Pi Over 180 Degrees';
ARCHGLBPRM_PIOVER180_ULS_F32.Description = 'Pi divided by 180 ';
ARCHGLBPRM_PIOVER180_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVER180_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVER180_ULS_F32.EngVal = 0.017453293;
ARCHGLBPRM_PIOVER180_ULS_F32.Define = 'Global';


ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Lower Limit';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value min limit to -10'];
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngVal = -10;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Upper Limit';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value max limit to 10'];
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Define = 'Global';


TQESTIMDLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
TQESTIMDLOWRLIM_HWNWTMTR_F32.LongName = 'Torque Estimated Lower Limit';
TQESTIMDLOWRLIM_HWNWTMTR_F32.Description = [...
  'It limits on the minimum value of the state of driver torque in the ca' ...
  'lculation of estimated driver torque.'];
TQESTIMDLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
TQESTIMDLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
TQESTIMDLOWRLIM_HWNWTMTR_F32.EngVal = -100;
TQESTIMDLOWRLIM_HWNWTMTR_F32.Define = 'Local';


TQESTIMDUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
TQESTIMDUPPRLIM_HWNWTMTR_F32.LongName = 'Torque Estimated Upper Limit';
TQESTIMDUPPRLIM_HWNWTMTR_F32.Description = [...
  'It limits on the maximum value of the state of driver torque in the ca' ...
  'lculation of estimated driver torque.'];
TQESTIMDUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
TQESTIMDUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
TQESTIMDUPPRLIM_HWNWTMTR_F32.EngVal = 100;
TQESTIMDUPPRLIM_HWNWTMTR_F32.Define = 'Local';


VELESTIMDLOWRLIM_HWRADPERSEC_F32 = DataDict.Constant;
VELESTIMDLOWRLIM_HWRADPERSEC_F32.LongName = 'Velocity Estimated Lower Limit';
VELESTIMDLOWRLIM_HWRADPERSEC_F32.Description = [...
  'It limits on the minimum value of the state of velocity in the calcula' ...
  'tion of estimated driver torque  '];
VELESTIMDLOWRLIM_HWRADPERSEC_F32.DocUnits = 'HwRadPerSec';
VELESTIMDLOWRLIM_HWRADPERSEC_F32.EngDT = dt.float32;
VELESTIMDLOWRLIM_HWRADPERSEC_F32.EngVal = -420;
VELESTIMDLOWRLIM_HWRADPERSEC_F32.Define = 'Local';


VELESTIMDUPPRLIM_HWRADPERSEC_F32 = DataDict.Constant;
VELESTIMDUPPRLIM_HWRADPERSEC_F32.LongName = 'Velocity Estimated Upper Limit';
VELESTIMDUPPRLIM_HWRADPERSEC_F32.Description = [...
  'It limits on the maximum value of the state of velocity in the calcula' ...
  'tion of estimated driver torque  '];
VELESTIMDUPPRLIM_HWRADPERSEC_F32.DocUnits = 'HwRadPerSec';
VELESTIMDUPPRLIM_HWRADPERSEC_F32.EngDT = dt.float32;
VELESTIMDUPPRLIM_HWRADPERSEC_F32.EngVal = 420;
VELESTIMDUPPRLIM_HWRADPERSEC_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
