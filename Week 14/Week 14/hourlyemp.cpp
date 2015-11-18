// this is the file "hourlyemp.cpp"

#include "hourlyemp.h"
#include "employee.h"
#include <iostream>
using namespace std;

void hourlyEmp::setHours(double newHours)
{
    hours = newHours;
    netPay = payRate * hours;
}

void hourlyEmp::giveRaise(double amount)
{
    payRate += amount;
    netPay = payRate * hours;
}

void hourlyEmp::printCheck() const
{
    cout << "Pay " << name << " the sum of " << netPay << " Dollars." << endl;
    cout << "Check Stub: ";
    cout << "Employee number: " << ssn << endl;
    cout << "This is an hourly employee. Hours worked: " << hours << endl;
    cout << "Rate: " << payRate << "   Pay: " << netPay << endl;
}

hourlyEmp::hourlyEmp()
{
    payRate = 0;
    hours = 0;
}

hourlyEmp::hourlyEmp(const string& newName,
                     const string& newSsn,
                     double newPayRate,
                     double newHours)

: employee(newName, newSsn)

{
    payRate = newPayRate;
    hours = newHours;
    netPay = hours * payRate;
}