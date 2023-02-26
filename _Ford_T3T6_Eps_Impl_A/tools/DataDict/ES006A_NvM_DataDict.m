%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 01-Oct-2016 20:43:30       %
%                                  Created with tool release: 2.48.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES006A = DataDict.FDD;
ES006A.Version = '1.1.X';
ES006A.LongName = 'Non-volatile Memory Manager';
ES006A.ShoName  = 'NvM';
ES006A.DesignASIL = 'D';
ES006A.Description = [...
  'NvM and NvMProxy function descriptions'];



%%-------------------------------------------
%% Runnable Definitions
%%-------------------------------------------
NvMProxyInit1 = DataDict.Runnable;
NvMProxyInit1.Context = 'Rte';
NvMProxyInit1.Description = 'NvM Proxy defined init function';
NvMProxyInit1.TimeStep = 0;

NvMProxyPer1 = DataDict.Runnable;
NvMProxyPer1.Context = 'Rte';
NvMProxyPer1.Description = 'NvM Proxy defined periodic main function';
NvMProxyPer1.TimeStep = 0.01;

NvM_Init = DataDict.Runnable;
NvM_Init.Context = 'Rte';
NvM_Init.Description = 'Vector defined NvM Init function';
NvM_Init.TimeStep = 0;

NvM_MainFunction = DataDict.Runnable;
NvM_MainFunction.Context = 'Rte';
NvM_MainFunction.Description = 'Vector defined NvM Main Function';
NvM_MainFunction.TimeStep = 0.01;

NvMPIM_EraseBlock = DataDict.SrvRunnable;
NvMPIM_EraseBlock.Context = 'Rte';
NvMPIM_EraseBlock.Description = 'NvMProxy Defined NvM Erease Block';
NvMPIM_EraseBlock.Return = DataDict.CSReturn;
NvMPIM_EraseBlock.Return.Type = 'Standard';
NvMPIM_EraseBlock.Return.Min = 0;
NvMPIM_EraseBlock.Return.Max = 1;
NvMPIM_EraseBlock.Return.TestTolerance = 0;
NvMPIM_EraseBlock.Return.Description = '';

NvMPIM_GetDataIndex = DataDict.SrvRunnable;
NvMPIM_GetDataIndex.Context = 'Rte';
NvMPIM_GetDataIndex.Description = 'NvMProxy Defined NvM Get Data Index';
NvMPIM_GetDataIndex.Return = DataDict.CSReturn;
NvMPIM_GetDataIndex.Return.Type = 'Standard';
NvMPIM_GetDataIndex.Return.Min = 0;
NvMPIM_GetDataIndex.Return.Max = 1;
NvMPIM_GetDataIndex.Return.TestTolerance = 0;
NvMPIM_GetDataIndex.Return.Description = '';
NvMPIM_GetDataIndex.Arguments(1) = DataDict.CSArguments;
NvMPIM_GetDataIndex.Arguments(1).Name = 'DataIndexPtr';
NvMPIM_GetDataIndex.Arguments(1).EngDT = dt.u08;
NvMPIM_GetDataIndex.Arguments(1).EngMin = 0;
NvMPIM_GetDataIndex.Arguments(1).EngMax = 255;
NvMPIM_GetDataIndex.Arguments(1).TestTolerance = 999;
NvMPIM_GetDataIndex.Arguments(1).Units = 'Cnt';
NvMPIM_GetDataIndex.Arguments(1).Direction = 'InOut';
NvMPIM_GetDataIndex.Arguments(1).InitRowCol = [1  1];
NvMPIM_GetDataIndex.Arguments(1).Description = '';

NvMPIM_GetErrorStatus = DataDict.SrvRunnable;
NvMPIM_GetErrorStatus.Context = 'Rte';
NvMPIM_GetErrorStatus.Description = 'NvMProxy Defined NvM Get Error Status';
NvMPIM_GetErrorStatus.Return = DataDict.CSReturn;
NvMPIM_GetErrorStatus.Return.Type = 'Standard';
NvMPIM_GetErrorStatus.Return.Min = 0;
NvMPIM_GetErrorStatus.Return.Max = 1;
NvMPIM_GetErrorStatus.Return.TestTolerance = 0;
NvMPIM_GetErrorStatus.Return.Description = '';
NvMPIM_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
NvMPIM_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
NvMPIM_GetErrorStatus.Arguments(1).EngDT = dt.u08;
NvMPIM_GetErrorStatus.Arguments(1).EngMin = 0;
NvMPIM_GetErrorStatus.Arguments(1).EngMax = 255;
NvMPIM_GetErrorStatus.Arguments(1).TestTolerance = 999;
NvMPIM_GetErrorStatus.Arguments(1).Units = 'Cnt';
NvMPIM_GetErrorStatus.Arguments(1).Direction = 'Out';
NvMPIM_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
NvMPIM_GetErrorStatus.Arguments(1).Description = '';

