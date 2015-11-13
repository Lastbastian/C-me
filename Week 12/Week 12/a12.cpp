/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Nov. 8th.
	Instructor: David Harden
	File Name: a12.cpp
 
 This program takes input for a fraction object.  The fraction class contains fuctions that add, subtract, multiply, divide, +=, -=, *=, /=, ++, --, >, >=, <, <=, ==, != fraction objects.
 
 Class Invariant: private data members are numerator, denominator which are used to construct a fraction object.  A simply function is also available to help store all fractions in lowest terms.
 */

#include <iostream>
#include <cassert>
#include <cmath>
#include <fstream>
#include "fraction.h"

using namespace std;

namespace cs_fraction {

    fraction::fraction(int inNumerator, int inDenominator)
    {
        assert(inDenominator != 0);
        numerator = inNumerator;
        denominator = inDenominator;
        simplify();
    }








// Simplify returns a simplified fraction object.
    void fraction::simplify()
    {
        int end;
        int gcd_value = 1;
        if (denominator < 0){
            numerator *= -1;
            denominator *= -1;
        }
        if (numerator < denominator)
        {
            end = abs(numerator);
        } else
        {
            end = abs(denominator);
        }
        for(int i = 1; i <= end; i++ )
        {
            if( numerator % i == 0 && denominator % i == 0)
                gcd_value = i;
        }
        numerator = numerator/gcd_value;
        denominator = denominator/gcd_value;
    }


//Your simplify() function should also ensure that the denominator is never negative. If the denominator is negative, fix this by multiplying numerator and denominator by -1.






    fraction fraction::operator++() // ++g
    {
        numerator += denominator;
        return *this;
    }









    fraction fraction::operator++(int) // g++
    {
        fraction temp(numerator,denominator);
        numerator += denominator;
        return temp;
    }









    fraction fraction::operator--() // --g
    {
        numerator -= denominator;
        return *this;
    }









    fraction fraction::operator--(int) // g--
    {
        fraction temp(numerator, denominator);
        numerator -= denominator;
        return temp;
    }









    fraction fraction::operator+=(const fraction& right)
    {
        *this = *this + right;
        return *this;
    };









    fraction fraction::operator-=(const fraction& right)
    {
        *this = *this - right;
        return *this;
    }









    fraction fraction::operator*=(const fraction& right)
    {
        *this = *this * right;
        return *this;
    }









    fraction fraction::operator/=(const fraction& right)
    {
        *this = *this / right;
        return *this;
    }









    fraction operator+(const fraction& left,
                       const fraction& right)
    {
        fraction tempFraction;
        tempFraction.numerator = left.numerator * right.denominator + left.denominator * right.numerator;
        tempFraction.denominator = left.denominator * right.denominator;
        
        tempFraction.simplify();
        return tempFraction;
    }









    fraction operator-(const fraction& left,
                       const fraction& right)
    {
        fraction tempFraction;
        tempFraction.numerator = left.numerator * right.denominator - left.denominator * right.numerator;
        tempFraction.denominator = left.denominator * right.denominator;
        
        tempFraction.simplify();
        return tempFraction;
    }









    fraction operator*(const fraction& left,
                       const fraction& right)
    {
        fraction tempFraction;
        tempFraction.numerator = left.numerator * right.numerator,
        tempFraction.denominator = left.denominator * right.denominator;
        
        tempFraction.simplify();
        return tempFraction;
    }









    fraction operator/(const fraction& left,
                       const fraction& right)
    {
        fraction tempFraction;
        tempFraction.numerator = left.numerator * right.denominator;
        tempFraction.denominator = left.denominator * right.numerator;
        
        tempFraction.simplify();
        return tempFraction;
    }









    bool operator<(const fraction& left,
                   const fraction& right)
    {
        return left.numerator * right.denominator < right.numerator * left.denominator;
    }





    bool operator<=(const fraction& left,
                    const fraction& right)
    {
        return left.numerator * right.denominator <= right.numerator * left.denominator;
    }









    bool operator>(const fraction& left,
                   const fraction& right)
    {
        return left.numerator * right.denominator > right.numerator * left.denominator;
    }









    bool operator>=(const fraction& left,
                    const fraction& right)
    {
        return left.numerator * right.denominator >= right.numerator * left.denominator;
    }









    bool operator==(const fraction& left,
                    const fraction&right)
    {
        return left.numerator * right.denominator == right.numerator * left.denominator;
    }









