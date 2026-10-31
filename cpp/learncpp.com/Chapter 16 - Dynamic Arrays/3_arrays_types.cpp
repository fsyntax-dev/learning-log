#include <iostream>
#include <array>
#include <vector>

// array - container data type that store a sequence of value
// 3 types of array
//      1. C- Style     - fixed width    
//      2. std::array   - fixed width but safer     - fixed width array
//      3. std::vector  - dynamic - can grow/shrink - dynamic array              


int main(){

    // C-Style
    int arrA[5] {1,2,3,4,5};

    // std::array
    std::array<int, 5> arrB {1,2,3,4,5};

    // std::vector
    std::vector<int> arrC {1,2,3,4,5};
    arrC.push_back(6);


    return 0;
}