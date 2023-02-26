CONSTANTS {
#if defined(__ghs_GC_shared__)
        IRAM_ORIGIN = 0xfedf8000;
        IRAM_SIZE = 32K;
        IROM_ORIGIN = 0x00200000;
        IROM_SIZE = 1M;
#elif defined(__ghs_GC_core_1__ )
        IRAM_ORIGIN = 0xfedf0000;
        IRAM_SIZE = 32K;
        IROM_ORIGIN = 0x00004000;
        IROM_SIZE = 0xfc000;
#elif defined(__ghs_GC_core_2__ )
        IRAM_ORIGIN = 0xfebf0000;
        IRAM_SIZE = 64K;
        IROM_ORIGIN = 0x00100000;
        IROM_SIZE = 1M;
#else
	IRAM_ORIGIN = 0xfedf0000;
	IRAM_SIZE = 64K;
	IROM_ORIGIN = 0x00100000;
	IROM_SIZE = 1M;
#endif

	// For Other Core
	// IRAM_ORIGIN = 0xfebf0000;
	// IRAM_SIZE = 64K;
	// IROM_ORIGIN = 0x00004000;
	// IROM_SIZE = 1M - 0x4000;
}

MEMORY {
    sram_memory		: ORIGIN = IRAM_ORIGIN,		LENGTH = IRAM_SIZE
    flash_memory	: ORIGIN = IROM_ORIGIN,		LENGTH = IROM_SIZE 

    // These memory region(s) needed for the default linkmap
    rozda_memory: ORIGIN = 0, LENGTH = 0
    dram_memory : ORIGIN = 0, LENGTH = 0
    zda_memory  : ORIGIN = 0, LENGTH = 0
    iram_memory : ORIGIN = 0, LENGTH = 0
    flash_rsvd1 : ORIGIN = 0, LENGTH = 0
    global_memory: ORIGIN = 0, LENGTH = 0
}

