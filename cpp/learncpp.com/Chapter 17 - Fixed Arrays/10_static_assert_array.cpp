#include <iostream>
#include <array>

template <typename T, std::size_t N>
void printArrayOne(const std::array<T, N>& array){
    std::cout << array[10] << "\n";                     // no bound checking
}

// alternative solution - std::get<index>

template <typename T, std::size_t N>            
void printArrayTwo(const std::array<T, N>& array){
    std::cout << std::get<10>(array);
}

// alternative solution - static_assert (N > index)

template <typename T, std::size_t N>
void printArrayThree(const std::array<T, N>& array){
    static_assert (N > 10);
    std::cout << array[10];
}

int main(){

    std::array arrayOne {1, 2, 3, 4 , 5, 6};

    printArrayOne(arrayOne);                            // junk
    printArrayTwo(arrayOne);                            // compile-time error
    printArrayThree(arrayOne);                          // compile-time erorr


    return 0;
}