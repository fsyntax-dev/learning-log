#include <iostream>
#include <array>

// alias for 2D array definition - fixed template argument
using Array2D35 = std::array<std::array<int, 5>, 3>;

template <typename T, std::size_t R, std::size_t C>
void printArray(const std::array<std::array<T, C>, R> array){
    for(const auto& row : array){
        for(const auto& element : row){
            std::cout << element << "\t";
        }
        std::cout << "\n";
    }
} 

int main(){

    Array2D35 array{{
        {1, 2, 3, 4, 5},
        {5, 6, 7, 8, 9},
        {11, 12, 13, 14, 15}
    }};
    
    printArray(array);
    

    return 0;
}