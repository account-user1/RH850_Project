DEFAULTS {

    iram_size = 12K
    
}

MEMORY {
    sram_memory           : ORIGIN = 0x00400000, LENGTH = 1M-32K

// monitor uses the last 32K of SRAM as a work area
// this also appears to be the location of the alternate interrupt vector
    monitor_rsvd	  : ORIGIN = 0x004f8000, LENGTH = 32K

    iram_memory           : ORIGIN = 0xfffff000-iram_size, LENGTH = iram_size

// monitor reserves some memory for interrupt vectors
    flash_rsvd1           : ORIGIN = 0x00000000, LENGTH = 0x1000
    flash_memory          : ORIGIN = .,          LENGTH = 512K - 0x1000

    dram_memory           : ORIGIN = 0x00800000, LENGTH = 32M

    // This memory region isn't present/supported/needed on this board
    rozda_memory: ORIGIN = 0, LENGTH = 0
    zda_memory  : ORIGIN = 0, LENGTH = 0
    global_memory: ORIGIN = 0, LENGTH = 0

}
