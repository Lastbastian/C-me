#include <iostream>
#include <iomanip>

using namespace std;

struct PayInfo
{
    int hours;
    double payRate;
};


int main()
{
    const int NUM_WORKERS = 3;          // Number of workeers
    PayInfo workers[NUM_WORKERS];       // Array of structures
    int index;                          // Loop counter
    
    cout << "Enter the hours wokded by " << NUM_WORKERS << " employees and their hourly rates.\n";
    
    for (index = 0; index < NUM_WORKERS; index++)
    {
        cout << "Hours worked by employee #" << index + 1 << ": ";
        cin >> workers[index].hours;
        
        cout << "Enter employee #" << index + 1 << "'s payrate: ";
        cin >> workers[index].payRate;
        cout << endl;
    }
    
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    
    for (index = 0; index < NUM_WORKERS; index++)
    {
        double gross;
        gross = workers[index]. hours * workers[index].payRate;
        cout << "Employee #" << index + 1 << " : $" << gross << endl;
    }
    return 0;
}
