#include <iostream>

// float point
//      1. float
//      2. double
//      3. long double

// boolean
//      1. bool

// integer
//      1. short int
//      2. int
//      3. long int
//      4. long long int

// null pointer
//      1. std::nullptr_t 
//                     _t means "type"


int main(){

    short int valueA{15000};
    int valueB{1123456789};

    float valueC{4.618};
    double valueD{123.456789};

    std::cout << valueA << "\n";
    std::cout << valueB << "\n";
    std::cout << valueC << "\n";
    std::cout << valueD << "\n";

    return 0;
}