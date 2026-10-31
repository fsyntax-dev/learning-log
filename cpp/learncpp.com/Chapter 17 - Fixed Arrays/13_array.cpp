#include <iostream>
#include <array>

template <typename T, std::size_t N>
void printArray(const std::array<T, N>& array){
    std::cout << "The array: ";
    for(const auto& element : array){
        std::cout << element << " ";
    }
    std::cout << " has length " << array.size();
}

int main(){

    constexpr std::array arrayOne {1, 4, 9, 16};

    printArray(arrayOne);

    return 0;
}