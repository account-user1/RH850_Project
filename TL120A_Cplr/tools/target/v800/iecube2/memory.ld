MEMORY {

    flash_rsvd1           : ORIGIN = 0x00000000, LENGTH = 0x1000
    flash_memory          : ORIGIN = .,          LENGTH = 3M - 0x1000

    sram_rsvd1            : ORIGIN = 0xfedc0000, LENGTH = 0
    sram_memory           : ORIGIN = .,          LENGTH = 256K

    sfr_memory		  : ORIGIN = 0xfffff000, LENGTH = 4K

    // These memory region(s) needed for the default linkmap
    rozda_memory: ORIGIN = 0, LENGTH = 0
    dram_memory : ORIGIN = 0, LENGTH = 0
    zda_memory  : ORIGIN = 0, LENGTH = 0
    iram_memory : ORIGIN = 0, LENGTH = 0
    global_memory: ORIGIN = 0, LENGTH = 0
}
