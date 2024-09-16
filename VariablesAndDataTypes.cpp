#include <iostream>

int main()
{
  // Integer
  int integerDataType; // Declaration
  integerDataType = 15; // Initialization

  // Double
  double doubleDataType = 15.564;

  // character
  char characterDataType = 'A';

  // boolean
  // Note booleans in c++ return 1 for true and 0 for false
  bool booleanDataType = false;

  // String (Object)
  std::string stringDataType = "Hello World!";

  // Pointer (data type that holds address memory)
  int *pNum = NULL;

  // Outputs
  std::cout << integerDataType << '\n';
  std::cout << doubleDataType << '\n';
  std::cout << characterDataType << '\n';
  std::cout << booleanDataType << '\n';
  std::cout << stringDataType << '\n';
  std::cout << pNum << '\n'; // Prints memory address of null
  std::cout << &pNum << '\n'; // Prints memory address of pNum
  
  return 0;
}