#include <stdio.h>
int var2;
extern void init(void);
int main(int argc, char *argv[])
{
    init();
    printf("Hello world.\n");
    return 0;
}
