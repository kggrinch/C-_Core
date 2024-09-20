#include <iostream>

/* Namespace - Provides a solution for preventing name conflicts in large projects.
                 Each entity needs a unique name. A namespace allows for identically
                 named entities as long as the name spaces are different
  */    

namespace first
{
  int x = 1;
}
namespace second
{
  int x = 2;
}

int main()
{   

  // If you want to use a namespace you can do it like this to reference the namespace.
  using namespace first;
  std::cout << "printing x using the using namespace keyword: " << x << '\n';

  // creating local variable. This variable will take priority.
  int x = 0;

  // Since we did not directly state which namespace we are using for x it will
  // display the local version of x since it is priority in the main method.
  std::cout << "local x: " << x << '\n'; // Output: 0

  // :: scope resolution operator
  // This now refers to the version of x that is found in the first namespace.
  std::cout << "first namespace x: " << first::x << '\n'; // Output: 1

  // This now refers to the version of x that is found in the second namespace.
  std::cout << "second namespace x: " << second::x << '\n';


  // some people use this syntax which cuts down on some of the writing. However,
  // it is better to use the original std::string name = "bro";
  using std::cout;
  using std::string;
  
  string name = "bro";
  cout << "Hello " << name;
  
  return 0;
}