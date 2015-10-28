//
//  rectangle_prog.cpp
//  Week 10
//
//  Created by Chris Bastian on 10/23/15.
//  Copyright (c) 2015 Chris Bastian. All rights reserved.
//
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    double houseWidth;
    double houseLength;
    
    cout << "In feet, how wide is your house? ";
    cin >> houseWidth;
    
    cout << "In feet, how long is your house? ";
    cin >> houseLength;

    Rectangle box(houseWidth, houseLength);      // instance of the Rectangle class
    
    // Display
    
    cout << "Here is your houses' data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    return 0;
}