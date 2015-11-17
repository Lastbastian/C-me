#ifndef A13
#define A13
#include <iostream>

namespace cs_mystring
{
    class myString
    {
    public:
        char *string;
        
    private:
        myString();
        myString(const char *inString);                 // default constructor
        myString(const myString& right);                // copy constructor
        ~myString();                                    // destructor
        myString operator=(const myString& right);      // assignment opperator
        
        
        friend std::ostream& operator<<(std::ostream& out, const myString& source);
        friend std::istream& operator>>(std::istream& in, myString& target);
        char operator[](int index) const;          // []overload (value)
        char& operator[](int index);               // []overload (reference)
    
    
    };
}




#endif