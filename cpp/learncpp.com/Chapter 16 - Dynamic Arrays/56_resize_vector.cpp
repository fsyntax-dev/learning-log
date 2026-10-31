#include <iostream>
#include <vector>

// vector can be resize smaller
// the elements will be truncated

template <typename T>
void printArray(const std::vector<T>& array){
    std::cout << "Size: " << array.size() <<"\n";
    for(T element : array){
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main(){

    std::vector<int> array {1, 2, 3, 4, 5};
    
    printArray(array);

    array.resize(3);

    printArray(array);

    return 0;
}