#include <iostream>

using namespace std;

// swap function declaration (by value)
void swapByValue(string x, string y);

// swap function declaration (by reference)
void swapByReference(string &a, string &b);


int main()
{
    // Pass by Value - This is when you pass a value to a function but you are not actually passing the same exact value but a copy of that value.
    //                 Changing the value in the function will not change the original value 

    // Pass by Reference - This is when you pass a value to a function but you are actually passing the address of the exact value therefore the function has access to the exact 
    //                     value at the given address.
    //                     This uses the address operator &. 
    //                     Changing the value in the function will change the original value

    // Example of swap by value
    cout << "[Swap by value] " << endl;

    string x = "Kool-Aid";
    string y = "Water";

    // Before swap
    cout << "Before swap: " << endl; 
    cout << "main x: " << x << endl;
    cout << "main y: " << y << endl;

    swapByValue(x, y);

    // After swap
    cout << "\nAfter swap" << endl;
    cout << "main x: " << x << endl;
    cout << "main y: " << y << endl;

    // Notice how the x and y have not changed, only the x and y in the function have changed. This is because we have sent copies of x and y to the function
    // There are four different variables right now.


    // Example of swap by reference
    cout << "\n[Swap by Reference] " << endl;

    string a = "Coffee";
    string b = "Tea";

    // Before swap
    cout << "Before swap: " << endl; 
    cout << "main a: " << a << endl;
    cout << "main b: " << b << endl;

    swapByReference(a, b);

    // After swap
    cout << "\nAfter swap: " << endl; 
    cout << "main a: " << a << endl;
    cout << "main b: " << b << endl;

    // Notice how the a and b have changed. This is because we sent the address of a and b to the function so the function was working with the original data using the memory address

    return 0;
}

void swapByValue(string x, string y)
{
    // This algorithm swaps the values in x to y and y to x
    string temp;
    temp = x;
    x = y;
    y = temp;

    cout << "\nInside function" << endl;
    cout << "in function x: " << x << endl;
    cout << "in function y: " << y << endl;
}

void swapByReference(string &a, string &b)
{
    // This algorithm swaps the values in x to y and y to x
    string temp;
    temp = a;
    a = b;
    b = temp;

    cout << "\nInside function" << endl;
    cout << "in function a: " << a << endl;
    cout << "in function b: " << b << endl;

}