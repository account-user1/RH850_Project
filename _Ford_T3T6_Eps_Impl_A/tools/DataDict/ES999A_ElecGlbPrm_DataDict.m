%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 05-Sep-2017 09:55:12       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: nz2654 %          %
%%-----------------------------------------------------------------------%

ES999A = DataDict.FDD;
ES999A.Version = '6.7.X';
ES999A.LongName = 'Electrical Global Parameters';
ES999A.ShoName  = 'ElecGlbPrm';
ES999A.DesignASIL = 'D';
ES999A.Description = 'Electrical Global Parameters';



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
ELECGLBPRM_ADCFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_ADCFLT_CNT_U08.LongName = 'ADC Fault';
ELECGLBPRM_ADCFLT_CNT_U08.Description = 'ADC Fault';
ELECGLBPRM_ADCFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_ADCFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_ADCFLT_CNT_U08.EngVal = 4;
ELECGLBPRM_ADCFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_DEGPERREV_DEGPERREV_F32 = DataDict.Constant;
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.LongName = 'Degrees per Revolution';
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.Description = 'Number of degrees per revolution';
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.DocUnits = 'DegPerRev';
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.EngDT = dt.float32;
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.EngVal = 360;
ELECGLBPRM_DEGPERREV_DEGPERREV_F32.Define = 'Global';


ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.LongName = 'Gate Drive Configuration  State Parameter Bit Starting Index';
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.Description = [...
  'Gate Drive Configuration  State Parameter Bit Starting Index'];
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.EngVal = 127;
ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVCFGST_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVCFGST_CNT_U08.LongName = 'Gate Drive Configuration  State';
ELECGLBPRM_GATEDRVCFGST_CNT_U08.Description = [...
  'Gate Drive Transition to Configuration  State'];
ELECGLBPRM_GATEDRVCFGST_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVCFGST_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVCFGST_CNT_U08.EngVal = 2;
ELECGLBPRM_GATEDRVCFGST_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.LongName = 'Gate Drive Offstate Check Data';
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.Description = 'Offstate Verification Array Data';
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.EngDT = dt.u16;
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.EngVal =  ...
   [21030            32320                0                0                0                0                0               64
    20992                0                0                0                0                0                0                0
    22275                0                0            16672              128               48                0                0
    0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0
    22019                0                0                0                0                0                0                0
    22147                0                0                0                0                0              112                0
    0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0
    22019                0                0                0                0                0                0                0
    32362                0                0                0                0                0              112                0
    21008                0                0                0                0                0                0                0
    20992                0                0                0                0                0                0                0
    32362            21120                0            16388                0              448                0                0
    32320            20992                0                0                0                0                0                0
    32341            21120                0            16385               42                0                0                0
    32320            20992                0                0                0                0                0                0
    0                0                1            16385               21                0                0                0];
ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.LongName = 'Gate Drive Offstate Check Diagnostic 1 Register Column';
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Diagnostic 1 Register Column Index'];
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.EngVal = 4;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.LongName = 'Gate Drive Offstate Check Diagnostic 2 Register Column';
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Diagnostic 2 Register Column Index'];
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.EngVal = 5;
ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.LongName = 'Gate Drive Offstate Check Digital Pin Verify Column';
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Digital Pin Check Enable Column Index' ...
  ''];
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.EngVal = 2;
ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.LongName = 'Gate Drive Offstate Check Register Write 1 Column 1';
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Register Data Column Index'];
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.EngVal = 0;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.LongName = 'Gate Drive Offstate Check Register Write 2 Column';
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Register Data Column Index'];
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.EngVal = 1;
ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKSIZE_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKSIZE_CNT_U08.LongName = 'Gate Drive Offstate Check Size';
ELECGLBPRM_GATEDRVOFFSTCHKSIZE_CNT_U08.Description = 'OffState Verification Size';
ELECGLBPRM_GATEDRVOFFSTCHKSIZE_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKSIZE_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKSIZE_CNT_U08.EngVal = 19;
ELECGLBPRM_GATEDRVOFFSTCHKSIZE_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.LongName = 'Gate Drive Offstate Check Status Register Column';
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Status Register Column Index'];
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.EngVal = 3;
ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.LongName = 'Gate Drive Offstate Check Verify Result 0 Register Column';
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Verify Result 0 Register Column Index' ...
  ''];
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.EngVal = 6;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.LongName = 'Gate Drive Offstate Check Verify Result 1 Register Column';
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.Description = [...
  'Gate Drive Offstate Verification Verify Result 1 Register Column Index' ...
  ''];
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.EngVal = 7;
ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.LongName = 'Gate Drive OffState Verify State';
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.Description = [...
  'Gate Drive Transition to Offstate Verification State'];
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.EngVal = 1;
ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08.Define = 'Global';


ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08 = DataDict.Constant;
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.LongName = 'Gate Drive Operate Fault Monitor State';
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.Description = [...
  'Gate Drive Transition to Operate Fault Monitor State'];
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.EngVal = 3;
ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08.Define = 'Global';


ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32 = DataDict.Constant;
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.LongName = 'HandWheel Angle Center Offset';
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.Description = 'Handwheel Angle Center correction';
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.DocUnits = 'HwDeg';
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.EngVal = 900;
ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32.Define = 'Global';


ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC = DataDict.ConfigParam;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.LongName = 'Handwheel Angle Interface Latch Enable';
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.Description = [...
  'Handwheel Angle Interface Latch Enable'];
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.IsBuildPrm = false;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.DocUnits = 'Cnt';
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.EngDT = dt.lgc;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.EngVal = 0;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.EngMin = 0;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.EngMax = 1;
ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC.Define = 'Global';


ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.LongName = 'Handwheel Angle Latch Fault parameter Bit';
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.Description = [...
  'Handwheel Angle Latch Fault parameter Bit'];
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.EngVal = 128;
ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08.Define = 'Global';


ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.LongName = 'Handwheel Angle Saturation Lower Limit';
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.Description = [...
  'Handwheel Angle value min limit to -900'];
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.DocUnits = 'HwDeg';
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.EngVal = -900;
ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32.Define = 'Global';


ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.LongName = 'Handwheel Angle Saturation Upper Limit';
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.Description = [...
  'Handwheel Angle value max limit to 900'];
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.DocUnits = 'HwDeg';
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.EngVal = 900;
ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32.Define = 'Global';


