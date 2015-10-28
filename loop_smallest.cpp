#include <iostream>

using namespace std;

int main() {
	int number;
	int smallest;
	
	cout << "Enter a number (negative number to quit): ";
	cin >> number;
	
	while (number >= 0) {
		if (number < smallest) {
			smallest = number;		
		}
		
		cout << "Enter a number (negative number to quit): ";
		cin >> number;
	}

	cout << "The smallest number you entered was " << smallest << ".";
	
}