NvMPIM_InvalidateBlock = DataDict.SrvRunnable;
NvMPIM_InvalidateBlock.Context = 'Rte';
NvMPIM_InvalidateBlock.Description = 'NvMProxy Defined NvM Invalidate Block';
NvMPIM_InvalidateBlock.Return = DataDict.CSReturn;
NvMPIM_InvalidateBlock.Return.Type = 'Standard';
NvMPIM_InvalidateBlock.Return.Min = 0;
NvMPIM_InvalidateBlock.Return.Max = 1;
NvMPIM_InvalidateBlock.Return.TestTolerance = 0;
NvMPIM_InvalidateBlock.Return.Description = '';

NvMPIM_ReadBlock = DataDict.SrvRunnable;
NvMPIM_ReadBlock.Context = 'Rte';
NvMPIM_ReadBlock.Description = 'NvMProxy Defined NvM Read Block';
NvMPIM_ReadBlock.Return = DataDict.CSReturn;
NvMPIM_ReadBlock.Return.Type = 'Standard';
NvMPIM_ReadBlock.Return.Min = 0;
NvMPIM_ReadBlock.Return.Max = 1;
NvMPIM_ReadBlock.Return.TestTolerance = 0;
NvMPIM_ReadBlock.Return.Description = '';
NvMPIM_ReadBlock.Arguments(1) = DataDict.CSArguments;
NvMPIM_ReadBlock.Arguments(1).Name = 'NvM_DstPtr';
NvMPIM_ReadBlock.Arguments(1).EngDT = dt.u08;
NvMPIM_ReadBlock.Arguments(1).EngMin = 0;
NvMPIM_ReadBlock.Arguments(1).EngMax = 255;
NvMPIM_ReadBlock.Arguments(1).TestTolerance = 999;
NvMPIM_ReadBlock.Arguments(1).Units = 'Cnt';
NvMPIM_ReadBlock.Arguments(1).Direction = 'InOut';
NvMPIM_ReadBlock.Arguments(1).InitRowCol = [1  1];
NvMPIM_ReadBlock.Arguments(1).Description = '';

NvMPIM_RestoreBlockDefaults = DataDict.SrvRunnable;
NvMPIM_RestoreBlockDefaults.Context = 'Rte';
NvMPIM_RestoreBlockDefaults.Description = 'NvMProxy Defined NvM Restore Block Defaults';
NvMPIM_RestoreBlockDefaults.Return = DataDict.CSReturn;
NvMPIM_RestoreBlockDefaults.Return.Type = 'Standard';
NvMPIM_RestoreBlockDefaults.Return.Min = 0;
NvMPIM_RestoreBlockDefaults.Return.Max = 1;
NvMPIM_RestoreBlockDefaults.Return.TestTolerance = 0;
NvMPIM_RestoreBlockDefaults.Return.Description = '';
NvMPIM_RestoreBlockDefaults.Arguments(1) = DataDict.CSArguments;
NvMPIM_RestoreBlockDefaults.Arguments(1).Name = 'NvM_DstPtr';
NvMPIM_RestoreBlockDefaults.Arguments(1).EngDT = dt.u08;
NvMPIM_RestoreBlockDefaults.Arguments(1).EngMin = 0;
NvMPIM_RestoreBlockDefaults.Arguments(1).EngMax = 255;
NvMPIM_RestoreBlockDefaults.Arguments(1).TestTolerance = 999;
NvMPIM_RestoreBlockDefaults.Arguments(1).Units = 'Cnt';
NvMPIM_RestoreBlockDefaults.Arguments(1).Direction = 'InOut';
NvMPIM_RestoreBlockDefaults.Arguments(1).InitRowCol = [1  1];
NvMPIM_RestoreBlockDefaults.Arguments(1).Description = '';

NvMPIM_SetBlockProtection = DataDict.SrvRunnable;
NvMPIM_SetBlockProtection.Context = 'Rte';
NvMPIM_SetBlockProtection.Description = 'NvMProxy Defined NvM Set Block Protection';
NvMPIM_SetBlockProtection.Return = DataDict.CSReturn;
NvMPIM_SetBlockProtection.Return.Type = 'Standard';
NvMPIM_SetBlockProtection.Return.Min = 0;
NvMPIM_SetBlockProtection.Return.Max = 1;
NvMPIM_SetBlockProtection.Return.TestTolerance = 0;
NvMPIM_SetBlockProtection.Return.Description = '';
NvMPIM_SetBlockProtection.Arguments(1) = DataDict.CSArguments;
NvMPIM_SetBlockProtection.Arguments(1).Name = 'ProtectionEnabled';
NvMPIM_SetBlockProtection.Arguments(1).EngDT = dt.lgc;
NvMPIM_SetBlockProtection.Arguments(1).EngMin = 0;
NvMPIM_SetBlockProtection.Arguments(1).EngMax = 1;
NvMPIM_SetBlockProtection.Arguments(1).Units = 'Cnt';
NvMPIM_SetBlockProtection.Arguments(1).Direction = 'In';
NvMPIM_SetBlockProtection.Arguments(1).InitRowCol = [1  1];
NvMPIM_SetBlockProtection.Arguments(1).Description = '';

