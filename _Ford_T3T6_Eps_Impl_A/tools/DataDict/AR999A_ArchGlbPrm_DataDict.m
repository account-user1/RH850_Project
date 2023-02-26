%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 15-Mar-2017 15:39:38       %
%                                  Created with tool release: 2.53.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

AR999A = DataDict.FDD;
AR999A.Version = '1.3.X';
AR999A.LongName = 'Architecture Global Parameters';
AR999A.ShoName  = 'ArchGlbPrm';
AR999A.DesignASIL = 'D';
AR999A.Description = [...
  'The ArchGlbPrm component contains global constants that are either "ma' ...
  'thematical" (e.g. the value of pi) or software-oriented (e.g. the valu' ...
  'e to be used as the zero threshold for float32 comparisons) in nature.' ...
  '  The constants are defined in AR999A_ArchGlbPrm_DataDict.m and implem' ...
  'ented as #define statements in "ArchGlbPrm.h".'];



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
ARCHGLBPRM_100MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_100MILLISEC_SEC_F32.LongName = '100 Milliseconds';
ARCHGLBPRM_100MILLISEC_SEC_F32.Description = '100ms periodic loop time step';
ARCHGLBPRM_100MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_100MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_100MILLISEC_SEC_F32.EngVal = 0.1;
ARCHGLBPRM_100MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_10MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_10MILLISEC_SEC_F32.LongName = '10 Milliseconds';
ARCHGLBPRM_10MILLISEC_SEC_F32.Description = '10ms periodic loop time step';
ARCHGLBPRM_10MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_10MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_10MILLISEC_SEC_F32.EngVal = 0.01;
ARCHGLBPRM_10MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_180OVERPI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_180OVERPI_ULS_F32.LongName = '180 Degrees Over Pi';
ARCHGLBPRM_180OVERPI_ULS_F32.Description = '180 divided by Pi';
ARCHGLBPRM_180OVERPI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_180OVERPI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_180OVERPI_ULS_F32.EngVal = 57.29578;
ARCHGLBPRM_180OVERPI_ULS_F32.Define = 'Global';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_2OVERSQRT3_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2OVERSQRT3_ULS_F32.LongName = '2 Over Square Root of 3';
ARCHGLBPRM_2OVERSQRT3_ULS_F32.Description = '2 divided by square root of 3';
ARCHGLBPRM_2OVERSQRT3_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2OVERSQRT3_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2OVERSQRT3_ULS_F32.EngVal = 1.15470054;
ARCHGLBPRM_2OVERSQRT3_ULS_F32.Define = 'Global';


ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


ARCHGLBPRM_4MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_4MILLISEC_SEC_F32.LongName = '4 Milliseconds';
ARCHGLBPRM_4MILLISEC_SEC_F32.Description = '4ms periodic loop time step';
ARCHGLBPRM_4MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_4MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_4MILLISEC_SEC_F32.EngVal = 0.004;
ARCHGLBPRM_4MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_4OVERSQRT3_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_4OVERSQRT3_ULS_F32.LongName = '4 Over Square Root of 3';
ARCHGLBPRM_4OVERSQRT3_ULS_F32.Description = '4 divided by square root of 3';
ARCHGLBPRM_4OVERSQRT3_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_4OVERSQRT3_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_4OVERSQRT3_ULS_F32.EngVal = 2.3094011;
ARCHGLBPRM_4OVERSQRT3_ULS_F32.Define = 'Global';


ARCHGLBPRM_5PIOVER4_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_5PIOVER4_ULS_F32.LongName = '5 Pi Over 4';
ARCHGLBPRM_5PIOVER4_ULS_F32.Description = '5 times Pi divided by 4';
ARCHGLBPRM_5PIOVER4_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_5PIOVER4_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_5PIOVER4_ULS_F32.EngVal = 3.9269908;
ARCHGLBPRM_5PIOVER4_ULS_F32.Define = 'Global';


ARCHGLBPRM_EIGHTOVERPI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_EIGHTOVERPI_ULS_F32.LongName = 'Eight Over Pi';
ARCHGLBPRM_EIGHTOVERPI_ULS_F32.Description = 'Value of Eight divided by Pi';
ARCHGLBPRM_EIGHTOVERPI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_EIGHTOVERPI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_EIGHTOVERPI_ULS_F32.EngVal = 2.546479;
ARCHGLBPRM_EIGHTOVERPI_ULS_F32.Define = 'Global';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


ARCHGLBPRM_HALFSQRT3_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_HALFSQRT3_ULS_F32.LongName = 'Half Square Root of 3';
ARCHGLBPRM_HALFSQRT3_ULS_F32.Description = '(Square root of 3) divided by 2';
ARCHGLBPRM_HALFSQRT3_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_HALFSQRT3_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_HALFSQRT3_ULS_F32.EngVal = 0.8660254;
ARCHGLBPRM_HALFSQRT3_ULS_F32.Define = 'Global';


ARCHGLBPRM_ONEOVER2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_ONEOVER2PI_ULS_F32.LongName = 'One Over 2 Pi';
ARCHGLBPRM_ONEOVER2PI_ULS_F32.Description = 'One Over 2 times Value of Pi';
ARCHGLBPRM_ONEOVER2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_ONEOVER2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_ONEOVER2PI_ULS_F32.EngVal = 0.15915494;
ARCHGLBPRM_ONEOVER2PI_ULS_F32.Define = 'Global';


ARCHGLBPRM_PIOVER180_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVER180_ULS_F32.LongName = 'Pi Over 180 Degrees';
ARCHGLBPRM_PIOVER180_ULS_F32.Description = 'Pi divided by 180 ';
ARCHGLBPRM_PIOVER180_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVER180_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVER180_ULS_F32.EngVal = 0.017453293;
ARCHGLBPRM_PIOVER180_ULS_F32.Define = 'Global';


ARCHGLBPRM_PIOVER2_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVER2_ULS_F32.LongName = 'Pi Over Two';
ARCHGLBPRM_PIOVER2_ULS_F32.Description = 'Pi divided by 2';
ARCHGLBPRM_PIOVER2_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVER2_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVER2_ULS_F32.EngVal = 1.57079633;
ARCHGLBPRM_PIOVER2_ULS_F32.Define = 'Global';


ARCHGLBPRM_PIOVEREIGHT_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVEREIGHT_ULS_F32.LongName = 'Pi Over Eight';
ARCHGLBPRM_PIOVEREIGHT_ULS_F32.Description = 'Value of Pi divided by 8';
ARCHGLBPRM_PIOVEREIGHT_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVEREIGHT_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVEREIGHT_ULS_F32.EngVal = 0.392699;
ARCHGLBPRM_PIOVEREIGHT_ULS_F32.Define = 'Global';


ARCHGLBPRM_PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PI_ULS_F32.LongName = 'Pi';
ARCHGLBPRM_PI_ULS_F32.Description = 'Value of Pi';
ARCHGLBPRM_PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PI_ULS_F32.EngVal = 3.1415927;
ARCHGLBPRM_PI_ULS_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
