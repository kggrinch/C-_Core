#include <iostream>

// Super class
class Vehicle
{
  public:
      void drive()
      {
        std::cout << "This vehicle is driving" << std::endl;
      }
      void stop()
      {
        std::cout << "This vehicle is stopped" << std::endl;
      }
      void makeNoise()
      {
        std::cout << "Brghhh!" << std::endl;
      }
};

// sub class inherits from Vehicle class
class Sedan : public Vehicle
{
  public:

  // Sedans original function
  void speed()
  {
    std::cout << "This sedan is speeding" << std::endl;
  }

  // Overriding makeNoise function
  void makeNoise()
  {
    std::cout << "Vrooom!" << std::endl;;
  }
};


int main()
{
  Vehicle vehicle;
  vehicle.drive();

  Sedan sedan;
  sedan.drive();
  sedan.speed();

  // Example of overriden function
  vehicle.makeNoise();
  sedan.makeNoise();

  return 0;
}