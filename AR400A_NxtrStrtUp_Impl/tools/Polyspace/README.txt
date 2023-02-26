**This component requires some special configuration to run Polyspace.**



## Main Function ##
Because it calls the main function, main is stubbed and because main then exists in the project Polyspace will attempt
to use the stub as the entry point.  The result is that Rte_Stub and nxtr_strt_up functions will be uncovered.

### Changes ###
To fix the issue the main function called at the end of NxtrStrtUp.c as well as the corresponding stub in Rte_Stubs.c
need to be renamed to "main_stub".  This allows Polyspace to generate a main function, execute Rte_Stub as the entry
point and fully analyze the component.




## Generated Files ##
Under normal circumstances the Rte_Stubs.c/h files are generated using the component helper tool but because this
component doesn't strictly follow the conventions used by other Nexteer components the files need to be coded by hand.

### Changes ###
Within Rte_Stubs.c in the Rte_Stub() function, a single call to nxtr_strt_up() must be made instead of RESET as the
DataDict.m might suggest.

### Rationale ###
This is because that is the first entry point for the C code and while the function is
technically declared in a global scope it is only intended to be called from within the assembly file in this same
component.  Polyspace is not aware of this and as such needs to be manually told about this entry point.
