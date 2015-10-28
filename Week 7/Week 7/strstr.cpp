#include <iostream>
#include <cstring>

using namespace std;

// using strstr to search a char array

int main()
{
    char arr[] = "Four score and seven years ago";
    char *strPtr;
    cout << arr << endl;
    
    strPtr = strstr(arr, "seven"); // search for "seven"
    cout << strPtr << endl;
    
    return 0;  

}
