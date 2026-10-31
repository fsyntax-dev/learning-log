#include <iostream>
#include <array>

// this template of array
/*
    template <typename T, std::size_t N>    // N is non_type template paramter
    struct array;
*/

// length and index of std::array have type std::size_t


int main(){

    constexpr std::array arrayOne {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Length: " << arrayOne.size() << "\n";
    std::cout << "Length: " << std::size(arrayOne) << "\n";

    return 0;
}