/*
Write a method named equalNeighbors. It should accept an array of chars and a size argument. It should return true if there are two adjacent elements in the array with equal values. If there are not, it should return false.
*/

#include <iostream>

using namespace std;

bool equalNeighbors(const char array[], int size);

int main()
{
	int SIZE;
		
	cout << "How large would you like you array? ";
	cin >> SIZE;
		
	char array[SIZE];
	
	for(int count = 0; count < SIZE; count++){
		cout << "Please enter a character: ";
		cin >> array[count];
	}
	
	if (equalNeighbors(array, SIZE)){
		cout << "There are equal, adjacent elements in this array.";
	} else {
		cout << "There are no equal, adjacent elements in this array.";
	}

}

bool equalNeighbors(const char array[], int size)
{
	bool adjacentEqual;
	
	for(int i = 0; i < size; i++){
		if (array[i] == array[i + 1])
			adjacentEqual = true;
	}
	return adjacentEqual;
}