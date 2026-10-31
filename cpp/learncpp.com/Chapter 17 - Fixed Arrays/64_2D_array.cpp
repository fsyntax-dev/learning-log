#include <iostream>
#include <array>

template <typename T, std::size_t C, std::size_t R>
using Array2D = std::array<std::array<T, C>, R>;

template <typename T, std::size_t C, std::size_t R>
void printArray(const std::array<std::array<T, C>, R>& array){
    if(C == 0 || R == 0){
        std::cout << 0 << "\n";
        return;
    }
    else{
        for(const auto& row : array){
            for(const auto& element : row){
                std::cout << element << "\t";
            }
            std::cout << "\n";
        }
    }
}

namespace Size{
    
    template <typename T, std::size_t C, std::size_t R>
    constexpr auto rowsLength(const Array2D<T, C, R>& array){
        return R;
    }
    template<typename T, std::size_t C, std::size_t R>
    constexpr auto colsLength(const Array2D<T, C, R>& array){
        return C;
    }
    
    template <typename T, std::size_t C, std::size_t R>
    auto printArraySize(const Array2D<T, C, R>& array){
        std::cout << "Rows: " << rowsLength(array) << "\t";
        std::cout << "Cols: " << colsLength(array) << "\n";
        std::cout << "\n";
    }
    
}

int main(){

    Array2D<int, 5, 3> arrayOne {{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    }};

    printArray(arrayOne);
    Size::printArraySize(arrayOne);

    Array2D<int, 0, 0> arrayTwo {{}};
    printArray(arrayTwo);
    Size::printArraySize(arrayTwo);

    Array2D<int, 5, 3> arrayThree {{}};
    printArray(arrayThree);
    Size::printArraySize(arrayThree);

    return 0;
}