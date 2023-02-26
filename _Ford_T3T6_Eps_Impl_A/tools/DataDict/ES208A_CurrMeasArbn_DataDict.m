%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 06-Oct-2015 15:22:33       %
%                                  Created with tool release: 2.21.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES208A = DataDict.FDD;
ES208A.Version = '1.0.X';
ES208A.LongName = 'Current Measurement Arbitration';
ES208A.ShoName  = 'CurrMeasArbn';
ES208A.DesignASIL = 'D';
ES208A.Description = [...
  'The Current Measurement Arbitration function is responsible to select ' ...
  'a sensor value and determine the quality of that sensor value'];
ES208A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
CurrMeasArbnInit1 = DataDict.Runnable;
CurrMeasArbnInit1.TimeStep = 0;

CurrMeasArbnPer1 = DataDict.Runnable;
CurrMeasArbnPer1.TimeStep = 'MotorControlx2';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotCtrlCurrMeasCorrlnSts = DataDict.IpSignal;
MotCtrlCurrMeasCorrlnSts.LongName = 'Current Measurement Correlation Status';
MotCtrlCurrMeasCorrlnSts.DocUnits = 'Cnt';
MotCtrlCurrMeasCorrlnSts.EngDT = dt.u08;
MotCtrlCurrMeasCorrlnSts.EngInit = 63;
MotCtrlCurrMeasCorrlnSts.EngMin = 0;
MotCtrlCurrMeasCorrlnSts.EngMax = 63;
MotCtrlCurrMeasCorrlnSts.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlCurrMeasCorrlnSts.ReadType = 'NonRte';


MotCtrlCurrMeasMotAgCorrd = DataDict.IpSignal;
MotCtrlCurrMeasMotAgCorrd.LongName = 'Motor Current Motor Angle Corrected';
MotCtrlCurrMeasMotAgCorrd.DocUnits = 'MotRad';
MotCtrlCurrMeasMotAgCorrd.EngDT = dt.float32;
MotCtrlCurrMeasMotAgCorrd.EngInit = 0;
MotCtrlCurrMeasMotAgCorrd.EngMin = -6.2832;
MotCtrlCurrMeasMotAgCorrd.EngMax = 6.2832;
MotCtrlCurrMeasMotAgCorrd.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlCurrMeasMotAgCorrd.ReadType = 'NonRte';


MotCtrlMotCurrCorrdA = DataDict.IpSignal;
MotCtrlMotCurrCorrdA.LongName = 'Current Measurement Motor Current Corrected A';
MotCtrlMotCurrCorrdA.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdA.EngDT = dt.float32;
MotCtrlMotCurrCorrdA.EngInit = 0;
MotCtrlMotCurrCorrdA.EngMin = -200;
MotCtrlMotCurrCorrdA.EngMax = 200;
MotCtrlMotCurrCorrdA.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrCorrdA.ReadType = 'NonRte';


MotCtrlMotCurrCorrdB = DataDict.IpSignal;
MotCtrlMotCurrCorrdB.LongName = 'Current Measurement Motor Current Corrected B';
MotCtrlMotCurrCorrdB.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdB.EngDT = dt.float32;
MotCtrlMotCurrCorrdB.EngInit = 0;
MotCtrlMotCurrCorrdB.EngMin = -200;
MotCtrlMotCurrCorrdB.EngMax = 200;
MotCtrlMotCurrCorrdB.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrCorrdB.ReadType = 'NonRte';


MotCtrlMotCurrCorrdC = DataDict.IpSignal;
MotCtrlMotCurrCorrdC.LongName = 'Current Measurement Motor Current Corrected C';
MotCtrlMotCurrCorrdC.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdC.EngDT = dt.float32;
MotCtrlMotCurrCorrdC.EngInit = 0;
MotCtrlMotCurrCorrdC.EngMin = -200;
MotCtrlMotCurrCorrdC.EngMax = 200;
MotCtrlMotCurrCorrdC.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrCorrdC.ReadType = 'NonRte';


MotCtrlMotCurrCorrdD = DataDict.IpSignal;
MotCtrlMotCurrCorrdD.LongName = 'Current Measurement Motor Current Corrected D';
MotCtrlMotCurrCorrdD.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdD.EngDT = dt.float32;
MotCtrlMotCurrCorrdD.EngInit = 0;
MotCtrlMotCurrCorrdD.EngMin = -200;
MotCtrlMotCurrCorrdD.EngMax = 200;
MotCtrlMotCurrCorrdD.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrCorrdD.ReadType = 'NonRte';


