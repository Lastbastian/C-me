#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;


// Function Prototypes
int lastIndexOf(const char* inString, char target);
void reverse(char* inString);
int replace(char* inString, char target, char replacementChar);
int findSubstring(const char* inString, const char substring[]);
bool isPalindrome(const char* inString);
void toupper(char* inString);
int numLetters(const char* inString);

int main()
{
    const int SIZE = 51;    // Array size
    char inString[SIZE];    // Array to hold string
    char target;            // The character to count
    char replacementChar;
    char substring[SIZE];
    int num;
    
    // Enter a string to process.
    cout << "Enter a string (up to 50 characters): ";
    cin.getline(inString, SIZE);
    
//    // Choose a character and the last occurance will be found.
//    cout << "Enter a character to find and later replace: ";
//    cin >> target;
//
//    // Display the last index of where the char is found in the string or -1 if NULL
//    cout << target << " last appears at index " << lastIndexOf(inString, target) << "." << endl;
//    
//    // Display the string reversed.
//    reverse(inString);
//    cout << "The string reversed: " << inString << endl;
//
//    // Choose a character to replace target with.
//    cout << "Now, enter a replacement character to replace " << target << " with: ";
//    cin >> replacementChar;
//
//    // Display string with replacement character and number of replacements. If none return 0.
//    cout << target << " was replaced " << replace(inString, target, replacementChar) << " times." << endl;
//    cout << "Replacement string: " << inString << endl;

//    // Choose a substring to search for in string
//    cout << "Now, enter a substring to search for in the reversed string: ";
//    cin.getline(substring, 10);
//    
//    // Display the results
//    cout << "The substring " << substring << ", first appears at index: " << findSubstring(inString, substring) << endl;
//    
//    // Display palindrom test results
//    if(isPalindrome(inString))
//        {cout << "The string is a palindrome" << endl;}
//    else
//        {cout << "The string is not a palindrome" << endl;}
    
//    // Display the results as all upper case:
//    cout << "The string in uppercase: " << endl;
//    toupper(inString);
//    cout << endl;
    
//    // Display the number of letters in the string
//    cout << "The number of letters in this string are: " << numLetters(inString) << endl;
}








// This function finds the last index where the target char can be found in the string. it returns -1 if the target char does not appear in the string.

int lastIndexOf(const char *inString, char target)
{
    int index = 0;
    int lastKnown = -1;
    
    while (*inString != '\0')
    {
        if (*inString == target)
            lastKnown = index;
        inString++;
        index++;
    }
    return lastKnown;
}









// This function reverses the string passed into it.

void reverse(char *inString)
{
    int length;
    char temp;
    char *stringStart, *stringEnd;
    
    length = strlen(inString);
    stringStart = inString;
    stringEnd = &inString[length - 1];
    
    
    while(stringStart < stringEnd)
    {
        temp = *stringStart;        // assigns value of stringStart to temp
        *stringStart = *stringEnd;  // assigns value of stringEnd to stringStart
        *stringEnd = temp;          // assigns value of temp to stringEnd
        stringStart++;              // goes to next char
        stringEnd--;                // goes to previous char
    }
    
}









// This function finds all instances of the char 'target' in the string and replace them with 'replacementChar'. It returns the number of replacements that it makes. If the target char does not appear in the string it should return 0.

int replace(char* inString, char target, char replacementChar)
{
    int counter = 0;            // accumulator
    
    while (*inString != '\0')
    {
        if(*inString == target)
        {
            *inString = replacementChar;
            counter += 1;
        }
        inString++;
    }
    return counter;
}









// This function returns the index in string where a substring can first be found.

int findSubstring(const char* inString, const char substring[])
{
    int strlength;
    int sublength;
    int position;

    strlength = strlen(inString);
    sublength = strlen(substring);
    position = -1;

    for (int index = 0; index < strlength; index++)
    {
        if (inString[index] == *substring && position == -1)
        {
            position = index;
            for (int count = 0; count < sublength - 1; count++)
            {
                if (inString[index + 1 + count] != substring[count + 1])
                    position = -1;
            }
            if(position != -1)
                position = index;
        }
    }
    return position;
}









// This function returns true(1) if the argument string is a palindrome. It returns false(0) if it is not.

bool isPalindrome(const char* inString)
{
    int length;
    bool result = true;
    
    length = strlen(inString);
    
    for(int index = 0; index < length/2; index++)
    {
        if(tolower(inString[index]) != tolower(inString[length - 1 - index]))
            result = false;
    }
    return result;
}









// This function converts the c-string parameter to all uppercase.
void toupper(char* inString)
{
    while(*inString != '\0')
    {
        if(islower(*inString))
        {
            putchar (toupper(*inString));
        }
        inString++;
    }
    
}









// This function returns the number of letters in the c-string.  This function only counts letters of the alphabet.  No puncuation. No numbers. No whitespace.

int numLetters(const char* inString)
{
    int counter = 0;
    
    while(*inString != '\0')
    {
        if(isalpha(*inString))
            counter += 1;
        inString++;	
    }
    return counter;	
}









/* OUTPUT

 Enter a string (up to 50 characters): what is your question
 
 Enter a character to find and later replace: r
 r last appears at index 11.
 
 The string reversed: noitseuq ruoy si tahw
 
 Now, enter a replacement character to replace r with: Z
 r was replaced 1 times.
 Replacement string: noitseuq Zuoy si tahw
 
 
 ------------------------------------- DIFFERENT STRING USED
 Enter a string (up to 50 characters): abba abba
 Now, enter a substring to search for in the reversed string: a
 The substring a, first appears at index: 0
 The string is a palindrome
 
 
 ------------------------------------- DIFFERENT STRING USED
 Enter a string (up to 50 characters): asdf
 The string in uppercase:
 ASDF
 
 
  ------------------------------------- DIFFERENT STRING USED
 Enter a string (up to 50 characters): lkjhlfgh324$a
 The number of letters in this string are: 9

 
 */
