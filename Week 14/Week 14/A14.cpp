/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Nov. 22nd.
	Instructor: David Harden
	File Name: A14.cpp
 
  Class Invariant: private data members is string which is used to construct a myString object.
 
 */

#include <iostream>
#include <cassert>
#include "mystring.h"
using namespace std;

namespace cs_mystring
{
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
    
    
    
    
    
    
    
    
    
    
    
    myString myString::operator=(const myString &right)
    {
        if (this != &right){
            delete [] string;
            string = new char[strlen(right.string) + 1];
            strcpy(string, right.string);
        }
        return *this;
    }
    
    
    
    
    
    
    
    
    
    ostream& operator<<(ostream& out, const myString& right)
    {
        out << right.string;
        return out;
    }
    
    
    
    
    
    
    
    
    
    istream& operator>>(istream& in, myString& right)
    {
        while (isspace(in.peek())){
            in.ignore();
        }
        
        char temp[128];
        in.getline(temp, 127, ' ');
        delete [] right.string;
        right.string = new char[strlen(temp) + 1];
        strcpy(right.string, temp);
        
        return in;
    }
    
    
    
    
    
    
    
    
    
    // []overload (value)
    char myString::operator[](int index) const
    {
        assert(index >= 0 && index < strlen(string));
        return string[index];
    }
    
    
    
    
    
    
    
    
    
    
    
    
    // []overload (reference)
    char& myString::operator[](int index)
    {
        assert(index >= 0 && index < strlen(string));
        return string[index];
    }
    
    
    
    
    
    
    
    
    
    myString operator+(const myString& left,
                                 const myString& right)
    {
        myString tempString;
        delete [] tempString.string;
        tempString.string = new char[strlen(right.string) + 1 + strlen(left.string) + 1];
        strcpy(tempString.string, left.string);
        strcat(tempString.string, right.string);
        
        return tempString;
    }
    
    
    myString myString::operator+=(const myString& right)
    {
        *this = *this + right;
        return *this;
    };
    
    
    
    
    
    
    
    
    
    bool operator<(const myString& left,
                   const myString& right)
    {
        if(strcmp(left.string, right.string) < 0)
        {
            return true;
        } else {
            return false;
        }
    }
    
    
    
    
    
    
    
    
    
    bool operator<=(const myString& left,
                    const myString& right)
    {
        if(strcmp(left.string, right.string) < 0 || strcmp(left.string, right.string) == 0)
        {
            return true;
        } else
            return false;
    }
    
    
    
    
    
    
    
    
    
    bool operator>(const myString& left,
                   const myString& right)
    {
        if(strcmp(left.string, right.string) > 0)
        {
            return true;
        } else {
            return false;
        }
    }
    
    
    
    
    
    
    
    
    
    bool operator>=(const myString& left,
                    const myString& right)
    {
        if(strcmp(left.string, right.string) > 0 || strcmp(left.string, right.string) == 0)
        {
            return true;
        } else
            return false;
    }
    
    
    
    
    
    
    
    
    
    bool operator!=(const myString& left,
                    const myString& right)
    {
        if(strcmp(left.string, right.string) == 0)
        {
            return false;
        } else {
            return true;
        }
    }
    
    
    
    
    
    
    
    
    
    bool operator==(const myString& left,
                    const myString& right)
    {
        if(strcmp(left.string, right.string) == 0)
        {
            return true;
        } else {
            return false;
        }
    }
    
    
    
    
    
    
    
    
    
    int myString::length() const
    {
        return strlen(string);
    }
    
    
    
    
    
    
    
    
    
    void myString::read(istream& in, char delChar)
    {
        while (isspace(in.peek())){
            in.ignore();
        }
        
        char temp[128];
        in.getline(temp, 127, delChar);
        strcpy(string, temp);
    }
}