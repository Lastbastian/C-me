#include <iostream>
using namespace std;

void getNumber(int *input);
void doubleValue(int *value);

int main()
{
    int number;
    
    getNumber(&number);
    
    doubleValue(&number);
    
    cout << "That value doubled is " << number << "!" << endl;
    return 0;
    
}

// The parameter input is a pointer
void getNumber(int *input)
{
    cout << "Enter an integer number: ";
    cin >> *input;
}

// The parameter value is a pointer (it could be any other name as well)
void doubleValue(int *value)
{
    *value *= 2;
}
