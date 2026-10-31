#include <iostream>
#include <array>

// best practice
//      std::array - define as constexpr as possible
//      if array not constexpr consider std::vector


int main(){

    const std::array<int, 5> arrayOne {1, 2, 3, 4, 5};
    // const array treat the elements as const - the whole array is const

    constexpr std::array<int, 5> arrayTwo {1, 2, 3, 4, 5};
    // this is why we used array, because it support constexpr


    return 0;
}

