#include <iostream>

const int X = 15; // A global variable that is const


// Example of const in functions of classes
class Family
{
  private:
    int size = 5;
  public:
    int sizeOfFamily() const // This const keyword makes sure that the function in this class does not change any variables that is in the class
      {
          // size = 10; // This wont work
          return size;
      }
};

// Declared function
void printInfo(const std::string &name, const int &age);

// Decalred function
void printGlobalVariable(const int& X) const;


int main()
{
  // const keyword - specifics that a variable's value is constant.
  //                 Tells the compiler to prevent anything from modifying it.
  //                 (read-only)

  // make these constant to keep the variables from changing.
  const double PI = 3.14;
  const double RADIUS = 10;
  #define kCardSize = 52; // Another way to define a const

  // Calculatin circumference using the two constants
  double circumference = 2 * PI * RADIUS;

  // Printing circumference
  std::cout << circumference << "cm" << '\n'; 

  // constant function - A constant function can only be made inside a class, and it is used for when you want to do something in a function but you dont want to allow that function
  //                     to modify the classes attributes. Used for stuff like getSize() method.

  // Initializing and printing family size
  Family family;
  std::cout << family.sizeOfFamily() << '\n';

  // Constant parameter - a parameter that is effectively read-only. Code is more secure and conveys intent. Useful for references and pointers
  printInfo("Bob", 21);


  printGlobalVariable(X);



  return 0;
}

void printInfo(const std::string &name, const int &age)
{
    // name = "Not Bob"; // These are not allowed since name and age are const and cannot be modified
    // age = 0; 

    std::cout << name << '\n';
    std::cout << age << '\n';
};

 // You cannot apply const on global variables and must use it inside object functions.
void printGlobalVariable(const int& X) const
{
  std::cout << X << "\n";
}