#include <fstream>
#include "item_list.h"
#include "labels.h"

LIST *theCatalog;

char * ResolveCatalogFileName (char * execPath, char * catalogFileName) {
    char *filename;
    const char *curfname = __FILE__;
    const char *curbname = __BASE__;

    filename = (char *)malloc(strlen(curfname)+1+strlen(catalogFileName)+1+
			      strlen(execPath));

    if (*curfname == '/' || *curfname == '\\' ||
	(*curfname && curfname[1] == ':')) {
	strcpy(filename, curfname);
	strcpy(strstr(filename, curbname), catalogFileName);
    } else {
	strcpy(filename, execPath);
	char * ptr = filename + strlen(filename) - 1;
	while (ptr > filename && *ptr != '/' && *ptr != '\\' && *ptr != ':')
	    ptr--;
	strcpy(ptr + 1, curfname);
	strcpy(strstr(ptr + 1, curbname), catalogFileName);
    }

    return filename;
}

void ReadCatalog (LIST **catalogList, char *catalogFileName) {
    char name[80];
    int number;
    float price;
    FILE *catfile;
    int ret;

    catfile = fopen (catalogFileName, "r");
    if(catfile == 0){
    FileNotFound:
        exit(-1); /* file does not exist, check your current working directory */
    }
    ret = fscanf (catfile, "%s%u%f", name, &number, &price);
    while (ret != EOF && strcmp (name, "") != 0) {
        Insert (&(*catalogList), new Item(name, number, price));
        ret = fscanf (catfile, "%s%u%f", name, &number, &price);
    };
}

void SetupCatalog (char *catalogFileName) {
    ReadCatalog (&theCatalog, catalogFileName);
ReadyToSort:
    SortList (&theCatalog);
    PrintList (theCatalog);
}
