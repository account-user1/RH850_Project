%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 29-Nov-2016 15:45:18       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF040A = DataDict.FDD;
SF040A.Version = '2.1.X';
SF040A.LongName = 'Motor Velocity';
SF040A.ShoName  = 'MotVel';
SF040A.DesignASIL = 'D';
SF040A.Description = [...
  'This function is responsible for computing the rotational velocity of ' ...
  'the motor using the motor position signal and the corresponding time-s' ...
  'tamp from the motor position function.  A field configurable assist ra' ...
  'tio value is provided to scale the motor velocity into handwheel veloc' ...
  'ity units.  The function consists of two subfunctions, with the Signal' ...
  ' Buffering subfunction running at the Motor Control ISR rate, and the ' ...
  'Velocity Computation Subfunction running at the same rate as the Assis' ...
  't Functions.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotVelInit1 = DataDict.Runnable;
MotVelInit1.Context = 'Rte';
MotVelInit1.TimeStep = 0;
MotVelInit1.Description = 'It is empty for this component.';

MotVelPer1 = DataDict.Runnable;
MotVelPer1.Context = 'NonRte';
MotVelPer1.TimeStep = 'MotorControl';
MotVelPer1.Description = [...
  'It runs in MotorControl loop and buffers MechMotAgBuf and MotCtrlMotAg' ...
  'TiBuf.'];

MotVelPer2 = DataDict.Runnable;
MotVelPer2.Context = 'Rte';
MotVelPer2.TimeStep = 0.002;
MotVelPer2.Description = [...
  'It computes the MotVelMrf,  MotVelCrf and MotVelVld.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AssiMechPolarity = DataDict.IpSignal;
AssiMechPolarity.LongName = 'Assist Mechanism Polarity';
AssiMechPolarity.Description = [...
  'Assist mechanism polarity - gear relationship.'];
AssiMechPolarity.DocUnits = 'Uls';
AssiMechPolarity.EngDT = dt.s08;
AssiMechPolarity.EngInit = 1;
AssiMechPolarity.EngMin = -1;
AssiMechPolarity.EngMax = 1;
AssiMechPolarity.ReadIn = {'MotVelPer2'};
AssiMechPolarity.ReadType = 'Rte';


MotAgBuf = DataDict.IpSignal;
MotAgBuf.LongName = 'Motor Angle Buffer';
MotAgBuf.Description = [...
  'Motor angle buffer from the motor control manager.'];
MotAgBuf.DocUnits = 'MotRev';
MotAgBuf.EngDT = dt.u0p16;
MotAgBuf.EngInit =  ...
   [0                0                0                0                0                0                0                0];
MotAgBuf.EngMin = 0;
MotAgBuf.EngMax = 0.9999847412;
MotAgBuf.ReadIn = {'MotVelPer2'};
MotAgBuf.ReadType = 'Rte';


MotAgBufIdx = DataDict.IpSignal;
MotAgBufIdx.LongName = 'Motor Angle Buffer Index';
MotAgBufIdx.Description = 'Index of the Motor Angle Buffer';
MotAgBufIdx.DocUnits = 'Cnt';
MotAgBufIdx.EngDT = dt.u08;
MotAgBufIdx.EngInit = 0;
MotAgBufIdx.EngMin = 0;
MotAgBufIdx.EngMax = 7;
MotAgBufIdx.ReadIn = {'MotVelPer2'};
MotAgBufIdx.ReadType = 'Rte';


MotAgMeclIdptSig = DataDict.IpSignal;
MotAgMeclIdptSig.LongName = 'Motor Angle Independent Signal';
MotAgMeclIdptSig.Description = [...
  'Available independent motor angle signals'];
MotAgMeclIdptSig.DocUnits = 'Cnt';
MotAgMeclIdptSig.EngDT = dt.u08;
MotAgMeclIdptSig.EngInit = 3;
MotAgMeclIdptSig.EngMin = 0;
MotAgMeclIdptSig.EngMax = 3;
MotAgMeclIdptSig.ReadIn = {'MotVelPer2'};
MotAgMeclIdptSig.ReadType = 'Rte';


MotAgTiBuf = DataDict.IpSignal;
MotAgTiBuf.LongName = 'Motor Angle Time Buffer';
MotAgTiBuf.Description = [...
  'Motor angle time buffer from the motor control manager.'];
MotAgTiBuf.DocUnits = 'MicroSec';
MotAgTiBuf.EngDT = dt.u32;
MotAgTiBuf.EngInit =  ...
   [0               62              125              187              250              312              375              437];
MotAgTiBuf.EngMin = 0;
MotAgTiBuf.EngMax = 4294967295;
MotAgTiBuf.ReadIn = {'MotVelPer2'};
MotAgTiBuf.ReadType = 'Rte';


MotCtrlMotAgBuf = DataDict.IpSignal;
MotCtrlMotAgBuf.LongName = 'Motor Control Motor Angle Buffer Signal Input';
MotCtrlMotAgBuf.Description = [...
  'Motor angle buffer from the motor control manager.'];
MotCtrlMotAgBuf.DocUnits = 'MotRev';
MotCtrlMotAgBuf.EngDT = dt.u0p16;
MotCtrlMotAgBuf.EngInit =  ...
   [0                0                0                0                0                0                0                0];
MotCtrlMotAgBuf.EngMin = 0;
MotCtrlMotAgBuf.EngMax = 0.9999847412;
MotCtrlMotAgBuf.ReadIn = {'MotVelPer1'};
MotCtrlMotAgBuf.ReadType = 'NonRte';


MotCtrlMotAgMeasTi = DataDict.IpSignal;
MotCtrlMotAgMeasTi.LongName = 'Motor Control Motor Angle Measured Time';
MotCtrlMotAgMeasTi.Description = [...
  'Measurement time of Motor Angle in counts representing uSec.'];
MotCtrlMotAgMeasTi.DocUnits = 'Cnt';
MotCtrlMotAgMeasTi.EngDT = dt.u32;
MotCtrlMotAgMeasTi.EngInit = 0;
MotCtrlMotAgMeasTi.EngMin = 0;
MotCtrlMotAgMeasTi.EngMax = 4294967295;
MotCtrlMotAgMeasTi.ReadIn = {'MotVelPer1'};
MotCtrlMotAgMeasTi.ReadType = 'NonRte';


MotCtrlMotAgMecl = DataDict.IpSignal;
MotCtrlMotAgMecl.LongName = 'Motor Control Motor Angle Mechanical';
MotCtrlMotAgMecl.Description = [...
  'Arbitrated motor angle in mechanical degrees'];
MotCtrlMotAgMecl.DocUnits = 'MotRev';
MotCtrlMotAgMecl.EngDT = dt.u0p16;
MotCtrlMotAgMecl.EngInit = 0;
MotCtrlMotAgMecl.EngMin = 0;
MotCtrlMotAgMecl.EngMax = 0.9999847412;
MotCtrlMotAgMecl.ReadIn = {'MotVelPer1'};
MotCtrlMotAgMecl.ReadType = 'NonRte';


MotCtrlMotAgTiBuf = DataDict.IpSignal;
MotCtrlMotAgTiBuf.LongName = 'Motor Control Motor Angle Time Buffer Signal Input';
MotCtrlMotAgTiBuf.Description = [...
  'Motor angle time buffer from the motor control manager.'];
MotCtrlMotAgTiBuf.DocUnits = 'MicroSec';
MotCtrlMotAgTiBuf.EngDT = dt.u32;
MotCtrlMotAgTiBuf.EngInit =  ...
   [0               62              125              187              250              312              375              437];
MotCtrlMotAgTiBuf.EngMin = 0;
MotCtrlMotAgTiBuf.EngMax = 4294967295;
MotCtrlMotAgTiBuf.ReadIn = {'MotVelPer1'};
MotCtrlMotAgTiBuf.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCtrlMotAgBufIdx = DataDict.OpSignal;
MotCtrlMotAgBufIdx.LongName = 'Motor Control Motor Angle Buffer Index';
MotCtrlMotAgBufIdx.Description = [...
  'Current Index into the Motor Angle Buffer'];
MotCtrlMotAgBufIdx.DocUnits = 'Cnt';
MotCtrlMotAgBufIdx.SwcShoName = 'MotVel';
MotCtrlMotAgBufIdx.EngDT = dt.u08;
MotCtrlMotAgBufIdx.EngInit = 0;
MotCtrlMotAgBufIdx.EngMin = 0;
MotCtrlMotAgBufIdx.EngMax = 7;
MotCtrlMotAgBufIdx.TestTolerance = 0;
MotCtrlMotAgBufIdx.WrittenIn = {'MotVelPer1'};
MotCtrlMotAgBufIdx.WriteType = 'NonRte';


MotCtrlMotAgBuf = DataDict.OpSignal;
MotCtrlMotAgBuf.LongName = 'Motor Control Motor Angle Buffer Signal Output';
MotCtrlMotAgBuf.Description = 'Motor Control Motor Angle Buffer';
MotCtrlMotAgBuf.DocUnits = 'MotRev';
MotCtrlMotAgBuf.SwcShoName = 'MotVel';
MotCtrlMotAgBuf.EngDT = dt.u0p16;
MotCtrlMotAgBuf.EngInit =  ...
   [0                0                0                0                0                0                0                0];
MotCtrlMotAgBuf.EngMin = 0;
MotCtrlMotAgBuf.EngMax = 0.9999847412;
MotCtrlMotAgBuf.TestTolerance = 0.0625;
MotCtrlMotAgBuf.WrittenIn = {'MotVelPer1'};
MotCtrlMotAgBuf.WriteType = 'NonRte';


MotCtrlMotAgTiBuf = DataDict.OpSignal;
MotCtrlMotAgTiBuf.LongName = 'Motor Control Motor Angle Time Buffer Signal Output';
MotCtrlMotAgTiBuf.Description = [...
  'Motor Control Motor Angle Time Buffer'];
MotCtrlMotAgTiBuf.DocUnits = 'MicroSec';
MotCtrlMotAgTiBuf.SwcShoName = 'MotVel';
MotCtrlMotAgTiBuf.EngDT = dt.u32;
MotCtrlMotAgTiBuf.EngInit =  ...
   [0               62              125              187              250              312              375              437];
MotCtrlMotAgTiBuf.EngMin = 0;
MotCtrlMotAgTiBuf.EngMax = 4294967295;
MotCtrlMotAgTiBuf.TestTolerance = 0.0625;
MotCtrlMotAgTiBuf.WrittenIn = {'MotVelPer1'};
MotCtrlMotAgTiBuf.WriteType = 'NonRte';


MotVelCrf = DataDict.OpSignal;
MotVelCrf.LongName = 'Motor Velocity Column Reference Frame';
MotVelCrf.Description = [...
  'Motor velocity with polarity as seen by driver.'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.SwcShoName = 'MotVel';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.TestTolerance = 0.0625;
MotVelCrf.WrittenIn = {'MotVelPer2'};
MotVelCrf.WriteType = 'Rte';


MotVelMrf = DataDict.OpSignal;
MotVelMrf.LongName = 'Motor Velocity Motor Reference Frame';
MotVelMrf.Description = [...
  'Motor velocity with polarity as seen by motor shaft.'];
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.SwcShoName = 'MotVel';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.TestTolerance = 0.0625;
MotVelMrf.WrittenIn = {'MotVelPer2'};
MotVelMrf.WriteType = 'Rte';


MotVelVld = DataDict.OpSignal;
MotVelVld.LongName = 'Motor Velocity Valid';
MotVelVld.Description = [...
  'Flag indicating if the motor velocity signal is valid or not'];
MotVelVld.DocUnits = 'Cnt';
MotVelVld.SwcShoName = 'MotVel';
MotVelVld.EngDT = dt.lgc;
MotVelVld.EngInit = 1;
MotVelVld.EngMin = 0;
MotVelVld.EngMax = 1;
MotVelVld.TestTolerance = 0;
MotVelVld.WrittenIn = {'MotVelPer2'};
MotVelVld.WriteType = 'Rte';



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
dMotVelAvrgTi = DataDict.Display;
dMotVelAvrgTi.LongName = 'Motor Velocity Average Time';
dMotVelAvrgTi.Description = 'Motor Velocity Average Time';
dMotVelAvrgTi.DocUnits = 'Sec';
dMotVelAvrgTi.EngDT = dt.float32;
dMotVelAvrgTi.EngMin = 0;
dMotVelAvrgTi.EngMax = 4295;
dMotVelAvrgTi.InitRowCol = [1  1];


dMotVelMotAgRef = DataDict.Display;
dMotVelMotAgRef.LongName = 'Motor Velocity Motor Angle Reference';
dMotVelMotAgRef.Description = 'Before unwrapping';
dMotVelMotAgRef.DocUnits = 'MotRad';
dMotVelMotAgRef.EngDT = dt.u0p16;
dMotVelMotAgRef.EngMin = 0;
dMotVelMotAgRef.EngMax = 0.9999847412;
dMotVelMotAgRef.InitRowCol = [1  1];


dMotVelTiStampRef = DataDict.Display;
dMotVelTiStampRef.LongName = 'Motor Velocity Time Stamp Reference';
dMotVelTiStampRef.Description = 'Reference Time Stamp';
dMotVelTiStampRef.DocUnits = 'Sec';
dMotVelTiStampRef.EngDT = dt.float32;
dMotVelTiStampRef.EngMin = 0;
dMotVelTiStampRef.EngMax = 4295;
dMotVelTiStampRef.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotAgBufIdxPrev = DataDict.PIM;
MotAgBufIdxPrev.LongName = 'Previous Motor Angle Buffer Index';
MotAgBufIdxPrev.Description = 'Index Counter Previous value';
MotAgBufIdxPrev.DocUnits = 'Cnt';
MotAgBufIdxPrev.EngDT = dt.u08;
MotAgBufIdxPrev.EngMin = 0;
MotAgBufIdxPrev.EngMax = 255;
MotAgBufIdxPrev.InitRowCol = [1  1];


MotAgBufIdxPrim = DataDict.PIM;
MotAgBufIdxPrim.LongName = 'Motor Angle Buffer Index Primary';
MotAgBufIdxPrim.Description = [...
  'Index Counter Previous value in Periodic 1'];
MotAgBufIdxPrim.DocUnits = 'Cnt';
MotAgBufIdxPrim.EngDT = dt.u08;
MotAgBufIdxPrim.EngMin = 0;
MotAgBufIdxPrim.EngMax = 255;
MotAgBufIdxPrim.InitRowCol = [1  1];


MotAgBufPrev = DataDict.PIM;
MotAgBufPrev.LongName = 'Motor Angle Buffer State Variable for Motor Control';
MotAgBufPrev.Description = [...
  'State variable for Motor Angle Buffer'];
MotAgBufPrev.DocUnits = 'MotRev';
MotAgBufPrev.EngDT = dt.u0p16;
MotAgBufPrev.EngMin = 0;
MotAgBufPrev.EngMax = 0.9999847412;
MotAgBufPrev.InitRowCol = [8  1];


MotAgTiBufPrev = DataDict.PIM;
MotAgTiBufPrev.LongName = 'Motor Angle Time Buffer State Variable for Motor Control';
MotAgTiBufPrev.Description = [...
  'State variable for Motor Angle Time Buffer'];
MotAgTiBufPrev.DocUnits = 'Cnt';
MotAgTiBufPrev.EngDT = dt.u32;
MotAgTiBufPrev.EngMin = 0;
MotAgTiBufPrev.EngMax = 4294967295;
MotAgTiBufPrev.InitRowCol = [8  1];


MotVelIninCntr = DataDict.PIM;
MotVelIninCntr.LongName = 'Motor Velocity Init Counter';
MotVelIninCntr.Description = [...
  'Motor Velocity Initialization Counter'];
MotVelIninCntr.DocUnits = 'Cnt';
MotVelIninCntr.EngDT = dt.u08;
MotVelIninCntr.EngMin = 0;
MotVelIninCntr.EngMax = 31;
MotVelIninCntr.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


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


ARCHGLBPRM_PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PI_ULS_F32.LongName = 'Pi';
ARCHGLBPRM_PI_ULS_F32.Description = 'Value of Pi';
ARCHGLBPRM_PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PI_ULS_F32.EngVal = 3.1415927;
ARCHGLBPRM_PI_ULS_F32.Define = 'Global';


BITMASK16BIT_CNT_U32 = DataDict.Constant;
BITMASK16BIT_CNT_U32.LongName = 'Bit Mask';
BITMASK16BIT_CNT_U32.Description = [...
  'It is used as one input value of the BitWise block.'];
BITMASK16BIT_CNT_U32.DocUnits = 'Cnt';
BITMASK16BIT_CNT_U32.EngDT = dt.u32;
BITMASK16BIT_CNT_U32.EngVal = 65535;
BITMASK16BIT_CNT_U32.Define = 'Local';


BUFSIZECOMBD_CNT_U08 = DataDict.Constant;
BUFSIZECOMBD_CNT_U08.LongName = 'Buffer Size Combined';
BUFSIZECOMBD_CNT_U08.Description = [...
  '1-based length of arrays of the concatenate Motor Angle Timer and Moto' ...
  'r Angle Timer Previous.'];
BUFSIZECOMBD_CNT_U08.DocUnits = 'Cnt';
BUFSIZECOMBD_CNT_U08.EngDT = dt.u08;
BUFSIZECOMBD_CNT_U08.EngVal = 16;
BUFSIZECOMBD_CNT_U08.Define = 'Local';


BUFSIZE_CNT_U08 = DataDict.Constant;
BUFSIZE_CNT_U08.LongName = 'Buffer Size';
BUFSIZE_CNT_U08.Description = [...
  '1-based length of arrays of Time and Angle.'];
BUFSIZE_CNT_U08.DocUnits = 'Cnt';
BUFSIZE_CNT_U08.EngDT = dt.u08;
BUFSIZE_CNT_U08.EngVal = 8;
BUFSIZE_CNT_U08.Define = 'Local';


MOTAGMECHIDPTSIGTHD_ULS_U08 = DataDict.Constant;
MOTAGMECHIDPTSIGTHD_ULS_U08.LongName = 'Motor Angle Mechanical Independent Signal Threshold';
MOTAGMECHIDPTSIGTHD_ULS_U08.Description = [...
  'Number of independent mechanical motor angle signals'];
MOTAGMECHIDPTSIGTHD_ULS_U08.DocUnits = 'Uls';
MOTAGMECHIDPTSIGTHD_ULS_U08.EngDT = dt.u08;
MOTAGMECHIDPTSIGTHD_ULS_U08.EngVal = 1;
MOTAGMECHIDPTSIGTHD_ULS_U08.Define = 'Local';


MOTVELMAXININVAL_CNT_U08 = DataDict.Constant;
MOTVELMAXININVAL_CNT_U08.LongName = 'Init Val';
MOTVELMAXININVAL_CNT_U08.Description = [...
  'Number of loops waiting before computing Motor Velocity after key on.'];
MOTVELMAXININVAL_CNT_U08.DocUnits = 'Cnt';
MOTVELMAXININVAL_CNT_U08.EngDT = dt.u08;
MOTVELMAXININVAL_CNT_U08.EngVal = 31;
MOTVELMAXININVAL_CNT_U08.Define = 'Local';


MOTVELMAX_MOTRADPERSEC_F32 = DataDict.Constant;
MOTVELMAX_MOTRADPERSEC_F32.LongName = 'Max Motor Vel';
MOTVELMAX_MOTRADPERSEC_F32.Description = 'Minimum Motor Velocity';
MOTVELMAX_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
MOTVELMAX_MOTRADPERSEC_F32.EngDT = dt.float32;
MOTVELMAX_MOTRADPERSEC_F32.EngVal = 1350;
MOTVELMAX_MOTRADPERSEC_F32.Define = 'Local';


MOTVELMIN_MOTRADPERSEC_F32 = DataDict.Constant;
MOTVELMIN_MOTRADPERSEC_F32.LongName = 'Min Motor Vel';
MOTVELMIN_MOTRADPERSEC_F32.Description = 'Minimum Motor Velocity';
MOTVELMIN_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
MOTVELMIN_MOTRADPERSEC_F32.EngDT = dt.float32;
MOTVELMIN_MOTRADPERSEC_F32.EngVal = -1350;
MOTVELMIN_MOTRADPERSEC_F32.Define = 'Local';


SECTOMICROSEC_ULS_F32 = DataDict.Constant;
SECTOMICROSEC_ULS_F32.LongName = 'Second to Microsecond';
SECTOMICROSEC_ULS_F32.Description = [...
  'Constant definition of number of microseconds in a second.'];
SECTOMICROSEC_ULS_F32.DocUnits = 'Uls';
SECTOMICROSEC_ULS_F32.EngDT = dt.float32;
SECTOMICROSEC_ULS_F32.EngVal = 1000000;
SECTOMICROSEC_ULS_F32.Define = 'Local';


ZEROTISTAMP_MICROSEC_F32 = DataDict.Constant;
ZEROTISTAMP_MICROSEC_F32.LongName = 'Zero time stamp';
ZEROTISTAMP_MICROSEC_F32.Description = 'Named F32 to keep the same datatype as design and Time stamps are initalized to zero';
ZEROTISTAMP_MICROSEC_F32.DocUnits = 'MicroSec';
ZEROTISTAMP_MICROSEC_F32.EngDT = dt.float32;
ZEROTISTAMP_MICROSEC_F32.EngVal = 0;
ZEROTISTAMP_MICROSEC_F32.Define = 'Local';


ZEROTISTAMP_MICROSEC_U32 = DataDict.Constant;
ZEROTISTAMP_MICROSEC_U32.LongName = 'Zero time stamp';
ZEROTISTAMP_MICROSEC_U32.Description = 'Named U32 to keep the same datatype as design and Time stamps are initalized to zero';
ZEROTISTAMP_MICROSEC_U32.DocUnits = 'MicroSec';
ZEROTISTAMP_MICROSEC_U32.EngDT = dt.u32;
ZEROTISTAMP_MICROSEC_U32.EngVal = 0;
ZEROTISTAMP_MICROSEC_U32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
