/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Friday, Sept. 4th
	Instructor: David Harden
	File Name: a3.cpp

	This program takes input for a name and respective score.  The names and scores are stored in seperate arrays.  The array's are then sorted using a dual sort algorithm to maintian data syncronization and displayed back in descending order of highest score.
*/

#include <iostream>
#include <iomanip>

using namespace std;

// function prototypes
void initializeArrays(string names[], int scores[], int size);
void sortData(string names[], int scores[], int size);
void displayData(const string names[], const int scores[], int size);

int main()

{
	const int SIZE = 5;
	string names[SIZE];
	int scores[SIZE];
	
	initializeArrays(names, scores, SIZE);
	sortData(names, scores, SIZE);
	displayData(names, scores, SIZE);	

}









// This function takes user input and stores it in a names array and a scores array respectivly.  The size integer limits the size of the names and scores array.
  
void initializeArrays(string names[], int scores[], int size)
{
	string tempName;
	
	for (int i = 0; i < size; i++){
		cout << "Enter the name for score #" << i + 1 << ": ";
		cin >> names[i];
		cout << "Enter " << names[i] << "'s score: "; 
		cin >> scores[i];
	}
}









// This function take the names array, scores array and the size integer as input.  It sorts both arrays based on a dual selection sort algorithm. The arrays are sorted in descending order and maintain syncronization.  Output is the two sorted arrays.

void sortData(string names[], int scores[], int size)
{
	int startScan, maxIndex; 
	string tempId;
	double maxValue;
	
	for (startScan = 0; startScan < (size - 1); startScan++){
		maxIndex = startScan;
		maxValue = scores[startScan];
		tempId = names[startScan];
		for (int index = startScan + 1; index < size; index++){
			if (scores[index] > maxValue){
				maxValue = scores[index];
				tempId = names[index];
				maxIndex = index;
			}
		}
		scores[maxIndex] = scores[startScan];
		names[maxIndex] = names[startScan];
		scores[startScan] = maxValue;
		names[startScan] = tempId;
	}
}









// This function takes the sorted names array, sorted scores array, and the size int as input.  Using a simple for loop it displays the both arrays, in descending order, in an easy to read format.

void displayData(const string names[], const int scores[], int size)
{
	cout << "Top Scorers:" << endl;
	
	for (int i = 0; i < size; i++){
		cout << setw(8) << names[i] << ":" << setw(6) << scores[i] << endl;
	}
	
}









/*
OUTPUT

Enter the name for score #1: Suzy
Enter Suzy's score: 600
Enter the name for score #2: Kim
Enter Kim's score: 9900
Enter the name for score #3: Bob
Enter Bob's score: 1012
Enter the name for score #4: Armando
Enter Armando's score: 8000
Enter the name for score #5: Tim
Enter Tim's score: 514
Top Scorers:
	 Kim:  9900
 Armando:  8000
	 Bob:  1012
	Suzy:   600
	 Tim:   514
*/