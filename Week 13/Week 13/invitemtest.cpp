#include <iostream>
#include "invitem.h"

using namespace std;

void f(invItem item1);

int main()
{
    invItem item1;
    invItem item2("hammer");
    
    cout << "item1 is " << item1 << endl;
    cout << "item2 is " << item2 << endl;
    
    item1.setInfo("screwdriver", 5);
    item2.setUnits(9);
    
    cout << "item1 is " << item1 << endl;
    cout << "item2 is " << item2 << endl;
    
    item1 = item2;
    cout << "After item1 = item2, " << endl;
    cout << "item1 is " << item1 << endl;
    cout << "item2 is " << item2 << endl;
    
    item2.setInfo("lawn mower", 14);
    cout << "after item2.setInfo(\"lawn mover\", 14), " << endl;
    cout << "item1 is " << item1 << endl;
    cout << "item2 is " << item2 << endl;
    
    item1 = item1;
    cout << "after item1 = item1, ";
    cout << "item1 is " << item1 << endl << endl;
    
    f(item1);
    cout << "after being used as an argument to pass-by-value parameter";
    cout << endl << "item1 is still " << item1 << endl << endl;
    
    item1[1] = 'c';
    item1[2] = 'i';
    item1[3] = 's';
    cout << item1[1] << item1[2] << item1[3] << endl;
    
    const invItem Item4("chair");
    cout << item4[1];
    item4[1] = "z";
    cout << item4[1];
    cout << item4[1] << endl;
}

void f(invItem item1)
{
    item1.setInfo("pizza", 67);
}
