#include <iostream>
using namespace std;

/* This fraction class's objects represent fractions.
 
 prototypes included:
 
    -- set(int, int)
    This function takes in two integers and initializes a fraction object based on them.
    precondtion: integers are both positive
    postcondition: a fraction object is returned
 
    -- addedTo(anotherFraction)
    This function takes in anotherFraction object and adds it to the calling object.
    precondition: anotherFraction is a fraction object
    postcondition: a fraction object is returned
    
    -- subtract(anotherFaction)
    This function takes in anotherFraction object and subtracts it from the calling object.
    precondition: anotherFraction is a fraction object
    postcondition: a fraction object is returned
 
    -- multipliedBy(anotherFraction)
    This function takes in anotherFraction object and multiplies it by the calling object.
    precondition: anotherFraction is a fraction object
    postcondition: a fraction object is returned
 
    -- dividedBy(anotherFraction)
    This function takes in anotherFraction object and divides the calling object by it.
    preconditions: anotherFraction is a fraction object
    postcondition: a fraction object is returned
 
    -- isEqualTo(anotherFraction)
    This function takes in anotherFaction and compares it to the calling fraction object.
    precondition: anotherFraction is a fraction object
    postcondition: a boolean value of true or false is returned
 
    -- print()
    This function prints a calling fraction object in an easy to read format.
    precondition: the calling object must be a fraction object
 
 */

class fraction
{
    private:
        int numerator;
        int denominator;
    
    public:
        void set(int n, int d);
        fraction addedTo(const fraction &otherFraction) const;  // return type is a fraction object
        fraction subtract(const fraction &otherFraction) const;
        fraction multipliedBy(const fraction &otherFaction) const;
        fraction dividedBy(const fraction &otherFaction) const;
        bool isEqualTo(const fraction &otherFraction) const;
        void print() const;
};









/* The implementation file - 
    Private datamembers are numerator and denomenator.  They are both positive integers.  They represent the numerator and denominator in a fraction.
 */
void fraction::set(int n, int d)
{
    numerator = n;
    denominator = d;
}









void fraction::print() const
{
    cout << numerator << "/" << denominator << endl;
}









fraction fraction::addedTo(const fraction &otherFraction) const
{
    fraction tempFraction;
    
    tempFraction.set(numerator * otherFraction.denominator + denominator * otherFraction.numerator, denominator * otherFraction.denominator);
    return tempFraction;
}









fraction fraction::subtract(const fraction &otherFraction) const
{
    fraction tempFraction;
    
    tempFraction.set(numerator * otherFraction.denominator - denominator * otherFraction.numerator, denominator * otherFraction.denominator);
    return tempFraction;
}









fraction fraction::multipliedBy(const fraction &otherFraction) const
{
    fraction tempFraction;
    
    tempFraction.set(numerator * otherFraction.numerator, denominator * otherFraction.denominator);
    return tempFraction;
}









fraction fraction::dividedBy(const fraction &otherFraction) const
{
    fraction tempFraction;
    
    tempFraction.set(numerator * otherFraction.denominator, denominator * otherFraction.numerator);
    return tempFraction;
}









bool fraction::isEqualTo(const fraction &otherFraction) const
{
    return (numerator * otherFraction.denominator == denominator * otherFraction.numerator);
}









int main()
{
    fraction f1;
    fraction f2;
    fraction result;
    
    f1.set(9, 8);
    f2.set(2, 3);
    
    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;
    
    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;
    
    if (f1.isEqualTo(f2)){
        cout << "The two fractions are equal." << endl;
    } else {
        cout << "The two fractions are not equal." << endl;
    }
}