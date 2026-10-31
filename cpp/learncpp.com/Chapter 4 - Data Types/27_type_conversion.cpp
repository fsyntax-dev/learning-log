#include <iostream>
#include <iomanip>

// type conversion - convert data type to another type
// implicit conversion - automatic
// explicit conversion - manual
//      1. Function Casting 
//      2. static_cast<data_type>



int main(){

    double valueA(10.15);
    std::cout << valueA << "\n";

    // automatic
    int valueB = valueA;
    std::cout << valueB << "\n";

    // function casting
    int valueC = int(valueA);
    std::cout << valueC << "\n";

    // static cast
    std::cout << static_cast<int>(valueA) << "\n";

    return 0;
}