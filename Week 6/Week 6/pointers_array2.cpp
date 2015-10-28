#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 8;
    int set[SIZE] = {5,10,15,20,25,30,35,40};
    int *numPtr;
    int count;
    
    numPtr = set;
    
    // using the pointer to display the array contents
    for(count = 0; count < SIZE; count ++)
    {
        cout << *numPtr << endl; // here I am using *numPtr to reference the set
        numPtr++;
    }
    
    // displaying the contents in reverse order using pointer
    for(count = 0; count < SIZE; count ++)
    {
        numPtr--;
        cout << "The value is: " << *numPtr << " and the address is: " << numPtr << endl; // here I am using *numPtr to reference the set
    }
}