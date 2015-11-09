#include <iostream>

using namespace std;

int main()
{
    int numerator = 5;
    int denominator = 65;
        int end;
        int gcd_value = 1;
        end = numerator / 2 ? numerator < denominator : end = denominator / 2;
        for(int i = 1; i < end; i++ )
        {
            if (numerator % i == 0)
                gcd_value = i;
        }
        cout << numerator/gcd_value << denominator/gcd_value;
    }