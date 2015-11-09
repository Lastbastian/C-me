/* 

	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Nov. 8th.
	Instructor: David Harden
	File Name: a12.cpp
 
 This program takes input for a fraction object.  The fraction class contains fuctions that +, -, *, /, +=, -=, *=, /=, ++, --, >, >=, <, <=, ==, != fraction objects.
 
 prototypes included:
 
 fraction(int inNumerator = 0, int inDenominator = 1)  - constructor function
 precondition: integer numerator and denominator
 postcondition: a fraction object is returned screen
 
 fraction operator++();
 precondition: a fraction object or increment integer - prefix operator
 postcondition an incremented fraction object is returned to the screen
 
 fraction operator++(int);
 precondition: a fraction object or increment integer - postfix operator
 postcondition an incremented fraction object is returned to the screen
 
 fraction operator--();
 precondition: a fraction object or deincrement integer - prefix operator
 postcondition a decremented fraction object is returned to the screen
 
 fraction operator--(int);
 precondition: a fraction object - postfix operator
 postcondition a decrementd fraction object is returned to the screen
 
 fraction operator+=(const fraction& right);
 precondition: a fraction object or integer can the += function
 postcondition a fraction object is returned to the screen
 
 
 fraction operator-=(const fraction& right);
 precondition: a fraction object to perform the -= function
 postcondition a fraction object is returned to the screen
 
 fraction operator*=(const fraction& right);
 precondition: a fraction object to perform the *= function
 postcondition a fraction object is returned to the screen
 
 fraction operator/=(const fraction& right);
 precondition: a fraction object to perform the /= function
 postcondition a fraction object is returned to the screen
 
 friend fraction operator+(const fraction& left, const fraction& right);
 precondition: two fraction objects will be added
 postcondition a fraction object is returned to the screen
 
 friend fraction operator-(const fraction& left, const fraction& right);
 precondition: two fraction objects to be subtracted
 postcondition a fraction object is returned to the screen
 
 friend fraction operator*(const fraction& left, const fraction& right);
 precondition: two fraction objects to be multiplied
 postcondition a fraction object is returned to the screen
 
 friend fraction operator/(const fraction& left, const fraction& right);
 precondition: two fraction objects to be divided
 postcondition a fraction object is returned to the screen
 
 friend bool operator<(const fraction &left, const fraction &right);
 precondition: two fraction objects to be compared
 postcondition: boolean is returned
 
 friend bool operator<=(const fraction &left, const fraction &right);
 precondition: two fraction objects to be compared
 postcondition: boolean is returned
 
 friend bool operator>(const fraction &left, const fraction &right);
 precondition: two fraction objects to be compared
 postcondition: boolean is returned
 
 friend bool operator>=(const fraction &left,
 const fraction &right);
 precondition: two fraction objects to be compared
 postcondition: boolean is returned
 
 friend bool operator==(const fraction &left,
 const fraction &right);
 precondition: two fraction objects to be compared
 postcondition: boolean is returned
 
 friend bool operator!=(const fraction &left,
 const fraction &right);
 precondition: two fraction objects to be compared
 postcondition: boolean is returned
 
 friend std::ostream& operator<<(std::ostream& out,
 const fraction& right);
 precondition: stream insertion using fraction objects
 postcondition: returns a formatted output
 
 friend std::istream& operator>>(std::istream& in,
 fraction& right);
 precondition: input stream to create fraction object
 postcondition: returns a fraction object
 
 */

#ifndef A12
#define A12
#include <iostream>

namespace cs_fraction
{
    class fraction
    {
    private:
        int numerator;
        int denominator;
        void simplify();
        
    public:
        fraction(int inNumerator = 0, int inDenominator = 1);             // Initilization constructor
        fraction operator++();
        fraction operator++(int);
        fraction operator--();
        fraction operator--(int);
        fraction operator+=(const fraction& right);
        fraction operator-=(const fraction& right);
        fraction operator*=(const fraction& right);
        fraction operator/=(const fraction& right);
        
        friend fraction operator+(const fraction& left,
                                  const fraction& right);
        friend fraction operator-(const fraction& left,
                                  const fraction& right);
        friend fraction operator*(const fraction& left,
                                  const fraction& right);
        friend fraction operator/(const fraction& left,
                                  const fraction& right);
        
        friend bool operator<(const fraction &left,
                              const fraction &right);
        friend bool operator<=(const fraction &left,
                               const fraction &right);
        friend bool operator>(const fraction &left,
                              const fraction &right);
        friend bool operator>=(const fraction &left,
                               const fraction &right);
        friend bool operator==(const fraction &left,
                               const fraction &right);
        friend bool operator!=(const fraction &left,
                               const fraction &right);
        
        friend std::ostream& operator<<(std::ostream& out,
                                        const fraction& right);
        friend std::istream& operator>>(std::istream& in,
                                        fraction& right);
    };
}
#endif