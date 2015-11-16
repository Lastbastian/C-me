#include <iostream>
#include "invitem.h"

using namespace std;

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
}
