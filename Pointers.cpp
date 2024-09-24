#include <iostream>
#include <cstring>

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
  //                    [address] of where the pizza is located instead of caring
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



  // Cherno Pointer video
  std::cout << "\n\nCherno Pointer video" << "\n";

  // void* ptr = 0; // This is the same as null
  // void* ptr = NULL; // You can use nullptr which was made specific for holding null pointers
  void*ptr = nullptr;

  int var = 8;
  int *varP = &var;
  *varP = 10;

  std::cout << var << '\n';

  // This was all created on the stack now this will show an example of creating memory on the heap

  char* buffer = new char[8]; // This just allocated 8 bytes of memory into the heap and gives us the pointer of the beginning of that memory
  memset(buffer, 0, 8); // A function from the cstring header which fills in the memory with data that we specify. So this fills the 8 bytes of memory with 0.


  char** bufferPtr = &buffer; // This is a double pointer since buffer is already a pointer and I am creating a bufferPtr which is another pointer to the buffer pointer.
  //                             Example: bufferPtr -> buffer -> 8 bytes of allocated memory  

  delete[] buffer; // Deletes/deallocates the memory from the heap.

  return 0;
}