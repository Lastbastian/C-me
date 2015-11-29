#ifndef Week_15_Rectangle_h
#define Week_15_Rectangle_h

class Rectangle
{
    private:
        double width;
        double length;
        
    public:
        Rectangle()                             // Default constructor
        {
            width = 0.0;
            length = 0.0;
        }
        
        Rectangle(double w, double len)         // Constructor 2
        {
            width = w;
            length = len;
        }
        
        double getWidth()
        { return width; }
        
        double getLength()
        { return length; }
        
        double getArea()
        { return length * width; }
};

#endif