NvMPIM_SetDataIndex = DataDict.SrvRunnable;
NvMPIM_SetDataIndex.Context = 'Rte';
NvMPIM_SetDataIndex.Description = 'NvMProxy Defined NvM Set Data Index';
NvMPIM_SetDataIndex.Return = DataDict.CSReturn;
NvMPIM_SetDataIndex.Return.Type = 'Standard';
NvMPIM_SetDataIndex.Return.Min = 0;
NvMPIM_SetDataIndex.Return.Max = 1;
NvMPIM_SetDataIndex.Return.TestTolerance = 0;
NvMPIM_SetDataIndex.Return.Description = '';
NvMPIM_SetDataIndex.Arguments(1) = DataDict.CSArguments;
NvMPIM_SetDataIndex.Arguments(1).Name = 'DataIndex';
NvMPIM_SetDataIndex.Arguments(1).EngDT = dt.u08;
NvMPIM_SetDataIndex.Arguments(1).EngMin = 0;
NvMPIM_SetDataIndex.Arguments(1).EngMax = 255;
NvMPIM_SetDataIndex.Arguments(1).Units = 'Cnt';
NvMPIM_SetDataIndex.Arguments(1).Direction = 'In';
NvMPIM_SetDataIndex.Arguments(1).InitRowCol = [1  1];
NvMPIM_SetDataIndex.Arguments(1).Description = '';

NvMPIM_SetRamBlockStatus = DataDict.SrvRunnable;
NvMPIM_SetRamBlockStatus.Context = 'Rte';
NvMPIM_SetRamBlockStatus.Description = 'NvMProxy Defined NvM Set RAM Block Status';
NvMPIM_SetRamBlockStatus.Return = DataDict.CSReturn;
NvMPIM_SetRamBlockStatus.Return.Type = 'Standard';
NvMPIM_SetRamBlockStatus.Return.Min = 0;
NvMPIM_SetRamBlockStatus.Return.Max = 1;
NvMPIM_SetRamBlockStatus.Return.TestTolerance = 0;
NvMPIM_SetRamBlockStatus.Return.Description = '';
NvMPIM_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
NvMPIM_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
NvMPIM_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
NvMPIM_SetRamBlockStatus.Arguments(1).EngMin = 0;
NvMPIM_SetRamBlockStatus.Arguments(1).EngMax = 1;
NvMPIM_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
NvMPIM_SetRamBlockStatus.Arguments(1).Direction = 'In';
NvMPIM_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
NvMPIM_SetRamBlockStatus.Arguments(1).Description = '';

NvMPIM_WriteBlock = DataDict.SrvRunnable;
NvMPIM_WriteBlock.Context = 'Rte';
NvMPIM_WriteBlock.Description = 'NvMProxy Defined NvM Write Block';
NvMPIM_WriteBlock.Return = DataDict.CSReturn;
NvMPIM_WriteBlock.Return.Type = 'Standard';
NvMPIM_WriteBlock.Return.Min = 0;
NvMPIM_WriteBlock.Return.Max = 1;
NvMPIM_WriteBlock.Return.TestTolerance = 0;
NvMPIM_WriteBlock.Return.Description = '';
NvMPIM_WriteBlock.Arguments(1) = DataDict.CSArguments;
NvMPIM_WriteBlock.Arguments(1).Name = 'NvM_SrcPtr';
NvMPIM_WriteBlock.Arguments(1).EngDT = dt.u08;
NvMPIM_WriteBlock.Arguments(1).EngMin = 0;
NvMPIM_WriteBlock.Arguments(1).EngMax = 255;
NvMPIM_WriteBlock.Arguments(1).Units = 'Cnt';
NvMPIM_WriteBlock.Arguments(1).Direction = 'In';
NvMPIM_WriteBlock.Arguments(1).InitRowCol = [1  1];
NvMPIM_WriteBlock.Arguments(1).Description = '';

NvM_CancelJobs = DataDict.SrvRunnable;
NvM_CancelJobs.Context = 'NonRte';
NvM_CancelJobs.Description = 'Vector Defined NvM Cancel Jobs';
NvM_CancelJobs.Return = DataDict.CSReturn;
NvM_CancelJobs.Return.Type = 'Standard';
NvM_CancelJobs.Return.Min = 0;
NvM_CancelJobs.Return.Max = 1;
NvM_CancelJobs.Return.TestTolerance = 0;
NvM_CancelJobs.Return.Description = '';
NvM_CancelJobs.Arguments(1) = DataDict.CSArguments;
NvM_CancelJobs.Arguments(1).Name = 'BlockId';
NvM_CancelJobs.Arguments(1).EngDT = dt.u16;
NvM_CancelJobs.Arguments(1).EngMin = 0;
NvM_CancelJobs.Arguments(1).EngMax = 65535;
NvM_CancelJobs.Arguments(1).Units = 'Cnt';
NvM_CancelJobs.Arguments(1).Direction = 'In';
NvM_CancelJobs.Arguments(1).InitRowCol = [1  1];
NvM_CancelJobs.Arguments(1).Description = '';

