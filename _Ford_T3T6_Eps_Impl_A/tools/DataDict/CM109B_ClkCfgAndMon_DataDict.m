%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Oct-2017 14:09:34       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM109B = DataDict.FDD;
CM109B.Version = '1.0.X';
CM109B.LongName = 'Clock Config And Monitoring';
CM109B.ShoName  = 'ClkCfgAndMon';
CM109B.DesignASIL = 'D';
CM109B.Description = [...
  'Nexteer Clock Monitor Config And Use'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
ClkCfgAndMonInit0 = DataDict.Runnable;
ClkCfgAndMonInit0.Context = 'NonRte';
ClkCfgAndMonInit0.TimeStep = 0;
ClkCfgAndMonInit0.Description = [...
  'Non Rte Init function to initialize the ClockMontior 5 peripheral'];

ClkCfgAndMonInit1 = DataDict.Runnable;
ClkCfgAndMonInit1.Context = 'Rte';
ClkCfgAndMonInit1.TimeStep = 0;
ClkCfgAndMonInit1.Description = 'Empty Rte Init function ';


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

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
