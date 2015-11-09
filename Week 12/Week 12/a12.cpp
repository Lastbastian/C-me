/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Nov. 1st.
	Instructor: David Harden
	File Name: a11.cpp
 
 This program takes input for a fraction object.  The fraction class contains fuctions that add, subtract, multiply, divide, +=, -=, *=, /=, ++, --, >, >=, <, <=, ==, != fraction objects.
 
 */

#include <iostream>
#include <cassert>
#include "a12.h"

using namespace std;

fraction::fraction(int inNumerator, int inDenominator)
{
    assert(inDenominator != 0);
    numerator = inNumerator;
    denominator = inDenominator;
    simplify();
}









void fraction::simplify()
{
    int end;
    int gcd_value = 1;
    end = numerator / 2 ? numerator < denominator : end = denominator / 2;
    for(int i = 1; i < end; i++ )
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









ostream& operator<<(ostream& out, const fraction& right)
{
    out << right.numerator << "/" << right.denominator;
    return out;
}









istream& operator>>(std::istream& strm, const fraction& right)
{
    strm >> right.numerator;
    strm >> right.denominator;
    return strm;
}