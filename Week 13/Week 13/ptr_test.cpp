#include <iostream>

using namespace std;

int main()
{
    
    int *intptr;
    intptr = new int;           // dynamically allocating memory for a new int
    
    char *nameStr;
    nameStr = new char[6];      // dynamically allocating memory for a new char[]
    
    *intptr = 392;
    strcpy(nameStr, "Chris");
    
    cout << "*intptr = " << *intptr << endl;
    cout << "*nameStr = " << *nameStr << endl;
    cout << "nameStr = " << nameStr << endl;

    delete intptr;              // deleting the intptr in memory
    delete [] nameStr;          // deleting the nameStr array in memory
    
}