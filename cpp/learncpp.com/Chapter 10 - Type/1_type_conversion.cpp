#include <iostream>

// type conversion - convert data type to another type

// implicit conversion - automatic
//      1. Numeric Promotion
//      2. Floating Point Promotion
//      3. Numeric Conversion

// explicit conversion - manual
//      1. Function Casting 
//          int(variable)
//      2. static_cast<data_type>
//          static_cast<int>(variable)


int main(){

    int valueA {5}; 

    double valueB = valueA;         // automatic
    double valueC = int(valueA);    // function casting
    static_cast<int>(valueA);       // static casting

    return 0;
}