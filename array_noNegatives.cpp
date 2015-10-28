#include <iostream>

using namespace std;

bool noNegatives(const int array[], int size);

int main() {
	
	const int SIZE = 5;
	int array[SIZE];
	
	for (int i = 0; i < 5; i++) {
		cout << "Enter an interger ";
		cin >> array[i];
		}
		
	if (noNegatives(array, SIZE)) {
		cout << "There were no negative integers present." << endl;
	} else {
		cout << "There were negative integers present." << endl;
	}
}

bool noNegatives(const int array[], int size)
{
	bool noNegative = true;
	
	for (int i = 0; i < size; i++){
		if (array[i] < 0){
			noNegative = false;
			break;}
	}
	return noNegative;
		
}