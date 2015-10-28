#include <iostream>
#include <string>

using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

struct Place
{
    string address;
    string city;
    string state;
    string zip;
};

struct EmployeeInfo
{
    string name;
    int employeeNumber;
    Date birthDate;         // Nested structure
    Place residence;        // Nested structure

};

int main()
{
    EmployeeInfo manager;
    
    cout << "Enter the manager's name: " << endl;
    getline(cin, manager.name);
    
    cout << "Enter the manager's employee number: " << endl;
    cin >> manager.employeeNumber;
    cout << "Now enter the manager's date of birth. \n";
    cout << "Month (up to 2 digits): ";
    cin >> manager.birthDate.month;
    cout << "Day (up to 2 digits): ";
    cin >> manager.birthDate.day;
    cout << "Year: ";
    cin >> manager.birthDate.year;
    
    cout << "Enter the manager's street address: ";
    cin.ignore();
    getline(cin, manager.residence.address);
    cout << "City: ";
    cin >> manager.residence.city;
    cout << "State: ";
    cin >> manager.residence.state;
    cout << "ZIP: ";
    cin >> manager.residence.zip;
    
    // DISPLAY the information
    
    cout << "Information:\n";
    cout << manager.name;
    cout << "Employee number " << manager.employeeNumber << endl;
    cout << "Date of birth " << manager.birthDate.month << "/" << manager.birthDate.day << "/"
    << manager.birthDate.year << endl;
    cout << "Address information: " << endl;
    cout << manager.residence.address << endl;
    cout << manager.residence.city << endl;
    cout << manager.residence.state << ", " << manager.residence.zip << endl;
}
