%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 11-Apr-2016 17:38:37       %
%                                  Created with tool release: 2.36.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES400A = DataDict.FDD;
ES400A.Version = '1.0.X';
ES400A.LongName = 'Tuning Selection Management';
ES400A.ShoName  = 'TunSelnMngt';
ES400A.DesignASIL = 'D';
ES400A.Description = [...
  'ES400A manages run time and initialization calibration indexes for use' ...
  'in system operation and online calibration activities'];
ES400A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions
%%-------------------------------------------
TunSelnMngtInit1 = DataDict.Runnable;
TunSelnMngtInit1.Context = 'Rte';
TunSelnMngtInit1.TimeStep = 0;
TunSelnMngtInit1.Description = 'Initialization routine';

TunSelnMngtPer1 = DataDict.Runnable;
TunSelnMngtPer1.Context = 'Rte';
TunSelnMngtPer1.TimeStep = 0.01;
TunSelnMngtPer1.Description = 'Periodic function to update runtime indexes and online calibration values';

CopyCalPageReq = DataDict.SrvRunnable;
CopyCalPageReq.Context = 'Rte';
CopyCalPageReq.Description = [...
  'Queues the calibration copy from flash to RAM'];
CopyCalPageReq.Return = DataDict.CSReturn;
CopyCalPageReq.Return.Type = 'Standard';
CopyCalPageReq.Return.Min = 0;
CopyCalPageReq.Return.Max = 1;
CopyCalPageReq.Return.TestTolerance = 0;
CopyCalPageReq.Return.Description = '';
CopyCalPageReq.Arguments(1) = DataDict.CSArguments;
CopyCalPageReq.Arguments(1).Name = 'Seg_Arg';
CopyCalPageReq.Arguments(1).EngDT = dt.u08;
CopyCalPageReq.Arguments(1).EngMin = 0;
CopyCalPageReq.Arguments(1).EngMax = 255;
CopyCalPageReq.Arguments(1).Units = 'Cnt';
CopyCalPageReq.Arguments(1).Direction = 'In';
CopyCalPageReq.Arguments(1).InitRowCol = [1  1];
CopyCalPageReq.Arguments(1).Description = '';

GetCalPageReq = DataDict.SrvRunnable;
GetCalPageReq.Context = 'Rte';
GetCalPageReq.Description = [...
  'Returns page with requested calibration mode.'];
GetCalPageReq.Return = DataDict.CSReturn;
GetCalPageReq.Return.Type = 'None';
GetCalPageReq.Return.Min = [];
GetCalPageReq.Return.Max = [];
GetCalPageReq.Return.TestTolerance = [];
GetCalPageReq.Return.Description = '';
GetCalPageReq.Arguments(1) = DataDict.CSArguments;
GetCalPageReq.Arguments(1).Name = 'Seg_Arg';
GetCalPageReq.Arguments(1).EngDT = dt.u08;
GetCalPageReq.Arguments(1).EngMin = 0;
GetCalPageReq.Arguments(1).EngMax = 255;
GetCalPageReq.Arguments(1).Units = 'Cnt';
GetCalPageReq.Arguments(1).Direction = 'In';
GetCalPageReq.Arguments(1).InitRowCol = [1  1];
GetCalPageReq.Arguments(1).Description = '';
GetCalPageReq.Arguments(2) = DataDict.CSArguments;
GetCalPageReq.Arguments(2).Name = 'Mod_Arg';
GetCalPageReq.Arguments(2).EngDT = dt.u08;
GetCalPageReq.Arguments(2).EngMin = 0;
GetCalPageReq.Arguments(2).EngMax = 255;
GetCalPageReq.Arguments(2).Units = 'Cnt';
GetCalPageReq.Arguments(2).Direction = 'In';
GetCalPageReq.Arguments(2).InitRowCol = [1  1];
GetCalPageReq.Arguments(2).Description = '';
GetCalPageReq.Arguments(3) = DataDict.CSArguments;
GetCalPageReq.Arguments(3).Name = 'Page_Arg';
GetCalPageReq.Arguments(3).EngDT = dt.u08;
GetCalPageReq.Arguments(3).EngMin = 0;
GetCalPageReq.Arguments(3).EngMax = 255;
GetCalPageReq.Arguments(3).Units = 'Cnt';
GetCalPageReq.Arguments(3).Direction = 'InOut';
GetCalPageReq.Arguments(3).InitRowCol = [1  1];
GetCalPageReq.Arguments(3).Description = '';
GetCalPageReq.Arguments(4) = DataDict.CSArguments;
GetCalPageReq.Arguments(4).Name = 'Rtn_Arg';
GetCalPageReq.Arguments(4).EngDT = dt.u08;
GetCalPageReq.Arguments(4).EngMin = 0;
GetCalPageReq.Arguments(4).EngMax = 255;
GetCalPageReq.Arguments(4).Units = 'Cnt';
GetCalPageReq.Arguments(4).Direction = 'Out';
GetCalPageReq.Arguments(4).InitRowCol = [1  1];
GetCalPageReq.Arguments(4).Description = '';

