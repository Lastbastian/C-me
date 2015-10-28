/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Friday, Sept. 4th
	Instructor: David Harden
	File Name: a3.cpp
 
	Rewrite your High Scores program so that it uses Dynamic Memory Allocation to create the names and scores arrays.
 
    You will only need to make slight modifications to your main function if you wrote your original program correctly using the function signatures required for that assignment. Your function signatures for this assignment should be exactly the same as the signatures required in the original High Scores assignment.
 
    Your modified high scores program should start out by asking the user how many scores will be entered. It should allocate appropriate arrays, and then proceed just like the original High Scores assignment. The output from your program should look approximately like this:
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
    int size;
    
    string *names;
    names = new string[size];
//    string names[SIZE]; OLD CODE
    
    int *scores;
    scores =  new int[size];
//    int scores[SIZE]; OLD CODE
    
    cout << "How many scores will you be entering?: ";
    cin >> size;
    
    initializeArrays(names, scores, size);
    sortData(names, scores, size);
    displayData(names, scores, size);
    
// Free dynamically allocated memory
    
    delete [] scores;
    delete [] names;
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
        cout << setw(8) << names[i] << ":" << setw(8) << scores[i] << endl;
    }
    
}









/*
 OUTPUT
 
 How many scores will you be entering?: 4
 Enter the name for score #1: Suzy
 Enter Suzy's score: 9900
 Enter the name for score #2: Kim
 Enter Kim's score: 1000000
 Enter the name for score #3: Armando
 Enter Armando's score: 822
 Enter the name for score #4: Tim
 Enter Tim's score: 514
 Top Scorers:
 Kim: 1000000
 Suzy:    9900
 Armando:     822
 Tim:     514
 */