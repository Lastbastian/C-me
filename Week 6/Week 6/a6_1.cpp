/*
	Name: Chris Bastian
	Class: CS110B-META-FALL-2015
	Date: Thursday, Sept. 24th
	Instructor: David Harden
	File Name: a7_1.cpp
    Desc: Pointer Exercises
 */


#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
void noNegatives(int *x);
void swap(int *x, int *y);

int main()
{
//    Create two integer variables named x and y
    int x, y;
    
//    Create an int pointer named p1
    int *p1;
    
//    Store the address of x in p1
    p1 = &x;
    
//    Use only p1 (not x) to set the value of x to 99
    *p1 = 99;
    
//    Using cout and x (not p1), display the value of x
    cout << x << endl;
    
//    Using cout and the pointer p1 (not x), display the value of x
    cout << *p1 << endl;
    
    
//    Store the address of y into p1
    p1 = &y;
    
//    Use only p1 (not y) to set the value of y to -300
    *p1 = -300;
    
//     Create two new variables: an int named temp, and an int pointer named p2. Make p2 point to x.
    int temp, *p2;
    p2 = &x;
    
//    Use only temp, p1, and p2 (not x or y) to swap the values in x and y (this will take a few statements. Don't use a swap function)
    cout << "X = " << x << " Y = " << y << endl;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "X = " << x << " Y = " << y << endl;
    
//    Invoke the function twice: once with the address of x as the argument, and once with the address of y
    
    noNegatives(&x);
    noNegatives(&y);
    
//    Use p2 to display the values in x and y (this will require both assignment statements and cout statements). You can use x and y in assignment statements, but not in your cout statement. this should produce the output
//    x is: 0
//    y is: 99
    
    cout << "The value in X is: " << *p2 << endl;
    p2 = &y;
    cout << "The value in Y is: " << *p2 << endl;
    
//    Create an int array named 'a' with two elements. Make p2 point to the first element of a.
    int a[2];
    p2 = &a[0];
    
//    Use only p2 and x (not a) to initialize the first element of a with the value of x.
    *p2 = x;
    
//    Use only p2 and y (not a) to initialize the second element of a with the value of y
    p2 = &a[1];
    *p2 = y;
 
//    Using cout, display the address of the first element in a
    cout << "The first element in the array a is: " << a[0] << endl;
//    Using cout display the address of the second element in a
    cout << "The second element in the array a is: " << a[1] << endl;
    
//    Use p1, p2, and temp to swap the values in the two elements of array 'a'. (first point p1 at a[0], then point p2 at a[1], then do not use "a" again. After this the swapping steps should look very similar to step 10. Don't use a swap function.)
    p1 = &a[0];
    p2 = &a[1];
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
//    Display the values of the two elements. (The first element should be 99, the second 0).
    cout << "The first element in the array a is: " << a[0] << endl;
    cout << "The second element in the array a is: " << a[1] << endl;
    
//    Invoke your swap function with the addresses of x and y (using the address-of operator), then print their values. (x should be 99, y should be 0).
    swap(&x, &y);
    cout << "The current value of X is: " << x << " and Y is: " << y << endl;
    
//    Invoke your swap function with the address of the two elements in array 'a', then print their values. (a[0] should be 0, a[1] should be 99)
    swap(&a[0], &a[1]);
    cout << "The first element in the array a is: " << a[0] << " the second is: " << a[1] << endl;
    
    
    return 0;
}


// Write a function with the following signature: void noNegatives(int *x). The function should accept the address of an int variable. If the value of this integer is negative then it should set it to zero

void noNegatives(int *x)
{
    if (*x < 0)
    {
        *x = 0;
    }
}


// Write a function named 'swap' that accepts two pointers to integers as arguments, and then swaps the contents of the two integers. Do not use any reference parameters.

void swap(int *x, int *y)
{
    int temp;
    
    temp = *y;
    *y = *x;
    *x = temp;
}


/* OUTPUT

 99
 99
 X = 99 Y = -300
 X = -300 Y = 99
 The value in X is: 0
 The value in Y is: 99
 The first element in the array a is: 0
 The second element in the array a is: 99
 The first element in the array a is: 99
 The second element in the array a is: 0
 The current value of X is: 99 and Y is: 0
 The first element in the array a is: 0 the second is: 99
*/