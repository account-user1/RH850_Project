#include <iostream>
#include <string>
#include "scan.h"
#include "catalog.h"
#include "labels.h"

#define ENTER_ITEM	0
#define PLACE_ORDER	1
#define PRINT_ITEMS	2
#define SHUTDOWN	3

#define ORDER 0
#define PRINT 1

LIST *theOrder;

void InitializeOrder () {
    theOrder = NULL;
}

extern "C"
void OrderItem (char *userInput) {
    string input;
    Item *newItem;
    char *suffix;
    long unsigned int itemNumber;

    input = userInput;
    itemNumber = strtol(input.c_str(), &suffix, 10);
    if (strcmp (suffix, "") == 0) {
        newItem = new Item(itemNumber);
    } else {
        newItem = new Item(input);
    }
    newItem = Search (theCatalog, *newItem);
    Insert(&theOrder, newItem);

    cout << "Entered:\n\t" << newItem << flush;
}

char *GetOrder () {
    LIST *curr;
    char *print, line[80];
    strcpy (line, "Item Name, Item Number, Item Price\n");
    print = (char *) malloc ((strlen(line) + 1)*sizeof(char));
    strcpy (print, line);
    for (curr=theOrder;curr!=NULL;curr=curr->next) {
        print = (char *) realloc (print,
                (strlen(curr->item->Print().c_str()) + strlen(print) + 2)*(sizeof(char)));
        strcat (print, curr->item->Print().c_str());
    }
    return print;
}

int GetInput(){
    int selection;
    string input;

    cout << "Please select one of the following:" << endl;
    cout << "\t" << ENTER_ITEM << " Add Item to Order" << endl;
    cout << "\t" << PLACE_ORDER << " Submit Order" << endl;
    cout << "\t" << PRINT_ITEMS << " Print Current Order" << endl;
    cout << "\t" << SHUTDOWN << " Shutdown" << endl;
    cin >> input;
    selection = atoi (input.c_str());
    return selection;
}


void SubmitOrder() {
    GetOrder();
}

void PrintOrder () {
    printf ("%s", GetOrder());
}

extern "C"
void Shop (char *catalogFileName) { 
    int input; 

    InitializeOrder();
    SetupCatalog(catalogFileName);

    while (1) {
    ReadyToShop:
        input = GetInput(); 
        switch (input) { 
            case ENTER_ITEM: 
                Scan(); 
                break; 
            case PLACE_ORDER: 
                SubmitOrder(); 
                break; 
            case SHUTDOWN: 
                cout << "Goodbye, World!" << endl; 
                return; 
            case PRINT_ITEMS: 
                PrintOrder(); 
                break; 
            default: 
                cout << "Invalid selection." << endl; 
        } 
    }
}
