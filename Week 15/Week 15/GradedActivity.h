#ifndef Week_15_GradedActivity_h
#define Week_15_GradedActivity_h


class GradedActivity
{
private:
    GradedActivity()                    // Default Constructor
        { score = 0;  }
    
    GradedActivity(double s)            // Constructor
        { score = s; }
    
    void setScore(double s)             // Mutator
        { score = s; }
    
    doubl getScore() const              // Accessor
        { return score; }
};


#endif
