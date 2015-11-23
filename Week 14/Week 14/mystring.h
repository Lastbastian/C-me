/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Nov. 22nd.
	Instructor: David Harden
	File Name: mystring.h
 */


#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>

using namespace std;


namespace cs_mystring
{
    class myString
    {
    public:
        myString();
        myString(const char *inString);                 // default constructor
        
        myString(const myString& right);                // copy constructor
        
        ~myString();                                    // destructor
        
        myString operator=(const myString& right);      // assignment opperator
        
        // insertion operator
        friend ostream& operator<<(ostream& out, const myString& right);
        // extraction operator
        friend istream& operator>>(istream& in, myString& right);
        
        char operator[](int index) const;               // []overload (value)
        char& operator[](int index);                    // []overload (reference)
        
        friend myString operator+(const myString& left,
                                  const myString& right);
        myString operator+=(const myString& right);
        
        friend bool operator<(const myString &left,
                              const myString &right);
        friend bool operator<=(const myString &left,
                               const myString &right);
        friend bool operator>(const myString &left,
                              const myString &right);
        friend bool operator>=(const myString &left,
                               const myString &right);
        friend bool operator==(const myString &left,
                               const myString &right);
        friend bool operator!=(const myString &left,
                               const myString &right);
    
        int length() const;
        void read(istream& in, char);
        
        
    private:
        char *string;
    };
}

#endif

/* OUTPUT


*/