#include <iostream>

int main()
{
  // Dynamic Memory - Memory that is allocated after the program is already compiled and running.
  //                  Use the 'new' operator to allocate memory in the heap rather than the stack.

  //                  Useful when we don't know how much memory we will need. Makes our programs more flexible, especially when
  //                  accepting user input.

  // Remember: pointer = memory

  int *pNum = NULL; // A pointer with null address

  pNum = new int; // Pointer will hold int value

  *pNum = 21; // Pointer will hold int 21

  std::cout << "Address: " << pNum << '\n'; 
  std::cout << "Value: " << *pNum << '\n';

  delete pNum; // Clears the pointer of data

  std::cout << "deleted pNum: " << *pNum << "\n"; // Prints 0 since the value has been cleared up


  // Another example
  // In c++ you cant define a array with user input with a static array (original way of creating an array) because the array needs to be 
  // compiled and needs a size. Therefore if you want to create an array with user input for size it is best to do it like this:

  char *pGrades = NULL;
  int size;

  std::cout << "How many grades to enter in?: ";
  std::cin >> size;

  pGrades = new char[size]; 

  for(int i = 0; i < size; i++)
  {
    std::cout << "Enter Grade #: " << i + 1 << ": ";
    std::cin >> pGrades[i];
  }

  for (int i = 0; i < size; i++)
  {
    std::cout << pGrades[i] << " ";
  }

  delete[] pGrades;

  return 0;
}