%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 05-Sep-2017 18:49:07       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM112B = DataDict.FDD;
CM112B.Version = '1.0.X';
CM112B.LongName = 'Core Voltage Monitor';
CM112B.ShoName  = 'CoreVltgMonr';
CM112B.DesignASIL = 'D';
CM112B.Description = [...
  'The CoreVltgMonr function references a peripheral inside of the microc' ...
  'ontroller that provides a startup test of the CVM'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
CoreVltgMonrInit1 = DataDict.Runnable;
CoreVltgMonrInit1.Context = 'NonRte';
CoreVltgMonrInit1.TimeStep = 0;
CoreVltgMonrInit1.Description = [...
  'Core Voltage Peripheral Monitor Startup Test'];

CoreVltgMonrInit2 = DataDict.Runnable;
CoreVltgMonrInit2.Context = 'Rte';
CoreVltgMonrInit2.TimeStep = 0;
CoreVltgMonrInit2.Description = 'Used to set the Faults';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetMcuDiagcIdnData = DataDict.Client;
GetMcuDiagcIdnData.CallLocation = {'CoreVltgMonrInit1'};
GetMcuDiagcIdnData.Description = 'None';
GetMcuDiagcIdnData.Return = DataDict.CSReturn;
GetMcuDiagcIdnData.Return.Type = 'None';
GetMcuDiagcIdnData.Return.Min = [];
GetMcuDiagcIdnData.Return.Max = [];
GetMcuDiagcIdnData.Return.TestTolerance = [];
GetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
GetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
GetMcuDiagcIdnData.Arguments(1).EngDT = enum.P1mcDiagc1;
GetMcuDiagcIdnData.Arguments(1).EngMin = 0;
GetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
GetMcuDiagcIdnData.Arguments(1).TestTolerance = 0;
GetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
GetMcuDiagcIdnData.Arguments(1).Direction = 'Out';
GetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
GetMcuDiagcIdnData.Arguments(1).Description = 'None';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'CoreVltgMonrInit2'};
SetNtcSts.Description = 'To set NTC status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'Return parameters';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NTC number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'NTC status information';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'NTC Status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Debounce step for an NTC';



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
dCoreVltgMonrStrtUpTestCmpl = DataDict.Display;
dCoreVltgMonrStrtUpTestCmpl.LongName = 'Core Voltage  Monitor Start Up Test Complete';
dCoreVltgMonrStrtUpTestCmpl.Description = 'Display variable to indicate the core voltage monitor start up test has been run regardless of the outcome of the test.';
dCoreVltgMonrStrtUpTestCmpl.DocUnits = 'Cnt';
dCoreVltgMonrStrtUpTestCmpl.EngDT = dt.lgc;
dCoreVltgMonrStrtUpTestCmpl.EngMin = 0;
dCoreVltgMonrStrtUpTestCmpl.EngMax = 1;
dCoreVltgMonrStrtUpTestCmpl.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
CoreVltgMonrStrtUpFltPrmByte = DataDict.PIM;
CoreVltgMonrStrtUpFltPrmByte.LongName = 'Core Voltage Monitor Start Up Fault Parameter Byte';
CoreVltgMonrStrtUpFltPrmByte.Description = [...
  'Core Voltage Monitor Start Up Fault Parameter Byte'];
CoreVltgMonrStrtUpFltPrmByte.DocUnits = 'Cnt';
CoreVltgMonrStrtUpFltPrmByte.EngDT = dt.u08;
CoreVltgMonrStrtUpFltPrmByte.EngMin = 0;
CoreVltgMonrStrtUpFltPrmByte.EngMax = 255;
CoreVltgMonrStrtUpFltPrmByte.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
COREVLTGMONRCLRFLTPRMBYTE_CNT_U08 = DataDict.Constant;
COREVLTGMONRCLRFLTPRMBYTE_CNT_U08.LongName = 'Core Voltage Monitor Clear Fault Parameter Byte ';
COREVLTGMONRCLRFLTPRMBYTE_CNT_U08.Description = [...
  'Paramter Value for Core Voltage Monitor Clear Fault '];
