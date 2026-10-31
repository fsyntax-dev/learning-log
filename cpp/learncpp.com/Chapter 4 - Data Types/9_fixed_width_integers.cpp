#include <iostream>
#include <cstdint>
//fixed width integer - integer with fixed memory size
/*
int8_t  - 1 byte
int16_t - 2 byte     
int32_t - 4 byte
int64_t - 8 byte

the range is the as learn on signed and unsigned

for unsigned just use "u" at the front

uint8_t

*/
int main(){

    int8_t  valueA {65};

    int16_t valueB {};
    int32_t valueC {};
    int64_t valueD {};

    std::cout << sizeof(valueA) << "\n";
    std::cout << sizeof(valueB) << "\n";
    std::cout << sizeof(valueC) << "\n";
    std::cout << sizeof(valueD) << "\n";


    std::cout << valueA << "\n";                    // int8_t didn't print value but print char
    std::cout << static_cast<int>(valueA) << "\n";            

    return 0;
}