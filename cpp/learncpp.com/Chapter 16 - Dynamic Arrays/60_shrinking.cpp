#include <iostream>
#include <vector>

// shrinking - resize to smaller length - only decrease length not capacity

template <typename T>
void arrayInfo(const std::vector<T>& array){
    std::cout << "Capacity: " << array.capacity() << "\n";
    std::cout << "Size    : " << array.size() << "\n";
    std::cout << "\n";
}

int main(){

    std::vector<int> array;

    array.reserve(5);

    arrayInfo(array);

    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);

    arrayInfo(array);

    array.resize(3);

    arrayInfo(array);

    return 0;
}