GetSegInfoReq = DataDict.SrvRunnable;
GetSegInfoReq.Context = 'Rte';
GetSegInfoReq.Description = 'Returns segment information.';
GetSegInfoReq.Return = DataDict.CSReturn;
GetSegInfoReq.Return.Type = 'None';
GetSegInfoReq.Return.Min = [];
GetSegInfoReq.Return.Max = [];
GetSegInfoReq.Return.TestTolerance = [];
GetSegInfoReq.Return.Description = '';
GetSegInfoReq.Arguments(1) = DataDict.CSArguments;
GetSegInfoReq.Arguments(1).Name = 'Mod_Arg';
GetSegInfoReq.Arguments(1).EngDT = enum.GetSegMod1;
GetSegInfoReq.Arguments(1).EngMin = GetSegMod1.GETSEGMOD_ADRINFO;
GetSegInfoReq.Arguments(1).EngMax = GetSegMod1.GETSEGMOD_ADRMPG;
GetSegInfoReq.Arguments(1).Units = 'Cnt';
GetSegInfoReq.Arguments(1).Direction = 'In';
GetSegInfoReq.Arguments(1).InitRowCol = [1  1];
GetSegInfoReq.Arguments(1).Description = '';
GetSegInfoReq.Arguments(2) = DataDict.CSArguments;
GetSegInfoReq.Arguments(2).Name = 'Seg_Arg';
GetSegInfoReq.Arguments(2).EngDT = dt.u08;
GetSegInfoReq.Arguments(2).EngMin = 0;
GetSegInfoReq.Arguments(2).EngMax = 255;
GetSegInfoReq.Arguments(2).Units = 'Cnt';
GetSegInfoReq.Arguments(2).Direction = 'In';
GetSegInfoReq.Arguments(2).InitRowCol = [1  1];
GetSegInfoReq.Arguments(2).Description = '';
GetSegInfoReq.Arguments(3) = DataDict.CSArguments;
GetSegInfoReq.Arguments(3).Name = 'SegInfo_Arg';
GetSegInfoReq.Arguments(3).EngDT = dt.u08;
GetSegInfoReq.Arguments(3).EngMin = 0;
GetSegInfoReq.Arguments(3).EngMax = 255;
GetSegInfoReq.Arguments(3).Units = 'Cnt';
GetSegInfoReq.Arguments(3).Direction = 'In';
GetSegInfoReq.Arguments(3).InitRowCol = [1  1];
GetSegInfoReq.Arguments(3).Description = '';
GetSegInfoReq.Arguments(4) = DataDict.CSArguments;
GetSegInfoReq.Arguments(4).Name = 'MpgIdx_Arg';
GetSegInfoReq.Arguments(4).EngDT = dt.u08;
GetSegInfoReq.Arguments(4).EngMin = 0;
GetSegInfoReq.Arguments(4).EngMax = 255;
GetSegInfoReq.Arguments(4).Units = 'Cnt';
GetSegInfoReq.Arguments(4).Direction = 'In';
GetSegInfoReq.Arguments(4).InitRowCol = [1  1];
GetSegInfoReq.Arguments(4).Description = '';
GetSegInfoReq.Arguments(5) = DataDict.CSArguments;
GetSegInfoReq.Arguments(5).Name = 'Resp_Arg';
GetSegInfoReq.Arguments(5).EngDT = dt.u08;
GetSegInfoReq.Arguments(5).EngMin = 0;
GetSegInfoReq.Arguments(5).EngMax = 255;
GetSegInfoReq.Arguments(5).Units = 'Cnt';
GetSegInfoReq.Arguments(5).Direction = 'InOut';
GetSegInfoReq.Arguments(5).InitRowCol = [1  1];
GetSegInfoReq.Arguments(5).Description = '';
GetSegInfoReq.Arguments(6) = DataDict.CSArguments;
GetSegInfoReq.Arguments(6).Name = 'RespLen_Arg';
GetSegInfoReq.Arguments(6).EngDT = dt.u08;
GetSegInfoReq.Arguments(6).EngMin = 0;
GetSegInfoReq.Arguments(6).EngMax = 255;
GetSegInfoReq.Arguments(6).Units = 'Cnt';
GetSegInfoReq.Arguments(6).Direction = 'InOut';
GetSegInfoReq.Arguments(6).InitRowCol = [1  1];
GetSegInfoReq.Arguments(6).Description = '';
GetSegInfoReq.Arguments(7) = DataDict.CSArguments;
GetSegInfoReq.Arguments(7).Name = 'Rtn_Arg';
GetSegInfoReq.Arguments(7).EngDT = dt.u08;
GetSegInfoReq.Arguments(7).EngMin = 0;
GetSegInfoReq.Arguments(7).EngMax = 255;
GetSegInfoReq.Arguments(7).Units = 'Cnt';
GetSegInfoReq.Arguments(7).Direction = 'Out';
GetSegInfoReq.Arguments(7).InitRowCol = [1  1];
GetSegInfoReq.Arguments(7).Description = '';

