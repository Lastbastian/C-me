#ifndef A12
#define A12
#include <iostream>

class fraction
{
private:
    int numerator;
    int denominator;
    void simplify();
    int gcd(int n, int d);
    
public:
    fraction(int inNumerator = 0, int inDenominator = 1);             // Initilization constructor
    fraction operator++();
    fraction operator++(int);
    fraction operator--();
    fraction operator--(int);
    fraction operator+=(const fraction& right);
    fraction operator-=(const fraction& right);
    fraction operator*=(const fraction& right);
    fraction operator/=(const fraction& right);
    
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
    friend std::istream& operator>>(std::istream& out,
                                    const fraction& right);
};

#endif