// Implimentation file for IntArray class
#include <iostream>
#include <cstdlib>
#include "IntArray.h"
using namespace std;

// Constructor sets size of array and allocates memory
IntArray::IntArray(int s)
{
    arraySize = s;
    aptr = new int [s];
    for (int count = 0; count < arraySize;  count++){
        *(aptr + count) = 0;
    }
}

// Copy constructor
IntArray::IntArray(const IntArray &obj)
{
    arraySize = obj.arraySize;
    aptr = new int [arraySize];
    for(int count = 0; count < arraySize; count++){
        *(aptr + count) = *(obj.aptr + count);
    }
}

// Destructor for IntArray class.
IntArray::~IntArray()
{
    if(arraySize > 0)
    { delete [] aptr; }
}

void IntArray::subscriptError()
{
    cout << "ERROR: Subscript out of range.\n";
    exit(0);
}

int &IntArray::operator[](const int &sub)
{
    if(sub < 0 || sub >= arraySize)
        { subscriptError(); }
    return aptr[sub];

}