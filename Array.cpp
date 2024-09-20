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

  // array iteration with for-loop
  cout << "\nArray Iteration " << endl;
  for(int i = 0; i < 5; i++)
  {
    cout << arrayWithSize[i] << endl;
  }

  // Array iteration For each-loop


  // Heap memory array (heap allocated array)


  // With this array the size does not need to be specified at compile time. Notice how I am able to compile the size variable and then use that for my heapArray. You wont be able
  // to do this using a normal stack array. There is an exception and that is that I can do this using a stack array since of my compiler, but c++ original does not let you do this.
  int size = 5;
  int* heapArray = new int[size];
  
  delete[] heapArray; // Must delete after use to collect unused data and free up heap memory.


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