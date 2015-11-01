#ifndef A11
#define A11
#include <iostream>

class fraction
{
    private:
        int numerator;
        int denominator;
    
    public:
        fraction(int n = 0, int d = 1);             // Initilization constructor
        friend fraction operator+(const fraction& left,
                              const fraction& right);
        friend fraction operator-(const fraction& left,
                                  const fraction& right);
        friend fraction operator*(const fraction& left,
                                  const fraction& right);
        friend fraction operator/(const fraction& left,
                                  const fraction& right);
        friend bool operator<(const fraction &left,
                              const fraction &right);
        friend bool operator<=(const fraction &left,
                               const fraction &right);
        friend bool operator>(const fraction &left,
                              const fraction &right);
        friend bool operator>=(const fraction &left,
                               const fraction &right);
        friend bool operator==(const fraction &left,
                               const fraction &right);
        friend bool operator!=(const fraction &left,
                               const fraction &right);
        friend std::ostream& operator<<(std::ostream& out,
                                        const fraction& right);
//    
//    
//    
//    friend operator++();
//    feetInches operator++(int);
//    feetInches operator+=(const feetInches& right);
};

#endif