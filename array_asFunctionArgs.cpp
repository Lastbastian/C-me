#include <iostream>

using namespace std;

void showValues(const int nums[], int size);

int main()
{
	const int SIZE = 8;
	int numbers[SIZE] = {5,6,7,8,9,10,11,12};
	
	showValues(numbers, SIZE);
	return 0;
}

void showValues(const int nums[], int size)
{
	for (int i = 0; i < size; i++)
		cout << nums[i] << endl;
}