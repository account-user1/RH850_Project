%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 22-Sep-2017 13:41:33       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: nz2654 %          %
%%-----------------------------------------------------------------------%

AR100A = DataDict.FDD;
AR100A.Version = '1.1.X';
AR100A.LongName = 'Nexteer Math';
AR100A.ShoName  = 'NxtrMath';
AR100A.DesignASIL = 'QM';
AR100A.Description = [...
  'The Nexteer math encompasses a number of inline functions for use in o' ...
  'ther software components.  In addition, it contains the functionality ' ...
  'for setting a trouble code when an error is detected by the C standard' ...
  ' library.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
NxtrMathInit1 = DataDict.Runnable;
NxtrMathInit1.Context = 'Rte';
NxtrMathInit1.TimeStep = 0;
NxtrMathInit1.Description = [...
  'The init function sets the NTC_0x03A status to PASSD so long as an err' ...
  'or was not reported before the init function runs.'];

NxtrMathPer1 = DataDict.Runnable;
NxtrMathPer1.Context = 'Rte';
NxtrMathPer1.TimeStep = 0.1;
NxtrMathPer1.Description = [...
  'The periodic function monitors to global shared variable that is writt' ...
  'en by __gh_set_errno and, if non-zero, sets NTCNR_0x03A to a status of' ...
  ' FAILD using the lowest eight bits of the error number for the paramet' ...
  'er byte.'];

InjSwFpuErr = DataDict.SrvRunnable;
InjSwFpuErr.Context = 'NonRte';
InjSwFpuErr.Description = 'Inject Software FPU Error';
InjSwFpuErr.Return = DataDict.CSReturn;
InjSwFpuErr.Return.Type = 'None';
InjSwFpuErr.Return.Min = [];
InjSwFpuErr.Return.Max = [];
InjSwFpuErr.Return.TestTolerance = [];

gh_set_errno = DataDict.SrvRunnable;
gh_set_errno.Context = 'NonRte';
gh_set_errno.Description = [...
  'The actual function name is __gh_set_errno but MATLAB prevents functio' ...
  'ns defined here from starting with underscores.  This oddly named func' ...
  'tion is expected to replace the Green Hills standard C library functio' ...
  'n by the same name.  The function is called to set the error code when' ...
  'ever an error is detected in a library function.'];
gh_set_errno.Return = DataDict.CSReturn;
gh_set_errno.Return.Type = 'None';
gh_set_errno.Return.Min = [];
gh_set_errno.Return.Max = [];
gh_set_errno.Return.TestTolerance = [];
gh_set_errno.Arguments(1) = DataDict.CSArguments;
gh_set_errno.Arguments(1).Name = 'ErrCod';
gh_set_errno.Arguments(1).EngDT = dt.u32;
gh_set_errno.Arguments(1).EngMin = 0;
gh_set_errno.Arguments(1).EngMax = 4294967295;
gh_set_errno.Arguments(1).Units = 'Cnt';
gh_set_errno.Arguments(1).Direction = 'In';
gh_set_errno.Arguments(1).InitRowCol = [1  1];
gh_set_errno.Arguments(1).Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ReadErrInjReg = DataDict.Client;
ReadErrInjReg.CallLocation = {'InjSwFpuErr'};
ReadErrInjReg.Description = 'Read BRAMDAT2';
ReadErrInjReg.Return = DataDict.CSReturn;
ReadErrInjReg.Return.Type = 'None';
ReadErrInjReg.Return.Min = [];
ReadErrInjReg.Return.Max = [];
ReadErrInjReg.Return.TestTolerance = [];
ReadErrInjReg.Arguments(1) = DataDict.CSArguments;
ReadErrInjReg.Arguments(1).Name = 'ErrId';
ReadErrInjReg.Arguments(1).EngDT = dt.u32;
ReadErrInjReg.Arguments(1).EngMin = 0;
ReadErrInjReg.Arguments(1).EngMax = 4294967295;
ReadErrInjReg.Arguments(1).TestTolerance = 0;
ReadErrInjReg.Arguments(1).Units = 'Cnt';
ReadErrInjReg.Arguments(1).Direction = 'Out';
ReadErrInjReg.Arguments(1).InitRowCol = [1  1];
ReadErrInjReg.Arguments(1).Description = 'None';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'NxtrMathInit1','NxtrMathPer1'};
SetNtcSts.Description = [...
  'Diagnostic manager function to set/clear Nexteer trouble codes (NTCs)'];
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = '';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = '';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = '';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = '';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = '';



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
MCUDIAGCERRINJ = DataDict.ConfigParam;
MCUDIAGCERRINJ.LongName = 'MCU Diagnostic Error Injection';
MCUDIAGCERRINJ.Description = [...
  'This is false for production builds.  It is set to true at compile tim' ...
  'e only for s/w special builds with MCU Error Injection active.'];