MotCtrlMotCurrCorrdE = DataDict.IpSignal;
MotCtrlMotCurrCorrdE.LongName = 'Current Measurement Motor Current Corrected E';
MotCtrlMotCurrCorrdE.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdE.EngDT = dt.float32;
MotCtrlMotCurrCorrdE.EngInit = 0;
MotCtrlMotCurrCorrdE.EngMin = -200;
MotCtrlMotCurrCorrdE.EngMax = 200;
MotCtrlMotCurrCorrdE.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrCorrdE.ReadType = 'NonRte';


MotCtrlMotCurrCorrdF = DataDict.IpSignal;
MotCtrlMotCurrCorrdF.LongName = 'Current Measurement Motor Current Corrected F';
MotCtrlMotCurrCorrdF.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdF.EngDT = dt.float32;
MotCtrlMotCurrCorrdF.EngInit = 0;
MotCtrlMotCurrCorrdF.EngMin = -200;
MotCtrlMotCurrCorrdF.EngMax = 200;
MotCtrlMotCurrCorrdF.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrCorrdF.ReadType = 'NonRte';


MotCtrlMotCurrQlfr1 = DataDict.IpSignal;
MotCtrlMotCurrQlfr1.LongName = 'Motor Current Qualifier 1';
MotCtrlMotCurrQlfr1.DocUnits = 'Cnt';
MotCtrlMotCurrQlfr1.EngDT = enum.SigQlfr1;
MotCtrlMotCurrQlfr1.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotCurrQlfr1.EngMin = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotCurrQlfr1.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotCtrlMotCurrQlfr1.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrQlfr1.ReadType = 'NonRte';


MotCtrlMotCurrQlfr2 = DataDict.IpSignal;
MotCtrlMotCurrQlfr2.LongName = 'Motor Current Qualifier 2';
MotCtrlMotCurrQlfr2.DocUnits = 'Cnt';
MotCtrlMotCurrQlfr2.EngDT = enum.SigQlfr1;
MotCtrlMotCurrQlfr2.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotCurrQlfr2.EngMin = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotCurrQlfr2.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotCtrlMotCurrQlfr2.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrQlfr2.ReadType = 'NonRte';


MotCtrlMotCurrRollgCntr1 = DataDict.IpSignal;
MotCtrlMotCurrRollgCntr1.LongName = 'Motor Current Rolling Counter 1';
MotCtrlMotCurrRollgCntr1.DocUnits = 'Cnt';
MotCtrlMotCurrRollgCntr1.EngDT = dt.u08;
MotCtrlMotCurrRollgCntr1.EngInit = 0;
MotCtrlMotCurrRollgCntr1.EngMin = 0;
MotCtrlMotCurrRollgCntr1.EngMax = 255;
MotCtrlMotCurrRollgCntr1.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrRollgCntr1.ReadType = 'NonRte';


MotCtrlMotCurrRollgCntr2 = DataDict.IpSignal;
MotCtrlMotCurrRollgCntr2.LongName = 'Motor Current Rolling Counter 2';
MotCtrlMotCurrRollgCntr2.DocUnits = 'Cnt';
MotCtrlMotCurrRollgCntr2.EngDT = dt.u08;
MotCtrlMotCurrRollgCntr2.EngInit = 0;
MotCtrlMotCurrRollgCntr2.EngMin = 0;
MotCtrlMotCurrRollgCntr2.EngMax = 255;
MotCtrlMotCurrRollgCntr2.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrRollgCntr2.ReadType = 'NonRte';


MotCtrlMotElecMeclPolarity = DataDict.IpSignal;
MotCtrlMotElecMeclPolarity.LongName = 'Motor Electro-Mechanical Polarity';
MotCtrlMotElecMeclPolarity.DocUnits = 'Uls';
MotCtrlMotElecMeclPolarity.EngDT = dt.s08;
MotCtrlMotElecMeclPolarity.EngInit = 1;
MotCtrlMotElecMeclPolarity.EngMin = -1;
MotCtrlMotElecMeclPolarity.EngMax = 1;
MotCtrlMotElecMeclPolarity.ReadIn = {'CurrMeasArbnPer1'};
MotCtrlMotElecMeclPolarity.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCtrlMotCurrDax = DataDict.OpSignal;
MotCtrlMotCurrDax.LongName = 'Motor Current D-Axis Current';
MotCtrlMotCurrDax.Description = 'Motor Current D-Axis Current';
MotCtrlMotCurrDax.DocUnits = 'Ampr';
MotCtrlMotCurrDax.SwcShoName = 'CurrMeasArbn';
MotCtrlMotCurrDax.EngDT = dt.float32;
MotCtrlMotCurrDax.EngInit = 0;
MotCtrlMotCurrDax.EngMin = -200;
MotCtrlMotCurrDax.EngMax = 200;
MotCtrlMotCurrDax.TestTolerance = 0.0625;
MotCtrlMotCurrDax.WrittenIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrDax.WriteType = 'NonRte';


