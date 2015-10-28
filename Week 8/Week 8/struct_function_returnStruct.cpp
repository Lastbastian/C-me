#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Constant for PI.
const double PI = 3.14159;

// Struct declaration
struct Circle
{
    double radius;
    double diameter;
    double area;
};

// Function prototypes
Circle getInfo();

int main()
{
    Circle c;                               // Define a structure variable
    
    // Get data about the circle.
    c = getInfo();
    
    // Calculate the circle's area.
    c.area = PI * pow(c.radius, 2.0);

    // Display the circle data
    
    cout << "The radius and area of the circle are:\n";
    cout << fixed << setprecision(2);
    cout << "Radius: " << c.radius << endl;
    cout << "Area: " << c.area << endl;
    return 0;
}


// Function uses a local varialbe, tempCircle, which is a circle structure. tempCircle is then returned from the function.
Circle getInfo()
{
    Circle tempCircle;                      // Temporary structure variable
    
    // Store circle data in the temporary variable.
    cout << "Enter the diameter of a circle: ";
    cin >> tempCircle.diameter;
    tempCircle.radius = tempCircle.diameter / 2.0;
    
    // Return the temporary variable.
    return tempCircle;    
}


