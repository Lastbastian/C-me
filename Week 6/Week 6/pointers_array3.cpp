#include <iostream>

using namespace std;

int main()

{
    int set[8] = {5,10,15,20,25,30,35,40};
    int *nums = set;
    
    cout << "The numbers in set are:\n";
    cout << *nums << " ";
    
    while (nums < &set[7]) // this is comparing memory addresses
    {
        nums++;
        cout << *nums << " ";
    }
           
    cout << "\nThe numbers in set backward are:\n";
    cout << *nums << " ";
           
    while (nums > set)
    {
        nums--;
        cout << *nums << " ";
    }
}