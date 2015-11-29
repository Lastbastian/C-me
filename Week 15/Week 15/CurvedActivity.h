#ifndef Week_15_CurvedActivity_h
#define Week_15_CurvedActivity_h
#include "GradedActivity.h"

class CurvedActivity : public GradedActivity
{

protected:
    double rawScore;
    double percentage;
    
public:
    CurvedActivity() : GradedActivity()          // Default constructor
    {
        rawScore = 0.0;
        percentage = 0.0;
    }
    
    void setScore(double s)                     // Mutator - Overrides the base class function of setScore
    {
        rawScore = s;
        GradedActivity::setScore(rawScore * percentage);
    }
    
    void setPercentage(double c)
    { percentage = c; }
    
    double getPercentage()
    { return percentage; }
    
    double getRawScore()
    { return rawScore; }
};

#endif