OnlineTunRamAdrMpg = DataDict.SrvRunnable;
OnlineTunRamAdrMpg.Context = 'Rte';
OnlineTunRamAdrMpg.Description = [...
  'Returns RAM address for a flash address that is currently being online' ...
  ' calibrated'];
OnlineTunRamAdrMpg.Return = DataDict.CSReturn;
OnlineTunRamAdrMpg.Return.Type = 'None';
OnlineTunRamAdrMpg.Return.Min = [];
OnlineTunRamAdrMpg.Return.Max = [];
OnlineTunRamAdrMpg.Return.TestTolerance = [];
OnlineTunRamAdrMpg.Return.Description = '';
OnlineTunRamAdrMpg.Arguments(1) = DataDict.CSArguments;
OnlineTunRamAdrMpg.Arguments(1).Name = 'ReqAdr_Arg';
OnlineTunRamAdrMpg.Arguments(1).EngDT = dt.u32;
OnlineTunRamAdrMpg.Arguments(1).EngMin = 0;
OnlineTunRamAdrMpg.Arguments(1).EngMax = 4294967295;
OnlineTunRamAdrMpg.Arguments(1).Units = 'Cnt';
OnlineTunRamAdrMpg.Arguments(1).Direction = 'In';
OnlineTunRamAdrMpg.Arguments(1).InitRowCol = [1  1];
OnlineTunRamAdrMpg.Arguments(1).Description = '';
OnlineTunRamAdrMpg.Arguments(2) = DataDict.CSArguments;
OnlineTunRamAdrMpg.Arguments(2).Name = 'CorrdAdr_Arg';
OnlineTunRamAdrMpg.Arguments(2).EngDT = dt.u32;
OnlineTunRamAdrMpg.Arguments(2).EngMin = 0;
OnlineTunRamAdrMpg.Arguments(2).EngMax = 4294967295;
OnlineTunRamAdrMpg.Arguments(2).Units = 'Cnt';
OnlineTunRamAdrMpg.Arguments(2).Direction = 'InOut';
OnlineTunRamAdrMpg.Arguments(2).InitRowCol = [1  1];
OnlineTunRamAdrMpg.Arguments(2).Description = '';
OnlineTunRamAdrMpg.Arguments(3) = DataDict.CSArguments;
OnlineTunRamAdrMpg.Arguments(3).Name = 'ReqTyp_Arg';
OnlineTunRamAdrMpg.Arguments(3).EngDT = enum.AdrMpgReqTyp1;
OnlineTunRamAdrMpg.Arguments(3).EngMin = AdrMpgReqTyp1.ADRMPGREQTYP_READ;
OnlineTunRamAdrMpg.Arguments(3).EngMax = AdrMpgReqTyp1.ADRMPGREQTYP_WR;
OnlineTunRamAdrMpg.Arguments(3).Units = 'Cnt';
OnlineTunRamAdrMpg.Arguments(3).Direction = 'InOut';
OnlineTunRamAdrMpg.Arguments(3).InitRowCol = [1  1];
OnlineTunRamAdrMpg.Arguments(3).Description = '';

