#include <stdio.h>
#include "shop.h"

void Scan (void) {
    char input[80];
    printf ("Enter the item number or name:\n");
    fflush(stdout);
    scanf ("%79s", input);
    OrderItem (input);
}
