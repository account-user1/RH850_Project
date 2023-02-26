%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 18-Jan-2017 08:09:43       %
%                                  Created with tool release: 2.52.0     %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

AR998A = DataDict.FDD;
AR998A.Version = '1.2.X';
AR998A.LongName = 'Nexteer Det';
AR998A.ShoName  = 'NxtrDet';
AR998A.DesignASIL = 'QM';
AR998A.Description = [...
  ' Nexteer Det Component.  This component defines the Det ModuleId an en' ...
  'able flags for all Nexteer created Det Errors'];



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
NXTRDET_DIAGCMGRMODID_CNT_U16 = DataDict.Constant;
NXTRDET_DIAGCMGRMODID_CNT_U16.LongName = 'Diagnostic Manager Module ID';
NXTRDET_DIAGCMGRMODID_CNT_U16.Description = [...
  'Diagcnostic Manager Component DET Module ID'];
NXTRDET_DIAGCMGRMODID_CNT_U16.DocUnits = 'Cnt';
NXTRDET_DIAGCMGRMODID_CNT_U16.EngDT = dt.u16;
NXTRDET_DIAGCMGRMODID_CNT_U16.EngVal = 65533;
NXTRDET_DIAGCMGRMODID_CNT_U16.Define = 'Global';


NXTRDET_IMCARBNMODID_CNT_U16 = DataDict.Constant;
NXTRDET_IMCARBNMODID_CNT_U16.LongName = 'IMC Arbitration Module ID';
NXTRDET_IMCARBNMODID_CNT_U16.Description = [...
  'IMC Arbitration Component DET Module ID'];
NXTRDET_IMCARBNMODID_CNT_U16.DocUnits = 'Cnt';
NXTRDET_IMCARBNMODID_CNT_U16.EngDT = dt.u16;
NXTRDET_IMCARBNMODID_CNT_U16.EngVal = 65532;
NXTRDET_IMCARBNMODID_CNT_U16.Define = 'Global';


NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16 = DataDict.Constant;
NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16.LongName = 'Nexteer MCU Support Library Module ID';
NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16.Description = [...
  'Nexteer MCU Support Library DET Module ID'];
NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16.DocUnits = 'Cnt';
NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16.EngDT = dt.u16;
NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16.EngVal = 65535;
NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16.Define = 'Global';


NXTRDET_SYNCCRCMODID_CNT_U16 = DataDict.Constant;
NXTRDET_SYNCCRCMODID_CNT_U16.LongName = 'Syncronous CRC Module ID';
NXTRDET_SYNCCRCMODID_CNT_U16.Description = [...
  'Syncronous CRC Component DET Module ID'];
NXTRDET_SYNCCRCMODID_CNT_U16.DocUnits = 'Cnt';
NXTRDET_SYNCCRCMODID_CNT_U16.EngDT = dt.u16;
NXTRDET_SYNCCRCMODID_CNT_U16.EngVal = 65534;
NXTRDET_SYNCCRCMODID_CNT_U16.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
