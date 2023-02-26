%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 07-Nov-2017 14:22:51       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

AR350A = DataDict.FDD;
AR350A.Version = '2.9.X';
AR350A.LongName = 'Inter-Micro Communication  Arbitration';
AR350A.ShoName  = 'ImcArbn';
AR350A.DesignASIL = 'QM';
AR350A.Description = [...
  'IMC Arbitration responsible to transmit, receive data between two micr' ...
  'o controllers in a dual micro platform '];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
ImcArbnInit1 = DataDict.Runnable;
ImcArbnInit1.Context = 'Rte';
ImcArbnInit1.TimeStep = 0;
ImcArbnInit1.Description = 'None';

ImcArbnPer1 = DataDict.Runnable;
ImcArbnPer1.Context = 'Rte';
ImcArbnPer1.TimeStep = 0.002;
ImcArbnPer1.Description = [...
  'Periodic that packs data for Signal groups that are listed under 2ms R' ...
  'ate group'];

ImcArbnPer2 = DataDict.Runnable;
ImcArbnPer2.Context = 'Rte';
ImcArbnPer2.TimeStep = 0.01;
ImcArbnPer2.Description = [...
  'Periodic that packs data for Signal groups that are listed under 10ms ' ...
  'Rate group'];

ImcArbnPer3 = DataDict.Runnable;
ImcArbnPer3.Context = 'Rte';
ImcArbnPer3.TimeStep = 0.1;
ImcArbnPer3.Description = [...
  'Periodic that packs data for Signal groups that are listed under 100ms' ...
  ' Rate group'];

ImcArbnPer4 = DataDict.Runnable;
ImcArbnPer4.Context = 'Rte';
ImcArbnPer4.TimeStep = 0.002;
ImcArbnPer4.Description = [...
  'Periodic that unpacks data for Signal groups that are listed under 2ms' ...
  ' Rate group'];

ImcArbnPer5 = DataDict.Runnable;
ImcArbnPer5.Context = 'Rte';
ImcArbnPer5.TimeStep = 0.01;
ImcArbnPer5.Description = [...
  'Periodic that unpacks data for Signal groups that are listed under 10m' ...
  's Rate group'];

ImcArbnPer6 = DataDict.Runnable;
ImcArbnPer6.Context = 'Rte';
ImcArbnPer6.TimeStep = 0.1;
ImcArbnPer6.Description = [...
  'Periodic that unpacks data for Signal groups that are listed under 100' ...
  'ms Rate group'];

GetSigImcDataExtdSts_f32 = DataDict.SrvRunnable;
GetSigImcDataExtdSts_f32.Context = 'Rte';
GetSigImcDataExtdSts_f32.Description = [...
  'Get data from Imc Arbitration for a signal of type float32'];
GetSigImcDataExtdSts_f32.Return = DataDict.CSReturn;
GetSigImcDataExtdSts_f32.Return.Type = 'Standard';
GetSigImcDataExtdSts_f32.Return.Min = 0;
GetSigImcDataExtdSts_f32.Return.Max = 1;
GetSigImcDataExtdSts_f32.Return.TestTolerance = 0;
GetSigImcDataExtdSts_f32.Return.Description = 'Standard Return Type';
GetSigImcDataExtdSts_f32.Arguments(1) = DataDict.CSArguments;
GetSigImcDataExtdSts_f32.Arguments(1).Name = 'SigId';
GetSigImcDataExtdSts_f32.Arguments(1).EngDT = dt.u16;
GetSigImcDataExtdSts_f32.Arguments(1).EngMin = 0;
GetSigImcDataExtdSts_f32.Arguments(1).EngMax = 65535;
GetSigImcDataExtdSts_f32.Arguments(1).Units = 'Cnt';
GetSigImcDataExtdSts_f32.Arguments(1).Direction = 'In';
GetSigImcDataExtdSts_f32.Arguments(1).InitRowCol = [1  1];
GetSigImcDataExtdSts_f32.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcDataExtdSts_f32.Arguments(2) = DataDict.CSArguments;
GetSigImcDataExtdSts_f32.Arguments(2).Name = 'Data';
GetSigImcDataExtdSts_f32.Arguments(2).EngDT = dt.float32;
GetSigImcDataExtdSts_f32.Arguments(2).EngMin = -3.4028e+38;
GetSigImcDataExtdSts_f32.Arguments(2).EngMax = 3.4028e+38;
GetSigImcDataExtdSts_f32.Arguments(2).TestTolerance = 0.1;
GetSigImcDataExtdSts_f32.Arguments(2).Units = 'Uls';
GetSigImcDataExtdSts_f32.Arguments(2).Direction = 'Out';
GetSigImcDataExtdSts_f32.Arguments(2).InitRowCol = [1  1];
GetSigImcDataExtdSts_f32.Arguments(2).Description = 'flaot32 Signal data';
GetSigImcDataExtdSts_f32.Arguments(3) = DataDict.CSArguments;
GetSigImcDataExtdSts_f32.Arguments(3).Name = 'Sts';
GetSigImcDataExtdSts_f32.Arguments(3).EngDT = enum.ImcArbnRxExtdSts1;
GetSigImcDataExtdSts_f32.Arguments(3).EngMin = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_NEVERRXD;
GetSigImcDataExtdSts_f32.Arguments(3).EngMax = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_STRTG;
GetSigImcDataExtdSts_f32.Arguments(3).TestTolerance = 1;
GetSigImcDataExtdSts_f32.Arguments(3).Units = 'Cnt';
GetSigImcDataExtdSts_f32.Arguments(3).Direction = 'Out';
GetSigImcDataExtdSts_f32.Arguments(3).InitRowCol = [1  1];
GetSigImcDataExtdSts_f32.Arguments(3).Description = 'Extended Signal Status';
GetSigImcDataExtdSts_f32.Arguments(4) = DataDict.CSArguments;
GetSigImcDataExtdSts_f32.Arguments(4).Name = 'DataSrc';
GetSigImcDataExtdSts_f32.Arguments(4).EngDT = enum.ImcArbnRxDataSrc1;
GetSigImcDataExtdSts_f32.Arguments(4).EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
GetSigImcDataExtdSts_f32.Arguments(4).EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
GetSigImcDataExtdSts_f32.Arguments(4).TestTolerance = 1;
GetSigImcDataExtdSts_f32.Arguments(4).Units = 'Cnt';
GetSigImcDataExtdSts_f32.Arguments(4).Direction = 'Out';
GetSigImcDataExtdSts_f32.Arguments(4).InitRowCol = [1  1];
GetSigImcDataExtdSts_f32.Arguments(4).Description = [...
  'Source from which the Signal data received'];

GetSigImcDataExtdSts_logl = DataDict.SrvRunnable;
GetSigImcDataExtdSts_logl.Context = 'Rte';
GetSigImcDataExtdSts_logl.Description = [...
  'Get data from Imc Arbitration for a signal of type boolean'];
GetSigImcDataExtdSts_logl.Return = DataDict.CSReturn;
GetSigImcDataExtdSts_logl.Return.Type = 'Standard';
GetSigImcDataExtdSts_logl.Return.Min = 0;
GetSigImcDataExtdSts_logl.Return.Max = 1;
GetSigImcDataExtdSts_logl.Return.TestTolerance = 0;
GetSigImcDataExtdSts_logl.Return.Description = 'Standard Return Type';
GetSigImcDataExtdSts_logl.Arguments(1) = DataDict.CSArguments;
GetSigImcDataExtdSts_logl.Arguments(1).Name = 'SigId';
GetSigImcDataExtdSts_logl.Arguments(1).EngDT = dt.u16;
GetSigImcDataExtdSts_logl.Arguments(1).EngMin = 0;
GetSigImcDataExtdSts_logl.Arguments(1).EngMax = 65535;
GetSigImcDataExtdSts_logl.Arguments(1).Units = 'Cnt';
GetSigImcDataExtdSts_logl.Arguments(1).Direction = 'In';
GetSigImcDataExtdSts_logl.Arguments(1).InitRowCol = [1  1];
GetSigImcDataExtdSts_logl.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcDataExtdSts_logl.Arguments(2) = DataDict.CSArguments;
GetSigImcDataExtdSts_logl.Arguments(2).Name = 'Data';
GetSigImcDataExtdSts_logl.Arguments(2).EngDT = dt.lgc;
GetSigImcDataExtdSts_logl.Arguments(2).EngMin = 0;
GetSigImcDataExtdSts_logl.Arguments(2).EngMax = 1;
GetSigImcDataExtdSts_logl.Arguments(2).TestTolerance = 0;
GetSigImcDataExtdSts_logl.Arguments(2).Units = 'Uls';
GetSigImcDataExtdSts_logl.Arguments(2).Direction = 'Out';
GetSigImcDataExtdSts_logl.Arguments(2).InitRowCol = [1  1];
GetSigImcDataExtdSts_logl.Arguments(2).Description = 'boolean Signal data';
GetSigImcDataExtdSts_logl.Arguments(3) = DataDict.CSArguments;
GetSigImcDataExtdSts_logl.Arguments(3).Name = 'Sts';
GetSigImcDataExtdSts_logl.Arguments(3).EngDT = enum.ImcArbnRxExtdSts1;
GetSigImcDataExtdSts_logl.Arguments(3).EngMin = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_NEVERRXD;
GetSigImcDataExtdSts_logl.Arguments(3).EngMax = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_STRTG;
GetSigImcDataExtdSts_logl.Arguments(3).TestTolerance = 1;
GetSigImcDataExtdSts_logl.Arguments(3).Units = 'Cnt';
GetSigImcDataExtdSts_logl.Arguments(3).Direction = 'Out';
GetSigImcDataExtdSts_logl.Arguments(3).InitRowCol = [1  1];
GetSigImcDataExtdSts_logl.Arguments(3).Description = 'Extended Signal Status';
GetSigImcDataExtdSts_logl.Arguments(4) = DataDict.CSArguments;
GetSigImcDataExtdSts_logl.Arguments(4).Name = 'DataSrc';
GetSigImcDataExtdSts_logl.Arguments(4).EngDT = enum.ImcArbnRxDataSrc1;
GetSigImcDataExtdSts_logl.Arguments(4).EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
GetSigImcDataExtdSts_logl.Arguments(4).EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
GetSigImcDataExtdSts_logl.Arguments(4).TestTolerance = 1;
GetSigImcDataExtdSts_logl.Arguments(4).Units = 'Cnt';
GetSigImcDataExtdSts_logl.Arguments(4).Direction = 'Out';
GetSigImcDataExtdSts_logl.Arguments(4).InitRowCol = [1  1];
GetSigImcDataExtdSts_logl.Arguments(4).Description = [...
  'Source from which the Signal data received'];

GetSigImcDataExtdSts_s08 = DataDict.SrvRunnable;
GetSigImcDataExtdSts_s08.Context = 'Rte';
GetSigImcDataExtdSts_s08.Description = [...
  'Get data from Imc Arbitration for a signal of type sint8'];
GetSigImcDataExtdSts_s08.Return = DataDict.CSReturn;
GetSigImcDataExtdSts_s08.Return.Type = 'Standard';
GetSigImcDataExtdSts_s08.Return.Min = 0;
GetSigImcDataExtdSts_s08.Return.Max = 1;
GetSigImcDataExtdSts_s08.Return.TestTolerance = 0;
GetSigImcDataExtdSts_s08.Return.Description = 'Standard Return Type';
GetSigImcDataExtdSts_s08.Arguments(1) = DataDict.CSArguments;
GetSigImcDataExtdSts_s08.Arguments(1).Name = 'SigId';
GetSigImcDataExtdSts_s08.Arguments(1).EngDT = dt.u16;
GetSigImcDataExtdSts_s08.Arguments(1).EngMin = 0;
GetSigImcDataExtdSts_s08.Arguments(1).EngMax = 65535;
GetSigImcDataExtdSts_s08.Arguments(1).Units = 'Cnt';
GetSigImcDataExtdSts_s08.Arguments(1).Direction = 'In';
GetSigImcDataExtdSts_s08.Arguments(1).InitRowCol = [1  1];
GetSigImcDataExtdSts_s08.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcDataExtdSts_s08.Arguments(2) = DataDict.CSArguments;
GetSigImcDataExtdSts_s08.Arguments(2).Name = 'Data';
GetSigImcDataExtdSts_s08.Arguments(2).EngDT = dt.s08;
GetSigImcDataExtdSts_s08.Arguments(2).EngMin = -128;
GetSigImcDataExtdSts_s08.Arguments(2).EngMax = 127;
GetSigImcDataExtdSts_s08.Arguments(2).TestTolerance = 1;
GetSigImcDataExtdSts_s08.Arguments(2).Units = 'Uls';
GetSigImcDataExtdSts_s08.Arguments(2).Direction = 'Out';
GetSigImcDataExtdSts_s08.Arguments(2).InitRowCol = [1  1];
GetSigImcDataExtdSts_s08.Arguments(2).Description = 'sint8 Signal data';
GetSigImcDataExtdSts_s08.Arguments(3) = DataDict.CSArguments;
GetSigImcDataExtdSts_s08.Arguments(3).Name = 'Sts';
GetSigImcDataExtdSts_s08.Arguments(3).EngDT = enum.ImcArbnRxExtdSts1;
GetSigImcDataExtdSts_s08.Arguments(3).EngMin = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_NEVERRXD;
GetSigImcDataExtdSts_s08.Arguments(3).EngMax = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_STRTG;
GetSigImcDataExtdSts_s08.Arguments(3).TestTolerance = 1;
GetSigImcDataExtdSts_s08.Arguments(3).Units = 'Cnt';
GetSigImcDataExtdSts_s08.Arguments(3).Direction = 'Out';
GetSigImcDataExtdSts_s08.Arguments(3).InitRowCol = [1  1];
GetSigImcDataExtdSts_s08.Arguments(3).Description = 'Extended Signal Status';
GetSigImcDataExtdSts_s08.Arguments(4) = DataDict.CSArguments;
GetSigImcDataExtdSts_s08.Arguments(4).Name = 'DataSrc';
GetSigImcDataExtdSts_s08.Arguments(4).EngDT = enum.ImcArbnRxDataSrc1;
GetSigImcDataExtdSts_s08.Arguments(4).EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
GetSigImcDataExtdSts_s08.Arguments(4).EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
GetSigImcDataExtdSts_s08.Arguments(4).TestTolerance = 1;
GetSigImcDataExtdSts_s08.Arguments(4).Units = 'Cnt';
GetSigImcDataExtdSts_s08.Arguments(4).Direction = 'Out';
GetSigImcDataExtdSts_s08.Arguments(4).InitRowCol = [1  1];
GetSigImcDataExtdSts_s08.Arguments(4).Description = [...
  'Source from which the Signal data received'];

