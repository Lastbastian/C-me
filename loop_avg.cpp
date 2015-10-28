#include <iostream>
using namespace std;

int main() {
	
	int count = 0;
	int num;
	int maxNumber;
	int sumSoFar = 0;
	
	cout << "Enter a number (negative number to quit): ";
	cin >> num;
	
	while (num >= 0){
		sumSoFar += num;
		cout << "Enter a number (negative number to quit): ";
		cin >> num;
		count++;
	}	
	
	cout << "The average of the numbers is " << sumSoFar / count << ".";
}