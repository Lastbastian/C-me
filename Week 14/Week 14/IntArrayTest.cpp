// This demonstrates the [] overload opperator
#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{
    const int SIZE = 10;
    
    IntArray table(SIZE);
    
    // Store values in the array
    for(int x = 0; x < SIZE; x++)
        table[x] = (x * 2);
    
    // Display array
    for(int x = 0; x < SIZE; x++)
        cout << table[x] << " ";
    cout << endl;
    
    // Use + operator
    for(int x = 0; x < SIZE; x++)
        table[x] = table[x] + 5;
    
    // Display array again
    for(int x = 0; x < SIZE; x++)
        cout << table[x] << " ";
    cout << endl;
    
    // Use ++ operator
    for(int x = 0; x < SIZE; x++)
        table[x]++;
    
    // Display array again
    for(int x = 0; x < SIZE; x++)
        cout << table[x] << " ";
    cout << endl;
    
    return 0;
}