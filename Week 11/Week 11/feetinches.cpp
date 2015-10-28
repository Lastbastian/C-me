#include <iostream>

using namespace std;

class feetInches
{
private:
    int feet;
    int inches;
public:
    feetInches(int inFeet = 0, int inInches = 0);       // Constructor
    feetInches operator+(const feetInches &other) const;
    feetInches operator++();
    void print() const;
};

feetInches::feetInches(int inFeet, int inInches)
{
    feet = inFeet;
    inches = inInches;
}

// OVERLOADING THE + OPERATOR FOR THE feetInches class
feetInches feetInches::operator+(const feetInches &other) const
{
    feetInches temp;
    temp.feet = feet + other.feet;
    temp.inches = inches + other.inches;
    return temp;
}

feetInches feetInches::operator++()
{
    feet++;
    return *this;
}

void feetInches::print() const
{
    cout << feet << " feet, " << inches << " inches" << endl;
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
    
    (++f1).print();
    cout << endl;
    f1.print();
}