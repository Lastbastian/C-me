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
        
            friend ostream& operator<<(ostream& out, const myString& right);
            friend istream& operator>>(istream& in, myString& right);
            
            char operator[](int index) const;          // []overload (value)
            char& operator[](int index);               // []overload (reference)
            
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
        private:
            char *string;
    };
}

#endif

/*
 
 All six of the relational operators (<, <=, >, >=, ==, !=) should be supported. They should be able to compare myString objects to other myStrings as well as myStrings to c-strings. The ordering will be based on ASCII values. You can think of this as essentially alphabetical order; however, because of the way that ASCII values are defined, uppercase letters will always come before lowercase letters, and punctuation will make things even more complicated. Confused? You don't need to worry about any of this: just use the results of calling the strcmp() function. myStrings or c-strings should be able to appear on either side of the comparison operator.

*/