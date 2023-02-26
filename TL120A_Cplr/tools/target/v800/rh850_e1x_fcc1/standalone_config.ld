CONSTANTS {

#if defined(__ghs_GC_shared__)
    heap_reserve = 0
    stack_reserve = 0
#else
    heap_reserve = 32K
    stack_reserve = 32K
#endif

}
