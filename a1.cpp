// Chris Bastian
#include <iostream>
using namespace std;

int main() {
	int numberAsterisks;
	char response;
	
	cout << "Would you like to print some asterisks? ";
	cin >> response;
	
	while (response == 'Y') {
		cout << "How many would you like to print? ";
		cin >> numberAsterisks;
		
		for(int i = 0; i < numberAsterisks; i++) {
			cout << "*";
		}
		cout << endl;
		
		cout << "Would you like to print more? ";
		cin >> response;
	}
}

/*
Loading ~/.bash_profile a shell script that runs in every new terminal you open
Logged in as chrisbastian at cicis.local
Would you like to print some asterisks? Y
How many would you like to print? 23
***********************
Would you like to print more? Y
How many would you like to print? 12
************
Would you like to print more? n
*/