#include <stdio.h>

/*
  generate banner with:
  gbin2c banner.bin -o banner.c -size
*/

extern const char banner_bin_data[];
extern const unsigned int banner_bin_data_size;

int main(int argc, char *argv[])
{
    int i;
    for (i=0; i< banner_bin_data_size; i++)
	putchar (banner_bin_data[i]);
    
    return 0;
}
