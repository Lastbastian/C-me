#include <iostream>
#include <string>

using namespace std;

void dollarFormat(string &);            // Function Prototype

int main()
{
    string input;
    
    cout << "Enter the dollar amount in the form of nnnn.nn :";
    cin >> input;
    
    dollarFormat(input);
    
    cout << "Here is the amount formatted: " << input << endl;
    
    return 0;
}

void dollarFormat(string &currency)
{
    int dp;
    
    dp = currency.find('.');            // Find decimal point in string
    if (dp > 3)
    {
        for (int x = dp - 3; x > 0; x -= 3)
            currency.insert(x, ",");    // insert "," at x
    }
    currency.insert(0, "$");
}