
#ifndef Week_13_invitem_h
#define Week_13_invitem_h

using namespace std;

class invItem
{
    public:
        invItem(); // constructor
        invItem(const char *inDesc); //
        void setInfo(const char *inDesc, int inUnits);
        void setUnits(int inUnits);
        friend ostream& operator<<(ostream& out, const invItem& printMe);
    private:
        char *desc;
        int units;
};


#endif
