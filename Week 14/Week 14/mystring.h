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
        
        int length() const;
        
    private:
        char *string;
    };
}

#endif


/*  OUTPUT
 
 ----- Testing basic String creation & printing
 string [0] = Wow
 string [1] = C++ is neat!
 string [2] =
 string [3] = a-z
 
 ----- Testing access to characters (using const)
 Whole string is abcdefghijklmnopqsrtuvwxyz
 now char by char: abcdefghijklmnopqsrtuvwxyz
 ----- Testing access to characters (using non-const)
 Start with abcdefghijklmnopqsrtuvwxyz and convert to ABCDEFGHIJKLMNOPQSRTUVWXYZ
 
 ----- Testing relational operators between myStrings
 Comparing app to apple
 Is left < right? true
 Is left <= right? true
 Is left > right? false
 Is left >= right? false
 Does left == right? false
 Does left != right ? true
 Comparing apple to
 Is left < right? false
 Is left <= right? false
 Is left > right? true
 Is left >= right? true
 Does left == right? false
 Does left != right ? true
 Comparing  to Banana
 Is left < right? true
 Is left <= right? true
 Is left > right? false
 Is left >= right? false
 Does left == right? false
 Does left != right ? true
 Comparing Banana to Banana
 Is left < right? false
 Is left <= right? true
 Is left > right? false
 Is left >= right? true
 Does left == right? true
 Does left != right ? false
 
 ----- Testing relations between myStrings and char *
 Comparing he to hello
 Is left < right? true
 Is left <= right? true
 Is left > right? false
 Is left >= right? false
 Does left == right? false
 Does left != right ? true
 Comparing why to wackity
 Is left < right? false
 Is left <= right? false
 Is left > right? true
 Is left >= right? true
 Does left == right? false
 Does left != right ? true
 
 ----- Testing copy constructor and operator= on myStrings
 original is cake, copy is fake
 original is cake, copy is fake
 after self assignment, copy is Copy Cat
 Testing pass & return myStrings by value and ref
 after calling Append, sum is Binky
 val is winky
 after assign,  val is Binky
 Program ended with exit code: 0
 
 */