#include <iostream>
using namespace std;

int main() {
	int rowCount;
	int colCount;
	
	for (rowCount = 0; rowCount < NUM_ROWS; rowCount++) {
		for (colCount = 0; colCount < rowCount + 1; colCount++){
			cout << colCount << " ";
		}
		cout << endl;
	}
}