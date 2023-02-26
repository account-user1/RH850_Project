This demo is only suitable for an RH850 processor which supports four or more threads.
For best result, use the RH850 simulator with the provided connection method.

The [MultiCoreArchive] project file HyperthreadsDemoImportsControl.gpj configures
one SharedMemory and four Core modules. The hardware layout is one core with
four Threads, and each thread gets assigned one Core module.

Each member has a linker directive file (.ld) that configures its memory.

This demo uses all the available options for MultiCore configuration:

-shared_imports : SharedMemory is allowed to import symbols from other cores.

-cross_core_imports: Cores are allowed to import symbols, not only from
SharedMemory but from other Cores.

-exported_absolutes_only: By default, all symbols are exported and available
to be imported, but this option restricts the symbols that can be imported to
those that previously have been marked as exported.


There are three ways to mark a symbol as exported:

- Using the #pragma ghs exported in source code to mark a symbol as exported.

Please see the variables val0, val1, val2, val3 in shared.c

- For libraries, there are two additional ways of specifying symbols are
exported:

        * With the driver option: -exportall=-library
        All the symbols of that library are exported

        Please see the file shared.gpj

        * By providing a file named library.ghsexports with the symbols
        of the library that are to be exported.

        Please see the file libshared_0.ghsexports

* Note : 
The symbol names included in the file .ghsexports must be the same as the ones
existing in the symbol table of the library in question.
Please add an underscore ("_") to the beginning of the variable or function.
For instance, if a library libshared_0.a is exporting through its
libshared_0.ghsexports file the variable common_lib0_var2 and the function
common_lib0_f0, the symbols to add in libshared_0.ghsexports will be (contents
of the file libshared_0.ghsexports) :
_common_lib0_f0
_common_lib0_var2

* Note : In order to add a dependency to the .ghsexports file, please use the
Builder options :depends, :dependsRelative or :dependsNonRelative in the Core
or SharedMemory project file.

For more information about the options available in MultiCoreArchives, please
refer to the gcores paragraph in the "Utility Programs" chapter of the 
"Building Applications" MULTI documentation.

NOTE
****
In order to connect to the Multi-core Simulator, please use the connection
provided in the file threads.con
It is already configured with 1 Core and 4 Threads.
