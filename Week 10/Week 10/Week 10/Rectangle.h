//
//  Rectangle.h
//  Week 10
//
//  Created by Chris Bastian on 10/23/15.
//  Copyright (c) 2015 Chris Bastian. All rights reserved.
//

#ifndef __Week_10__Rectangle__
#define __Week_10__Rectangle__

#include <stdio.h>

class Rectangle
{
private:
    double width;
    double length;
    
public:
    Rectangle(double, double length = 100);      // Constructor w/arguments. Length is set to a default
    void setWidth(double);
    void setLength(double);
    // inline definitions
    double getWidth() const
    { return width; }
    
    double getLength() const
    { return length; }
    
    double getArea() const
    { return width * length; }
};

#endif /* defined(__Week_10__Rectangle__) */
