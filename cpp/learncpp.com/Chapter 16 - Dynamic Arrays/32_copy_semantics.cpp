#include <iostream>
#include <vector>

// copy semantics - make copy of the objects

int main(){

    std::vector<int> arrayOne {1, 2, 3, 4, 5};
    std::vector<int> arrayTwo {arrayOne};       // invokes copy semantics

    return 0;
}