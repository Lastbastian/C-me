#include "GradedActivity.h"
#include <iostream>

using namespace std;

int main()
{
    double testScore;               // to hold a test score
    
    GradedActivity test;            // create object

    cout << "Enter your numeric test score: ";
    cin >> testScore;
    
    test.setScore(testScore);       // stores the testscore in the test object
    
    cout << "The grade letter for the test is: " << test.getLetterGrade() << endl;
    
    return 0;
}
