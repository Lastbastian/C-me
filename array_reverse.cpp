#include <iostream>

using namespace std;

const int ARRAY_SIZE = 1000;

int main() {
	int count;
	int number;
	int numItems;
	int list[ARRAY_SIZE];
	
	count = 0;
	// reading in numbers
	cout << "Enter a number (negative number to quit): ";
	cin >> number;
	while (number >= 0){
		list[count] = number;
		count++;
		cout << "Enter a number (negative number to quit): ";
		cin >> number;
	}	
	numItems = count;
	
	// reversing items in array
	cout << "The numbers in reverse order: ";
	for (count = numItems - 1; count >= 0; count--){
		cout << list[count] << " ";
	}
}

