/* 
   This demonstration program shows the STL debugging capabilities
   of MULTI.

 */

#include <list>
#include <vector>
#include <map>
#include "labels.h"

int main(int argc, char *argv[])
{
    int i;
    
    // Create a list of ints
    std::list<int> intList;
ListCreation:
    for (i = 0; i < 10; i++) {
	intList.push_back(i*10);
    }

    // Use an iterator to insert a value in the list
    std::list<int>::iterator intListIt = intList.begin();
ListIterator:
    ++intListIt;
    ++intListIt;
    intList.insert(intListIt, 15);

    // Create a vector of lists
    std::vector< std::list<int> > intListVector;
VectorCreation:
    for (i = 0; i < 3; i++) {
	intListVector.push_back(intList);
    }

    // Create a map of char to int
    std::map<char, int> charToInt;
    for (char c = 'a'; c <= 'z'; c++) {
	charToInt[c] = (int) c;
    }

MapCreated:
    intListVector[0].push_back(charToInt['f']);
    
VectorInsert:
    (*intListIt) += 1;
    return 0;
}
