#include <iostream>

using namespace std;

int main()
{
  // output          end line
  cout << "Hello " << endl;
  cout << "World!" << endl;

  // Storing strings in a variable.
  string phrase = "Hello World!";
  cout << phrase << endl;

  // String methods
  
  // length()
  cout << "phrase.length(): " << phrase.length() << endl;

  // access individual characters.
  cout << "Accessing string char: " << phrase[0] << endl; // Can change phrase[position]
  phrase[phrase.length()] = '!';

  // Modifing characters in string.
  cout << "phrase[phrase.length()] = '!': " << phrase << endl; 

  // Finding a string inside of string. Kind of like findFirstOccurance in java
  // Returns the first index at which the string(World) occurs
  // in the string(Hello World!)
  cout <<"phrase.find('World', 0): " << phrase.find("World", 0) << endl; // Output is 6 becausse it counts spaces as an index.


  // Substr (substring). Same as substring in java.
  string newPhrase = phrase.substr(6, phrase.length()); // Keep in mind C++ also counts spaces as characters
  cout <<"phrase.substr(6, phrase.length()): " << newPhrase << endl;



  
  return 0;
}