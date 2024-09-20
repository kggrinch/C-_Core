#include <iostream>

int main()
{

  // Pointers =  variable that stores a memory address of another variable
  //             You could think of pointers as just another data type which are 
  //             memory addresses. 
  //             sometimes it's easier to work with an address
  //              

  // Pointers = Memory address 

  // Example of usage - If you have a stack of pizza and want to give your neighbors
  //                    pizza, it is easier to go door to door and tell people the
  //                    [address] of where the pizza is located instead of carring
  //                    the stack of pizza door to door.

  // & address-of operator
  // * dereference operator

  double gpa = 3.9;
  std::cout <<"&gpa: " << &gpa << '\n'; // Prints memory address of gpa
  std::cout <<"*&gpa: " << *&gpa << '\n';


  std::string name = "Bro"; // Variable name

  // Pointer
  std::string *pName = &name; // notice the pointer has the same data type as to what its pointing

  std::cout <<"pName: " << pName << std::endl; // Prints the address location of name
  std::cout <<"*pName: " <<*pName << std::endl; // With *pName prints the variable


  // Another Example
  int age = 21;

  // Pointer
  int *pAge = &age;
  std::cout <<"*pAge: " <<*pAge << std::endl;


  // Usage example with array.
  std::string freePizza[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};
  
  // Pointer
  // Here we dont need to use & (address operator) since freePizza already
  // gives us the address of the array.
  std::string *pFreePizza = freePizza; 

  std::cout <<"*pFreePizza: " << *pFreePizza << '\n'; // This will give me the first element in array

  // Could also print using the pointer.
  // This prints the second element since pFreePizza is an address and adding one
  // makes it move to the next address.
  // Example Pizza1 address = 0x6afee0
  //         Pizza2 address = 0x6afee0 + 1 = 0x6afee1
  std::cout << *(pFreePizza + 1);




  return 0;
}