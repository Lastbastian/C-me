#include <iostream>
#include <cassert>
#include "myString.h"
using namespace std;
using namespace cs_mystring;

myString::myString()
{
    string = new char[1];
    strcpy(string, "");
}

myString::myString(const char *inString)
{
    string = new char[strlen(inString) + 1];
    strcpy(string, inString);
}

myString::myString(const myString& right)
{
    string = new char[strlen(right.string) + 1];
    strcpy(string, right.string);
}

myString::~myString()
{
    delete [] string;
}

