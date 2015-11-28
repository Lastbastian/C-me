#include "FinalExam.h"

void FinalExam::set(int questions, int missed)
{
    double numericScore;
    
    numQuestions = questions;
    numMissed = missed;
    
    pointsEach = 100.0 / numQuestions;
    
    numericScore = 100.0 - (missed * pointsEach);
    
    setScore(numericScore);
    
    adjustScore();
}


void FinalExam::adjustScore()
{
    double fraction = score - static_cast<int>(score);
    
    if (fraction >= 0.5)                                // Adjust the score var in GradedActivity Class!!
    {
        score += (1.0 - fraction);
    
    }
}
