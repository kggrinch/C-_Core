#include <iostream>

int main()
{
  // const keyword - specifices that a variable's value is constant.
  //                 Tells the compiler to prevent anything from modifying it.
  //                 (read-only)

  // make these constant to keep the variables from changing.
  const double PI = 3.14;
  const double RADIUS = 10;

  // Calculatin circumference using the two constants
  double circumference = 2 * PI * RADIUS;

  // Printing circumference
  std::cout << circumference << "cm"; 

  return 0;
}