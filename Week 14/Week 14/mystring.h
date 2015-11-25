/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Nov. 22nd.
	Instructor: David Harden
	File Name: mystring.h
 
 
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Nov. 8th.
	Instructor: David Harden
	File Name: fraction.h
 
 This program takes input for a string object.  The mystring class contains fuctions to make it easier to work with c-strings.  The mystring class functions behind the scenes as a c-string.
 
 prototypes included:
 
 myString() - constructor function
 precondition: none
 postcondition: a myString object is returned.
 
 myString(const char *inString) - default constructor function
 precondition: an input c-string.
 postcondition: a myString object is returned.
 
 myString(const myString& right) - copy constructor function
 precondition: a myString object
 postcondition: a myString object is returned
 
 ~myString() - destructor function
 precondition: a myString object
 postcondition: a myString object is returned with an unallocated c-string array.
 
 friend ostream& operator<<(ostream& out, const myString& right) - insertion operator
 precondition: a myString object to output
 postcondition: an easy to read string format
 
 friend istream& operator>>(istream& in, myString& right) - extraction operator
 precondition: an input stream
 postcondition: a myString object is returned
 
 char operator[](int index) const - overload [] operator (value)
 precondition: a myString object passed as a value
 postcondition: a character from myString is returned
 
 char& operator[](int index) - overload [] operator (reference)
 precondition: a myString object passed as reference
 postcondition: a character from myString is returned
 
 friend myString operator+(const myString& left, const myString& right) - overload + operator to allow concatenation
 precondition: a myString object
 postcondition: a myString object is returned
 
 myString operator+=(const myString& right) - overload += operator to allow += concatenation
 precondition: a myString object
 postcondition: a myString object is returned
 
 friend bool operator<(const myString &left, const myString &right)
 precondition: two myString objects to compare using the strcmp function
 postcondition: a boolean is returned
 
 friend bool operator<=(const myString &left, const myString &right)
 precondition: two myString objects to compare using the strcmp function
 postcondition: a boolean is returned
 
 friend bool operator>(const myString &left, const myString &right)
 precondition: two myString objects to compare using the strcmp function
 postcondition: a boolean is returned
 
 friend bool operator>=(const myString &left, const myString &right)
 precondition: two myString objects to compare using the strcmp function
 postcondition: a boolean is returned
 
 friend bool operator==(const myString &left, const myString &right);
 precondition: two myString objects to compare using the strcmp function
 postcondition: a boolean is returned
 
 friend bool operator!=(const myString &left, const myString &right);
 precondition: two myString objects to compare using the strcmp function
 postcondition: a boolean is returned
 
 int length() const
 precondition: a myString object
 postcondition: returns an int value representing the length of the string
 
 void read(istream& in, char)
 precondition: a myString object
 postcondition: void function
 
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
 
 ----- Testing basic String creation & printing
 string [0] = Wow
 string [1] = C++ is neat!
 string [2] =
 string [3] = a-z
 
 ----- Now reading myStrings from file
 
 ----- first, word by word
 Read string = The
 Read string = first
 Read string = time
 Read string = we
 Read string = will
 Read string = read
 Read string = individual
 Read string = words,
 Read string = next
 Read string = we
 Read string = read
 Read string = whole
 Read string = lines
 
 ----- now, line by line
 Read string = The  first  time  we  will
 Read string = read individual words, next
 Read string = we read whole lines
 
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
 
 ----- Testing concatentation on myStrings
 outrageous + milk = outrageousmilk
 milk +  = milk
 + cow = cow
 cow + bell = cowbell
 
 ----- Testing concatentation between myString and char *
 abcde + XYZ = abcdeXYZ
 XYZ + abcde = XYZabcde
 
 ----- Testing shorthand concat/assign on myStrings
 who += what = whowhatandwhowhat
 what += WHEN = whatWHENandwhatWHEN
 WHEN += Where = WHENWhereandWHENWhere
 Where += why = WherewhyandWherewhy
 
 ----- Testing shorthand concat/assign using char *
 I love  += programming = I love programming
 
 ----- Testing copy constructor and operator= on myStrings
 original is cake, copy is fake
 original is cake, copy is fake
 after self assignment, copy is Copy Cat
 Testing pass & return myStrings by value and ref
 after calling Append, sum is BinkyBoo
 val is winky
 after assign,  val is BinkyBoo
 Program ended with exit code: 0

*/