// This is the file "invitem.h"

#ifndef INVITEM_H
#define INVITEM_H
#include <iostream>
using namespace std;

class invItem {
public:
    invItem();
    invItem(const char *inDesc);
    invItem(const invItem& right);
    ~invItem();
    invItem operator=(const invItem& right);
    void setInfo(const char *inDesc, int inUnits);
    void setUnits(int inUnits);
    friend ostream& operator<<(ostream& out, const invItem& source);
    friend istream& operator>>(istream& in, invItem& target);
    char operator[](int index) const;
    char& operator[](int index);
private:
    char *desc;
    int units;
};

#endif