//
//  Rectangle.cpp
//  Week 10
//
//  Created by Chris Bastian on 10/23/15.
//  Copyright (c) 2015 Chris Bastian. All rights reserved.
//
#include "Rectangle.h"
#include <iostream>

using namespace std;


Rectangle::Rectangle(double w, double len)                      // constructor function
{
    width = w;
    length = len;
}

void Rectangle::setWidth(double w)
{
    if (w >= 0)
        width = w;
    else
    {
        cout << "Invalid width\n";
        exit(EXIT_FAILURE);
    }
}

void Rectangle::setLength(double len)
{
    if (len >=0)
        length = len;
    else
    {
        cout << "Invalid width\n";
        exit(EXIT_FAILURE);
    }
}
