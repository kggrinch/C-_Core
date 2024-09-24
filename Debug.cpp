#include <iostream>


int factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
}


int main()
{

    // Debug in c++ - To start debugging you need to creating a breakpoint at a line of code.
    //                click f9 to create a break point or click on the side bar



    // Example debugging recursive method
    int x = factorial(5);
    std::cout << x << '\n';



    return 0;
}