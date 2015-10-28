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

int main()
{
    
    


}