    bool operator!=(const fraction& left,
                    const fraction&right)
    {
        return left.numerator * right.denominator != right.numerator * left.denominator;
    }








// Function converts improper and regualar fraction objects to mixed(if needed) fractions and outputs in an easy to read format.
    ostream& operator<<(ostream& out, const fraction& right)
    {
        if (right.numerator == 0)
        {
            out << 0;
        } else if (right.denominator == 1 || right.denominator == -1)
        {
            out << right.numerator * right.denominator;
        } else if (right.numerator >= right.denominator)
        {
            out << right.numerator / right.denominator << "+" << right.numerator - (right.numerator / right.denominator) * right.denominator << "/" << right.denominator;
        } else {
            out << right.numerator << "/" << right.denominator;
        }
        return out;
    }








// Function reads insertion stream and converts mixed fractions to improper fractions to store as fraction objects.
    istream& operator>>(std::istream& in, fraction& right)
    {
        int temp;
        char dummy;
        int whole = 0;
        int numerator = 0;
        int denominator;
        
        in >> temp;
        if (in.peek() == '+'){
            
//            3+1/4
            
            in >> whole >> dummy >> numerator >> dummy >> denominator;
        } else if (in.peek() == '/'){
            
//            10/4
            
            in >> numerator >> dummy >> denominator;
        } else {
            in >> numerator;
        }
        if (whole != 0){
            right.numerator = whole * denominator + numerator;
        } else {
            right.numerator = numerator;
        }
        right.denominator = denominator;
        
        return in;
    }
}









/*  OUTPUT
 
 
 ----- Testing basic fraction creation & printing
 (fractions should be in reduced form, and as mixed numbers.)
 fraction [0] = 1/2
 fraction [1] = -5/7
 fraction [2] = 10
 fraction [3] = -4
 fraction [4] = 0
 fraction [5] = 4+2/3
 fraction [6] = 0
 
 ----- Now reading fractions from file
 Read fraction = 0
 
 ----- Testing relational operators between fractions
 Comparing 1/2 to 1/2
	Is left < right? false
	Is left <= right? true
	Is left > right? false
	Is left >= right? true
	Does left == right? true
	Does left != right ? false
 Comparing 1/2 to -1/2
	Is left < right? false
	Is left <= right? false
	Is left > right? true
	Is left >= right? true
	Does left == right? false
	Does left != right ? true
 Comparing -1/2 to 1/10
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
 Comparing 1/10 to 0
	Is left < right? false
	Is left <= right? false
	Is left > right? true
	Is left >= right? true
	Does left == right? false
	Does left != right ? true
 Comparing 0 to 0
	Is left < right? false
	Is left <= right? true
	Is left > right? false
	Is left >= right? true
	Does left == right? true
	Does left != right ? false
 
 ----- Testing relations between fractions and integers
 Comparing -1/2 to 2
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
 Comparing -3 to 1/4
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
 
 ----- Testing binary arithmetic between fractions
 1/6 + 1/3 = 1/2
 1/6 - 1/3 = -1/6
 1/6 * 1/3 = 1/18
 1/6 / 1/3 = 1/2
 1/3 + -2/3 = -1/3
 1/3 - -2/3 = 1
 1/3 * -2/3 = -2/9
 1/3 / -2/3 = -1/2
 -2/3 + 5 = 4+1/3
 -2/3 - 5 = -17/3
 -2/3 * 5 = -10/3
 -2/3 / 5 = -2/15
 5 + -4/3 = 3+2/3
 5 - -4/3 = 6+1/3
 5 * -4/3 = -20/3
 5 / -4/3 = -15/4
 
 ----- Testing arithmetic between fractions and integers
 -1/2 + 4 = 3+1/2
 -1/2 - 4 = -9/2
 -1/2 * 4 = -2
 -1/2 / 4 = -1/8
 3 + -1/2 = 2+1/2
 3 - -1/2 = 3+1/2
 3 * -1/2 = -3/2
 3 / -1/2 = -6
 
 ----- Testing shorthand arithmetic assignment on fractions
 1/6 += 4 = 4+1/6
 4+1/6 -= 4 = 1/6
 1/6 *= 4 = 2/3
 2/3 /= 4 = 1/6
 4 += -1/2 = 3+1/2
 3+1/2 -= -1/2 = 4
 4 *= -1/2 = -2
 -2 /= -1/2 = 4
 -1/2 += 5 = 4+1/2
 4+1/2 -= 5 = -1/2
 -1/2 *= 5 = -5/2
 -5/2 /= 5 = -1/2
 
 ----- Testing shorthand arithmetic assignment using integers
 -1/3 += 3 = 2+2/3
 2+2/3 -= 3 = -1/3
 -1/3 *= 3 = -1
 -1 /= 3 = -1/3
 
 ----- Testing increment/decrement prefix and postfix
 Now g = -1/3
 g++ = -1/3
 Now g = 2/3
 ++g = 1+2/3
 Now g = 1+2/3
 g-- = 1+2/3
 Now g = 2/3
 --g = -1/3
 Now g = -1/3
 Program ended with exit code: 0    


*/