#include <iostream>


using namespace std;


class Demo
{
    public:
        Demo();                             // Constructor
};

Demo::Demo()                                // Constructor function  NOTE* no return type
{
    cout << "Welcome to the constructor:\n";
}

int main()
{
    Demo demoObject;                        // Define a demo object

    cout << "This program demonstrates an object with a constructor. \n";
    return 0;
}