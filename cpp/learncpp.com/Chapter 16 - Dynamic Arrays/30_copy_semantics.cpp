#include <iostream>
#include <vector>

// copy semantics - assign or pass object, a copy of its content is made

std::vector<int> makeVector() {
    std::vector<int> vector {1, 2, 3, 4, 5};
    return vector;                              // return a copy
}

int main(){

    std::vector<int> myVector {makeVector()};   // makeVector() return a copy of entire vector

    std::cout << "Size: " << myVector.size() << "\n";

    return 0;
}