MotCtrlMotCurrQax = DataDict.OpSignal;
MotCtrlMotCurrQax.LongName = 'Motor Current Q-Axis Current';
MotCtrlMotCurrQax.Description = 'Motor Current Q-Axis Current';
MotCtrlMotCurrQax.DocUnits = 'Ampr';
MotCtrlMotCurrQax.SwcShoName = 'CurrMeasArbn';
MotCtrlMotCurrQax.EngDT = dt.float32;
MotCtrlMotCurrQax.EngInit = 0;
MotCtrlMotCurrQax.EngMin = -200;
MotCtrlMotCurrQax.EngMax = 200;
MotCtrlMotCurrQax.TestTolerance = 0.0625;
MotCtrlMotCurrQax.WrittenIn = {'CurrMeasArbnPer1'};
MotCtrlMotCurrQax.WriteType = 'NonRte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
CurrMeasArbnMaxStallCntr = DataDict.Calibration;
CurrMeasArbnMaxStallCntr.LongName = 'Current Measurement Arbitration Maximum Stall Counter';
CurrMeasArbnMaxStallCntr.Description = [...
  'Current Measurement Arbitration Maximum Stall Counter'];
CurrMeasArbnMaxStallCntr.DocUnits = 'Cnt';
CurrMeasArbnMaxStallCntr.EngDT = dt.u08;
CurrMeasArbnMaxStallCntr.EngVal = 20;
CurrMeasArbnMaxStallCntr.EngMin = 0;
CurrMeasArbnMaxStallCntr.EngMax = 255;
CurrMeasArbnMaxStallCntr.ProgrammedBy = 'Nexteer';
CurrMeasArbnMaxStallCntr.Cardinality = 'N';
CurrMeasArbnMaxStallCntr.CustomerVisible = false;
CurrMeasArbnMaxStallCntr.Online = false;
CurrMeasArbnMaxStallCntr.Impact = 'M';
CurrMeasArbnMaxStallCntr.TuningOwner = 'FDD';
CurrMeasArbnMaxStallCntr.GraphLink = '';
CurrMeasArbnMaxStallCntr.Monotony = 'None';
CurrMeasArbnMaxStallCntr.MaxGrad = 999;
CurrMeasArbnMaxStallCntr.PortName = 'CurrMeasArbnMaxStallCntr';



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
ArbnSnsr0RollgCntPrev = DataDict.PIM;
ArbnSnsr0RollgCntPrev.LongName = 'Current Measurement Arbitration Sensor 0 Rolling Count Previous';
ArbnSnsr0RollgCntPrev.Description = [...
  'Current Measurement Arbitration Sensor 0 Rolling Count Previous'];
ArbnSnsr0RollgCntPrev.DocUnits = 'Cnt';
ArbnSnsr0RollgCntPrev.EngDT = dt.u08;
ArbnSnsr0RollgCntPrev.EngMin = 0;
ArbnSnsr0RollgCntPrev.EngMax = 255;
ArbnSnsr0RollgCntPrev.InitRowCol = [1  1];


ArbnSnsr0StallCntPrev = DataDict.PIM;
ArbnSnsr0StallCntPrev.LongName = 'Current Measurement Arbitration Sensor 0 Stall Count Previous';
ArbnSnsr0StallCntPrev.Description = [...
  'Current Measurement Arbitration Sensor 0 Stall Count Previous'];
ArbnSnsr0StallCntPrev.DocUnits = 'Cnt';
ArbnSnsr0StallCntPrev.EngDT = dt.u08;
ArbnSnsr0StallCntPrev.EngMin = 0;
ArbnSnsr0StallCntPrev.EngMax = 255;
ArbnSnsr0StallCntPrev.InitRowCol = [1  1];


ArbnSnsr1RollgCntPrev = DataDict.PIM;
ArbnSnsr1RollgCntPrev.LongName = 'Current Measurement Arbitration Sensor 0 Rolling Count Previous';
ArbnSnsr1RollgCntPrev.Description = [...
  'Current Measurement Arbitration Sensor 0 Rolling Count Previous'];
