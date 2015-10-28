#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    
    // Price of parts.
    
    const double A_PRICE = 249.0, B_PRICE = 299.0;
    
    // Char array for part number.
    
    const int PART_LENGTH = 8;
    char partNum[PART_LENGTH];
    
    // Instruct the user to enter a part number.
    
    cout << "The stereo part numbers are:\n"
        << "\tBoom Box, part number S147-29A\n"
        << "\tShelf Model, part number S147-29B\n"
        << "Enter the part number of the stereo to purchase: ";
    
    // Read a part number of at most 8 characters
    
    cin >> partNum;
    
    // Determine what user entered using strcmp and print the price
    
    cout << showpoint << fixed << setprecision(2);
    if (strcmp(partNum, "S147-29A") == 0)
        cout << "the price is $" << A_PRICE << endl;
    else if (strcmp(partNum, "S147-29B") == 0)
        cout << "the price is $" << B_PRICE << endl;
    else
        cout << partNum << " is not a valid number.\n";
    return 0;
}