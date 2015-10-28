#include <iostream>


using namespace std;

int countChars(char *, char); // Function Prototype

int main()
{

    const int SIZE = 51;    // Array size
    char userString[SIZE];  // Array to hold string
    char letter;            // The character to count
    
    // Get a string from the user.
    cout << "Enter a string (up to 50 characters): ";
    cin.getline(userString, SIZE);
    
    // Choose a character to cout.
    cout << "Enter a character to count in the string: ";
    cin >> letter;
    
    // Display the number of times the character occurs
    cout << letter << " appears ";
    cout << countChars(userString, letter) << " times.\n";
    return 0;
}

int countChars(char *strPtr, char ch)
{
    int times = 0;          // Counter for number of times.
    
    // Step throught the string counting occurrences of ch.
    
    while (*strPtr != '\0')
    {
        if (*strPtr == ch)  // if the current character equals ch
            times++;         // increment the counter
            strPtr++;        // go to the next character in the string
    }
    return times;
}