ELECGLBPRM_HWAGSCA_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSCA_ULS_F32.LongName = 'Handwheel Angle Scale';
ELECGLBPRM_HWAGSCA_ULS_F32.Description = 'Scale';
ELECGLBPRM_HWAGSCA_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSCA_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSCA_ULS_F32.EngVal = 0.08789;
ELECGLBPRM_HWAGSCA_ULS_F32.Define = 'Global';


ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.LongName = 'Handwheel Angle Spur Gear Ratio';
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.Description = 'One Rev';
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.EngVal = 1.1;
ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32.Define = 'Global';


ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.LongName = 'Handwheel Angle0 Spur to Ring Gear Ratio Sensor 0';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.Description = [...
  '10th Tooth Spur To Ring Gear ratio 10/22'];
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.EngVal = 0.4545;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32.Define = 'Global';


ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.LongName = 'Handwheel Angle0 Spur to Ring Gear Ratio Sensor 1';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.Description = [...
  '11th Tooth Spur To Ring Gear ratio 11/22'];
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.EngVal = 0.5;
ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32.Define = 'Global';


ELECGLBPRM_HWTQBUFSIZE_CNT_U08 = DataDict.Constant;
ELECGLBPRM_HWTQBUFSIZE_CNT_U08.LongName = 'Handwheel Torque Measure Buffer Size';
ELECGLBPRM_HWTQBUFSIZE_CNT_U08.Description = [...
  'Buffer Size for Moving Average Calculation'];
ELECGLBPRM_HWTQBUFSIZE_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_HWTQBUFSIZE_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_HWTQBUFSIZE_CNT_U08.EngVal = 8;
ELECGLBPRM_HWTQBUFSIZE_CNT_U08.Define = 'Global';


ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Maximum Range';
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.Description = [...
  'Max Range Limit for Hw Trq function output'];
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Minimum Range';
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.Description = [...
  'Min Range Limit for Hw Trq function output'];
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.EngVal = -10;
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.LongName = 'Handwheel Torque Offset';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.Description = 'Offset';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.Define = 'Global';


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


