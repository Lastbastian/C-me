/*
 
 Your class should support the following operations on fraction objects:
 
 Construction of a fraction from two, one, or zero integer arguments. If two arguments, they are assumed to be the numerator and denominator, just one is assumed to be a whole number, and zero arguments creates a zero fraction. Use default parameters so that you only need a single function to implement all three of these constructors.
 
 You should check to make sure that the denominator is not set to 0. The easiest way to do this is to use an assert statement: assert(inDenominator != 0); You can put this statement at the top of your constructor. Note that the variable in the assert() is the incoming parameter, not the data member. In order to use assert(), you must #include <cassert>
 
 For this assignment, you may assume that all fractions are positive. We'll fix that next week.
 
 Printing a fraction to a stream with an overloaded << operator. Next week we will get fancy with this, but for now just print the numerator, a forward-slash, and the denominator. No need to change improper fractions to mixed numbers, and no need to reduce.
 
 All six of the relational operators (<, <=, >, >=, ==, !=) should be supported. They should be able to compare fractions to other fractions as well as fractions to integers. Either fractions or integers can appear on either side of the binary comparison operator. You should only use one function for each operator.
 
 The four basic arithmetic operations (+, -, *, /) should be supported. Again, they should allow fractions to be combined with other fractions, as well as with integers. Either fractions or integers can appear on either side of the binary operator. Only use one function for each operator.
 
 Note that no special handling is needed to handle the case of dividing by a fraction that is equal to 0. If the client attempts to do this, they will get a runtime error, which is the same behavior they would expect if they tried to divide by an int or double that was equal to 0.
 
 The shorthand arithmetic assignment operators (+=, -=, *=, /=) should also be implemented. fractions can appear on the left-hand side, and fractions or integers on the right-hand side.
 
 The increment and decrement (++, --) operators should be supported in both prefix and postfix form for fractions. To increment or decrement a fraction means to add or subtract (respectively) one (1).
 
 Additional Requirements and Hints:
 You will not be graded on documentation on this assignment. You'll be working on the documentation next week.
 The name of your class must be "fraction". No variations will work.
 Use exactly two data members.
 You should not compare two fractions by dividing the numerator by the denominator. This is not guaranteed to give you the correct result every time, because of the way that double values are stored internally by the computer. I would cross multiply and compare the products.
 Don't go to a lot of trouble to find the common denominator (when adding or subtracting). Simply multiply the denominators together.
 The last two bullets bring up an interesting issue: if your denominators are really big, multiplying them together (or cross multiplying) may give you a number that is too big to store in an int variable. This is called overflow. The rule for this assignment is: don't worry about overflow in these two situations.
 My solution has 20 member functions. All of them are less than 4 lines long. I'm not saying yours has to be like this, but it shouldn't be way off.
 Do not use as a resource a supplementary text or website if it includes a fraction class (or rational or ratio or whatever).

 
 */
#include "a11.h"

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

//bool operator<(const fraction& left,
//               const fraction& right)
//{
//    if (left.feet < right.feet)
//    { return true; }
//    if (left.feet > right.feet)
//    { return false; }
//    return left.inches < right.inches;
//}
//
//bool operator<(const fraction& left,
//               const fraction& right)
//{
//    if (left.feet < right.feet)
//    { return true; }
//    if (left.feet > right.feet)
//    { return false; }
//    return left.inches < right.inches;
//}

bool operator==(const fraction& left,
                const fraction&right)
{
    if (left.numerator * right.denominator == left.denominator * right.numerator)
    {
        return true;
    } else {
        return false;
    }
}

