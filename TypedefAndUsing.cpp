#include <iostream>
#include <vector> // vector import - this is an array

// This uses a typedef to reference this long datastructure which works like a hashmap.
// It is good practice to end the name with _t for typedef.
typedef std::vector<std::pair<std::string, int> > pairlist_t;

// Another example with string.
typedef std::string text_t;

// Another example with int.
typedef int number_t;

// Using keyword example. Using keyword is more populare since it is better with
// templates
using words_t = std::string; // using keyword for string. works just like typedef.
using integer_t = int; // using keywotd for int.




int main()
{
  // typedef - reserved keyword used to create an additional name (alias) for another
  //           data type. New identifier for an existing type.
  //           Helps wiht readablitiy and reduces typos.
  //           Use when there is a clear benefit.
  //           Largely typedef has been replaced with 'using' keyword
  //           (works better with templates)

  // This is where typedef is useful. Instead of using:
  std::vector<std::pair<std::string, int> > pairlist;
  // we can use the typedef name we gave it to declare the data stucture.
  pairlist_t pairlistWithTypedef;

  // Another example. Instead of using
  std::string name; 
  // we can use
  text_t nameWithTypedef = "Bro";

  std::cout << "String using namespace: " << nameWithTypedef << '\n';

  //Another example. Instead of using
  int number;
  // we can use
  number_t numberWithNamespace = 1;

  std::cout <<"Int using namespace: " <<numberWithNamespace << '\n';

  // Using keyword example
  words_t lastName = "G";
  integer_t age = 21;

  std::cout << "last name: " << lastName << " age: " << age;



  return 0;
}