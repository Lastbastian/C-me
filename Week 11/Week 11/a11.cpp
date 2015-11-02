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
#include "a11.h"

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




/* OUTPUT
 
 ----- Testing basic fraction creation & printing
 fraction [0] = 4/8
 fraction [1] = -15/21
 fraction [2] = 10/1
 fraction [3] = 12/-3
 fraction [4] = 0/1
 fraction [5] = 28/6
 fraction [6] = 0/12
 
 ----- Testing relational operators between fractions
 Comparing 3/6 to 1/2
	Is left < right? false
	Is left <= right? true
	Is left > right? false
	Is left >= right? true
	Does left == right? true
	Does left != right ? false
 Comparing 1/2 to -15/30
	Is left < right? false
	Is left <= right? false
	Is left > right? true
	Is left >= right? true
	Does left == right? false
	Does left != right ? true
 Comparing -15/30 to 1/10
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
 Comparing 1/10 to 0/1
	Is left < right? false
	Is left <= right? false
	Is left > right? true
	Is left >= right? true
	Does left == right? false
	Does left != right ? true
 Comparing 0/1 to 0/2
	Is left < right? false
	Is left <= right? true
	Is left > right? false
	Is left >= right? true
	Does left == right? true
	Does left != right ? false
 
 ----- Testing relations between fractions and integers
 Comparing -3/6 to 2
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
 1/6 + 1/3 = 9/18
 1/6 - 1/3 = -3/18
 1/6 * 1/3 = 1/18
 1/6 / 1/3 = 3/6
 1/3 + -2/3 = -3/9
 1/3 - -2/3 = 9/9
 1/3 * -2/3 = -2/9
 1/3 / -2/3 = 3/-6
 -2/3 + 5/1 = 13/3
 -2/3 - 5/1 = -17/3
 -2/3 * 5/1 = -10/3
 -2/3 / 5/1 = -2/15
 5/1 + -4/3 = 11/3
 5/1 - -4/3 = 19/3
 5/1 * -4/3 = -20/3
 5/1 / -4/3 = 15/-4
 
 ----- Testing arithmetic between fractions and integers
 -1/2 + 4 = 7/2
 -1/2 - 4 = -9/2
 -1/2 * 4 = -4/2
 -1/2 / 4 = -1/8
 3 + -1/2 = 5/2
 3 - -1/2 = 7/2
 3 * -1/2 = -3/2
 3 / -1/2 = 6/-1
 
 ----- Testing shorthand arithmetic assignment on fractions
 1/6 += 4/1 = 25/6
 25/6 -= 4/1 = 1/6
 1/6 *= 4/1 = 4/6
 4/6 /= 4/1 = 4/24
 4/1 += -1/2 = 7/2
 7/2 -= -1/2 = 16/4
 16/4 *= -1/2 = -16/8
 -16/8 /= -1/2 = -32/-8
 -1/2 += 5/1 = 9/2
 9/2 -= 5/1 = -1/2
 -1/2 *= 5/1 = -5/2
 -5/2 /= 5/1 = -5/10
 
 ----- Testing shorthand arithmetic assignment using integers
 -1/3 += 3 = 8/3
 8/3 -= 3 = -1/3
 -1/3 *= 3 = -3/3
 -3/3 /= 3 = -3/9
 
 ----- Testing increment/decrement prefix and postfix
 Now g = -1/3
 g++ = -1/3
 Now g = 2/3
 ++g = 5/3
 Now g = 5/3
 g-- = 5/3
 Now g = 2/3
 --g = -1/3
 Now g = -1/3
 Program ended with exit code: 0

*/