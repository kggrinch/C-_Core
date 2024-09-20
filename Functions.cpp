#include <iostream>

using namespace std;


void happyBirthday(string name)
{
  cout << "Happy Birthday to you!" << endl;
  cout << "Happy Birthday dear " << name << "!" << endl;
  cout << "Happy Birthday to you!" << endl;
}

// Example of having a function at the bottom
int addition(int num1, int num2); // function stub.

int main()
{

  // Methods in c++ are called functions. 
  // Functions in c++ must be on top of the main method since they need to be
  // declared before called.

  // To fix the issue with having the function on top. You can declare a function name
  // on top of the main function but then create it at the bottom. This is called
  // leaving a function stub.

  // Void function that sings happy birthday taking in a string name.
  string name = "Bob";
  happyBirthday(name);

  // addition function the returns a int sum of two ints and is located under main
  // but declared on top.
  int sum = addition(2, 2);
  cout << sum << endl; 

  return 0;
}

int addition(int num1, int num2)
{
  return num1 + num2;
}