GetSigImcDataExtdSts_s16 = DataDict.SrvRunnable;
GetSigImcDataExtdSts_s16.Context = 'Rte';
GetSigImcDataExtdSts_s16.Description = [...
  'Get data from Imc Arbitration for a signal of type sint16'];
GetSigImcDataExtdSts_s16.Return = DataDict.CSReturn;
GetSigImcDataExtdSts_s16.Return.Type = 'Standard';
GetSigImcDataExtdSts_s16.Return.Min = 0;
GetSigImcDataExtdSts_s16.Return.Max = 1;
GetSigImcDataExtdSts_s16.Return.TestTolerance = 0;
GetSigImcDataExtdSts_s16.Return.Description = 'Standard Return Type';
GetSigImcDataExtdSts_s16.Arguments(1) = DataDict.CSArguments;
GetSigImcDataExtdSts_s16.Arguments(1).Name = 'SigId';
GetSigImcDataExtdSts_s16.Arguments(1).EngDT = dt.u16;
GetSigImcDataExtdSts_s16.Arguments(1).EngMin = 0;
GetSigImcDataExtdSts_s16.Arguments(1).EngMax = 65535;
GetSigImcDataExtdSts_s16.Arguments(1).Units = 'Cnt';
GetSigImcDataExtdSts_s16.Arguments(1).Direction = 'In';
GetSigImcDataExtdSts_s16.Arguments(1).InitRowCol = [1  1];
GetSigImcDataExtdSts_s16.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcDataExtdSts_s16.Arguments(2) = DataDict.CSArguments;
GetSigImcDataExtdSts_s16.Arguments(2).Name = 'Data';
GetSigImcDataExtdSts_s16.Arguments(2).EngDT = dt.s16;
GetSigImcDataExtdSts_s16.Arguments(2).EngMin = -32768;
GetSigImcDataExtdSts_s16.Arguments(2).EngMax = 32767;
GetSigImcDataExtdSts_s16.Arguments(2).TestTolerance = 1;
GetSigImcDataExtdSts_s16.Arguments(2).Units = 'Uls';
GetSigImcDataExtdSts_s16.Arguments(2).Direction = 'Out';
GetSigImcDataExtdSts_s16.Arguments(2).InitRowCol = [1  1];
GetSigImcDataExtdSts_s16.Arguments(2).Description = 'sint16 Signal data';
GetSigImcDataExtdSts_s16.Arguments(3) = DataDict.CSArguments;
GetSigImcDataExtdSts_s16.Arguments(3).Name = 'Sts';
GetSigImcDataExtdSts_s16.Arguments(3).EngDT = enum.ImcArbnRxExtdSts1;
GetSigImcDataExtdSts_s16.Arguments(3).EngMin = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_NEVERRXD;
GetSigImcDataExtdSts_s16.Arguments(3).EngMax = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_STRTG;
GetSigImcDataExtdSts_s16.Arguments(3).TestTolerance = 1;
GetSigImcDataExtdSts_s16.Arguments(3).Units = 'Cnt';
GetSigImcDataExtdSts_s16.Arguments(3).Direction = 'Out';
GetSigImcDataExtdSts_s16.Arguments(3).InitRowCol = [1  1];
GetSigImcDataExtdSts_s16.Arguments(3).Description = 'Extended Signal Status';
GetSigImcDataExtdSts_s16.Arguments(4) = DataDict.CSArguments;
GetSigImcDataExtdSts_s16.Arguments(4).Name = 'DataSrc';
GetSigImcDataExtdSts_s16.Arguments(4).EngDT = enum.ImcArbnRxDataSrc1;
GetSigImcDataExtdSts_s16.Arguments(4).EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
GetSigImcDataExtdSts_s16.Arguments(4).EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
GetSigImcDataExtdSts_s16.Arguments(4).TestTolerance = 1;
GetSigImcDataExtdSts_s16.Arguments(4).Units = 'Cnt';
GetSigImcDataExtdSts_s16.Arguments(4).Direction = 'Out';
GetSigImcDataExtdSts_s16.Arguments(4).InitRowCol = [1  1];
GetSigImcDataExtdSts_s16.Arguments(4).Description = [...
  'Source from which the Signal data received'];

GetSigImcDataExtdSts_s32 = DataDict.SrvRunnable;
GetSigImcDataExtdSts_s32.Context = 'Rte';
GetSigImcDataExtdSts_s32.Description = [...
  'Get data from Imc Arbitration for a signal of type sint32'];
GetSigImcDataExtdSts_s32.Return = DataDict.CSReturn;
GetSigImcDataExtdSts_s32.Return.Type = 'Standard';
GetSigImcDataExtdSts_s32.Return.Min = 0;
GetSigImcDataExtdSts_s32.Return.Max = 1;
GetSigImcDataExtdSts_s32.Return.TestTolerance = 0;
GetSigImcDataExtdSts_s32.Return.Description = 'Standard Return Type';
GetSigImcDataExtdSts_s32.Arguments(1) = DataDict.CSArguments;
GetSigImcDataExtdSts_s32.Arguments(1).Name = 'SigId';
GetSigImcDataExtdSts_s32.Arguments(1).EngDT = dt.u16;
GetSigImcDataExtdSts_s32.Arguments(1).EngMin = 0;
GetSigImcDataExtdSts_s32.Arguments(1).EngMax = 65535;
GetSigImcDataExtdSts_s32.Arguments(1).Units = 'Cnt';
GetSigImcDataExtdSts_s32.Arguments(1).Direction = 'In';
GetSigImcDataExtdSts_s32.Arguments(1).InitRowCol = [1  1];
GetSigImcDataExtdSts_s32.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcDataExtdSts_s32.Arguments(2) = DataDict.CSArguments;
GetSigImcDataExtdSts_s32.Arguments(2).Name = 'Data';
GetSigImcDataExtdSts_s32.Arguments(2).EngDT = dt.s32;
GetSigImcDataExtdSts_s32.Arguments(2).EngMin = -2147483648;
GetSigImcDataExtdSts_s32.Arguments(2).EngMax = 2147483647;
GetSigImcDataExtdSts_s32.Arguments(2).TestTolerance = 1;
GetSigImcDataExtdSts_s32.Arguments(2).Units = 'Uls';
GetSigImcDataExtdSts_s32.Arguments(2).Direction = 'Out';
GetSigImcDataExtdSts_s32.Arguments(2).InitRowCol = [1  1];
GetSigImcDataExtdSts_s32.Arguments(2).Description = 'sint32 Signal data';
GetSigImcDataExtdSts_s32.Arguments(3) = DataDict.CSArguments;
GetSigImcDataExtdSts_s32.Arguments(3).Name = 'Sts';
GetSigImcDataExtdSts_s32.Arguments(3).EngDT = enum.ImcArbnRxExtdSts1;
GetSigImcDataExtdSts_s32.Arguments(3).EngMin = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_NEVERRXD;
GetSigImcDataExtdSts_s32.Arguments(3).EngMax = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_STRTG;
GetSigImcDataExtdSts_s32.Arguments(3).TestTolerance = 1;
GetSigImcDataExtdSts_s32.Arguments(3).Units = 'Cnt';
GetSigImcDataExtdSts_s32.Arguments(3).Direction = 'Out';
GetSigImcDataExtdSts_s32.Arguments(3).InitRowCol = [1  1];
GetSigImcDataExtdSts_s32.Arguments(3).Description = 'Extended Signal Status';
GetSigImcDataExtdSts_s32.Arguments(4) = DataDict.CSArguments;
GetSigImcDataExtdSts_s32.Arguments(4).Name = 'DataSrc';
GetSigImcDataExtdSts_s32.Arguments(4).EngDT = enum.ImcArbnRxDataSrc1;
GetSigImcDataExtdSts_s32.Arguments(4).EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
GetSigImcDataExtdSts_s32.Arguments(4).EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
GetSigImcDataExtdSts_s32.Arguments(4).TestTolerance = 1;
GetSigImcDataExtdSts_s32.Arguments(4).Units = 'Cnt';
GetSigImcDataExtdSts_s32.Arguments(4).Direction = 'Out';
GetSigImcDataExtdSts_s32.Arguments(4).InitRowCol = [1  1];
GetSigImcDataExtdSts_s32.Arguments(4).Description = [...
  'Source from which the Signal data received'];

GetSigImcDataExtdSts_u08 = DataDict.SrvRunnable;
GetSigImcDataExtdSts_u08.Context = 'Rte';
GetSigImcDataExtdSts_u08.Description = [...
  'Get data from Imc Arbitration for a signal of type uint8'];
GetSigImcDataExtdSts_u08.Return = DataDict.CSReturn;
GetSigImcDataExtdSts_u08.Return.Type = 'Standard';
GetSigImcDataExtdSts_u08.Return.Min = 0;
GetSigImcDataExtdSts_u08.Return.Max = 1;
GetSigImcDataExtdSts_u08.Return.TestTolerance = 0;
GetSigImcDataExtdSts_u08.Return.Description = 'Standard Return Type';
GetSigImcDataExtdSts_u08.Arguments(1) = DataDict.CSArguments;
GetSigImcDataExtdSts_u08.Arguments(1).Name = 'SigId';
GetSigImcDataExtdSts_u08.Arguments(1).EngDT = dt.u16;
GetSigImcDataExtdSts_u08.Arguments(1).EngMin = 0;
GetSigImcDataExtdSts_u08.Arguments(1).EngMax = 65535;
GetSigImcDataExtdSts_u08.Arguments(1).Units = 'Cnt';
GetSigImcDataExtdSts_u08.Arguments(1).Direction = 'In';
GetSigImcDataExtdSts_u08.Arguments(1).InitRowCol = [1  1];
GetSigImcDataExtdSts_u08.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcDataExtdSts_u08.Arguments(2) = DataDict.CSArguments;
GetSigImcDataExtdSts_u08.Arguments(2).Name = 'Data';
GetSigImcDataExtdSts_u08.Arguments(2).EngDT = dt.u08;
GetSigImcDataExtdSts_u08.Arguments(2).EngMin = 0;
GetSigImcDataExtdSts_u08.Arguments(2).EngMax = 255;
GetSigImcDataExtdSts_u08.Arguments(2).TestTolerance = 1;
GetSigImcDataExtdSts_u08.Arguments(2).Units = 'Uls';
GetSigImcDataExtdSts_u08.Arguments(2).Direction = 'Out';
GetSigImcDataExtdSts_u08.Arguments(2).InitRowCol = [1  1];
GetSigImcDataExtdSts_u08.Arguments(2).Description = 'uint8 Signal data';
GetSigImcDataExtdSts_u08.Arguments(3) = DataDict.CSArguments;
GetSigImcDataExtdSts_u08.Arguments(3).Name = 'Sts';
GetSigImcDataExtdSts_u08.Arguments(3).EngDT = enum.ImcArbnRxExtdSts1;
GetSigImcDataExtdSts_u08.Arguments(3).EngMin = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_NEVERRXD;
GetSigImcDataExtdSts_u08.Arguments(3).EngMax = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_STRTG;
GetSigImcDataExtdSts_u08.Arguments(3).TestTolerance = 1;
GetSigImcDataExtdSts_u08.Arguments(3).Units = 'Cnt';
GetSigImcDataExtdSts_u08.Arguments(3).Direction = 'Out';
GetSigImcDataExtdSts_u08.Arguments(3).InitRowCol = [1  1];
GetSigImcDataExtdSts_u08.Arguments(3).Description = 'Extended Signal Status';
GetSigImcDataExtdSts_u08.Arguments(4) = DataDict.CSArguments;
GetSigImcDataExtdSts_u08.Arguments(4).Name = 'DataSrc';
GetSigImcDataExtdSts_u08.Arguments(4).EngDT = enum.ImcArbnRxDataSrc1;
GetSigImcDataExtdSts_u08.Arguments(4).EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
GetSigImcDataExtdSts_u08.Arguments(4).EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
GetSigImcDataExtdSts_u08.Arguments(4).TestTolerance = 1;
GetSigImcDataExtdSts_u08.Arguments(4).Units = 'Cnt';
GetSigImcDataExtdSts_u08.Arguments(4).Direction = 'Out';
GetSigImcDataExtdSts_u08.Arguments(4).InitRowCol = [1  1];
GetSigImcDataExtdSts_u08.Arguments(4).Description = [...
  'Source from which the Signal data received'];

GetSigImcDataExtdSts_u16 = DataDict.SrvRunnable;
GetSigImcDataExtdSts_u16.Context = 'Rte';
GetSigImcDataExtdSts_u16.Description = [...
  'Get data from Imc Arbitration for a signal of type uint16'];
