#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    printf("I am another program, my arguments are:\n");

    for(i=0; i<argc; i++) {
	printf("argv[%d]:\t%s\n", i, argv[i]);
    }

    return 0;
}
