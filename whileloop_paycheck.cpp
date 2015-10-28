#include <iostream>
using namespace std;

int main() {
	int hours;
	int paycheck;
	char response;
	int payRate;
	
	do {
		cout << "enter hours worked: ";
		cin >> hours;
		cout << "enter rate of pay: ";
		cin >> payRate;
		paycheck = hours * payRate;
		
		cout << "the amount of the paycheck is " << paycheck << " dollars." << endl;
		
		cout << "is there another employee to process (Y or N)? ";
		cin >> response;
	} while (response == 'Y' || response == 'y');
	cout << "Finished";
}