#include <string>
using namespace std;

class Item {
    string name;
    signed int itemNumber:8;
    float price;
    public:
        Item();
        Item( int);
        Item(string);
        Item(const char *, int, float);
        string Name () const {return name;};
        unsigned long int ItemNumber() const {return itemNumber;};
        float Price() const {return price;};
        bool operator==(Item);
        bool operator<(Item);
        bool operator>(Item);
        bool operator<=(Item);
        bool operator>=(Item);
        string Print();
}; 

class Furniture: public Item {int e;};
class Chair: public Furniture {int f;};
class Desk: public Furniture {int g;};
class Supply: public Item {int a;};
class WritingImplement: public Supply {int h;};
class Pencil: public WritingImplement {int j;};
class Pen: public WritingImplement {int k;};
class Paper: public Supply {int i;};
class Electronics: public Item {int b;};
class Computer: public Electronics {int c;};
#if defined(__STANDARD_CXX)
class InkCartridge: public Computer, public Supply {int d;};
#endif

extern Chair a;
extern Desk b;
extern Pen c;
extern Pencil d;
extern Paper e;
#if defined(__STANDARD_CXX)
extern InkCartridge f;
#endif

ostream& operator<<(ostream &, Item *);

typedef struct list LIST;
struct list {
    LIST *next;
    Item *item;
    char *itemName;
};

void Insert (LIST **, Item *); 
void PrintList (LIST *);
void SortList (LIST **);
void DeleteAll (LIST **);
Item *Search (LIST *, Item);

