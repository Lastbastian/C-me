
invItem()
{
    units = 0;
    desc = new char[1];
    strcpy(desc, "");
}


invItem(const char *inDesc)                             // Default constructor
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

void setUnits(int inUnits)
{
    units = inUnits;
}

friend ostream& operator<<(ostream& out, const invItem& printMe)
{



}