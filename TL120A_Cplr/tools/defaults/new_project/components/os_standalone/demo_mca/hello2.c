#include <stdio.h>

extern void init(void);
int main(int argc, char *argv[])
{
    init();
    printf("Hello world 2.\n");
    return 0;
}
