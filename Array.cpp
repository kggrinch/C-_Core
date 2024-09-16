#include <iostream>

using namespace std;

int main()
{

  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  // Returns memory address.
  cout << array << endl;

  cout << array[0] << endl;

  array[8] = 10;
  cout << array[8] << endl;

  // Array with declared size
  int arrayWithSize[5];
  arrayWithSize[0] = 1;
  arrayWithSize[1] = 2;
  arrayWithSize[2] = 3;
  arrayWithSize[3] = 4;
  arrayWithSize[4] = 5;

  // array iteration
  cout << "\nArray Iteration " << endl;
  for(int i = 0; i < 5; i++)
  {
    cout << arrayWithSize[i] << endl;
  }

  // Array iteration For-loop

  // Array iteration using pointers
  


  // 2D Array
  cout << "\n2D Array " << endl;

  int numberGrid[3][2] = 
  {
    // This array is 3 by 2
    {1, 2}, // To access first element numberGrid[0][0]
    {3, 4}, // To access 4 numberGrid[1][1]
    {5, 6} 
    };

  // Accessing values in 2D array
  cout << numberGrid[0][1] << endl; // Output: 2
  cout << numberGrid[1][1] << endl; // Output: 4
  cout << numberGrid[2][0] << endl; // Output: 5 

  // Iterating a 2D array
  cout << "\nIterating 2D Array" << endl;
  for(int i = 0; i < 3; i++)
  {
    for (int j=0; j<2; j++)
    {
      cout << numberGrid[i][j];
    }
    cout << endl;
  }





  return 0;
}