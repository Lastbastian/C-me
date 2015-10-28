#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) {
	ofstream outputFile;
	outputFile.open("demofile.txt");
	
	cout << "Now writing data to the file. \n";
	
	// Write four names to the file.
	outputFile << "Bach\n";
	outputFile << "New Order\n";
	outputFile << "Danzig\n";
	outputFile << "Radio Head\n";
	
	// Close the file.
	outputFile.close();
	cout << "Done.\n";
	return 0;
}