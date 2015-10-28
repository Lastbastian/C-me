#include <iostream>
using namespace std;

const int ARRAY_SIZE = 1000;

void printList(const int list[],
					 int numItems);
int indexOfSmallest(const int list[], int startingIndex, int numItems);    
void sort(int list[], int numItems);
void readNumbers(int list[], int &numItems);

int main()
{
	int list[ARRAY_SIZE];
	int numItems;
	
	
	readNumbers(list, numItems);
	sort(list, numItems);
	cout << "The sorted list: "
		 << endl;
	printList(list, numItems);
}



void readNumbers(int list[], int &numItems)
{
	int number;
	int count = 0; // the number of numbers that have been entered
	
	cout << "Enter a number (negative number to quit): ";
	cin >> number;
	while (number >= 0 && count < ARRAY_SIZE){
		list[count] = number;
		count++;
		if (count < ARRAY_SIZE){
			cout << "Enter a number (negative number to quit): ";
			cin >> number;
		} else {
			cout << "The array is now full." << endl;
		}
	}
	numItems = count;
}


void sort(int list[], int numItems)
{
	for (int count = 0; count < numItems - 1; count++){
		swap(list[indexOfSmallest(list, count, numItems)], 
			 list[count]);
	}

}


int indexOfSmallest(const int list[], int startingIndex, int numItems)
{
	int targetIndex = startingIndex;
	
	for (int count = startingIndex + 1; count < numItems; count++){
		if (list[count] < list[targetIndex]){
			targetIndex = count;
		}
	}
	
	return targetIndex;
}

void printList(const int list[],
					 int numItems)
				 
{
	for (int count = 0; count < numItems; count++){
		cout << list[count] << " ";
	}
}