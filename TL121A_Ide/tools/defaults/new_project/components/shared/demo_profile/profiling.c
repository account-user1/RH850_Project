#include <stdio.h>

int global_val = 0;

void do_some_computation(int i)
{
    global_val += i;
}

int recursive_func(int i)
{
    if(i <= 1)
	return 1;

    do_some_computation(i);

    return recursive_func(i-1) + recursive_func(i-2);
}

int main()
{
    recursive_func(35);

    printf("Exiting.\n");

    return 0;
}
