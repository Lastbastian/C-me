/* This fraction class's objects represent fractions.
 
 prototypes included:
 
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
 
 -- simplify()
 This function simplifies the calling fraction object.
 precondition: is called by a fraction object
 postcondition: a fraction object is returned
 
 -- fraction()
 This function is the default constructor
 precondition: called by a fraction object w/o any arguments
 postcondition: a fraction object is returned initilized to 0/1
 
 -- fraction(int n, int d)
 This function is a constructor object with arguments
 precondition: called by a fraction object with arguments
 postcondition: a fraction object is returned 
 
 */

#ifndef __Week_10__fraction__
#define __Week_10__fraction__

#include <iostream>

class fraction
{
private:
    int numerator;
    int denominator;
    
public:
    fraction addedTo(const fraction &otherFraction) const;  // Return type is a fraction object
    fraction subtract(const fraction &otherFraction) const;
    fraction multipliedBy(const fraction &otherFaction) const;
    fraction dividedBy(const fraction &otherFaction) const;
    bool isEqualTo(const fraction &otherFraction) const;
    void print() const;
    void simplify();
    fraction();                                             // Default constructor
    fraction(int n, int d);                                 // Constructor w/arguments
};

#endif /* defined(__Week_10__fraction__) */

/*

[15 points] Delete your set() function. Add two constructors, a default constructor that assigns the value 0 to the fraction, and a constructor that takes two parameters. The first parameter will represent the initial numerator of the fraction, and the second parameter will represent the initial denominator of the fraction.

Since fractions cannot have denominators of 0, the default constructor should assign 0 to the numerator and 1 to the denominator.
 
 [15 points] Add the const keyword to your class wherever appropriate. Your class may still work correctly even if you don't do this correctly, so this will require extra care!!
 
 [5 points] Add a private "simplify()" function to your class and call it from the appropriate member functions. (There will probably be 5 places where you need to call it.) The best way to do this is to make the function a void function with no parameters that reduces the calling object.
 
 As you can see from the sample output given below, you are still not required to change improper fractions into mixed numbers for printing. Just print it as an improper fraction. Make sure that your class will reduce ANY fraction, not just the fractions that are tested in the provided client program. Fractions should not be simply reduced upon output, they should be stored in reduced form at all times. In other words, you should ensure that all fraction objects are reduced before the end of any member function. You are also not required to deal with negative numbers, either in the numerator or the denominator.
 
 You must create your own algorithm for reducing fractions. Don't look up an already existing algorithm for reducing fractions or finding GCF. The point here is to have you practice solving the problem on your own. In particular, don't use Euclid's algorithm. Don't worry about being efficient. It's fine to have your function check every possible factor, even if it would be more efficient to just check prime numbers. Just create something of your own that works correctly on ANY fraction.
 
 Note: this part of the assignment is worth 5 points. If you are having trouble keeping up with the class, I suggest you skip this part and take the 5 point deduction.
 
 [10 points] Put the client program in a separate file from the class, and divide the class into specification file (fraction.h) and implementation file (fraction.cpp), so your code will be in 3 separate files.

*/