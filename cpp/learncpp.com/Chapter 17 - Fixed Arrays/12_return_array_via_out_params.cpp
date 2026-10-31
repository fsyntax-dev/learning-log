#include <iostream>
#include <array>

// if return by value is too expensive
// use out-parameter instead


template <typename T, std::size_t N>
void inputArray(std::array<T, N>& array){
    std::size_t index{0};
    while (index < N){
        std::cout << "Enter value " << index << ": ";
        std::cin >> array[index];                       // element at index
        ++index;                       
    }
}

template<typename T, std::size_t N>
void printArray(const std::array<T, N>& array){
    for(auto element : array){
        std::cout << element << "\t";
    }
}

int main(){

    std::array<int, 5> array{};

    inputArray(array);

    printArray(array);


    return 0;
}