ArbnSnsr1RollgCntPrev.DocUnits = 'Cnt';
ArbnSnsr1RollgCntPrev.EngDT = dt.u08;
ArbnSnsr1RollgCntPrev.EngMin = 0;
ArbnSnsr1RollgCntPrev.EngMax = 255;
ArbnSnsr1RollgCntPrev.InitRowCol = [1  1];


ArbnSnsr1StallCntPrev = DataDict.PIM;
ArbnSnsr1StallCntPrev.LongName = 'Current Measurement Arbitration Sensor 0 Stall Count Previous';
ArbnSnsr1StallCntPrev.Description = [...
  'Current Measurement Arbitration Sensor 0 Stall Count Previous'];
ArbnSnsr1StallCntPrev.DocUnits = 'Cnt';
ArbnSnsr1StallCntPrev.EngDT = dt.u08;
ArbnSnsr1StallCntPrev.EngMin = 0;
ArbnSnsr1StallCntPrev.EngMax = 255;
ArbnSnsr1StallCntPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CORRLNSTSCOMPCON1_ULS_U08 = DataDict.Constant;
CORRLNSTSCOMPCON1_ULS_U08.LongName = 'Correlation Status Comparison Constant 1';
CORRLNSTSCOMPCON1_ULS_U08.Description = [...
  'Correlation Status Comparison Constant 1'];
CORRLNSTSCOMPCON1_ULS_U08.DocUnits = 'Uls';
CORRLNSTSCOMPCON1_ULS_U08.EngDT = dt.u08;
CORRLNSTSCOMPCON1_ULS_U08.EngVal = 7;
CORRLNSTSCOMPCON1_ULS_U08.Header = '';
CORRLNSTSCOMPCON1_ULS_U08.Define = 'Local';


CORRLNSTSCOMPCON2_ULS_U08 = DataDict.Constant;
CORRLNSTSCOMPCON2_ULS_U08.LongName = 'Correlation Status Comparison Constant 2';
CORRLNSTSCOMPCON2_ULS_U08.Description = [...
  'Correlation Status Comparison Constant 2'];
CORRLNSTSCOMPCON2_ULS_U08.DocUnits = 'Uls';
CORRLNSTSCOMPCON2_ULS_U08.EngDT = dt.u08;
CORRLNSTSCOMPCON2_ULS_U08.EngVal = 56;
CORRLNSTSCOMPCON2_ULS_U08.Header = '';
CORRLNSTSCOMPCON2_ULS_U08.Define = 'Local';


MOTCURRDAXQAXLIM_AMPR_F32 = DataDict.Constant;
MOTCURRDAXQAXLIM_AMPR_F32.LongName = 'Motor Current Daxis Qaxis Limit';
MOTCURRDAXQAXLIM_AMPR_F32.Description = 'Motor Current Daxis Qaxis Limit';
MOTCURRDAXQAXLIM_AMPR_F32.DocUnits = 'Ampr';
MOTCURRDAXQAXLIM_AMPR_F32.EngDT = dt.float32;
MOTCURRDAXQAXLIM_AMPR_F32.EngVal = 200;
MOTCURRDAXQAXLIM_AMPR_F32.Header = '';
MOTCURRDAXQAXLIM_AMPR_F32.Define = 'Local';


ONEDIVSQRT3_ULS_F32 = DataDict.Constant;
ONEDIVSQRT3_ULS_F32.LongName = 'One Divided by Sqrt 3';
ONEDIVSQRT3_ULS_F32.Description = 'One Divided by Sqrt 3';
ONEDIVSQRT3_ULS_F32.DocUnits = 'Uls';
ONEDIVSQRT3_ULS_F32.EngDT = dt.float32;
ONEDIVSQRT3_ULS_F32.EngVal = 0.5773503;
ONEDIVSQRT3_ULS_F32.Header = '';
ONEDIVSQRT3_ULS_F32.Define = 'Local';


ONEDIV3_ULS_F32 = DataDict.Constant;
ONEDIV3_ULS_F32.LongName = 'One Divided by 3';
ONEDIV3_ULS_F32.Description = 'One Divided by 3';
ONEDIV3_ULS_F32.DocUnits = 'Uls';
ONEDIV3_ULS_F32.EngDT = dt.float32;
ONEDIV3_ULS_F32.EngVal = 0.3333;
ONEDIV3_ULS_F32.Header = '';
ONEDIV3_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
