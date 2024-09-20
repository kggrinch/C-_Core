#include <iostream>

using namespace std;

int main()
{
    // Memory Address - A location in memory where data ia stored.
    //                  A memory address can be accessed with & (address-of operator)

    string name = "name";
    int age = 21;
    bool student = true;

    // To access each variables address we can use &
    cout <<"&name: "<< &name << endl;
    cout <<"&age: " << &age << endl;
    cout <<"&student: " << &student << endl;

    // Memory usage
    // char = 1 byte
    // String = the amount of chars in the string plus one extra for the null terminator which is used to mark the end of the string.
    // int = 4 bytes
    // bool = 1 byte


    return 0;
}