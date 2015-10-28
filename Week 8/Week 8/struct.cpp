#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


struct PayRoll
{
    int empNumber;
    string name;
    double hours;
    double payRate;
    double grossPay;
};


int main()
{
    PayRoll employee1 = {12243, "Chaz Merryman"};        // employee1 is a PayRoll structure.
    PayRoll employee2 = {4352345, "Janet Bumpass"};      // Initialize list
    
    cout << "How may hours did employee 1 work? ";
    cin >> employee1.hours;
    
    cout << "What is the employee 1's hourly payrate? ";
    cin >> employee1.payRate;
    
    employee1.grossPay = employee1.hours * employee1.payRate;

    // Display the employee data.
    
    cout << "Here is the employee 1' payroll data:\n";
    cout << "Name: " << employee1.name << endl;
    cout << "Number: " << employee1.empNumber << endl;
    cout << "Hours worked: " << employee1.hours << endl;
    cout << "Payrate: " << employee1.payRate << endl;
    cout << "Gross pay: $" << employee1.grossPay << endl;
    
    cout << "How may hours did employee 2 work? ";
    cin >> employee2.hours;
    
    cout << "What is the employee 2's hourly payrate? ";
    cin >> employee2.payRate;
    
    employee2.grossPay = employee2.hours * employee2.payRate;
    
    // Display the employee data.
    
    cout << "Here is the employee 2's payroll data:\n";
    cout << "Name: " << employee2.name << endl;
    cout << "Number: " << employee2.empNumber << endl;
    cout << "Hours worked: " << employee2.hours << endl;
    cout << "Payrate: " << employee2.payRate << endl;
    cout << "Gross pay: $" << employee2.grossPay << endl;
    return 0;
    
}