NvM_CancelWriteAll = DataDict.SrvRunnable;
NvM_CancelWriteAll.Context = 'NonRte';
NvM_CancelWriteAll.Description = 'Vector Defined NvM Cancel Write All';
NvM_CancelWriteAll.Return = DataDict.CSReturn;
NvM_CancelWriteAll.Return.Type = 'None';
NvM_CancelWriteAll.Return.Min = [];
NvM_CancelWriteAll.Return.Max = [];
NvM_CancelWriteAll.Return.TestTolerance = [];

NvM_EraseBlock = DataDict.SrvRunnable;
NvM_EraseBlock.Context = 'NonRte';
NvM_EraseBlock.Description = 'Vector Defined NvM Erase Block';
NvM_EraseBlock.Return = DataDict.CSReturn;
NvM_EraseBlock.Return.Type = 'Standard';
NvM_EraseBlock.Return.Min = 0;
NvM_EraseBlock.Return.Max = 1;
NvM_EraseBlock.Return.TestTolerance = 0;
NvM_EraseBlock.Return.Description = '';
NvM_EraseBlock.Arguments(1) = DataDict.CSArguments;
NvM_EraseBlock.Arguments(1).Name = 'BlockId';
NvM_EraseBlock.Arguments(1).EngDT = dt.u16;
NvM_EraseBlock.Arguments(1).EngMin = 0;
NvM_EraseBlock.Arguments(1).EngMax = 65535;
NvM_EraseBlock.Arguments(1).Units = 'Cnt';
NvM_EraseBlock.Arguments(1).Direction = 'In';
NvM_EraseBlock.Arguments(1).InitRowCol = [1  1];
NvM_EraseBlock.Arguments(1).Description = '';

NvM_GetDataIndex = DataDict.SrvRunnable;
NvM_GetDataIndex.Context = 'NonRte';
NvM_GetDataIndex.Description = 'Vector Defined NvM Get Data Index';
NvM_GetDataIndex.Return = DataDict.CSReturn;
NvM_GetDataIndex.Return.Type = 'Standard';
NvM_GetDataIndex.Return.Min = 0;
NvM_GetDataIndex.Return.Max = 1;
NvM_GetDataIndex.Return.TestTolerance = 0;
NvM_GetDataIndex.Return.Description = '';
NvM_GetDataIndex.Arguments(1) = DataDict.CSArguments;
NvM_GetDataIndex.Arguments(1).Name = 'BlockId';
NvM_GetDataIndex.Arguments(1).EngDT = dt.u16;
NvM_GetDataIndex.Arguments(1).EngMin = 0;
NvM_GetDataIndex.Arguments(1).EngMax = 65535;
NvM_GetDataIndex.Arguments(1).Units = 'Cnt';
NvM_GetDataIndex.Arguments(1).Direction = 'In';
NvM_GetDataIndex.Arguments(1).InitRowCol = [1  1];
NvM_GetDataIndex.Arguments(1).Description = '';
NvM_GetDataIndex.Arguments(2) = DataDict.CSArguments;
NvM_GetDataIndex.Arguments(2).Name = 'DataIndexPtr';
NvM_GetDataIndex.Arguments(2).EngDT = dt.u08;
NvM_GetDataIndex.Arguments(2).EngMin = 0;
NvM_GetDataIndex.Arguments(2).EngMax = 255;
NvM_GetDataIndex.Arguments(2).TestTolerance = 999;
NvM_GetDataIndex.Arguments(2).Units = 'Cnt';
NvM_GetDataIndex.Arguments(2).Direction = 'InOut';
NvM_GetDataIndex.Arguments(2).InitRowCol = [1  1];
NvM_GetDataIndex.Arguments(2).Description = '';

NvM_GetErrorStatus = DataDict.SrvRunnable;
NvM_GetErrorStatus.Context = 'NonRte';
NvM_GetErrorStatus.Description = 'Vector Defined NvM Get Error Status';
NvM_GetErrorStatus.Return = DataDict.CSReturn;
NvM_GetErrorStatus.Return.Type = 'Standard';
NvM_GetErrorStatus.Return.Min = 0;
NvM_GetErrorStatus.Return.Max = 1;
NvM_GetErrorStatus.Return.TestTolerance = 0;
NvM_GetErrorStatus.Return.Description = '';
NvM_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
NvM_GetErrorStatus.Arguments(1).Name = 'BlockId';
NvM_GetErrorStatus.Arguments(1).EngDT = dt.u16;
NvM_GetErrorStatus.Arguments(1).EngMin = 0;
NvM_GetErrorStatus.Arguments(1).EngMax = 65535;
NvM_GetErrorStatus.Arguments(1).Units = 'Cnt';
NvM_GetErrorStatus.Arguments(1).Direction = 'In';
NvM_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
NvM_GetErrorStatus.Arguments(1).Description = '';
NvM_GetErrorStatus.Arguments(2) = DataDict.CSArguments;
NvM_GetErrorStatus.Arguments(2).Name = 'RequestResultPtr';
NvM_GetErrorStatus.Arguments(2).EngDT = dt.u08;
NvM_GetErrorStatus.Arguments(2).EngMin = 0;
NvM_GetErrorStatus.Arguments(2).EngMax = 255;
NvM_GetErrorStatus.Arguments(2).TestTolerance = 999;
NvM_GetErrorStatus.Arguments(2).Units = 'Cnt';
NvM_GetErrorStatus.Arguments(2).Direction = 'Out';
NvM_GetErrorStatus.Arguments(2).InitRowCol = [1  1];
NvM_GetErrorStatus.Arguments(2).Description = '';

