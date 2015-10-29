#include <iostream>

using namespace std;

class feetInches
{
private:
    int feet;
    int inches;
    void simplify();
public:
    feetInches(int inFeet = 0, int inInches = 0);       // Constructor
    feetInches operator+(const feetInches &other) const;
    feetInches operator++();                            // Pre-increment overload function
    feetInches operator++(int);                         // Post-increment overload function
    void print() const;
    
    // friend function
    friend ostream& operator<<(ostream& out, const feetInches &printMe);
};

feetInches::feetInches(int inFeet, int inInches)
{
    feet = inFeet;
    inches = inInches;
}

// Overloadint the THE + OPERATOR FOR THE feetInches class
feetInches feetInches::operator+(const feetInches &other) const
{
    feetInches temp;
    temp.feet = feet + other.feet;
    temp.inches = inches + other.inches;
    return temp;
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
    feetInches temp(feet, inches);
    feet++;
    return temp;
}

void feetInches::print() const
{
    cout << feet << " feet, " << inches << " inches" << endl;
}

ostream& operator<<(ostream& out, const feetInches &printMe)
{
    out << printMe.feet << " feet, " << printMe.inches << " inches ";

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

int main()
{
    feetInches f1, f2(3), f3(4,7);
    
    f1 = f2 + f3;
    
    f2.print();
    cout << " plus ";
    f3.print();
    cout << " equals ";
    f1.print();
    cout << endl;
    
    (f1++).print();
    cout << endl;
    (++f1).print();
    cout << endl;
    f1.print();
}