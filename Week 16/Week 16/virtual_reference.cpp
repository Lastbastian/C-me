/*
 This situation is really the same as the first but it is worth mentioning. It is when a variable is declared as a reference to a base class object but sometimes is a reference to a derived class object. The following program illustrates this situation, using the same three classes.
*/

#include <iostream>
using namespace std;

class base {
public:
    virtual void vfunc() {                          // Again using virtual will produce the correct ouput
        cout << "This is base's vfunc()." << endl;
    }
};

class derived1 : public base {
public:
    void vfunc() {
        cout << "This is derived1's vfunc()." << endl;
    }
};

class derived2 : public derived1 {
public:
    void vfunc() {
        cout << "This is derived2's vfunc()." << endl;
    }
};

void f(base &r);

void f(base &r) {
    r.vfunc();
}

int main()
{
    base b;
    derived1 d1;
    derived2 d2;
    
    f(b);
    f(d1);
    f(d2);
}