NvM_InvalidateBlock = DataDict.SrvRunnable;
NvM_InvalidateBlock.Context = 'NonRte';
NvM_InvalidateBlock.Description = 'Vector Defined NvM Invalidate Block';
NvM_InvalidateBlock.Return = DataDict.CSReturn;
NvM_InvalidateBlock.Return.Type = 'Standard';
NvM_InvalidateBlock.Return.Min = 0;
NvM_InvalidateBlock.Return.Max = 1;
NvM_InvalidateBlock.Return.TestTolerance = 0;
NvM_InvalidateBlock.Return.Description = '';
NvM_InvalidateBlock.Arguments(1) = DataDict.CSArguments;
NvM_InvalidateBlock.Arguments(1).Name = 'BlockId';
NvM_InvalidateBlock.Arguments(1).EngDT = dt.u16;
NvM_InvalidateBlock.Arguments(1).EngMin = 0;
NvM_InvalidateBlock.Arguments(1).EngMax = 65535;
NvM_InvalidateBlock.Arguments(1).Units = 'Cnt';
NvM_InvalidateBlock.Arguments(1).Direction = 'In';
NvM_InvalidateBlock.Arguments(1).InitRowCol = [1  1];
NvM_InvalidateBlock.Arguments(1).Description = '';

NvM_ReadAll = DataDict.SrvRunnable;
NvM_ReadAll.Context = 'NonRte';
NvM_ReadAll.Description = 'Vector Defined NvM Read All';
NvM_ReadAll.Return = DataDict.CSReturn;
NvM_ReadAll.Return.Type = 'None';
NvM_ReadAll.Return.Min = [];
NvM_ReadAll.Return.Max = [];
NvM_ReadAll.Return.TestTolerance = [];

NvM_ReadBlock = DataDict.SrvRunnable;
NvM_ReadBlock.Context = 'NonRte';
NvM_ReadBlock.Description = 'Vector Defined NvM Read Block';
NvM_ReadBlock.Return = DataDict.CSReturn;
NvM_ReadBlock.Return.Type = 'Standard';
NvM_ReadBlock.Return.Min = 0;
NvM_ReadBlock.Return.Max = 1;
NvM_ReadBlock.Return.TestTolerance = 0;
NvM_ReadBlock.Return.Description = '';
NvM_ReadBlock.Arguments(1) = DataDict.CSArguments;
NvM_ReadBlock.Arguments(1).Name = 'BlockId';
NvM_ReadBlock.Arguments(1).EngDT = dt.u16;
NvM_ReadBlock.Arguments(1).EngMin = 0;
NvM_ReadBlock.Arguments(1).EngMax = 65535;
NvM_ReadBlock.Arguments(1).Units = 'Cnt';
NvM_ReadBlock.Arguments(1).Direction = 'In';
NvM_ReadBlock.Arguments(1).InitRowCol = [1  1];
NvM_ReadBlock.Arguments(1).Description = '';
NvM_ReadBlock.Arguments(2) = DataDict.CSArguments;
NvM_ReadBlock.Arguments(2).Name = 'NvM_DstPtr';
NvM_ReadBlock.Arguments(2).EngDT = dt.u08;
NvM_ReadBlock.Arguments(2).EngMin = 0;
NvM_ReadBlock.Arguments(2).EngMax = 255;
NvM_ReadBlock.Arguments(2).TestTolerance = 999;
NvM_ReadBlock.Arguments(2).Units = 'Cnt';
NvM_ReadBlock.Arguments(2).Direction = 'InOut';
NvM_ReadBlock.Arguments(2).InitRowCol = [1  1];
NvM_ReadBlock.Arguments(2).Description = '';

