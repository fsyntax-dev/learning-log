#include <iostream>
#include <array>

template <typename T, std::size_t C, std::size_t R>
using Array2D = std::array<std::array<T, C>, R>;

template <typename T, std::size_t C, std::size_t R>
void printArray(const Array2D<T, C, R>& array){
    for(const auto& row : array){
        for(const auto& element : row){
            std::cout << element << "\t";
        }
        std::cout << "\n";
    }
}

template <typename T, std::size_t C, std::size_t R>
void printArraySize(const Array2D<T, C, R>& array){
    std::cout << "Rows: " << array.size() << "\t";      // length of first dimension
    std::cout << "Cols: " << array[0].size() << "\n";   // length of second dimension - undefined behaviour if row is 0
                                                        //                            - if row has 0, then col is out of bound
}

int main(){

    Array2D<int, 5, 3> array{{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    }};
    printArray(array);
    printArraySize(array);


    Array2D<int, 0, 0> arrayTwo{{}};
    printArray(arrayTwo);
    printArraySize(arrayTwo);

    




    return 0;
}