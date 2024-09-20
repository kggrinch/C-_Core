#include <iostream>


using namespace std;

// Example of a Non-template function. Only works with int.
int max(int x, int y)
{
    return (x > y) ? x : y;
}

// Example of a template function. Works with any data type
template <typename T> // This is a template definition to declare what T is, in java it does this automaticaly.
T templateMax(T x, T y)
{
    return (x > y) ? x : y;
}

// Example of a template function that works with two different data types
template <typename T, typename U> // Declares two separate data types
auto templateMaxTwo(T x, U y) // At this point you can choose what the return type will be, but you can also use the auto keyword to let the compiler deduce what the return type will be.
{
    return (x > y) ? x : y;
}

// How auto deduces the return type 
// - If its value by value return value
// - If its reference by reference return reference
// - If its pointer return pointer
// - If its Int by double returns double


int main()
{
    // Templates - Describes what a function or class looks like. Can be used to generate as many overloaded functions or class as needed, each using different data types.
    //             Templates in c++ kinda work like generics in java. You use them when you want to create a function or class that works with any data type.

    // This calls the max function and it only works with ints.
    cout <<"Max without template: " <<max(1, 2) << endl;

    // This calls the templateMax function and it works with any data type
    cout <<"Int: " << templateMax(1, 2) << endl; // Int
    cout <<"Double: " << templateMax(1.1, 2.1) << endl; // Double
    cout <<"Char: " << templateMax('1', '2') << endl; // Char
    cout <<"String: " << templateMax("1", "2") << endl; // String
    
    // This calls the templateMaxTwo function and it works with any two different data types
    cout << "Int and Double: " << templateMaxTwo(1, 2.1) << endl;

    return 0;
}


// Go deeper in this and write a class template example