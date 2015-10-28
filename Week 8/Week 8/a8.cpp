/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Saturday, Oct 10th.
	Instructor: David Harden
	File Name: a8.cpp
 
 This program takes input for a name and respective score.  The name and score is stored as a HighSchore structure.  The Highscores are then in turn, stored in a scores array.  The scores array is then sorted using a selection sort algorithm - which will sort the structs according to the score.  The stucts are the displayed back in descending order of highest score.
 
 */

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;


struct Highscore                    // Defines a Highscore structure.
{
    int score;
    char name[24];
};

// Function prototypes
void initializeData(Highscore scores[], int size);
void sortData(Highscore scores[], int size);
void displayData(const Highscore scores[], int size);

int main()
{
    int size;
    
    cout << "How many scores will you be entering?: ";
    cin >> size;
    cin.ignore();
    
    Highscore *hPtr;                // Define Highscores pointer
    hPtr = new Highscore[size];     // Dynamically allocates a scores array containing Highscore structs
    
    initializeData(hPtr, size);
    sortData(hPtr, size);
    displayData(hPtr, size);
    
    return 0;
}









// This fuction asks a user to enter 5 names and scores.  Each name and score combination is stored as a structure in the scores array.

void initializeData(Highscore scores[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << "Enter the name for score #" << index + 1 << ": ";
        cin.getline(scores[index].name, 24);
        
        cout << "Enter " << scores[index].name << "'s score: ";
        cin >> scores[index].score;
        cin.ignore();
    }
}









// This function performs a descending order selection sort on the scores array. The array is returned sorted in descending order accoring to highest score.

void sortData(Highscore scores[], int size)
{
    int startScan, maxIndex, maxValue;
    
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        maxIndex = startScan;                   // sets maxIndex to the index of the start of the scan
        maxValue = scores[startScan].score;     // max value = the first score in the array
        for (int index = startScan + 1; index < size; index++)
        {
            if (scores[index].score > maxValue)
            {
                maxValue = scores[index].score;
                maxIndex = index;
            }
        }
        swap(scores[maxIndex],scores[startScan]);
    }
}









// This function takes the sorted scores array, and the size int as input.  Using a simple for loop it displays the sorted scores array in an easy to read format.

void displayData(const Highscore scores[], int size)
{
    cout << "\n ** Top Scorers ** \n" << endl;
    
    for (int index = 0; index < size; index++)
    {
        cout << setw(8) << scores[index].name << ":" << setw(6) << scores[index].score << endl;
    }
}









/* OUTPUT
 
 How many scores will you be entering?: 5
 Enter the name for score #1: Luke
 Enter Luke's score: 698
 Enter the name for score #2: Ben
 Enter Ben's score: 9891
 Enter the name for score #3: Darth
 Enter Darth's score: 7989
 Enter the name for score #4: Han
 Enter Han's score: 6754
 Enter the name for score #5: Lea
 Enter Lea's score: 7612
 
 ** Top Scorers **
 
     Ben:  9891
   Darth:  7989
     Lea:  7612
     Han:  6754
    Luke:   698
 
*/