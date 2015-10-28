#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


struct Student
{
    string name;
    int idNum;
    int creditHours;
    double GPA;
};

// Function prototype
void getData(Student *);

int main()
{
    Student freshman;
    
    // Get the student data
    cout << "Enter the following student data:\n";
    getData(&freshman);                                     // Pass the address of the freshman.
    cout << "\nHere is the student data you entered:\n";
    
    // Now display the data stored in freshman
    cout << setprecision(3);
    cout << "Name: " << freshman.name << endl;
    cout << "ID Number: " << freshman.idNum << endl;
    cout << "Credit Hours: " << freshman.creditHours << endl;
    cout << "GPA: " << freshman.GPA << endl;
    return 0;
}

// Function uses a pointer to a student structure variable. User enters student info, which is stored in the variable.
void getData(Student *s)
{
    cout << "Student name: ";
    getline(cin, s->name);
    
    cout << "Student ID number: ";
    cin >> s->idNum;
    
    cout << "Credit hours enrolled: ";
    cin >> s->creditHours;

    cout << "Current GPA: ";
    cin >> s->GPA;
}