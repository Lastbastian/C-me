#ifndef AUXIL_H
#define AUXIL_H

class Budget;               // Forward declaration of Budget class

// Aux class declaration

class AuxiliaryOffice
{
private:
    double auxBudget;
public:
    AuxiliaryOffice()                       // Constructor
        { auxBudget = 0; }
    
    double getDivisionBudget() const        // Accessor function    
        { return auxBudget; }
    
    void addBudget(double, Budget &);
};

#endif