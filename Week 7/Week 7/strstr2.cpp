#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int NUM_PRODS = 5;
    const int LENGTH = 27;
    
    // 2D Array of products
    char products[NUM_PRODS][LENGTH] =
                    { "TC327 31-inch Television",
                        "CD257 CD Player",
                        "TA677 Answering Machine",
                        "CS109 Car Stereo",
                        "PC955 Personal Computer" };
    
    char lookUp[LENGTH];    // To hold user's input
    char *strPtr = NULL;    // To point to the found product
    int index;              // Loop counter
    
    // Prompt user for a product number
    cout << "\tProduct Database\n\n";
    cout << "Enter a product number to begin your search: ";
    cin.getline(lookUp, LENGTH);
    
    // Search the array for a matching substring
    for(index = 0; index < NUM_PRODS; index++)
    {
        strPtr = strstr(products[index], lookUp);
        if (strPtr != NULL)
            break;
    }
    
    // If a matching substring was found, display the product info.
    if (strPtr != NULL)
        cout << "Your search returned: " << products[index] << endl;
    else
        cout << "No matching product was found.\n";
    
    return 0;
}
