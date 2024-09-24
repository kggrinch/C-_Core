#include <iostream>


// Iterative Example function
// I started at 1 since you cant take step 0 and I added an extra steps length since without it you will only walk to step 4.
// If I started at 0 till steps it will equal 0 - 4
// If I started at 1 till steps+1 it will equal 1 - 5
void walkIterative(int steps)
{
    for(int i = 1; i < steps+1; i++)
    {
        std::cout << "You took step: " << i << '\n';
    }
};

void walkRecursive(int steps)
{
    if (steps > 0)
    {
        std::cout << "You took step: " << steps << '\n';
        walkRecursive(steps-1);
    }
};

int factorialIterative(int x)
{
    int result = 1;
    for(int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
};


int factorialRecursive(int x)
{
    int result = 0;
    if(x <= 1)
    {
        return 1;
    }
    else
    {
        result = x * factorialRecursive(x-1);
    }
    return result;
};

int main()
{
    // Recursion - A programming technique where a function calls itself from within.
    //             Breaks complex concept into a repeatable single steps
    //             Everything you can do recursively you can do iterative and vice versa

    // (Iterative vs Recursive)

    // Advantages - Less code, is cleaner, and easier to read.
    //              Useful for sorting and searching algorithms and for data structures such as trees and graphs

    // Disadvantages - uses more memory and is slower


    // Iterative example of a walk function
    walkIterative(5); 

    // Recursive example of a walk function
    std::cout << '\n';
    walkRecursive(5);


    // Iterative factorial function
    int y = factorialIterative(5);
    std::cout <<'\n'<< y << '\n';


    // Recursive factorial function
    int x = factorialRecursive(5);
    std::cout <<'\n'<< x << '\n';


    return 0;
}
