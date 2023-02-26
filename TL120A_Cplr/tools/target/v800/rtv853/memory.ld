MEMORY {

// first 8K of sram may be reserved

    sram_rsvd1   : ORIGIN = 0x00f80000, LENGTH = 8K
    sram_memory  : ORIGIN = .,          LENGTH = 256K-8K

// 512KB of flash starting at 0x00000000 
// 0x00000000 to 0x00010000 Monitor
// 0x00010000 to 0x00070000 User Flash Memory
// 0x00070000 to 0x0007ffff Diagnostics

    flash_rsvd1  : ORIGIN = 0x00000000, LENGTH = 64K
    flash_memory : ORIGIN = .,          LENGTH = 512K-64K-64K 
    flash_rsvd2  : ORIGIN = .,          LENGTH = 64K 

// internal ram
    zda_memory   : ORIGIN = 0xffffe000, LENGTH = 4K
    sfr_memory	 : ORIGIN = .,		LENGTH = 4K    

    // These memory region(s) needed for the default linkmap
    rozda_memory: ORIGIN = 0, LENGTH = 0
    dram_memory : ORIGIN = 0, LENGTH = 0
    iram_memory : ORIGIN = 0, LENGTH = 0
    global_memory: ORIGIN = 0, LENGTH = 0
}
