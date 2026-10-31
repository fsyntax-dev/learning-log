#include <iostream>
#include <array>

int main(){

    std::array<int, 5> arrayOne = {1, 2, 3, 4, 5};  // copy-list init
    std::array<int, 5> arrayTwo {1, 2, 3, 4, 5};    // list init        - preferred

    std::array<int, 5> arrayThree;                  // member default init
    std::array<int, 5> arrayFour{};                 // member value init    - preferred

    std::array<int, 5> arrayFive{1, 2, 3, 4, 5, 6}; // compile error - exceed 
    std::array<int, 5> arraySix{1, 2}               // ok

    return 0;
}