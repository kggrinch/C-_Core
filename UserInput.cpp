#include <iostream>
#include <cmath>

int main()
{ 
  
  // cout << (insertion operator)
  // cin >> (extraction operator)

  std::string name; // declared string name
  int age; // Declared int age. // could change datatypes for different types.

  std::cout << "Enter full name: "; 
  // std::cin >> name; // This would not work since a full name has a space and this only gets the string up to the space
  std::getline(std::cin, name); // This function gets the whole line that the user enters and stores it into the name variable. 
  //                               If you need a string that include white spaces use the getline() method.

  std::cout << "Enter age: "; // Prompt to enter age. This outputs: cout <<
  std::cin >> age; // This stores the users answer into the age variable. This inputs: cin >>

  // Outputs name and age.
  std::cout << "Hello " << name << "," << std::endl;
  std::cout << "your age is " << age << "\n";


  // One issue with getline(). If you switch the order of the questions there will be an issue because if you accept a input
  // using cin followed by getline() the cin input buffer puts a /n (new line character) that does not get picked up, so when the getline()
  // method is called it acceptes the /n (new line character) as the input from user making it store an empty \n character in name.

  std::cout << "Issue with cin followed by getline()" << std::endl;

  // Switcing the order of the questions
  std::cout << "Enter age: "; 
  std::cin >> age; 

  // To prevent this from happeing add: >> std::ws after cin. This eliminates any newline characters or white spaces before user input.
  std::cout << "Enter full name: "; 
  std::getline(std::cin >> std::ws, name); 

  std::cout << "Hello " << name << "," << std::endl;
  std::cout << "your age is " << age;

  return 0;
}