GetSigImcDataExtdSts_u16.Return = DataDict.CSReturn;
GetSigImcDataExtdSts_u16.Return.Type = 'Standard';
GetSigImcDataExtdSts_u16.Return.Min = 0;
GetSigImcDataExtdSts_u16.Return.Max = 1;
GetSigImcDataExtdSts_u16.Return.TestTolerance = 0;
GetSigImcDataExtdSts_u16.Return.Description = 'Standard Return Type';
GetSigImcDataExtdSts_u16.Arguments(1) = DataDict.CSArguments;
GetSigImcDataExtdSts_u16.Arguments(1).Name = 'SigId';
GetSigImcDataExtdSts_u16.Arguments(1).EngDT = dt.u16;
GetSigImcDataExtdSts_u16.Arguments(1).EngMin = 0;
GetSigImcDataExtdSts_u16.Arguments(1).EngMax = 65535;
GetSigImcDataExtdSts_u16.Arguments(1).Units = 'Cnt';
GetSigImcDataExtdSts_u16.Arguments(1).Direction = 'In';
GetSigImcDataExtdSts_u16.Arguments(1).InitRowCol = [1  1];
GetSigImcDataExtdSts_u16.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcDataExtdSts_u16.Arguments(2) = DataDict.CSArguments;
GetSigImcDataExtdSts_u16.Arguments(2).Name = 'Data';
GetSigImcDataExtdSts_u16.Arguments(2).EngDT = dt.u16;
GetSigImcDataExtdSts_u16.Arguments(2).EngMin = 0;
GetSigImcDataExtdSts_u16.Arguments(2).EngMax = 65535;
GetSigImcDataExtdSts_u16.Arguments(2).TestTolerance = 1;
GetSigImcDataExtdSts_u16.Arguments(2).Units = 'Uls';
GetSigImcDataExtdSts_u16.Arguments(2).Direction = 'Out';
GetSigImcDataExtdSts_u16.Arguments(2).InitRowCol = [1  1];
GetSigImcDataExtdSts_u16.Arguments(2).Description = 'uint16 Signal data';
GetSigImcDataExtdSts_u16.Arguments(3) = DataDict.CSArguments;
GetSigImcDataExtdSts_u16.Arguments(3).Name = 'Sts';
GetSigImcDataExtdSts_u16.Arguments(3).EngDT = enum.ImcArbnRxExtdSts1;
GetSigImcDataExtdSts_u16.Arguments(3).EngMin = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_NEVERRXD;
GetSigImcDataExtdSts_u16.Arguments(3).EngMax = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_STRTG;
GetSigImcDataExtdSts_u16.Arguments(3).TestTolerance = 1;
GetSigImcDataExtdSts_u16.Arguments(3).Units = 'Cnt';
GetSigImcDataExtdSts_u16.Arguments(3).Direction = 'Out';
GetSigImcDataExtdSts_u16.Arguments(3).InitRowCol = [1  1];
GetSigImcDataExtdSts_u16.Arguments(3).Description = 'Extended Signal Status';
GetSigImcDataExtdSts_u16.Arguments(4) = DataDict.CSArguments;
GetSigImcDataExtdSts_u16.Arguments(4).Name = 'DataSrc';
GetSigImcDataExtdSts_u16.Arguments(4).EngDT = enum.ImcArbnRxDataSrc1;
GetSigImcDataExtdSts_u16.Arguments(4).EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
GetSigImcDataExtdSts_u16.Arguments(4).EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
GetSigImcDataExtdSts_u16.Arguments(4).TestTolerance = 1;
GetSigImcDataExtdSts_u16.Arguments(4).Units = 'Cnt';
GetSigImcDataExtdSts_u16.Arguments(4).Direction = 'Out';
GetSigImcDataExtdSts_u16.Arguments(4).InitRowCol = [1  1];
GetSigImcDataExtdSts_u16.Arguments(4).Description = [...
  'Source from which the Signal data received'];

GetSigImcDataExtdSts_u32 = DataDict.SrvRunnable;
GetSigImcDataExtdSts_u32.Context = 'Rte';
GetSigImcDataExtdSts_u32.Description = [...
  'Get data from Imc Arbitration for a signal of type uint32'];
GetSigImcDataExtdSts_u32.Return = DataDict.CSReturn;
GetSigImcDataExtdSts_u32.Return.Type = 'Standard';
GetSigImcDataExtdSts_u32.Return.Min = 0;
GetSigImcDataExtdSts_u32.Return.Max = 1;
GetSigImcDataExtdSts_u32.Return.TestTolerance = 0;
GetSigImcDataExtdSts_u32.Return.Description = 'Standard Return Type';
GetSigImcDataExtdSts_u32.Arguments(1) = DataDict.CSArguments;
GetSigImcDataExtdSts_u32.Arguments(1).Name = 'SigId';
GetSigImcDataExtdSts_u32.Arguments(1).EngDT = dt.u16;
GetSigImcDataExtdSts_u32.Arguments(1).EngMin = 0;
GetSigImcDataExtdSts_u32.Arguments(1).EngMax = 65535;
GetSigImcDataExtdSts_u32.Arguments(1).Units = 'Cnt';
GetSigImcDataExtdSts_u32.Arguments(1).Direction = 'In';
GetSigImcDataExtdSts_u32.Arguments(1).InitRowCol = [1  1];
GetSigImcDataExtdSts_u32.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcDataExtdSts_u32.Arguments(2) = DataDict.CSArguments;
GetSigImcDataExtdSts_u32.Arguments(2).Name = 'Data';
GetSigImcDataExtdSts_u32.Arguments(2).EngDT = dt.u32;
GetSigImcDataExtdSts_u32.Arguments(2).EngMin = 0;
GetSigImcDataExtdSts_u32.Arguments(2).EngMax = 4294967295;
GetSigImcDataExtdSts_u32.Arguments(2).TestTolerance = 1;
GetSigImcDataExtdSts_u32.Arguments(2).Units = 'Uls';
GetSigImcDataExtdSts_u32.Arguments(2).Direction = 'Out';
GetSigImcDataExtdSts_u32.Arguments(2).InitRowCol = [1  1];
GetSigImcDataExtdSts_u32.Arguments(2).Description = 'uint32 Signal data';
GetSigImcDataExtdSts_u32.Arguments(3) = DataDict.CSArguments;
GetSigImcDataExtdSts_u32.Arguments(3).Name = 'Sts';
GetSigImcDataExtdSts_u32.Arguments(3).EngDT = enum.ImcArbnRxExtdSts1;
GetSigImcDataExtdSts_u32.Arguments(3).EngMin = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_NEVERRXD;
GetSigImcDataExtdSts_u32.Arguments(3).EngMax = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_STRTG;
GetSigImcDataExtdSts_u32.Arguments(3).TestTolerance = 1;
GetSigImcDataExtdSts_u32.Arguments(3).Units = 'Cnt';
GetSigImcDataExtdSts_u32.Arguments(3).Direction = 'Out';
GetSigImcDataExtdSts_u32.Arguments(3).InitRowCol = [1  1];
GetSigImcDataExtdSts_u32.Arguments(3).Description = 'Extended Signal Status';
GetSigImcDataExtdSts_u32.Arguments(4) = DataDict.CSArguments;
GetSigImcDataExtdSts_u32.Arguments(4).Name = 'DataSrc';
GetSigImcDataExtdSts_u32.Arguments(4).EngDT = enum.ImcArbnRxDataSrc1;
GetSigImcDataExtdSts_u32.Arguments(4).EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
GetSigImcDataExtdSts_u32.Arguments(4).EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
GetSigImcDataExtdSts_u32.Arguments(4).TestTolerance = 1;
GetSigImcDataExtdSts_u32.Arguments(4).Units = 'Cnt';
GetSigImcDataExtdSts_u32.Arguments(4).Direction = 'Out';
GetSigImcDataExtdSts_u32.Arguments(4).InitRowCol = [1  1];
GetSigImcDataExtdSts_u32.Arguments(4).Description = [...
  'Source from which the Signal data received'];

GetSigImcData_f32 = DataDict.SrvRunnable;
GetSigImcData_f32.Context = 'Rte';
GetSigImcData_f32.Description = [...
  'Get data from Imc Arbitration for a signal of type float32'];
GetSigImcData_f32.Return = DataDict.CSReturn;
GetSigImcData_f32.Return.Type = 'Standard';
GetSigImcData_f32.Return.Min = 0;
GetSigImcData_f32.Return.Max = 1;
GetSigImcData_f32.Return.TestTolerance = 0;
GetSigImcData_f32.Return.Description = 'Standard Return Type';
GetSigImcData_f32.Arguments(1) = DataDict.CSArguments;
GetSigImcData_f32.Arguments(1).Name = 'SigId';
GetSigImcData_f32.Arguments(1).EngDT = dt.u16;
GetSigImcData_f32.Arguments(1).EngMin = 0;
GetSigImcData_f32.Arguments(1).EngMax = 65535;
GetSigImcData_f32.Arguments(1).Units = 'Cnt';
GetSigImcData_f32.Arguments(1).Direction = 'In';
GetSigImcData_f32.Arguments(1).InitRowCol = [1  1];
GetSigImcData_f32.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcData_f32.Arguments(2) = DataDict.CSArguments;
GetSigImcData_f32.Arguments(2).Name = 'Data';
GetSigImcData_f32.Arguments(2).EngDT = dt.float32;
GetSigImcData_f32.Arguments(2).EngMin = -3.4028e+38;
GetSigImcData_f32.Arguments(2).EngMax = 3.4028e+38;
GetSigImcData_f32.Arguments(2).TestTolerance = 0.1;
GetSigImcData_f32.Arguments(2).Units = 'Uls';
GetSigImcData_f32.Arguments(2).Direction = 'Out';
GetSigImcData_f32.Arguments(2).InitRowCol = [1  1];
GetSigImcData_f32.Arguments(2).Description = 'float32 signal data';
GetSigImcData_f32.Arguments(3) = DataDict.CSArguments;
GetSigImcData_f32.Arguments(3).Name = 'Sts';
GetSigImcData_f32.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_f32.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_f32.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_f32.Arguments(3).TestTolerance = 1;
GetSigImcData_f32.Arguments(3).Units = 'Cnt';
GetSigImcData_f32.Arguments(3).Direction = 'Out';
GetSigImcData_f32.Arguments(3).InitRowCol = [1  1];
GetSigImcData_f32.Arguments(3).Description = 'Signal Status';

GetSigImcData_logl = DataDict.SrvRunnable;
GetSigImcData_logl.Context = 'Rte';
GetSigImcData_logl.Description = [...
  'Get data from Imc Arbitration for a signal of type boolean'];
GetSigImcData_logl.Return = DataDict.CSReturn;
GetSigImcData_logl.Return.Type = 'Standard';
GetSigImcData_logl.Return.Min = 0;
GetSigImcData_logl.Return.Max = 1;
GetSigImcData_logl.Return.TestTolerance = 0;
GetSigImcData_logl.Return.Description = 'Standard Return Type';
GetSigImcData_logl.Arguments(1) = DataDict.CSArguments;
GetSigImcData_logl.Arguments(1).Name = 'SigId';
GetSigImcData_logl.Arguments(1).EngDT = dt.u16;
GetSigImcData_logl.Arguments(1).EngMin = 0;
GetSigImcData_logl.Arguments(1).EngMax = 65535;
GetSigImcData_logl.Arguments(1).Units = 'Cnt';
GetSigImcData_logl.Arguments(1).Direction = 'In';
GetSigImcData_logl.Arguments(1).InitRowCol = [1  1];
GetSigImcData_logl.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcData_logl.Arguments(2) = DataDict.CSArguments;
GetSigImcData_logl.Arguments(2).Name = 'Data';
GetSigImcData_logl.Arguments(2).EngDT = dt.lgc;
GetSigImcData_logl.Arguments(2).EngMin = 0;
GetSigImcData_logl.Arguments(2).EngMax = 1;
GetSigImcData_logl.Arguments(2).TestTolerance = 0;
GetSigImcData_logl.Arguments(2).Units = 'Uls';
GetSigImcData_logl.Arguments(2).Direction = 'Out';
GetSigImcData_logl.Arguments(2).InitRowCol = [1  1];
GetSigImcData_logl.Arguments(2).Description = 'boolean signal data';
GetSigImcData_logl.Arguments(3) = DataDict.CSArguments;
GetSigImcData_logl.Arguments(3).Name = 'Sts';
GetSigImcData_logl.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_logl.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_logl.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_logl.Arguments(3).TestTolerance = 1;
GetSigImcData_logl.Arguments(3).Units = 'Cnt';
GetSigImcData_logl.Arguments(3).Direction = 'Out';
GetSigImcData_logl.Arguments(3).InitRowCol = [1  1];
GetSigImcData_logl.Arguments(3).Description = 'Signal Status';

GetSigImcData_s08 = DataDict.SrvRunnable;
GetSigImcData_s08.Context = 'Rte';
GetSigImcData_s08.Description = [...
  'Get data from Imc Arbitration for a signal of type sint8'];
GetSigImcData_s08.Return = DataDict.CSReturn;
GetSigImcData_s08.Return.Type = 'Standard';
GetSigImcData_s08.Return.Min = 0;
GetSigImcData_s08.Return.Max = 1;
GetSigImcData_s08.Return.TestTolerance = 0;
GetSigImcData_s08.Return.Description = 'Standard Return Type';
GetSigImcData_s08.Arguments(1) = DataDict.CSArguments;
GetSigImcData_s08.Arguments(1).Name = 'SigId';
GetSigImcData_s08.Arguments(1).EngDT = dt.u16;
GetSigImcData_s08.Arguments(1).EngMin = 0;
GetSigImcData_s08.Arguments(1).EngMax = 65535;
GetSigImcData_s08.Arguments(1).Units = 'Cnt';
GetSigImcData_s08.Arguments(1).Direction = 'In';
GetSigImcData_s08.Arguments(1).InitRowCol = [1  1];
GetSigImcData_s08.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcData_s08.Arguments(2) = DataDict.CSArguments;
GetSigImcData_s08.Arguments(2).Name = 'Data';
GetSigImcData_s08.Arguments(2).EngDT = dt.s08;
GetSigImcData_s08.Arguments(2).EngMin = -128;
GetSigImcData_s08.Arguments(2).EngMax = 127;
GetSigImcData_s08.Arguments(2).TestTolerance = 1;
GetSigImcData_s08.Arguments(2).Units = 'Uls';
GetSigImcData_s08.Arguments(2).Direction = 'Out';
GetSigImcData_s08.Arguments(2).InitRowCol = [1  1];
GetSigImcData_s08.Arguments(2).Description = 'sint8 signal data';
GetSigImcData_s08.Arguments(3) = DataDict.CSArguments;
GetSigImcData_s08.Arguments(3).Name = 'Sts';
GetSigImcData_s08.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_s08.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_s08.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_s08.Arguments(3).TestTolerance = 1;
GetSigImcData_s08.Arguments(3).Units = 'Cnt';
GetSigImcData_s08.Arguments(3).Direction = 'Out';
GetSigImcData_s08.Arguments(3).InitRowCol = [1  1];
GetSigImcData_s08.Arguments(3).Description = 'Signal Status';

