#include <iostream>
#include <string>

using namespace std;
int main() {
	int score;
	
	cout << "Enter a score: ";
	cin >> score;
	
	if (score >= 90) {
		cout << "A" << endl;
	} else if (score >= 80) {
		cout << "B" << endl;
	} else if (score >= 70) {
		cout << "C" << endl;
	} else if (score >= 60) {
		cout << "D" << endl;
	} else {
		cout << "F" << endl;
	}

}