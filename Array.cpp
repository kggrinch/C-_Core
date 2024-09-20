#include <iostream>

using namespace std;

// Array function to calculate total value in array
int getTotal(int array[], int size)
{
    int total = 0;
    for(int i = 0; i < size; i++)
    {
      total += array[i];
    }
    return total;
};

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
  cout << "\nArray Iteration (for each-loop)" << endl;
  for(auto each : arrayWithSize)
  {
    cout << each << endl;
  }

  // Passing an array to a function (gets total of)
  cout << "\nPassing array to function" << endl;

  // sizeof is a built in function that determines the size of an array however it gives the size in byte form, so if size is 5 elements it would give 20 because
  // 1 int byte is 4 bytes and 5 elements means 5 * 4 bytes = 20. To get the actual size of elements in the array you can do:
  // sizeof(arrayWithSize) / sizeof(arrayWithSize[0]) which is 20 / 4 = 5.
  int sizeOfArray = sizeof(arrayWithSize) / sizeof(arrayWithSize[0]); 
  cout << sizeOfArray << '\n';

  int total = getTotal(arrayWithSize, sizeOfArray); // You have to send the size to the function because size gets lost in the function since the array decays to a pointer
  cout << total << '\n';



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