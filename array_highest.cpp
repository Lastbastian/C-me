#include <iostream>

using namespace std;

int main (){
	const int SIZE = 12;
	int array[SIZE] = {33,22,66,12,55,99,5,4,123,5,66,12};
	
	int highest = array[0];
	
	for (int i = 0; i < SIZE; i++){
		if (array[i] > highest){
			highest = array[i];
		}
	}
	cout << "The highest number is: " << highest;
}