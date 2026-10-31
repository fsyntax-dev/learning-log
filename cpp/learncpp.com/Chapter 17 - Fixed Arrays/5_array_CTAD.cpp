#include <iostream>
#include <array>

int main(){

    constexpr std::array arrayOne {1, 2, 3, 4, 5};      // deduce as int and length 5
    constexpr std::array arrayTwo {1.1, 1.2, 1.3, 1.4}; // deduce as double and length 4

    // best practice - depend on CTAD

    return 0;
}