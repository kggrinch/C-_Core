/*
 * Pointer2.cpp
 *
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/09/18
 *
 * A pointer is a primitive type that can hold a memory address. This
 * applies not only to data, but also code, as shown in this example.
 *
 * Having indicated that, this is not the best way to pass a function
 * as and argument to another function. A better way is to encapsulate
 * the function in a class and overload the "()" (function call)
 * operator.
 */

#include <cmath>
#include <iostream>
#define MY_PI 3.14
using namespace std;

// typedef creates an alias to a type; it is "syntactic sugar", but it
// is NOT a preprocessor directive like #define.
// Note the parentheses; you need to do this or else you'll be defining a
// type which is a function that returns a pointer to a double.
typedef double (*functionType)(double x);

void displayFVal(functionType f, double input)
{
  cout << "f(" << input << ") = " << f(input) << endl;
}

// This is an example without using typedef. if we wanted to pass a function to a function we would have to write this code over and over.
void displayFValWithoutTypedef(void (*f)(double), double input)
{
  f(input);
}


// Two functions
double f1(double d)
{
  return d * MY_PI;
}

double f2(double d)
{
  return d*d;
}

void f3(double d)
{
  cout <<"f(3) = " << d << endl;
}


int main()
{

  // Function pointers - In c++ you are able to pass functions to other functions as data types which can be used inside those functions. This is done by passing
  //                     a pointer that points to the address of a function, into a function which then the function can call on the pointer and access the function that the pointer is referencing. 

  // syntax: returnType (*functionNamePointer) (parameter type)


  cout << "Here we go:" << endl;
  displayFVal(f1, 2.0);
  displayFVal(f2, 2.0);
  displayFValWithoutTypedef(f3, 3.0);
}
