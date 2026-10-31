#include <iostream>
#include <vector>

// .shrink_to_fit() - member function that request vector to shrink capacity to match its length
// it a non- binding - just a request not guarantee

template <typename T>
void arrayInfo(const std::vector<T>& array){
    std::cout << "Size:     " << array.size() << "\n";
    std::cout << "Capacity: " << array.capacity() << "\n";
    std::cout << "\n";
}

int main(){

    std::vector<int> arrayOne;

    arrayOne.reserve(10);

    arrayOne.push_back(1);
    arrayOne.push_back(2);
    arrayOne.push_back(3);

    arrayInfo(arrayOne);            // size 3 capacity 10
                                    // unused capacity 7

    arrayOne.shrink_to_fit();

    arrayInfo(arrayOne);            // size 3 capacity 3
                                    // unused capacity 0


    return 0;
}