GetSigImcData_s16 = DataDict.SrvRunnable;
GetSigImcData_s16.Context = 'Rte';
GetSigImcData_s16.Description = [...
  'Get data from Imc Arbitration for a signal of type sint16'];
GetSigImcData_s16.Return = DataDict.CSReturn;
GetSigImcData_s16.Return.Type = 'Standard';
GetSigImcData_s16.Return.Min = 0;
GetSigImcData_s16.Return.Max = 1;
GetSigImcData_s16.Return.TestTolerance = 0;
GetSigImcData_s16.Return.Description = 'Standard Return Type';
GetSigImcData_s16.Arguments(1) = DataDict.CSArguments;
GetSigImcData_s16.Arguments(1).Name = 'SigId';
GetSigImcData_s16.Arguments(1).EngDT = dt.u16;
GetSigImcData_s16.Arguments(1).EngMin = 0;
GetSigImcData_s16.Arguments(1).EngMax = 65535;
GetSigImcData_s16.Arguments(1).Units = 'Cnt';
GetSigImcData_s16.Arguments(1).Direction = 'In';
GetSigImcData_s16.Arguments(1).InitRowCol = [1  1];
GetSigImcData_s16.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcData_s16.Arguments(2) = DataDict.CSArguments;
GetSigImcData_s16.Arguments(2).Name = 'Data';
GetSigImcData_s16.Arguments(2).EngDT = dt.s16;
GetSigImcData_s16.Arguments(2).EngMin = -32768;
GetSigImcData_s16.Arguments(2).EngMax = 32767;
GetSigImcData_s16.Arguments(2).TestTolerance = 1;
GetSigImcData_s16.Arguments(2).Units = 'Uls';
GetSigImcData_s16.Arguments(2).Direction = 'Out';
GetSigImcData_s16.Arguments(2).InitRowCol = [1  1];
GetSigImcData_s16.Arguments(2).Description = 'sint16 signal data';
GetSigImcData_s16.Arguments(3) = DataDict.CSArguments;
GetSigImcData_s16.Arguments(3).Name = 'Sts';
GetSigImcData_s16.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_s16.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_s16.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_s16.Arguments(3).TestTolerance = 1;
GetSigImcData_s16.Arguments(3).Units = 'Cnt';
GetSigImcData_s16.Arguments(3).Direction = 'Out';
GetSigImcData_s16.Arguments(3).InitRowCol = [1  1];
GetSigImcData_s16.Arguments(3).Description = 'Signal Status';

GetSigImcData_s32 = DataDict.SrvRunnable;
GetSigImcData_s32.Context = 'Rte';
GetSigImcData_s32.Description = [...
  'Get data from Imc Arbitration for a signal of type sint32'];
GetSigImcData_s32.Return = DataDict.CSReturn;
GetSigImcData_s32.Return.Type = 'Standard';
GetSigImcData_s32.Return.Min = 0;
GetSigImcData_s32.Return.Max = 1;
GetSigImcData_s32.Return.TestTolerance = 0;
GetSigImcData_s32.Return.Description = 'Standard Return Type';
GetSigImcData_s32.Arguments(1) = DataDict.CSArguments;
GetSigImcData_s32.Arguments(1).Name = 'SigId';
GetSigImcData_s32.Arguments(1).EngDT = dt.u16;
GetSigImcData_s32.Arguments(1).EngMin = 0;
GetSigImcData_s32.Arguments(1).EngMax = 65535;
GetSigImcData_s32.Arguments(1).Units = 'Cnt';
GetSigImcData_s32.Arguments(1).Direction = 'In';
GetSigImcData_s32.Arguments(1).InitRowCol = [1  1];
GetSigImcData_s32.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcData_s32.Arguments(2) = DataDict.CSArguments;
GetSigImcData_s32.Arguments(2).Name = 'Data';
GetSigImcData_s32.Arguments(2).EngDT = dt.s32;
GetSigImcData_s32.Arguments(2).EngMin = -2147483648;
GetSigImcData_s32.Arguments(2).EngMax = 2147483647;
GetSigImcData_s32.Arguments(2).TestTolerance = 1;
GetSigImcData_s32.Arguments(2).Units = 'Uls';
GetSigImcData_s32.Arguments(2).Direction = 'Out';
GetSigImcData_s32.Arguments(2).InitRowCol = [1  1];
GetSigImcData_s32.Arguments(2).Description = 'sint32 signal data';
GetSigImcData_s32.Arguments(3) = DataDict.CSArguments;
GetSigImcData_s32.Arguments(3).Name = 'Sts';
GetSigImcData_s32.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_s32.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_s32.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_s32.Arguments(3).TestTolerance = 1;
GetSigImcData_s32.Arguments(3).Units = 'Cnt';
GetSigImcData_s32.Arguments(3).Direction = 'Out';
GetSigImcData_s32.Arguments(3).InitRowCol = [1  1];
GetSigImcData_s32.Arguments(3).Description = 'Signal Status';

GetSigImcData_u08 = DataDict.SrvRunnable;
GetSigImcData_u08.Context = 'Rte';
GetSigImcData_u08.Description = [...
  'Get data from Imc Arbitration for a signal of type uint8'];
GetSigImcData_u08.Return = DataDict.CSReturn;
GetSigImcData_u08.Return.Type = 'Standard';
GetSigImcData_u08.Return.Min = 0;
GetSigImcData_u08.Return.Max = 1;
GetSigImcData_u08.Return.TestTolerance = 0;
GetSigImcData_u08.Return.Description = 'Standard Return Type';
GetSigImcData_u08.Arguments(1) = DataDict.CSArguments;
GetSigImcData_u08.Arguments(1).Name = 'SigId';
GetSigImcData_u08.Arguments(1).EngDT = dt.u16;
GetSigImcData_u08.Arguments(1).EngMin = 0;
GetSigImcData_u08.Arguments(1).EngMax = 65535;
GetSigImcData_u08.Arguments(1).Units = 'Cnt';
GetSigImcData_u08.Arguments(1).Direction = 'In';
GetSigImcData_u08.Arguments(1).InitRowCol = [1  1];
GetSigImcData_u08.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcData_u08.Arguments(2) = DataDict.CSArguments;
GetSigImcData_u08.Arguments(2).Name = 'Data';
GetSigImcData_u08.Arguments(2).EngDT = dt.u08;
GetSigImcData_u08.Arguments(2).EngMin = 0;
GetSigImcData_u08.Arguments(2).EngMax = 255;
GetSigImcData_u08.Arguments(2).TestTolerance = 1;
GetSigImcData_u08.Arguments(2).Units = 'Uls';
GetSigImcData_u08.Arguments(2).Direction = 'Out';
GetSigImcData_u08.Arguments(2).InitRowCol = [1  1];
GetSigImcData_u08.Arguments(2).Description = 'uint8 signal data';
GetSigImcData_u08.Arguments(3) = DataDict.CSArguments;
GetSigImcData_u08.Arguments(3).Name = 'Sts';
GetSigImcData_u08.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_u08.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_u08.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_u08.Arguments(3).TestTolerance = 1;
GetSigImcData_u08.Arguments(3).Units = 'Cnt';
GetSigImcData_u08.Arguments(3).Direction = 'Out';
GetSigImcData_u08.Arguments(3).InitRowCol = [1  1];
GetSigImcData_u08.Arguments(3).Description = 'Signal Status';

GetSigImcData_u16 = DataDict.SrvRunnable;
GetSigImcData_u16.Context = 'Rte';
GetSigImcData_u16.Description = [...
  'Get data from Imc Arbitration for a signal of type uint16'];
GetSigImcData_u16.Return = DataDict.CSReturn;
GetSigImcData_u16.Return.Type = 'Standard';
GetSigImcData_u16.Return.Min = 0;
GetSigImcData_u16.Return.Max = 1;
GetSigImcData_u16.Return.TestTolerance = 0;
GetSigImcData_u16.Return.Description = 'Standard Return Type';
GetSigImcData_u16.Arguments(1) = DataDict.CSArguments;
GetSigImcData_u16.Arguments(1).Name = 'SigId';
GetSigImcData_u16.Arguments(1).EngDT = dt.u16;
GetSigImcData_u16.Arguments(1).EngMin = 0;
GetSigImcData_u16.Arguments(1).EngMax = 65535;
GetSigImcData_u16.Arguments(1).Units = 'Cnt';
GetSigImcData_u16.Arguments(1).Direction = 'In';
GetSigImcData_u16.Arguments(1).InitRowCol = [1  1];
GetSigImcData_u16.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcData_u16.Arguments(2) = DataDict.CSArguments;
GetSigImcData_u16.Arguments(2).Name = 'Data';
GetSigImcData_u16.Arguments(2).EngDT = dt.u16;
GetSigImcData_u16.Arguments(2).EngMin = 0;
GetSigImcData_u16.Arguments(2).EngMax = 65535;
GetSigImcData_u16.Arguments(2).TestTolerance = 1;
GetSigImcData_u16.Arguments(2).Units = 'Uls';
GetSigImcData_u16.Arguments(2).Direction = 'Out';
GetSigImcData_u16.Arguments(2).InitRowCol = [1  1];
GetSigImcData_u16.Arguments(2).Description = 'uint16 signal data';
GetSigImcData_u16.Arguments(3) = DataDict.CSArguments;
GetSigImcData_u16.Arguments(3).Name = 'Sts';
GetSigImcData_u16.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_u16.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_u16.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_u16.Arguments(3).TestTolerance = 1;
GetSigImcData_u16.Arguments(3).Units = 'Cnt';
GetSigImcData_u16.Arguments(3).Direction = 'Out';
GetSigImcData_u16.Arguments(3).InitRowCol = [1  1];
GetSigImcData_u16.Arguments(3).Description = 'Signal Status';

GetSigImcData_u32 = DataDict.SrvRunnable;
GetSigImcData_u32.Context = 'Rte';
GetSigImcData_u32.Description = [...
  'Get data from Imc Arbitration for a signal of type uint32'];
GetSigImcData_u32.Return = DataDict.CSReturn;
GetSigImcData_u32.Return.Type = 'Standard';
GetSigImcData_u32.Return.Min = 0;
GetSigImcData_u32.Return.Max = 1;
GetSigImcData_u32.Return.TestTolerance = 0;
GetSigImcData_u32.Return.Description = 'Standard Return Type';
GetSigImcData_u32.Arguments(1) = DataDict.CSArguments;
GetSigImcData_u32.Arguments(1).Name = 'SigId';
GetSigImcData_u32.Arguments(1).EngDT = dt.u16;
GetSigImcData_u32.Arguments(1).EngMin = 0;
GetSigImcData_u32.Arguments(1).EngMax = 65535;
GetSigImcData_u32.Arguments(1).Units = 'Cnt';
GetSigImcData_u32.Arguments(1).Direction = 'In';
GetSigImcData_u32.Arguments(1).InitRowCol = [1  1];
GetSigImcData_u32.Arguments(1).Description = [...
  'Signal Id provided by IMC Arbitration component'];
GetSigImcData_u32.Arguments(2) = DataDict.CSArguments;
GetSigImcData_u32.Arguments(2).Name = 'Data';
GetSigImcData_u32.Arguments(2).EngDT = dt.u32;
GetSigImcData_u32.Arguments(2).EngMin = 0;
GetSigImcData_u32.Arguments(2).EngMax = 4294967295;
GetSigImcData_u32.Arguments(2).TestTolerance = 1;
GetSigImcData_u32.Arguments(2).Units = 'Uls';
GetSigImcData_u32.Arguments(2).Direction = 'Out';
GetSigImcData_u32.Arguments(2).InitRowCol = [1  1];
GetSigImcData_u32.Arguments(2).Description = 'uint32 signal data';
GetSigImcData_u32.Arguments(3) = DataDict.CSArguments;
GetSigImcData_u32.Arguments(3).Name = 'Sts';
GetSigImcData_u32.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_u32.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_u32.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_u32.Arguments(3).TestTolerance = 1;
GetSigImcData_u32.Arguments(3).Units = 'Cnt';
GetSigImcData_u32.Arguments(3).Direction = 'Out';
GetSigImcData_u32.Arguments(3).InitRowCol = [1  1];
GetSigImcData_u32.Arguments(3).Description = 'Signal Status';

GetTxRateGroup = DataDict.SrvRunnable;
GetTxRateGroup.Context = 'Rte';
GetTxRateGroup.Description = [...
  'Get data for all Signal Groups that are configured under given Rate Gr' ...
  'oup'];
GetTxRateGroup.Return = DataDict.CSReturn;
GetTxRateGroup.Return.Type = 'Standard';
GetTxRateGroup.Return.Min = 0;
GetTxRateGroup.Return.Max = 1;
GetTxRateGroup.Return.TestTolerance = 0;
GetTxRateGroup.Return.Description = 'Standard Return Type';
GetTxRateGroup.Arguments(1) = DataDict.CSArguments;
GetTxRateGroup.Arguments(1).Name = 'RateGroup';
GetTxRateGroup.Arguments(1).EngDT = dt.u08;
GetTxRateGroup.Arguments(1).EngMin = 0;
GetTxRateGroup.Arguments(1).EngMax = 255;
GetTxRateGroup.Arguments(1).Units = 'Cnt';
GetTxRateGroup.Arguments(1).Direction = 'In';
GetTxRateGroup.Arguments(1).InitRowCol = [1  1];
GetTxRateGroup.Arguments(1).Description = [...
  'Rate Group ID provided by IMC Arbitration component'];
