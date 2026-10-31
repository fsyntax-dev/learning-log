#include <iostream>
#include <vector>
#include <array>

// std::vector (dynamic array) - can't use constexpr
// std::array (fixed width array) - can use constexpr

int main(){

    constexpr std::array<int, 5> arrA {1,2,3,4,5};


    return 0;
}