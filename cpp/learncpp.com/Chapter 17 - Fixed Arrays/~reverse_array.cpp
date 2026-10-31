#include <iostream>
#include <array>

template <typename T, std::size_t N>
void printArray(const std::array<T,N>& array){
    for(const auto& element : array){
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main() {
    std::array<int, 10> array {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::array<int, 10> arrayRev  {};

    std::size_t len {array.size()};

    
    printArray(array);
    std::cout << "\n";

    for(len; len > 0; --len){
        std::cout << "Inserted: " << array[len - 1] << "\n";
        std::size_t i {array.size() - len};
        arrayRev[i] = array[len - 1];
    }

    std::cout << "\n";
    printArray(arrayRev);

    return 0;
}