ELECGLBPRM_HWTQSCA_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSCA_ULS_F32.LongName = 'Handwheel Torque Scale';
ELECGLBPRM_HWTQSCA_ULS_F32.Description = 'Scale';
ELECGLBPRM_HWTQSCA_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWTQSCA_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSCA_ULS_F32.EngVal = 0.004884005;
ELECGLBPRM_HWTQSCA_ULS_F32.Define = 'Global';


ELECGLBPRM_HWTQSENTBUFSIZE_CNT_U08 = DataDict.Constant;
ELECGLBPRM_HWTQSENTBUFSIZE_CNT_U08.LongName = 'Handwheel Torque SENT Buffer Size';
ELECGLBPRM_HWTQSENTBUFSIZE_CNT_U08.Description = [...
  'Represents the number of HwTq samples stored in a buffer for the itera' ...
  'tive filter method'];
ELECGLBPRM_HWTQSENTBUFSIZE_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_HWTQSENTBUFSIZE_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_HWTQSENTBUFSIZE_CNT_U08.EngVal = 4;
ELECGLBPRM_HWTQSENTBUFSIZE_CNT_U08.Define = 'Global';


ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08 = DataDict.ConfigParam;
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.LongName = 'Handwheel Torque Sensor Tick Count';
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.Description = [...
  'Number of SENT ticks for the HwTq Sensor.  This value is used in the R' ...
  'SENTnSPCT register.  Note that the value here should be subtracted by ' ...
  '1 before being written to the register.'];
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.IsBuildPrm = false;
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.EngVal = 17;
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.EngMin = 1;
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.EngMax = 128;
ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08.Define = 'Global';


ELECGLBPRM_IVTRCNT_CNT_U08 = DataDict.ConfigParam;
ELECGLBPRM_IVTRCNT_CNT_U08.LongName = 'Inverter Count';
ELECGLBPRM_IVTRCNT_CNT_U08.Description = 'Number of Inverters';
ELECGLBPRM_IVTRCNT_CNT_U08.IsBuildPrm = false;
ELECGLBPRM_IVTRCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_IVTRCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_IVTRCNT_CNT_U08.EngVal = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMin = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMax = 2;
ELECGLBPRM_IVTRCNT_CNT_U08.Define = 'Global';


ELECGLBPRM_MOTCTRLINTRPTTRIGCFGA_CNT_U08 = DataDict.Constant;
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGA_CNT_U08.LongName = 'Motor Control Interrupt Trigger Configuration A';
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGA_CNT_U08.Description = [...
  'This constant represents the configuration where the MotCtrlISR is tri' ...
  'ggered via a DMA transfer near the peak of the PWM cycle.  The common ' ...
  'DMA transfer is that of the SPI based DigMSB MotAg measurement. '];
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGA_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGA_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGA_CNT_U08.EngVal = 0;
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGA_CNT_U08.Define = 'Global';


ELECGLBPRM_MOTCTRLINTRPTTRIGCFGB_CNT_U08 = DataDict.Constant;
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGB_CNT_U08.LongName = 'Motor Control Interrupt Trigger Configuration B';
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGB_CNT_U08.Description = [...
  'This constant represents a configuration where the MotCtrlISR is trigg' ...
  'ered via the TSG3 Peak Event.  This is commonly used for systems with ' ...
  'quadrature motor angle measurement systems.'];
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGB_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGB_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGB_CNT_U08.EngVal = 1;
ELECGLBPRM_MOTCTRLINTRPTTRIGCFGB_CNT_U08.Define = 'Global';


ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08 = DataDict.ConfigParam;
ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08.LongName = 'Motor Control Interrupt Trigger Source';
ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08.Description = [...
  'This signal allows a configuration of the type of MotCtrlISR source.  ' ...
  'The thought here is that various FDDs may be affected by this decision' ...
  ' so its setting is of a global nature.  Via implementation the expecte' ...
  'd setting is ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08 = ELECGLBPRM_MOTC' ...
  'TRLINTRPTTRIGCFGx_CNT_U08'];
ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08.IsBuildPrm = false;
ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08.EngVal = 0;
ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08.EngMin = 0;
ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08.EngMax = 255;
ELECGLBPRM_MOTCTRLINTRPTTRIGSRC_CNT_U08.Define = 'Global';


