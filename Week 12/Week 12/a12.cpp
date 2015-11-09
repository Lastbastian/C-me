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
}









void fraction::simplify()
{
    int gcd_value;
    gcd_value = gcd(numerator, denominator);
    numerator = numerator/gcd_value;
    denominator = denominator/gcd_value;
}









int fraction::gcd(int n, int d)
{
    if (d == 0)
    {
        return n;
    } else {
        return gcd(d, n%d);
    }
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