NvM_RestoreBlockDefaults = DataDict.SrvRunnable;
NvM_RestoreBlockDefaults.Context = 'NonRte';
NvM_RestoreBlockDefaults.Description = 'Vector Defined NvM Restore Block Defaults';
NvM_RestoreBlockDefaults.Return = DataDict.CSReturn;
NvM_RestoreBlockDefaults.Return.Type = 'Standard';
NvM_RestoreBlockDefaults.Return.Min = 0;
NvM_RestoreBlockDefaults.Return.Max = 1;
NvM_RestoreBlockDefaults.Return.TestTolerance = 0;
NvM_RestoreBlockDefaults.Return.Description = '';
NvM_RestoreBlockDefaults.Arguments(1) = DataDict.CSArguments;
NvM_RestoreBlockDefaults.Arguments(1).Name = 'BlockId';
NvM_RestoreBlockDefaults.Arguments(1).EngDT = dt.u16;
NvM_RestoreBlockDefaults.Arguments(1).EngMin = 0;
NvM_RestoreBlockDefaults.Arguments(1).EngMax = 65535;
NvM_RestoreBlockDefaults.Arguments(1).Units = 'Cnt';
NvM_RestoreBlockDefaults.Arguments(1).Direction = 'In';
NvM_RestoreBlockDefaults.Arguments(1).InitRowCol = [1  1];
NvM_RestoreBlockDefaults.Arguments(1).Description = '';
NvM_RestoreBlockDefaults.Arguments(2) = DataDict.CSArguments;
NvM_RestoreBlockDefaults.Arguments(2).Name = 'NvM_DstPtr';
NvM_RestoreBlockDefaults.Arguments(2).EngDT = dt.u08;
NvM_RestoreBlockDefaults.Arguments(2).EngMin = 0;
NvM_RestoreBlockDefaults.Arguments(2).EngMax = 255;
NvM_RestoreBlockDefaults.Arguments(2).TestTolerance = 999;
NvM_RestoreBlockDefaults.Arguments(2).Units = 'Cnt';
NvM_RestoreBlockDefaults.Arguments(2).Direction = 'InOut';
NvM_RestoreBlockDefaults.Arguments(2).InitRowCol = [1  1];
NvM_RestoreBlockDefaults.Arguments(2).Description = '';

NvM_SetBlockProtection = DataDict.SrvRunnable;
NvM_SetBlockProtection.Context = 'NonRte';
NvM_SetBlockProtection.Description = 'Vector Defined NvM Set Block Protection';
NvM_SetBlockProtection.Return = DataDict.CSReturn;
NvM_SetBlockProtection.Return.Type = 'Standard';
NvM_SetBlockProtection.Return.Min = 0;
NvM_SetBlockProtection.Return.Max = 1;
NvM_SetBlockProtection.Return.TestTolerance = 0;
NvM_SetBlockProtection.Return.Description = '';
NvM_SetBlockProtection.Arguments(1) = DataDict.CSArguments;
NvM_SetBlockProtection.Arguments(1).Name = 'BlockId';
NvM_SetBlockProtection.Arguments(1).EngDT = dt.u16;
NvM_SetBlockProtection.Arguments(1).EngMin = 0;
NvM_SetBlockProtection.Arguments(1).EngMax = 65535;
NvM_SetBlockProtection.Arguments(1).Units = 'Cnt';
NvM_SetBlockProtection.Arguments(1).Direction = 'In';
NvM_SetBlockProtection.Arguments(1).InitRowCol = [1  1];
NvM_SetBlockProtection.Arguments(1).Description = '';
NvM_SetBlockProtection.Arguments(2) = DataDict.CSArguments;
NvM_SetBlockProtection.Arguments(2).Name = 'ProtectionEnabled';
NvM_SetBlockProtection.Arguments(2).EngDT = dt.lgc;
NvM_SetBlockProtection.Arguments(2).EngMin = 0;
NvM_SetBlockProtection.Arguments(2).EngMax = 1;
NvM_SetBlockProtection.Arguments(2).Units = 'Cnt';
NvM_SetBlockProtection.Arguments(2).Direction = 'In';
NvM_SetBlockProtection.Arguments(2).InitRowCol = [1  1];
NvM_SetBlockProtection.Arguments(2).Description = '';

NvM_SetDataIndex = DataDict.SrvRunnable;
NvM_SetDataIndex.Context = 'NonRte';
NvM_SetDataIndex.Description = 'Vector Defined NvM Set Data Index';
NvM_SetDataIndex.Return = DataDict.CSReturn;
NvM_SetDataIndex.Return.Type = 'Standard';
NvM_SetDataIndex.Return.Min = 0;
NvM_SetDataIndex.Return.Max = 1;
NvM_SetDataIndex.Return.TestTolerance = 0;
NvM_SetDataIndex.Return.Description = '';
NvM_SetDataIndex.Arguments(1) = DataDict.CSArguments;
NvM_SetDataIndex.Arguments(1).Name = 'BlockId';
NvM_SetDataIndex.Arguments(1).EngDT = dt.u16;
NvM_SetDataIndex.Arguments(1).EngMin = 0;
NvM_SetDataIndex.Arguments(1).EngMax = 65535;
NvM_SetDataIndex.Arguments(1).Units = 'Cnt';
NvM_SetDataIndex.Arguments(1).Direction = 'In';
NvM_SetDataIndex.Arguments(1).InitRowCol = [1  1];
NvM_SetDataIndex.Arguments(1).Description = '';
NvM_SetDataIndex.Arguments(2) = DataDict.CSArguments;
NvM_SetDataIndex.Arguments(2).Name = 'DataIndex';
NvM_SetDataIndex.Arguments(2).EngDT = dt.u08;
NvM_SetDataIndex.Arguments(2).EngMin = 0;
NvM_SetDataIndex.Arguments(2).EngMax = 255;
NvM_SetDataIndex.Arguments(2).Units = 'Cnt';
NvM_SetDataIndex.Arguments(2).Direction = 'In';
NvM_SetDataIndex.Arguments(2).InitRowCol = [1  1];
NvM_SetDataIndex.Arguments(2).Description = '';

