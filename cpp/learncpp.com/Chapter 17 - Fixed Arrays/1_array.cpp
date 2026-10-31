#include <iostream>
#include <array>    // for std::array
#include <vector>   // for std::vector

// tradeoffs of dynamic array
//      less performance
//      only support constexpr in limited context

// best practice
//      std::array  - constexpr array
//      std::vector - non-constexpr array

// std::array has two template arguments
//      type
//      array length
//      std::array<type, array_length>;

int main(){

    std::array<int, 5> array{};

    std::vector<int> vector(5);  


    return 0;
}