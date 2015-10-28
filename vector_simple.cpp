#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char *argv[]) {
	const int SIZE = 10;
	vector<int> numbers(SIZE);
	
	// read in numbers to vector
	for(int i = 0; i < SIZE; i++){
		cout << "Please enter a number: ";
		cin >> numbers[i];
	}
	
	// print out vector
	for(int i = 0; i < SIZE; i++){
		cout << numbers[i];
	}
}