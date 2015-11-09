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
#include "a12.h"

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
        return fraction(left.numerator * right.denominator + left.denominator * right.numerator, left.denominator * right.denominator);
    }









    fraction operator-(const fraction& left,
                       const fraction& right)
    {
        return fraction(left.numerator * right.denominator - left.denominator * right.numerator, left.denominator * right.denominator);
    }









    fraction operator*(const fraction& left,
                       const fraction& right)
    {
        return fraction(left.numerator * right.numerator, left.denominator * right.denominator);
        
    }









    fraction operator/(const fraction& left,
                       const fraction& right)
    {
        return fraction(left.numerator * right.denominator, left.denominator * right.numerator);
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
        int dummy;
        int whole = 0;
        int numerator = 0;
        int denominator;
        in >> temp;
        if (in.peek() == '+'){
            int whole;
            in >> whole >> dummy >> numerator >> dummy >> denominator;
        } else if (in.peek() == '/'){
            in >> numerator >> dummy >> denominator;
        } else {
            in >> denominator;
        }
        if (whole != 0)
        {
            right.numerator = whole * denominator + numerator;
        } else {
            right.numerator = numerator;
        }
        right.denominator = denominator;
        return in;
    }
}