#include <iostream>

using namespace std;

// Example of struct. Can be used as data type.
struct student 
{
    string name; // name is declared but not initalized therefore needs to be manually set
    double gpa;  // Same thing with gpa, needs to be manually set
    bool enrolled =  true; //  Enrolled has a default value set therefore does not need to be manually set

}; 

// Declaration of function. This is used to make the actual function under the main function.
void printStudent(student s);


int main()
{
    // Structs - A structure that group related variables under one name
    //           structs can contain many different data types (Strings, int, double, bool, ect.)
    //           variables in a struct are known as "members"
    //           members can be accessed with . (Class Member Access Operator)
    //           Structs are similar to encapsulation in Java in that you can group multiple related data types into one, but in c++ datatype by default are public while in java
    //           they are private.   

    // Assigning stuct attributes manually
    student student1;
    student1.name = "Bob";
    student1.gpa = 3.2;
    // student1.enrolled = true; // Does not need to me manually set unless you want to change it

    // Displaying student1 attributes
    cout <<"student1.name: " << student1.name << endl;
    cout <<"student1.gpa: " << student1.gpa << endl;
    cout <<"student1.enrolled: " << student1.enrolled << endl; // Reminder 1 = true / 0 = false

    // Could also send structs as arguments into functions
    printStudent(student1);

    return 0;
}

// Function to print student attributes
void printStudent(student s)
{
    cout <<"s.name: " << s.name << endl;
    cout <<"s.gpa: " << s.gpa << endl;
    cout <<"s.enrolled: " << s.enrolled << endl;
}