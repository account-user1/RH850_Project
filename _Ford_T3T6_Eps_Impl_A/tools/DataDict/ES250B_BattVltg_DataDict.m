%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 27-Jan-2016 14:46:15       %
%                                  Created with tool release: 2.29.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES250B = DataDict.FDD;
ES250B.Version = '1.0.X';
ES250B.LongName = 'Battery or Switched Battery Voltage Measurement and Arbitration';
ES250B.ShoName  = 'BattVltg';
ES250B.DesignASIL = 'B';
ES250B.Description = [...
  'Function produces an output voltage that is used by the software appli' ...
  'cation'];
ES250B.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
BattVltgInit1 = DataDict.Runnable;
BattVltgInit1.Context = 'Rte';
BattVltgInit1.TimeStep = 0;

BattVltgPer1 = DataDict.Runnable;
BattVltgPer1.Context = 'Rte';
BattVltgPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BattSwdVltgCorrlnSts = DataDict.IpSignal;
BattSwdVltgCorrlnSts.LongName = 'Battery Switched Voltage  Correlation Status';
BattSwdVltgCorrlnSts.DocUnits = 'Cnt';
BattSwdVltgCorrlnSts.EngDT = dt.u08;
BattSwdVltgCorrlnSts.EngInit = 2;
BattSwdVltgCorrlnSts.EngMin = 0;
BattSwdVltgCorrlnSts.EngMax = 2;
BattSwdVltgCorrlnSts.ReadIn = {'BattVltgPer1'};
BattSwdVltgCorrlnSts.ReadType = 'Rte';


BattVltg = DataDict.IpSignal;
BattVltg.LongName = 'Battery Voltage ';
BattVltg.DocUnits = 'Volt';
BattVltg.EngDT = dt.float32;
BattVltg.EngInit = 0;
BattVltg.EngMin = 0;
BattVltg.EngMax = 40;
BattVltg.ReadIn = {'BattVltgPer1'};
BattVltg.ReadType = 'Rte';


BattVltgSwd1 = DataDict.IpSignal;
BattVltgSwd1.LongName = 'Battery Voltage  Switched 1';
BattVltgSwd1.DocUnits = 'Volt';
BattVltgSwd1.EngDT = dt.float32;
BattVltgSwd1.EngInit = 0;
BattVltgSwd1.EngMin = 0;
BattVltgSwd1.EngMax = 40;
BattVltgSwd1.ReadIn = {'BattVltgPer1'};
BattVltgSwd1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
BrdgVltg = DataDict.OpSignal;
BrdgVltg.LongName = 'Bridge Voltage ';
BrdgVltg.Description = 'Output Bridge Voltage';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.SwcShoName = 'BattVltg';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.TestTolerance = 0.0078125;
BrdgVltg.WrittenIn = {'BattVltgPer1'};
BrdgVltg.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
BattVltgSwdMax = DataDict.Calibration;
BattVltgSwdMax.LongName = 'Battery Voltage  Switched Maximum';
BattVltgSwdMax.Description = [...
  'Maximum voltage at which switched voltage saturates'];
BattVltgSwdMax.DocUnits = 'Volt';
BattVltgSwdMax.EngDT = dt.float32;
BattVltgSwdMax.EngVal = 16;
BattVltgSwdMax.EngMin = 6;
BattVltgSwdMax.EngMax = 26.5;
BattVltgSwdMax.Cardinality = 'N';
BattVltgSwdMax.CustomerVisible = false;
BattVltgSwdMax.Online = false;
BattVltgSwdMax.Impact = 'L';
BattVltgSwdMax.TuningOwner = 'FDD';
BattVltgSwdMax.GraphLink = {''};
BattVltgSwdMax.Monotony = 'None';
BattVltgSwdMax.MaxGrad = 999;
BattVltgSwdMax.PortName = 'BattVltgSwdMax';



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
BattVltgPrevBattVltg = DataDict.PIM;
BattVltgPrevBattVltg.LongName = 'Battery Voltage  Previous Battery Voltage ';
BattVltgPrevBattVltg.Description = 'Previous known best value of Battery Voltage';
BattVltgPrevBattVltg.DocUnits = 'Volt';
BattVltgPrevBattVltg.EngDT = dt.float32;
BattVltgPrevBattVltg.EngMin = 6;
BattVltgPrevBattVltg.EngMax = 26.5;
BattVltgPrevBattVltg.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
BRDGFLTVLTG_VOLT_F32 = DataDict.Constant;
BRDGFLTVLTG_VOLT_F32.LongName = 'Bridge Fault Voltage';
BRDGFLTVLTG_VOLT_F32.Description = [...
  'Value that is output by this FDD if BattVltg signal is at fault'];
BRDGFLTVLTG_VOLT_F32.DocUnits = 'Volt';
BRDGFLTVLTG_VOLT_F32.EngDT = dt.float32;
BRDGFLTVLTG_VOLT_F32.EngVal = 18;
BRDGFLTVLTG_VOLT_F32.Header = 'None';
BRDGFLTVLTG_VOLT_F32.Define = 'Global';


BRDGVLTGMAX_VOLT_F32 = DataDict.Constant;
BRDGVLTGMAX_VOLT_F32.LongName = 'Maximum Bridge Voltage';
BRDGVLTGMAX_VOLT_F32.Description = [...
  'The maximum value the Bridge Voltage can acheive before it saturates'];
BRDGVLTGMAX_VOLT_F32.DocUnits = 'Volt';
BRDGVLTGMAX_VOLT_F32.EngDT = dt.float32;
BRDGVLTGMAX_VOLT_F32.EngVal = 26.5;
BRDGVLTGMAX_VOLT_F32.Header = 'Volt';
BRDGVLTGMAX_VOLT_F32.Define = 'Global';


BRDGVLTGMIN_VOLT_F32 = DataDict.Constant;
BRDGVLTGMIN_VOLT_F32.LongName = 'Minimum Bridge Voltage';
BRDGVLTGMIN_VOLT_F32.Description = [...
  'The maximum value the Bridge Voltage can acheive'];
BRDGVLTGMIN_VOLT_F32.DocUnits = 'Volt';
BRDGVLTGMIN_VOLT_F32.EngDT = dt.float32;
BRDGVLTGMIN_VOLT_F32.EngVal = 6;
BRDGVLTGMIN_VOLT_F32.Header = 'None';
BRDGVLTGMIN_VOLT_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
