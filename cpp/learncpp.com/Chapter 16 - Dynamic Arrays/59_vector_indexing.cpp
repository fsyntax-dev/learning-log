#include <iostream>
#include <vector>

// array indexing based on length not capacity

int main(){

    std::vector<int> array;

    array.reserve(10);

    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);

    std::cout << "Length  : " << array.size() << "\n";
    std::cout << "Capacity: " << array.capacity() << "\n";

    std::cout << array[6] << "\n";                          // junk
    std::cout << array.at(6) << "\n";                       // execption - terminate cause out of bound

    return 0;
}