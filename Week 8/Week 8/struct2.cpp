#include <iostream>

using namespace std;


struct Account
{
    string number;
    double balance;
    double interestRate;
    double avgMonthlyBalance;
};

int main()
{
    Account savings = {"ACZ42137-B12-7", 4512.59, .04 , 4217.07};
    
    cout << "Account Number: " << savings.number << endl;
    cout << "Account Balance: $" << savings.balance << endl;
    cout << "Account IR: %" << savings.interestRate << endl;
    cout << "Account Avg. Balance: $" << savings.avgMonthlyBalance << endl;
}