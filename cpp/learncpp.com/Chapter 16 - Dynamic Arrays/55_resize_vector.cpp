#include <iostream>
#include <vector>

// existing elements in arra are preserved
// after resizing - existing element and new element which default to zero

template <typename T>
void printArray(const std::vector<T> array){
    for(T element : array){
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main(){

    std::vector <int> array {1, 2, 3, 4, 5};
    std::cout << array.size() << "\n";

    printArray(array);

    array.resize(10);
    std::cout << array.size() << "\n";

    printArray(array);                          // output: 1 2 3 4 5 0 0 0 0 0


    return 0;
}