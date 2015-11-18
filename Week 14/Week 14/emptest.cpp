// this is the file emptest.cpp

#include <iostream>
#include "hourlyemp.h"
#include "salariedemp.h"
using namespace std;

int main()
{
    hourlyEmp arnold("Arnonld Jones","23456664",13,20);
    arnold.setHours(10);
    cout << "Check for " << arnold.getName() << " for "
    << arnold.getHours() << " hours:" << endl;
    arnold.printCheck();
    
    cout << endl << endl << endl;
    
    arnold.giveRaise(5);
    cout << "Check for " << arnold.getName() << " for "
    << arnold.getHours() << " hours:" << endl;
    arnold.printCheck();
    
    cout << endl << endl << endl;
    
    salariedEmp sally("Sally Wu", "345123456", 1234.45);
    cout << "Check for " << sally.getName() << endl;
    sally.printCheck();
    
    cout << endl << endl << endl;
    
    sally.giveRaise(10);
    cout << endl << endl << endl;
    cout << "after a raise of 10, Sally's check:" << endl;
    sally.printCheck();
}