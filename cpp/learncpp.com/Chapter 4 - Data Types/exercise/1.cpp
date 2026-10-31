#include <iostream>

// 1 byte = 8 bits

int main(){

    float valueA{};                         // 4 bytes           
    double valueB{};                        // 8 bytes
    long double valueC{};                   // 16 bytes

    std::cout << sizeof(valueA) << "\t";
    std::cout << sizeof(valueB) << "\t";
    std::cout << sizeof(valueC) << "\t";

    return 0;
}