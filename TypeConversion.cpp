#include <iostream>

int main()
{

    // Type Conversion - converting a value of one data type to another. 
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int)


    double a = 3.14;
    std::cout << a << '\n';

    // Implicit example
    int x = 3.14; // This automaticaly turns the 3.14 into a integer
    std::cout << x << '\n';

    // Explicit example
    double y = (int)3.14; // This turns the 3.14 into an integer than into a double manually
    std::cout << y << '\n';

    // Another example with char (Implicit)
    char character = 100; // This will implicating cast the number 100 as a character using ASCII Table and 100 in the ASCII table is the char d.
    std::cout << character << '\n';

    // Another example with char (Explicit)
    std::cout << (char)100 << '\n'; // This will explicitly cast the number 100 as a character again as in the previous example.

    // Example of why this is useful
    int correct = 8;
    int total = 10;
    double score = correct/(double)total * 100; // We need to cast the total or make the total into a double since it will give us a integer answer which is 0 as an integer

    std::cout << score << '%' << '\n';



    return 0;
}