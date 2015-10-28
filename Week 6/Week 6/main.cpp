#include <iostream>
#include <iomanip>

using namespace std;

int main()

{

    int x = 25;
    int *ptr; // this is initializing a *ptr variable (must use * in initialization)
    
    ptr = &x; // this is assigning &x(which is the memory address of x) to the ptr variable
    
    
    cout << "The size of x is " << sizeof(x) << endl;
    
    cout << "The address of x is " << ptr << endl;
    cout << "The address of x is " << &x << endl;
    
    cout << "The value of x is " << x << endl;
    cout << "The value of x is " << *ptr << endl;
    
    cout << "Working with the value of x using *ptr... " << endl;
    cout << "*ptr = 100" << endl;
    *ptr = 100;
    
    cout << "Now the value of *ptr is " << *ptr << endl;
    cout << "and x is the same: " << x << endl;
    
    *ptr += 50;
    
    cout << "Now the value is " << *ptr << " and " << x << endl;
    
    return 0;    
}

// using * on the ptr variable "dereferences the variable" and accesses the value of what that variable is pointing to.  *ptr is pointing to the memory location of x (&x).  The value stored here is 25.  so *ptr is 25.  when we use just the ptr variable (w/o the *) we are access the memory address of x.  so ptr would be 0x7fff5fbff83c