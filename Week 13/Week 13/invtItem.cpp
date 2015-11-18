// This is the file "invitem.cpp"

#include <iostream>
#include <cassert>
#include "invitem.h"
using namespace std;

invItem::invItem()
{
    units = 0;
    desc = new char[1];
    strcpy(desc, "");
}

invItem::invItem(const char *inDesc)
{
    units = 0;
    desc = new char[strlen(inDesc) + 1];
    strcpy(desc, inDesc);
}

invItem::invItem(const invItem& right)
{
    units = right.units;
    desc = new char[strlen(right.desc) + 1];
    strcpy(desc, right.desc);
}

invItem::~invItem()
{
    delete [] desc;
}

invItem invItem::operator=(const invItem& right)
{
    if (this != &right){
        units = right.units;
        delete [] desc;
        desc = new char[strlen(right.desc) + 1];
        strcpy(desc, right.desc);
    }
    return *this;
}

void invItem::setInfo(const char *inDesc, int inUnits)
{
    units = inUnits;
    delete [] desc;
    desc = new char[strlen(inDesc) + 1];
    strcpy(desc, inDesc);
}

void invItem::setUnits(int inUnits)
{
    units = inUnits;
}

ostream& operator<<(ostream& out, const invItem& source)
{
    out << source.units << " " << source.desc;
    return out;
}

istream& operator>>(istream& in, invItem& target)
{
    while (isspace(in.peek())){
        in.ignore();
    }
    
    char temp[128];
    in.getline(temp, 127, ':');
    delete [] target.desc;
    target.desc = new char[strlen(temp) + 1];
    strcpy(target.desc, temp);
    in >> target.units;
    
    return in;
}

char invItem::operator[](int index) const
{
    assert(index >= 0 && index < strlen(desc));
    return desc[index];
}

char& invItem::operator[](int index)
{
    assert(index >= 0 && index < strlen(desc));
    return desc[index];
}
