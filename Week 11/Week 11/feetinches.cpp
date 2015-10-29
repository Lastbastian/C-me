// file: feetinches.cpp

#include <iostream>
#include "feetinches.h"

using namespace std;

feetInches::feetInches(int inFeet, int inInches)
{
    feet = inFeet;
    inches = inInches;
    simplify();
}

// Overloading the + operator
feetInches operator+(const feetInches& left,
                     const feetInches& right)
{
    return feetInches(left.feet + right.feet + left.feet + right.feet);
}

// Overloading the cout or << operator
ostream& operator<<(ostream& out, const feetInches& right)
{
    out << right.feet << " feet, " << right.inches << " inches";
    return out;
}


void feetInches::simplify()
{
    if (inches >= 12){
        feet += inches/12;
        inches %= 12;
    } else if (inches < 0){
        feet -= abs(inches)/12 + 1;
        inches = 12 - (abs(inches) % 12);
    }
}

// Overloading the < operator
bool operator<(const feetInches& left,
               const feetInches& right)
{
    if (left.feet < right.feet)
    { return true; }
    if (left.feet > right.feet)
    { return false; }
    return left.inches < right.inches;
}

// Overloading the pre-increment ++operator
feetInches feetInches::operator++()
{
    feet++;
    return *this;
}

// Overloading the post-increment operator++
feetInches feetInches::operator++(int)
{
    feetInches temp(feet, inches);      // declaration statement
    feet++;
    return temp;
}

void feetInches::print() const
{
    cout << feet << " feet, " << inches << " inches" << endl;
}

feetInches feetInches::operator+=(const feetInches& right)
{
    *this = *this + right;
    return *this;
};