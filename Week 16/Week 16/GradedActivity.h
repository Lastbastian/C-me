#ifndef Week_15_GradedActivity_h
#define Week_15_GradedActivity_h


class GradedActivity
{
    
protected:
    double score;
    
public:
    GradedActivity()                    // Default Constructor
    { score = 0.0;  }
    
    GradedActivity(double s)            // Constructor
    { score = s; }
    
    void setScore(double s)             // Mutator
    { score = s; }
    
    double getScore() const              // Accessor
    { return score; }
    
    
    virtual char getLetterGrade() const;
};

#endif