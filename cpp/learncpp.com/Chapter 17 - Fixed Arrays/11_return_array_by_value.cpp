#include <iostream>
#include <array>
#include <limits>

// std::array isn't moveable - so return it will make of the array
// std::vector is moveable can return return b vaue without expensive copy

// return an array
//      if the array isn't huge
//      the element is cheap to copy/move
//      the code isn't used for performance sensitive context

template <typename T, std::size_t N>
std::array<T, N> inputArray(){
    std::array<T, N> array{};
    std::size_t index {0};

    while (index < N){
        std::cout << "Enter value " << index  << ": ";
        std::cin >> array[index];

        ++index;
    }
    return array;
}

int main(){

    std::array<char, 5> array {inputArray<char, 5>()};

    std::cout << array[2] << "\n";


    return 0;
}