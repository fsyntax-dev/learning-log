#include <iostream>

// integral promotion - convert smaller integer types into a larger type
//                    - from small data type to larger data type
//                    - char/short to int

// why? bcs cpu handle int better, without it will give weird result 

// 16 bit + 32 bit = undefined behaviour
// 32 bit + 32 bit = safe result

// data type that promoted to int
//  1. signed char
//  2. signed short
//  3. bool

int main(){

    // char to int
    char c  {100};              // char is 8 bit
    int i   {20000};            // int is 32 bit

    int result{ c + i };        // c is PROMOTED to int before addition

    std::cout << result << "\t";

    // bool to int
    bool valueA{true};          
    int total{ valueA + i };    

    std::cout << total << "\t";

    // short to int
    unsigned short valueB{65000};
    int value {valueB + i};

    std::cout << value << "\t";


    return 0;
}