COREVLTGMONRCLRFLTPRMBYTE_CNT_U08.DocUnits = 'Cnt';
COREVLTGMONRCLRFLTPRMBYTE_CNT_U08.EngDT = dt.u08;
COREVLTGMONRCLRFLTPRMBYTE_CNT_U08.EngVal = 4;
COREVLTGMONRCLRFLTPRMBYTE_CNT_U08.Define = 'Local';


COREVLTGMONRDETNENAMASK_CNT_U08 = DataDict.Constant;
COREVLTGMONRDETNENAMASK_CNT_U08.LongName = 'Core Voltage Monitor Detection Enable Mask';
COREVLTGMONRDETNENAMASK_CNT_U08.Description = [...
  'Hex: 0xB4. Register value to enable CVM Internal Reset, enable CVMOUT ' ...
  'and CVM Reset during FBIST and to disable diagnostic mode for CVM.'];
COREVLTGMONRDETNENAMASK_CNT_U08.DocUnits = 'Cnt';
COREVLTGMONRDETNENAMASK_CNT_U08.EngDT = dt.u08;
COREVLTGMONRDETNENAMASK_CNT_U08.EngVal = 180;
COREVLTGMONRDETNENAMASK_CNT_U08.Define = 'Local';


COREVLTGMONRDETNENAREGWRFLT_CNT_U08 = DataDict.Constant;
COREVLTGMONRDETNENAREGWRFLT_CNT_U08.LongName = 'Core Voltage Monitor Detection Enable Regsiter Write Fault';
COREVLTGMONRDETNENAREGWRFLT_CNT_U08.Description = [...
  'Paramter Value for Core Voltage Monitor Detection Enable Regsiter Writ' ...
  'e Fault - Write once only Register'];
COREVLTGMONRDETNENAREGWRFLT_CNT_U08.DocUnits = 'Cnt';
COREVLTGMONRDETNENAREGWRFLT_CNT_U08.EngDT = dt.u08;
COREVLTGMONRDETNENAREGWRFLT_CNT_U08.EngVal = 8;
COREVLTGMONRDETNENAREGWRFLT_CNT_U08.Define = 'Local';


COREVLTGMONRDIAGCCTRLMASK_CNT_U08 = DataDict.Constant;
COREVLTGMONRDIAGCCTRLMASK_CNT_U08.LongName = 'Core Voltage Monitor Diagnostic Control Mask';
COREVLTGMONRDIAGCCTRLMASK_CNT_U08.Description = [...
  'Hex: 0x0C. Mask used to write CVMDIAGH,CVMDIAGLbits in CVMDIAG.'];
COREVLTGMONRDIAGCCTRLMASK_CNT_U08.DocUnits = 'Cnt';
COREVLTGMONRDIAGCCTRLMASK_CNT_U08.EngDT = dt.u08;
COREVLTGMONRDIAGCCTRLMASK_CNT_U08.EngVal = 12;
COREVLTGMONRDIAGCCTRLMASK_CNT_U08.Define = 'Local';


COREVLTGMONRFACMASK_CNT_U08 = DataDict.Constant;
COREVLTGMONRFACMASK_CNT_U08.LongName = 'Core Voltage Monitor Factor Mask ';
COREVLTGMONRFACMASK_CNT_U08.Description = [...
  'Hex: 0x83. Mask used to read/clear CVMOFLG,CVMLVFF,CVMHFF bits 0x83 fr' ...
  'om register CVMF/CVMFC'];
COREVLTGMONRFACMASK_CNT_U08.DocUnits = 'Cnt';
COREVLTGMONRFACMASK_CNT_U08.EngDT = dt.u08;
COREVLTGMONRFACMASK_CNT_U08.EngVal = 131;
COREVLTGMONRFACMASK_CNT_U08.Define = 'Local';


COREVLTGMONRFLTDETNMASK_CNT_U08 = DataDict.Constant;
COREVLTGMONRFLTDETNMASK_CNT_U08.LongName = 'Core Voltage Monitor Fault Detection Mask';
COREVLTGMONRFLTDETNMASK_CNT_U08.Description = [...
  'Hex: 0x03. Mask used to detect low violtage and High voltage faults'];
