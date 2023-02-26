This demo is only suitable for an RH850 processor which supports four or more threads.
For best result, use the RH850 simulator with the provided connection method.

The [MultiCoreArchive] project file HyperthreadsDemo.gpj configures
one SharedMemory and four Core modules. The hardware layout is one core with
four Threads, and each thread gets assigned one Core module.

Each member has a linker directive file (.ld) that configures its memory.
In this way, the SharedMemory module defines 4 variables (val0, val1, val2, val3)
that are used in the four cores.

This demo only uses the default configuration, in which only the Cores are
able to import from the SharedMemory (and not from other cores), and the
SharedMemory is not allowed to import from the cores.

Also, by default , all the symbols in the SharedMemory are exported and can
be used by the Cores.

For more advanced control, please see the demo :
"Hyper-threaded RH850 Demo (symbol-import control)"

For more information about the options available in MultiCoreArchives, please
refer to the gcores paragraph in the "Utility Programs" chapter of the 
"Building Applications" MULTI documentation.

NOTE
****
In order to connect to the Multi-core Simulator, please use the connection
provided in the file threads.con
It is already configured with 1 Core and 4 Threads.