SetCalPageReq = DataDict.SrvRunnable;
SetCalPageReq.Context = 'Rte';
SetCalPageReq.Description = [...
  'Sets the access mode for a given segment and page'];
SetCalPageReq.Return = DataDict.CSReturn;
SetCalPageReq.Return.Type = 'None';
SetCalPageReq.Return.Min = [];
SetCalPageReq.Return.Max = [];
SetCalPageReq.Return.TestTolerance = [];
SetCalPageReq.Return.Description = '';
SetCalPageReq.Arguments(1) = DataDict.CSArguments;
SetCalPageReq.Arguments(1).Name = 'Seg_Arg';
SetCalPageReq.Arguments(1).EngDT = dt.u08;
SetCalPageReq.Arguments(1).EngMin = 0;
SetCalPageReq.Arguments(1).EngMax = 255;
SetCalPageReq.Arguments(1).Units = 'Cnt';
SetCalPageReq.Arguments(1).Direction = 'In';
SetCalPageReq.Arguments(1).InitRowCol = [1  1];
SetCalPageReq.Arguments(1).Description = '';
SetCalPageReq.Arguments(2) = DataDict.CSArguments;
SetCalPageReq.Arguments(2).Name = 'Mod_Arg';
SetCalPageReq.Arguments(2).EngDT = dt.u08;
SetCalPageReq.Arguments(2).EngMin = 0;
SetCalPageReq.Arguments(2).EngMax = 255;
SetCalPageReq.Arguments(2).Units = 'Cnt';
SetCalPageReq.Arguments(2).Direction = 'In';
SetCalPageReq.Arguments(2).InitRowCol = [1  1];
SetCalPageReq.Arguments(2).Description = '';
SetCalPageReq.Arguments(3) = DataDict.CSArguments;
SetCalPageReq.Arguments(3).Name = 'Page_Arg';
SetCalPageReq.Arguments(3).EngDT = dt.u08;
SetCalPageReq.Arguments(3).EngMin = 0;
SetCalPageReq.Arguments(3).EngMax = 255;
SetCalPageReq.Arguments(3).Units = 'Cnt';
SetCalPageReq.Arguments(3).Direction = 'In';
SetCalPageReq.Arguments(3).InitRowCol = [1  1];
SetCalPageReq.Arguments(3).Description = '';