NvM_SetRamBlockStatus = DataDict.SrvRunnable;
NvM_SetRamBlockStatus.Context = 'NonRte';
NvM_SetRamBlockStatus.Description = 'Vector Defined NvM Set RAM Block Status';
NvM_SetRamBlockStatus.Return = DataDict.CSReturn;
NvM_SetRamBlockStatus.Return.Type = 'Standard';
NvM_SetRamBlockStatus.Return.Min = 0;
NvM_SetRamBlockStatus.Return.Max = 1;
NvM_SetRamBlockStatus.Return.TestTolerance = 0;
NvM_SetRamBlockStatus.Return.Description = '';
NvM_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
NvM_SetRamBlockStatus.Arguments(1).Name = 'BlockId';
NvM_SetRamBlockStatus.Arguments(1).EngDT = dt.u16;
NvM_SetRamBlockStatus.Arguments(1).EngMin = 0;
NvM_SetRamBlockStatus.Arguments(1).EngMax = 65535;
NvM_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
NvM_SetRamBlockStatus.Arguments(1).Direction = 'In';
NvM_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
NvM_SetRamBlockStatus.Arguments(1).Description = '';
NvM_SetRamBlockStatus.Arguments(2) = DataDict.CSArguments;
NvM_SetRamBlockStatus.Arguments(2).Name = 'BlockChanged';
NvM_SetRamBlockStatus.Arguments(2).EngDT = dt.lgc;
NvM_SetRamBlockStatus.Arguments(2).EngMin = 0;
NvM_SetRamBlockStatus.Arguments(2).EngMax = 1;
NvM_SetRamBlockStatus.Arguments(2).Units = 'Cnt';
NvM_SetRamBlockStatus.Arguments(2).Direction = 'In';
NvM_SetRamBlockStatus.Arguments(2).InitRowCol = [1  1];
NvM_SetRamBlockStatus.Arguments(2).Description = '';

NvM_WriteAll = DataDict.SrvRunnable;
NvM_WriteAll.Context = 'NonRte';
NvM_WriteAll.Description = 'Vector Defined NvM Write All';
NvM_WriteAll.Return = DataDict.CSReturn;
NvM_WriteAll.Return.Type = 'None';
NvM_WriteAll.Return.Min = [];
NvM_WriteAll.Return.Max = [];
NvM_WriteAll.Return.TestTolerance = [];

NvM_WriteBlock = DataDict.SrvRunnable;
NvM_WriteBlock.Context = 'NonRte';
NvM_WriteBlock.Description = 'Vector Defined NvM Write Block';
NvM_WriteBlock.Return = DataDict.CSReturn;
NvM_WriteBlock.Return.Type = 'Standard';
NvM_WriteBlock.Return.Min = 0;
NvM_WriteBlock.Return.Max = 1;
NvM_WriteBlock.Return.TestTolerance = 0;
NvM_WriteBlock.Return.Description = '';
NvM_WriteBlock.Arguments(1) = DataDict.CSArguments;
NvM_WriteBlock.Arguments(1).Name = 'BlockId';
NvM_WriteBlock.Arguments(1).EngDT = dt.u16;
NvM_WriteBlock.Arguments(1).EngMin = 0;
NvM_WriteBlock.Arguments(1).EngMax = 65535;
NvM_WriteBlock.Arguments(1).Units = 'Cnt';
NvM_WriteBlock.Arguments(1).Direction = 'In';
NvM_WriteBlock.Arguments(1).InitRowCol = [1  1];
NvM_WriteBlock.Arguments(1).Description = '';
NvM_WriteBlock.Arguments(2) = DataDict.CSArguments;
NvM_WriteBlock.Arguments(2).Name = 'NvM_SrcPtr';
NvM_WriteBlock.Arguments(2).EngDT = dt.u08;
NvM_WriteBlock.Arguments(2).EngMin = 0;
NvM_WriteBlock.Arguments(2).EngMax = 255;
NvM_WriteBlock.Arguments(2).Units = 'Cnt';
NvM_WriteBlock.Arguments(2).Direction = 'In';
NvM_WriteBlock.Arguments(2).InitRowCol = [1  1];
NvM_WriteBlock.Arguments(2).Description = '';


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
BlkFltTbl = DataDict.PIM;
BlkFltTbl.LongName = 'Block Fault Table';
BlkFltTbl.Description = 'Cnt';
BlkFltTbl.DocUnits = 'Cnt';
BlkFltTbl.EngDT = struct.BlkFltTblRec1;
BlkFltTbl.EngMin = struct('Sts', NtcSts1.NTCSTS_PASSD, 'Prm', 0);
BlkFltTbl.EngMax = struct('Sts', NtcSts1.NTCSTS_PREFAILD, 'Prm', 0);
BlkFltTbl.InitRowCol = [1  5];


