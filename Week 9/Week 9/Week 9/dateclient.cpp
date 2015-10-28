// this is the file dateclient.cpp
// it is added to the project

#include <iostream>
#include "date.h"
using namespace std;

int main()
{
    date date1;
    cout << "When first declared, date1 is: ";
    date1.print();
    cout << endl;
    
    date1.set(7, 24, 1949);
    cout << "After being set to 7/24/1949, date1 is: ";
    date1.print();
    cout << endl;
    
    date date2(2, 28, 1965);
    cout << "When first declared and initialized to "
    << "2/28/1965, date2 is: ";
    date2.print();
    cout << endl;
    
    cout << "enter a date: ";
    date2.read();
    cout << "you entered: ";
    date2.print();
    cout << endl;
    
    if (date1.comesBefore(date2)){
        cout << "date1 comes before date2" << endl;
    } else {
        cout << "date1 does not come before date2" << endl;
    }
    
    date2.increment();
    cout << "one day later, date2 is: ";
    date2.print();
    cout << endl;
    
    date1 = date2.increaseBy(12);
    cout << "After setting date1 to equal date2 + 12,";
    cout << "date 2 is still: ";
    date2.print();
    cout << endl;
    cout << "but date1 is now: ";
    date1.print();
    cout << endl;
}
