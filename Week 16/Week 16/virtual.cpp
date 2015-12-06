/*
 Three situations in which it matters whether early binding or late binding is used. The first is when a program has a variable declared as a pointer to a base class object but which sometimes points to derived class objects THIS IS AN EXAMPLE.
 */

#include <iostream>

using namespace std;

class base
{
public: virtual void vfunc()                // "virtual" is added here so that the function uses late binding - default is to use early binding which produces incorrect results.
    {
        cout << "This is base's vfunc()." << endl;
    }
};

class derived1 : public base
{
public:
    void vfunc()
    {
        cout << "This is derived1's vfunc()." << endl;
    }
};

class derived2 : public base
{
public:
    void vfunc()
    {
        cout << "This is derived2's vfunc()." << endl;
    }
};

int main()
{
    base *p, b;
    derived1 d1;
    derived2 d2;
    
    p = &b;
    p -> vfunc();                           // equivalent to (*p).vfunc();
    
    p = &d1;
    p -> vfunc();
    
    p = &d2;
    p -> vfunc();
}