%%-------------------------------------------
%% Client Definitions
%%-------------------------------------------
Calc32BitCrc_u32 = DataDict.Client;
Calc32BitCrc_u32.CallLocation = {'TunSelnMngtInit1','TunSelnMngtPer1'};
Calc32BitCrc_u32.Description = '32-Bit CRC calculation';
Calc32BitCrc_u32.Return = DataDict.CSReturn;
Calc32BitCrc_u32.Return.Type = 'Standard';
Calc32BitCrc_u32.Return.Min = 0;
Calc32BitCrc_u32.Return.Max = 1;
Calc32BitCrc_u32.Return.TestTolerance = 0;
Calc32BitCrc_u32.Return.Description = '';
Calc32BitCrc_u32.Arguments(1) = DataDict.CSArguments;
Calc32BitCrc_u32.Arguments(1).Name = 'DataPtr';
Calc32BitCrc_u32.Arguments(1).EngDT = dt.u32;
Calc32BitCrc_u32.Arguments(1).EngMin = 0;
Calc32BitCrc_u32.Arguments(1).EngMax = 4294967295;
Calc32BitCrc_u32.Arguments(1).Units = 'Cnt';
Calc32BitCrc_u32.Arguments(1).Direction = 'InPtr';
Calc32BitCrc_u32.Arguments(1).InitRowCol = [1  1];
Calc32BitCrc_u32.Arguments(1).Description = '';
Calc32BitCrc_u32.Arguments(2) = DataDict.CSArguments;
Calc32BitCrc_u32.Arguments(2).Name = 'Len';
Calc32BitCrc_u32.Arguments(2).EngDT = dt.u32;
Calc32BitCrc_u32.Arguments(2).EngMin = 0;
Calc32BitCrc_u32.Arguments(2).EngMax = 4294967295;
Calc32BitCrc_u32.Arguments(2).Units = 'Cnt';
Calc32BitCrc_u32.Arguments(2).Direction = 'In';
Calc32BitCrc_u32.Arguments(2).InitRowCol = [1  1];
Calc32BitCrc_u32.Arguments(2).Description = '';
Calc32BitCrc_u32.Arguments(3) = DataDict.CSArguments;
Calc32BitCrc_u32.Arguments(3).Name = 'StrtVal';
Calc32BitCrc_u32.Arguments(3).EngDT = dt.u32;
Calc32BitCrc_u32.Arguments(3).EngMin = 0;
Calc32BitCrc_u32.Arguments(3).EngMax = 4294967295;
Calc32BitCrc_u32.Arguments(3).Units = 'Cnt';
Calc32BitCrc_u32.Arguments(3).Direction = 'In';
Calc32BitCrc_u32.Arguments(3).InitRowCol = [1  1];
Calc32BitCrc_u32.Arguments(3).Description = '';
Calc32BitCrc_u32.Arguments(4) = DataDict.CSArguments;
Calc32BitCrc_u32.Arguments(4).Name = 'FirstCall';
Calc32BitCrc_u32.Arguments(4).EngDT = dt.lgc;
Calc32BitCrc_u32.Arguments(4).EngMin = 0;
Calc32BitCrc_u32.Arguments(4).EngMax = 1;
Calc32BitCrc_u32.Arguments(4).Units = 'Cnt';
Calc32BitCrc_u32.Arguments(4).Direction = 'In';
Calc32BitCrc_u32.Arguments(4).InitRowCol = [1  1];
Calc32BitCrc_u32.Arguments(4).Description = '';
Calc32BitCrc_u32.Arguments(5) = DataDict.CSArguments;
Calc32BitCrc_u32.Arguments(5).Name = 'CalcCrcRes';
Calc32BitCrc_u32.Arguments(5).EngDT = dt.u32;
Calc32BitCrc_u32.Arguments(5).EngMin = 0;
Calc32BitCrc_u32.Arguments(5).EngMax = 4294967295;
Calc32BitCrc_u32.Arguments(5).Units = 'Cnt';
Calc32BitCrc_u32.Arguments(5).Direction = 'Out';
Calc32BitCrc_u32.Arguments(5).InitRowCol = [1  1];
Calc32BitCrc_u32.Arguments(5).Description = '';


RtCalChgReq = DataDict.Client;
RtCalChgReq.CallLocation = {'TunSelnMngtPer1'};
RtCalChgReq.Description = 'Request to tuning selection authority for permission to change tuning sets';
RtCalChgReq.Return = DataDict.CSReturn;
RtCalChgReq.Return.Type = 'Standard';
RtCalChgReq.Return.Min = 0;
RtCalChgReq.Return.Max = 1;
RtCalChgReq.Return.TestTolerance = 0;
RtCalChgReq.Return.Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'TunSelnMngtInit1','TunSelnMngtPer1'};
SetNtcSts.Description = 'API to set or pass a NTC';
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
DesIninIdx = DataDict.IpSignal;
DesIninIdx.LongName = 'Desired Initialization Index';
DesIninIdx.Description = 'Desired Initialization Index';
DesIninIdx.DocUnits = 'Cnt';
DesIninIdx.EngDT = dt.u08;
DesIninIdx.EngInit = 0;
DesIninIdx.EngMin = 0;
DesIninIdx.EngMax = 255;
DesIninIdx.ReadIn = {'TunSelnMngtInit1'};
DesIninIdx.ReadType = 'Rte';
DesIninIdx.Description = 'Desired Initialization Index';


DesRtIdx = DataDict.IpSignal;
DesRtIdx.LongName = 'Desired Runtime Index';
DesRtIdx.Description = 'Desired Runtime Index';
DesRtIdx.DocUnits = 'Cnt';
DesRtIdx.EngDT = dt.u08;
DesRtIdx.EngInit = 0;
DesRtIdx.EngMin = 0;
DesRtIdx.EngMax = 255;
DesRtIdx.ReadIn = {'TunSelnMngtInit1','TunSelnMngtPer1'};
DesRtIdx.ReadType = 'Rte';
DesRtIdx.Description = 'Desired Runtime Index';



