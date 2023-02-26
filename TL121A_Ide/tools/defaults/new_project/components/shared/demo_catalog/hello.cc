#include "shop.h"
#include "labels.h"
#include "catalog.h"
#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
    int x=71;
InMain:
    cout << "Hello, World!" << endl;
PrintedHelloWorld:
    switch (x) {
        case 1:
            break;
        case 2:
            break;
        default: // we will always fall through to the default for this demo
	    char * catalogFile = ResolveCatalogFileName(argv[0], argv[argc-1]);
            Shop(catalogFile);
    }
    return 0;
}
