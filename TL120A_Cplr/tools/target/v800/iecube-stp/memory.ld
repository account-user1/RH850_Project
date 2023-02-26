MEMORY {

    flash_rsvd1           : ORIGIN = 0x00000000, LENGTH = 0x1000
    flash_memory          : ORIGIN = .,          LENGTH = 1M - 0x1000

    sram_rsvd1            : ORIGIN = 0x03ff3000, LENGTH = 0
    sram_memory           : ORIGIN = .,          LENGTH = 48K

    // These three memory regions aren't present/supported/needed on this board
    rozda_memory: ORIGIN = 0, LENGTH = 0
    dram_memory : ORIGIN = 0, LENGTH = 0
    iram_memory : ORIGIN = 0, LENGTH = 0
    zda_memory  : ORIGIN = 0, LENGTH = 0
    global_memory: ORIGIN = 0, LENGTH = 0

}
