
int core0_lib0_var0 = 0x1000;
int core0_lib0_var1 = 0x1001;
int core0_lib0_var2 = 0x1002;


extern int core1_lib0_f0(int a);

int core0_lib0_f0(int a) {
    return core1_lib0_f0(a);
}
