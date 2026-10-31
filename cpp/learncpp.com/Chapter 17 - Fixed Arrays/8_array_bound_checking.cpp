#include <iostream>
#include <array>

// std::get() for compile-time bounds checking

int main(){

    constexpr std::array array {1 ,2, 3, 4 ,5, 6, 7, 8, 9, 10};

    std::cout << array[11] << "\n";             // no bound checking - undefined behaviour - junk
    std::cout << array.at(11) << "\n";          // error at run-time
    std::cout << std::get<11>(array) << "\n";   // error at compile-time

    return 0;
}