#include <iostream>
using namespace std;

int main() {
	const int NUM_UNITS = 28;
	int units[NUM_UNITS] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28};

	int total = 0;
	
	for (int i = 0; i < NUM_UNITS; i++){
		total += units[i];
	}
	cout << total;
}