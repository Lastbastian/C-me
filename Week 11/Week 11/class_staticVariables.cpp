#include <iostream>

using namespace std;

// Tree class
class Tree
{
    private:
        static int objectCount;     // Static member variable
    
    public:
        Tree()                     // Constructor - defined inline
        {
            objectCount++;
        }
    
    int getObjectCount() const      // Accessor function for object count
        {
            return objectCount;
        }
};


int Tree::objectCount = 0;          // Definition of the static member variable - written outside the class.



// Program
int main()
{
    // Define three Tree objects.
    Tree oak;
    Tree elm;
    Tree pine;
    Tree douglessFir;
    Tree redwood;
    
    cout << "We have defined " << redwood.getObjectCount() << " Tree objects." << endl;
    
    return 0;
}