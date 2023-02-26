#include "item_list.h"
#include "labels.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <iomanip>

Chair a;
Desk b;
Pen c;
Pencil d;
Paper e;
#if defined(__STANDARD_CXX)
InkCartridge f;
#endif

Item::Item (int newItemNumber) {
    itemNumber = newItemNumber;
    name = "unknown";
    price = 0.0;
}

Item::Item (string newName) {
    name = newName;
    itemNumber = 0;
    price = 0.0;
}

Item::Item (const char *newName, int newItemNumber, float newPrice) {
    name = newName;
    itemNumber = newItemNumber;
    price = newPrice;
}

Item::Item () {
    name = "";
    itemNumber = 0;
    price = 0.0;
}

bool Item::operator== (Item i) {
    if (i.ItemNumber() == itemNumber)
        return true;
    if (i.Name() == name)
        return true;
    return false;
}

bool Item::operator< (Item i) {
    return name < i.Name();
}

bool Item::operator> (Item i) {
    return name > i.Name();
}

bool Item::operator>= (Item i) {
    return name >= i.Name();
}

bool Item::operator<= (Item i) {
    return name <= i.Name();
}

ostream& operator<<(ostream &os, Item *printMe) {
    os << fixed << setprecision(2);
    os << "Item Name:  ";
    os << printMe->Name().data();
    os << "\n\tItem Num: ";
    os << printMe->ItemNumber();
    os << "\n\tPrice:    $";
    os << printMe->Price() << endl;
    return os;
}

void Insert (LIST **theList, Item *insertMe) {
    LIST *newItem;
    int nameLength;
    newItem = (LIST *) malloc (sizeof (LIST));
    newItem->next = *theList;
    newItem->item = insertMe;
    nameLength = strlen (insertMe->Name().c_str());
HeresTheProblem:
    newItem->itemName = (char *)malloc(sizeof(char)*nameLength);
    strcpy (newItem->itemName, insertMe->Name().c_str());
ExplainBreakpoint:
    *theList = newItem;
}

void DeleteAll (LIST **theList) {
    LIST *deleteMe;
    LIST *current;
    if (*theList == NULL)
        return;
    current=(*theList)->next;
    deleteMe = *theList;
    while (current) {
        free (deleteMe);
        deleteMe=current;
        current=deleteMe->next;
    }
    *theList = NULL;
}

string Item::Print () {
    char priceString[40], numberString[40], nameString[60];
    char *nameStringPointer = (char *) name.data();
    sprintf (priceString, "$%1.2f", price);
    sprintf (numberString, "%u, ", itemNumber);
    sprintf (nameString, "%s, ", nameStringPointer);
    string printout;
    printout = nameString;
    printout += numberString;
    printout += priceString;
    printout += "\n";
    return printout;
}

void PrintList (LIST *theList) {
    LIST *printMe;
    for (printMe=theList; printMe!=NULL; printMe=printMe->next) {
        cout << printMe->item;
    }
}

void SortList (LIST **theList) {
    LIST *prim, *sec;
    Item *temp;
    char *tempcp;
    for (prim=*theList;prim;prim=prim->next)
        for (sec=prim->next;sec;sec=sec->next)
            if (*(prim->item) > *(sec->item)){
                temp=prim->item;
                prim->item=sec->item;
                sec->item=temp;
                tempcp=prim->itemName;
                prim->itemName=sec->itemName;
                sec->itemName=tempcp;
            }
}

Item *Search (LIST *searchMe, Item findMe) {
    LIST *current;
    for (current=searchMe;current;current=current->next) {
        if (*(current->item) == findMe)
            return current->item;
    }
    return new Item("unknown: contact customer");
}
