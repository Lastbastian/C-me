#include <iostream>

using namespace std;

void eCount(const char array [], int size);

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
	
	eCount(array, SIZE);
}

void eCount(const char array [], int size)
{
	int eCount = 0;
	
	for(int i = 0; i < size; i++){
		if(array[i] == 'e' || array[i] == 'E')
		eCount += 1;
	}
	cout << "There are " << eCount << " e's in your character string.";
	
}