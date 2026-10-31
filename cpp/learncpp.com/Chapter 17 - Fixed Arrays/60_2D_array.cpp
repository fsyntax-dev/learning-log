#include <iostream>
#include <array>

template<typename T, std::size_t Row, std::size_t Col>
void printArray(const std::array<std::array<T, Col>, Row>& array){
    for(const auto& row : array){
        for(const auto& element : row){
            std::cout << element << "\t";
        }
        std::cout << "\n";
    }
} 

int main(){

    std::array<std::array<int, 5>, 3> array {{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    }};

    printArray(array);


    return 0;
}