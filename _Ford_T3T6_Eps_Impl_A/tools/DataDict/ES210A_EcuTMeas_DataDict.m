%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 25-Sep-2017 16:31:24       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES210A = DataDict.FDD;
ES210A.Version = '4.2.X';
ES210A.LongName = 'Ecu Temperature Measurement';
ES210A.ShoName  = 'EcuTMeas';
ES210A.DesignASIL = 'B';
ES210A.Description = [...
  'Measures and diagnoses an analog based temperature sensor on ECU.  Thi' ...
  's particular design can tolerate a transfer function that is not neces' ...
  'sarily linear but can be interpolated with 8 different XY pairs.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
EcuTMeasInit1 = DataDict.Runnable;
EcuTMeasInit1.Context = 'Rte';
EcuTMeasInit1.TimeStep = 0;
EcuTMeasInit1.Description = 'Init Function';

EcuTMeasPer1 = DataDict.Runnable;
EcuTMeasPer1.Context = 'Rte';
EcuTMeasPer1.TimeStep = 0.1;
EcuTMeasPer1.Description = 'Periodic';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
CnvSnpshtData_f32 = DataDict.Client;
CnvSnpshtData_f32.CallLocation = {'EcuTMeasPer1'};
CnvSnpshtData_f32.Description = [...
  'Convert a float data type to a uint32 data type'];
CnvSnpshtData_f32.Return = DataDict.CSReturn;
CnvSnpshtData_f32.Return.Type = 'None';
CnvSnpshtData_f32.Return.Min = [];
CnvSnpshtData_f32.Return.Max = [];
CnvSnpshtData_f32.Return.TestTolerance = [];
CnvSnpshtData_f32.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_f32.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_f32.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_f32.Arguments(1).EngMin = 0;
CnvSnpshtData_f32.Arguments(1).EngMax = 4294967295;
CnvSnpshtData_f32.Arguments(1).TestTolerance = 0;
CnvSnpshtData_f32.Arguments(1).Units = 'Cnt';
CnvSnpshtData_f32.Arguments(1).Direction = 'Out';
CnvSnpshtData_f32.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_f32.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_f32.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_f32.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_f32.Arguments(2).EngDT = dt.float32;
CnvSnpshtData_f32.Arguments(2).EngMin = -3.402823466e+38;
CnvSnpshtData_f32.Arguments(2).EngMax = 3.402823466e+38;
CnvSnpshtData_f32.Arguments(2).Units = 'Cnt';
CnvSnpshtData_f32.Arguments(2).Direction = 'In';
CnvSnpshtData_f32.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_f32.Arguments(2).Description = [...
  'Input for converting Snapshot data of type float32'];


CnvSnpshtData_logl = DataDict.Client;
CnvSnpshtData_logl.CallLocation = {'EcuTMeasPer1'};
CnvSnpshtData_logl.Description = [...
  'Convert a logical data type to a uint32 data type'];
CnvSnpshtData_logl.Return = DataDict.CSReturn;
CnvSnpshtData_logl.Return.Type = 'None';
CnvSnpshtData_logl.Return.Min = [];
CnvSnpshtData_logl.Return.Max = [];
CnvSnpshtData_logl.Return.TestTolerance = [];
CnvSnpshtData_logl.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_logl.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_logl.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_logl.Arguments(1).EngMin = 0;
CnvSnpshtData_logl.Arguments(1).EngMax = 1;
CnvSnpshtData_logl.Arguments(1).TestTolerance = 0;
CnvSnpshtData_logl.Arguments(1).Units = 'Cnt';
CnvSnpshtData_logl.Arguments(1).Direction = 'Out';
CnvSnpshtData_logl.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_logl.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_logl.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_logl.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_logl.Arguments(2).EngDT = dt.lgc;
CnvSnpshtData_logl.Arguments(2).EngMin = 0;
CnvSnpshtData_logl.Arguments(2).EngMax = 1;
CnvSnpshtData_logl.Arguments(2).Units = 'Cnt';
CnvSnpshtData_logl.Arguments(2).Direction = 'In';
CnvSnpshtData_logl.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_logl.Arguments(2).Description = [...
  'Input for converting Snapshot data of type boolean'];


GetNtcActv = DataDict.Client;
GetNtcActv.CallLocation = {'EcuTMeasPer1'};
GetNtcActv.Description = 'Get NTC Active';
GetNtcActv.Return = DataDict.CSReturn;
GetNtcActv.Return.Type = 'Standard';
GetNtcActv.Return.Min = 0;
GetNtcActv.Return.Max = 1;
GetNtcActv.Return.TestTolerance = 0;
GetNtcActv.Return.Description = 'None';
GetNtcActv.Arguments(1) = DataDict.CSArguments;
GetNtcActv.Arguments(1).Name = 'NtcNr';
GetNtcActv.Arguments(1).EngDT = enum.NtcNr1;
GetNtcActv.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcActv.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcActv.Arguments(1).Units = 'Cnt';
GetNtcActv.Arguments(1).Direction = 'In';
GetNtcActv.Arguments(1).InitRowCol = [1  1];
GetNtcActv.Arguments(1).Description = '';
GetNtcActv.Arguments(2) = DataDict.CSArguments;
GetNtcActv.Arguments(2).Name = 'NtcActv';
GetNtcActv.Arguments(2).EngDT = dt.lgc;
GetNtcActv.Arguments(2).EngMin = 0;
GetNtcActv.Arguments(2).EngMax = 1;
GetNtcActv.Arguments(2).TestTolerance = 0;
GetNtcActv.Arguments(2).Units = 'Cnt';
GetNtcActv.Arguments(2).Direction = 'Out';
GetNtcActv.Arguments(2).InitRowCol = [1  1];
GetNtcActv.Arguments(2).Description = '';


SetNtcStsAndSnpshtData = DataDict.Client;
SetNtcStsAndSnpshtData.CallLocation = {'EcuTMeasPer1'};
SetNtcStsAndSnpshtData.Description = 'Set NTC Status And Snapshot Data';
SetNtcStsAndSnpshtData.Return = DataDict.CSReturn;
SetNtcStsAndSnpshtData.Return.Type = 'Standard';
SetNtcStsAndSnpshtData.Return.Min = 0;
SetNtcStsAndSnpshtData.Return.Max = 1;
SetNtcStsAndSnpshtData.Return.TestTolerance = 0;
SetNtcStsAndSnpshtData.Return.Description = 'None';
SetNtcStsAndSnpshtData.Arguments(1) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(1).Name = 'NtcNr';
SetNtcStsAndSnpshtData.Arguments(1).EngDT = enum.NtcNr1;
SetNtcStsAndSnpshtData.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcStsAndSnpshtData.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcStsAndSnpshtData.Arguments(1).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(1).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(1).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(1).Description = 'NTC Number';
SetNtcStsAndSnpshtData.Arguments(2) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(2).Name = 'NtcStInfo';
SetNtcStsAndSnpshtData.Arguments(2).EngDT = dt.u08;
SetNtcStsAndSnpshtData.Arguments(2).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(2).EngMax = 255;
SetNtcStsAndSnpshtData.Arguments(2).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(2).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(2).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(2).Description = 'NTC State Info';
SetNtcStsAndSnpshtData.Arguments(3) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(3).Name = 'NtcSts';
SetNtcStsAndSnpshtData.Arguments(3).EngDT = enum.NtcSts1;
SetNtcStsAndSnpshtData.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcStsAndSnpshtData.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcStsAndSnpshtData.Arguments(3).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(3).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(3).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(3).Description = 'NTC Status';
SetNtcStsAndSnpshtData.Arguments(4) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(4).Name = 'DebStep';
SetNtcStsAndSnpshtData.Arguments(4).EngDT = dt.u16;
SetNtcStsAndSnpshtData.Arguments(4).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(4).EngMax = 65535;
SetNtcStsAndSnpshtData.Arguments(4).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(4).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(4).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(4).Description = 'Debounce Step';
SetNtcStsAndSnpshtData.Arguments(5) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(5).Name = 'SpclSnpshtData0';
SetNtcStsAndSnpshtData.Arguments(5).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(5).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(5).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(5).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(5).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(5).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(5).Description = 'Special Snapshot Data 0';
SetNtcStsAndSnpshtData.Arguments(6) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(6).Name = 'SpclSnpshtData1';
SetNtcStsAndSnpshtData.Arguments(6).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(6).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(6).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(6).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(6).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(6).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(6).Description = 'Special Snapshot Data 1';
SetNtcStsAndSnpshtData.Arguments(7) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(7).Name = 'SpclSnpshtData2';
SetNtcStsAndSnpshtData.Arguments(7).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(7).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(7).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(7).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(7).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(7).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(7).Description = 'Special Snapshot Data 2';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EcuT = DataDict.IpSignal;
EcuT.LongName = 'Ecu Temperature';
EcuT.Description = 'Ecu Temperature from ADC';
EcuT.DocUnits = 'Volt';
EcuT.EngDT = dt.float32;
EcuT.EngInit = 0;
EcuT.EngMin = 0;
EcuT.EngMax = 5;
EcuT.ReadIn = {'EcuTMeasInit1','EcuTMeasPer1'};
EcuT.ReadType = 'Rte';


EcuTAdcFaild = DataDict.IpSignal;
EcuTAdcFaild.LongName = 'Ecu Temperature Adc Failed';
EcuTAdcFaild.Description = 'Ecu Temperature Adc Failed';
EcuTAdcFaild.DocUnits = 'Cnt';
EcuTAdcFaild.EngDT = dt.lgc;
EcuTAdcFaild.EngInit = 0;
EcuTAdcFaild.EngMin = 0;
EcuTAdcFaild.EngMax = 1;
EcuTAdcFaild.ReadIn = {'EcuTMeasPer1'};
EcuTAdcFaild.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DiagcStsLimdTPrfmnc = DataDict.OpSignal;
DiagcStsLimdTPrfmnc.LongName = 'Diagnostic Status Limited Temperature Performance';
DiagcStsLimdTPrfmnc.Description = [...
  'Flag that indicates the connected components to use the Default Temper' ...
  'ature value'];
DiagcStsLimdTPrfmnc.DocUnits = 'Cnt';
DiagcStsLimdTPrfmnc.SwcShoName = 'EcuTMeas';
DiagcStsLimdTPrfmnc.EngDT = dt.lgc;
DiagcStsLimdTPrfmnc.EngInit = 0;
DiagcStsLimdTPrfmnc.EngMin = 0;
DiagcStsLimdTPrfmnc.EngMax = 1;
DiagcStsLimdTPrfmnc.TestTolerance = 0;
DiagcStsLimdTPrfmnc.WrittenIn = {'EcuTMeasPer1'};
DiagcStsLimdTPrfmnc.WriteType = 'Rte';


EcuTFild = DataDict.OpSignal;
EcuTFild.LongName = 'Ecu Temperature Filtered';
EcuTFild.Description = 'Filtered temperature';
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.SwcShoName = 'EcuTMeas';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 25;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.TestTolerance = 1;
EcuTFild.WrittenIn = {'EcuTMeasPer1', 'EcuTMeasInit1'};
EcuTFild.WriteType = 'Rte';



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
dEcuTMeasEcuTCalcd = DataDict.Display;
dEcuTMeasEcuTCalcd.LongName = 'ECU Temperature Calculated';
dEcuTMeasEcuTCalcd.Description = [...
  'ECU Temperature that was calculated with the linear interpolation meth' ...
  'od'];
dEcuTMeasEcuTCalcd.DocUnits = 'DegCgrd';
dEcuTMeasEcuTCalcd.EngDT = dt.float32;
dEcuTMeasEcuTCalcd.EngMin = -50;
dEcuTMeasEcuTCalcd.EngMax = 150;
dEcuTMeasEcuTCalcd.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
EcuTFilStVari = DataDict.PIM;
EcuTFilStVari.LongName = 'Ecu Temperature Measure Filter State Variable';
EcuTFilStVari.Description = [...
  'Low pass filter used for ECU temperatire'];
EcuTFilStVari.DocUnits = 'Uls';
EcuTFilStVari.EngDT = struct.FilLpRec1;
EcuTFilStVari.EngMin = [struct('FilSt',-50,'FilGain',0)];
EcuTFilStVari.EngMax = [struct('FilSt',150,'FilGain',1)];
EcuTFilStVari.InitRowCol = [1  1];



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


ECUTFAILDADC_CNT_U08 = DataDict.Constant;
ECUTFAILDADC_CNT_U08.LongName = 'Ecu Temperature Failed ADC';
ECUTFAILDADC_CNT_U08.Description = [...
  'NTC State info value for a failure in the EcuT ADC'];
ECUTFAILDADC_CNT_U08.DocUnits = 'Cnt';
ECUTFAILDADC_CNT_U08.EngDT = dt.u08;
ECUTFAILDADC_CNT_U08.EngVal = 4;
ECUTFAILDADC_CNT_U08.Define = 'Local';


ECUTFAILDHI_CNT_U08 = DataDict.Constant;
ECUTFAILDHI_CNT_U08.LongName = 'Ecu Temperature Failed High';
ECUTFAILDHI_CNT_U08.Description = [...
  'NTC State info value for the EcuT failing high'];
ECUTFAILDHI_CNT_U08.DocUnits = 'Cnt';
ECUTFAILDHI_CNT_U08.EngDT = dt.u08;
ECUTFAILDHI_CNT_U08.EngVal = 1;
ECUTFAILDHI_CNT_U08.Define = 'Local';


ECUTFAILDLO_CNT_U08 = DataDict.Constant;
ECUTFAILDLO_CNT_U08.LongName = 'Ecu Temperature Failed Low';
ECUTFAILDLO_CNT_U08.Description = [...
  'NTC State info value for the EcuT failing low'];
ECUTFAILDLO_CNT_U08.DocUnits = 'Cnt';
ECUTFAILDLO_CNT_U08.EngDT = dt.u08;
ECUTFAILDLO_CNT_U08.EngVal = 2;
ECUTFAILDLO_CNT_U08.Define = 'Local';


ECUTMEAS_DFTT_DEGCGRD_F32 = DataDict.ConfigParam;
ECUTMEAS_DFTT_DEGCGRD_F32.LongName = 'Default Temperature Used in Fault Cases';
ECUTMEAS_DFTT_DEGCGRD_F32.Description = 'Default Temp for fault conditions';
ECUTMEAS_DFTT_DEGCGRD_F32.IsBuildPrm = false;
ECUTMEAS_DFTT_DEGCGRD_F32.DocUnits = 'DegCgrd';
ECUTMEAS_DFTT_DEGCGRD_F32.EngDT = dt.float32;
ECUTMEAS_DFTT_DEGCGRD_F32.EngVal = 60;
ECUTMEAS_DFTT_DEGCGRD_F32.EngMin = -50;
ECUTMEAS_DFTT_DEGCGRD_F32.EngMax = 150;
ECUTMEAS_DFTT_DEGCGRD_F32.Define = 'Global';


ECUTMEAS_ECUTX_VOLT_U3P13 = DataDict.ConfigParam;
ECUTMEAS_ECUTX_VOLT_U3P13.LongName = 'Ecu Temperature X Table';
ECUTMEAS_ECUTX_VOLT_U3P13.Description = [...
  'This is the X table used as part of a linear interoplation to translat' ...
  'e input analog measurements in volts to temperature'];
ECUTMEAS_ECUTX_VOLT_U3P13.IsBuildPrm = false;
ECUTMEAS_ECUTX_VOLT_U3P13.DocUnits = 'Volt';
ECUTMEAS_ECUTX_VOLT_U3P13.EngDT = dt.u3p13;
ECUTMEAS_ECUTX_VOLT_U3P13.EngVal =  ...
   [0           0.7143           1.4286           2.1429           2.8571           3.5714           4.2857                5];
ECUTMEAS_ECUTX_VOLT_U3P13.EngMin = 0;
ECUTMEAS_ECUTX_VOLT_U3P13.EngMax = 5;
ECUTMEAS_ECUTX_VOLT_U3P13.Define = 'Global';


ECUTMEAS_ECUTY_DEGCGRD_S8P7 = DataDict.ConfigParam;
ECUTMEAS_ECUTY_DEGCGRD_S8P7.LongName = 'Ecu Temperature Y Table';
ECUTMEAS_ECUTY_DEGCGRD_S8P7.Description = [...
  'This is the Y table used as part of a linear interoplation to translat' ...
  'e input analog measurements in volts to temperature'];
ECUTMEAS_ECUTY_DEGCGRD_S8P7.IsBuildPrm = false;
ECUTMEAS_ECUTY_DEGCGRD_S8P7.DocUnits = 'DegCgrd';
ECUTMEAS_ECUTY_DEGCGRD_S8P7.EngDT = dt.s8p7;
ECUTMEAS_ECUTY_DEGCGRD_S8P7.EngVal =  ...
   [-50         -21.4286           7.1429          35.7143      64.28571429          92.8571         121.4286              150];
ECUTMEAS_ECUTY_DEGCGRD_S8P7.EngMin = -50;
ECUTMEAS_ECUTY_DEGCGRD_S8P7.EngMax = 150;
ECUTMEAS_ECUTY_DEGCGRD_S8P7.Define = 'Global';


ECUTMEAS_FILTAU_HZ_F32 = DataDict.ConfigParam;
ECUTMEAS_FILTAU_HZ_F32.LongName = 'Temperature Software Filter Time Constant';
ECUTMEAS_FILTAU_HZ_F32.Description = [...
  'Sets the time constant for filtering the temperature measurement'];
ECUTMEAS_FILTAU_HZ_F32.IsBuildPrm = false;
ECUTMEAS_FILTAU_HZ_F32.DocUnits = 'Hz';
ECUTMEAS_FILTAU_HZ_F32.EngDT = dt.float32;
ECUTMEAS_FILTAU_HZ_F32.EngVal = 100;
ECUTMEAS_FILTAU_HZ_F32.EngMin = 0.1;
ECUTMEAS_FILTAU_HZ_F32.EngMax = 100;
ECUTMEAS_FILTAU_HZ_F32.Define = 'Global';


ECUTMEAS_NTC0X045FAILSTEP_CNT_U16 = DataDict.ConfigParam;
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.LongName = 'Error Accumulator Test Step Size for Failed Ecu Temperature Test';
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.Description = 'Increments the error accumulator';
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.IsBuildPrm = false;
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.DocUnits = 'Cnt';
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.EngDT = dt.u16;
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.EngVal = 3000;
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.EngMin = 0;
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.EngMax = 65535;
ECUTMEAS_NTC0X045FAILSTEP_CNT_U16.Define = 'Global';


ECUTMEAS_NTC0X045PASSSTEP_CNT_U16 = DataDict.ConfigParam;
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.LongName = 'Error Accumulator Test Step Size for Pass Ecu Temperature Test';
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.Description = 'Decrements the error accumulator';
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.IsBuildPrm = false;
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.DocUnits = 'Cnt';
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.EngDT = dt.u16;
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.EngVal = 3000;
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.EngMin = 0;
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.EngMax = 65535;
ECUTMEAS_NTC0X045PASSSTEP_CNT_U16.Define = 'Global';


ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32 = DataDict.ConfigParam;
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.LongName = 'Diagnostic Maximum Temperature Limit';
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.Description = [...
  'Identifies the max temperature allowed to accumulate a diagnostic erro' ...
  'r'];
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.IsBuildPrm = false;
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.DocUnits = 'DegCgrd';
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.EngDT = dt.float32;
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.EngVal = 145;
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.EngMin = -51;
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.EngMax = 151;
ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32.Define = 'Global';


ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32 = DataDict.ConfigParam;
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.LongName = 'Diagnostic Minimum Temperature Limit';
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.Description = [...
  'Identifies the min temperature allowed to accumulate a diagnostic erro' ...
  'r'];
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.IsBuildPrm = false;
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.DocUnits = 'DegCgrd';
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.EngDT = dt.float32;
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.EngVal = -45;
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.EngMin = -51;
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.EngMax = 151;
ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32.Define = 'Global';


ECUTPASSD_CNT_U08 = DataDict.Constant;
ECUTPASSD_CNT_U08.LongName = 'Ecu Temperature Passed';
ECUTPASSD_CNT_U08.Description = [...
  'NTC State info value for the EcuT passing'];
ECUTPASSD_CNT_U08.DocUnits = 'Cnt';
ECUTPASSD_CNT_U08.EngDT = dt.u08;
ECUTPASSD_CNT_U08.EngVal = 0;
ECUTPASSD_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
TMeasFlt = DataDict.NTC;
TMeasFlt.NtcNr = NtcNr1.NTCNR_0X045;
TMeasFlt.NtcTyp = 'Deb';
TMeasFlt.LongName = 'Temperature Measure Fault';
TMeasFlt.Description = 'Temperature Measure Fault';
TMeasFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
TMeasFlt.NtcStInfo.Bit0Descr = 'High Temperature';
TMeasFlt.NtcStInfo.Bit1Descr = 'Low Temperature';
TMeasFlt.NtcStInfo.Bit2Descr = 'ADC Failed';
TMeasFlt.NtcStInfo.Bit3Descr = 'Unused';
TMeasFlt.NtcStInfo.Bit4Descr = 'Unused';
TMeasFlt.NtcStInfo.Bit5Descr = 'Unused';
TMeasFlt.NtcStInfo.Bit6Descr = 'Unused';
TMeasFlt.NtcStInfo.Bit7Descr = 'Unused';
TMeasFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
