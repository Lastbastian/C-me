#include <iostream>

using namespace std;

int main()
{

    const int NUM_COINS = 5;
    int coins[NUM_COINS] = {5, 10, 25, 50, 1};
    int *intPtr; // always declare point variables with a * at the beginning
    
    intPtr = coins;
    
    cout << "here are the values in the coins array: " << endl;
    // using subscripts with the pointer!
    for (int count = 0; count < NUM_COINS; count++)
    {
        cout << intPtr[count] << endl;
    }
    cout << endl;
    // now using ptr notation with the array name!
    for (int i = 0; i < NUM_COINS; i++)
    {
        cout << *(coins + i) << endl;
        cout << "address is: " << &coins[i] << endl;
    }
}