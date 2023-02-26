#include <stdio.h>
extern int var2;
void mysharedfunc(void);
void init(void)
{
    var2 = 0xdeadbeef;
    mysharedfunc();
}

