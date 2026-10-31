#include <iostream>
#include <vector>

template <typename T>
void printReverse(const std::vector<T>& array){
    for(int index {static_cast<int>(array.size()) -  1}; index >= 0; --index){  // convert to signed int
        std::cout << array[index] << " ";
    }
}

int main(){

    std::vector<int> array {4, 6, 7, 3, 8, 2, 1, 9};

    printReverse(array);

    return 0;
}