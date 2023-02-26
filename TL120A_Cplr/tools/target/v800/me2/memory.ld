
MEMORY {
    sram_memory	        : ORIGIN = 0x00800000, LENGTH = 32M
    zda_memory          : ORIGIN = 0xffffb000, LENGTH = 16K
    sfr_memory		: ORIGIN = 0xfffff000, LENGTH = 4K

    vect_memory		: ORIGIN = 0x00000000, LENGTH = 0x1000
    iram_memory		: ORIGIN = 0x00001000, LENGTH = 128K-0x1000
    flash_memory	: ORIGIN = 0x00100000, LENGTH = 4M

    // These memory region(s) needed for the default linkmap
    rozda_memory: ORIGIN = 0, LENGTH = 0
    dram_memory : ORIGIN = 0, LENGTH = 0
    flash_rsvd1 : ORIGIN = 0, LENGTH = 0
    global_memory: ORIGIN = 0, LENGTH = 0
}