%%-------------------------------------------
%% Output Signal Definition
%%-------------------------------------------
ActvGroup = DataDict.OpSignal;
ActvGroup.LongName = 'Active Group';
ActvGroup.Description = 'Active Online Calibration Group';
ActvGroup.DocUnits = 'Cnt';
ActvGroup.SwcShoName = 'TunSelnMngt';
ActvGroup.EngDT = dt.u08;
ActvGroup.EngInit = 0;
ActvGroup.EngMin = 0;
ActvGroup.EngMax = 255;
ActvGroup.TestTolerance = 0;
ActvGroup.WrittenIn = {'TunSelnMngtPer1'};
ActvGroup.WriteType = 'Rte';


ActvIninIdx = DataDict.OpSignal;
ActvIninIdx.LongName = 'Active Initialization Index';
ActvIninIdx.Description = 'Active Initialization Index';
ActvIninIdx.DocUnits = 'Cnt';
ActvIninIdx.SwcShoName = 'TunSelnMngt';
ActvIninIdx.EngDT = dt.u08;
ActvIninIdx.EngInit = 0;
ActvIninIdx.EngMin = 0;
ActvIninIdx.EngMax = 255;
ActvIninIdx.TestTolerance = 0;
ActvIninIdx.WrittenIn = {};
ActvIninIdx.WriteType = 'Rte';


ActvRtIdx = DataDict.OpSignal;
ActvRtIdx.LongName = 'Active Runtime Index';
ActvRtIdx.Description = 'Active Runtime Index';
ActvRtIdx.DocUnits = 'Cnt';
ActvRtIdx.SwcShoName = 'TunSelnMngt';
ActvRtIdx.EngDT = dt.u08;
ActvRtIdx.EngInit = 0;
ActvRtIdx.EngMin = 0;
ActvRtIdx.EngMax = 255;
ActvRtIdx.TestTolerance = 0;
ActvRtIdx.WrittenIn = {};
ActvRtIdx.WriteType = 'Rte';


CalCopyCmpl = DataDict.OpSignal;
CalCopyCmpl.LongName = 'Calibration Copy Complete';
CalCopyCmpl.Description = 'Calibration Copy Complete';
CalCopyCmpl.DocUnits = 'Cnt';
CalCopyCmpl.SwcShoName = 'TunSelnMngt';
CalCopyCmpl.EngDT = dt.lgc;
CalCopyCmpl.EngInit = 0;
CalCopyCmpl.EngMin = 0;
CalCopyCmpl.EngMax = 1;
CalCopyCmpl.TestTolerance = 0;
CalCopyCmpl.WrittenIn = {'TunSelnMngtPer1'};
CalCopyCmpl.WriteType = 'Rte';



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
OnlineCalSts = DataDict.PIM;
OnlineCalSts.LongName = 'Online Calibration Status';
OnlineCalSts.Description = 'Online Calibration Status';
OnlineCalSts.DocUnits = 'Cnt';
OnlineCalSts.EngDT = struct.OnlineCalStsRec1;
OnlineCalSts.EngMin = struct('Seg',struct('Page',struct('PageAcs',  0)),'CopySts',CalCopySts1.CALCOPYSTS_NOTRDY ,'ActvGroup',  0,'ActvInin',  0,'ActvRt',  0);
OnlineCalSts.EngMax = struct('Seg',struct('Page',struct('PageAcs',255)),'CopySts',CalCopySts1.CALCOPYSTS_PROCERR,'ActvGroup',255,'ActvInin',255,'ActvRt',255);
OnlineCalSts.InitRowCol = [1  1];

PrevActvIninIdx = DataDict.PIM;
PrevActvIninIdx.LongName = 'Previous Active Initialization Index';
PrevActvIninIdx.Description = 'Previous Active Initialization Index';
PrevActvIninIdx.DocUnits = 'Cnt';
PrevActvIninIdx.EngDT = dt.u08;
PrevActvIninIdx.EngMin = 0;
PrevActvIninIdx.EngMax = 255;
PrevActvIninIdx.InitRowCol = [1  1];


