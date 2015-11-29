#include "Cube.h"
#include <iostream>

using namespace std;

int main()
{
    double cubeWidth;
    double cubeLength;
    double cubeHeight;
    
    cout << "Enter the dimensions of a cube:\n";
    cout << "Width: ";
    cin >> cubeWidth;
    cout << "Length: ";
    cin >> cubeLength;
    cout << "Height: ";
    cin >> cubeHeight;
    
    Cube myCube(cubeWidth, cubeLength, cubeHeight);
    
    cout << "Here are the cube's dimensions:\n";
    cout << "\tWidth: " << myCube.getWidth() << endl;
    cout << "\tLength: " << myCube.getLength() << endl;
    cout << "\tHeight: " << myCube.getHeight() << endl;
    cout << "\tBase area: " << myCube.getArea() << endl;
    cout << "\tVolume: " << myCube.getVolume() << endl;
    
    return 0;
}