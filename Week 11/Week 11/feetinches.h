// file: feetinches.h

#ifndef FEETINCHES_H
#define FEETINCHES_H

class feetInches
{
private:
    int feet;
    int inches;
    void simplify();
public:
    feetInches(int inFeet = 0, int inInches = 0);       // Constructor
    friend feetInches operator+(const feetInches& left,
                                const feetInches& right);
    
    friend bool operator<(const feetInches &left, const feetInches &right);
    friend std::ostream& operator<<(std::ostream& out, const feetInches& right);
    feetInches operator++();
    feetInches operator++(int);
    feetInches operator+=(const feetInches& right);
    void print() const;
};

#endif