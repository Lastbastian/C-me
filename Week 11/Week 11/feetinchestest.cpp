// file: feetinchestest.cpp

#include <iostream>
#include "feetinches.h"

using namespace std;

int main()
{
    feetInches f1, f2(3), f3(4,7);
    int x;
    
    cout << f1 << endl << f2 << endl << f3 << endl;
    
    f1 = f2 + f3;
    cout << f2 << " plus " << f3 << " equals " << f1 << endl;
    
    cout << ++f1;
    cout << endl;
    cout << f1++;
    cout << endl;
    cout << "f1 is now " << f1 << endl;
    
    x = 42;
    f1 = x + f3;
    cout << "f1 is now " << f1 << endl;
    
    if (f2 < f1){
        cout << "f2 is less then f1" << endl;
    } else {
        cout << "f2 is not less then f1" << endl;
    }
    
    if (x < f1){
        cout << "x is less then f1." << endl;
        
    } else {
        cout << "x is not less then f1." << endl;
    }
    cout << (f1 += 7) << endl;
}