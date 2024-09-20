#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // Almost all numbers in c++ work like java

  int wnum = 5;
  double dnum = 5.5;

  int sum = wnum + dnum; // Notice how 5 + 5.5 will equal 10 since sum is integer.
  cout <<"int sum = wnum + dnum: " << sum << endl;

  // However, if you do print while operation between decimal and integer you will
  // always get a decimal back.
  cout << "5 + 5.5 : " << 5+5.5 << endl; 

  // If you do integer operation you will always get an integer value back
  cout << "10 / 3 : " << 10/3 << endl;

  // Adding one
  sum++;
  cout << "sum++: " << sum << endl;
  sum--;
  cout << "sum--: " << sum << endl;

  // Adding to variable
  sum += 40;
  cout << "sum += 40: " << sum << endl;

  sum -= 40;
  cout << "sum -= 40: " << sum << endl;

  sum /= 40;
  cout << "sum /= 40: " << sum << endl;

  // Math Operations - Need import #include <cmath>
  
  // Power operation
  cout << "pow(3, 2): " << pow(3, 2) << endl; 

  // Square root operation
  cout << "sqrt(16): " << sqrt(16) << endl;

  // Round operation
  cout << "round(4.3): " << round(4.3) << endl;

  // Automaticlly rounds up
  cout << "ceil(4.3): " << ceil(4.3) << endl;

  // Automaticlly rounds down
  cout << "floor(4.7): " << floor(4.7) << endl;

  // Takes two numbers and returns the greater number
  cout << "fmax(3, 10): " << fmax(3, 10) << endl;

  // Takes two numbers and returns the smaller number
  cout << "fmin(3, 10): " << fmin(3, 10) << endl;
  
  return 0;
}