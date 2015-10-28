#include <iostream>

using namespace std;

int main() {
	const int SIZE = 5;
	int array[SIZE] = {5,10,15,20,25};
	
	for (int i = 0; i < SIZE; i++){
		cout << array[i] << endl;
	}
}