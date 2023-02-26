-- This source is designed to work with either the full Ada95 runtime,
-- or one of the optional runtimes GMART or GSTART.

-- The Ada Preprocessor is used to select the appropriate source to be
-- compiled. Lines starting with # are considered by the preprocessor. The
-- Ada Preprocessor is described in the Ada95 User's Guide and Compiler
-- Reference.

-- When a new project is created for GMART or GSTART, a corresponding
-- preprocessor definition -DGMART or -DGSTART is set.

#if GMART'defined or GSTART'defined then
-- GMART and GSTART use a simplified library called Ada.IO. This is also
-- described in the Ada95 User's Guide and Compiler Reference. Using Ada.IO
-- requires the resulting program to be linked with the libadagmartutil.a or
-- libadagstartutil.a library.
with Ada.IO; use Ada.IO;
#else
-- When not using the GMART or GSTART library the regular Text_IO package is
-- available. No additional libraries are required.
with Text_IO; use Text_IO;
#end if

procedure hello is
begin
   put_line("Hello world!");
end;
