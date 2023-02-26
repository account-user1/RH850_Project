This demo shows a basic Multi-core configuration with one SharedMemory and
two cores.

In order to be executed in a target or simulator, the memory of the different
cores has to be properly configured.


THIS PROGRAM WILL NOT EXECUTE CORRECTLY AS-IS UNTIL EACH COMPONENT IS GIVEN
ITS OWN PROPER LINKMAP.  Once you have added linkmaps (.ld) files to each
component (each core and the shared memory), remove the -allow_overlap option 
from the MultiCoreArchive and re-build to ensure no errors are found.


The file MCADemo.gpj is a type [MultiCoreArchive], that is used to include
the different items of the Multi-core configuration. In this case, one
Shared Memory and two Cores.


In this basic demo, both Core1 and Core2 import the function init provided by
the Shared Memory.


The Shared Memory imports the variable var2 from the Core 1. By default this 
is not allowed, but can be configured through the option -shared_imports.

For more information about the options available in MultiCoreArchives, please
refer to the gcores paragraph in the "Utility Programs" chapter of the 
"Building Applications" MULTI documentation.
