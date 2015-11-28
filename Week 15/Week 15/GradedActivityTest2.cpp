#include <iostream>
#include <iomanip>
#include "FinalExam.h"

using namespace std;

int main()
{
    int questions;
    int missed;
    
    cout << "How many question are on the Final Exam? ";
    cin >> questions;
    
    cout << "How many questions did the student miss? ";
    cin >> missed;
    
    FinalExam test(questions, missed);
    
    cout << setprecision(2);
    cout << "\nEach qeustion counts " << test.getPointsEach() << " points.\n" << endl;
    cout << "The exam score is " << test.getScore() << endl;
    cout << "The exam grade is " << test.getLetterGrade() << endl;
}