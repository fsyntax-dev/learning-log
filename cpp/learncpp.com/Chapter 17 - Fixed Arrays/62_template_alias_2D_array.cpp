#include <iostream>
#include <array>

// alias with template for 2D array - flexible 
template <typename T, std::size_t C, std::size_t R>
using Array2D = std::array<std::array<T, C>, R>;

template <typename T, std::size_t C, std::size_t R>
void printArray(const std::array<std::array<T, C>, R>& array){
    for(const auto& row : array){
        for(const auto& element : row){
            std::cout << element << "\t";
        }
        std::cout << "\n";
    }
}

int main(){

    Array2D<int, 3, 5> array{{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    }};

    printArray(array);


    return 0;
}
