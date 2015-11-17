
#ifndef Week_13_invitem_h
#define Week_13_invitem_h

using namespace std;

class invItem
{
    public:
        invItem();                                  // constructor
        invItem(const char *inDesc);                // *default constructor
        invItem(const invItem& right);              // *copy constructor
        ~invItem();                                 // *destructor
        invItem operator=(const invItem& right);    // *assignment opperator
        void setInfo(const char *inDesc, int inUnits);
        void setUnits(int inUnits);
        friend ostream& operator<<(ostream& out, const invItem& source);
        friend istream& operator>>(istream& in, invItem& target);
        char operator[](int index) const;          // []overload (value)
        char& operator[](int index);               // []overload (reference)
    
    private:
        char *desc;
        int units;
};


#endif

// *notes 4 functions you must have with a ptr in a class