GetTxRateGroup.Arguments(2) = DataDict.CSArguments;
GetTxRateGroup.Arguments(2).Name = 'Buf';
GetTxRateGroup.Arguments(2).EngDT = dt.u08;
GetTxRateGroup.Arguments(2).EngMin = 0;
GetTxRateGroup.Arguments(2).EngMax = 255;
GetTxRateGroup.Arguments(2).TestTolerance = 1;
GetTxRateGroup.Arguments(2).Units = 'Uls';
GetTxRateGroup.Arguments(2).Direction = 'Out';
GetTxRateGroup.Arguments(2).InitRowCol = [1  2048];
GetTxRateGroup.Arguments(2).Description = [...
  'Pointer to the configurable buffer.Size of this buffer will be based o' ...
  'ut of number of Signal Groups configured under Rate Group. Size of the' ...
  ' array is set to 2048 because if all Signal Groups (256) are configure' ...
  'd under single Rate Group, then buffer size should be 256x8'];

GetTxSigGroup = DataDict.SrvRunnable;
GetTxSigGroup.Context = 'Rte';
GetTxSigGroup.Description = [...
  'Get transmit data for the given Signal Group'];
GetTxSigGroup.Return = DataDict.CSReturn;
GetTxSigGroup.Return.Type = 'Standard';
GetTxSigGroup.Return.Min = 0;
GetTxSigGroup.Return.Max = 1;
GetTxSigGroup.Return.TestTolerance = 0;
GetTxSigGroup.Return.Description = 'Standard Return Type';
GetTxSigGroup.Arguments(1) = DataDict.CSArguments;
GetTxSigGroup.Arguments(1).Name = 'SigGroupId';
GetTxSigGroup.Arguments(1).EngDT = dt.u08;
GetTxSigGroup.Arguments(1).EngMin = 0;
GetTxSigGroup.Arguments(1).EngMax = 255;
GetTxSigGroup.Arguments(1).Units = 'Cnt';
GetTxSigGroup.Arguments(1).Direction = 'In';
GetTxSigGroup.Arguments(1).InitRowCol = [1  1];
GetTxSigGroup.Arguments(1).Description = [...
  'Signal Group Id provided IMC Arbitration component'];
GetTxSigGroup.Arguments(2) = DataDict.CSArguments;
GetTxSigGroup.Arguments(2).Name = 'Buf';
GetTxSigGroup.Arguments(2).EngDT = dt.u08;
GetTxSigGroup.Arguments(2).EngMin = 0;
GetTxSigGroup.Arguments(2).EngMax = 255;
GetTxSigGroup.Arguments(2).TestTolerance = 1;
GetTxSigGroup.Arguments(2).Units = 'Uls';
GetTxSigGroup.Arguments(2).Direction = 'Out';
GetTxSigGroup.Arguments(2).InitRowCol = [1  8];
GetTxSigGroup.Arguments(2).Description = [...
  'Pointer to the buffer where Signal Group data to be copied. Imc Arbitr' ...
  'ation component assumes that minimum 8 bytes can be copied to the loca' ...
  'tion starting from given pointer.Underlying data type of this paramete' ...
  'r is array of 8 bytes.'];

SetRxSigGroup = DataDict.SrvRunnable;
SetRxSigGroup.Context = 'Rte';
SetRxSigGroup.Description = [...
  'Copies Signal Group data received by a serial comm channel to Imc Arbi' ...
  'tration'];
SetRxSigGroup.Return = DataDict.CSReturn;
SetRxSigGroup.Return.Type = 'Standard';
SetRxSigGroup.Return.Min = 0;
SetRxSigGroup.Return.Max = 1;
SetRxSigGroup.Return.TestTolerance = 0;
SetRxSigGroup.Return.Description = 'Standard Return Type';
SetRxSigGroup.Arguments(1) = DataDict.CSArguments;
SetRxSigGroup.Arguments(1).Name = 'SigGroup';
SetRxSigGroup.Arguments(1).EngDT = dt.u08;
SetRxSigGroup.Arguments(1).EngMin = 0;
SetRxSigGroup.Arguments(1).EngMax = 255;
SetRxSigGroup.Arguments(1).Units = 'Cnt';
SetRxSigGroup.Arguments(1).Direction = 'In';
SetRxSigGroup.Arguments(1).InitRowCol = [1  1];
SetRxSigGroup.Arguments(1).Description = [...
  'Signal Group Id provided by IMC Arbitration component'];