CmdRtnBuf = DataDict.PIM;
CmdRtnBuf.LongName = 'Command Return Buffer';
CmdRtnBuf.Description = 'Buffer for command and responses for each NvM block';
CmdRtnBuf.DocUnits = 'Cnt';
CmdRtnBuf.EngDT = struct.CmdRtnBufRec1;
CmdRtnBuf.EngMin = struct('StdRtn', 0, 'ReqPen', 0, 'ReqRes', 0);
CmdRtnBuf.EngMax = struct('StdRtn', 255, 'ReqPen', 255, 'ReqRes', 255);
CmdRtnBuf.InitRowCol = [1  1];


NvmBlkActv = DataDict.PIM;
NvmBlkActv.LongName = 'Nvm Block Active';
NvmBlkActv.Description = 'Array of all NvM blocks and their RAM block statuses';
NvmBlkActv.DocUnits = 'Cnt';
NvmBlkActv.EngDT = dt.lgc;
NvmBlkActv.EngMin = 0;
NvmBlkActv.EngMax = 1;
NvmBlkActv.InitRowCol = [1  1];


NvmStsCollctd = DataDict.PIM;
NvmStsCollctd.LongName = 'NvM Status Collected';
NvmStsCollctd.Description = 'Flag to indicate that all RAM block statues have been collected';
NvmStsCollctd.DocUnits = 'Cnt';
NvmStsCollctd.EngDT = dt.lgc;
NvmStsCollctd.EngMin = 0;
NvmStsCollctd.EngMax = 1;
NvmStsCollctd.InitRowCol = [1  1];


ShtdwnClsChk = DataDict.PIM;
ShtdwnClsChk.LongName = 'Shutdown Close Check';
ShtdwnClsChk.Description = [...
  'Close check variable used with NTC 0xBF'];
ShtdwnClsChk.DocUnits = 'Cnt';
ShtdwnClsChk.EngDT = dt.u32;
ShtdwnClsChk.EngMin = 0;
ShtdwnClsChk.EngMax = 4294967295;
ShtdwnClsChk.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition
%%-------------------------------------------
NvmBlkErr6 = DataDict.NTC;
NvmBlkErr6.NtcNr = NtcNr2.NTCNR_0X006;
NvmBlkErr6.NtcTyp = 'None';
NvmBlkErr6.LongName = 'NvM Block Error 6';
NvmBlkErr6.Description = 'NvM block error that sets NTC 6';
NvmBlkErr6.NtcStInfo = DataDict.NtcStInfoIdx;

NvmBlkErr7 = DataDict.NTC;
NvmBlkErr7.NtcNr = NtcNr2.NTCNR_0X007;
NvmBlkErr7.NtcTyp = 'None';
NvmBlkErr7.LongName = 'NvM Block Error 7';
NvmBlkErr7.Description = 'NvM block error that sets NTC 7';
NvmBlkErr7.NtcStInfo = DataDict.NtcStInfoIdx;

NvmBlkErr8 = DataDict.NTC;
NvmBlkErr8.NtcNr = NtcNr2.NTCNR_0X008;
NvmBlkErr8.NtcTyp = 'None';
NvmBlkErr8.LongName = 'NvM Block Error 8';
NvmBlkErr8.Description = 'NvM block error that sets NTC 8';
NvmBlkErr8.NtcStInfo = DataDict.NtcStInfoIdx;

NvmBlkErr10 = DataDict.NTC;
NvmBlkErr10.NtcNr = NtcNr2.NTCNR_0X00A;
NvmBlkErr10.NtcTyp = 'None';
NvmBlkErr10.LongName = 'NvM Block Error 0xA';
NvmBlkErr10.Description = 'NvM block error that sets NTC 0xA';
NvmBlkErr10.NtcStInfo = DataDict.NtcStInfoIdx;

NvmClsChkErr = DataDict.NTC;
NvmClsChkErr.NtcNr = NtcNr2.NTCNR_0X0BF;
NvmClsChkErr.NtcTyp = 'None';
NvmClsChkErr.LongName = 'Close Check Error';
NvmClsChkErr.Description = 'Close Check Error';
NvmClsChkErr.NtcStInfo = DataDict.NtcStInfoBitPacked;
NvmClsChkErr.NtcStInfo.Bit0Descr = 'Close check not saved properly';
NvmClsChkErr.NtcStInfo.Bit1Descr = 'Write All reported error';
NvmClsChkErr.NtcStInfo.Bit2Descr = 'Unused';
NvmClsChkErr.NtcStInfo.Bit3Descr = 'Unused';
NvmClsChkErr.NtcStInfo.Bit4Descr = 'Unused';
NvmClsChkErr.NtcStInfo.Bit5Descr = 'Unused';
NvmClsChkErr.NtcStInfo.Bit6Descr = 'Unused';
NvmClsChkErr.NtcStInfo.Bit7Descr = 'Unused';
%end of Data Dictionary
