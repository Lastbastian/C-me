#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

employee::employee()
{
    netPay = 0;
}

employee::employee(const string& newName, const string& newSsn)
{
    name = newName;
    ssn = newSsn;
    netPay = 0;
}



