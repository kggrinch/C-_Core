#include <iostream>

int main()
{
  // Conditional statments

  // Some operators:
  // >= : greater than or equal to
  // <= : less than or equal to
  // == : equal to
  // && : and (both have to be true)
  // || : or (one has to be true)
  // !  : not
  // != : not equal to
  

  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  if(age > 21) 
  {
    std::cout << "Welcome in" << std::endl;
  }
  else if(age == 21)
  {
    std::cout << "welcome in" << std::endl;
  }
  else
  {
    std::cout << "You are not old enough" << std::endl;
  }


  // Another example
  bool isMale = true;
  bool isTall = true;

  if(isMale && isTall)
  {
    std::cout << "You are a tall male";
  }
  else if (isMale && !isTall)
  {
    std::cout << "You are a not tall male";
  }
  else if (!isMale && isTall)
  {
    std::cout << "You are a tall female";
  }
  else
  {
    std::cout << "You are not a tall female";
  }

return 0;
}