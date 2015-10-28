#include <iostream>
#include <iomanip>

using namespace std;

class Budget
{
    private:
        static double corpBudget;           // Static variable
        double divisionBudget;
    public:
        Budget()                            // Constructor function
            { divisionBudget = 0; }
        void addBudget(double b)
            {
                divisionBudget += b;
                corpBudget += b;
            }
        double getDivisionBudget() const
            { return divisionBudget; }
    
        double getCorpBudget() const
            { return corpBudget; }
};

double Budget::corpBudget = 0;              // Definition of static member var corpBudget - outside of class


int main()
{
    
    int count;                              // Loop counter
    const int NUM_DIVISIONS = 4;            // Number of divisions
    Budget divisions[NUM_DIVISIONS];        // Array of budget objects called divisions
    
    // Get the budget request for each division
    for (count = 0; count < NUM_DIVISIONS; count++)
    {
        double budgetAmount;
        cout << "Enter the budget requre for division " << count + 1 << ": ";
        cin >> budgetAmount;
        divisions[count].addBudget(budgetAmount);
    }
    
    // Display the budget request and the corporate budget
    for (count = 0; count < NUM_DIVISIONS; count++)
    {
        cout << "\tDivision " << count + 1 << "\t$";
        cout << divisions[count].getDivisionBudget() << endl;
    }
    cout << "\tTotal Budget Requests: \t$";
    cout << divisions[0].getCorpBudget() << endl;

    return 0;
}