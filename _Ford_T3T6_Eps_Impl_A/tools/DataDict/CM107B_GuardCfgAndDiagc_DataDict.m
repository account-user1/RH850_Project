%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 30-May-2017 15:30:31       %
%                                  Created with tool release: 2.56.0     %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM107B = DataDict.FDD;
CM107B.Version = '1.2.X';
CM107B.LongName = 'Guard Configuration and Diagnostic';
CM107B.ShoName  = 'GuardCfgAndDiagc';
CM107B.DesignASIL = 'D';
CM107B.Description = [...
  'FDD that contians guard configuration for PEG, IPG, HBG, GRG and PBG'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GuardCfgAndDiagcInit1 = DataDict.Runnable;
GuardCfgAndDiagcInit1.Context = 'NonRte';
GuardCfgAndDiagcInit1.TimeStep = 0;
GuardCfgAndDiagcInit1.Description = 'Init 1';

GuardCfgAndDiagcInit2 = DataDict.Runnable;
GuardCfgAndDiagcInit2.Context = 'Rte';
GuardCfgAndDiagcInit2.TimeStep = 0;
GuardCfgAndDiagcInit2.Description = 'Init 2';

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
