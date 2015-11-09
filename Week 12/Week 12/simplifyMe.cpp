#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numerator = -5;
    int denominator = 30;
        int end;
        int gcd_value = 1;
    if (numerator < denominator)
    {
        end = abs(numerator);
    } else {
        end = abs(denominator);
    }
        for(int i = 1; i <= end; i++ )
        {
            if (numerator % i == 0)
                gcd_value = i;
                cout << gcd_value;
        }
    cout << "End = " << end << endl;
    cout << numerator/gcd_value << denominator/gcd_value << endl;
    }