ELECGLBPRM_NOFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_NOFLT_CNT_U08.LongName = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.Description = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_NOFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_NOFLT_CNT_U08.EngVal = 0;
ELECGLBPRM_NOFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08 = DataDict.Constant;
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.LongName = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.Description = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.EngVal = 1;
ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08.Define = 'Global';


ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08 = DataDict.Constant;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.LongName = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.Description = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.EngVal = 1;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.Define = 'Global';


ELECGLBPRM_PRTCLFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_PRTCLFLT_CNT_U08.LongName = 'Protocol Fault';
ELECGLBPRM_PRTCLFLT_CNT_U08.Description = 'Protocol Fault';
ELECGLBPRM_PRTCLFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_PRTCLFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_PRTCLFLT_CNT_U08.EngVal = 1;
ELECGLBPRM_PRTCLFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_PWMFRQMAX_HZ_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMFRQMAX_HZ_U32.LongName = 'Maximum PWM Frequency';
ELECGLBPRM_PWMFRQMAX_HZ_U32.Description = [...
  'High end of PWM frequency dither range'];
ELECGLBPRM_PWMFRQMAX_HZ_U32.IsBuildPrm = false;
ELECGLBPRM_PWMFRQMAX_HZ_U32.DocUnits = 'Hz';
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngDT = dt.u32;
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal = 18000;
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngMin = 14000;
ELECGLBPRM_PWMFRQMAX_HZ_U32.EngMax = 22000;
ELECGLBPRM_PWMFRQMAX_HZ_U32.Define = 'Global';


ELECGLBPRM_PWMFRQMIN_HZ_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMFRQMIN_HZ_U32.LongName = 'Minimum PWM Frequency';
ELECGLBPRM_PWMFRQMIN_HZ_U32.Description = [...
  'High end of PWM frequency dither range'];
ELECGLBPRM_PWMFRQMIN_HZ_U32.IsBuildPrm = false;
ELECGLBPRM_PWMFRQMIN_HZ_U32.DocUnits = 'Hz';
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngDT = dt.u32;
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngVal = 14000;
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngMin = 14000;
ELECGLBPRM_PWMFRQMIN_HZ_U32.EngMax = 22000;
ELECGLBPRM_PWMFRQMIN_HZ_U32.Define = 'Global';


