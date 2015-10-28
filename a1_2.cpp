#include <iostream>
using namespace std;

char response;
int numAsterisks;
 
int main() {
	cout << "Would you like to print \"*\"? ";
	cin >> response;
	
	while (response == 'Y' || response == 'y') {
		cout << "How many of them would you like to print? ";
		cin >> numAsterisks;
		
		for (int i = 0; i < numAsterisks; i++) {
		cout << "*";
		}
		cout << endl;
		
		cout << "Would you like to print more \"*\"? ";
		cin >> response;
	}
	cout << "Finished!";	
}