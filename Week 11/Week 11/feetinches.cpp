#include <iostream>

using namespace std;

class feetInches
{
private:
    int feet;
    int inches;
public:
    feetInches(int inFeet = 0, int inInches = 0);       // Constructor
    feetInches addedTo(const feetInches &other) const;  // Member function
    void print() const;
};

feetInches::feetInches(int inFeet, int inInches)
{
    feet = inFeet;
    inches = inInches;
}

feetInches feetInches::addedTo(const feetInches &other) const
{
    feetInches temp;                                    // temp object
    temp.feet = feet + other.feet;
    temp.inches = inches + other.inches;
    return temp;                                        // returning the temp object

}

void feetInches::print() const
{
    cout << feet << " feet, " << inches << " inches" << endl;
}

int main()
{
    feetInches f1, f2(3), f3(4,7);
    
    f1 = f2.addedTo(f3);
    
    f2.print();
    cout << " plus ";
    f3.print();
    cout << " equals ";
    f1.print();
    cout << endl;
}