#include <iostream>

int main()
{
  // Loops

  // While Loop
  std::cout << "While Loops " << std::endl;

  int whileIndex = 1;
  while(whileIndex <= 5)
  {
    std::cout << whileIndex << std::endl;
    whileIndex++;
  }


  // Do-While Loop
  std::cout << "\nDo-While Loop " << std::endl;

  int doWhileIndex = 1;
  do
  {
    std::cout << doWhileIndex << std::endl;
    doWhileIndex++;
  }
  while(doWhileIndex <= 5);


  // For-Loop
  std::cout << "\nFor-Loop " << std::endl;

  for(int i = 1; i <= 5; i++)
  {
    std::cout << i << std::endl;
  }

  // Nested For-loop
  int index = 1;

  std::cout << "\nNested For-Loop " << std::endl;
  for(int i = 0; i <= 5; i++)
  {
    for(int j = 0; j <= 3; j++)
    {
      std::cout << i << ": " << j << " index: " << index << std::endl;
      index++;
    }
  }


return 0;
}