#include <iostream>
#include <vector>

// move semantics - std::move - transfer from one object to another without copying data

std::vector<int> makeVector() {
    std::vector<int> vector {1, 2, 3, 4, 5};
    return vector;                              
}

int main(){

    std::vector<int> myVector {std::move(makeVector())};  
    std::cout << "Size: " << myVector.size() << "\n";

    return 0;
}