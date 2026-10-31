#include <iostream>
#include <vector>

// array capacity - how many elements in vector has space for (allocated storage)
//                - and size/length is how many many elements has being used (inserted)

// Eggs carton can hold 12 eggs (capacity) only 6 are filled (size)

// length   - number of elements currently in use
// capacity - number of elements that have storage allocation


template <typename T>
void arrayInfo(const std::vector<T>& array){
    std::cout << "Capacity: " << array.capacity() << "\n";
    std::cout << "Size    : " << array.size() << "\n";
}

int main(){

    std::vector<int> array {1, 2, 3, 4, 5};     // initialize array with 5 elements 
                                                // 5 capacity were allocated and used
    arrayInfo(array);

    return 0;
}