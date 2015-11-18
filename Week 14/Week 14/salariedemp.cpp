// this is the file "salariedemp.cpp

#include "salariedemp.h"
#include "employee.h"
#include <iostream>
using namespace std;

void salariedEmp::giveRaise(double amount)
{
    salary += amount;
    netPay += amount;
}

salariedEmp::salariedEmp()
{
    salary = 0;
    netPay = 0;
}

salariedEmp::salariedEmp(const string& newName,
                         const string& newSsn,
                         double newWeeklySalary)

: employee(newName, newSsn)


{
    salary = newWeeklySalary;
    netPay = salary;
}


void salariedEmp::printCheck() const
{
    cout << "pay " << name << endl;
    cout << "the sum of " << netPay << " Dollars." << endl;
    cout << "Check Stub: " << endl;
    cout << "Employee number: " << ssn << endl;
    cout << "This is a salaried employee.  Regular pay: "
    << salary << endl;
}