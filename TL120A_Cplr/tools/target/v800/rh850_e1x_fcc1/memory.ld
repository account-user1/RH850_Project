CONSTANTS {
    /* The hardware has the following:
     *   IRAM PE1         : ORIGIN = 0xfebf0000, LENGTH = 64K
     *   IRAM PE3         : ORIGIN = 0xfedf8000, LENGTH = 32K
     *   GLOBAL MEMORY    : ORIGIN = 0xfeee0000, LENGTH = 256K
     *
     *   For multi-core support, split global memory into three
     *   pieces (core1, core2, and shared).
     */
#if defined(__ghs_GC_shared__)
        SRAM_ORIGIN = 0xfef1c000;
        SRAM_SIZE = 16K;
        GLOBAL_ORIGIN = 0;
        GLOBAL_SIZE = 0;
#elif defined(__ghs_GC_core_1__ )
        SRAM_ORIGIN = 0xfedf0000;
        SRAM_SIZE = 64K;
        GLOBAL_ORIGIN = 0xfeee0000;
        GLOBAL_SIZE = 120K;
#elif defined(__ghs_GC_core_2__ )
        SRAM_ORIGIN = 0xfedf8000;
        SRAM_SIZE = 32K;
        GLOBAL_ORIGIN = 0xfeefe000;
        GLOBAL_SIZE = 120K;
#else
	SRAM_ORIGIN = 0xfedf0000;
	SRAM_SIZE = 64K;
	GLOBAL_ORIGIN = 0xfeee0000;
	GLOBAL_SIZE = 256K;
#endif
}

MEMORY {
    sram_memory           : ORIGIN = SRAM_ORIGIN, LENGTH = SRAM_SIZE
    global_memory         : ORIGIN = GLOBAL_ORIGIN, LENGTH = GLOBAL_SIZE
    sfr_memory		  : ORIGIN = 0xfffff000, LENGTH = 4K

    flash_rsvd1           : ORIGIN = 0x00000000, LENGTH = 0x1000
    flash_memory          : ORIGIN = .,          LENGTH = 4M - 0x1000

    flash_memory2         : ORIGIN = 0x01000000, LENGTH = 32K
    data_flash            : ORIGIN = 0xff200000, LENGTH = 64K 
    
    // These memory region(s) needed for the default linkmap
    zda_memory  : ORIGIN = 0, LENGTH = 0
    rozda_memory: ORIGIN = 0, LENGTH = 0
    dram_memory : ORIGIN = 0, LENGTH = 0
    iram_memory : ORIGIN = 0, LENGTH = 0
}

