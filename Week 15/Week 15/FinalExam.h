#ifndef Week_15_FinalExam_h
#define Week_15_FinalExam_h
#include "GradedActivity.h"

class FinalExam : public GradedActivity         // delcared derivitive of GradedActivity class
{
    private:
        int numQuestions;
        double pointsEach;
        int numMissed;
    
    public:
        FinalExam()                             // Default constructor
        {
            numQuestions = 0;
            pointsEach = 0;
            numMissed = 0;
        }
    
        FinalExam(int questions, int missed)    // Constructor
        {
            set(questions, missed);
        }
    
        void set(int, int);                     // Mutator function
        void adjustScore();                     // Mutator function accessing the protected var score in                                                                                        GradedActivity class
    
        double getNumQuestions() const          // Accessor function
        {
            return numQuestions;
        }
    
        double getPointsEach() const            // Accessor function
        {
            return pointsEach;
        }
    
        int getNumMissed() const
        {
            return numMissed;
        }
    
    
    
    
    
    

};

#endif
