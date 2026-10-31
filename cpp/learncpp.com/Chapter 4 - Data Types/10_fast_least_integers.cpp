#include <iostream>
#include <cstdint>

// Downside of using Fixed Width Integer
//      1. Not guaranteed on other system (exotic)
//      2. Inneficient on the CPU (use int32_t but CPU 64-bit )

// C++ provides 2 alt of integers that guaranteed to exist

//      int_fastN_t     - provide fastest s/u integer with least N bits
//                        for fast performance

//      int_leastN_t    - provide smallest s/u integer with least N bits
//                        to save memory

int main(){

    int_fast16_t valueA{};
    int_least16_t valueB{};

    std::cout << sizeof(valueA) * 8 << "\n";
    std::cout << sizeof(valueB) * 8 << "\n";


    return 0;
} 