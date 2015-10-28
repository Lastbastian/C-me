/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Sunday, Oct 25th.
	Instructor: David Harden
	File Name: a10.cpp / fraction.cpp
 
 This program takes input for a fraction object.  The fraction class contains fuction that add, subtract, multiply, and divide the fraction two fraction objects.
 
 */

#include "fraction.h"
#include <iostream>

using namespace std;
/* The implementation file -
 Private datamembers are numerator and denomenator.  They are both positive integers.  They represent the numerator and denominator in a fraction.
 */
void fraction::simplify()
{

}









void fraction::print() const
{
    cout << numerator << "/" << denominator << endl;
}









fraction fraction::addedTo(const fraction &otherFraction) const
{
    return fraction(numerator * otherFraction.denominator + denominator * otherFraction.numerator, denominator * otherFraction.denominator);
}









fraction fraction::subtract(const fraction &otherFraction) const
{
    return fraction(numerator * otherFraction.denominator - denominator * otherFraction.numerator, denominator * otherFraction.denominator);
}









fraction fraction::multipliedBy(const fraction &otherFraction) const
{
    return fraction(numerator * otherFraction.numerator, denominator * otherFraction.denominator);
}









fraction fraction::dividedBy(const fraction &otherFraction) const
{
    return fraction(numerator * otherFraction.denominator, denominator * otherFraction.numerator);
}









bool fraction::isEqualTo(const fraction &otherFraction) const
{
    return (numerator * otherFraction.denominator == denominator * otherFraction.numerator);
}









fraction::fraction()
{
    numerator = 0;
    denominator = 1;
}









fraction::fraction(int n, int d)
{
    numerator = n;
    denominator = d;
}