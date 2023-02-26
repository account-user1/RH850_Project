MEMORY {
    sram_memory           : ORIGIN = 0xfede0000, LENGTH = 160K  // The first 128K is primary (fast) sram
    global_memory         : ORIGIN = 0xfedd8000, LENGTH = 32K
    sfr_memory		  : ORIGIN = 0xfffff000, LENGTH = 4K

    flash_rsvd1           : ORIGIN = 0x00000000, LENGTH = 0x1000
    flash_memory          : ORIGIN = .,          LENGTH = 2M - 0x1000

    flash_memory2         : ORIGIN = 0x01000000, LENGTH = 32K
    data_flash            : ORIGIN = 0xff200000, LENGTH = 48K 
    
    // These memory region(s) needed for the default linkmap
    zda_memory  : ORIGIN = 0, LENGTH = 0
    rozda_memory: ORIGIN = 0, LENGTH = 0
    dram_memory : ORIGIN = 0, LENGTH = 0
    iram_memory : ORIGIN = 0, LENGTH = 0
}