COREVLTGMONRFLTDETNMASK_CNT_U08.DocUnits = 'Cnt';
COREVLTGMONRFLTDETNMASK_CNT_U08.EngDT = dt.u08;
COREVLTGMONRFLTDETNMASK_CNT_U08.EngVal = 3;
COREVLTGMONRFLTDETNMASK_CNT_U08.Define = 'Local';


COREVLTGMONRLOOPININ_CNT_U08 = DataDict.Constant;
COREVLTGMONRLOOPININ_CNT_U08.LongName = 'Core Voltage Monitor Loop initialization';
COREVLTGMONRLOOPININ_CNT_U08.Description = [...
  'Initial value for internal loop counter'];
COREVLTGMONRLOOPININ_CNT_U08.DocUnits = 'Cnt';
COREVLTGMONRLOOPININ_CNT_U08.EngDT = dt.u08;
COREVLTGMONRLOOPININ_CNT_U08.EngVal = 5;
COREVLTGMONRLOOPININ_CNT_U08.Define = 'Local';


COREVLTGMONROUTPPINMASK_CNT_U08 = DataDict.Constant;
COREVLTGMONROUTPPINMASK_CNT_U08.LongName = 'Core Voltage Monitor Output Pin Mask ';
COREVLTGMONROUTPPINMASK_CNT_U08.Description = [...
  'Register write value for CVMDMASK register to mask CVMOUTZ pin during ' ...
  'CVM self-test'];
COREVLTGMONROUTPPINMASK_CNT_U08.DocUnits = 'Cnt';
COREVLTGMONROUTPPINMASK_CNT_U08.EngDT = dt.u08;
COREVLTGMONROUTPPINMASK_CNT_U08.EngVal = 1;
COREVLTGMONROUTPPINMASK_CNT_U08.Define = 'Local';


DLYTMRCNT_CNT_U16 = DataDict.Constant;
DLYTMRCNT_CNT_U16.LongName = 'Delay Timer Count';
DLYTMRCNT_CNT_U16.Description = 'counter used for delay';
DLYTMRCNT_CNT_U16.DocUnits = 'Cnt';
DLYTMRCNT_CNT_U16.EngDT = dt.u16;
DLYTMRCNT_CNT_U16.EngVal = 3840;
DLYTMRCNT_CNT_U16.Define = 'Local';


ERRINDCNFLTPRMBYTE_CNT_U08 = DataDict.Constant;
ERRINDCNFLTPRMBYTE_CNT_U08.LongName = 'Error Indication Fault Parameter Byte ';
ERRINDCNFLTPRMBYTE_CNT_U08.Description = [...
  'Parameter Byte value for Error Indication Fault'];
ERRINDCNFLTPRMBYTE_CNT_U08.DocUnits = 'Cnt';
ERRINDCNFLTPRMBYTE_CNT_U08.EngDT = dt.u08;
ERRINDCNFLTPRMBYTE_CNT_U08.EngVal = 2;
ERRINDCNFLTPRMBYTE_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
CoreVltgMonrStrtUpFlt = DataDict.NTC;
CoreVltgMonrStrtUpFlt.NtcNr = NtcNr1.NTCNR_0X048;
CoreVltgMonrStrtUpFlt.NtcTyp = 'None';
CoreVltgMonrStrtUpFlt.LongName = 'Core Voltage Monitor Start Up Fault';
CoreVltgMonrStrtUpFlt.Description = 'Start up Fault for uC core voltage monitor';
CoreVltgMonrStrtUpFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit0Descr = 'CVMF Read test Failed';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit1Descr = 'CVM self test Failed';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit2Descr = 'CVMF clear Failed';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit3Descr = 'Verify CVMDE Failed';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit4Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit5Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit6Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStInfo.Bit7Descr = 'Unused';
CoreVltgMonrStrtUpFlt.NtcStsLockdThisIgnCyc = 1;


%end of Data Dictionary
