MEMORY {
    sram_memory           : ORIGIN = 0xfff00000, LENGTH = 1M-96K

// monitor uses the 32K of SRAM as a work area
    monitor_rsvd	  : ORIGIN = 0xfffe8000, LENGTH = 32K

    zda_memory            : ORIGIN = 0xffff9000, LENGTH = 0x7000

    alt_vector_memory	  : ORIGIN = 0x03cf8000, LENGTH = 0x1000
    
    flash_rsvd1           : ORIGIN = 0x00000000, LENGTH = 0x1000
    flash_memory          : ORIGIN = .,          LENGTH = 1M - 0x1000

    dram_memory           : ORIGIN = 0x01000000, LENGTH = 16M

    // These memory region(s) needed for the default linkmap
    rozda_memory: ORIGIN = 0, LENGTH = 0
    iram_memory : ORIGIN = 0, LENGTH = 0
    global_memory: ORIGIN = 0, LENGTH = 0
}