MCUDIAGCERRINJ.IsBuildPrm = false;
MCUDIAGCERRINJ.DocUnits = 'Cnt';
MCUDIAGCERRINJ.EngDT = dt.lgc;
MCUDIAGCERRINJ.EngVal = 0;
MCUDIAGCERRINJ.EngMin = 0;
MCUDIAGCERRINJ.EngMax = 1;
MCUDIAGCERRINJ.Define = 'Global';


MCUERRINJ_NTC003ABIT22CASE01_CNT_U32 = DataDict.Constant;
MCUERRINJ_NTC003ABIT22CASE01_CNT_U32.LongName = 'MCU Error Injection Id NTC0x03A Bit 22 Case 1';
MCUERRINJ_NTC003ABIT22CASE01_CNT_U32.Description = [...
  'BRAMDAT2 value is compared to this constant to inject the respective f' ...
  'ault'];
MCUERRINJ_NTC003ABIT22CASE01_CNT_U32.DocUnits = 'Cnt';
MCUERRINJ_NTC003ABIT22CASE01_CNT_U32.EngDT = dt.u32;
MCUERRINJ_NTC003ABIT22CASE01_CNT_U32.EngVal = 3809793;
MCUERRINJ_NTC003ABIT22CASE01_CNT_U32.Define = 'Global';


NOERR_CNT_S32 = DataDict.Constant;
NOERR_CNT_S32.LongName = 'No Error';
NOERR_CNT_S32.Description = [...
  'Value used to compare against the stored error codethat specifically i' ...
  'ndicates that no error is present. '];
NOERR_CNT_S32.DocUnits = 'Cnt';
NOERR_CNT_S32.EngDT = dt.s32;
NOERR_CNT_S32.EngVal = 0;
NOERR_CNT_S32.Define = 'Local';


STD_ON = DataDict.Constant;
STD_ON.LongName = 'Standard On';
STD_ON.Description = 'TRUE';
STD_ON.DocUnits = 'Cnt';
STD_ON.EngDT = dt.lgc;
STD_ON.EngVal = 1;
STD_ON.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
SwLibErr = DataDict.NTC;
SwLibErr.NtcNr = NtcNr1.NTCNR_0X03A;
SwLibErr.NtcTyp = 'None';
SwLibErr.LongName = 'Software Library Error';
SwLibErr.Description = 'An error has occurred in the standard library.  The parameter byte is actually the lower eight bits of the error code which is standardized.  Search the web for "errno" for a complete list of possible values and their meanings.';
SwLibErr.NtcStInfo = DataDict.NtcStInfoIdx;
SwLibErr.NtcStInfo.Idx(1).EngVal = 33;
SwLibErr.NtcStInfo.Idx(1).Descr = 'Math argument is out of domain of function.';
SwLibErr.NtcStInfo.Idx(2).EngVal = 34;
SwLibErr.NtcStInfo.Idx(2).Descr = 'Math result is not representable.';
SwLibErr.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
