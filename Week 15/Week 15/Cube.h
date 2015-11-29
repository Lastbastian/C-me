#ifndef Week_15_Cube_h
#define Week_15_Cube_h
#include "Rectangle.h"

class Cube : public Rectangle
{
    protected:
        double height;
        double volume;
        
    public:
        Cube() : Rectangle()                                            // Default constructor w/call to base class constructor
        {
            height = 0.0;
            volume = 0.0;
        }
        
        Cube(double w, double len, double h) : Rectangle(w, len)       // constructor 2 w/call to base class constructor passing
        {
            height = h;
            volume = getArea() * h;
        }
        
        double getHeight()
        { return height; }
        
        double getVolume()
        { return volume; }
};

#endif