SetRxSigGroup.Arguments(2) = DataDict.CSArguments;
SetRxSigGroup.Arguments(2).Name = 'DataSrc';
SetRxSigGroup.Arguments(2).EngDT = enum.ImcArbnRxDataSrc1;
SetRxSigGroup.Arguments(2).EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
SetRxSigGroup.Arguments(2).EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
SetRxSigGroup.Arguments(2).Units = 'Cnt';
SetRxSigGroup.Arguments(2).Direction = 'In';
SetRxSigGroup.Arguments(2).InitRowCol = [1  1];
SetRxSigGroup.Arguments(2).Description = 'Signal Source';
SetRxSigGroup.Arguments(3) = DataDict.CSArguments;
SetRxSigGroup.Arguments(3).Name = 'Buf';
SetRxSigGroup.Arguments(3).EngDT = dt.u08;
SetRxSigGroup.Arguments(3).EngMin = 0;
SetRxSigGroup.Arguments(3).EngMax = 255;
SetRxSigGroup.Arguments(3).TestTolerance = 1;
SetRxSigGroup.Arguments(3).Units = 'Uls';
SetRxSigGroup.Arguments(3).Direction = 'Out';
SetRxSigGroup.Arguments(3).InitRowCol = [1  8];
SetRxSigGroup.Arguments(3).Description = [...
  'Pointer to the received Signal Group data buffer. Imc Arbitration comp' ...
  'onent assumes that minimum 8 bytes can be read starting from given poi' ...
  'nter.Underlying data type of this parameter is array of 8 bytes.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'ImcArbnPer6'};
SetNtcSts.Description = [...
  'Current Measurement Correlation Periodic'];
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'Standard Return Type';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NTC Number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'NTC Status Info';
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
SetNtcSts.Arguments(4).Description = 'Debounce Step';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
IniTiOutChkCmpl = DataDict.IRV;
IniTiOutChkCmpl.LongName = 'Initial Time-out Check Complete';
IniTiOutChkCmpl.Description = [...
  'Indicates initial time-out completion for Imc Arbitration Reception'];
IniTiOutChkCmpl.DocUnits = 'Cnt';
IniTiOutChkCmpl.EngDT = dt.lgc;
IniTiOutChkCmpl.EngInit = 0;
IniTiOutChkCmpl.EngMin = 0;
IniTiOutChkCmpl.EngMax = 1;
IniTiOutChkCmpl.ReadIn = {'ImcArbnPer4','ImcArbnPer5','ImcArbnPer6'};
IniTiOutChkCmpl.WrittenIn = {'ImcArbnPer6'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
ImcArbnEcuIninTiOutThd = DataDict.Calibration;
ImcArbnEcuIninTiOutThd.LongName = 'Imc Arbitration Initialization Time-Out Period Threshold';
ImcArbnEcuIninTiOutThd.Description = [...
  'Initial time period to evaluate other controllers availability.'];
ImcArbnEcuIninTiOutThd.DocUnits = 'MilliSec';
ImcArbnEcuIninTiOutThd.EngDT = dt.u32;
ImcArbnEcuIninTiOutThd.EngVal = 500;
ImcArbnEcuIninTiOutThd.EngMin = 1;
ImcArbnEcuIninTiOutThd.EngMax = 4294967295;
ImcArbnEcuIninTiOutThd.Cardinality = 'Cmn';
ImcArbnEcuIninTiOutThd.CustomerVisible = false;
ImcArbnEcuIninTiOutThd.Online = false;
ImcArbnEcuIninTiOutThd.Impact = 'H';
ImcArbnEcuIninTiOutThd.TuningOwner = 'FDD';
ImcArbnEcuIninTiOutThd.GraphLink = {''};
ImcArbnEcuIninTiOutThd.Monotony = 'None';
ImcArbnEcuIninTiOutThd.MaxGrad = 999;
ImcArbnEcuIninTiOutThd.PortName = 'ImcArbnEcuIninTiOutThd';


ImcArbnFrmFltThd = DataDict.Calibration;
ImcArbnFrmFltThd.LongName = 'Imc Arbitration Frame Fault Threshold';
ImcArbnFrmFltThd.Description = [...
  'Maximum number of faulty frame reception after that NTC to be logged'];
ImcArbnFrmFltThd.DocUnits = 'Cnt';
ImcArbnFrmFltThd.EngDT = dt.u08;
ImcArbnFrmFltThd.EngVal = 10;
ImcArbnFrmFltThd.EngMin = 1;
ImcArbnFrmFltThd.EngMax = 255;
ImcArbnFrmFltThd.Cardinality = 'Cmn';
ImcArbnFrmFltThd.CustomerVisible = false;
ImcArbnFrmFltThd.Online = false;
ImcArbnFrmFltThd.Impact = 'H';
ImcArbnFrmFltThd.TuningOwner = 'FDD';
ImcArbnFrmFltThd.GraphLink = {''};
ImcArbnFrmFltThd.Monotony = 'None';
ImcArbnFrmFltThd.MaxGrad = 999;
ImcArbnFrmFltThd.PortName = 'ImcArbnFrmFltThd';



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
FrmFltCntr100MilliSec = DataDict.PIM;
FrmFltCntr100MilliSec.LongName = 'Frame Fault Counter for 100ms Rate Group';
FrmFltCntr100MilliSec.Description = [...
  'Indicates number of faulty frames received  100ms Rate group'];
FrmFltCntr100MilliSec.DocUnits = 'Cnt';
FrmFltCntr100MilliSec.EngDT = dt.u08;
FrmFltCntr100MilliSec.EngMin = 0;
FrmFltCntr100MilliSec.EngMax = 255;
FrmFltCntr100MilliSec.InitRowCol = [2  2];


FrmFltCntr10MilliSec = DataDict.PIM;
FrmFltCntr10MilliSec.LongName = 'Frame Fault Counter for 10ms Rate Group';
FrmFltCntr10MilliSec.Description = [...
  'Indicates number of faulty frames received  10ms Rate group'];
FrmFltCntr10MilliSec.DocUnits = 'Cnt';
FrmFltCntr10MilliSec.EngDT = dt.u08;
FrmFltCntr10MilliSec.EngMin = 0;
FrmFltCntr10MilliSec.EngMax = 255;
FrmFltCntr10MilliSec.InitRowCol = [2  2];


FrmFltCntr2MilliSec = DataDict.PIM;
FrmFltCntr2MilliSec.LongName = 'Frame Fault Counter for 2ms Rate Group';
FrmFltCntr2MilliSec.Description = [...
  'Indicates number of faulty frames received  2ms Rate group'];
FrmFltCntr2MilliSec.DocUnits = 'Cnt';
FrmFltCntr2MilliSec.EngDT = dt.u08;
FrmFltCntr2MilliSec.EngMin = 0;
FrmFltCntr2MilliSec.EngMax = 255;
FrmFltCntr2MilliSec.InitRowCol = [2  2];


ImcEcuComStrtTiRef = DataDict.PIM;
ImcEcuComStrtTiRef.LongName = 'Imc ECU Comm Start time Reference';
ImcEcuComStrtTiRef.Description = [...
  'Used to hold start time of IMC arbitration initialization'];
ImcEcuComStrtTiRef.DocUnits = 'MicroSec';
ImcEcuComStrtTiRef.EngDT = dt.u32;
ImcEcuComStrtTiRef.EngMin = 0;
ImcEcuComStrtTiRef.EngMax = 4294967295;
ImcEcuComStrtTiRef.InitRowCol = [1  1];


PrevRollgCntrRxd = DataDict.PIM;
PrevRollgCntrRxd.LongName = 'Previous Rolling counter received';
PrevRollgCntrRxd.Description = [...
  'Configurable buffer, holds previous rolling counter received for each ' ...
  'of the Signal Group. Size of this buffer will depend on total number o' ...
  'f Signal Groups(IMCARBN_TOTALNROFSIGGROUP_CNT_U08) configured in the S' ...
  'ystem. Data Dictionary array size is set to maximum that is possible, ' ...
  'however, the size is expected to be configured based on implementation' ...
  ' needs'];
PrevRollgCntrRxd.DocUnits = 'Cnt';
PrevRollgCntrRxd.EngDT = dt.u08;
PrevRollgCntrRxd.EngMin = 0;
PrevRollgCntrRxd.EngMax = 255;
PrevRollgCntrRxd.InitRowCol = [1  256];


PrimSrcResyncCntr = DataDict.PIM;
PrimSrcResyncCntr.LongName = 'Primary Source Resync Counter';
PrimSrcResyncCntr.Description = [...
  'Configurable buffer, holds Primary Source Resync Counter. Size of this' ...
  ' buffer will depend on total number of Signal Groups(IMCARBN_TOTALNROF' ...
  'SIGGROUP_CNT_U08) configured in the System. Data Dictionary array size' ...
  ' is set to maximum that is possible, however, the size is expected to ' ...
  'be configured based on implementation needs'];
PrimSrcResyncCntr.DocUnits = 'Cnt';
PrimSrcResyncCntr.EngDT = dt.u08;
PrimSrcResyncCntr.EngMin = 0;
PrimSrcResyncCntr.EngMax = 255;
PrimSrcResyncCntr.InitRowCol = [1  256];


PrimSrcRollgCntrResync = DataDict.PIM;
PrimSrcRollgCntrResync.LongName = 'Primary Source Rolling Counter for Resynchronization';
PrimSrcRollgCntrResync.Description = [...
  'Configurable buffer, holds Primary Source Rolling Counter for Resynchr' ...
  'onization.  Size of this buffer will depend on total number of Signal ' ...
  'Groups configured(IMCARBN_TOTALNROFSIGGROUP_CNT_U08) in the System. Da' ...
  'ta Dictionary array size is set to maximum that is possible, however, ' ...
  'the size is expected to be configured based on implementation needs'];
PrimSrcRollgCntrResync.DocUnits = 'Cnt';
PrimSrcRollgCntrResync.EngDT = dt.u08;
PrimSrcRollgCntrResync.EngMin = 0;
PrimSrcRollgCntrResync.EngMax = 255;
PrimSrcRollgCntrResync.InitRowCol = [1  256];


PrimSrcRxBuf = DataDict.PIM;
PrimSrcRxBuf.LongName = 'Primary source Receive Buffer';
PrimSrcRxBuf.Description = [...
  'Configurable buffer, holds data received via primary channel for all S' ...
  'ignal Groups. Size of this buffer will depend on total number of Signa' ...
  'l Groups(IMCARBN_TOTALNROFSIGGROUP_CNT_U08 x 8) configured in the Syst' ...
  'em. Data Dictionary array size is set to maximum that is possible, how' ...
  'ever, the size is expected to be configured based on implementation ne' ...
  'eds'];
PrimSrcRxBuf.DocUnits = 'Cnt';
PrimSrcRxBuf.EngDT = dt.u08;
PrimSrcRxBuf.EngMin = 0;
PrimSrcRxBuf.EngMax = 255;
PrimSrcRxBuf.InitRowCol = [256    8];


ResyncOnPrimActv = DataDict.PIM;
ResyncOnPrimActv.LongName = 'Resync on Primary Active';
ResyncOnPrimActv.Description = [...
  'Configurable buffer, Resync on Primary Active. Size of this buffer wil' ...
  'l depend on total number of Signal Groups(IMCARBN_TOTALNROFSIGGROUP_CN' ...
  'T_U08) configured in the System.   Data Dictionary array size is set t' ...
  'o maximum that is possible, however, the size is expected to be config' ...
  'ured based on implementation needs'];
ResyncOnPrimActv.DocUnits = 'Cnt';
ResyncOnPrimActv.EngDT = dt.lgc;
ResyncOnPrimActv.EngMin = 0;
ResyncOnPrimActv.EngMax = 1;
ResyncOnPrimActv.InitRowCol = [1  256];


ResyncOnSecdryActv = DataDict.PIM;
ResyncOnSecdryActv.LongName = 'Resync on Secondary Active';
ResyncOnSecdryActv.Description = [...
  'Configurable buffer, Resync on Secondary Active. Size of this buffer w' ...
  'ill depend on total number of Signal Groups(IMCARBN_TOTALNROFSIGGROUP_' ...
  'CNT_U08) configured in the System. Data Dictionary array size is set t' ...
  'o maximum that is possible, however, the size is expected to be config' ...
  'ured based on implementation needs'];
ResyncOnSecdryActv.DocUnits = 'Cnt';
ResyncOnSecdryActv.EngDT = dt.lgc;
ResyncOnSecdryActv.EngMin = 0;
ResyncOnSecdryActv.EngMax = 1;
ResyncOnSecdryActv.InitRowCol = [1  256];


RollgCntr = DataDict.PIM;
RollgCntr.LongName = 'Rolling counter';
RollgCntr.Description = [...
  'Rolling counter, holds current rolling counter for each Rate Group'];
RollgCntr.DocUnits = 'Cnt';
RollgCntr.EngDT = dt.u08;
RollgCntr.EngMin = 0;
RollgCntr.EngMax = 255;
RollgCntr.InitRowCol = [1  3];


RxdSigData = DataDict.PIM;
RxdSigData.LongName = 'Received Signal Data Buffer';
RxdSigData.Description = [...
  'Configurable data buffer to hold values of all signals received via IM' ...
  'C. Size of this buffer will depend on total number of IMC Signals (IMC' ...
  'ARBN_TOTALNROFSIG_CNT_U16) configured in the System. Data Dictionary a' ...
  'rray size is set to maximum that is possible, however, the size is exp' ...
  'ected to be configured based on implementation needs'];
RxdSigData.DocUnits = 'Cnt';
RxdSigData.EngDT = dt.u32;
RxdSigData.EngMin = 0;
RxdSigData.EngMax = 4294967295;
RxdSigData.InitRowCol = [1  8192];


RxdSigDataExtdSts = DataDict.PIM;
RxdSigDataExtdSts.LongName = 'Received Signal Status Buffer';
RxdSigDataExtdSts.Description = [...
  'Configurable status buffer to hold status of all signals received via ' ...
  'IMC. Size of this buffer will depend on total number of IMC Signals (I' ...
  'MCARBN_TOTALNROFSIG_CNT_U16) configured in the System. Data Dictionary' ...
  ' array size is set to maximum that is possible, however, the size is e' ...
  'xpected to be configured based on implementation needs'];
RxdSigDataExtdSts.DocUnits = 'Cnt';
RxdSigDataExtdSts.EngDT = enum.ImcArbnRxExtdSts1;
RxdSigDataExtdSts.EngMin = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_NEVERRXD;
RxdSigDataExtdSts.EngMax = ImcArbnRxExtdSts1.IMCARBNRXEXTDSTS_STRTG;
RxdSigDataExtdSts.InitRowCol = [1  8192];


RxdSigDataSrc = DataDict.PIM;
RxdSigDataSrc.LongName = 'Received Signal Data Source';
RxdSigDataSrc.Description = [...
  'Configurable buffer, holds received signal data source for all signals' ...
  '. Size of this buffer will depend on total number of IMC Signals (IMCA' ...
  'RBN_TOTALNROFSIG_CNT_U16) configured in the System. Data Dictionary ar' ...
  'ray size is set to maximum that is possible, however, the size is expe' ...
  'cted to be configured based on implementation needs'];
RxdSigDataSrc.DocUnits = 'Cnt';
RxdSigDataSrc.EngDT = enum.ImcArbnRxDataSrc1;
RxdSigDataSrc.EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
RxdSigDataSrc.EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
RxdSigDataSrc.InitRowCol = [1  8192];


SecdrySrcResyncCntr = DataDict.PIM;
SecdrySrcResyncCntr.LongName = 'Secondary Source Resync Counter';
SecdrySrcResyncCntr.Description = [...
  'Configurable buffer, holds Secondary Source Resync Counter. Size of th' ...
  'is buffer will depend on total number of Signal Groups(IMCARBN_TOTALNR' ...
  'OFSIGGROUP_CNT_U08) configured in the System. Data Dictionary array si' ...
  'ze is set to maximum that is possible, however, the size is expected t' ...
  'o be configured based on implementation needs'];
SecdrySrcResyncCntr.DocUnits = 'Cnt';
SecdrySrcResyncCntr.EngDT = dt.u08;
SecdrySrcResyncCntr.EngMin = 0;
SecdrySrcResyncCntr.EngMax = 255;
SecdrySrcResyncCntr.InitRowCol = [1  256];


SecdrySrcRollgCntrResync = DataDict.PIM;
SecdrySrcRollgCntrResync.LongName = 'Secondary Source Rolling Counter for Resynchronization';
SecdrySrcRollgCntrResync.Description = [...
  'Configurable buffer, holds Secondary Source Rolling Counter for Resync' ...
  'hronization. Size of this buffer will depend on total number of Signal' ...
  ' Groups(IMCARBN_TOTALNROFSIGGROUP_CNT_U08) configured in the System. D' ...
  'ata Dictionary array size is set to maximum that is possible, however,' ...
  ' the size is expected to be configured based on implementation needs'];
SecdrySrcRollgCntrResync.DocUnits = 'Cnt';
SecdrySrcRollgCntrResync.EngDT = dt.u08;
SecdrySrcRollgCntrResync.EngMin = 0;
SecdrySrcRollgCntrResync.EngMax = 255;
SecdrySrcRollgCntrResync.InitRowCol = [1  256];


SecdrySrcRxBuf = DataDict.PIM;
SecdrySrcRxBuf.LongName = 'Secondary source Receive Buffer';
SecdrySrcRxBuf.Description = [...
  'Configurable buffer, holds data received via secondary channel for all' ...
  ' Signal Groups. Size of this buffer will depend on total number of Sig' ...
  'nal Groups (IMCARBN_TOTALNROFSIGGROUP_CNT_U08 x 8) configured in the S' ...
  'ystem. Data Dictionary array size is set to maximum that is possible, ' ...
  'however, the size is expected to be configured based on implementation' ...
  ' needs'];
SecdrySrcRxBuf.DocUnits = 'Cnt';
SecdrySrcRxBuf.EngDT = dt.u08;
SecdrySrcRxBuf.EngMin = 0;
SecdrySrcRxBuf.EngMax = 255;
SecdrySrcRxBuf.InitRowCol = [256    8];


SigGroupDataSrc = DataDict.PIM;
SigGroupDataSrc.LongName = 'Signal Group Data Source';
SigGroupDataSrc.Description = [...
  'Configurable buffer, holds Received Signal Group Data Source. Size of ' ...
  'this buffer will depend on total number of Signal Groups(IMCARBN_TOTAL' ...
  'NROFSIGGROUP_CNT_U08) configured in the System. Data Dictionary array ' ...
  'size is set to maximum that is possible, however, the size is expected' ...
  ' to be configured based on implementation needs'];
SigGroupDataSrc.DocUnits = 'Cnt';
SigGroupDataSrc.EngDT = enum.ImcArbnRxDataSrc1;
SigGroupDataSrc.EngMin = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_NOSRC;
SigGroupDataSrc.EngMax = ImcArbnRxDataSrc1.IMCARBNRXDATASRC_SECDRY;
SigGroupDataSrc.InitRowCol = [1  256];


SigGroupMissCntr = DataDict.PIM;
SigGroupMissCntr.LongName = 'Signal Group Missing Counter';
SigGroupMissCntr.Description = [...
  'Configurable buffer, Signal Group Missing Counter. Size of this buffer' ...
  ' will depend on total number of Signal Groups(IMCARBN_TOTALNROFSIGGROU' ...
  'P_CNT_U08) configured in the System. Data Dictionary array size is set' ...
  ' to maximum that is possible, however, the size is expected to be conf' ...
  'igured based on implementation needs'];
SigGroupMissCntr.DocUnits = 'Cnt';
SigGroupMissCntr.EngDT = dt.u08;
SigGroupMissCntr.EngMin = 0;
SigGroupMissCntr.EngMax = 255;
SigGroupMissCntr.InitRowCol = [1  256];


SigGroupNeverRxd = DataDict.PIM;
SigGroupNeverRxd.LongName = 'Receive Signal Group Never Received status';
SigGroupNeverRxd.Description = [...
  'Configurable buffer, Signal Group Never Received status. Size of this ' ...
  'buffer will depend on total number of Signal Groups(IMCARBN_TOTALNROFS' ...
  'IGGROUP_CNT_U08) configured in the System.  Data Dictionary array size' ...
  ' is set to maximum that is possible, however, the size is expected to ' ...
  'be configured based on implementation needs'];
SigGroupNeverRxd.DocUnits = 'Cnt';
SigGroupNeverRxd.EngDT = dt.lgc;
SigGroupNeverRxd.EngMin = 0;
SigGroupNeverRxd.EngMax = 1;
SigGroupNeverRxd.InitRowCol = [1  256];


SigGroupSkipCntr = DataDict.PIM;
SigGroupSkipCntr.LongName = 'Receive Signal Group Skip Counter';
SigGroupSkipCntr.Description = [...
  'Configurable buffer, Receive Signal Group Skip Counter. Size of this b' ...
  'uffer will depend on total number of Signal Groups(IMCARBN_TOTALNROFSI' ...
  'GGROUP_CNT_U08) configured in the System. Data Dictionary array size i' ...
  's set to maximum that is possible, however, the size is expected to be' ...
  ' configured based on implementation needs'];
SigGroupSkipCntr.DocUnits = 'Cnt';
SigGroupSkipCntr.EngDT = dt.u08;
SigGroupSkipCntr.EngMin = 0;
SigGroupSkipCntr.EngMax = 255;
SigGroupSkipCntr.InitRowCol = [1  256];


TxBuf = DataDict.PIM;
TxBuf.LongName = 'Transmit Buffer';
TxBuf.Description = [...
  'Configurable buffer, holds transmit data for all Signal Groups. Size o' ...
  'f this buffer will depend on total number of Signal Groups (IMCARBN_TO' ...
  'TALNROFSIGGROUP_CNT_U08 x 8) configured in the System. Data Dictionary' ...
  ' array size is set to maximum that is possible, however, the size is e' ...
  'xpected to be configured based on implementation needs'];
TxBuf.DocUnits = 'Cnt';
TxBuf.EngDT = dt.u08;
TxBuf.EngMin = 0;
TxBuf.EngMax = 255;
TxBuf.InitRowCol = [256    8];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
BYTEMASK_CNT_U08 = DataDict.Constant;
BYTEMASK_CNT_U08.LongName = 'Byte Mask ';
BYTEMASK_CNT_U08.Description = [...
  'Mask value for extracting least significant byte'];
BYTEMASK_CNT_U08.DocUnits = 'Cnt';
BYTEMASK_CNT_U08.EngDT = dt.u08;
BYTEMASK_CNT_U08.EngVal = 255;
BYTEMASK_CNT_U08.Define = 'Local';


CHSWTDLY_CNT_U08 = DataDict.Constant;
CHSWTDLY_CNT_U08.LongName = 'Channel Switch Delay';
CHSWTDLY_CNT_U08.Description = 'Channel Switch Delay';
CHSWTDLY_CNT_U08.DocUnits = 'Cnt';
CHSWTDLY_CNT_U08.EngDT = dt.float32;
CHSWTDLY_CNT_U08.EngVal = 1;
CHSWTDLY_CNT_U08.Define = 'Local';


CRCCALCINITVAL_CNT_U08 = DataDict.Constant;
CRCCALCINITVAL_CNT_U08.LongName = 'CRC Calc Initial Value';
CRCCALCINITVAL_CNT_U08.Description = [...
  'Initial value to be used for calculating CRC value'];
CRCCALCINITVAL_CNT_U08.DocUnits = 'Cnt';
CRCCALCINITVAL_CNT_U08.EngDT = dt.u08;
CRCCALCINITVAL_CNT_U08.EngVal = 255;
CRCCALCINITVAL_CNT_U08.Define = 'Local';


CRCFLT_CNT_U08 = DataDict.Constant;
CRCFLT_CNT_U08.LongName = 'CRC fault index';
CRCFLT_CNT_U08.Description = [...
  'CRC Fault index in Frame fault array'];
CRCFLT_CNT_U08.DocUnits = 'Cnt';
CRCFLT_CNT_U08.EngDT = dt.u08;
CRCFLT_CNT_U08.EngVal = 0;
CRCFLT_CNT_U08.Define = 'Local';


CRCPOSN_CNT_U08 = DataDict.Constant;
CRCPOSN_CNT_U08.LongName = 'CRC Position';
CRCPOSN_CNT_U08.Description = [...
  'CRC Position position in a Signal Group'];
CRCPOSN_CNT_U08.DocUnits = 'Cnt';
CRCPOSN_CNT_U08.EngDT = dt.u08;
CRCPOSN_CNT_U08.EngVal = 6;
CRCPOSN_CNT_U08.Define = 'Local';


DATABYTE1POS_CNT_U08 = DataDict.Constant;
DATABYTE1POS_CNT_U08.LongName = 'Data byte 1 position ';
DATABYTE1POS_CNT_U08.Description = [...
  'Data byte 1 position in a Signal Group'];
DATABYTE1POS_CNT_U08.DocUnits = 'Cnt';
DATABYTE1POS_CNT_U08.EngDT = dt.u08;
DATABYTE1POS_CNT_U08.EngVal = 2;
DATABYTE1POS_CNT_U08.Define = 'Local';


DATABYTE2POS_CNT_U08 = DataDict.Constant;
DATABYTE2POS_CNT_U08.LongName = 'Data byte 2 position ';
DATABYTE2POS_CNT_U08.Description = [...
  'Data byte 2 position in a Signal Group'];
DATABYTE2POS_CNT_U08.DocUnits = 'Cnt';
DATABYTE2POS_CNT_U08.EngDT = dt.u08;
DATABYTE2POS_CNT_U08.EngVal = 3;
DATABYTE2POS_CNT_U08.Define = 'Local';


DATABYTE3POS_CNT_U08 = DataDict.Constant;
DATABYTE3POS_CNT_U08.LongName = 'Data byte 3 position ';
DATABYTE3POS_CNT_U08.Description = [...
  'Data byte 3 position in a Signal Group'];
DATABYTE3POS_CNT_U08.DocUnits = 'Cnt';
DATABYTE3POS_CNT_U08.EngDT = dt.u08;
DATABYTE3POS_CNT_U08.EngVal = 4;
DATABYTE3POS_CNT_U08.Define = 'Local';


DATABYTE4POS_CNT_U08 = DataDict.Constant;
DATABYTE4POS_CNT_U08.LongName = 'Data byte 4 position ';
DATABYTE4POS_CNT_U08.Description = [...
  'Data byte 4 position in a Signal Group'];
DATABYTE4POS_CNT_U08.DocUnits = 'Cnt';
DATABYTE4POS_CNT_U08.EngDT = dt.u08;
DATABYTE4POS_CNT_U08.EngVal = 5;
DATABYTE4POS_CNT_U08.Define = 'Local';


DRIFTINITVAL_CNT_U08 = DataDict.Constant;
DRIFTINITVAL_CNT_U08.LongName = 'Drift Initialization value';
DRIFTINITVAL_CNT_U08.Description = 'Drift Initialization value';
DRIFTINITVAL_CNT_U08.DocUnits = 'Cnt';
DRIFTINITVAL_CNT_U08.EngDT = dt.float32;
DRIFTINITVAL_CNT_U08.EngVal = 255;
DRIFTINITVAL_CNT_U08.Define = 'Local';


ENDBYTEPOSN_CNT_U08 = DataDict.Constant;
ENDBYTEPOSN_CNT_U08.LongName = 'Inverse Rolling Counter position';
ENDBYTEPOSN_CNT_U08.Description = [...
  'Compliment Rolling Counter position in a Signal Group'];
ENDBYTEPOSN_CNT_U08.DocUnits = 'Cnt';
ENDBYTEPOSN_CNT_U08.EngDT = dt.u08;
ENDBYTEPOSN_CNT_U08.EngVal = 7;
ENDBYTEPOSN_CNT_U08.Define = 'Local';


FRMFLTBUFIDXPRIM_CNT_U08 = DataDict.Constant;
FRMFLTBUFIDXPRIM_CNT_U08.LongName = 'Primary source frame fault counter index';
FRMFLTBUFIDXPRIM_CNT_U08.Description = [...
  'Primary source frame fault counter index'];
FRMFLTBUFIDXPRIM_CNT_U08.DocUnits = 'Cnt';
FRMFLTBUFIDXPRIM_CNT_U08.EngDT = dt.u08;
FRMFLTBUFIDXPRIM_CNT_U08.EngVal = 0;
FRMFLTBUFIDXPRIM_CNT_U08.Define = 'Local';


FRMFLTBUFIDXSECDRY_CNT_U08 = DataDict.Constant;
FRMFLTBUFIDXSECDRY_CNT_U08.LongName = 'Secondary source frame fault counter index';
FRMFLTBUFIDXSECDRY_CNT_U08.Description = [...
  'Secondary source frame fault counter index'];
FRMFLTBUFIDXSECDRY_CNT_U08.DocUnits = 'Cnt';
FRMFLTBUFIDXSECDRY_CNT_U08.EngDT = dt.u08;
FRMFLTBUFIDXSECDRY_CNT_U08.EngVal = 1;
FRMFLTBUFIDXSECDRY_CNT_U08.Define = 'Local';


IMCARBN_FRMSIZE_CNT_U08 = DataDict.Constant;
IMCARBN_FRMSIZE_CNT_U08.LongName = 'IMC Arbitration Frame Size';
IMCARBN_FRMSIZE_CNT_U08.Description = 'IMC Arbitration Frame Size';
IMCARBN_FRMSIZE_CNT_U08.DocUnits = 'Cnt';
IMCARBN_FRMSIZE_CNT_U08.EngDT = dt.u08;
IMCARBN_FRMSIZE_CNT_U08.EngVal = 8;
IMCARBN_FRMSIZE_CNT_U08.Define = 'Global';


IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08 = DataDict.ConfigParam;
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.LongName = 'Number of Signal Groups configured under 100ms Rate Group';
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.Description = [...
  'Number of Signal Groups configured under 100ms Rate Group'];
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.IsBuildPrm = false;
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.DocUnits = 'Cnt';
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.EngDT = dt.u08;
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.EngVal = 0;
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.EngMin = 0;
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.EngMax = 255;
IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08.Define = 'Global';


IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08 = DataDict.ConfigParam;
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.LongName = 'Number of Signal Groups configured under 10ms Rate Group';
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.Description = [...
  'Number of Signal Groups configured under 10ms Rate Group'];
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.IsBuildPrm = false;
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.DocUnits = 'Cnt';
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.EngDT = dt.u08;
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.EngVal = 0;
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.EngMin = 0;
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.EngMax = 255;
IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08.Define = 'Global';


IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08 = DataDict.ConfigParam;
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.LongName = 'Number of Signal Groups configured under 2ms Rate Group';
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.Description = [...
  'Number of Signal Groups configured under 2ms Rate Group'];
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.IsBuildPrm = false;
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.DocUnits = 'Cnt';
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.EngDT = dt.u08;
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.EngVal = 0;
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.EngMin = 0;
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.EngMax = 255;
IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08.Define = 'Global';


IMCARBN_NROFRATEGROUP_CNT_U08 = DataDict.Constant;
IMCARBN_NROFRATEGROUP_CNT_U08.LongName = 'Number of Rate Groups';
IMCARBN_NROFRATEGROUP_CNT_U08.Description = 'Number of Rate Groups';
IMCARBN_NROFRATEGROUP_CNT_U08.DocUnits = 'Cnt';
IMCARBN_NROFRATEGROUP_CNT_U08.EngDT = dt.float32;
IMCARBN_NROFRATEGROUP_CNT_U08.EngVal = 3;
IMCARBN_NROFRATEGROUP_CNT_U08.Define = 'Global';


IMCARBN_PATIDMASKVAL_CNT_U08 = DataDict.Constant;
IMCARBN_PATIDMASKVAL_CNT_U08.LongName = 'Pattern ID Mask Value';
IMCARBN_PATIDMASKVAL_CNT_U08.Description = 'Pattern ID Mask Value';
IMCARBN_PATIDMASKVAL_CNT_U08.DocUnits = 'Cnt';
IMCARBN_PATIDMASKVAL_CNT_U08.EngDT = dt.u08;
IMCARBN_PATIDMASKVAL_CNT_U08.EngVal = 224;
IMCARBN_PATIDMASKVAL_CNT_U08.Define = 'Global';


IMCARBN_PATIDNIVS_CNT_U08 = DataDict.Constant;
IMCARBN_PATIDNIVS_CNT_U08.LongName = 'Pattern ID';
IMCARBN_PATIDNIVS_CNT_U08.Description = [...
  'Pattern ID to be used as start of frame on Primary path'];
IMCARBN_PATIDNIVS_CNT_U08.DocUnits = 'Cnt';
IMCARBN_PATIDNIVS_CNT_U08.EngDT = dt.u08;
IMCARBN_PATIDNIVS_CNT_U08.EngVal = 64;
IMCARBN_PATIDNIVS_CNT_U08.Define = 'Global';


IMCARBN_PATIDN_CNT_U08 = DataDict.Constant;
IMCARBN_PATIDN_CNT_U08.LongName = 'Pattern ID';
IMCARBN_PATIDN_CNT_U08.Description = [...
  'Pattern ID to be used as start of frame on Primary path'];
IMCARBN_PATIDN_CNT_U08.DocUnits = 'Cnt';
IMCARBN_PATIDN_CNT_U08.EngDT = dt.u08;
IMCARBN_PATIDN_CNT_U08.EngVal = 160;
IMCARBN_PATIDN_CNT_U08.Define = 'Global';


IMCARBN_RATEGROUPID100MILLISEC_CNT_U08 = DataDict.Constant;
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.LongName = 'IMC Arbitration Rate Group ID 100 millisecond';
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.Description = [...
  'Rate Group ID for Signal Groups that are transmitted every 100 millise' ...
  'cond interval'];
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.DocUnits = 'Cnt';
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.EngDT = dt.u08;
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.EngVal = 2;
IMCARBN_RATEGROUPID100MILLISEC_CNT_U08.Define = 'Global';


IMCARBN_RATEGROUPID10MILLISEC_CNT_U08 = DataDict.Constant;
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.LongName = 'IMC Arbitration Rate Group ID 10 millisecond';
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.Description = [...
  'Rate Group ID for Signal Groups that are transmitted every 10 millisec' ...
  'ond interval'];
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.DocUnits = 'Cnt';
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.EngDT = dt.u08;
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.EngVal = 1;
IMCARBN_RATEGROUPID10MILLISEC_CNT_U08.Define = 'Global';


IMCARBN_RATEGROUPID2MILLISEC_CNT_U08 = DataDict.Constant;
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.LongName = 'IMC Arbitration Rate Group ID 2 millisecond';
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.Description = [...
  'Rate Group ID for Signal Groups that are transmitted every 2 milliseco' ...
  'nd interval'];
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.DocUnits = 'Cnt';
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.EngDT = dt.u08;
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.EngVal = 0;
IMCARBN_RATEGROUPID2MILLISEC_CNT_U08.Define = 'Global';


IMCARBN_TOTALNROFSIGGROUP_CNT_U08 = DataDict.ConfigParam;
IMCARBN_TOTALNROFSIGGROUP_CNT_U08.LongName = 'Total Number of Signal Groups configured under all Rate Groups';
IMCARBN_TOTALNROFSIGGROUP_CNT_U08.Description = [...
  'Total Number of Signal Groups configured under all Rate Groups'];
IMCARBN_TOTALNROFSIGGROUP_CNT_U08.IsBuildPrm = false;
IMCARBN_TOTALNROFSIGGROUP_CNT_U08.DocUnits = 'Cnt';
IMCARBN_TOTALNROFSIGGROUP_CNT_U08.EngDT = dt.u08;
IMCARBN_TOTALNROFSIGGROUP_CNT_U08.EngVal = 0;
IMCARBN_TOTALNROFSIGGROUP_CNT_U08.EngMin = 0;
IMCARBN_TOTALNROFSIGGROUP_CNT_U08.EngMax = 255;
IMCARBN_TOTALNROFSIGGROUP_CNT_U08.Define = 'Global';


IMCARBN_TOTALNROFSIG_CNT_U16 = DataDict.ConfigParam;
IMCARBN_TOTALNROFSIG_CNT_U16.LongName = 'Total Number of Signals for IMC Transmission';
IMCARBN_TOTALNROFSIG_CNT_U16.Description = [...
  'Total Number of Signals for IMC Transmission'];
IMCARBN_TOTALNROFSIG_CNT_U16.IsBuildPrm = false;
IMCARBN_TOTALNROFSIG_CNT_U16.DocUnits = 'Cnt';
IMCARBN_TOTALNROFSIG_CNT_U16.EngDT = dt.u16;
IMCARBN_TOTALNROFSIG_CNT_U16.EngVal = 0;
IMCARBN_TOTALNROFSIG_CNT_U16.EngMin = 0;
IMCARBN_TOTALNROFSIG_CNT_U16.EngMax = 65535;
IMCARBN_TOTALNROFSIG_CNT_U16.Define = 'Global';


MILLISECTOMICROSECMPLR_CNT_U08 = DataDict.Constant;
MILLISECTOMICROSECMPLR_CNT_U08.LongName = 'Millisecond to Microsecond multiplier';
MILLISECTOMICROSECMPLR_CNT_U08.Description = [...
  'Millisecond to Microsecond multiplier'];
MILLISECTOMICROSECMPLR_CNT_U08.DocUnits = 'Cnt';
MILLISECTOMICROSECMPLR_CNT_U08.EngDT = dt.u08;
MILLISECTOMICROSECMPLR_CNT_U08.EngVal = 10;
MILLISECTOMICROSECMPLR_CNT_U08.Define = 'Local';


MISSTHD100MILLISECRATEGROUP_CNT_U08 = DataDict.Constant;
MISSTHD100MILLISECRATEGROUP_CNT_U08.LongName = 'Missing Threshold for 100ms Rate Group';
MISSTHD100MILLISECRATEGROUP_CNT_U08.Description = [...
  'Missing Threshold for 100ms Rate Group'];
MISSTHD100MILLISECRATEGROUP_CNT_U08.DocUnits = 'Cnt';
MISSTHD100MILLISECRATEGROUP_CNT_U08.EngDT = dt.u08;
MISSTHD100MILLISECRATEGROUP_CNT_U08.EngVal = 2;
MISSTHD100MILLISECRATEGROUP_CNT_U08.Define = 'Local';


MISSTHD10MILLISECRATEGROUP_CNT_U08 = DataDict.Constant;
MISSTHD10MILLISECRATEGROUP_CNT_U08.LongName = 'Missing Threshold for 10ms Rate Group';
MISSTHD10MILLISECRATEGROUP_CNT_U08.Description = [...
  'Missing Threshold for 10ms Rate Group'];
MISSTHD10MILLISECRATEGROUP_CNT_U08.DocUnits = 'Cnt';
MISSTHD10MILLISECRATEGROUP_CNT_U08.EngDT = dt.u08;
MISSTHD10MILLISECRATEGROUP_CNT_U08.EngVal = 5;
MISSTHD10MILLISECRATEGROUP_CNT_U08.Define = 'Local';


MISSTHD2MILLISECRATEGROUP_CNT_U08 = DataDict.Constant;
MISSTHD2MILLISECRATEGROUP_CNT_U08.LongName = 'Missing Threshold for 2ms Rate Group';
MISSTHD2MILLISECRATEGROUP_CNT_U08.Description = [...
  'Missing Threshold for 2ms Rate Group'];
MISSTHD2MILLISECRATEGROUP_CNT_U08.DocUnits = 'Cnt';
MISSTHD2MILLISECRATEGROUP_CNT_U08.EngDT = dt.u08;
MISSTHD2MILLISECRATEGROUP_CNT_U08.EngVal = 5;
MISSTHD2MILLISECRATEGROUP_CNT_U08.Define = 'Local';


NROFDATABYTEFORCRCCALC_CNT_U08 = DataDict.Constant;
NROFDATABYTEFORCRCCALC_CNT_U08.LongName = 'Number of data byte for CRC Calc ';
NROFDATABYTEFORCRCCALC_CNT_U08.Description = [...
  'Number of data bytes to be considered for CRC calculation'];
NROFDATABYTEFORCRCCALC_CNT_U08.DocUnits = 'Cnt';
NROFDATABYTEFORCRCCALC_CNT_U08.EngDT = dt.u08;
NROFDATABYTEFORCRCCALC_CNT_U08.EngVal = 5;
NROFDATABYTEFORCRCCALC_CNT_U08.Define = 'Local';


PRIMSRCCRCFLT_CNT_U08 = DataDict.Constant;
PRIMSRCCRCFLT_CNT_U08.LongName = 'primary source CRC fault bit mask';
PRIMSRCCRCFLT_CNT_U08.Description = 'primary source CRC fault bit mask';
PRIMSRCCRCFLT_CNT_U08.DocUnits = 'Cnt';
PRIMSRCCRCFLT_CNT_U08.EngDT = dt.u08;
PRIMSRCCRCFLT_CNT_U08.EngVal = 1;
PRIMSRCCRCFLT_CNT_U08.Define = 'Local';


PRIMSRCROLLGCNTRFLT_CNT_U08 = DataDict.Constant;
PRIMSRCROLLGCNTRFLT_CNT_U08.LongName = 'primary source rolling counter fault bit mask';
PRIMSRCROLLGCNTRFLT_CNT_U08.Description = [...
  'primary source rolling counter fault bit mask'];
PRIMSRCROLLGCNTRFLT_CNT_U08.DocUnits = 'Cnt';
PRIMSRCROLLGCNTRFLT_CNT_U08.EngDT = dt.u08;
PRIMSRCROLLGCNTRFLT_CNT_U08.EngVal = 2;
PRIMSRCROLLGCNTRFLT_CNT_U08.Define = 'Local';


ROLLGCNTRFLT_CNT_U08 = DataDict.Constant;
ROLLGCNTRFLT_CNT_U08.LongName = 'Rolling counter fault index';
ROLLGCNTRFLT_CNT_U08.Description = [...
  'CRC Fault index in Frame fault array'];
ROLLGCNTRFLT_CNT_U08.DocUnits = 'Cnt';
ROLLGCNTRFLT_CNT_U08.EngDT = dt.u08;
ROLLGCNTRFLT_CNT_U08.EngVal = 1;
ROLLGCNTRFLT_CNT_U08.Define = 'Local';


ROLLGCNTRMASKVAL_CNT_U08 = DataDict.Constant;
ROLLGCNTRMASKVAL_CNT_U08.LongName = 'Rolling Counter mask value';
ROLLGCNTRMASKVAL_CNT_U08.Description = [...
  'Bit mask value to extract Rolling counter'];
ROLLGCNTRMASKVAL_CNT_U08.DocUnits = 'Cnt';
ROLLGCNTRMASKVAL_CNT_U08.EngDT = dt.u08;
ROLLGCNTRMASKVAL_CNT_U08.EngVal = 31;
ROLLGCNTRMASKVAL_CNT_U08.Define = 'Local';


ROLLGCNTRMAXVAL_CNT_U08 = DataDict.Constant;
ROLLGCNTRMAXVAL_CNT_U08.LongName = 'Rolling Counter Max Value';
ROLLGCNTRMAXVAL_CNT_U08.Description = 'Rolling Counter Max Value';
ROLLGCNTRMAXVAL_CNT_U08.DocUnits = 'Cnt';
ROLLGCNTRMAXVAL_CNT_U08.EngDT = dt.u08;
ROLLGCNTRMAXVAL_CNT_U08.EngVal = 32;
ROLLGCNTRMAXVAL_CNT_U08.Define = 'Local';


RSYNCCNTRTHD_CNT_U08 = DataDict.Constant;
RSYNCCNTRTHD_CNT_U08.LongName = 'Resynchronization Threshold';
RSYNCCNTRTHD_CNT_U08.Description = 'Resynchronization Threshold';
RSYNCCNTRTHD_CNT_U08.DocUnits = 'Cnt';
RSYNCCNTRTHD_CNT_U08.EngDT = dt.float32;
RSYNCCNTRTHD_CNT_U08.EngVal = 3;
RSYNCCNTRTHD_CNT_U08.Define = 'Local';


SECDRYSRCCRCFLT_CNT_U08 = DataDict.Constant;
SECDRYSRCCRCFLT_CNT_U08.LongName = 'secondary source CRC fault bit mask';
SECDRYSRCCRCFLT_CNT_U08.Description = 'primary source CRC fault bit mask';
SECDRYSRCCRCFLT_CNT_U08.DocUnits = 'Cnt';
SECDRYSRCCRCFLT_CNT_U08.EngDT = dt.u08;
SECDRYSRCCRCFLT_CNT_U08.EngVal = 4;
SECDRYSRCCRCFLT_CNT_U08.Define = 'Local';


SECDRYSRCROLLGCNTRFLT_CNT_U08 = DataDict.Constant;
SECDRYSRCROLLGCNTRFLT_CNT_U08.LongName = 'secondary source  rolling counter fault bit mask';
SECDRYSRCROLLGCNTRFLT_CNT_U08.Description = [...
  'primary source  rolling counter fault bit mask'];
SECDRYSRCROLLGCNTRFLT_CNT_U08.DocUnits = 'Cnt';
SECDRYSRCROLLGCNTRFLT_CNT_U08.EngDT = dt.u08;
SECDRYSRCROLLGCNTRFLT_CNT_U08.EngVal = 8;
SECDRYSRCROLLGCNTRFLT_CNT_U08.Define = 'Local';


SHIFTVALFOURTHBYTE_CNT_U08 = DataDict.Constant;
SHIFTVALFOURTHBYTE_CNT_U08.LongName = 'Shift value for fourth byte';
SHIFTVALFOURTHBYTE_CNT_U08.Description = [...
  'Number of bits to be shifted to extract fourth byte from a u32'];
SHIFTVALFOURTHBYTE_CNT_U08.DocUnits = 'Cnt';
SHIFTVALFOURTHBYTE_CNT_U08.EngDT = dt.u08;
SHIFTVALFOURTHBYTE_CNT_U08.EngVal = 24;
SHIFTVALFOURTHBYTE_CNT_U08.Define = 'Local';


SHIFTVALSECONDBYTE_CNT_U08 = DataDict.Constant;
SHIFTVALSECONDBYTE_CNT_U08.LongName = 'Shift value for second byte';
SHIFTVALSECONDBYTE_CNT_U08.Description = [...
  'Number of bits to be shifted to extract second byte from a u32'];
SHIFTVALSECONDBYTE_CNT_U08.DocUnits = 'Cnt';
SHIFTVALSECONDBYTE_CNT_U08.EngDT = dt.u08;
SHIFTVALSECONDBYTE_CNT_U08.EngVal = 8;
SHIFTVALSECONDBYTE_CNT_U08.Define = 'Local';


SHIFTVALTHIRDBYTE_CNT_U08 = DataDict.Constant;
SHIFTVALTHIRDBYTE_CNT_U08.LongName = 'Shift value for third byte';
SHIFTVALTHIRDBYTE_CNT_U08.Description = [...
  'Number of bits to be shifted to extract third byte from a u32'];
SHIFTVALTHIRDBYTE_CNT_U08.DocUnits = 'Cnt';
SHIFTVALTHIRDBYTE_CNT_U08.EngDT = dt.u08;
SHIFTVALTHIRDBYTE_CNT_U08.EngVal = 16;
SHIFTVALTHIRDBYTE_CNT_U08.Define = 'Local';


SIGGROUPIDPOSN_CNT_U08 = DataDict.Constant;
SIGGROUPIDPOSN_CNT_U08.LongName = 'Signal Group ID Position';
SIGGROUPIDPOSN_CNT_U08.Description = [...
  'Signal Group ID position in a Signal Group'];
SIGGROUPIDPOSN_CNT_U08.DocUnits = 'Cnt';
SIGGROUPIDPOSN_CNT_U08.EngDT = dt.u08;
SIGGROUPIDPOSN_CNT_U08.EngVal = 1;
SIGGROUPIDPOSN_CNT_U08.Define = 'Local';


SIGGROUPLTCY_CNT_U08 = DataDict.Constant;
SIGGROUPLTCY_CNT_U08.LongName = 'Signal Group Latency';
SIGGROUPLTCY_CNT_U08.Description = 'Signal Group Latency';
SIGGROUPLTCY_CNT_U08.DocUnits = 'Cnt';
SIGGROUPLTCY_CNT_U08.EngDT = dt.float32;
SIGGROUPLTCY_CNT_U08.EngVal = 1;
SIGGROUPLTCY_CNT_U08.Define = 'Local';


STRTBYTEPOSN_CNT_U08 = DataDict.Constant;
STRTBYTEPOSN_CNT_U08.LongName = 'Rolling Counter position';
STRTBYTEPOSN_CNT_U08.Description = [...
  'Rolling Counter position in a Signal Group'];
STRTBYTEPOSN_CNT_U08.DocUnits = 'Cnt';
STRTBYTEPOSN_CNT_U08.EngDT = dt.u08;
STRTBYTEPOSN_CNT_U08.EngVal = 0;
STRTBYTEPOSN_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
ImcFrmFlt = DataDict.NTC;
ImcFrmFlt.NtcNr = NtcNr1.NTCNR_0X03F;
ImcFrmFlt.NtcTyp = 'None';
ImcFrmFlt.LongName = 'IMC Arbitration Fault';
ImcFrmFlt.Description = 'IMC Arbitration Fault';
ImcFrmFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
ImcFrmFlt.NtcStInfo.Bit0Descr = 'Primary Source - CRC Fault';
ImcFrmFlt.NtcStInfo.Bit1Descr = 'Primary Source - Rolling counter Fault';
ImcFrmFlt.NtcStInfo.Bit2Descr = 'Secondary Source - CRC Fault';
ImcFrmFlt.NtcStInfo.Bit3Descr = 'Secondary Source - Rolling counter Fault';
ImcFrmFlt.NtcStInfo.Bit4Descr = 'Reserved';
ImcFrmFlt.NtcStInfo.Bit5Descr = 'Reserved';
ImcFrmFlt.NtcStInfo.Bit6Descr = 'Reserved';
ImcFrmFlt.NtcStInfo.Bit7Descr = 'Reserved';
ImcFrmFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
