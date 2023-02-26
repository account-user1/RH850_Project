MEMORY {

    flash_rsvd1           : ORIGIN = 0x000000,   LENGTH = 0x1000
    flash_memory          : ORIGIN = .,          LENGTH = 256K - 0x1000

// monitor is located in external ROM space
    ext_rom_rsvd1         : ORIGIN = 0x100000,   LENGTH = 0x80000

// monitor work area at beginning of internal RAM
    sram_rsvd1            : ORIGIN = 0x00fc0000, LENGTH = 0x2000
    sram_memory           : ORIGIN = .,          LENGTH = 256K-12K-4K-0x2000

// due to address-space wrap-around, zda_memory and sfr_memory overlap sram
    zda_memory		  : ORIGIN = 0xffffc000, LENGTH = 12K
    sfr_memory		  : ORIGIN = 0xfffff000, LENGTH = 4K

    // These memory region(s) needed for the default linkmap
    rozda_memory: ORIGIN = 0, LENGTH = 0
    dram_memory : ORIGIN = 0, LENGTH = 0
    iram_memory : ORIGIN = 0, LENGTH = 0
    global_memory: ORIGIN = 0, LENGTH = 0
}