ELECGLBPRM_PWMPERDMAX_NANOSEC_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.LongName = 'Maximum PWM Period';
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.Description = [...
  'Maximum PWM period in units of NanoSec.  ELECGLBPRM_PWMPERDMAX_NANOSEC' ...
  '_U32.EngVal = 1e9/ELECGLBPRM_PWMFRQMIN_HZ_U32.EngVal.  EngMin = 1e9/22' ...
  'e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.IsBuildPrm = false;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngVal = 71429;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngMin = 45454;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngMax = 71429;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.Define = 'Global';


ELECGLBPRM_PWMPERDMIN_NANOSEC_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.LongName = 'Minimum PWM Period';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Description = [...
  'Minimum PWM period in units of NanoSec.  ELECGLBPRM_PWMPERDMIN_NANOSEC' ...
  '_U32.EngVal = 1e9/ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal.  EngMin = 1e9/22' ...
  'e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.IsBuildPrm = false;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngVal = 55555;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngMin = 45455;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngMax = 71429;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Define = 'Global';


ELECGLBPRM_PWMPERDNOMX2_SEC_F32 = DataDict.ConfigParam;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.LongName = 'Motor Control ISR Period Times 2';
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.Description = [...
  'This constant is 2 times ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9 in second' ...
  's.'];
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.IsBuildPrm = false;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.DocUnits = 'Sec';
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngDT = dt.float32;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngVal = 0.000125;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngMin = 9.09090909e-05;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngMax = 0.0001428571429;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.Define = 'Global';


ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9 = DataDict.ConfigParam;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.LongName = 'Nominal PWM Period';
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.Description = [...
  'Nominal PWM Period in units of MicroSec.  ELECGLBPRM_PWMPERDNOM_MICROS' ...
  'EC_U7P9 = (2 * 1e6)/(ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal + ELECGLBPRM_P' ...
  'WMFRQMIN_HZ_U32.EngVal).  EngMin = 1e6/22e3, EngMax = 1e6/14e3'];
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.IsBuildPrm = false;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.DocUnits = 'MicroSec';
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.EngDT = dt.u7p9;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.EngVal = 62.5;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.EngMin = 45.45454545;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.EngMax = 71.42857143;
ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9.Define = 'Global';


ELECGLBPRM_PWMTMRFRQ_HZ_U32 = DataDict.Constant;
ELECGLBPRM_PWMTMRFRQ_HZ_U32.LongName = 'PWM Timer Unit Frequency';
ELECGLBPRM_PWMTMRFRQ_HZ_U32.Description = 'Frequency of the timer unit.';
ELECGLBPRM_PWMTMRFRQ_HZ_U32.DocUnits = 'Hz';
ELECGLBPRM_PWMTMRFRQ_HZ_U32.EngDT = dt.u32;
ELECGLBPRM_PWMTMRFRQ_HZ_U32.EngVal = 80000000;
ELECGLBPRM_PWMTMRFRQ_HZ_U32.Define = 'Global';


ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19 = DataDict.Constant;
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.LongName = 'Inverse Motor Control Period';
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.Description = [...
  'Inverse of MOTCTRLTIMFRQ in units of NanoSec. ELECGLBPRM_PWMTMRPERDIVS' ...
  '_CNTPERNANOSEC_U13P19.EngVal = ELECGLBPRM_PWMTMRFRQ_HZ_U32.EngVal/1e9'];
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.DocUnits = 'CntPerNanoSec';
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.EngDT = dt.u13p19;
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.EngVal = 0.08;
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.Define = 'Global';


ELECGLBPRM_REVPER360DEG_REVPERDEG_F32 = DataDict.Constant;
ELECGLBPRM_REVPER360DEG_REVPERDEG_F32.LongName = 'Revolutions per 360 Degrees';
ELECGLBPRM_REVPER360DEG_REVPERDEG_F32.Description = [...
  'Revolutions per 360 Degrees.  .EngVal = 1/360'];
ELECGLBPRM_REVPER360DEG_REVPERDEG_F32.DocUnits = 'RevPerDeg';
ELECGLBPRM_REVPER360DEG_REVPERDEG_F32.EngDT = dt.float32;
ELECGLBPRM_REVPER360DEG_REVPERDEG_F32.EngVal = 0.002777777778;
ELECGLBPRM_REVPER360DEG_REVPERDEG_F32.Define = 'Global';


ELECGLBPRM_SENTCOMSTSCLR_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.LongName = 'SENT Communication Status Clear Register';
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.Description = [...
  'Value sent to the RSENTnCSC (RSENT Communication Status Clear Register' ...
  ') in an effort to clear any faults present.  The value of 2046 is 0x00' ...
  '7E, which corresponds to all active clear bits.'];
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.EngVal = 2046;
ELECGLBPRM_SENTCOMSTSCLR_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.LongName = 'Sent Communication Status Error Mask';
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.Description = [...
  'Value used to mask off uninteresting error status bits (SES, SMS, SCS ' ...
  '- Slow Serial Messages, FRS - Fast Recieve Message)'];
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.EngVal = 254;
ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.LongName = 'Sent Communication Status FRS Mask';
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.Description = [...
  'Value used to mask FRS bit of status register'];
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.EngVal = 1;
ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTCOMSTSNRSMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTCOMSTSNRSMASK_CNT_U32.LongName = 'Sent Communication Status NRS Mask';
ELECGLBPRM_SENTCOMSTSNRSMASK_CNT_U32.Description = [...
  'Value used to mask NRS bit of status register'];
ELECGLBPRM_SENTCOMSTSNRSMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTCOMSTSNRSMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTCOMSTSNRSMASK_CNT_U32.EngVal = 128;
ELECGLBPRM_SENTCOMSTSNRSMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.LongName = 'Sent Communication Status Slow Mask';
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.Description = [...
  'Value used to mask SLow Channel bit of status register'];
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.EngVal = 1792;
ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTFASTRXHWAGDATAMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTFASTRXHWAGDATAMASK_CNT_U32.LongName = 'Sent Fast Receive Handwheel Angle Data Mask';
ELECGLBPRM_SENTFASTRXHWAGDATAMASK_CNT_U32.Description = [...
  'Value used to mask Data bit of Fast Receive register'];
ELECGLBPRM_SENTFASTRXHWAGDATAMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTFASTRXHWAGDATAMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTFASTRXHWAGDATAMASK_CNT_U32.EngVal = 65520;
ELECGLBPRM_SENTFASTRXHWAGDATAMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTFASTRXHWAGSNSRIDMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTFASTRXHWAGSNSRIDMASK_CNT_U32.LongName = 'Sent Fast Receive Handwheel Angle Sensor Identifier Mask';
ELECGLBPRM_SENTFASTRXHWAGSNSRIDMASK_CNT_U32.Description = [...
  'Value used to mask last four Data bit of Fast Receive register'];
ELECGLBPRM_SENTFASTRXHWAGSNSRIDMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTFASTRXHWAGSNSRIDMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTFASTRXHWAGSNSRIDMASK_CNT_U32.EngVal = 15;
ELECGLBPRM_SENTFASTRXHWAGSNSRIDMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.LongName = 'Sent Fast Receive Data Mask';
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.Description = [...
  'Value used to mask Data bit of Fast Receive register'];
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.EngVal = 4095;
ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.LongName = 'Sent Fast Receive FCCN Mask';
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.Description = [...
  'Value used to mask FCCN bit of Fast Receive register'];
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.EngVal = 805306368;
ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.LongName = 'Sent Fast Receive SND Mask';
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.Description = [...
  'Value used to mask SND bit of Fast Receive register'];
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.EngVal = 2147483648;
ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.LongName = 'Sent Slow Receive Data Identifier Mask';
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.Description = [...
  'Value used to mask Slow Receive Data of register'];
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.EngVal = 3840;
ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32 = DataDict.Constant;
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.LongName = 'Sent Slow Receive Data Mask';
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.Description = [...
  'Value used to mask Slow Receive Data of register'];
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.DocUnits = 'Cnt';
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.EngDT = dt.u32;
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.EngVal = 255;
ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32.Define = 'Global';


ELECGLBPRM_SKIPSTEPFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.LongName = 'Skip Step Fault';
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.Description = 'Skip Step Fault';
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.EngVal = 1;
ELECGLBPRM_SKIPSTEPFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_SNSRINTFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_SNSRINTFLT_CNT_U08.LongName = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.Description = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngVal = 2;
ELECGLBPRM_SNSRINTFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_SNSRSCANOTPRFM_CNT_U08 = DataDict.Constant;
ELECGLBPRM_SNSRSCANOTPRFM_CNT_U08.LongName = 'Sensor Scale Not Performed';
ELECGLBPRM_SNSRSCANOTPRFM_CNT_U08.Description = 'Sensor Scale Not Performed';
ELECGLBPRM_SNSRSCANOTPRFM_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_SNSRSCANOTPRFM_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_SNSRSCANOTPRFM_CNT_U08.EngVal = 1;
ELECGLBPRM_SNSRSCANOTPRFM_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.LongName = 'StartUp State - Current Measurement WarmInit Initialization Complete';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.Description = [...
  'Indication Current Measurement WarmInit Initialization Completed'];
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.EngVal = 110;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.LongName = 'StartUp State - Current Measurement WarmInit Initialization Start';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Current Measurement WarmInit Initialization '];
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.EngVal = 100;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTDI_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTDI_CNT_U08.LongName = 'StartUp State - Disable';
ELECGLBPRM_STRTUPSTDI_CNT_U08.Description = 'StartUp State in Disable';
ELECGLBPRM_STRTUPSTDI_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTDI_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTDI_CNT_U08.EngVal = 160;
ELECGLBPRM_STRTUPSTDI_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.LongName = 'StartUp State - Flash Memory Initialization Start';
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.Description = 'Indication to start Flash Memory';
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.EngVal = 110;
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTINIT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTINIT_CNT_U08.LongName = 'StartUp State - Initial';
ELECGLBPRM_STRTUPSTINIT_CNT_U08.Description = 'Initial StartUp State';
ELECGLBPRM_STRTUPSTINIT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTINIT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTINIT_CNT_U08.EngVal = 20;
ELECGLBPRM_STRTUPSTINIT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.LongName = 'StartUp State - Motor Driver Initialization Complete';
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.Description = [...
  'Indication Motor Driver Initialization Completed'];
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.EngVal = 100;
ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.LongName = 'StartUp State - Motor Driver Initialization Start';
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.Description = [...
  'Indication to start Motor Driver Initialization '];
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.EngVal = 80;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTPHADISCNCTWRMININSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPHADISCNCTWRMININSTRT_CNT_U08.LongName = 'StartUp State - Phase Disconnect Warm Init Start';
ELECGLBPRM_STRTUPSTPHADISCNCTWRMININSTRT_CNT_U08.Description = [...
  'Indication to start Phase Disconnect Warm Init Diagnostics '];
ELECGLBPRM_STRTUPSTPHADISCNCTWRMININSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPHADISCNCTWRMININSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPHADISCNCTWRMININSTRT_CNT_U08.EngVal = 105;
ELECGLBPRM_STRTUPSTPHADISCNCTWRMININSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.LongName = 'StartUp State - Power Disconnect A Complete';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.Description = [...
  'Indication Power Disconnect A Sequence Completed'];
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.EngVal = 40;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.LongName = 'StartUp State - Power Disconnect A Start';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.Description = [...
  'Indication to start Power Disconnect A Sequence'];
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.EngVal = 20;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.LongName = 'StartUp State - Power Disconnect B Complete';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.Description = [...
  'Indication Power Disconnect B Sequence Completed'];
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.EngVal = 80;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.LongName = 'StartUp State - Power Disconnect B Start';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.Description = [...
  'Indication to start Power Disconnect B Sequence'];
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.EngVal = 60;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTRUN_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTRUN_CNT_U08.LongName = 'StartUp State - Run';
ELECGLBPRM_STRTUPSTRUN_CNT_U08.Description = 'StartUp State in Run';
ELECGLBPRM_STRTUPSTRUN_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTRUN_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTRUN_CNT_U08.EngVal = 140;
ELECGLBPRM_STRTUPSTRUN_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.LongName = 'StartUp State - Temporal Monitor Initialization Complete';
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.Description = [...
  'Indication Temporal Monitor Initialization  Completed'];
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.EngVal = 60;
ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.LongName = 'StartUp State - Temporal Monitor Initialization Start';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Temporal Monitor Initialization'];
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngVal = 40;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.LongName = 'StartUp State - Warm Initialization Complete';
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.Description = [...
  'Indication to start Warm Initialization Complete'];
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.EngVal = 120;
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.Define = 'Global';


ELECGLBPRM_TRIMINVLDFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_TRIMINVLDFLT_CNT_U08.LongName = 'Trim Invalid Fault';
ELECGLBPRM_TRIMINVLDFLT_CNT_U08.Description = 'Trim is Invalid';
ELECGLBPRM_TRIMINVLDFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_TRIMINVLDFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_TRIMINVLDFLT_CNT_U08.EngVal = 1;
ELECGLBPRM_TRIMINVLDFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_VRNRERRFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_VRNRERRFLT_CNT_U08.LongName = 'Vernier Error Fault';
ELECGLBPRM_VRNRERRFLT_CNT_U08.Description = 'Vernier Error Fault';
ELECGLBPRM_VRNRERRFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_VRNRERRFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_VRNRERRFLT_CNT_U08.EngVal = 2;
ELECGLBPRM_VRNRERRFLT_CNT_U08.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
