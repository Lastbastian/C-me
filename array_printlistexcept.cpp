#include <iostream>

using namespace std;

	const int ARRAY_SIZE = 5;
	
	int smallest(const int list[], int numItems);
	void printListExcept(const int  list[],
								int numItems,
								int numberToSkip);
	void readNumbers(int list[], int &numItems);
								
								
int main(int argc, char *argv[]) {
	int list[ARRAY_SIZE];
	int numItems;
	
	readNumbers(list, numItems);
	cout << "The numbers you entered (ommitting the smallest):" << endl;
	printListExcept (list, numItems, smallest(list, numItems));
}

void readNumbers(int list[], int &numItems){
	int number, count;
		
	cout << "Enter a number (-1 to quit): ";
	cin >> number;
	
	count = 0;
	while ((number != -1) && (count < ARRAY_SIZE)){
		list[count] = number;
		count++;
		if (count < ARRAY_SIZE){
			cout << "Enter a number (-1 to quit): ";
			cin >> number;
		} else {
			cout << "the array is now full." << endl;
		}
		numItems = count;
	}
}

void printListExcept(const int list[], int numItems, int numberToSkip){
	for (int count = 0; count < numItems; count++){
		if (list[count] != numberToSkip){
			cout << list[count] << " ";
		}
	}
}

int smallest(const int list[], int numItems){
	int small = list[0];
	
	for (int count = 1; count < numItems; count++){
		if (list[count] < small){
			small = list[count];
		}
	}
	return small;
}
