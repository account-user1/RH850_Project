
#pragma ghs exported
int common_lib0_var0 = 0;

int common_lib0_var1 = 0x01;

//common_lib0_var2  and common_lib0_f0, exported through a .ghsexports file
int common_lib0_var2 = 0x02;

int common_lib0_f0(int a) {
    return common_lib0_var0 + a;    

}
