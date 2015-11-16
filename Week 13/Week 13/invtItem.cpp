#include <iostream>
#include "invItem.h"

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