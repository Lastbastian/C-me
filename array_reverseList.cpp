#include <iostream>

using namespace std;


void readNumbers(int list[], int &numItems);
void reverseList(int list[], int numItems);
void printNumbers(const int list[], int numItems);

const int ARRAY_SIZE = 100;

int main() {
	int numItems;
	int list[ARRAY_SIZE];
	
	readNumbers(list, numItems);
	reverseList(list, numItems);
	printNumbers(list, numItems);
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
	}
	numItems = count;
}

void reverseList(int list[], int numItems){
	int forwardCount, backwardCount;
	
	backwardCount = numItems - 1;
	for (forwardCount = 0; forwardCount < numItems/2; forwardCount++){
		swap(list[forwardCount],list[backwardCount]);
		backwardCount--;
	}
}

void printNumbers(const int list[], int numItems){
	int count;
	cout << "The reverse order is: ";
	for (count = 0; count < numItems; count++){
		cout << list[count];
	}
}
