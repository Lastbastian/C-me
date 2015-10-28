#include <iostream>
#include <iomanip>

using namespace std;

struct Rectangle
{
    int length;
    int width;
    
};

void displayRectangle(const Rectangle &r);
void getItem(Rectangle &r);

int main()
{
    Rectangle bigRectangle;
    
    getItem(bigRectangle);
    displayRectangle(bigRectangle);
    
    return 0;
}

void getItem(Rectangle &r)
{
    cout << "Enter the width: ";
    cin >> r.width;
    
    cout << "Enter the length: ";
    cin >> r.length;
}

void displayRectangle(const Rectangle &r)
{
    cout << "Length = " << r.length << endl;
    cout << "Width = " << r.width << endl;
}