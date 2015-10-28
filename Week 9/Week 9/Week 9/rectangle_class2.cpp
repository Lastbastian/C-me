#include <iostream>

using namespace std;


class Rectangle
{
private:
    double width;
    double length;
    
public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};


void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double len)
{
    length = len;
}

double Rectangle::getWidth() const
{
    return width;
    
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const
{
    return length * width;
}

int main ()
{

    double number;
    double totalArea;
    Rectangle *kitchen;
    Rectangle *bedroom;
    Rectangle *den;
    
    kitchen = new Rectangle;
    bedroom = new Rectangle;
    den = new Rectangle;
    
    cout << "What is the kitchen's length? ";
    cin >> number;
    kitchen->setLength(number);
    cout << "What is the kitchen's width? ";
    cin >> number;
    kitchen->setWidth(number);
    
    cout << "What is the bedroom's length? ";
    cin >> number;
    bedroom->setLength(number);
    cout << "What is the bedroom's width? ";
    cin >> number;
    bedroom->setWidth(number);
    
    cout << "What is the den's length? ";
    cin >> number;
    den->setLength(number);
    cout << "What is the den's width? ";
    cin >> number;
    den->setWidth(number);
    
    totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();
    
    cout << "The total area of the rooms is: " << totalArea << endl;
    
    delete kitchen;
    delete bedroom;
    delete den;
    
    kitchen = 0;
    bedroom = 0;
    den = 0;
    
    return 0;
}