PrevActvRtIdx = DataDict.PIM;
PrevActvRtIdx.LongName = 'Previous Active Runtime Index';
PrevActvRtIdx.Description = 'Previous Active Runtime Index';
PrevActvRtIdx.DocUnits = 'Cnt';
PrevActvRtIdx.EngDT = dt.u08;
PrevActvRtIdx.EngMin = 0;
PrevActvRtIdx.EngMax = 255;
PrevActvRtIdx.InitRowCol = [1  1];


PrevRamPageAcs = DataDict.PIM;
PrevRamPageAcs.LongName = 'Previous RAM Page Access';
PrevRamPageAcs.Description = 'Previous RAM Page Access';
PrevRamPageAcs.DocUnits = 'Cnt';
PrevRamPageAcs.EngDT = dt.u08;
PrevRamPageAcs.EngMin = 0;
PrevRamPageAcs.EngMax = 255;
PrevRamPageAcs.InitRowCol = [1  1];


RamTblSwt = DataDict.PIM;
RamTblSwt.LongName = 'RAM Table Switch';
RamTblSwt.Description = 'RAM Table Switch';
RamTblSwt.DocUnits = 'Cnt';
RamTblSwt.EngDT = dt.u08;
RamTblSwt.EngMin = 0;
RamTblSwt.EngMax = 255;
RamTblSwt.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition
%%-------------------------------------------
IninCalMiss = DataDict.NTC;
IninCalMiss.NtcNr = NtcNr2.NTCNR_0X1F6;
IninCalMiss.NtcTyp = 'None';
IninCalMiss.LongName = 'Initialization Calibration Missing';
IninCalMiss.Description = 'Incorrect Initialization Calibration Index Provided';
IninCalMiss.NtcStInfo = DataDict.NtcStInfoBitPacked;
IninCalMiss.NtcStInfo.Bit0Descr = 'Calibration Index Out of Range';
IninCalMiss.NtcStInfo.Bit1Descr = 'Unused';
IninCalMiss.NtcStInfo.Bit2Descr = 'Unused';
IninCalMiss.NtcStInfo.Bit3Descr = 'Unused';
IninCalMiss.NtcStInfo.Bit4Descr = 'Unused';
IninCalMiss.NtcStInfo.Bit5Descr = 'Unused';
IninCalMiss.NtcStInfo.Bit6Descr = 'Unused';
IninCalMiss.NtcStInfo.Bit7Descr = 'Unused';


RamCrcErr = DataDict.NTC;
RamCrcErr.NtcNr = NtcNr2.NTCNR_0X1F8;
RamCrcErr.NtcTyp = 'None';
RamCrcErr.LongName = 'RAM CRC Error';
RamCrcErr.Description = 'RAM CRC calculation and stored value mismatch';
RamCrcErr.NtcStInfo = DataDict.NtcStInfoBitPacked;
RamCrcErr.NtcStInfo.Bit0Descr = 'Failed During Periodic Check';
RamCrcErr.NtcStInfo.Bit1Descr = 'Failed During Index Change';
RamCrcErr.NtcStInfo.Bit2Descr = 'Unused';
RamCrcErr.NtcStInfo.Bit3Descr = 'Unused';
RamCrcErr.NtcStInfo.Bit4Descr = 'Unused';
RamCrcErr.NtcStInfo.Bit5Descr = 'Unused';
RamCrcErr.NtcStInfo.Bit6Descr = 'Unused';
RamCrcErr.NtcStInfo.Bit7Descr = 'Unused';


RtCalMiss = DataDict.NTC;
RtCalMiss.NtcNr = NtcNr2.NTCNR_0X1F7;
RtCalMiss.NtcTyp = 'None';
RtCalMiss.LongName = 'Runtime Calibration Missing';
RtCalMiss.Description = 'Incorrect Runtime Calibration Index Provided';
RtCalMiss.NtcStInfo = DataDict.NtcStInfoBitPacked;
RtCalMiss.NtcStInfo.Bit0Descr = 'Calibration Index Out of Range';
RtCalMiss.NtcStInfo.Bit1Descr = 'Unused';
RtCalMiss.NtcStInfo.Bit2Descr = 'Unused';
RtCalMiss.NtcStInfo.Bit3Descr = 'Unused';
RtCalMiss.NtcStInfo.Bit4Descr = 'Unused';
RtCalMiss.NtcStInfo.Bit5Descr = 'Unused';
RtCalMiss.NtcStInfo.Bit6Descr = 'Unused';
RtCalMiss.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
