class IntArray
{
private:
    int *aptr;                      // Pointer to the array
    int arraySize;                  // Holds the array size
    void subscriptError();          // Handles invalid subscripts
    
public:
    IntArray(int s);                // Constructor
    IntArray(const IntArray &obj);     // Copy Constructor
    ~IntArray();                    // Destructor
    
    int size() const                // Returns the array size
    {return arraySize;}
    
    int &operator[](const int &sub);   // Overloaded [] operator
};

